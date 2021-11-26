import torch
import torch.nn as nn
import torch.nn.functional as F

from utils.general import get_logger
from utils.test_env import EnvTest
from q1_schedule import LinearExploration, LinearSchedule
from q2_1_linear_torch import Linear


from configs.q2_2_nature import config


class NatureQN(Linear):
    """
    Implementing DeepMind's Nature paper. Here are the relevant urls.
    https://storage.googleapis.com/deepmind-data/assets/papers/DeepMindNature14236Paper.pdf

    Model configuration can be found in the Methods section of the above paper.
    """

    def initialize_models(self):
        """Creates the 2 separate networks (Q network and Target network). The input
        to these models will be an img_height * img_width image
        with channels = n_channels * self.config.state_history

        1. Set self.q_network to be a model with num_actions as the output size
        2. Set self.target_network to be the same configuration self.q_network but initialized from scratch
        3. What is the input size of the model?

        To simplify, we specify the paddings as:
            (stride - 1) * img_height - stride + filter_size) // 2

        Hints:
            1. Simply setting self.target_network = self.q_network is incorrect.
            2. The following functions might be useful
                - nn.Sequential
                - nn.Conv2d
                - nn.ReLU
                - nn.Flatten
                - nn.Linear
        """
        state_shape = list(self.env.observation_space.shape)
        img_height, img_width, n_channels = state_shape
        num_actions = self.env.action_space.n

        ##############################################################
        ################ YOUR CODE HERE - 25-30 lines lines ################
        self.q_network = nn.Sequential(
            nn.Conv2d(n_channels * self.config.state_history, 32, kernel_size=8, stride=4, padding= ((4-1) * img_height - 4 + 8) // 2),
            nn.ReLU(),
            nn.Conv2d(32, 64, kernel_size=4, stride=2, padding= ((2-1) * img_height - 2 + 4) // 2),
            nn.ReLU(),
            nn.Conv2d(64, 64, kernel_size=3, stride=1, padding= ((1-1) * img_height - 1 + 3) // 2),
            nn.ReLU(),
            nn.Flatten(),
            nn.Linear(img_height*img_width*64, 512),
            nn.ReLU(),
            nn.Linear(512, num_actions)
        )
        import copy
        self.target_network = copy.deepcopy(self.q_network)
        ##############################################################
        ######################## END YOUR CODE #######################

    def get_q_values(self, state, network):
        """
        Returns Q values for all actions

        Args:
            state: (torch tensor)
                shape = (batch_size, img height, img width, nchannels x config.state_history)
            network: (str)
                The name of the network, either "q_network" or "target_network"

        Returns:
            out: (torch tensor) of shape = (batch_size, num_actions)

        Hint:
            1. What are the input shapes to the network as compared to the "state" argument?
            2. You can forward a tensor through a network by simply calling it (i.e. network(tensor))
        """
        out = None
        ##############################################################
        ################ YOUR CODE HERE - 4-5 lines lines ################
        state_nncompatible = torch.transpose(torch.transpose(state,1,3),2,3) 
        # (batch_size, img height, img width, nchannels x config.state_history) -> (batch_size, nchannels x config.state_history, img_height, img_width)
        if network == 'q_network':
            out = self.q_network(state_nncompatible)
        elif network == 'target_network':
            out = self.target_network(state_nncompatible)
        ##############################################################
        ######################## END YOUR CODE #######################
        return out


"""
Use deep Q network for test environment.
"""
if __name__ == '__main__':
    env = EnvTest((8, 8, 6))

    # exploration strategy
    exp_schedule = LinearExploration(env, config.eps_begin,
            config.eps_end, config.eps_nsteps)

    # learning rate schedule
    lr_schedule  = LinearSchedule(config.lr_begin, config.lr_end,
            config.lr_nsteps)

    # train model
    model = NatureQN(env, config)
    import time # new
    tic = time.time() # new
    model.run(exp_schedule, lr_schedule)
    toc = time.time() # new
    print(f"Nature dqn Training time: {toc-tic}") # new


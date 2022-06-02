/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
extern void execute_68(char*, char *);
extern void execute_69(char*, char *);
extern void execute_70(char*, char *);
extern void execute_384(char*, char *);
extern void execute_385(char*, char *);
extern void execute_386(char*, char *);
extern void execute_3(char*, char *);
extern void execute_378(char*, char *);
extern void execute_379(char*, char *);
extern void execute_380(char*, char *);
extern void execute_381(char*, char *);
extern void execute_382(char*, char *);
extern void execute_383(char*, char *);
extern void execute_5(char*, char *);
extern void execute_75(char*, char *);
extern void execute_76(char*, char *);
extern void execute_77(char*, char *);
extern void vlog_const_rhs_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_131(char*, char *);
extern void execute_132(char*, char *);
extern void execute_133(char*, char *);
extern void execute_134(char*, char *);
extern void execute_135(char*, char *);
extern void execute_136(char*, char *);
extern void execute_137(char*, char *);
extern void execute_138(char*, char *);
extern void execute_139(char*, char *);
extern void execute_140(char*, char *);
extern void execute_141(char*, char *);
extern void execute_17(char*, char *);
extern void execute_91(char*, char *);
extern void execute_92(char*, char *);
extern void execute_93(char*, char *);
extern void execute_94(char*, char *);
extern void execute_90(char*, char *);
extern void execute_110(char*, char *);
extern void execute_111(char*, char *);
extern void execute_112(char*, char *);
extern void vlog_simple_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_115(char*, char *);
extern void execute_116(char*, char *);
extern void execute_117(char*, char *);
extern void execute_118(char*, char *);
extern void execute_142(char*, char *);
extern void execute_143(char*, char *);
extern void vlog_timingcheck_execute_0(char*, char*, char*);
extern void execute_146(char*, char *);
extern void execute_31(char*, char *);
extern void execute_147(char*, char *);
extern void execute_362(char*, char *);
extern void execute_363(char*, char *);
extern void execute_364(char*, char *);
extern void execute_365(char*, char *);
extern void execute_366(char*, char *);
extern void execute_367(char*, char *);
extern void execute_368(char*, char *);
extern void execute_369(char*, char *);
extern void execute_370(char*, char *);
extern void execute_371(char*, char *);
extern void execute_372(char*, char *);
extern void execute_373(char*, char *);
extern void execute_374(char*, char *);
extern void execute_375(char*, char *);
extern void execute_376(char*, char *);
extern void execute_42(char*, char *);
extern void execute_43(char*, char *);
extern void execute_44(char*, char *);
extern void execute_45(char*, char *);
extern void execute_152(char*, char *);
extern void execute_153(char*, char *);
extern void execute_154(char*, char *);
extern void execute_155(char*, char *);
extern void execute_156(char*, char *);
extern void execute_157(char*, char *);
extern void execute_158(char*, char *);
extern void execute_159(char*, char *);
extern void execute_160(char*, char *);
extern void execute_161(char*, char *);
extern void execute_162(char*, char *);
extern void execute_163(char*, char *);
extern void execute_164(char*, char *);
extern void execute_165(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_1(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_2(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_103(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_104(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_105(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_106(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_107(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_108(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_109(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_110(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_111(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_112(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_113(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_114(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_115(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_116(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_117(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_118(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_119(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_120(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_121(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_122(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_123(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_124(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_125(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_126(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_27(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_28(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_29(char*, char *);
extern void timing_checker_condition_m_fd00e65a_67151b0a_30(char*, char *);
extern void execute_184(char*, char *);
extern void execute_189(char*, char *);
extern void execute_190(char*, char *);
extern void execute_191(char*, char *);
extern void execute_192(char*, char *);
extern void execute_72(char*, char *);
extern void execute_73(char*, char *);
extern void execute_74(char*, char *);
extern void execute_387(char*, char *);
extern void execute_388(char*, char *);
extern void execute_389(char*, char *);
extern void execute_390(char*, char *);
extern void execute_391(char*, char *);
extern void transaction_3(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_4(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_5(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_6(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_7(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_8(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_9(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_10(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_11(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_12(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_13(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_14(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_15(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_16(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_17(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_18(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_19(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_20(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_21(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_22(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_28(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_29(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_30(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_31(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_32(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_33(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_34(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_35(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_36(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_37(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_38(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_39(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_40(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_41(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_42(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_43(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_44(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_45(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_46(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_47(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_48(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_49(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_50(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_51(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_52(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_73(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_74(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_81(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_91(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_92(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_93(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_94(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_95(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_96(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_97(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_98(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_99(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_100(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_101(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_102(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_103(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_104(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_105(char*, char*, unsigned, unsigned, unsigned);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_118(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_144(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_170(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_196(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_222(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[194] = {(funcp)execute_68, (funcp)execute_69, (funcp)execute_70, (funcp)execute_384, (funcp)execute_385, (funcp)execute_386, (funcp)execute_3, (funcp)execute_378, (funcp)execute_379, (funcp)execute_380, (funcp)execute_381, (funcp)execute_382, (funcp)execute_383, (funcp)execute_5, (funcp)execute_75, (funcp)execute_76, (funcp)execute_77, (funcp)vlog_const_rhs_process_execute_0_fast_no_reg_no_agg, (funcp)execute_131, (funcp)execute_132, (funcp)execute_133, (funcp)execute_134, (funcp)execute_135, (funcp)execute_136, (funcp)execute_137, (funcp)execute_138, (funcp)execute_139, (funcp)execute_140, (funcp)execute_141, (funcp)execute_17, (funcp)execute_91, (funcp)execute_92, (funcp)execute_93, (funcp)execute_94, (funcp)execute_90, (funcp)execute_110, (funcp)execute_111, (funcp)execute_112, (funcp)vlog_simple_process_execute_0_fast_no_reg_no_agg, (funcp)execute_115, (funcp)execute_116, (funcp)execute_117, (funcp)execute_118, (funcp)execute_142, (funcp)execute_143, (funcp)vlog_timingcheck_execute_0, (funcp)execute_146, (funcp)execute_31, (funcp)execute_147, (funcp)execute_362, (funcp)execute_363, (funcp)execute_364, (funcp)execute_365, (funcp)execute_366, (funcp)execute_367, (funcp)execute_368, (funcp)execute_369, (funcp)execute_370, (funcp)execute_371, (funcp)execute_372, (funcp)execute_373, (funcp)execute_374, (funcp)execute_375, (funcp)execute_376, (funcp)execute_42, (funcp)execute_43, (funcp)execute_44, (funcp)execute_45, (funcp)execute_152, (funcp)execute_153, (funcp)execute_154, (funcp)execute_155, (funcp)execute_156, (funcp)execute_157, (funcp)execute_158, (funcp)execute_159, (funcp)execute_160, (funcp)execute_161, (funcp)execute_162, (funcp)execute_163, (funcp)execute_164, (funcp)execute_165, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_1, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_2, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_103, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_104, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_105, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_106, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_107, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_108, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_109, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_110, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_111, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_112, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_113, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_114, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_115, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_116, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_117, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_118, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_119, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_120, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_121, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_122, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_123, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_124, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_125, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_126, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_27, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_28, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_29, (funcp)timing_checker_condition_m_fd00e65a_67151b0a_30, (funcp)execute_184, (funcp)execute_189, (funcp)execute_190, (funcp)execute_191, (funcp)execute_192, (funcp)execute_72, (funcp)execute_73, (funcp)execute_74, (funcp)execute_387, (funcp)execute_388, (funcp)execute_389, (funcp)execute_390, (funcp)execute_391, (funcp)transaction_3, (funcp)transaction_4, (funcp)transaction_5, (funcp)transaction_6, (funcp)transaction_7, (funcp)transaction_8, (funcp)transaction_9, (funcp)transaction_10, (funcp)transaction_11, (funcp)transaction_12, (funcp)transaction_13, (funcp)transaction_14, (funcp)transaction_15, (funcp)transaction_16, (funcp)transaction_17, (funcp)transaction_18, (funcp)transaction_19, (funcp)transaction_20, (funcp)transaction_21, (funcp)transaction_22, (funcp)transaction_28, (funcp)transaction_29, (funcp)transaction_30, (funcp)transaction_31, (funcp)transaction_32, (funcp)transaction_33, (funcp)transaction_34, (funcp)transaction_35, (funcp)transaction_36, (funcp)transaction_37, (funcp)transaction_38, (funcp)transaction_39, (funcp)transaction_40, (funcp)transaction_41, (funcp)transaction_42, (funcp)transaction_43, (funcp)transaction_44, (funcp)transaction_45, (funcp)transaction_46, (funcp)transaction_47, (funcp)transaction_48, (funcp)transaction_49, (funcp)transaction_50, (funcp)transaction_51, (funcp)transaction_52, (funcp)transaction_73, (funcp)transaction_74, (funcp)transaction_81, (funcp)transaction_91, (funcp)transaction_92, (funcp)transaction_93, (funcp)transaction_94, (funcp)transaction_95, (funcp)transaction_96, (funcp)transaction_97, (funcp)transaction_98, (funcp)transaction_99, (funcp)transaction_100, (funcp)transaction_101, (funcp)transaction_102, (funcp)transaction_103, (funcp)transaction_104, (funcp)transaction_105, (funcp)vlog_transfunc_eventcallback, (funcp)transaction_118, (funcp)transaction_144, (funcp)transaction_170, (funcp)transaction_196, (funcp)transaction_222};
const int NumRelocateId= 194;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/test_time_synth/xsim.reloc",  (void **)funcTab, 194);

	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/test_time_synth/xsim.reloc");
}

	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net

void wrapper_func_0(char *dp)

{

}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/test_time_synth/xsim.reloc");
	wrapper_func_0(dp);

	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstatiate();

extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/test_time_synth/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/test_time_synth/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/test_time_synth/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}

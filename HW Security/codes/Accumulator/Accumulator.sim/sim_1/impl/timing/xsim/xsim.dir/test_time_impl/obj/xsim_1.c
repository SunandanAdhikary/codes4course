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
extern void execute_75(char*, char *);
extern void execute_76(char*, char *);
extern void execute_77(char*, char *);
extern void execute_382(char*, char *);
extern void execute_383(char*, char *);
extern void execute_384(char*, char *);
extern void execute_3(char*, char *);
extern void execute_376(char*, char *);
extern void execute_377(char*, char *);
extern void execute_378(char*, char *);
extern void execute_379(char*, char *);
extern void execute_380(char*, char *);
extern void execute_381(char*, char *);
extern void execute_5(char*, char *);
extern void execute_82(char*, char *);
extern void execute_83(char*, char *);
extern void execute_84(char*, char *);
extern void execute_97(char*, char *);
extern void execute_98(char*, char *);
extern void vlog_timingcheck_execute_0(char*, char*, char*);
extern void execute_101(char*, char *);
extern void execute_16(char*, char *);
extern void execute_102(char*, char *);
extern void vlog_const_rhs_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_335(char*, char *);
extern void execute_336(char*, char *);
extern void execute_337(char*, char *);
extern void execute_338(char*, char *);
extern void execute_339(char*, char *);
extern void execute_340(char*, char *);
extern void execute_341(char*, char *);
extern void execute_342(char*, char *);
extern void execute_343(char*, char *);
extern void execute_344(char*, char *);
extern void execute_345(char*, char *);
extern void execute_346(char*, char *);
extern void execute_347(char*, char *);
extern void execute_348(char*, char *);
extern void execute_349(char*, char *);
extern void execute_350(char*, char *);
extern void execute_351(char*, char *);
extern void execute_352(char*, char *);
extern void execute_353(char*, char *);
extern void execute_354(char*, char *);
extern void execute_355(char*, char *);
extern void execute_356(char*, char *);
extern void execute_357(char*, char *);
extern void execute_358(char*, char *);
extern void execute_359(char*, char *);
extern void execute_360(char*, char *);
extern void execute_361(char*, char *);
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
extern void execute_28(char*, char *);
extern void execute_108(char*, char *);
extern void execute_109(char*, char *);
extern void execute_110(char*, char *);
extern void execute_111(char*, char *);
extern void execute_107(char*, char *);
extern void execute_31(char*, char *);
extern void execute_32(char*, char *);
extern void execute_112(char*, char *);
extern void execute_35(char*, char *);
extern void execute_36(char*, char *);
extern void execute_113(char*, char *);
extern void execute_39(char*, char *);
extern void execute_115(char*, char *);
extern void execute_116(char*, char *);
extern void execute_117(char*, char *);
extern void execute_118(char*, char *);
extern void execute_119(char*, char *);
extern void execute_120(char*, char *);
extern void execute_121(char*, char *);
extern void execute_122(char*, char *);
extern void execute_114(char*, char *);
extern void execute_49(char*, char *);
extern void execute_50(char*, char *);
extern void execute_51(char*, char *);
extern void execute_52(char*, char *);
extern void execute_125(char*, char *);
extern void execute_126(char*, char *);
extern void execute_127(char*, char *);
extern void execute_128(char*, char *);
extern void execute_129(char*, char *);
extern void execute_130(char*, char *);
extern void execute_131(char*, char *);
extern void execute_132(char*, char *);
extern void execute_133(char*, char *);
extern void execute_134(char*, char *);
extern void execute_135(char*, char *);
extern void execute_136(char*, char *);
extern void execute_137(char*, char *);
extern void execute_138(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_1(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_2(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_103(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_104(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_105(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_106(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_107(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_108(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_109(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_110(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_111(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_112(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_113(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_114(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_115(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_116(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_117(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_118(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_119(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_120(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_121(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_122(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_123(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_124(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_125(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_126(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_27(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_28(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_29(char*, char *);
extern void timing_checker_condition_m_72e76bc6_67151b0a_30(char*, char *);
extern void execute_157(char*, char *);
extern void vlog_simple_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_162(char*, char *);
extern void execute_163(char*, char *);
extern void execute_164(char*, char *);
extern void execute_165(char*, char *);
extern void execute_79(char*, char *);
extern void execute_80(char*, char *);
extern void execute_81(char*, char *);
extern void execute_385(char*, char *);
extern void execute_386(char*, char *);
extern void execute_387(char*, char *);
extern void execute_388(char*, char *);
extern void execute_389(char*, char *);
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
extern void transaction_25(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_26(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_27(char*, char*, unsigned, unsigned, unsigned);
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
extern void transaction_53(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_54(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_55(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_56(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_57(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_58(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_59(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_60(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_61(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_62(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_63(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_64(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_65(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_66(char*, char*, unsigned, unsigned, unsigned);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_113(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_139(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_165(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_191(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_217(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[211] = {(funcp)execute_75, (funcp)execute_76, (funcp)execute_77, (funcp)execute_382, (funcp)execute_383, (funcp)execute_384, (funcp)execute_3, (funcp)execute_376, (funcp)execute_377, (funcp)execute_378, (funcp)execute_379, (funcp)execute_380, (funcp)execute_381, (funcp)execute_5, (funcp)execute_82, (funcp)execute_83, (funcp)execute_84, (funcp)execute_97, (funcp)execute_98, (funcp)vlog_timingcheck_execute_0, (funcp)execute_101, (funcp)execute_16, (funcp)execute_102, (funcp)vlog_const_rhs_process_execute_0_fast_no_reg_no_agg, (funcp)execute_335, (funcp)execute_336, (funcp)execute_337, (funcp)execute_338, (funcp)execute_339, (funcp)execute_340, (funcp)execute_341, (funcp)execute_342, (funcp)execute_343, (funcp)execute_344, (funcp)execute_345, (funcp)execute_346, (funcp)execute_347, (funcp)execute_348, (funcp)execute_349, (funcp)execute_350, (funcp)execute_351, (funcp)execute_352, (funcp)execute_353, (funcp)execute_354, (funcp)execute_355, (funcp)execute_356, (funcp)execute_357, (funcp)execute_358, (funcp)execute_359, (funcp)execute_360, (funcp)execute_361, (funcp)execute_362, (funcp)execute_363, (funcp)execute_364, (funcp)execute_365, (funcp)execute_366, (funcp)execute_367, (funcp)execute_368, (funcp)execute_369, (funcp)execute_370, (funcp)execute_371, (funcp)execute_372, (funcp)execute_373, (funcp)execute_374, (funcp)execute_28, (funcp)execute_108, (funcp)execute_109, (funcp)execute_110, (funcp)execute_111, (funcp)execute_107, (funcp)execute_31, (funcp)execute_32, (funcp)execute_112, (funcp)execute_35, (funcp)execute_36, (funcp)execute_113, (funcp)execute_39, (funcp)execute_115, (funcp)execute_116, (funcp)execute_117, (funcp)execute_118, (funcp)execute_119, (funcp)execute_120, (funcp)execute_121, (funcp)execute_122, (funcp)execute_114, (funcp)execute_49, (funcp)execute_50, (funcp)execute_51, (funcp)execute_52, (funcp)execute_125, (funcp)execute_126, (funcp)execute_127, (funcp)execute_128, (funcp)execute_129, (funcp)execute_130, (funcp)execute_131, (funcp)execute_132, (funcp)execute_133, (funcp)execute_134, (funcp)execute_135, (funcp)execute_136, (funcp)execute_137, (funcp)execute_138, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_1, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_2, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_103, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_104, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_105, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_106, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_107, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_108, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_109, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_110, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_111, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_112, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_113, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_114, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_115, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_116, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_117, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_118, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_119, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_120, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_121, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_122, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_123, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_124, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_125, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_126, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_27, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_28, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_29, (funcp)timing_checker_condition_m_72e76bc6_67151b0a_30, (funcp)execute_157, (funcp)vlog_simple_process_execute_0_fast_no_reg_no_agg, (funcp)execute_162, (funcp)execute_163, (funcp)execute_164, (funcp)execute_165, (funcp)execute_79, (funcp)execute_80, (funcp)execute_81, (funcp)execute_385, (funcp)execute_386, (funcp)execute_387, (funcp)execute_388, (funcp)execute_389, (funcp)transaction_3, (funcp)transaction_4, (funcp)transaction_5, (funcp)transaction_6, (funcp)transaction_7, (funcp)transaction_8, (funcp)transaction_9, (funcp)transaction_10, (funcp)transaction_11, (funcp)transaction_12, (funcp)transaction_13, (funcp)transaction_14, (funcp)transaction_15, (funcp)transaction_16, (funcp)transaction_17, (funcp)transaction_25, (funcp)transaction_26, (funcp)transaction_27, (funcp)transaction_28, (funcp)transaction_29, (funcp)transaction_30, (funcp)transaction_31, (funcp)transaction_32, (funcp)transaction_33, (funcp)transaction_34, (funcp)transaction_35, (funcp)transaction_36, (funcp)transaction_37, (funcp)transaction_38, (funcp)transaction_39, (funcp)transaction_40, (funcp)transaction_41, (funcp)transaction_42, (funcp)transaction_43, (funcp)transaction_44, (funcp)transaction_45, (funcp)transaction_46, (funcp)transaction_47, (funcp)transaction_48, (funcp)transaction_49, (funcp)transaction_50, (funcp)transaction_51, (funcp)transaction_52, (funcp)transaction_53, (funcp)transaction_54, (funcp)transaction_55, (funcp)transaction_56, (funcp)transaction_57, (funcp)transaction_58, (funcp)transaction_59, (funcp)transaction_60, (funcp)transaction_61, (funcp)transaction_62, (funcp)transaction_63, (funcp)transaction_64, (funcp)transaction_65, (funcp)transaction_66, (funcp)vlog_transfunc_eventcallback, (funcp)transaction_113, (funcp)transaction_139, (funcp)transaction_165, (funcp)transaction_191, (funcp)transaction_217};
const int NumRelocateId= 211;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/test_time_impl/xsim.reloc",  (void **)funcTab, 211);

	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/test_time_impl/xsim.reloc");
}

	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net

void wrapper_func_0(char *dp)

{

}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/test_time_impl/xsim.reloc");
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
    iki_set_sv_type_file_path_name("xsim.dir/test_time_impl/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/test_time_impl/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/test_time_impl/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}

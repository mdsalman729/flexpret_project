#include "Core.h"

void Core_t::init ( val_t rand_init ) {
  this->__srand(rand_init);
  Core_dmem__dspm.randomize(&__rand_seed);
  Core_dmem__dout.randomize(&__rand_seed);
  Core_imem__dout_r.randomize(&__rand_seed);
  Core_imem__ispm.randomize(&__rand_seed);
  Core_imem__R0.randomize(&__rand_seed);
  Core_datapath_csr__reg_msip_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_mtie_7.randomize(&__rand_seed);
  Core_datapath_csr__reg_prv1_7.randomize(&__rand_seed);
  Core_datapath_csr__reg_ie1_7.randomize(&__rand_seed);
  Core_datapath_csr__reg_prv_7.randomize(&__rand_seed);
  Core_datapath_csr__reg_ie_7.randomize(&__rand_seed);
  Core_datapath_csr__reg_msip_7.randomize(&__rand_seed);
  Core_datapath_csr__reg_mtie_6.randomize(&__rand_seed);
  Core_datapath_csr__reg_prv1_6.randomize(&__rand_seed);
  Core_datapath_csr__reg_ie1_6.randomize(&__rand_seed);
  Core_datapath_csr__reg_prv_6.randomize(&__rand_seed);
  Core_datapath_csr__reg_ie_6.randomize(&__rand_seed);
  Core_datapath_csr__reg_msip_6.randomize(&__rand_seed);
  Core_datapath_csr__reg_mtie_5.randomize(&__rand_seed);
  Core_datapath_csr__reg_prv1_5.randomize(&__rand_seed);
  Core_datapath_csr__reg_ie1_5.randomize(&__rand_seed);
  Core_datapath_csr__reg_prv_5.randomize(&__rand_seed);
  Core_datapath_csr__reg_ie_5.randomize(&__rand_seed);
  Core_datapath_csr__reg_msip_5.randomize(&__rand_seed);
  Core_datapath_csr__reg_mtie_4.randomize(&__rand_seed);
  Core_datapath_csr__reg_prv1_4.randomize(&__rand_seed);
  Core_datapath_csr__reg_ie1_4.randomize(&__rand_seed);
  Core_datapath_csr__reg_prv_4.randomize(&__rand_seed);
  Core_datapath_csr__reg_ie_4.randomize(&__rand_seed);
  Core_datapath_csr__reg_msip_4.randomize(&__rand_seed);
  Core_datapath_csr__reg_mtie_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_prv1_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_ie1_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_prv_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_ie_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_msip_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_mtie_2.randomize(&__rand_seed);
  Core_datapath_csr__reg_prv1_2.randomize(&__rand_seed);
  Core_datapath_csr__reg_ie1_2.randomize(&__rand_seed);
  Core_datapath_csr__reg_prv_2.randomize(&__rand_seed);
  Core_datapath_csr__reg_ie_2.randomize(&__rand_seed);
  Core_datapath_csr__reg_msip_2.randomize(&__rand_seed);
  Core_datapath_csr__reg_mtie_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_prv1_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_ie1_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_prv_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_ie_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_mtie_0.randomize(&__rand_seed);
  Core_datapath_csr__reg_prv1_0.randomize(&__rand_seed);
  Core_datapath_csr__reg_ie1_0.randomize(&__rand_seed);
  Core_datapath_csr__reg_prv_0.randomize(&__rand_seed);
  Core_datapath_csr__reg_ie_0.randomize(&__rand_seed);
  Core_datapath_csr__reg_dmem_protection_7.randomize(&__rand_seed);
  Core_datapath_csr__reg_dmem_protection_6.randomize(&__rand_seed);
  Core_datapath_csr__reg_dmem_protection_5.randomize(&__rand_seed);
  Core_datapath_csr__reg_dmem_protection_4.randomize(&__rand_seed);
  Core_datapath_csr__reg_dmem_protection_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_dmem_protection_2.randomize(&__rand_seed);
  Core_datapath_csr__reg_dmem_protection_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_dmem_protection_0.randomize(&__rand_seed);
  Core_datapath_csr__reg_imem_protection_7.randomize(&__rand_seed);
  Core_datapath_csr__reg_imem_protection_6.randomize(&__rand_seed);
  Core_datapath_csr__reg_imem_protection_5.randomize(&__rand_seed);
  Core_datapath_csr__reg_imem_protection_4.randomize(&__rand_seed);
  Core_datapath_csr__reg_imem_protection_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_imem_protection_2.randomize(&__rand_seed);
  Core_datapath_csr__reg_imem_protection_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_imem_protection_0.randomize(&__rand_seed);
  Core_datapath_csr__reg_gpo_protection_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_gpos_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_gpo_protection_2.randomize(&__rand_seed);
  Core_datapath_csr__reg_gpos_2.randomize(&__rand_seed);
  Core_datapath_csr__reg_gpo_protection_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_gpos_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_gpo_protection_0.randomize(&__rand_seed);
  Core_datapath_csr__reg_gpos_0.randomize(&__rand_seed);
  Core_datapath_csr__reg_gpis_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_gpis_2.randomize(&__rand_seed);
  Core_datapath_csr__reg_gpis_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_gpis_0.randomize(&__rand_seed);
  Core_datapath_csr__reg_to_host.randomize(&__rand_seed);
  Core_datapath_csr__reg_sup0_7.randomize(&__rand_seed);
  Core_datapath_csr__reg_sup0_6.randomize(&__rand_seed);
  Core_datapath_csr__reg_sup0_5.randomize(&__rand_seed);
  Core_datapath_csr__reg_sup0_4.randomize(&__rand_seed);
  Core_datapath_csr__reg_sup0_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_sup0_2.randomize(&__rand_seed);
  Core_datapath_csr__reg_sup0_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_sup0_0.randomize(&__rand_seed);
  Core_datapath_csr__reg_causes_7.randomize(&__rand_seed);
  Core_datapath_csr__reg_causes_6.randomize(&__rand_seed);
  Core_datapath_csr__reg_causes_5.randomize(&__rand_seed);
  Core_datapath_csr__reg_causes_4.randomize(&__rand_seed);
  Core_datapath_csr__reg_causes_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_causes_2.randomize(&__rand_seed);
  Core_datapath_csr__reg_causes_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_causes_0.randomize(&__rand_seed);
  Core_datapath_csr__reg_epcs_7.randomize(&__rand_seed);
  Core_datapath_csr__reg_epcs_6.randomize(&__rand_seed);
  Core_datapath_csr__reg_epcs_5.randomize(&__rand_seed);
  Core_datapath_csr__reg_epcs_4.randomize(&__rand_seed);
  Core_datapath_csr__reg_epcs_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_epcs_2.randomize(&__rand_seed);
  Core_datapath_csr__reg_epcs_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_epcs_0.randomize(&__rand_seed);
  Core_datapath_csr__reg_evecs_7.randomize(&__rand_seed);
  Core_datapath_csr__reg_evecs_6.randomize(&__rand_seed);
  Core_datapath_csr__reg_evecs_5.randomize(&__rand_seed);
  Core_datapath_csr__reg_evecs_4.randomize(&__rand_seed);
  Core_datapath_csr__reg_evecs_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_evecs_2.randomize(&__rand_seed);
  Core_datapath_csr__reg_evecs_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_evecs_0.randomize(&__rand_seed);
  Core_datapath_csr__reg_tmodes_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_tmodes_7.randomize(&__rand_seed);
  Core_datapath_csr__reg_tmodes_6.randomize(&__rand_seed);
  Core_datapath_csr__reg_tmodes_5.randomize(&__rand_seed);
  Core_datapath_csr__reg_tmodes_4.randomize(&__rand_seed);
  Core_datapath_csr__reg_tmodes_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_timer_7.randomize(&__rand_seed);
  Core_datapath_csr__reg_timer_6.randomize(&__rand_seed);
  Core_datapath_csr__reg_timer_5.randomize(&__rand_seed);
  Core_datapath_csr__reg_timer_4.randomize(&__rand_seed);
  Core_datapath_csr__reg_timer_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_timer_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_timer_0.randomize(&__rand_seed);
  Core_datapath_csr__reg_compare_7.randomize(&__rand_seed);
  Core_datapath_csr__reg_compare_6.randomize(&__rand_seed);
  Core_datapath_csr__reg_compare_5.randomize(&__rand_seed);
  Core_datapath_csr__reg_compare_4.randomize(&__rand_seed);
  Core_datapath_csr__reg_compare_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_compare_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_compare_0.randomize(&__rand_seed);
  Core_datapath_csr__reg_timer_2.randomize(&__rand_seed);
  Core_datapath_csr__reg_time.randomize(&__rand_seed);
  Core_datapath_csr__reg_compare_2.randomize(&__rand_seed);
  Core_datapath_csr__reg_tmodes_2.randomize(&__rand_seed);
  Core_datapath_csr__reg_tmodes_0.randomize(&__rand_seed);
  Core_datapath_csr__reg_slots_7.randomize(&__rand_seed);
  Core_datapath_csr__reg_slots_6.randomize(&__rand_seed);
  Core_datapath_csr__reg_slots_5.randomize(&__rand_seed);
  Core_datapath_csr__reg_slots_4.randomize(&__rand_seed);
  Core_datapath_csr__reg_slots_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_slots_2.randomize(&__rand_seed);
  Core_datapath_csr__reg_slots_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_slots_0.randomize(&__rand_seed);
  Core_datapath_csr__reg_msip_0.randomize(&__rand_seed);
  Core_datapath_loadstore__dmem_op_reg.randomize(&__rand_seed);
  Core_datapath_loadstore__mem_type_reg.randomize(&__rand_seed);
  Core_datapath_loadstore__addr_byte_reg.randomize(&__rand_seed);
  Core_datapath_loadstore__imem_op_reg.randomize(&__rand_seed);
  Core_datapath_Multiplier__R0.randomize(&__rand_seed);
  Core_datapath_regfile__dout1.randomize(&__rand_seed);
  Core_datapath_regfile__regfile.randomize(&__rand_seed);
  Core_datapath_regfile__dout2.randomize(&__rand_seed);
  Core_datapath__exe_reg_rs1_data.randomize(&__rand_seed);
  Core_datapath__wb_reg_tid.randomize(&__rand_seed);
  Core_datapath__wb_reg_rd_addr.randomize(&__rand_seed);
  Core_datapath__exe_reg_rd_addr.randomize(&__rand_seed);
  Core_datapath__mem_reg_rd_addr.randomize(&__rand_seed);
  Core_datapath__exe_reg_rs2_data.randomize(&__rand_seed);
  Core_datapath__exe_reg_csr_addr.randomize(&__rand_seed);
  Core_datapath__exe_csr_data.randomize(&__rand_seed);
  Core_datapath__if_reg_pcs_7.randomize(&__rand_seed);
  Core_datapath__if_reg_pcs_6.randomize(&__rand_seed);
  Core_datapath__if_reg_pcs_5.randomize(&__rand_seed);
  Core_datapath__if_reg_pcs_4.randomize(&__rand_seed);
  Core_datapath__if_reg_pcs_3.randomize(&__rand_seed);
  Core_datapath__if_reg_pcs_2.randomize(&__rand_seed);
  Core_datapath__if_reg_pcs_1.randomize(&__rand_seed);
  Core_datapath__mem_reg_tid.randomize(&__rand_seed);
  Core_datapath__exe_reg_tid.randomize(&__rand_seed);
  Core_datapath__exe_reg_op1.randomize(&__rand_seed);
  Core_datapath__dec_reg_pc4.randomize(&__rand_seed);
  Core_datapath__exe_reg_pc4.randomize(&__rand_seed);
  Core_datapath__mem_reg_rd_data.randomize(&__rand_seed);
  Core_datapath__wb_reg_rd_data.randomize(&__rand_seed);
  Core_datapath__dec_reg_inst.randomize(&__rand_seed);
  Core_datapath__exe_reg_op2.randomize(&__rand_seed);
  Core_datapath__if_reg_pcs_0.randomize(&__rand_seed);
  Core_datapath__if_reg_pc.randomize(&__rand_seed);
  Core_datapath__dec_reg_pc.randomize(&__rand_seed);
  Core_datapath__exe_reg_pc.randomize(&__rand_seed);
  Core_datapath__if_reg_tid.randomize(&__rand_seed);
  Core_datapath__dec_reg_tid.randomize(&__rand_seed);
  Core_control_scheduler__R273.randomize(&__rand_seed);
  Core_control_scheduler__R248.randomize(&__rand_seed);
  Core_control_scheduler__R233.randomize(&__rand_seed);
  Core_control_scheduler__R227.randomize(&__rand_seed);
  Core_control_scheduler__R222.randomize(&__rand_seed);
  Core_control_scheduler__R210.randomize(&__rand_seed);
  Core_control_scheduler__R196.randomize(&__rand_seed);
  Core_control_scheduler__R112.randomize(&__rand_seed);
  Core_control_scheduler__R87.randomize(&__rand_seed);
  Core_control_scheduler__R72.randomize(&__rand_seed);
  Core_control_scheduler__R66.randomize(&__rand_seed);
  Core_control_scheduler__R61.randomize(&__rand_seed);
  Core_control_scheduler__R49.randomize(&__rand_seed);
  Core_control_scheduler__R35.randomize(&__rand_seed);
  Core_control__exe_reg_alu_type.randomize(&__rand_seed);
  Core_control__exe_reg_br_type.randomize(&__rand_seed);
  Core_control__exe_reg_csr_type.randomize(&__rand_seed);
  Core_control__exe_reg_mul_type.randomize(&__rand_seed);
  Core_control__exe_reg_rd_data_sel.randomize(&__rand_seed);
  Core_control__exe_reg_mem_type.randomize(&__rand_seed);
  Core_control__R364.randomize(&__rand_seed);
  Core_control__mem_reg_rd_data_sel.randomize(&__rand_seed);
  Core_control__mem_reg_exception.randomize(&__rand_seed);
  Core_control__R284.randomize(&__rand_seed);
  Core_control__wb_reg_rd_write.randomize(&__rand_seed);
  Core_control__exe_reg_load.randomize(&__rand_seed);
  Core_control__exe_reg_store.randomize(&__rand_seed);
  Core_control__exe_reg_csr_write.randomize(&__rand_seed);
  Core_control__dec_reg_cause.randomize(&__rand_seed);
  Core_control__exe_reg_cause.randomize(&__rand_seed);
  Core_control__R238.randomize(&__rand_seed);
  Core_control__R231.randomize(&__rand_seed);
  Core_control__exe_reg_sret.randomize(&__rand_seed);
  Core_control__exe_reg_rd_write.randomize(&__rand_seed);
  Core_control__mem_reg_rd_write.randomize(&__rand_seed);
  Core_control__mem_reg_valid.randomize(&__rand_seed);
  Core_control__R206.randomize(&__rand_seed);
  Core_control__if_reg_valid.randomize(&__rand_seed);
  Core_control__stall_count_7.randomize(&__rand_seed);
  Core_control__stall_count_6.randomize(&__rand_seed);
  Core_control__stall_count_5.randomize(&__rand_seed);
  Core_control__stall_count_4.randomize(&__rand_seed);
  Core_control__stall_count_3.randomize(&__rand_seed);
  Core_control__stall_count_2.randomize(&__rand_seed);
  Core_control__stall_count_1.randomize(&__rand_seed);
  Core_control__stall_count_0.randomize(&__rand_seed);
  Core_control__dec_reg_valid.randomize(&__rand_seed);
  Core_control__R84.randomize(&__rand_seed);
  Core_control__exe_reg_jump.randomize(&__rand_seed);
  Core_control__exe_reg_branch.randomize(&__rand_seed);
  Core_control__exe_reg_valid.randomize(&__rand_seed);
  Core_control__dec_reg_exc.randomize(&__rand_seed);
  Core_control__exe_reg_exc.randomize(&__rand_seed);
}


int Core_t::clock ( dat_t<1> reset ) {
  uint32_t min = ((uint32_t)1<<31)-1;
  if (clk_cnt < min) min = clk_cnt;
  clk_cnt-=min;
  if (clk_cnt == 0) clock_hi( reset );
  if (clk_cnt == 0) clock_lo( reset );
  if (clk_cnt == 0) clk_cnt = clk;
  return min;
}


mod_t* Core_t::clone() {
  mod_t* cloned = new Core_t(*this);
  return cloned;
}


bool Core_t::set_circuit_from ( mod_t* src ) {
  Core_t* mod_typed = dynamic_cast<Core_t*>(src);
  assert(mod_typed);
  Core_datapath__def_exe_alu_result = mod_typed->Core_datapath__def_exe_alu_result;
  Core_datapath__exe_alu_shift = mod_typed->Core_datapath__exe_alu_shift;
  Core_control__io_exe_alu_type = mod_typed->Core_control__io_exe_alu_type;
  Core_datapath__io_control_exe_alu_type = mod_typed->Core_datapath__io_control_exe_alu_type;
  Core_datapath__exe_alu_result = mod_typed->Core_datapath__exe_alu_result;
  Core_datapath__exe_address = mod_typed->Core_datapath__exe_address;
  Core_datapath_loadstore__io_addr = mod_typed->Core_datapath_loadstore__io_addr;
  Core_datapath_loadstore__io_dmem_addr = mod_typed->Core_datapath_loadstore__io_dmem_addr;
  Core_datapath__io_dmem_addr = mod_typed->Core_datapath__io_dmem_addr;
  Core_dmem__io_core_addr = mod_typed->Core_dmem__io_core_addr;
  Core_datapath_loadstore__io_data_in = mod_typed->Core_datapath_loadstore__io_data_in;
  Core_control__io_exe_mem_type = mod_typed->Core_control__io_exe_mem_type;
  Core_datapath__io_control_exe_mem_type = mod_typed->Core_datapath__io_control_exe_mem_type;
  Core_datapath_loadstore__io_mem_type = mod_typed->Core_datapath_loadstore__io_mem_type;
  Core_datapath_loadstore__io_dmem_data_in = mod_typed->Core_datapath_loadstore__io_dmem_data_in;
  Core_datapath__io_dmem_data_in = mod_typed->Core_datapath__io_dmem_data_in;
  Core_dmem__io_core_data_in = mod_typed->Core_dmem__io_core_data_in;
  Core_datapath_csr__io_rw_thread = mod_typed->Core_datapath_csr__io_rw_thread;
  Core_datapath_csr__int_ext = mod_typed->Core_datapath_csr__int_ext;
  Core_datapath_csr__io_int_ext = mod_typed->Core_datapath_csr__io_int_ext;
  Core_datapath__io_control_exe_int_ext = mod_typed->Core_datapath__io_control_exe_int_ext;
  Core_control__io_exe_int_ext = mod_typed->Core_control__io_exe_int_ext;
  Core_datapath_csr__expired_0 = mod_typed->Core_datapath_csr__expired_0;
  Core_datapath_csr__expired_1 = mod_typed->Core_datapath_csr__expired_1;
  Core_datapath_csr__expired_2 = mod_typed->Core_datapath_csr__expired_2;
  Core_datapath_csr__expired_3 = mod_typed->Core_datapath_csr__expired_3;
  Core_datapath_csr__expired_4 = mod_typed->Core_datapath_csr__expired_4;
  Core_datapath_csr__expired_5 = mod_typed->Core_datapath_csr__expired_5;
  Core_datapath_csr__expired_6 = mod_typed->Core_datapath_csr__expired_6;
  Core_datapath_csr__expired_7 = mod_typed->Core_datapath_csr__expired_7;
  Core_control__io_exe_valid = mod_typed->Core_control__io_exe_valid;
  Core_datapath__io_control_exe_valid = mod_typed->Core_datapath__io_control_exe_valid;
  Core_datapath_csr__io_rw_valid = mod_typed->Core_datapath_csr__io_rw_valid;
  Core_datapath_csr__int_expire = mod_typed->Core_datapath_csr__int_expire;
  Core_datapath_csr__io_int_expire = mod_typed->Core_datapath_csr__io_int_expire;
  Core_datapath__io_control_exe_int_expire = mod_typed->Core_datapath__io_control_exe_int_expire;
  Core_control__io_exe_int_expire = mod_typed->Core_control__io_exe_int_expire;
  Core_datapath_csr__exc_expire = mod_typed->Core_datapath_csr__exc_expire;
  Core_datapath_csr__io_exc_expire = mod_typed->Core_datapath_csr__io_exc_expire;
  Core_datapath__io_control_exe_exc_expire = mod_typed->Core_datapath__io_control_exe_exc_expire;
  Core_control__io_exe_exc_expire = mod_typed->Core_control__io_exe_exc_expire;
  Core_control__exe_any_exc = mod_typed->Core_control__exe_any_exc;
  Core_control__exe_kill = mod_typed->Core_control__exe_kill;
  Core_control__io_exe_kill = mod_typed->Core_control__io_exe_kill;
  Core_datapath__io_control_exe_kill = mod_typed->Core_datapath__io_control_exe_kill;
  Core_datapath_loadstore__io_kill = mod_typed->Core_datapath_loadstore__io_kill;
  Core_datapath_loadstore__store_fault = mod_typed->Core_datapath_loadstore__store_fault;
  Core_control__exe_store = mod_typed->Core_control__exe_store;
  Core_control__io_exe_store = mod_typed->Core_control__io_exe_store;
  Core_datapath__io_control_exe_store = mod_typed->Core_datapath__io_control_exe_store;
  Core_datapath_loadstore__io_store = mod_typed->Core_datapath_loadstore__io_store;
  Core_datapath_loadstore__store_misaligned = mod_typed->Core_datapath_loadstore__store_misaligned;
  Core_datapath_loadstore__bus_op = mod_typed->Core_datapath_loadstore__bus_op;
  Core_datapath_csr__io_imem_protection_0 = mod_typed->Core_datapath_csr__io_imem_protection_0;
  Core_datapath_loadstore__io_imem_protection_0 = mod_typed->Core_datapath_loadstore__io_imem_protection_0;
  Core_datapath_csr__io_imem_protection_1 = mod_typed->Core_datapath_csr__io_imem_protection_1;
  Core_datapath_loadstore__io_imem_protection_1 = mod_typed->Core_datapath_loadstore__io_imem_protection_1;
  Core_datapath_csr__io_imem_protection_2 = mod_typed->Core_datapath_csr__io_imem_protection_2;
  Core_datapath_loadstore__io_imem_protection_2 = mod_typed->Core_datapath_loadstore__io_imem_protection_2;
  Core_datapath_csr__io_imem_protection_3 = mod_typed->Core_datapath_csr__io_imem_protection_3;
  Core_datapath_loadstore__io_imem_protection_3 = mod_typed->Core_datapath_loadstore__io_imem_protection_3;
  Core_datapath_csr__io_imem_protection_4 = mod_typed->Core_datapath_csr__io_imem_protection_4;
  Core_datapath_loadstore__io_imem_protection_4 = mod_typed->Core_datapath_loadstore__io_imem_protection_4;
  Core_datapath_csr__io_imem_protection_5 = mod_typed->Core_datapath_csr__io_imem_protection_5;
  Core_datapath_loadstore__io_imem_protection_5 = mod_typed->Core_datapath_loadstore__io_imem_protection_5;
  Core_datapath_csr__io_imem_protection_6 = mod_typed->Core_datapath_csr__io_imem_protection_6;
  Core_datapath_loadstore__io_imem_protection_6 = mod_typed->Core_datapath_loadstore__io_imem_protection_6;
  Core_datapath_csr__io_imem_protection_7 = mod_typed->Core_datapath_csr__io_imem_protection_7;
  Core_datapath_loadstore__io_imem_protection_7 = mod_typed->Core_datapath_loadstore__io_imem_protection_7;
  Core_datapath_loadstore__io_thread = mod_typed->Core_datapath_loadstore__io_thread;
  Core_datapath_loadstore__imem_op = mod_typed->Core_datapath_loadstore__imem_op;
  Core_datapath_csr__io_dmem_protection_0 = mod_typed->Core_datapath_csr__io_dmem_protection_0;
  Core_datapath_loadstore__io_dmem_protection_0 = mod_typed->Core_datapath_loadstore__io_dmem_protection_0;
  Core_datapath_csr__io_dmem_protection_1 = mod_typed->Core_datapath_csr__io_dmem_protection_1;
  Core_datapath_loadstore__io_dmem_protection_1 = mod_typed->Core_datapath_loadstore__io_dmem_protection_1;
  Core_datapath_csr__io_dmem_protection_2 = mod_typed->Core_datapath_csr__io_dmem_protection_2;
  Core_datapath_loadstore__io_dmem_protection_2 = mod_typed->Core_datapath_loadstore__io_dmem_protection_2;
  Core_datapath_csr__io_dmem_protection_3 = mod_typed->Core_datapath_csr__io_dmem_protection_3;
  Core_datapath_loadstore__io_dmem_protection_3 = mod_typed->Core_datapath_loadstore__io_dmem_protection_3;
  Core_datapath_csr__io_dmem_protection_4 = mod_typed->Core_datapath_csr__io_dmem_protection_4;
  Core_datapath_loadstore__io_dmem_protection_4 = mod_typed->Core_datapath_loadstore__io_dmem_protection_4;
  Core_datapath_csr__io_dmem_protection_5 = mod_typed->Core_datapath_csr__io_dmem_protection_5;
  Core_datapath_loadstore__io_dmem_protection_5 = mod_typed->Core_datapath_loadstore__io_dmem_protection_5;
  Core_datapath_csr__io_dmem_protection_6 = mod_typed->Core_datapath_csr__io_dmem_protection_6;
  Core_datapath_loadstore__io_dmem_protection_6 = mod_typed->Core_datapath_loadstore__io_dmem_protection_6;
  Core_datapath_csr__io_dmem_protection_7 = mod_typed->Core_datapath_csr__io_dmem_protection_7;
  Core_datapath_loadstore__io_dmem_protection_7 = mod_typed->Core_datapath_loadstore__io_dmem_protection_7;
  Core_datapath_loadstore__dmem_op = mod_typed->Core_datapath_loadstore__dmem_op;
  Core_datapath_loadstore__permission = mod_typed->Core_datapath_loadstore__permission;
  Core_datapath_loadstore__write = mod_typed->Core_datapath_loadstore__write;
  Core_datapath_loadstore__io_dmem_byte_write_0 = mod_typed->Core_datapath_loadstore__io_dmem_byte_write_0;
  Core_datapath__io_dmem_byte_write_0 = mod_typed->Core_datapath__io_dmem_byte_write_0;
  Core_dmem__io_core_byte_write_0 = mod_typed->Core_dmem__io_core_byte_write_0;
  Core_datapath_loadstore__io_dmem_byte_write_1 = mod_typed->Core_datapath_loadstore__io_dmem_byte_write_1;
  Core_datapath__io_dmem_byte_write_1 = mod_typed->Core_datapath__io_dmem_byte_write_1;
  Core_dmem__io_core_byte_write_1 = mod_typed->Core_dmem__io_core_byte_write_1;
  Core_datapath_loadstore__io_dmem_byte_write_2 = mod_typed->Core_datapath_loadstore__io_dmem_byte_write_2;
  Core_datapath__io_dmem_byte_write_2 = mod_typed->Core_datapath__io_dmem_byte_write_2;
  Core_dmem__io_core_byte_write_2 = mod_typed->Core_dmem__io_core_byte_write_2;
  Core_datapath_loadstore__io_dmem_byte_write_3 = mod_typed->Core_datapath_loadstore__io_dmem_byte_write_3;
  Core_datapath__io_dmem_byte_write_3 = mod_typed->Core_datapath__io_dmem_byte_write_3;
  Core_dmem__io_core_byte_write_3 = mod_typed->Core_dmem__io_core_byte_write_3;
  T257 = mod_typed->T257;
  Core_control__exe_load = mod_typed->Core_control__exe_load;
  Core_control__io_exe_load = mod_typed->Core_control__io_exe_load;
  Core_datapath__io_control_exe_load = mod_typed->Core_datapath__io_control_exe_load;
  Core_datapath_loadstore__io_load = mod_typed->Core_datapath_loadstore__io_load;
  Core_datapath_loadstore__io_dmem_enable = mod_typed->Core_datapath_loadstore__io_dmem_enable;
  Core_datapath__io_dmem_enable = mod_typed->Core_datapath__io_dmem_enable;
  Core_dmem__io_core_enable = mod_typed->Core_dmem__io_core_enable;
  Core_dmem__dspm = mod_typed->Core_dmem__dspm;
  T260 = mod_typed->T260;
  Core_dmem__dout = mod_typed->Core_dmem__dout;
  Core_datapath__if_pc_plus4 = mod_typed->Core_datapath__if_pc_plus4;
  Core_datapath__io_control_if_tid = mod_typed->Core_datapath__io_control_if_tid;
  Core_control__io_if_tid = mod_typed->Core_control__io_if_tid;
  Core_datapath__io_control_dec_tid = mod_typed->Core_datapath__io_control_dec_tid;
  Core_control__io_dec_tid = mod_typed->Core_control__io_dec_tid;
  Core_datapath__io_control_dec_inst = mod_typed->Core_datapath__io_control_dec_inst;
  Core_control__io_dec_inst = mod_typed->Core_control__io_dec_inst;
  Core_control__dec_load = mod_typed->Core_control__dec_load;
  Core_control__dec_mem_rd_data_sel = mod_typed->Core_control__dec_mem_rd_data_sel;
  Core_control__dec_fence_i = mod_typed->Core_control__dec_fence_i;
  Core_control__dec_stall = mod_typed->Core_control__dec_stall;
  Core_control__if_pre_valid = mod_typed->Core_control__if_pre_valid;
  Core_datapath__io_control_exe_tid = mod_typed->Core_datapath__io_control_exe_tid;
  Core_control__io_exe_tid = mod_typed->Core_control__io_exe_tid;
  Core_datapath_csr__io_expire = mod_typed->Core_datapath_csr__io_expire;
  Core_datapath__io_control_exe_expire = mod_typed->Core_datapath__io_control_exe_expire;
  Core_control__io_exe_expire = mod_typed->Core_control__io_exe_expire;
  Core_control__exe_du = mod_typed->Core_control__exe_du;
  Core_datapath__exe_ltu = mod_typed->Core_datapath__exe_ltu;
  Core_control__io_exe_br_type = mod_typed->Core_control__io_exe_br_type;
  Core_datapath__io_control_exe_br_type = mod_typed->Core_datapath__io_control_exe_br_type;
  Core_datapath__exe_lt = mod_typed->Core_datapath__exe_lt;
  Core_datapath__exe_eq = mod_typed->Core_datapath__exe_eq;
  Core_datapath__exe_br_cond = mod_typed->Core_datapath__exe_br_cond;
  Core_datapath__io_control_exe_br_cond = mod_typed->Core_datapath__io_control_exe_br_cond;
  Core_control__io_exe_br_cond = mod_typed->Core_control__io_exe_br_cond;
  Core_control__exe_brjmp = mod_typed->Core_control__exe_brjmp;
  Core_datapath__io_control_mem_tid = mod_typed->Core_datapath__io_control_mem_tid;
  Core_control__io_mem_tid = mod_typed->Core_control__io_mem_tid;
  Core_control__next_pc_sel_0 = mod_typed->Core_control__next_pc_sel_0;
  Core_control__io_next_pc_sel_0 = mod_typed->Core_control__io_next_pc_sel_0;
  Core_datapath__io_control_next_pc_sel_0 = mod_typed->Core_datapath__io_control_next_pc_sel_0;
  Core_control__next_pc_sel_1 = mod_typed->Core_control__next_pc_sel_1;
  Core_control__io_next_pc_sel_1 = mod_typed->Core_control__io_next_pc_sel_1;
  Core_datapath__io_control_next_pc_sel_1 = mod_typed->Core_datapath__io_control_next_pc_sel_1;
  Core_control__next_pc_sel_2 = mod_typed->Core_control__next_pc_sel_2;
  Core_control__io_next_pc_sel_2 = mod_typed->Core_control__io_next_pc_sel_2;
  Core_datapath__io_control_next_pc_sel_2 = mod_typed->Core_datapath__io_control_next_pc_sel_2;
  Core_control__next_pc_sel_3 = mod_typed->Core_control__next_pc_sel_3;
  Core_control__io_next_pc_sel_3 = mod_typed->Core_control__io_next_pc_sel_3;
  Core_datapath__io_control_next_pc_sel_3 = mod_typed->Core_datapath__io_control_next_pc_sel_3;
  Core_control__next_pc_sel_4 = mod_typed->Core_control__next_pc_sel_4;
  Core_control__io_next_pc_sel_4 = mod_typed->Core_control__io_next_pc_sel_4;
  Core_datapath__io_control_next_pc_sel_4 = mod_typed->Core_datapath__io_control_next_pc_sel_4;
  Core_control__next_pc_sel_5 = mod_typed->Core_control__next_pc_sel_5;
  Core_control__io_next_pc_sel_5 = mod_typed->Core_control__io_next_pc_sel_5;
  Core_datapath__io_control_next_pc_sel_5 = mod_typed->Core_datapath__io_control_next_pc_sel_5;
  Core_control__next_pc_sel_6 = mod_typed->Core_control__next_pc_sel_6;
  Core_control__io_next_pc_sel_6 = mod_typed->Core_control__io_next_pc_sel_6;
  Core_datapath__io_control_next_pc_sel_6 = mod_typed->Core_datapath__io_control_next_pc_sel_6;
  Core_control__next_pc_sel_7 = mod_typed->Core_control__next_pc_sel_7;
  Core_control__io_next_pc_sel_7 = mod_typed->Core_control__io_next_pc_sel_7;
  Core_datapath__io_control_next_pc_sel_7 = mod_typed->Core_datapath__io_control_next_pc_sel_7;
  Core_datapath_csr__io_evecs_0 = mod_typed->Core_datapath_csr__io_evecs_0;
  Core_datapath_csr__io_evecs_1 = mod_typed->Core_datapath_csr__io_evecs_1;
  Core_datapath_csr__io_evecs_2 = mod_typed->Core_datapath_csr__io_evecs_2;
  Core_datapath_csr__io_evecs_3 = mod_typed->Core_datapath_csr__io_evecs_3;
  Core_datapath_csr__io_evecs_4 = mod_typed->Core_datapath_csr__io_evecs_4;
  Core_datapath_csr__io_evecs_5 = mod_typed->Core_datapath_csr__io_evecs_5;
  Core_datapath_csr__io_evecs_6 = mod_typed->Core_datapath_csr__io_evecs_6;
  Core_datapath_csr__io_evecs_7 = mod_typed->Core_datapath_csr__io_evecs_7;
  Core_datapath__mem_evec = mod_typed->Core_datapath__mem_evec;
  Core_datapath__next_pcs_0 = mod_typed->Core_datapath__next_pcs_0;
  Core_datapath__next_pcs_1 = mod_typed->Core_datapath__next_pcs_1;
  Core_control__next_tid = mod_typed->Core_control__next_tid;
  Core_control__io_next_tid = mod_typed->Core_control__io_next_tid;
  Core_datapath__io_control_next_tid = mod_typed->Core_datapath__io_control_next_tid;
  Core_datapath__next_pcs_2 = mod_typed->Core_datapath__next_pcs_2;
  Core_datapath__next_pcs_3 = mod_typed->Core_datapath__next_pcs_3;
  Core_datapath__next_pcs_4 = mod_typed->Core_datapath__next_pcs_4;
  Core_datapath__next_pcs_5 = mod_typed->Core_datapath__next_pcs_5;
  Core_datapath__next_pcs_6 = mod_typed->Core_datapath__next_pcs_6;
  Core_datapath__next_pcs_7 = mod_typed->Core_datapath__next_pcs_7;
  Core_datapath__next_pc = mod_typed->Core_datapath__next_pc;
  Core_datapath__io_imem_r_addr = mod_typed->Core_datapath__io_imem_r_addr;
  Core_imem__io_core_r_addr = mod_typed->Core_imem__io_core_r_addr;
  Core_control__next_valid = mod_typed->Core_control__next_valid;
  Core_control__io_next_valid = mod_typed->Core_control__io_next_valid;
  Core_datapath__io_control_next_valid = mod_typed->Core_datapath__io_control_next_valid;
  Core_datapath__io_imem_r_enable = mod_typed->Core_datapath__io_imem_r_enable;
  Core_imem__io_core_r_enable = mod_typed->Core_imem__io_core_r_enable;
  T554 = mod_typed->T554;
  Core_imem__dout_r = mod_typed->Core_imem__dout_r;
  Core_datapath_loadstore__io_imem_rw_data_in = mod_typed->Core_datapath_loadstore__io_imem_rw_data_in;
  Core_datapath__io_imem_rw_data_in = mod_typed->Core_datapath__io_imem_rw_data_in;
  Core_imem__io_core_rw_data_in = mod_typed->Core_imem__io_core_rw_data_in;
  Core_datapath_loadstore__io_imem_rw_write = mod_typed->Core_datapath_loadstore__io_imem_rw_write;
  Core_datapath__io_imem_rw_write = mod_typed->Core_datapath__io_imem_rw_write;
  Core_imem__io_core_rw_write = mod_typed->Core_imem__io_core_rw_write;
  Core_datapath_loadstore__io_imem_rw_enable = mod_typed->Core_datapath_loadstore__io_imem_rw_enable;
  Core_datapath__io_imem_rw_enable = mod_typed->Core_datapath__io_imem_rw_enable;
  Core_imem__io_core_rw_enable = mod_typed->Core_imem__io_core_rw_enable;
  T558 = mod_typed->T558;
  Core_datapath_loadstore__io_imem_rw_addr = mod_typed->Core_datapath_loadstore__io_imem_rw_addr;
  Core_datapath__io_imem_rw_addr = mod_typed->Core_datapath__io_imem_rw_addr;
  Core_imem__io_core_rw_addr = mod_typed->Core_imem__io_core_rw_addr;
  Core_imem__ispm = mod_typed->Core_imem__ispm;
  T562 = mod_typed->T562;
  Core_imem__R0 = mod_typed->Core_imem__R0;
  Core_datapath_csr__io_rw_data_in = mod_typed->Core_datapath_csr__io_rw_data_in;
  Core_control__io_exe_csr_type = mod_typed->Core_control__io_exe_csr_type;
  Core_datapath__io_control_exe_csr_type = mod_typed->Core_datapath__io_control_exe_csr_type;
  Core_datapath_csr__io_rw_csr_type = mod_typed->Core_datapath_csr__io_rw_csr_type;
  Core_datapath_csr__io_rw_addr = mod_typed->Core_datapath_csr__io_rw_addr;
  Core_datapath_csr__status_0 = mod_typed->Core_datapath_csr__status_0;
  Core_datapath_csr__status_1 = mod_typed->Core_datapath_csr__status_1;
  Core_datapath_csr__status_2 = mod_typed->Core_datapath_csr__status_2;
  Core_datapath_csr__status_3 = mod_typed->Core_datapath_csr__status_3;
  Core_datapath_csr__status_4 = mod_typed->Core_datapath_csr__status_4;
  Core_datapath_csr__status_5 = mod_typed->Core_datapath_csr__status_5;
  Core_datapath_csr__status_6 = mod_typed->Core_datapath_csr__status_6;
  Core_datapath_csr__status_7 = mod_typed->Core_datapath_csr__status_7;
  Core_datapath_csr__data_out = mod_typed->Core_datapath_csr__data_out;
  Core_datapath_csr__data_in = mod_typed->Core_datapath_csr__data_in;
  Core_datapath_csr__io_kill = mod_typed->Core_datapath_csr__io_kill;
  Core_datapath_csr__priv_fault = mod_typed->Core_datapath_csr__priv_fault;
  Core_control__exe_csr_write = mod_typed->Core_control__exe_csr_write;
  Core_control__io_exe_csr_write = mod_typed->Core_control__io_exe_csr_write;
  Core_datapath__io_control_exe_csr_write = mod_typed->Core_datapath__io_control_exe_csr_write;
  Core_datapath_csr__io_rw_write = mod_typed->Core_datapath_csr__io_rw_write;
  Core_datapath_csr__write = mod_typed->Core_datapath_csr__write;
  Core__io_int_exts_0 = mod_typed->Core__io_int_exts_0;
  Core_datapath__io_int_exts_0 = mod_typed->Core_datapath__io_int_exts_0;
  Core_datapath_csr__io_int_exts_0 = mod_typed->Core_datapath_csr__io_int_exts_0;
  Core__io_int_exts_1 = mod_typed->Core__io_int_exts_1;
  Core_datapath__io_int_exts_1 = mod_typed->Core_datapath__io_int_exts_1;
  Core_datapath_csr__io_int_exts_1 = mod_typed->Core_datapath_csr__io_int_exts_1;
  Core__io_int_exts_2 = mod_typed->Core__io_int_exts_2;
  Core_datapath__io_int_exts_2 = mod_typed->Core_datapath__io_int_exts_2;
  Core_datapath_csr__io_int_exts_2 = mod_typed->Core_datapath_csr__io_int_exts_2;
  Core__io_int_exts_3 = mod_typed->Core__io_int_exts_3;
  Core_datapath__io_int_exts_3 = mod_typed->Core_datapath__io_int_exts_3;
  Core_datapath_csr__io_int_exts_3 = mod_typed->Core_datapath_csr__io_int_exts_3;
  Core__io_int_exts_4 = mod_typed->Core__io_int_exts_4;
  Core_datapath__io_int_exts_4 = mod_typed->Core_datapath__io_int_exts_4;
  Core_datapath_csr__io_int_exts_4 = mod_typed->Core_datapath_csr__io_int_exts_4;
  Core__io_int_exts_5 = mod_typed->Core__io_int_exts_5;
  Core_datapath__io_int_exts_5 = mod_typed->Core_datapath__io_int_exts_5;
  Core_datapath_csr__io_int_exts_5 = mod_typed->Core_datapath_csr__io_int_exts_5;
  Core__io_int_exts_6 = mod_typed->Core__io_int_exts_6;
  Core_datapath__io_int_exts_6 = mod_typed->Core_datapath__io_int_exts_6;
  Core_datapath_csr__io_int_exts_6 = mod_typed->Core_datapath_csr__io_int_exts_6;
  Core__io_int_exts_7 = mod_typed->Core__io_int_exts_7;
  Core_datapath__io_int_exts_7 = mod_typed->Core_datapath__io_int_exts_7;
  Core_datapath_csr__io_int_exts_7 = mod_typed->Core_datapath_csr__io_int_exts_7;
  Core_datapath__reset = mod_typed->Core_datapath__reset;
  Core_datapath_csr__reset = mod_typed->Core_datapath_csr__reset;
  T838 = mod_typed->T838;
  Core_datapath_csr__reg_msip_1 = mod_typed->Core_datapath_csr__reg_msip_1;
  T846 = mod_typed->T846;
  Core_datapath_csr__reg_mtie_7 = mod_typed->Core_datapath_csr__reg_mtie_7;
  T847 = mod_typed->T847;
  Core_datapath_csr__reg_prv1_7 = mod_typed->Core_datapath_csr__reg_prv1_7;
  T848 = mod_typed->T848;
  Core_datapath_csr__reg_ie1_7 = mod_typed->Core_datapath_csr__reg_ie1_7;
  T849 = mod_typed->T849;
  Core_datapath_csr__reg_prv_7 = mod_typed->Core_datapath_csr__reg_prv_7;
  Core_datapath_loadstore__io_store_misaligned = mod_typed->Core_datapath_loadstore__io_store_misaligned;
  Core_datapath__io_control_exe_exc_store_misaligned = mod_typed->Core_datapath__io_control_exe_exc_store_misaligned;
  Core_control__io_exe_exc_store_misaligned = mod_typed->Core_control__io_exe_exc_store_misaligned;
  Core_datapath_loadstore__load_misaligned = mod_typed->Core_datapath_loadstore__load_misaligned;
  Core_datapath_loadstore__io_load_misaligned = mod_typed->Core_datapath_loadstore__io_load_misaligned;
  Core_datapath__io_control_exe_exc_load_misaligned = mod_typed->Core_datapath__io_control_exe_exc_load_misaligned;
  Core_control__io_exe_exc_load_misaligned = mod_typed->Core_control__io_exe_exc_load_misaligned;
  Core_datapath_csr__io_priv_fault = mod_typed->Core_datapath_csr__io_priv_fault;
  Core_datapath__io_control_exe_exc_priv_inst = mod_typed->Core_datapath__io_control_exe_exc_priv_inst;
  Core_control__io_exe_exc_priv_inst = mod_typed->Core_control__io_exe_exc_priv_inst;
  Core_control__exe_inst_exc = mod_typed->Core_control__exe_inst_exc;
  Core_control__exe_exception = mod_typed->Core_control__exe_exception;
  Core_control__io_exe_exception = mod_typed->Core_control__io_exe_exception;
  Core_datapath__io_control_exe_exception = mod_typed->Core_datapath__io_control_exe_exception;
  Core_datapath_csr__io_exception = mod_typed->Core_datapath_csr__io_exception;
  T872 = mod_typed->T872;
  Core_datapath_csr__reg_ie_7 = mod_typed->Core_datapath_csr__reg_ie_7;
  T892 = mod_typed->T892;
  Core_datapath_csr__reg_msip_7 = mod_typed->Core_datapath_csr__reg_msip_7;
  T898 = mod_typed->T898;
  Core_datapath_csr__reg_mtie_6 = mod_typed->Core_datapath_csr__reg_mtie_6;
  T899 = mod_typed->T899;
  Core_datapath_csr__reg_prv1_6 = mod_typed->Core_datapath_csr__reg_prv1_6;
  T900 = mod_typed->T900;
  Core_datapath_csr__reg_ie1_6 = mod_typed->Core_datapath_csr__reg_ie1_6;
  T901 = mod_typed->T901;
  Core_datapath_csr__reg_prv_6 = mod_typed->Core_datapath_csr__reg_prv_6;
  T906 = mod_typed->T906;
  Core_datapath_csr__reg_ie_6 = mod_typed->Core_datapath_csr__reg_ie_6;
  T926 = mod_typed->T926;
  Core_datapath_csr__reg_msip_6 = mod_typed->Core_datapath_csr__reg_msip_6;
  T932 = mod_typed->T932;
  Core_datapath_csr__reg_mtie_5 = mod_typed->Core_datapath_csr__reg_mtie_5;
  T933 = mod_typed->T933;
  Core_datapath_csr__reg_prv1_5 = mod_typed->Core_datapath_csr__reg_prv1_5;
  T934 = mod_typed->T934;
  Core_datapath_csr__reg_ie1_5 = mod_typed->Core_datapath_csr__reg_ie1_5;
  T935 = mod_typed->T935;
  Core_datapath_csr__reg_prv_5 = mod_typed->Core_datapath_csr__reg_prv_5;
  T940 = mod_typed->T940;
  Core_datapath_csr__reg_ie_5 = mod_typed->Core_datapath_csr__reg_ie_5;
  T960 = mod_typed->T960;
  Core_datapath_csr__reg_msip_5 = mod_typed->Core_datapath_csr__reg_msip_5;
  T966 = mod_typed->T966;
  Core_datapath_csr__reg_mtie_4 = mod_typed->Core_datapath_csr__reg_mtie_4;
  T967 = mod_typed->T967;
  Core_datapath_csr__reg_prv1_4 = mod_typed->Core_datapath_csr__reg_prv1_4;
  T968 = mod_typed->T968;
  Core_datapath_csr__reg_ie1_4 = mod_typed->Core_datapath_csr__reg_ie1_4;
  T969 = mod_typed->T969;
  Core_datapath_csr__reg_prv_4 = mod_typed->Core_datapath_csr__reg_prv_4;
  T974 = mod_typed->T974;
  Core_datapath_csr__reg_ie_4 = mod_typed->Core_datapath_csr__reg_ie_4;
  T994 = mod_typed->T994;
  Core_datapath_csr__reg_msip_4 = mod_typed->Core_datapath_csr__reg_msip_4;
  T1000 = mod_typed->T1000;
  Core_datapath_csr__reg_mtie_3 = mod_typed->Core_datapath_csr__reg_mtie_3;
  T1001 = mod_typed->T1001;
  Core_datapath_csr__reg_prv1_3 = mod_typed->Core_datapath_csr__reg_prv1_3;
  T1002 = mod_typed->T1002;
  Core_datapath_csr__reg_ie1_3 = mod_typed->Core_datapath_csr__reg_ie1_3;
  T1003 = mod_typed->T1003;
  Core_datapath_csr__reg_prv_3 = mod_typed->Core_datapath_csr__reg_prv_3;
  T1008 = mod_typed->T1008;
  Core_datapath_csr__reg_ie_3 = mod_typed->Core_datapath_csr__reg_ie_3;
  T1028 = mod_typed->T1028;
  Core_datapath_csr__reg_msip_3 = mod_typed->Core_datapath_csr__reg_msip_3;
  T1034 = mod_typed->T1034;
  Core_datapath_csr__reg_mtie_2 = mod_typed->Core_datapath_csr__reg_mtie_2;
  T1035 = mod_typed->T1035;
  Core_datapath_csr__reg_prv1_2 = mod_typed->Core_datapath_csr__reg_prv1_2;
  T1036 = mod_typed->T1036;
  Core_datapath_csr__reg_ie1_2 = mod_typed->Core_datapath_csr__reg_ie1_2;
  T1037 = mod_typed->T1037;
  Core_datapath_csr__reg_prv_2 = mod_typed->Core_datapath_csr__reg_prv_2;
  T1042 = mod_typed->T1042;
  Core_datapath_csr__reg_ie_2 = mod_typed->Core_datapath_csr__reg_ie_2;
  T1062 = mod_typed->T1062;
  Core_datapath_csr__reg_msip_2 = mod_typed->Core_datapath_csr__reg_msip_2;
  T1068 = mod_typed->T1068;
  Core_datapath_csr__reg_mtie_1 = mod_typed->Core_datapath_csr__reg_mtie_1;
  T1069 = mod_typed->T1069;
  Core_datapath_csr__reg_prv1_1 = mod_typed->Core_datapath_csr__reg_prv1_1;
  T1070 = mod_typed->T1070;
  Core_datapath_csr__reg_ie1_1 = mod_typed->Core_datapath_csr__reg_ie1_1;
  T1071 = mod_typed->T1071;
  Core_datapath_csr__reg_prv_1 = mod_typed->Core_datapath_csr__reg_prv_1;
  T1076 = mod_typed->T1076;
  Core_datapath_csr__reg_ie_1 = mod_typed->Core_datapath_csr__reg_ie_1;
  T1082 = mod_typed->T1082;
  Core_datapath_csr__reg_mtie_0 = mod_typed->Core_datapath_csr__reg_mtie_0;
  T1083 = mod_typed->T1083;
  Core_datapath_csr__reg_prv1_0 = mod_typed->Core_datapath_csr__reg_prv1_0;
  T1084 = mod_typed->T1084;
  Core_datapath_csr__reg_ie1_0 = mod_typed->Core_datapath_csr__reg_ie1_0;
  T1085 = mod_typed->T1085;
  Core_datapath_csr__reg_prv_0 = mod_typed->Core_datapath_csr__reg_prv_0;
  T1090 = mod_typed->T1090;
  Core_datapath_csr__reg_ie_0 = mod_typed->Core_datapath_csr__reg_ie_0;
  T1095 = mod_typed->T1095;
  Core_datapath_csr__reg_dmem_protection_7 = mod_typed->Core_datapath_csr__reg_dmem_protection_7;
  T1098 = mod_typed->T1098;
  Core_datapath_csr__reg_dmem_protection_6 = mod_typed->Core_datapath_csr__reg_dmem_protection_6;
  T1101 = mod_typed->T1101;
  Core_datapath_csr__reg_dmem_protection_5 = mod_typed->Core_datapath_csr__reg_dmem_protection_5;
  T1104 = mod_typed->T1104;
  Core_datapath_csr__reg_dmem_protection_4 = mod_typed->Core_datapath_csr__reg_dmem_protection_4;
  T1107 = mod_typed->T1107;
  Core_datapath_csr__reg_dmem_protection_3 = mod_typed->Core_datapath_csr__reg_dmem_protection_3;
  T1110 = mod_typed->T1110;
  Core_datapath_csr__reg_dmem_protection_2 = mod_typed->Core_datapath_csr__reg_dmem_protection_2;
  T1113 = mod_typed->T1113;
  Core_datapath_csr__reg_dmem_protection_1 = mod_typed->Core_datapath_csr__reg_dmem_protection_1;
  T1116 = mod_typed->T1116;
  Core_datapath_csr__reg_dmem_protection_0 = mod_typed->Core_datapath_csr__reg_dmem_protection_0;
  T1121 = mod_typed->T1121;
  Core_datapath_csr__reg_imem_protection_7 = mod_typed->Core_datapath_csr__reg_imem_protection_7;
  T1124 = mod_typed->T1124;
  Core_datapath_csr__reg_imem_protection_6 = mod_typed->Core_datapath_csr__reg_imem_protection_6;
  T1127 = mod_typed->T1127;
  Core_datapath_csr__reg_imem_protection_5 = mod_typed->Core_datapath_csr__reg_imem_protection_5;
  T1130 = mod_typed->T1130;
  Core_datapath_csr__reg_imem_protection_4 = mod_typed->Core_datapath_csr__reg_imem_protection_4;
  T1133 = mod_typed->T1133;
  Core_datapath_csr__reg_imem_protection_3 = mod_typed->Core_datapath_csr__reg_imem_protection_3;
  T1136 = mod_typed->T1136;
  Core_datapath_csr__reg_imem_protection_2 = mod_typed->Core_datapath_csr__reg_imem_protection_2;
  T1139 = mod_typed->T1139;
  Core_datapath_csr__reg_imem_protection_1 = mod_typed->Core_datapath_csr__reg_imem_protection_1;
  T1142 = mod_typed->T1142;
  Core_datapath_csr__reg_imem_protection_0 = mod_typed->Core_datapath_csr__reg_imem_protection_0;
  T1147 = mod_typed->T1147;
  Core_datapath_csr__reg_gpo_protection_3 = mod_typed->Core_datapath_csr__reg_gpo_protection_3;
  T1159 = mod_typed->T1159;
  Core_datapath_csr__reg_gpos_3 = mod_typed->Core_datapath_csr__reg_gpos_3;
  T1162 = mod_typed->T1162;
  Core_datapath_csr__reg_gpo_protection_2 = mod_typed->Core_datapath_csr__reg_gpo_protection_2;
  T1174 = mod_typed->T1174;
  Core_datapath_csr__reg_gpos_2 = mod_typed->Core_datapath_csr__reg_gpos_2;
  T1177 = mod_typed->T1177;
  Core_datapath_csr__reg_gpo_protection_1 = mod_typed->Core_datapath_csr__reg_gpo_protection_1;
  T1189 = mod_typed->T1189;
  Core_datapath_csr__reg_gpos_1 = mod_typed->Core_datapath_csr__reg_gpos_1;
  T1192 = mod_typed->T1192;
  Core_datapath_csr__reg_gpo_protection_0 = mod_typed->Core_datapath_csr__reg_gpo_protection_0;
  T1204 = mod_typed->T1204;
  Core_datapath_csr__reg_gpos_0 = mod_typed->Core_datapath_csr__reg_gpos_0;
  Core__io_gpio_in_3 = mod_typed->Core__io_gpio_in_3;
  Core_datapath__io_gpio_in_3 = mod_typed->Core_datapath__io_gpio_in_3;
  Core_datapath_csr__io_gpio_in_3 = mod_typed->Core_datapath_csr__io_gpio_in_3;
  Core_datapath_csr__reg_gpis_3 = mod_typed->Core_datapath_csr__reg_gpis_3;
  Core__io_gpio_in_2 = mod_typed->Core__io_gpio_in_2;
  Core_datapath__io_gpio_in_2 = mod_typed->Core_datapath__io_gpio_in_2;
  Core_datapath_csr__io_gpio_in_2 = mod_typed->Core_datapath_csr__io_gpio_in_2;
  Core_datapath_csr__reg_gpis_2 = mod_typed->Core_datapath_csr__reg_gpis_2;
  Core__io_gpio_in_1 = mod_typed->Core__io_gpio_in_1;
  Core_datapath__io_gpio_in_1 = mod_typed->Core_datapath__io_gpio_in_1;
  Core_datapath_csr__io_gpio_in_1 = mod_typed->Core_datapath_csr__io_gpio_in_1;
  Core_datapath_csr__reg_gpis_1 = mod_typed->Core_datapath_csr__reg_gpis_1;
  Core__io_gpio_in_0 = mod_typed->Core__io_gpio_in_0;
  Core_datapath__io_gpio_in_0 = mod_typed->Core_datapath__io_gpio_in_0;
  Core_datapath_csr__io_gpio_in_0 = mod_typed->Core_datapath_csr__io_gpio_in_0;
  Core_datapath_csr__reg_gpis_0 = mod_typed->Core_datapath_csr__reg_gpis_0;
  T1210 = mod_typed->T1210;
  Core_datapath_csr__reg_to_host = mod_typed->Core_datapath_csr__reg_to_host;
  T1216 = mod_typed->T1216;
  Core_datapath_csr__reg_sup0_7 = mod_typed->Core_datapath_csr__reg_sup0_7;
  T1219 = mod_typed->T1219;
  Core_datapath_csr__reg_sup0_6 = mod_typed->Core_datapath_csr__reg_sup0_6;
  T1222 = mod_typed->T1222;
  Core_datapath_csr__reg_sup0_5 = mod_typed->Core_datapath_csr__reg_sup0_5;
  T1225 = mod_typed->T1225;
  Core_datapath_csr__reg_sup0_4 = mod_typed->Core_datapath_csr__reg_sup0_4;
  T1228 = mod_typed->T1228;
  Core_datapath_csr__reg_sup0_3 = mod_typed->Core_datapath_csr__reg_sup0_3;
  T1231 = mod_typed->T1231;
  Core_datapath_csr__reg_sup0_2 = mod_typed->Core_datapath_csr__reg_sup0_2;
  T1234 = mod_typed->T1234;
  Core_datapath_csr__reg_sup0_1 = mod_typed->Core_datapath_csr__reg_sup0_1;
  T1237 = mod_typed->T1237;
  Core_datapath_csr__reg_sup0_0 = mod_typed->Core_datapath_csr__reg_sup0_0;
  Core_control__exe_any_cause = mod_typed->Core_control__exe_any_cause;
  Core_control__exe_inst_cause = mod_typed->Core_control__exe_inst_cause;
  Core_control__exe_exception_cause = mod_typed->Core_control__exe_exception_cause;
  Core_control__io_exe_cause = mod_typed->Core_control__io_exe_cause;
  Core_datapath__io_control_exe_cause = mod_typed->Core_datapath__io_control_exe_cause;
  Core_datapath_csr__io_cause = mod_typed->Core_datapath_csr__io_cause;
  T1249 = mod_typed->T1249;
  Core_datapath_csr__reg_causes_7 = mod_typed->Core_datapath_csr__reg_causes_7;
  T1252 = mod_typed->T1252;
  Core_datapath_csr__reg_causes_6 = mod_typed->Core_datapath_csr__reg_causes_6;
  T1255 = mod_typed->T1255;
  Core_datapath_csr__reg_causes_5 = mod_typed->Core_datapath_csr__reg_causes_5;
  T1258 = mod_typed->T1258;
  Core_datapath_csr__reg_causes_4 = mod_typed->Core_datapath_csr__reg_causes_4;
  T1261 = mod_typed->T1261;
  Core_datapath_csr__reg_causes_3 = mod_typed->Core_datapath_csr__reg_causes_3;
  T1264 = mod_typed->T1264;
  Core_datapath_csr__reg_causes_2 = mod_typed->Core_datapath_csr__reg_causes_2;
  T1267 = mod_typed->T1267;
  Core_datapath_csr__reg_causes_1 = mod_typed->Core_datapath_csr__reg_causes_1;
  T1270 = mod_typed->T1270;
  Core_datapath_csr__reg_causes_0 = mod_typed->Core_datapath_csr__reg_causes_0;
  Core_datapath_csr__io_epc = mod_typed->Core_datapath_csr__io_epc;
  T1274 = mod_typed->T1274;
  Core_datapath_csr__reg_epcs_7 = mod_typed->Core_datapath_csr__reg_epcs_7;
  T1277 = mod_typed->T1277;
  Core_datapath_csr__reg_epcs_6 = mod_typed->Core_datapath_csr__reg_epcs_6;
  T1280 = mod_typed->T1280;
  Core_datapath_csr__reg_epcs_5 = mod_typed->Core_datapath_csr__reg_epcs_5;
  T1283 = mod_typed->T1283;
  Core_datapath_csr__reg_epcs_4 = mod_typed->Core_datapath_csr__reg_epcs_4;
  T1286 = mod_typed->T1286;
  Core_datapath_csr__reg_epcs_3 = mod_typed->Core_datapath_csr__reg_epcs_3;
  T1289 = mod_typed->T1289;
  Core_datapath_csr__reg_epcs_2 = mod_typed->Core_datapath_csr__reg_epcs_2;
  T1292 = mod_typed->T1292;
  Core_datapath_csr__reg_epcs_1 = mod_typed->Core_datapath_csr__reg_epcs_1;
  T1295 = mod_typed->T1295;
  Core_datapath_csr__reg_epcs_0 = mod_typed->Core_datapath_csr__reg_epcs_0;
  T1301 = mod_typed->T1301;
  Core_datapath_csr__reg_evecs_7 = mod_typed->Core_datapath_csr__reg_evecs_7;
  T1304 = mod_typed->T1304;
  Core_datapath_csr__reg_evecs_6 = mod_typed->Core_datapath_csr__reg_evecs_6;
  T1307 = mod_typed->T1307;
  Core_datapath_csr__reg_evecs_5 = mod_typed->Core_datapath_csr__reg_evecs_5;
  T1310 = mod_typed->T1310;
  Core_datapath_csr__reg_evecs_4 = mod_typed->Core_datapath_csr__reg_evecs_4;
  T1313 = mod_typed->T1313;
  Core_datapath_csr__reg_evecs_3 = mod_typed->Core_datapath_csr__reg_evecs_3;
  T1316 = mod_typed->T1316;
  Core_datapath_csr__reg_evecs_2 = mod_typed->Core_datapath_csr__reg_evecs_2;
  T1319 = mod_typed->T1319;
  Core_datapath_csr__reg_evecs_1 = mod_typed->Core_datapath_csr__reg_evecs_1;
  T1322 = mod_typed->T1322;
  Core_datapath_csr__reg_evecs_0 = mod_typed->Core_datapath_csr__reg_evecs_0;
  Core_control__exe_valid = mod_typed->Core_control__exe_valid;
  Core_control__exe_sleep = mod_typed->Core_control__exe_sleep;
  Core_control__io_exe_sleep = mod_typed->Core_control__io_exe_sleep;
  Core_datapath__io_control_exe_sleep = mod_typed->Core_datapath__io_control_exe_sleep;
  Core_datapath_csr__io_sleep = mod_typed->Core_datapath_csr__io_sleep;
  Core_datapath_csr__sleep = mod_typed->Core_datapath_csr__sleep;
  Core_datapath_csr__wake_1 = mod_typed->Core_datapath_csr__wake_1;
  T1352 = mod_typed->T1352;
  Core_datapath_csr__reg_tmodes_1 = mod_typed->Core_datapath_csr__reg_tmodes_1;
  Core_datapath_csr__wake_7 = mod_typed->Core_datapath_csr__wake_7;
  T1363 = mod_typed->T1363;
  Core_datapath_csr__reg_tmodes_7 = mod_typed->Core_datapath_csr__reg_tmodes_7;
  Core_datapath_csr__wake_6 = mod_typed->Core_datapath_csr__wake_6;
  T1374 = mod_typed->T1374;
  Core_datapath_csr__reg_tmodes_6 = mod_typed->Core_datapath_csr__reg_tmodes_6;
  Core_datapath_csr__wake_5 = mod_typed->Core_datapath_csr__wake_5;
  T1385 = mod_typed->T1385;
  Core_datapath_csr__reg_tmodes_5 = mod_typed->Core_datapath_csr__reg_tmodes_5;
  Core_datapath_csr__wake_4 = mod_typed->Core_datapath_csr__wake_4;
  T1396 = mod_typed->T1396;
  Core_datapath_csr__reg_tmodes_4 = mod_typed->Core_datapath_csr__reg_tmodes_4;
  Core_datapath_csr__wake_3 = mod_typed->Core_datapath_csr__wake_3;
  T1407 = mod_typed->T1407;
  Core_datapath_csr__reg_tmodes_3 = mod_typed->Core_datapath_csr__reg_tmodes_3;
  Core_control__exe_ee = mod_typed->Core_control__exe_ee;
  Core_control__io_exe_ee = mod_typed->Core_control__io_exe_ee;
  Core_datapath__io_control_exe_ee = mod_typed->Core_datapath__io_control_exe_ee;
  Core_datapath_csr__io_ee = mod_typed->Core_datapath_csr__io_ee;
  Core_control__exe_ie = mod_typed->Core_control__exe_ie;
  Core_control__io_exe_ie = mod_typed->Core_control__io_exe_ie;
  Core_datapath__io_control_exe_ie = mod_typed->Core_datapath__io_control_exe_ie;
  Core_datapath_csr__io_ie = mod_typed->Core_datapath_csr__io_ie;
  T1427 = mod_typed->T1427;
  Core_datapath_csr__reg_timer_7 = mod_typed->Core_datapath_csr__reg_timer_7;
  T1442 = mod_typed->T1442;
  Core_datapath_csr__reg_timer_6 = mod_typed->Core_datapath_csr__reg_timer_6;
  T1457 = mod_typed->T1457;
  Core_datapath_csr__reg_timer_5 = mod_typed->Core_datapath_csr__reg_timer_5;
  T1472 = mod_typed->T1472;
  Core_datapath_csr__reg_timer_4 = mod_typed->Core_datapath_csr__reg_timer_4;
  T1487 = mod_typed->T1487;
  Core_datapath_csr__reg_timer_3 = mod_typed->Core_datapath_csr__reg_timer_3;
  T1502 = mod_typed->T1502;
  Core_datapath_csr__reg_timer_1 = mod_typed->Core_datapath_csr__reg_timer_1;
  T1519 = mod_typed->T1519;
  Core_datapath_csr__reg_timer_0 = mod_typed->Core_datapath_csr__reg_timer_0;
  T1524 = mod_typed->T1524;
  Core_datapath_csr__reg_compare_7 = mod_typed->Core_datapath_csr__reg_compare_7;
  T1527 = mod_typed->T1527;
  Core_datapath_csr__reg_compare_6 = mod_typed->Core_datapath_csr__reg_compare_6;
  T1530 = mod_typed->T1530;
  Core_datapath_csr__reg_compare_5 = mod_typed->Core_datapath_csr__reg_compare_5;
  T1533 = mod_typed->T1533;
  Core_datapath_csr__reg_compare_4 = mod_typed->Core_datapath_csr__reg_compare_4;
  T1536 = mod_typed->T1536;
  Core_datapath_csr__reg_compare_3 = mod_typed->Core_datapath_csr__reg_compare_3;
  T1539 = mod_typed->T1539;
  Core_datapath_csr__reg_compare_1 = mod_typed->Core_datapath_csr__reg_compare_1;
  T1542 = mod_typed->T1542;
  Core_datapath_csr__reg_compare_0 = mod_typed->Core_datapath_csr__reg_compare_0;
  T1559 = mod_typed->T1559;
  Core_datapath_csr__reg_timer_2 = mod_typed->Core_datapath_csr__reg_timer_2;
  T1561 = mod_typed->T1561;
  Core_datapath_csr__reg_time = mod_typed->Core_datapath_csr__reg_time;
  T1564 = mod_typed->T1564;
  Core_datapath_csr__reg_compare_2 = mod_typed->Core_datapath_csr__reg_compare_2;
  Core_datapath_csr__wake_2 = mod_typed->Core_datapath_csr__wake_2;
  T1573 = mod_typed->T1573;
  Core_datapath_csr__reg_tmodes_2 = mod_typed->Core_datapath_csr__reg_tmodes_2;
  Core_datapath_csr__wake_0 = mod_typed->Core_datapath_csr__wake_0;
  T1582 = mod_typed->T1582;
  Core_datapath_csr__reg_tmodes_0 = mod_typed->Core_datapath_csr__reg_tmodes_0;
  T1587 = mod_typed->T1587;
  Core_datapath_csr__reg_slots_7 = mod_typed->Core_datapath_csr__reg_slots_7;
  T1590 = mod_typed->T1590;
  Core_datapath_csr__reg_slots_6 = mod_typed->Core_datapath_csr__reg_slots_6;
  T1593 = mod_typed->T1593;
  Core_datapath_csr__reg_slots_5 = mod_typed->Core_datapath_csr__reg_slots_5;
  T1596 = mod_typed->T1596;
  Core_datapath_csr__reg_slots_4 = mod_typed->Core_datapath_csr__reg_slots_4;
  T1599 = mod_typed->T1599;
  Core_datapath_csr__reg_slots_3 = mod_typed->Core_datapath_csr__reg_slots_3;
  T1602 = mod_typed->T1602;
  Core_datapath_csr__reg_slots_2 = mod_typed->Core_datapath_csr__reg_slots_2;
  T1605 = mod_typed->T1605;
  Core_datapath_csr__reg_slots_1 = mod_typed->Core_datapath_csr__reg_slots_1;
  T1608 = mod_typed->T1608;
  Core_datapath_csr__reg_slots_0 = mod_typed->Core_datapath_csr__reg_slots_0;
  T1628 = mod_typed->T1628;
  Core_datapath_csr__reg_msip_0 = mod_typed->Core_datapath_csr__reg_msip_0;
  Core_datapath_loadstore__io_imem_r_addr = mod_typed->Core_datapath_loadstore__io_imem_r_addr;
  Core_datapath_loadstore__io_imem_r_enable = mod_typed->Core_datapath_loadstore__io_imem_r_enable;
  Core_datapath_loadstore__dmem_op_reg = mod_typed->Core_datapath_loadstore__dmem_op_reg;
  Core_datapath_loadstore__mem_type_reg = mod_typed->Core_datapath_loadstore__mem_type_reg;
  T1629 = mod_typed->T1629;
  Core_datapath_loadstore__addr_byte_reg = mod_typed->Core_datapath_loadstore__addr_byte_reg;
  Core_datapath_loadstore__imem_op_reg = mod_typed->Core_datapath_loadstore__imem_op_reg;
  Core_datapath_Multiplier__io_op2 = mod_typed->Core_datapath_Multiplier__io_op2;
  Core_control__io_exe_mul_type = mod_typed->Core_control__io_exe_mul_type;
  Core_datapath__io_control_exe_mul_type = mod_typed->Core_datapath__io_control_exe_mul_type;
  Core_datapath_Multiplier__io_func = mod_typed->Core_datapath_Multiplier__io_func;
  Core_datapath_Multiplier__op2 = mod_typed->Core_datapath_Multiplier__op2;
  Core_datapath_Multiplier__io_op1 = mod_typed->Core_datapath_Multiplier__io_op1;
  Core_datapath_Multiplier__op1 = mod_typed->Core_datapath_Multiplier__op1;
  Core_datapath_Multiplier__mul_result = mod_typed->Core_datapath_Multiplier__mul_result;
  Core_datapath_Multiplier__result = mod_typed->Core_datapath_Multiplier__result;
  Core_datapath_Multiplier__R0 = mod_typed->Core_datapath_Multiplier__R0;
  Core_datapath_regfile__io_rs1_thread = mod_typed->Core_datapath_regfile__io_rs1_thread;
  Core_imem__io_core_r_data_out = mod_typed->Core_imem__io_core_r_data_out;
  Core_datapath__io_imem_r_data_out = mod_typed->Core_datapath__io_imem_r_data_out;
  Core_datapath_regfile__io_rs1_addr = mod_typed->Core_datapath_regfile__io_rs1_addr;
  T1658 = mod_typed->T1658;
  Core_datapath_regfile__dout1 = mod_typed->Core_datapath_regfile__dout1;
  Core_datapath_Multiplier__io_result = mod_typed->Core_datapath_Multiplier__io_result;
  Core_datapath__mem_mul_result = mod_typed->Core_datapath__mem_mul_result;
  Core_control__io_mem_rd_data_sel = mod_typed->Core_control__io_mem_rd_data_sel;
  Core_datapath__io_control_mem_rd_data_sel = mod_typed->Core_datapath__io_control_mem_rd_data_sel;
  Core__io_bus_data_out = mod_typed->Core__io_bus_data_out;
  Core_datapath__io_bus_data_out = mod_typed->Core_datapath__io_bus_data_out;
  Core_datapath_loadstore__io_bus_data_out = mod_typed->Core_datapath_loadstore__io_bus_data_out;
  Core_imem__io_core_rw_data_out = mod_typed->Core_imem__io_core_rw_data_out;
  Core_datapath__io_imem_rw_data_out = mod_typed->Core_datapath__io_imem_rw_data_out;
  Core_datapath_loadstore__io_imem_rw_data_out = mod_typed->Core_datapath_loadstore__io_imem_rw_data_out;
  Core_dmem__io_core_data_out = mod_typed->Core_dmem__io_core_data_out;
  Core_datapath__io_dmem_data_out = mod_typed->Core_datapath__io_dmem_data_out;
  Core_datapath_loadstore__io_dmem_data_out = mod_typed->Core_datapath_loadstore__io_dmem_data_out;
  Core_datapath_loadstore__io_data_out = mod_typed->Core_datapath_loadstore__io_data_out;
  Core_datapath__mem_rd_data = mod_typed->Core_datapath__mem_rd_data;
  Core_datapath_regfile__io_rd_data = mod_typed->Core_datapath_regfile__io_rd_data;
  Core_control__mem_rd_write = mod_typed->Core_control__mem_rd_write;
  Core_control__io_mem_rd_write = mod_typed->Core_control__io_mem_rd_write;
  Core_datapath__io_control_mem_rd_write = mod_typed->Core_datapath__io_control_mem_rd_write;
  Core_datapath_regfile__io_rd_enable = mod_typed->Core_datapath_regfile__io_rd_enable;
  Core_datapath_regfile__io_rd_thread = mod_typed->Core_datapath_regfile__io_rd_thread;
  Core_datapath_regfile__io_rd_addr = mod_typed->Core_datapath_regfile__io_rd_addr;
  T1689 = mod_typed->T1689;
  Core_datapath_regfile__regfile = mod_typed->Core_datapath_regfile__regfile;
  Core_datapath_regfile__io_rs2_thread = mod_typed->Core_datapath_regfile__io_rs2_thread;
  Core_datapath_regfile__io_rs2_addr = mod_typed->Core_datapath_regfile__io_rs2_addr;
  T1694 = mod_typed->T1694;
  Core_datapath_regfile__dout2 = mod_typed->Core_datapath_regfile__dout2;
  Core_datapath_regfile__io_rs1_data = mod_typed->Core_datapath_regfile__io_rs1_data;
  Core_datapath__wb_rd_data = mod_typed->Core_datapath__wb_rd_data;
  Core_datapath__io_control_wb_rd_addr = mod_typed->Core_datapath__io_control_wb_rd_addr;
  Core_control__io_wb_rd_addr = mod_typed->Core_control__io_wb_rd_addr;
  Core_datapath__io_control_wb_tid = mod_typed->Core_datapath__io_control_wb_tid;
  Core_control__io_wb_tid = mod_typed->Core_control__io_wb_tid;
  Core_datapath__io_control_mem_rd_addr = mod_typed->Core_datapath__io_control_mem_rd_addr;
  Core_control__io_mem_rd_addr = mod_typed->Core_control__io_mem_rd_addr;
  Core_datapath__io_control_exe_rd_addr = mod_typed->Core_datapath__io_control_exe_rd_addr;
  Core_control__io_exe_rd_addr = mod_typed->Core_control__io_exe_rd_addr;
  Core_control__dec_rs1_sel = mod_typed->Core_control__dec_rs1_sel;
  Core_control__io_dec_rs1_sel = mod_typed->Core_control__io_dec_rs1_sel;
  Core_datapath__io_control_dec_rs1_sel = mod_typed->Core_datapath__io_control_dec_rs1_sel;
  Core_control__io_exe_rd_data_sel = mod_typed->Core_control__io_exe_rd_data_sel;
  Core_datapath__io_control_exe_rd_data_sel = mod_typed->Core_datapath__io_control_exe_rd_data_sel;
  Core_datapath_csr__io_rw_data_out = mod_typed->Core_datapath_csr__io_rw_data_out;
  Core_datapath__exe_rd_data = mod_typed->Core_datapath__exe_rd_data;
  Core_datapath__dec_rs1_data = mod_typed->Core_datapath__dec_rs1_data;
  Core_datapath__exe_reg_rs1_data = mod_typed->Core_datapath__exe_reg_rs1_data;
  Core_datapath__wb_reg_tid = mod_typed->Core_datapath__wb_reg_tid;
  Core_datapath__wb_reg_rd_addr = mod_typed->Core_datapath__wb_reg_rd_addr;
  T1722 = mod_typed->T1722;
  Core_datapath__exe_reg_rd_addr = mod_typed->Core_datapath__exe_reg_rd_addr;
  Core_datapath__mem_reg_rd_addr = mod_typed->Core_datapath__mem_reg_rd_addr;
  Core_datapath_regfile__io_rs2_data = mod_typed->Core_datapath_regfile__io_rs2_data;
  Core_control__dec_rs2_sel = mod_typed->Core_control__dec_rs2_sel;
  Core_control__io_dec_rs2_sel = mod_typed->Core_control__io_dec_rs2_sel;
  Core_datapath__io_control_dec_rs2_sel = mod_typed->Core_datapath__io_control_dec_rs2_sel;
  Core_datapath__dec_rs2_data = mod_typed->Core_datapath__dec_rs2_data;
  Core_datapath__exe_reg_rs2_data = mod_typed->Core_datapath__exe_reg_rs2_data;
  T1739 = mod_typed->T1739;
  Core_datapath__exe_reg_csr_addr = mod_typed->Core_datapath__exe_reg_csr_addr;
  Core_datapath__dec_imm_i = mod_typed->Core_datapath__dec_imm_i;
  Core_datapath__dec_imm_z = mod_typed->Core_datapath__dec_imm_z;
  Core_control__dec_imm_sel = mod_typed->Core_control__dec_imm_sel;
  Core_control__io_dec_imm_sel = mod_typed->Core_control__io_dec_imm_sel;
  Core_datapath__io_control_dec_imm_sel = mod_typed->Core_datapath__io_control_dec_imm_sel;
  Core_datapath__dec_imm_j = mod_typed->Core_datapath__dec_imm_j;
  Core_datapath__dec_imm_u = mod_typed->Core_datapath__dec_imm_u;
  Core_datapath__dec_imm_b = mod_typed->Core_datapath__dec_imm_b;
  Core_datapath__dec_imm_s = mod_typed->Core_datapath__dec_imm_s;
  Core_datapath__dec_imm = mod_typed->Core_datapath__dec_imm;
  Core_control__dec_op2_sel = mod_typed->Core_control__dec_op2_sel;
  Core_control__io_dec_op2_sel = mod_typed->Core_control__io_dec_op2_sel;
  Core_datapath__io_control_dec_op2_sel = mod_typed->Core_datapath__io_control_dec_op2_sel;
  Core_datapath__dec_csr_data = mod_typed->Core_datapath__dec_csr_data;
  Core_datapath__exe_csr_data = mod_typed->Core_datapath__exe_csr_data;
  T1813 = mod_typed->T1813;
  Core_datapath__if_reg_pcs_7 = mod_typed->Core_datapath__if_reg_pcs_7;
  T1814 = mod_typed->T1814;
  Core_datapath__if_reg_pcs_6 = mod_typed->Core_datapath__if_reg_pcs_6;
  T1815 = mod_typed->T1815;
  Core_datapath__if_reg_pcs_5 = mod_typed->Core_datapath__if_reg_pcs_5;
  T1816 = mod_typed->T1816;
  Core_datapath__if_reg_pcs_4 = mod_typed->Core_datapath__if_reg_pcs_4;
  T1817 = mod_typed->T1817;
  Core_datapath__if_reg_pcs_3 = mod_typed->Core_datapath__if_reg_pcs_3;
  T1818 = mod_typed->T1818;
  Core_datapath__if_reg_pcs_2 = mod_typed->Core_datapath__if_reg_pcs_2;
  T1819 = mod_typed->T1819;
  Core_datapath__if_reg_pcs_1 = mod_typed->Core_datapath__if_reg_pcs_1;
  Core_datapath__mem_reg_tid = mod_typed->Core_datapath__mem_reg_tid;
  Core_datapath__exe_reg_tid = mod_typed->Core_datapath__exe_reg_tid;
  Core_control__dec_op1_sel = mod_typed->Core_control__dec_op1_sel;
  Core_control__io_dec_op1_sel = mod_typed->Core_control__io_dec_op1_sel;
  Core_datapath__io_control_dec_op1_sel = mod_typed->Core_datapath__io_control_dec_op1_sel;
  Core_datapath__dec_op1 = mod_typed->Core_datapath__dec_op1;
  Core_datapath__exe_reg_op1 = mod_typed->Core_datapath__exe_reg_op1;
  Core_datapath__dec_reg_pc4 = mod_typed->Core_datapath__dec_reg_pc4;
  Core_datapath__exe_reg_pc4 = mod_typed->Core_datapath__exe_reg_pc4;
  Core_datapath__mem_reg_rd_data = mod_typed->Core_datapath__mem_reg_rd_data;
  Core_datapath__wb_reg_rd_data = mod_typed->Core_datapath__wb_reg_rd_data;
  Core_datapath__dec_reg_inst = mod_typed->Core_datapath__dec_reg_inst;
  Core_datapath__dec_op2 = mod_typed->Core_datapath__dec_op2;
  Core_datapath__exe_reg_op2 = mod_typed->Core_datapath__exe_reg_op2;
  T1837 = mod_typed->T1837;
  Core_datapath__if_reg_pcs_0 = mod_typed->Core_datapath__if_reg_pcs_0;
  Core_datapath__if_reg_pc = mod_typed->Core_datapath__if_reg_pc;
  Core_datapath__dec_reg_pc = mod_typed->Core_datapath__dec_reg_pc;
  Core_datapath__exe_reg_pc = mod_typed->Core_datapath__exe_reg_pc;
  Core_datapath__if_reg_tid = mod_typed->Core_datapath__if_reg_tid;
  Core_datapath__dec_reg_tid = mod_typed->Core_datapath__dec_reg_tid;
  Core_datapath_csr__io_tmodes_5 = mod_typed->Core_datapath_csr__io_tmodes_5;
  Core_datapath__io_control_csr_tmodes_5 = mod_typed->Core_datapath__io_control_csr_tmodes_5;
  Core_control__io_csr_tmodes_5 = mod_typed->Core_control__io_csr_tmodes_5;
  Core_control_scheduler__io_thread_modes_5 = mod_typed->Core_control_scheduler__io_thread_modes_5;
  Core_datapath_csr__io_tmodes_4 = mod_typed->Core_datapath_csr__io_tmodes_4;
  Core_datapath__io_control_csr_tmodes_4 = mod_typed->Core_datapath__io_control_csr_tmodes_4;
  Core_control__io_csr_tmodes_4 = mod_typed->Core_control__io_csr_tmodes_4;
  Core_control_scheduler__io_thread_modes_4 = mod_typed->Core_control_scheduler__io_thread_modes_4;
  Core_datapath_csr__io_tmodes_3 = mod_typed->Core_datapath_csr__io_tmodes_3;
  Core_datapath__io_control_csr_tmodes_3 = mod_typed->Core_datapath__io_control_csr_tmodes_3;
  Core_control__io_csr_tmodes_3 = mod_typed->Core_control__io_csr_tmodes_3;
  Core_control_scheduler__io_thread_modes_3 = mod_typed->Core_control_scheduler__io_thread_modes_3;
  Core_datapath_csr__io_tmodes_2 = mod_typed->Core_datapath_csr__io_tmodes_2;
  Core_datapath__io_control_csr_tmodes_2 = mod_typed->Core_datapath__io_control_csr_tmodes_2;
  Core_control__io_csr_tmodes_2 = mod_typed->Core_control__io_csr_tmodes_2;
  Core_control_scheduler__io_thread_modes_2 = mod_typed->Core_control_scheduler__io_thread_modes_2;
  Core_datapath_csr__io_tmodes_1 = mod_typed->Core_datapath_csr__io_tmodes_1;
  Core_datapath__io_control_csr_tmodes_1 = mod_typed->Core_datapath__io_control_csr_tmodes_1;
  Core_control__io_csr_tmodes_1 = mod_typed->Core_control__io_csr_tmodes_1;
  Core_control_scheduler__io_thread_modes_1 = mod_typed->Core_control_scheduler__io_thread_modes_1;
  Core_datapath_csr__io_tmodes_0 = mod_typed->Core_datapath_csr__io_tmodes_0;
  Core_datapath__io_control_csr_tmodes_0 = mod_typed->Core_datapath__io_control_csr_tmodes_0;
  Core_control__io_csr_tmodes_0 = mod_typed->Core_control__io_csr_tmodes_0;
  Core_control_scheduler__io_thread_modes_0 = mod_typed->Core_control_scheduler__io_thread_modes_0;
  Core_datapath_csr__io_tmodes_6 = mod_typed->Core_datapath_csr__io_tmodes_6;
  Core_datapath__io_control_csr_tmodes_6 = mod_typed->Core_datapath__io_control_csr_tmodes_6;
  Core_control__io_csr_tmodes_6 = mod_typed->Core_control__io_csr_tmodes_6;
  Core_control_scheduler__io_thread_modes_6 = mod_typed->Core_control_scheduler__io_thread_modes_6;
  Core_datapath_csr__io_tmodes_7 = mod_typed->Core_datapath_csr__io_tmodes_7;
  Core_datapath__io_control_csr_tmodes_7 = mod_typed->Core_datapath__io_control_csr_tmodes_7;
  Core_control__io_csr_tmodes_7 = mod_typed->Core_control__io_csr_tmodes_7;
  Core_control_scheduler__io_thread_modes_7 = mod_typed->Core_control_scheduler__io_thread_modes_7;
  Core_datapath_csr__io_slots_7 = mod_typed->Core_datapath_csr__io_slots_7;
  Core_datapath__io_control_csr_slots_7 = mod_typed->Core_datapath__io_control_csr_slots_7;
  Core_control__io_csr_slots_7 = mod_typed->Core_control__io_csr_slots_7;
  Core_control_scheduler__io_slots_7 = mod_typed->Core_control_scheduler__io_slots_7;
  Core_datapath_csr__io_slots_6 = mod_typed->Core_datapath_csr__io_slots_6;
  Core_datapath__io_control_csr_slots_6 = mod_typed->Core_datapath__io_control_csr_slots_6;
  Core_control__io_csr_slots_6 = mod_typed->Core_control__io_csr_slots_6;
  Core_control_scheduler__io_slots_6 = mod_typed->Core_control_scheduler__io_slots_6;
  Core_datapath_csr__io_slots_5 = mod_typed->Core_datapath_csr__io_slots_5;
  Core_datapath__io_control_csr_slots_5 = mod_typed->Core_datapath__io_control_csr_slots_5;
  Core_control__io_csr_slots_5 = mod_typed->Core_control__io_csr_slots_5;
  Core_control_scheduler__io_slots_5 = mod_typed->Core_control_scheduler__io_slots_5;
  Core_datapath_csr__io_slots_4 = mod_typed->Core_datapath_csr__io_slots_4;
  Core_datapath__io_control_csr_slots_4 = mod_typed->Core_datapath__io_control_csr_slots_4;
  Core_control__io_csr_slots_4 = mod_typed->Core_control__io_csr_slots_4;
  Core_control_scheduler__io_slots_4 = mod_typed->Core_control_scheduler__io_slots_4;
  Core_datapath_csr__io_slots_3 = mod_typed->Core_datapath_csr__io_slots_3;
  Core_datapath__io_control_csr_slots_3 = mod_typed->Core_datapath__io_control_csr_slots_3;
  Core_control__io_csr_slots_3 = mod_typed->Core_control__io_csr_slots_3;
  Core_control_scheduler__io_slots_3 = mod_typed->Core_control_scheduler__io_slots_3;
  Core_datapath_csr__io_slots_2 = mod_typed->Core_datapath_csr__io_slots_2;
  Core_datapath__io_control_csr_slots_2 = mod_typed->Core_datapath__io_control_csr_slots_2;
  Core_control__io_csr_slots_2 = mod_typed->Core_control__io_csr_slots_2;
  Core_control_scheduler__io_slots_2 = mod_typed->Core_control_scheduler__io_slots_2;
  Core_datapath_csr__io_slots_1 = mod_typed->Core_datapath_csr__io_slots_1;
  Core_datapath__io_control_csr_slots_1 = mod_typed->Core_datapath__io_control_csr_slots_1;
  Core_control__io_csr_slots_1 = mod_typed->Core_control__io_csr_slots_1;
  Core_control_scheduler__io_slots_1 = mod_typed->Core_control_scheduler__io_slots_1;
  Core_datapath_csr__io_slots_0 = mod_typed->Core_datapath_csr__io_slots_0;
  Core_datapath__io_control_csr_slots_0 = mod_typed->Core_datapath__io_control_csr_slots_0;
  Core_control__io_csr_slots_0 = mod_typed->Core_control__io_csr_slots_0;
  Core_control_scheduler__io_slots_0 = mod_typed->Core_control_scheduler__io_slots_0;
  Core_control__reset = mod_typed->Core_control__reset;
  Core_control_scheduler__reset = mod_typed->Core_control_scheduler__reset;
  T2115 = mod_typed->T2115;
  Core_control_scheduler__R273 = mod_typed->Core_control_scheduler__R273;
  T2117 = mod_typed->T2117;
  Core_control_scheduler__R248 = mod_typed->Core_control_scheduler__R248;
  T2119 = mod_typed->T2119;
  Core_control_scheduler__R233 = mod_typed->Core_control_scheduler__R233;
  T2121 = mod_typed->T2121;
  Core_control_scheduler__R227 = mod_typed->Core_control_scheduler__R227;
  T2123 = mod_typed->T2123;
  Core_control_scheduler__R222 = mod_typed->Core_control_scheduler__R222;
  T2125 = mod_typed->T2125;
  Core_control_scheduler__R210 = mod_typed->Core_control_scheduler__R210;
  T2127 = mod_typed->T2127;
  Core_control_scheduler__R196 = mod_typed->Core_control_scheduler__R196;
  T2129 = mod_typed->T2129;
  Core_control_scheduler__R112 = mod_typed->Core_control_scheduler__R112;
  T2131 = mod_typed->T2131;
  Core_control_scheduler__R87 = mod_typed->Core_control_scheduler__R87;
  T2133 = mod_typed->T2133;
  Core_control_scheduler__R72 = mod_typed->Core_control_scheduler__R72;
  T2135 = mod_typed->T2135;
  Core_control_scheduler__R66 = mod_typed->Core_control_scheduler__R66;
  T2137 = mod_typed->T2137;
  Core_control_scheduler__R61 = mod_typed->Core_control_scheduler__R61;
  T2139 = mod_typed->T2139;
  Core_control_scheduler__R49 = mod_typed->Core_control_scheduler__R49;
  T2141 = mod_typed->T2141;
  Core_control_scheduler__R35 = mod_typed->Core_control_scheduler__R35;
  Core_control__dec_alu_type = mod_typed->Core_control__dec_alu_type;
  Core_control__exe_reg_alu_type = mod_typed->Core_control__exe_reg_alu_type;
  Core_control__dec_br_type = mod_typed->Core_control__dec_br_type;
  Core_control__exe_reg_br_type = mod_typed->Core_control__exe_reg_br_type;
  Core_control__dec_csr_type = mod_typed->Core_control__dec_csr_type;
  Core_control__exe_reg_csr_type = mod_typed->Core_control__exe_reg_csr_type;
  Core_control__dec_mul_type = mod_typed->Core_control__dec_mul_type;
  Core_control__exe_reg_mul_type = mod_typed->Core_control__exe_reg_mul_type;
  Core_control__dec_exe_rd_data_sel = mod_typed->Core_control__dec_exe_rd_data_sel;
  Core_control__exe_reg_rd_data_sel = mod_typed->Core_control__exe_reg_rd_data_sel;
  Core_control__dec_mem_type = mod_typed->Core_control__dec_mem_type;
  Core_control__exe_reg_mem_type = mod_typed->Core_control__exe_reg_mem_type;
  Core_control__R364 = mod_typed->Core_control__R364;
  Core_control__mem_reg_rd_data_sel = mod_typed->Core_control__mem_reg_rd_data_sel;
  Core_control__mem_reg_exception = mod_typed->Core_control__mem_reg_exception;
  Core_control_scheduler__io_thread = mod_typed->Core_control_scheduler__io_thread;
  Core_control__R284 = mod_typed->Core_control__R284;
  Core_control__wb_reg_rd_write = mod_typed->Core_control__wb_reg_rd_write;
  T2189 = mod_typed->T2189;
  Core_control__exe_reg_load = mod_typed->Core_control__exe_reg_load;
  Core_control__dec_store = mod_typed->Core_control__dec_store;
  T2194 = mod_typed->T2194;
  Core_control__exe_reg_store = mod_typed->Core_control__exe_reg_store;
  Core_control__dec_csr = mod_typed->Core_control__dec_csr;
  T2199 = mod_typed->T2199;
  Core_control__exe_reg_csr_write = mod_typed->Core_control__exe_reg_csr_write;
  Core_control__dec_reg_cause = mod_typed->Core_control__dec_reg_cause;
  Core_control__dec_scall = mod_typed->Core_control__dec_scall;
  Core_control__dec_ie = mod_typed->Core_control__dec_ie;
  Core_control__dec_du = mod_typed->Core_control__dec_du;
  Core_control__dec_legal = mod_typed->Core_control__dec_legal;
  Core_control__dec_cause = mod_typed->Core_control__dec_cause;
  T2257 = mod_typed->T2257;
  Core_control__exe_reg_cause = mod_typed->Core_control__exe_reg_cause;
  T2259 = mod_typed->T2259;
  Core_control__R238 = mod_typed->Core_control__R238;
  T2262 = mod_typed->T2262;
  Core_control__R231 = mod_typed->Core_control__R231;
  T2263 = mod_typed->T2263;
  Core_control__exe_reg_sret = mod_typed->Core_control__exe_reg_sret;
  Core_control__dec_rd_en = mod_typed->Core_control__dec_rd_en;
  Core_control__dec_rd_write = mod_typed->Core_control__dec_rd_write;
  T2283 = mod_typed->T2283;
  Core_control__exe_reg_rd_write = mod_typed->Core_control__exe_reg_rd_write;
  T2284 = mod_typed->T2284;
  Core_control__mem_reg_rd_write = mod_typed->Core_control__mem_reg_rd_write;
  T2285 = mod_typed->T2285;
  Core_control__mem_reg_valid = mod_typed->Core_control__mem_reg_valid;
  Core_control_scheduler__io_valid = mod_typed->Core_control_scheduler__io_valid;
  T2287 = mod_typed->T2287;
  Core_control__R206 = mod_typed->Core_control__R206;
  T2288 = mod_typed->T2288;
  Core_control__if_reg_valid = mod_typed->Core_control__if_reg_valid;
  T2300 = mod_typed->T2300;
  Core_control__stall_count_7 = mod_typed->Core_control__stall_count_7;
  T2311 = mod_typed->T2311;
  Core_control__stall_count_6 = mod_typed->Core_control__stall_count_6;
  T2322 = mod_typed->T2322;
  Core_control__stall_count_5 = mod_typed->Core_control__stall_count_5;
  T2333 = mod_typed->T2333;
  Core_control__stall_count_4 = mod_typed->Core_control__stall_count_4;
  T2344 = mod_typed->T2344;
  Core_control__stall_count_3 = mod_typed->Core_control__stall_count_3;
  T2355 = mod_typed->T2355;
  Core_control__stall_count_2 = mod_typed->Core_control__stall_count_2;
  T2366 = mod_typed->T2366;
  Core_control__stall_count_1 = mod_typed->Core_control__stall_count_1;
  T2377 = mod_typed->T2377;
  Core_control__stall_count_0 = mod_typed->Core_control__stall_count_0;
  Core_control__exe_flush = mod_typed->Core_control__exe_flush;
  Core_control__if_valid = mod_typed->Core_control__if_valid;
  T2383 = mod_typed->T2383;
  Core_control__dec_reg_valid = mod_typed->Core_control__dec_reg_valid;
  T2384 = mod_typed->T2384;
  Core_control__R84 = mod_typed->Core_control__R84;
  Core_control__dec_jump = mod_typed->Core_control__dec_jump;
  T2385 = mod_typed->T2385;
  Core_control__exe_reg_jump = mod_typed->Core_control__exe_reg_jump;
  Core_control__dec_branch = mod_typed->Core_control__dec_branch;
  T2388 = mod_typed->T2388;
  Core_control__exe_reg_branch = mod_typed->Core_control__exe_reg_branch;
  Core_control__dec_valid = mod_typed->Core_control__dec_valid;
  T2392 = mod_typed->T2392;
  Core_control__exe_reg_valid = mod_typed->Core_control__exe_reg_valid;
  Core_datapath__io_control_if_exc_misaligned = mod_typed->Core_datapath__io_control_if_exc_misaligned;
  Core_control__io_if_exc_misaligned = mod_typed->Core_control__io_if_exc_misaligned;
  Core_control__dec_reg_exc = mod_typed->Core_control__dec_reg_exc;
  Core_control__dec_exc = mod_typed->Core_control__dec_exc;
  T2395 = mod_typed->T2395;
  Core_control__exe_reg_exc = mod_typed->Core_control__exe_reg_exc;
  Core_imem__io_bus_data_out = mod_typed->Core_imem__io_bus_data_out;
  Core__io_imem_data_out = mod_typed->Core__io_imem_data_out;
  Core_imem__io_bus_ready = mod_typed->Core_imem__io_bus_ready;
  Core__io_imem_ready = mod_typed->Core__io_imem_ready;
  Core_dmem__io_bus_data_out = mod_typed->Core_dmem__io_bus_data_out;
  Core__io_dmem_data_out = mod_typed->Core__io_dmem_data_out;
  Core_datapath_loadstore__io_bus_addr = mod_typed->Core_datapath_loadstore__io_bus_addr;
  Core_datapath__io_bus_addr = mod_typed->Core_datapath__io_bus_addr;
  Core__io_bus_addr = mod_typed->Core__io_bus_addr;
  Core_datapath_loadstore__io_bus_enable = mod_typed->Core_datapath_loadstore__io_bus_enable;
  Core_datapath__io_bus_enable = mod_typed->Core_datapath__io_bus_enable;
  Core__io_bus_enable = mod_typed->Core__io_bus_enable;
  Core_datapath_loadstore__io_bus_write = mod_typed->Core_datapath_loadstore__io_bus_write;
  Core_datapath__io_bus_write = mod_typed->Core_datapath__io_bus_write;
  Core__io_bus_write = mod_typed->Core__io_bus_write;
  Core_datapath_loadstore__io_bus_data_in = mod_typed->Core_datapath_loadstore__io_bus_data_in;
  Core_datapath__io_bus_data_in = mod_typed->Core_datapath__io_bus_data_in;
  Core__io_bus_data_in = mod_typed->Core__io_bus_data_in;
  Core_datapath_csr__io_host_to_host = mod_typed->Core_datapath_csr__io_host_to_host;
  Core_datapath__io_host_to_host = mod_typed->Core_datapath__io_host_to_host;
  Core__io_host_to_host = mod_typed->Core__io_host_to_host;
  Core_datapath_csr__io_gpio_out_3 = mod_typed->Core_datapath_csr__io_gpio_out_3;
  Core_datapath__io_gpio_out_3 = mod_typed->Core_datapath__io_gpio_out_3;
  Core__io_gpio_out_3 = mod_typed->Core__io_gpio_out_3;
  Core_datapath_csr__io_gpio_out_2 = mod_typed->Core_datapath_csr__io_gpio_out_2;
  Core_datapath__io_gpio_out_2 = mod_typed->Core_datapath__io_gpio_out_2;
  Core__io_gpio_out_2 = mod_typed->Core__io_gpio_out_2;
  Core_datapath_csr__io_gpio_out_1 = mod_typed->Core_datapath_csr__io_gpio_out_1;
  Core_datapath__io_gpio_out_1 = mod_typed->Core_datapath__io_gpio_out_1;
  Core__io_gpio_out_1 = mod_typed->Core__io_gpio_out_1;
  Core_datapath_csr__io_gpio_out_0 = mod_typed->Core_datapath_csr__io_gpio_out_0;
  Core_datapath__io_gpio_out_0 = mod_typed->Core_datapath__io_gpio_out_0;
  Core__io_gpio_out_0 = mod_typed->Core__io_gpio_out_0;
  Core__io_dmem_data_in = mod_typed->Core__io_dmem_data_in;
  Core__io_dmem_byte_write_0 = mod_typed->Core__io_dmem_byte_write_0;
  Core__io_dmem_byte_write_1 = mod_typed->Core__io_dmem_byte_write_1;
  Core__io_dmem_byte_write_2 = mod_typed->Core__io_dmem_byte_write_2;
  Core__io_dmem_byte_write_3 = mod_typed->Core__io_dmem_byte_write_3;
  Core__io_dmem_enable = mod_typed->Core__io_dmem_enable;
  Core__io_dmem_addr = mod_typed->Core__io_dmem_addr;
  Core__io_imem_data_in = mod_typed->Core__io_imem_data_in;
  Core__io_imem_write = mod_typed->Core__io_imem_write;
  Core__io_imem_enable = mod_typed->Core__io_imem_enable;
  Core__io_imem_addr = mod_typed->Core__io_imem_addr;
  clk = mod_typed->clk;
  clk_cnt = mod_typed->clk_cnt;
  return true;
}


void Core_t::print ( FILE* f ) {
}
void Core_t::print ( std::ostream& s ) {
}


void Core_t::dump_init ( FILE* f ) {
  fputs("$timescale 1ps $end\n", f);
  fputs("$scope module Core $end\n", f);
  fputs("$var wire 1 \x7c io_int_exts_0 $end\n", f);
  fputs("$var wire 1 \x21\x22 io_int_exts_1 $end\n", f);
  fputs("$var wire 1 \x24\x22 io_int_exts_2 $end\n", f);
  fputs("$var wire 1 \x27\x22 io_int_exts_3 $end\n", f);
  fputs("$var wire 1 \x2a\x22 io_int_exts_4 $end\n", f);
  fputs("$var wire 1 \x2d\x22 io_int_exts_5 $end\n", f);
  fputs("$var wire 1 \x30\x22 io_int_exts_6 $end\n", f);
  fputs("$var wire 1 \x33\x22 io_int_exts_7 $end\n", f);
  fputs("$var wire 1 \x66\x22 io_gpio_in_3 $end\n", f);
  fputs("$var wire 1 \x6a\x22 io_gpio_in_2 $end\n", f);
  fputs("$var wire 1 \x6e\x22 io_gpio_in_1 $end\n", f);
  fputs("$var wire 1 \x72\x22 io_gpio_in_0 $end\n", f);
  fputs("$var wire 1 \x6d\x23 io_imem_ready $end\n", f);
  fputs("$var wire 1 \x70\x23 io_bus_enable $end\n", f);
  fputs("$var wire 1 \x73\x23 io_bus_write $end\n", f);
  fputs("$var wire 1 \x74\x23 io_dmem_byte_write_0 $end\n", f);
  fputs("$var wire 1 \x75\x23 io_dmem_byte_write_1 $end\n", f);
  fputs("$var wire 1 \x76\x23 io_dmem_byte_write_2 $end\n", f);
  fputs("$var wire 1 \x77\x23 io_dmem_byte_write_3 $end\n", f);
  fputs("$var wire 1 \x78\x23 io_dmem_enable $end\n", f);
  fputs("$var wire 1 \x79\x23 io_imem_write $end\n", f);
  fputs("$var wire 1 \x7a\x23 io_imem_enable $end\n", f);
  fputs("$var wire 2 \x44\x25 io_gpio_out_3 $end\n", f);
  fputs("$var wire 2 \x47\x25 io_gpio_out_2 $end\n", f);
  fputs("$var wire 2 \x4a\x25 io_gpio_out_1 $end\n", f);
  fputs("$var wire 2 \x4d\x25 io_gpio_out_0 $end\n", f);
  fputs("$var wire 10 \x38\x27 io_bus_addr $end\n", f);
  fputs("$var wire 12 \x44\x27 io_dmem_addr $end\n", f);
  fputs("$var wire 12 \x45\x27 io_imem_addr $end\n", f);
  fputs("$var wire 32 \x27\x28 io_bus_data_out $end\n", f);
  fputs("$var wire 32 \x5b\x28 io_imem_data_out $end\n", f);
  fputs("$var wire 32 \x5d\x28 io_dmem_data_out $end\n", f);
  fputs("$var wire 32 \x60\x28 io_bus_data_in $end\n", f);
  fputs("$var wire 32 \x63\x28 io_host_to_host $end\n", f);
  fputs("$var wire 32 \x64\x28 io_dmem_data_in $end\n", f);
  fputs("$var wire 32 \x65\x28 io_imem_data_in $end\n", f);
  fputs("$scope module control $end\n", f);
  fputs("$var wire 1 \x24 io_exe_int_ext $end\n", f);
  fputs("$var wire 1 \x2d io_exe_valid $end\n", f);
  fputs("$var wire 1 \x33 io_exe_int_expire $end\n", f);
  fputs("$var wire 1 \x37 io_exe_exc_expire $end\n", f);
  fputs("$var wire 1 \x38 exe_any_exc $end\n", f);
  fputs("$var wire 1 \x39 exe_kill $end\n", f);
  fputs("$var wire 1 \x3a io_exe_kill $end\n", f);
  fputs("$var wire 1 \x3e exe_store $end\n", f);
  fputs("$var wire 1 \x3f io_exe_store $end\n", f);
  fputs("$var wire 1 \x54 exe_load $end\n", f);
  fputs("$var wire 1 \x55 io_exe_load $end\n", f);
  fputs("$var wire 1 \x5b dec_load $end\n", f);
  fputs("$var wire 1 \x5c dec_fence_i $end\n", f);
  fputs("$var wire 1 \x5d dec_stall $end\n", f);
  fputs("$var wire 1 \x5e if_pre_valid $end\n", f);
  fputs("$var wire 1 \x61 io_exe_expire $end\n", f);
  fputs("$var wire 1 \x62 exe_du $end\n", f);
  fputs("$var wire 1 \x68 io_exe_br_cond $end\n", f);
  fputs("$var wire 1 \x69 exe_brjmp $end\n", f);
  fputs("$var wire 1 \x6a next_valid $end\n", f);
  fputs("$var wire 1 \x6b io_next_valid $end\n", f);
  fputs("$var wire 1 \x77 exe_csr_write $end\n", f);
  fputs("$var wire 1 \x78 io_exe_csr_write $end\n", f);
  fputs("$var wire 1 \x3d\x22 io_exe_exc_store_misaligned $end\n", f);
  fputs("$var wire 1 \x41\x22 io_exe_exc_load_misaligned $end\n", f);
  fputs("$var wire 1 \x44\x22 io_exe_exc_priv_inst $end\n", f);
  fputs("$var wire 1 \x45\x22 exe_inst_exc $end\n", f);
  fputs("$var wire 1 \x46\x22 exe_exception $end\n", f);
  fputs("$var wire 1 \x47\x22 io_exe_exception $end\n", f);
  fputs("$var wire 1 \x76\x22 exe_valid $end\n", f);
  fputs("$var wire 1 \x77\x22 exe_sleep $end\n", f);
  fputs("$var wire 1 \x78\x22 io_exe_sleep $end\n", f);
  fputs("$var wire 1 \x24\x23 exe_ee $end\n", f);
  fputs("$var wire 1 \x25\x23 io_exe_ee $end\n", f);
  fputs("$var wire 1 \x28\x23 exe_ie $end\n", f);
  fputs("$var wire 1 \x29\x23 io_exe_ie $end\n", f);
  fputs("$var wire 1 \x32\x23 mem_rd_write $end\n", f);
  fputs("$var wire 1 \x33\x23 io_mem_rd_write $end\n", f);
  fputs("$var wire 1 \x36\x23 reset $end\n", f);
  fputs("$var wire 1 \x46\x23 mem_reg_exception $end\n", f);
  fputs("$var wire 1 \x47\x23 wb_reg_rd_write $end\n", f);
  fputs("$var wire 1 \x48\x23 exe_reg_load $end\n", f);
  fputs("$var wire 1 \x49\x23 dec_store $end\n", f);
  fputs("$var wire 1 \x4a\x23 exe_reg_store $end\n", f);
  fputs("$var wire 1 \x4b\x23 dec_csr $end\n", f);
  fputs("$var wire 1 \x4c\x23 exe_reg_csr_write $end\n", f);
  fputs("$var wire 1 \x4d\x23 dec_reg_cause $end\n", f);
  fputs("$var wire 1 \x4e\x23 dec_scall $end\n", f);
  fputs("$var wire 1 \x4f\x23 dec_ie $end\n", f);
  fputs("$var wire 1 \x50\x23 dec_du $end\n", f);
  fputs("$var wire 1 \x51\x23 dec_legal $end\n", f);
  fputs("$var wire 1 \x52\x23 R238 $end\n", f);
  fputs("$var wire 1 \x53\x23 R231 $end\n", f);
  fputs("$var wire 1 \x54\x23 exe_reg_sret $end\n", f);
  fputs("$var wire 1 \x55\x23 dec_rd_en $end\n", f);
  fputs("$var wire 1 \x56\x23 dec_rd_write $end\n", f);
  fputs("$var wire 1 \x57\x23 exe_reg_rd_write $end\n", f);
  fputs("$var wire 1 \x58\x23 mem_reg_rd_write $end\n", f);
  fputs("$var wire 1 \x59\x23 mem_reg_valid $end\n", f);
  fputs("$var wire 1 \x5b\x23 R206 $end\n", f);
  fputs("$var wire 1 \x5c\x23 if_reg_valid $end\n", f);
  fputs("$var wire 1 \x5d\x23 exe_flush $end\n", f);
  fputs("$var wire 1 \x5e\x23 if_valid $end\n", f);
  fputs("$var wire 1 \x5f\x23 dec_reg_valid $end\n", f);
  fputs("$var wire 1 \x60\x23 R84 $end\n", f);
  fputs("$var wire 1 \x61\x23 dec_jump $end\n", f);
  fputs("$var wire 1 \x62\x23 exe_reg_jump $end\n", f);
  fputs("$var wire 1 \x63\x23 dec_branch $end\n", f);
  fputs("$var wire 1 \x64\x23 exe_reg_branch $end\n", f);
  fputs("$var wire 1 \x65\x23 dec_valid $end\n", f);
  fputs("$var wire 1 \x66\x23 exe_reg_valid $end\n", f);
  fputs("$var wire 1 \x68\x23 io_if_exc_misaligned $end\n", f);
  fputs("$var wire 1 \x69\x23 dec_reg_exc $end\n", f);
  fputs("$var wire 1 \x6a\x23 dec_exc $end\n", f);
  fputs("$var wire 1 \x6b\x23 exe_reg_exc $end\n", f);
  fputs("$var wire 2 \x7b\x23 dec_mem_rd_data_sel $end\n", f);
  fputs("$var wire 2 \x7c\x23 next_pc_sel_0 $end\n", f);
  fputs("$var wire 2 \x7d\x23 io_next_pc_sel_0 $end\n", f);
  fputs("$var wire 2 \x21\x24 next_pc_sel_1 $end\n", f);
  fputs("$var wire 2 \x22\x24 io_next_pc_sel_1 $end\n", f);
  fputs("$var wire 2 \x24\x24 next_pc_sel_2 $end\n", f);
  fputs("$var wire 2 \x25\x24 io_next_pc_sel_2 $end\n", f);
  fputs("$var wire 2 \x27\x24 next_pc_sel_3 $end\n", f);
  fputs("$var wire 2 \x28\x24 io_next_pc_sel_3 $end\n", f);
  fputs("$var wire 2 \x2a\x24 next_pc_sel_4 $end\n", f);
  fputs("$var wire 2 \x2b\x24 io_next_pc_sel_4 $end\n", f);
  fputs("$var wire 2 \x2d\x24 next_pc_sel_5 $end\n", f);
  fputs("$var wire 2 \x2e\x24 io_next_pc_sel_5 $end\n", f);
  fputs("$var wire 2 \x30\x24 next_pc_sel_6 $end\n", f);
  fputs("$var wire 2 \x31\x24 io_next_pc_sel_6 $end\n", f);
  fputs("$var wire 2 \x33\x24 next_pc_sel_7 $end\n", f);
  fputs("$var wire 2 \x34\x24 io_next_pc_sel_7 $end\n", f);
  fputs("$var wire 2 \x36\x24 io_exe_csr_type $end\n", f);
  fputs("$var wire 2 \x5e\x24 io_exe_mul_type $end\n", f);
  fputs("$var wire 2 \x60\x24 io_mem_rd_data_sel $end\n", f);
  fputs("$var wire 2 \x62\x24 dec_rs1_sel $end\n", f);
  fputs("$var wire 2 \x63\x24 io_dec_rs1_sel $end\n", f);
  fputs("$var wire 2 \x65\x24 io_exe_rd_data_sel $end\n", f);
  fputs("$var wire 2 \x67\x24 dec_rs2_sel $end\n", f);
  fputs("$var wire 2 \x68\x24 io_dec_rs2_sel $end\n", f);
  fputs("$var wire 2 \x6a\x24 dec_op2_sel $end\n", f);
  fputs("$var wire 2 \x6b\x24 io_dec_op2_sel $end\n", f);
  fputs("$var wire 2 \x6d\x24 dec_op1_sel $end\n", f);
  fputs("$var wire 2 \x6e\x24 io_dec_op1_sel $end\n", f);
  fputs("$var wire 2 \x72\x24 io_csr_tmodes_5 $end\n", f);
  fputs("$var wire 2 \x76\x24 io_csr_tmodes_4 $end\n", f);
  fputs("$var wire 2 \x7a\x24 io_csr_tmodes_3 $end\n", f);
  fputs("$var wire 2 \x7e\x24 io_csr_tmodes_2 $end\n", f);
  fputs("$var wire 2 \x24\x25 io_csr_tmodes_1 $end\n", f);
  fputs("$var wire 2 \x28\x25 io_csr_tmodes_0 $end\n", f);
  fputs("$var wire 2 \x2c\x25 io_csr_tmodes_6 $end\n", f);
  fputs("$var wire 2 \x30\x25 io_csr_tmodes_7 $end\n", f);
  fputs("$var wire 2 \x32\x25 dec_csr_type $end\n", f);
  fputs("$var wire 2 \x33\x25 exe_reg_csr_type $end\n", f);
  fputs("$var wire 2 \x34\x25 dec_mul_type $end\n", f);
  fputs("$var wire 2 \x35\x25 exe_reg_mul_type $end\n", f);
  fputs("$var wire 2 \x36\x25 dec_exe_rd_data_sel $end\n", f);
  fputs("$var wire 2 \x37\x25 exe_reg_rd_data_sel $end\n", f);
  fputs("$var wire 2 \x38\x25 R364 $end\n", f);
  fputs("$var wire 2 \x39\x25 mem_reg_rd_data_sel $end\n", f);
  fputs("$var wire 2 \x3a\x25 stall_count_7 $end\n", f);
  fputs("$var wire 2 \x3b\x25 stall_count_6 $end\n", f);
  fputs("$var wire 2 \x3c\x25 stall_count_5 $end\n", f);
  fputs("$var wire 2 \x3d\x25 stall_count_4 $end\n", f);
  fputs("$var wire 2 \x3e\x25 stall_count_3 $end\n", f);
  fputs("$var wire 2 \x3f\x25 stall_count_2 $end\n", f);
  fputs("$var wire 2 \x40\x25 stall_count_1 $end\n", f);
  fputs("$var wire 2 \x41\x25 stall_count_0 $end\n", f);
  fputs("$var wire 3 \x51\x25 io_if_tid $end\n", f);
  fputs("$var wire 3 \x53\x25 io_dec_tid $end\n", f);
  fputs("$var wire 3 \x55\x25 io_exe_tid $end\n", f);
  fputs("$var wire 3 \x56\x25 io_exe_br_type $end\n", f);
  fputs("$var wire 3 \x59\x25 io_mem_tid $end\n", f);
  fputs("$var wire 3 \x5a\x25 next_tid $end\n", f);
  fputs("$var wire 3 \x5b\x25 io_next_tid $end\n", f);
  fputs("$var wire 3 \x61\x25 io_wb_tid $end\n", f);
  fputs("$var wire 3 \x63\x25 dec_imm_sel $end\n", f);
  fputs("$var wire 3 \x64\x25 io_dec_imm_sel $end\n", f);
  fputs("$var wire 3 \x6a\x25 dec_br_type $end\n", f);
  fputs("$var wire 3 \x6b\x25 exe_reg_br_type $end\n", f);
  fputs("$var wire 3 \x6d\x25 R284 $end\n", f);
  fputs("$var wire 3 \x6e\x25 dec_cause $end\n", f);
  fputs("$var wire 3 \x6f\x25 exe_reg_cause $end\n", f);
  fputs("$var wire 4 \x70\x25 io_exe_alu_type $end\n", f);
  fputs("$var wire 4 \x72\x25 io_exe_mem_type $end\n", f);
  fputs("$var wire 4 \x4b\x26 exe_inst_cause $end\n", f);
  fputs("$var wire 4 \x58\x26 io_csr_slots_7 $end\n", f);
  fputs("$var wire 4 \x5c\x26 io_csr_slots_6 $end\n", f);
  fputs("$var wire 4 \x60\x26 io_csr_slots_5 $end\n", f);
  fputs("$var wire 4 \x64\x26 io_csr_slots_4 $end\n", f);
  fputs("$var wire 4 \x68\x26 io_csr_slots_3 $end\n", f);
  fputs("$var wire 4 \x6c\x26 io_csr_slots_2 $end\n", f);
  fputs("$var wire 4 \x70\x26 io_csr_slots_1 $end\n", f);
  fputs("$var wire 4 \x74\x26 io_csr_slots_0 $end\n", f);
  fputs("$var wire 4 \x76\x26 dec_alu_type $end\n", f);
  fputs("$var wire 4 \x77\x26 exe_reg_alu_type $end\n", f);
  fputs("$var wire 4 \x78\x26 dec_mem_type $end\n", f);
  fputs("$var wire 4 \x79\x26 exe_reg_mem_type $end\n", f);
  fputs("$var wire 5 \x7b\x26 exe_any_cause $end\n", f);
  fputs("$var wire 5 \x7c\x26 exe_exception_cause $end\n", f);
  fputs("$var wire 5 \x7d\x26 io_exe_cause $end\n", f);
  fputs("$var wire 5 \x2e\x27 io_wb_rd_addr $end\n", f);
  fputs("$var wire 5 \x30\x27 io_mem_rd_addr $end\n", f);
  fputs("$var wire 5 \x32\x27 io_exe_rd_addr $end\n", f);
  fputs("$var wire 32 \x51\x27 io_dec_inst $end\n", f);
  fputs("$scope module scheduler $end\n", f);
  fputs("$var wire 1 \x37\x23 reset $end\n", f);
  fputs("$var wire 1 \x38\x23 R273 $end\n", f);
  fputs("$var wire 1 \x39\x23 R248 $end\n", f);
  fputs("$var wire 1 \x3a\x23 R233 $end\n", f);
  fputs("$var wire 1 \x3b\x23 R227 $end\n", f);
  fputs("$var wire 1 \x3c\x23 R222 $end\n", f);
  fputs("$var wire 1 \x3d\x23 R210 $end\n", f);
  fputs("$var wire 1 \x3e\x23 R196 $end\n", f);
  fputs("$var wire 1 \x3f\x23 R112 $end\n", f);
  fputs("$var wire 1 \x40\x23 R87 $end\n", f);
  fputs("$var wire 1 \x41\x23 R72 $end\n", f);
  fputs("$var wire 1 \x42\x23 R66 $end\n", f);
  fputs("$var wire 1 \x43\x23 R61 $end\n", f);
  fputs("$var wire 1 \x44\x23 R49 $end\n", f);
  fputs("$var wire 1 \x45\x23 R35 $end\n", f);
  fputs("$var wire 1 \x5a\x23 io_valid $end\n", f);
  fputs("$var wire 2 \x73\x24 io_thread_modes_5 $end\n", f);
  fputs("$var wire 2 \x77\x24 io_thread_modes_4 $end\n", f);
  fputs("$var wire 2 \x7b\x24 io_thread_modes_3 $end\n", f);
  fputs("$var wire 2 \x21\x25 io_thread_modes_2 $end\n", f);
  fputs("$var wire 2 \x25\x25 io_thread_modes_1 $end\n", f);
  fputs("$var wire 2 \x29\x25 io_thread_modes_0 $end\n", f);
  fputs("$var wire 2 \x2d\x25 io_thread_modes_6 $end\n", f);
  fputs("$var wire 2 \x31\x25 io_thread_modes_7 $end\n", f);
  fputs("$var wire 3 \x6c\x25 io_thread $end\n", f);
  fputs("$var wire 4 \x59\x26 io_slots_7 $end\n", f);
  fputs("$var wire 4 \x5d\x26 io_slots_6 $end\n", f);
  fputs("$var wire 4 \x61\x26 io_slots_5 $end\n", f);
  fputs("$var wire 4 \x65\x26 io_slots_4 $end\n", f);
  fputs("$var wire 4 \x69\x26 io_slots_3 $end\n", f);
  fputs("$var wire 4 \x6d\x26 io_slots_2 $end\n", f);
  fputs("$var wire 4 \x71\x26 io_slots_1 $end\n", f);
  fputs("$var wire 4 \x75\x26 io_slots_0 $end\n", f);
  fputs("$upscope $end\n", f);
  fputs("$upscope $end\n", f);
  fputs("$scope module datapath $end\n", f);
  fputs("$var wire 1 \x23 io_control_exe_int_ext $end\n", f);
  fputs("$var wire 1 \x2e io_control_exe_valid $end\n", f);
  fputs("$var wire 1 \x32 io_control_exe_int_expire $end\n", f);
  fputs("$var wire 1 \x36 io_control_exe_exc_expire $end\n", f);
  fputs("$var wire 1 \x3b io_control_exe_kill $end\n", f);
  fputs("$var wire 1 \x40 io_control_exe_store $end\n", f);
  fputs("$var wire 1 \x49 io_dmem_byte_write_0 $end\n", f);
  fputs("$var wire 1 \x4c io_dmem_byte_write_1 $end\n", f);
  fputs("$var wire 1 \x4f io_dmem_byte_write_2 $end\n", f);
  fputs("$var wire 1 \x52 io_dmem_byte_write_3 $end\n", f);
  fputs("$var wire 1 \x56 io_control_exe_load $end\n", f);
  fputs("$var wire 1 \x59 io_dmem_enable $end\n", f);
  fputs("$var wire 1 \x60 io_control_exe_expire $end\n", f);
  fputs("$var wire 1 \x63 exe_ltu $end\n", f);
  fputs("$var wire 1 \x64 exe_lt $end\n", f);
  fputs("$var wire 1 \x65 exe_eq $end\n", f);
  fputs("$var wire 1 \x66 exe_br_cond $end\n", f);
  fputs("$var wire 1 \x67 io_control_exe_br_cond $end\n", f);
  fputs("$var wire 1 \x6c io_control_next_valid $end\n", f);
  fputs("$var wire 1 \x6d io_imem_r_enable $end\n", f);
  fputs("$var wire 1 \x70 io_imem_rw_write $end\n", f);
  fputs("$var wire 1 \x73 io_imem_rw_enable $end\n", f);
  fputs("$var wire 1 \x79 io_control_exe_csr_write $end\n", f);
  fputs("$var wire 1 \x7d io_int_exts_0 $end\n", f);
  fputs("$var wire 1 \x22\x22 io_int_exts_1 $end\n", f);
  fputs("$var wire 1 \x25\x22 io_int_exts_2 $end\n", f);
  fputs("$var wire 1 \x28\x22 io_int_exts_3 $end\n", f);
  fputs("$var wire 1 \x2b\x22 io_int_exts_4 $end\n", f);
  fputs("$var wire 1 \x2e\x22 io_int_exts_5 $end\n", f);
  fputs("$var wire 1 \x31\x22 io_int_exts_6 $end\n", f);
  fputs("$var wire 1 \x34\x22 io_int_exts_7 $end\n", f);
  fputs("$var wire 1 \x36\x22 reset $end\n", f);
  fputs("$var wire 1 \x3c\x22 io_control_exe_exc_store_misaligned $end\n", f);
  fputs("$var wire 1 \x40\x22 io_control_exe_exc_load_misaligned $end\n", f);
  fputs("$var wire 1 \x43\x22 io_control_exe_exc_priv_inst $end\n", f);
  fputs("$var wire 1 \x48\x22 io_control_exe_exception $end\n", f);
  fputs("$var wire 1 \x67\x22 io_gpio_in_3 $end\n", f);
  fputs("$var wire 1 \x6b\x22 io_gpio_in_2 $end\n", f);
  fputs("$var wire 1 \x6f\x22 io_gpio_in_1 $end\n", f);
  fputs("$var wire 1 \x73\x22 io_gpio_in_0 $end\n", f);
  fputs("$var wire 1 \x79\x22 io_control_exe_sleep $end\n", f);
  fputs("$var wire 1 \x26\x23 io_control_exe_ee $end\n", f);
  fputs("$var wire 1 \x2a\x23 io_control_exe_ie $end\n", f);
  fputs("$var wire 1 \x34\x23 io_control_mem_rd_write $end\n", f);
  fputs("$var wire 1 \x67\x23 io_control_if_exc_misaligned $end\n", f);
  fputs("$var wire 1 \x6f\x23 io_bus_enable $end\n", f);
  fputs("$var wire 1 \x72\x23 io_bus_write $end\n", f);
  fputs("$var wire 2 \x7e\x23 io_control_next_pc_sel_0 $end\n", f);
  fputs("$var wire 2 \x23\x24 io_control_next_pc_sel_1 $end\n", f);
  fputs("$var wire 2 \x26\x24 io_control_next_pc_sel_2 $end\n", f);
  fputs("$var wire 2 \x29\x24 io_control_next_pc_sel_3 $end\n", f);
  fputs("$var wire 2 \x2c\x24 io_control_next_pc_sel_4 $end\n", f);
  fputs("$var wire 2 \x2f\x24 io_control_next_pc_sel_5 $end\n", f);
  fputs("$var wire 2 \x32\x24 io_control_next_pc_sel_6 $end\n", f);
  fputs("$var wire 2 \x35\x24 io_control_next_pc_sel_7 $end\n", f);
  fputs("$var wire 2 \x37\x24 io_control_exe_csr_type $end\n", f);
  fputs("$var wire 2 \x5f\x24 io_control_exe_mul_type $end\n", f);
  fputs("$var wire 2 \x61\x24 io_control_mem_rd_data_sel $end\n", f);
  fputs("$var wire 2 \x64\x24 io_control_dec_rs1_sel $end\n", f);
  fputs("$var wire 2 \x66\x24 io_control_exe_rd_data_sel $end\n", f);
  fputs("$var wire 2 \x69\x24 io_control_dec_rs2_sel $end\n", f);
  fputs("$var wire 2 \x6c\x24 io_control_dec_op2_sel $end\n", f);
  fputs("$var wire 2 \x6f\x24 io_control_dec_op1_sel $end\n", f);
  fputs("$var wire 2 \x71\x24 io_control_csr_tmodes_5 $end\n", f);
  fputs("$var wire 2 \x75\x24 io_control_csr_tmodes_4 $end\n", f);
  fputs("$var wire 2 \x79\x24 io_control_csr_tmodes_3 $end\n", f);
  fputs("$var wire 2 \x7d\x24 io_control_csr_tmodes_2 $end\n", f);
  fputs("$var wire 2 \x23\x25 io_control_csr_tmodes_1 $end\n", f);
  fputs("$var wire 2 \x27\x25 io_control_csr_tmodes_0 $end\n", f);
  fputs("$var wire 2 \x2b\x25 io_control_csr_tmodes_6 $end\n", f);
  fputs("$var wire 2 \x2f\x25 io_control_csr_tmodes_7 $end\n", f);
  fputs("$var wire 2 \x43\x25 io_gpio_out_3 $end\n", f);
  fputs("$var wire 2 \x46\x25 io_gpio_out_2 $end\n", f);
  fputs("$var wire 2 \x49\x25 io_gpio_out_1 $end\n", f);
  fputs("$var wire 2 \x4c\x25 io_gpio_out_0 $end\n", f);
  fputs("$var wire 3 \x50\x25 io_control_if_tid $end\n", f);
  fputs("$var wire 3 \x52\x25 io_control_dec_tid $end\n", f);
  fputs("$var wire 3 \x54\x25 io_control_exe_tid $end\n", f);
  fputs("$var wire 3 \x57\x25 io_control_exe_br_type $end\n", f);
  fputs("$var wire 3 \x58\x25 io_control_mem_tid $end\n", f);
  fputs("$var wire 3 \x5c\x25 io_control_next_tid $end\n", f);
  fputs("$var wire 3 \x60\x25 io_control_wb_tid $end\n", f);
  fputs("$var wire 3 \x62\x25 wb_reg_tid $end\n", f);
  fputs("$var wire 3 \x65\x25 io_control_dec_imm_sel $end\n", f);
  fputs("$var wire 3 \x66\x25 mem_reg_tid $end\n", f);
  fputs("$var wire 3 \x67\x25 exe_reg_tid $end\n", f);
  fputs("$var wire 3 \x68\x25 if_reg_tid $end\n", f);
  fputs("$var wire 3 \x69\x25 dec_reg_tid $end\n", f);
  fputs("$var wire 4 \x71\x25 io_control_exe_alu_type $end\n", f);
  fputs("$var wire 4 \x73\x25 io_control_exe_mem_type $end\n", f);
  fputs("$var wire 4 \x57\x26 io_control_csr_slots_7 $end\n", f);
  fputs("$var wire 4 \x5b\x26 io_control_csr_slots_6 $end\n", f);
  fputs("$var wire 4 \x5f\x26 io_control_csr_slots_5 $end\n", f);
  fputs("$var wire 4 \x63\x26 io_control_csr_slots_4 $end\n", f);
  fputs("$var wire 4 \x67\x26 io_control_csr_slots_3 $end\n", f);
  fputs("$var wire 4 \x6b\x26 io_control_csr_slots_2 $end\n", f);
  fputs("$var wire 4 \x6f\x26 io_control_csr_slots_1 $end\n", f);
  fputs("$var wire 4 \x73\x26 io_control_csr_slots_0 $end\n", f);
  fputs("$var wire 5 \x7a\x26 exe_alu_shift $end\n", f);
  fputs("$var wire 5 \x7e\x26 io_control_exe_cause $end\n", f);
  fputs("$var wire 5 \x2d\x27 io_control_wb_rd_addr $end\n", f);
  fputs("$var wire 5 \x2f\x27 io_control_mem_rd_addr $end\n", f);
  fputs("$var wire 5 \x31\x27 io_control_exe_rd_addr $end\n", f);
  fputs("$var wire 5 \x33\x27 wb_reg_rd_addr $end\n", f);
  fputs("$var wire 5 \x34\x27 exe_reg_rd_addr $end\n", f);
  fputs("$var wire 5 \x35\x27 mem_reg_rd_addr $end\n", f);
  fputs("$var wire 10 \x37\x27 io_bus_addr $end\n", f);
  fputs("$var wire 12 \x3a\x27 io_dmem_addr $end\n", f);
  fputs("$var wire 12 \x3c\x27 io_imem_r_addr $end\n", f);
  fputs("$var wire 12 \x3f\x27 io_imem_rw_addr $end\n", f);
  fputs("$var wire 12 \x43\x27 exe_reg_csr_addr $end\n", f);
  fputs("$var wire 32 \x46\x27 def_exe_alu_result $end\n", f);
  fputs("$var wire 32 \x47\x27 exe_alu_result $end\n", f);
  fputs("$var wire 32 \x48\x27 exe_address $end\n", f);
  fputs("$var wire 32 \x4c\x27 io_dmem_data_in $end\n", f);
  fputs("$var wire 32 \x4f\x27 if_pc_plus4 $end\n", f);
  fputs("$var wire 32 \x50\x27 io_control_dec_inst $end\n", f);
  fputs("$var wire 32 \x5a\x27 mem_evec $end\n", f);
  fputs("$var wire 32 \x5b\x27 next_pcs_0 $end\n", f);
  fputs("$var wire 32 \x5c\x27 next_pcs_1 $end\n", f);
  fputs("$var wire 32 \x5d\x27 next_pcs_2 $end\n", f);
  fputs("$var wire 32 \x5e\x27 next_pcs_3 $end\n", f);
  fputs("$var wire 32 \x5f\x27 next_pcs_4 $end\n", f);
  fputs("$var wire 32 \x60\x27 next_pcs_5 $end\n", f);
  fputs("$var wire 32 \x61\x27 next_pcs_6 $end\n", f);
  fputs("$var wire 32 \x62\x27 next_pcs_7 $end\n", f);
  fputs("$var wire 32 \x63\x27 next_pc $end\n", f);
  fputs("$var wire 32 \x66\x27 io_imem_rw_data_in $end\n", f);
  fputs("$var wire 32 \x23\x28 io_imem_r_data_out $end\n", f);
  fputs("$var wire 32 \x26\x28 mem_mul_result $end\n", f);
  fputs("$var wire 32 \x28\x28 io_bus_data_out $end\n", f);
  fputs("$var wire 32 \x2b\x28 io_imem_rw_data_out $end\n", f);
  fputs("$var wire 32 \x2e\x28 io_dmem_data_out $end\n", f);
  fputs("$var wire 32 \x31\x28 mem_rd_data $end\n", f);
  fputs("$var wire 32 \x35\x28 wb_rd_data $end\n", f);
  fputs("$var wire 32 \x37\x28 exe_rd_data $end\n", f);
  fputs("$var wire 32 \x38\x28 dec_rs1_data $end\n", f);
  fputs("$var wire 32 \x39\x28 exe_reg_rs1_data $end\n", f);
  fputs("$var wire 32 \x3b\x28 dec_rs2_data $end\n", f);
  fputs("$var wire 32 \x3c\x28 exe_reg_rs2_data $end\n", f);
  fputs("$var wire 32 \x3d\x28 dec_imm_i $end\n", f);
  fputs("$var wire 32 \x3e\x28 dec_imm_z $end\n", f);
  fputs("$var wire 32 \x3f\x28 dec_imm_j $end\n", f);
  fputs("$var wire 32 \x40\x28 dec_imm_u $end\n", f);
  fputs("$var wire 32 \x41\x28 dec_imm_b $end\n", f);
  fputs("$var wire 32 \x42\x28 dec_imm_s $end\n", f);
  fputs("$var wire 32 \x43\x28 dec_imm $end\n", f);
  fputs("$var wire 32 \x44\x28 dec_csr_data $end\n", f);
  fputs("$var wire 32 \x45\x28 exe_csr_data $end\n", f);
  fputs("$var wire 32 \x46\x28 if_reg_pcs_7 $end\n", f);
  fputs("$var wire 32 \x47\x28 if_reg_pcs_6 $end\n", f);
  fputs("$var wire 32 \x48\x28 if_reg_pcs_5 $end\n", f);
  fputs("$var wire 32 \x49\x28 if_reg_pcs_4 $end\n", f);
  fputs("$var wire 32 \x4a\x28 if_reg_pcs_3 $end\n", f);
  fputs("$var wire 32 \x4b\x28 if_reg_pcs_2 $end\n", f);
  fputs("$var wire 32 \x4c\x28 if_reg_pcs_1 $end\n", f);
  fputs("$var wire 32 \x4d\x28 dec_op1 $end\n", f);
  fputs("$var wire 32 \x4e\x28 exe_reg_op1 $end\n", f);
  fputs("$var wire 32 \x4f\x28 dec_reg_pc4 $end\n", f);
  fputs("$var wire 32 \x50\x28 exe_reg_pc4 $end\n", f);
  fputs("$var wire 32 \x51\x28 mem_reg_rd_data $end\n", f);
  fputs("$var wire 32 \x52\x28 wb_reg_rd_data $end\n", f);
  fputs("$var wire 32 \x53\x28 dec_reg_inst $end\n", f);
  fputs("$var wire 32 \x54\x28 dec_op2 $end\n", f);
  fputs("$var wire 32 \x55\x28 exe_reg_op2 $end\n", f);
  fputs("$var wire 32 \x56\x28 if_reg_pcs_0 $end\n", f);
  fputs("$var wire 32 \x57\x28 if_reg_pc $end\n", f);
  fputs("$var wire 32 \x58\x28 dec_reg_pc $end\n", f);
  fputs("$var wire 32 \x59\x28 exe_reg_pc $end\n", f);
  fputs("$var wire 32 \x5f\x28 io_bus_data_in $end\n", f);
  fputs("$var wire 32 \x62\x28 io_host_to_host $end\n", f);
  fputs("$scope module regfile $end\n", f);
  fputs("$var wire 1 \x35\x23 io_rd_enable $end\n", f);
  fputs("$var wire 3 \x5d\x25 io_rs1_thread $end\n", f);
  fputs("$var wire 3 \x5e\x25 io_rd_thread $end\n", f);
  fputs("$var wire 3 \x5f\x25 io_rs2_thread $end\n", f);
  fputs("$var wire 5 \x2a\x27 io_rs1_addr $end\n", f);
  fputs("$var wire 5 \x2b\x27 io_rd_addr $end\n", f);
  fputs("$var wire 5 \x2c\x27 io_rs2_addr $end\n", f);
  fputs("$var wire 32 \x24\x28 dout1 $end\n", f);
  fputs("$var wire 32 \x32\x28 io_rd_data $end\n", f);
  fputs("$var wire 32 \x33\x28 dout2 $end\n", f);
  fputs("$var wire 32 \x34\x28 io_rs1_data $end\n", f);
  fputs("$var wire 32 \x3a\x28 io_rs2_data $end\n", f);
  fputs("$upscope $end\n", f);
  fputs("$scope module Multiplier $end\n", f);
  fputs("$var wire 4 \x55\x26 io_func $end\n", f);
  fputs("$var wire 32 \x7c\x27 io_op2 $end\n", f);
  fputs("$var wire 32 \x7d\x27 io_op1 $end\n", f);
  fputs("$var wire 32 \x7e\x27 result $end\n", f);
  fputs("$var wire 32 \x21\x28 R0 $end\n", f);
  fputs("$var wire 32 \x25\x28 io_result $end\n", f);
  fputs("$var wire 33 \x66\x28 op2 $end\n", f);
  fputs("$var wire 33 \x67\x28 op1 $end\n", f);
  fputs("$var wire 66 \x25\x29 mul_result $end\n", f);
  fputs("$upscope $end\n", f);
  fputs("$scope module loadstore $end\n", f);
  fputs("$var wire 1 \x3c io_kill $end\n", f);
  fputs("$var wire 1 \x3d store_fault $end\n", f);
  fputs("$var wire 1 \x41 io_store $end\n", f);
  fputs("$var wire 1 \x42 store_misaligned $end\n", f);
  fputs("$var wire 1 \x43 bus_op $end\n", f);
  fputs("$var wire 1 \x44 imem_op $end\n", f);
  fputs("$var wire 1 \x45 dmem_op $end\n", f);
  fputs("$var wire 1 \x46 permission $end\n", f);
  fputs("$var wire 1 \x47 write $end\n", f);
  fputs("$var wire 1 \x48 io_dmem_byte_write_0 $end\n", f);
  fputs("$var wire 1 \x4b io_dmem_byte_write_1 $end\n", f);
  fputs("$var wire 1 \x4e io_dmem_byte_write_2 $end\n", f);
  fputs("$var wire 1 \x51 io_dmem_byte_write_3 $end\n", f);
  fputs("$var wire 1 \x57 io_load $end\n", f);
  fputs("$var wire 1 \x58 io_dmem_enable $end\n", f);
  fputs("$var wire 1 \x6f io_imem_rw_write $end\n", f);
  fputs("$var wire 1 \x72 io_imem_rw_enable $end\n", f);
  fputs("$var wire 1 \x3b\x22 io_store_misaligned $end\n", f);
  fputs("$var wire 1 \x3e\x22 load_misaligned $end\n", f);
  fputs("$var wire 1 \x3f\x22 io_load_misaligned $end\n", f);
  fputs("$var wire 1 \x2f\x23 io_imem_r_enable $end\n", f);
  fputs("$var wire 1 \x30\x23 dmem_op_reg $end\n", f);
  fputs("$var wire 1 \x31\x23 imem_op_reg $end\n", f);
  fputs("$var wire 1 \x6e\x23 io_bus_enable $end\n", f);
  fputs("$var wire 1 \x71\x23 io_bus_write $end\n", f);
  fputs("$var wire 2 \x5d\x24 addr_byte_reg $end\n", f);
  fputs("$var wire 3 \x4f\x25 io_thread $end\n", f);
  fputs("$var wire 4 \x74\x25 io_mem_type $end\n", f);
  fputs("$var wire 4 \x76\x25 io_imem_protection_0 $end\n", f);
  fputs("$var wire 4 \x78\x25 io_imem_protection_1 $end\n", f);
  fputs("$var wire 4 \x7a\x25 io_imem_protection_2 $end\n", f);
  fputs("$var wire 4 \x7c\x25 io_imem_protection_3 $end\n", f);
  fputs("$var wire 4 \x7e\x25 io_imem_protection_4 $end\n", f);
  fputs("$var wire 4 \x22\x26 io_imem_protection_5 $end\n", f);
  fputs("$var wire 4 \x24\x26 io_imem_protection_6 $end\n", f);
  fputs("$var wire 4 \x26\x26 io_imem_protection_7 $end\n", f);
  fputs("$var wire 4 \x28\x26 io_dmem_protection_0 $end\n", f);
  fputs("$var wire 4 \x2a\x26 io_dmem_protection_1 $end\n", f);
  fputs("$var wire 4 \x2c\x26 io_dmem_protection_2 $end\n", f);
  fputs("$var wire 4 \x2e\x26 io_dmem_protection_3 $end\n", f);
  fputs("$var wire 4 \x30\x26 io_dmem_protection_4 $end\n", f);
  fputs("$var wire 4 \x32\x26 io_dmem_protection_5 $end\n", f);
  fputs("$var wire 4 \x34\x26 io_dmem_protection_6 $end\n", f);
  fputs("$var wire 4 \x36\x26 io_dmem_protection_7 $end\n", f);
  fputs("$var wire 4 \x54\x26 mem_type_reg $end\n", f);
  fputs("$var wire 10 \x36\x27 io_bus_addr $end\n", f);
  fputs("$var wire 12 \x39\x27 io_dmem_addr $end\n", f);
  fputs("$var wire 12 \x3e\x27 io_imem_rw_addr $end\n", f);
  fputs("$var wire 12 \x42\x27 io_imem_r_addr $end\n", f);
  fputs("$var wire 32 \x49\x27 io_addr $end\n", f);
  fputs("$var wire 32 \x4a\x27 io_data_in $end\n", f);
  fputs("$var wire 32 \x4b\x27 io_dmem_data_in $end\n", f);
  fputs("$var wire 32 \x65\x27 io_imem_rw_data_in $end\n", f);
  fputs("$var wire 32 \x29\x28 io_bus_data_out $end\n", f);
  fputs("$var wire 32 \x2c\x28 io_imem_rw_data_out $end\n", f);
  fputs("$var wire 32 \x2f\x28 io_dmem_data_out $end\n", f);
  fputs("$var wire 32 \x30\x28 io_data_out $end\n", f);
  fputs("$var wire 32 \x5e\x28 io_bus_data_in $end\n", f);
  fputs("$upscope $end\n", f);
  fputs("$scope module csr $end\n", f);
  fputs("$var wire 1 \x21 int_ext $end\n", f);
  fputs("$var wire 1 \x22 io_int_ext $end\n", f);
  fputs("$var wire 1 \x25 expired_0 $end\n", f);
  fputs("$var wire 1 \x26 expired_1 $end\n", f);
  fputs("$var wire 1 \x27 expired_2 $end\n", f);
  fputs("$var wire 1 \x28 expired_3 $end\n", f);
  fputs("$var wire 1 \x29 expired_4 $end\n", f);
  fputs("$var wire 1 \x2a expired_5 $end\n", f);
  fputs("$var wire 1 \x2b expired_6 $end\n", f);
  fputs("$var wire 1 \x2c expired_7 $end\n", f);
  fputs("$var wire 1 \x2f io_rw_valid $end\n", f);
  fputs("$var wire 1 \x30 int_expire $end\n", f);
  fputs("$var wire 1 \x31 io_int_expire $end\n", f);
  fputs("$var wire 1 \x34 exc_expire $end\n", f);
  fputs("$var wire 1 \x35 io_exc_expire $end\n", f);
  fputs("$var wire 1 \x5f io_expire $end\n", f);
  fputs("$var wire 1 \x75 io_kill $end\n", f);
  fputs("$var wire 1 \x76 priv_fault $end\n", f);
  fputs("$var wire 1 \x7a io_rw_write $end\n", f);
  fputs("$var wire 1 \x7b write $end\n", f);
  fputs("$var wire 1 \x7e io_int_exts_0 $end\n", f);
  fputs("$var wire 1 \x23\x22 io_int_exts_1 $end\n", f);
  fputs("$var wire 1 \x26\x22 io_int_exts_2 $end\n", f);
  fputs("$var wire 1 \x29\x22 io_int_exts_3 $end\n", f);
  fputs("$var wire 1 \x2c\x22 io_int_exts_4 $end\n", f);
  fputs("$var wire 1 \x2f\x22 io_int_exts_5 $end\n", f);
  fputs("$var wire 1 \x32\x22 io_int_exts_6 $end\n", f);
  fputs("$var wire 1 \x35\x22 io_int_exts_7 $end\n", f);
  fputs("$var wire 1 \x37\x22 reset $end\n", f);
  fputs("$var wire 1 \x38\x22 reg_msip_1 $end\n", f);
  fputs("$var wire 1 \x39\x22 reg_mtie_7 $end\n", f);
  fputs("$var wire 1 \x3a\x22 reg_ie1_7 $end\n", f);
  fputs("$var wire 1 \x42\x22 io_priv_fault $end\n", f);
  fputs("$var wire 1 \x49\x22 io_exception $end\n", f);
  fputs("$var wire 1 \x4a\x22 reg_ie_7 $end\n", f);
  fputs("$var wire 1 \x4b\x22 reg_msip_7 $end\n", f);
  fputs("$var wire 1 \x4c\x22 reg_mtie_6 $end\n", f);
  fputs("$var wire 1 \x4d\x22 reg_ie1_6 $end\n", f);
  fputs("$var wire 1 \x4e\x22 reg_ie_6 $end\n", f);
  fputs("$var wire 1 \x4f\x22 reg_msip_6 $end\n", f);
  fputs("$var wire 1 \x50\x22 reg_mtie_5 $end\n", f);
  fputs("$var wire 1 \x51\x22 reg_ie1_5 $end\n", f);
  fputs("$var wire 1 \x52\x22 reg_ie_5 $end\n", f);
  fputs("$var wire 1 \x53\x22 reg_msip_5 $end\n", f);
  fputs("$var wire 1 \x54\x22 reg_mtie_4 $end\n", f);
  fputs("$var wire 1 \x55\x22 reg_ie1_4 $end\n", f);
  fputs("$var wire 1 \x56\x22 reg_ie_4 $end\n", f);
  fputs("$var wire 1 \x57\x22 reg_msip_4 $end\n", f);
  fputs("$var wire 1 \x58\x22 reg_mtie_3 $end\n", f);
  fputs("$var wire 1 \x59\x22 reg_ie1_3 $end\n", f);
  fputs("$var wire 1 \x5a\x22 reg_ie_3 $end\n", f);
  fputs("$var wire 1 \x5b\x22 reg_msip_3 $end\n", f);
  fputs("$var wire 1 \x5c\x22 reg_mtie_2 $end\n", f);
  fputs("$var wire 1 \x5d\x22 reg_ie1_2 $end\n", f);
  fputs("$var wire 1 \x5e\x22 reg_ie_2 $end\n", f);
  fputs("$var wire 1 \x5f\x22 reg_msip_2 $end\n", f);
  fputs("$var wire 1 \x60\x22 reg_mtie_1 $end\n", f);
  fputs("$var wire 1 \x61\x22 reg_ie1_1 $end\n", f);
  fputs("$var wire 1 \x62\x22 reg_ie_1 $end\n", f);
  fputs("$var wire 1 \x63\x22 reg_mtie_0 $end\n", f);
  fputs("$var wire 1 \x64\x22 reg_ie1_0 $end\n", f);
  fputs("$var wire 1 \x65\x22 reg_ie_0 $end\n", f);
  fputs("$var wire 1 \x68\x22 io_gpio_in_3 $end\n", f);
  fputs("$var wire 1 \x69\x22 reg_gpis_3 $end\n", f);
  fputs("$var wire 1 \x6c\x22 io_gpio_in_2 $end\n", f);
  fputs("$var wire 1 \x6d\x22 reg_gpis_2 $end\n", f);
  fputs("$var wire 1 \x70\x22 io_gpio_in_1 $end\n", f);
  fputs("$var wire 1 \x71\x22 reg_gpis_1 $end\n", f);
  fputs("$var wire 1 \x74\x22 io_gpio_in_0 $end\n", f);
  fputs("$var wire 1 \x75\x22 reg_gpis_0 $end\n", f);
  fputs("$var wire 1 \x7a\x22 io_sleep $end\n", f);
  fputs("$var wire 1 \x7b\x22 sleep $end\n", f);
  fputs("$var wire 1 \x7c\x22 wake_1 $end\n", f);
  fputs("$var wire 1 \x7d\x22 wake_7 $end\n", f);
  fputs("$var wire 1 \x7e\x22 wake_6 $end\n", f);
  fputs("$var wire 1 \x21\x23 wake_5 $end\n", f);
  fputs("$var wire 1 \x22\x23 wake_4 $end\n", f);
  fputs("$var wire 1 \x23\x23 wake_3 $end\n", f);
  fputs("$var wire 1 \x27\x23 io_ee $end\n", f);
  fputs("$var wire 1 \x2b\x23 io_ie $end\n", f);
  fputs("$var wire 1 \x2c\x23 wake_2 $end\n", f);
  fputs("$var wire 1 \x2d\x23 wake_0 $end\n", f);
  fputs("$var wire 1 \x2e\x23 reg_msip_0 $end\n", f);
  fputs("$var wire 2 \x38\x24 io_rw_csr_type $end\n", f);
  fputs("$var wire 2 \x39\x24 reg_prv1_7 $end\n", f);
  fputs("$var wire 2 \x3a\x24 reg_prv_7 $end\n", f);
  fputs("$var wire 2 \x3b\x24 reg_prv1_6 $end\n", f);
  fputs("$var wire 2 \x3c\x24 reg_prv_6 $end\n", f);
  fputs("$var wire 2 \x3d\x24 reg_prv1_5 $end\n", f);
  fputs("$var wire 2 \x3e\x24 reg_prv_5 $end\n", f);
  fputs("$var wire 2 \x3f\x24 reg_prv1_4 $end\n", f);
  fputs("$var wire 2 \x40\x24 reg_prv_4 $end\n", f);
  fputs("$var wire 2 \x41\x24 reg_prv1_3 $end\n", f);
  fputs("$var wire 2 \x42\x24 reg_prv_3 $end\n", f);
  fputs("$var wire 2 \x43\x24 reg_prv1_2 $end\n", f);
  fputs("$var wire 2 \x44\x24 reg_prv_2 $end\n", f);
  fputs("$var wire 2 \x45\x24 reg_prv1_1 $end\n", f);
  fputs("$var wire 2 \x46\x24 reg_prv_1 $end\n", f);
  fputs("$var wire 2 \x47\x24 reg_prv1_0 $end\n", f);
  fputs("$var wire 2 \x48\x24 reg_prv_0 $end\n", f);
  fputs("$var wire 2 \x49\x24 reg_gpos_3 $end\n", f);
  fputs("$var wire 2 \x4a\x24 reg_gpos_2 $end\n", f);
  fputs("$var wire 2 \x4b\x24 reg_gpos_1 $end\n", f);
  fputs("$var wire 2 \x4c\x24 reg_gpos_0 $end\n", f);
  fputs("$var wire 2 \x4d\x24 reg_tmodes_1 $end\n", f);
  fputs("$var wire 2 \x4e\x24 reg_tmodes_7 $end\n", f);
  fputs("$var wire 2 \x4f\x24 reg_tmodes_6 $end\n", f);
  fputs("$var wire 2 \x50\x24 reg_tmodes_5 $end\n", f);
  fputs("$var wire 2 \x51\x24 reg_tmodes_4 $end\n", f);
  fputs("$var wire 2 \x52\x24 reg_tmodes_3 $end\n", f);
  fputs("$var wire 2 \x53\x24 reg_timer_7 $end\n", f);
  fputs("$var wire 2 \x54\x24 reg_timer_6 $end\n", f);
  fputs("$var wire 2 \x55\x24 reg_timer_5 $end\n", f);
  fputs("$var wire 2 \x56\x24 reg_timer_4 $end\n", f);
  fputs("$var wire 2 \x57\x24 reg_timer_3 $end\n", f);
  fputs("$var wire 2 \x58\x24 reg_timer_1 $end\n", f);
  fputs("$var wire 2 \x59\x24 reg_timer_0 $end\n", f);
  fputs("$var wire 2 \x5a\x24 reg_timer_2 $end\n", f);
  fputs("$var wire 2 \x5b\x24 reg_tmodes_2 $end\n", f);
  fputs("$var wire 2 \x5c\x24 reg_tmodes_0 $end\n", f);
  fputs("$var wire 2 \x70\x24 io_tmodes_5 $end\n", f);
  fputs("$var wire 2 \x74\x24 io_tmodes_4 $end\n", f);
  fputs("$var wire 2 \x78\x24 io_tmodes_3 $end\n", f);
  fputs("$var wire 2 \x7c\x24 io_tmodes_2 $end\n", f);
  fputs("$var wire 2 \x22\x25 io_tmodes_1 $end\n", f);
  fputs("$var wire 2 \x26\x25 io_tmodes_0 $end\n", f);
  fputs("$var wire 2 \x2a\x25 io_tmodes_6 $end\n", f);
  fputs("$var wire 2 \x2e\x25 io_tmodes_7 $end\n", f);
  fputs("$var wire 2 \x42\x25 io_gpio_out_3 $end\n", f);
  fputs("$var wire 2 \x45\x25 io_gpio_out_2 $end\n", f);
  fputs("$var wire 2 \x48\x25 io_gpio_out_1 $end\n", f);
  fputs("$var wire 2 \x4b\x25 io_gpio_out_0 $end\n", f);
  fputs("$var wire 3 \x4e\x25 io_rw_thread $end\n", f);
  fputs("$var wire 4 \x75\x25 io_imem_protection_0 $end\n", f);
  fputs("$var wire 4 \x77\x25 io_imem_protection_1 $end\n", f);
  fputs("$var wire 4 \x79\x25 io_imem_protection_2 $end\n", f);
  fputs("$var wire 4 \x7b\x25 io_imem_protection_3 $end\n", f);
  fputs("$var wire 4 \x7d\x25 io_imem_protection_4 $end\n", f);
  fputs("$var wire 4 \x21\x26 io_imem_protection_5 $end\n", f);
  fputs("$var wire 4 \x23\x26 io_imem_protection_6 $end\n", f);
  fputs("$var wire 4 \x25\x26 io_imem_protection_7 $end\n", f);
  fputs("$var wire 4 \x27\x26 io_dmem_protection_0 $end\n", f);
  fputs("$var wire 4 \x29\x26 io_dmem_protection_1 $end\n", f);
  fputs("$var wire 4 \x2b\x26 io_dmem_protection_2 $end\n", f);
  fputs("$var wire 4 \x2d\x26 io_dmem_protection_3 $end\n", f);
  fputs("$var wire 4 \x2f\x26 io_dmem_protection_4 $end\n", f);
  fputs("$var wire 4 \x31\x26 io_dmem_protection_5 $end\n", f);
  fputs("$var wire 4 \x33\x26 io_dmem_protection_6 $end\n", f);
  fputs("$var wire 4 \x35\x26 io_dmem_protection_7 $end\n", f);
  fputs("$var wire 4 \x37\x26 reg_dmem_protection_7 $end\n", f);
  fputs("$var wire 4 \x38\x26 reg_dmem_protection_6 $end\n", f);
  fputs("$var wire 4 \x39\x26 reg_dmem_protection_5 $end\n", f);
  fputs("$var wire 4 \x3a\x26 reg_dmem_protection_4 $end\n", f);
  fputs("$var wire 4 \x3b\x26 reg_dmem_protection_3 $end\n", f);
  fputs("$var wire 4 \x3c\x26 reg_dmem_protection_2 $end\n", f);
  fputs("$var wire 4 \x3d\x26 reg_dmem_protection_1 $end\n", f);
  fputs("$var wire 4 \x3e\x26 reg_dmem_protection_0 $end\n", f);
  fputs("$var wire 4 \x3f\x26 reg_imem_protection_7 $end\n", f);
  fputs("$var wire 4 \x40\x26 reg_imem_protection_6 $end\n", f);
  fputs("$var wire 4 \x41\x26 reg_imem_protection_5 $end\n", f);
  fputs("$var wire 4 \x42\x26 reg_imem_protection_4 $end\n", f);
  fputs("$var wire 4 \x43\x26 reg_imem_protection_3 $end\n", f);
  fputs("$var wire 4 \x44\x26 reg_imem_protection_2 $end\n", f);
  fputs("$var wire 4 \x45\x26 reg_imem_protection_1 $end\n", f);
  fputs("$var wire 4 \x46\x26 reg_imem_protection_0 $end\n", f);
  fputs("$var wire 4 \x47\x26 reg_gpo_protection_3 $end\n", f);
  fputs("$var wire 4 \x48\x26 reg_gpo_protection_2 $end\n", f);
  fputs("$var wire 4 \x49\x26 reg_gpo_protection_1 $end\n", f);
  fputs("$var wire 4 \x4a\x26 reg_gpo_protection_0 $end\n", f);
  fputs("$var wire 4 \x4c\x26 reg_slots_7 $end\n", f);
  fputs("$var wire 4 \x4d\x26 reg_slots_6 $end\n", f);
  fputs("$var wire 4 \x4e\x26 reg_slots_5 $end\n", f);
  fputs("$var wire 4 \x4f\x26 reg_slots_4 $end\n", f);
  fputs("$var wire 4 \x50\x26 reg_slots_3 $end\n", f);
  fputs("$var wire 4 \x51\x26 reg_slots_2 $end\n", f);
  fputs("$var wire 4 \x52\x26 reg_slots_1 $end\n", f);
  fputs("$var wire 4 \x53\x26 reg_slots_0 $end\n", f);
  fputs("$var wire 4 \x56\x26 io_slots_7 $end\n", f);
  fputs("$var wire 4 \x5a\x26 io_slots_6 $end\n", f);
  fputs("$var wire 4 \x5e\x26 io_slots_5 $end\n", f);
  fputs("$var wire 4 \x62\x26 io_slots_4 $end\n", f);
  fputs("$var wire 4 \x66\x26 io_slots_3 $end\n", f);
  fputs("$var wire 4 \x6a\x26 io_slots_2 $end\n", f);
  fputs("$var wire 4 \x6e\x26 io_slots_1 $end\n", f);
  fputs("$var wire 4 \x72\x26 io_slots_0 $end\n", f);
  fputs("$var wire 5 \x21\x27 io_cause $end\n", f);
  fputs("$var wire 5 \x22\x27 reg_causes_7 $end\n", f);
  fputs("$var wire 5 \x23\x27 reg_causes_6 $end\n", f);
  fputs("$var wire 5 \x24\x27 reg_causes_5 $end\n", f);
  fputs("$var wire 5 \x25\x27 reg_causes_4 $end\n", f);
  fputs("$var wire 5 \x26\x27 reg_causes_3 $end\n", f);
  fputs("$var wire 5 \x27\x27 reg_causes_2 $end\n", f);
  fputs("$var wire 5 \x28\x27 reg_causes_1 $end\n", f);
  fputs("$var wire 5 \x29\x27 reg_causes_0 $end\n", f);
  fputs("$var wire 12 \x41\x27 io_rw_addr $end\n", f);
  fputs("$var wire 32 \x52\x27 io_evecs_0 $end\n", f);
  fputs("$var wire 32 \x53\x27 io_evecs_1 $end\n", f);
  fputs("$var wire 32 \x54\x27 io_evecs_2 $end\n", f);
  fputs("$var wire 32 \x55\x27 io_evecs_3 $end\n", f);
  fputs("$var wire 32 \x56\x27 io_evecs_4 $end\n", f);
  fputs("$var wire 32 \x57\x27 io_evecs_5 $end\n", f);
  fputs("$var wire 32 \x58\x27 io_evecs_6 $end\n", f);
  fputs("$var wire 32 \x59\x27 io_evecs_7 $end\n", f);
  fputs("$var wire 32 \x69\x27 io_rw_data_in $end\n", f);
  fputs("$var wire 32 \x6a\x27 reg_to_host $end\n", f);
  fputs("$var wire 32 \x6b\x27 io_epc $end\n", f);
  fputs("$var wire 32 \x6c\x27 reg_epcs_7 $end\n", f);
  fputs("$var wire 32 \x6d\x27 reg_epcs_6 $end\n", f);
  fputs("$var wire 32 \x6e\x27 reg_epcs_5 $end\n", f);
  fputs("$var wire 32 \x6f\x27 reg_epcs_4 $end\n", f);
  fputs("$var wire 32 \x70\x27 reg_epcs_3 $end\n", f);
  fputs("$var wire 32 \x71\x27 reg_epcs_2 $end\n", f);
  fputs("$var wire 32 \x72\x27 reg_epcs_1 $end\n", f);
  fputs("$var wire 32 \x73\x27 reg_epcs_0 $end\n", f);
  fputs("$var wire 32 \x74\x27 reg_compare_7 $end\n", f);
  fputs("$var wire 32 \x75\x27 reg_compare_6 $end\n", f);
  fputs("$var wire 32 \x76\x27 reg_compare_5 $end\n", f);
  fputs("$var wire 32 \x77\x27 reg_compare_4 $end\n", f);
  fputs("$var wire 32 \x78\x27 reg_compare_3 $end\n", f);
  fputs("$var wire 32 \x79\x27 reg_compare_1 $end\n", f);
  fputs("$var wire 32 \x7a\x27 reg_compare_0 $end\n", f);
  fputs("$var wire 32 \x7b\x27 reg_compare_2 $end\n", f);
  fputs("$var wire 32 \x36\x28 io_rw_data_out $end\n", f);
  fputs("$var wire 32 \x61\x28 io_host_to_host $end\n", f);
  fputs("$var wire 36 \x68\x28 status_0 $end\n", f);
  fputs("$var wire 36 \x69\x28 status_1 $end\n", f);
  fputs("$var wire 36 \x6a\x28 status_2 $end\n", f);
  fputs("$var wire 36 \x6b\x28 status_3 $end\n", f);
  fputs("$var wire 36 \x6c\x28 status_4 $end\n", f);
  fputs("$var wire 36 \x6d\x28 status_5 $end\n", f);
  fputs("$var wire 36 \x6e\x28 status_6 $end\n", f);
  fputs("$var wire 36 \x6f\x28 status_7 $end\n", f);
  fputs("$var wire 36 \x70\x28 data_out $end\n", f);
  fputs("$var wire 36 \x71\x28 data_in $end\n", f);
  fputs("$var wire 36 \x72\x28 reg_sup0_7 $end\n", f);
  fputs("$var wire 36 \x73\x28 reg_sup0_6 $end\n", f);
  fputs("$var wire 36 \x74\x28 reg_sup0_5 $end\n", f);
  fputs("$var wire 36 \x75\x28 reg_sup0_4 $end\n", f);
  fputs("$var wire 36 \x76\x28 reg_sup0_3 $end\n", f);
  fputs("$var wire 36 \x77\x28 reg_sup0_2 $end\n", f);
  fputs("$var wire 36 \x78\x28 reg_sup0_1 $end\n", f);
  fputs("$var wire 36 \x79\x28 reg_sup0_0 $end\n", f);
  fputs("$var wire 36 \x7a\x28 reg_evecs_7 $end\n", f);
  fputs("$var wire 36 \x7b\x28 reg_evecs_6 $end\n", f);
  fputs("$var wire 36 \x7c\x28 reg_evecs_5 $end\n", f);
  fputs("$var wire 36 \x7d\x28 reg_evecs_4 $end\n", f);
  fputs("$var wire 36 \x7e\x28 reg_evecs_3 $end\n", f);
  fputs("$var wire 36 \x21\x29 reg_evecs_2 $end\n", f);
  fputs("$var wire 36 \x22\x29 reg_evecs_1 $end\n", f);
  fputs("$var wire 36 \x23\x29 reg_evecs_0 $end\n", f);
  fputs("$var wire 64 \x24\x29 reg_time $end\n", f);
  fputs("$upscope $end\n", f);
  fputs("$upscope $end\n", f);
  fputs("$scope module imem $end\n", f);
  fputs("$var wire 1 \x6e io_core_r_enable $end\n", f);
  fputs("$var wire 1 \x71 io_core_rw_write $end\n", f);
  fputs("$var wire 1 \x74 io_core_rw_enable $end\n", f);
  fputs("$var wire 1 \x6c\x23 io_bus_ready $end\n", f);
  fputs("$var wire 12 \x3d\x27 io_core_r_addr $end\n", f);
  fputs("$var wire 12 \x40\x27 io_core_rw_addr $end\n", f);
  fputs("$var wire 32 \x64\x27 dout_r $end\n", f);
  fputs("$var wire 32 \x67\x27 io_core_rw_data_in $end\n", f);
  fputs("$var wire 32 \x68\x27 R0 $end\n", f);
  fputs("$var wire 32 \x22\x28 io_core_r_data_out $end\n", f);
  fputs("$var wire 32 \x2a\x28 io_core_rw_data_out $end\n", f);
  fputs("$var wire 32 \x5a\x28 io_bus_data_out $end\n", f);
  fputs("$upscope $end\n", f);
  fputs("$scope module dmem $end\n", f);
  fputs("$var wire 1 \x4a io_core_byte_write_0 $end\n", f);
  fputs("$var wire 1 \x4d io_core_byte_write_1 $end\n", f);
  fputs("$var wire 1 \x50 io_core_byte_write_2 $end\n", f);
  fputs("$var wire 1 \x53 io_core_byte_write_3 $end\n", f);
  fputs("$var wire 1 \x5a io_core_enable $end\n", f);
  fputs("$var wire 12 \x3b\x27 io_core_addr $end\n", f);
  fputs("$var wire 32 \x4d\x27 io_core_data_in $end\n", f);
  fputs("$var wire 32 \x4e\x27 dout $end\n", f);
  fputs("$var wire 32 \x2d\x28 io_core_data_out $end\n", f);
  fputs("$var wire 32 \x5c\x28 io_bus_data_out $end\n", f);
  fputs("$upscope $end\n", f);
  fputs("$upscope $end\n", f);
  fputs("$enddefinitions $end\n", f);
  fputs("$dumpvars\n", f);
  fputs("$end\n", f);
  fputs("#0\n", f);
  dat_dump<1>(f, Core_datapath_csr__int_ext, 0x21);
  Core_datapath_csr__int_ext__prev = Core_datapath_csr__int_ext;
  dat_dump<1>(f, Core_datapath_csr__io_int_ext, 0x22);
  Core_datapath_csr__io_int_ext__prev = Core_datapath_csr__io_int_ext;
  dat_dump<1>(f, Core_datapath__io_control_exe_int_ext, 0x23);
  Core_datapath__io_control_exe_int_ext__prev = Core_datapath__io_control_exe_int_ext;
  dat_dump<1>(f, Core_control__io_exe_int_ext, 0x24);
  Core_control__io_exe_int_ext__prev = Core_control__io_exe_int_ext;
  dat_dump<1>(f, Core_datapath_csr__expired_0, 0x25);
  Core_datapath_csr__expired_0__prev = Core_datapath_csr__expired_0;
  dat_dump<1>(f, Core_datapath_csr__expired_1, 0x26);
  Core_datapath_csr__expired_1__prev = Core_datapath_csr__expired_1;
  dat_dump<1>(f, Core_datapath_csr__expired_2, 0x27);
  Core_datapath_csr__expired_2__prev = Core_datapath_csr__expired_2;
  dat_dump<1>(f, Core_datapath_csr__expired_3, 0x28);
  Core_datapath_csr__expired_3__prev = Core_datapath_csr__expired_3;
  dat_dump<1>(f, Core_datapath_csr__expired_4, 0x29);
  Core_datapath_csr__expired_4__prev = Core_datapath_csr__expired_4;
  dat_dump<1>(f, Core_datapath_csr__expired_5, 0x2a);
  Core_datapath_csr__expired_5__prev = Core_datapath_csr__expired_5;
  dat_dump<1>(f, Core_datapath_csr__expired_6, 0x2b);
  Core_datapath_csr__expired_6__prev = Core_datapath_csr__expired_6;
  dat_dump<1>(f, Core_datapath_csr__expired_7, 0x2c);
  Core_datapath_csr__expired_7__prev = Core_datapath_csr__expired_7;
  dat_dump<1>(f, Core_control__io_exe_valid, 0x2d);
  Core_control__io_exe_valid__prev = Core_control__io_exe_valid;
  dat_dump<1>(f, Core_datapath__io_control_exe_valid, 0x2e);
  Core_datapath__io_control_exe_valid__prev = Core_datapath__io_control_exe_valid;
  dat_dump<1>(f, Core_datapath_csr__io_rw_valid, 0x2f);
  Core_datapath_csr__io_rw_valid__prev = Core_datapath_csr__io_rw_valid;
  dat_dump<1>(f, Core_datapath_csr__int_expire, 0x30);
  Core_datapath_csr__int_expire__prev = Core_datapath_csr__int_expire;
  dat_dump<1>(f, Core_datapath_csr__io_int_expire, 0x31);
  Core_datapath_csr__io_int_expire__prev = Core_datapath_csr__io_int_expire;
  dat_dump<1>(f, Core_datapath__io_control_exe_int_expire, 0x32);
  Core_datapath__io_control_exe_int_expire__prev = Core_datapath__io_control_exe_int_expire;
  dat_dump<1>(f, Core_control__io_exe_int_expire, 0x33);
  Core_control__io_exe_int_expire__prev = Core_control__io_exe_int_expire;
  dat_dump<1>(f, Core_datapath_csr__exc_expire, 0x34);
  Core_datapath_csr__exc_expire__prev = Core_datapath_csr__exc_expire;
  dat_dump<1>(f, Core_datapath_csr__io_exc_expire, 0x35);
  Core_datapath_csr__io_exc_expire__prev = Core_datapath_csr__io_exc_expire;
  dat_dump<1>(f, Core_datapath__io_control_exe_exc_expire, 0x36);
  Core_datapath__io_control_exe_exc_expire__prev = Core_datapath__io_control_exe_exc_expire;
  dat_dump<1>(f, Core_control__io_exe_exc_expire, 0x37);
  Core_control__io_exe_exc_expire__prev = Core_control__io_exe_exc_expire;
  dat_dump<1>(f, Core_control__exe_any_exc, 0x38);
  Core_control__exe_any_exc__prev = Core_control__exe_any_exc;
  dat_dump<1>(f, Core_control__exe_kill, 0x39);
  Core_control__exe_kill__prev = Core_control__exe_kill;
  dat_dump<1>(f, Core_control__io_exe_kill, 0x3a);
  Core_control__io_exe_kill__prev = Core_control__io_exe_kill;
  dat_dump<1>(f, Core_datapath__io_control_exe_kill, 0x3b);
  Core_datapath__io_control_exe_kill__prev = Core_datapath__io_control_exe_kill;
  dat_dump<1>(f, Core_datapath_loadstore__io_kill, 0x3c);
  Core_datapath_loadstore__io_kill__prev = Core_datapath_loadstore__io_kill;
  dat_dump<1>(f, Core_datapath_loadstore__store_fault, 0x3d);
  Core_datapath_loadstore__store_fault__prev = Core_datapath_loadstore__store_fault;
  dat_dump<1>(f, Core_control__exe_store, 0x3e);
  Core_control__exe_store__prev = Core_control__exe_store;
  dat_dump<1>(f, Core_control__io_exe_store, 0x3f);
  Core_control__io_exe_store__prev = Core_control__io_exe_store;
  dat_dump<1>(f, Core_datapath__io_control_exe_store, 0x40);
  Core_datapath__io_control_exe_store__prev = Core_datapath__io_control_exe_store;
  dat_dump<1>(f, Core_datapath_loadstore__io_store, 0x41);
  Core_datapath_loadstore__io_store__prev = Core_datapath_loadstore__io_store;
  dat_dump<1>(f, Core_datapath_loadstore__store_misaligned, 0x42);
  Core_datapath_loadstore__store_misaligned__prev = Core_datapath_loadstore__store_misaligned;
  dat_dump<1>(f, Core_datapath_loadstore__bus_op, 0x43);
  Core_datapath_loadstore__bus_op__prev = Core_datapath_loadstore__bus_op;
  dat_dump<1>(f, Core_datapath_loadstore__imem_op, 0x44);
  Core_datapath_loadstore__imem_op__prev = Core_datapath_loadstore__imem_op;
  dat_dump<1>(f, Core_datapath_loadstore__dmem_op, 0x45);
  Core_datapath_loadstore__dmem_op__prev = Core_datapath_loadstore__dmem_op;
  dat_dump<1>(f, Core_datapath_loadstore__permission, 0x46);
  Core_datapath_loadstore__permission__prev = Core_datapath_loadstore__permission;
  dat_dump<1>(f, Core_datapath_loadstore__write, 0x47);
  Core_datapath_loadstore__write__prev = Core_datapath_loadstore__write;
  dat_dump<1>(f, Core_datapath_loadstore__io_dmem_byte_write_0, 0x48);
  Core_datapath_loadstore__io_dmem_byte_write_0__prev = Core_datapath_loadstore__io_dmem_byte_write_0;
  dat_dump<1>(f, Core_datapath__io_dmem_byte_write_0, 0x49);
  Core_datapath__io_dmem_byte_write_0__prev = Core_datapath__io_dmem_byte_write_0;
  dat_dump<1>(f, Core_dmem__io_core_byte_write_0, 0x4a);
  Core_dmem__io_core_byte_write_0__prev = Core_dmem__io_core_byte_write_0;
  dat_dump<1>(f, Core_datapath_loadstore__io_dmem_byte_write_1, 0x4b);
  Core_datapath_loadstore__io_dmem_byte_write_1__prev = Core_datapath_loadstore__io_dmem_byte_write_1;
  dat_dump<1>(f, Core_datapath__io_dmem_byte_write_1, 0x4c);
  Core_datapath__io_dmem_byte_write_1__prev = Core_datapath__io_dmem_byte_write_1;
  dat_dump<1>(f, Core_dmem__io_core_byte_write_1, 0x4d);
  Core_dmem__io_core_byte_write_1__prev = Core_dmem__io_core_byte_write_1;
  dat_dump<1>(f, Core_datapath_loadstore__io_dmem_byte_write_2, 0x4e);
  Core_datapath_loadstore__io_dmem_byte_write_2__prev = Core_datapath_loadstore__io_dmem_byte_write_2;
  dat_dump<1>(f, Core_datapath__io_dmem_byte_write_2, 0x4f);
  Core_datapath__io_dmem_byte_write_2__prev = Core_datapath__io_dmem_byte_write_2;
  dat_dump<1>(f, Core_dmem__io_core_byte_write_2, 0x50);
  Core_dmem__io_core_byte_write_2__prev = Core_dmem__io_core_byte_write_2;
  dat_dump<1>(f, Core_datapath_loadstore__io_dmem_byte_write_3, 0x51);
  Core_datapath_loadstore__io_dmem_byte_write_3__prev = Core_datapath_loadstore__io_dmem_byte_write_3;
  dat_dump<1>(f, Core_datapath__io_dmem_byte_write_3, 0x52);
  Core_datapath__io_dmem_byte_write_3__prev = Core_datapath__io_dmem_byte_write_3;
  dat_dump<1>(f, Core_dmem__io_core_byte_write_3, 0x53);
  Core_dmem__io_core_byte_write_3__prev = Core_dmem__io_core_byte_write_3;
  dat_dump<1>(f, Core_control__exe_load, 0x54);
  Core_control__exe_load__prev = Core_control__exe_load;
  dat_dump<1>(f, Core_control__io_exe_load, 0x55);
  Core_control__io_exe_load__prev = Core_control__io_exe_load;
  dat_dump<1>(f, Core_datapath__io_control_exe_load, 0x56);
  Core_datapath__io_control_exe_load__prev = Core_datapath__io_control_exe_load;
  dat_dump<1>(f, Core_datapath_loadstore__io_load, 0x57);
  Core_datapath_loadstore__io_load__prev = Core_datapath_loadstore__io_load;
  dat_dump<1>(f, Core_datapath_loadstore__io_dmem_enable, 0x58);
  Core_datapath_loadstore__io_dmem_enable__prev = Core_datapath_loadstore__io_dmem_enable;
  dat_dump<1>(f, Core_datapath__io_dmem_enable, 0x59);
  Core_datapath__io_dmem_enable__prev = Core_datapath__io_dmem_enable;
  dat_dump<1>(f, Core_dmem__io_core_enable, 0x5a);
  Core_dmem__io_core_enable__prev = Core_dmem__io_core_enable;
  dat_dump<1>(f, Core_control__dec_load, 0x5b);
  Core_control__dec_load__prev = Core_control__dec_load;
  dat_dump<1>(f, Core_control__dec_fence_i, 0x5c);
  Core_control__dec_fence_i__prev = Core_control__dec_fence_i;
  dat_dump<1>(f, Core_control__dec_stall, 0x5d);
  Core_control__dec_stall__prev = Core_control__dec_stall;
  dat_dump<1>(f, Core_control__if_pre_valid, 0x5e);
  Core_control__if_pre_valid__prev = Core_control__if_pre_valid;
  dat_dump<1>(f, Core_datapath_csr__io_expire, 0x5f);
  Core_datapath_csr__io_expire__prev = Core_datapath_csr__io_expire;
  dat_dump<1>(f, Core_datapath__io_control_exe_expire, 0x60);
  Core_datapath__io_control_exe_expire__prev = Core_datapath__io_control_exe_expire;
  dat_dump<1>(f, Core_control__io_exe_expire, 0x61);
  Core_control__io_exe_expire__prev = Core_control__io_exe_expire;
  dat_dump<1>(f, Core_control__exe_du, 0x62);
  Core_control__exe_du__prev = Core_control__exe_du;
  dat_dump<1>(f, Core_datapath__exe_ltu, 0x63);
  Core_datapath__exe_ltu__prev = Core_datapath__exe_ltu;
  dat_dump<1>(f, Core_datapath__exe_lt, 0x64);
  Core_datapath__exe_lt__prev = Core_datapath__exe_lt;
  dat_dump<1>(f, Core_datapath__exe_eq, 0x65);
  Core_datapath__exe_eq__prev = Core_datapath__exe_eq;
  dat_dump<1>(f, Core_datapath__exe_br_cond, 0x66);
  Core_datapath__exe_br_cond__prev = Core_datapath__exe_br_cond;
  dat_dump<1>(f, Core_datapath__io_control_exe_br_cond, 0x67);
  Core_datapath__io_control_exe_br_cond__prev = Core_datapath__io_control_exe_br_cond;
  dat_dump<1>(f, Core_control__io_exe_br_cond, 0x68);
  Core_control__io_exe_br_cond__prev = Core_control__io_exe_br_cond;
  dat_dump<1>(f, Core_control__exe_brjmp, 0x69);
  Core_control__exe_brjmp__prev = Core_control__exe_brjmp;
  dat_dump<1>(f, Core_control__next_valid, 0x6a);
  Core_control__next_valid__prev = Core_control__next_valid;
  dat_dump<1>(f, Core_control__io_next_valid, 0x6b);
  Core_control__io_next_valid__prev = Core_control__io_next_valid;
  dat_dump<1>(f, Core_datapath__io_control_next_valid, 0x6c);
  Core_datapath__io_control_next_valid__prev = Core_datapath__io_control_next_valid;
  dat_dump<1>(f, Core_datapath__io_imem_r_enable, 0x6d);
  Core_datapath__io_imem_r_enable__prev = Core_datapath__io_imem_r_enable;
  dat_dump<1>(f, Core_imem__io_core_r_enable, 0x6e);
  Core_imem__io_core_r_enable__prev = Core_imem__io_core_r_enable;
  dat_dump<1>(f, Core_datapath_loadstore__io_imem_rw_write, 0x6f);
  Core_datapath_loadstore__io_imem_rw_write__prev = Core_datapath_loadstore__io_imem_rw_write;
  dat_dump<1>(f, Core_datapath__io_imem_rw_write, 0x70);
  Core_datapath__io_imem_rw_write__prev = Core_datapath__io_imem_rw_write;
  dat_dump<1>(f, Core_imem__io_core_rw_write, 0x71);
  Core_imem__io_core_rw_write__prev = Core_imem__io_core_rw_write;
  dat_dump<1>(f, Core_datapath_loadstore__io_imem_rw_enable, 0x72);
  Core_datapath_loadstore__io_imem_rw_enable__prev = Core_datapath_loadstore__io_imem_rw_enable;
  dat_dump<1>(f, Core_datapath__io_imem_rw_enable, 0x73);
  Core_datapath__io_imem_rw_enable__prev = Core_datapath__io_imem_rw_enable;
  dat_dump<1>(f, Core_imem__io_core_rw_enable, 0x74);
  Core_imem__io_core_rw_enable__prev = Core_imem__io_core_rw_enable;
  dat_dump<1>(f, Core_datapath_csr__io_kill, 0x75);
  Core_datapath_csr__io_kill__prev = Core_datapath_csr__io_kill;
  dat_dump<1>(f, Core_datapath_csr__priv_fault, 0x76);
  Core_datapath_csr__priv_fault__prev = Core_datapath_csr__priv_fault;
  dat_dump<1>(f, Core_control__exe_csr_write, 0x77);
  Core_control__exe_csr_write__prev = Core_control__exe_csr_write;
  dat_dump<1>(f, Core_control__io_exe_csr_write, 0x78);
  Core_control__io_exe_csr_write__prev = Core_control__io_exe_csr_write;
  dat_dump<1>(f, Core_datapath__io_control_exe_csr_write, 0x79);
  Core_datapath__io_control_exe_csr_write__prev = Core_datapath__io_control_exe_csr_write;
  dat_dump<1>(f, Core_datapath_csr__io_rw_write, 0x7a);
  Core_datapath_csr__io_rw_write__prev = Core_datapath_csr__io_rw_write;
  dat_dump<1>(f, Core_datapath_csr__write, 0x7b);
  Core_datapath_csr__write__prev = Core_datapath_csr__write;
  dat_dump<1>(f, Core__io_int_exts_0, 0x7c);
  Core__io_int_exts_0__prev = Core__io_int_exts_0;
  dat_dump<1>(f, Core_datapath__io_int_exts_0, 0x7d);
  Core_datapath__io_int_exts_0__prev = Core_datapath__io_int_exts_0;
  dat_dump<1>(f, Core_datapath_csr__io_int_exts_0, 0x7e);
  Core_datapath_csr__io_int_exts_0__prev = Core_datapath_csr__io_int_exts_0;
  dat_dump<2>(f, Core__io_int_exts_1, 0x2221);
  Core__io_int_exts_1__prev = Core__io_int_exts_1;
  dat_dump<2>(f, Core_datapath__io_int_exts_1, 0x2222);
  Core_datapath__io_int_exts_1__prev = Core_datapath__io_int_exts_1;
  dat_dump<2>(f, Core_datapath_csr__io_int_exts_1, 0x2223);
  Core_datapath_csr__io_int_exts_1__prev = Core_datapath_csr__io_int_exts_1;
  dat_dump<2>(f, Core__io_int_exts_2, 0x2224);
  Core__io_int_exts_2__prev = Core__io_int_exts_2;
  dat_dump<2>(f, Core_datapath__io_int_exts_2, 0x2225);
  Core_datapath__io_int_exts_2__prev = Core_datapath__io_int_exts_2;
  dat_dump<2>(f, Core_datapath_csr__io_int_exts_2, 0x2226);
  Core_datapath_csr__io_int_exts_2__prev = Core_datapath_csr__io_int_exts_2;
  dat_dump<2>(f, Core__io_int_exts_3, 0x2227);
  Core__io_int_exts_3__prev = Core__io_int_exts_3;
  dat_dump<2>(f, Core_datapath__io_int_exts_3, 0x2228);
  Core_datapath__io_int_exts_3__prev = Core_datapath__io_int_exts_3;
  dat_dump<2>(f, Core_datapath_csr__io_int_exts_3, 0x2229);
  Core_datapath_csr__io_int_exts_3__prev = Core_datapath_csr__io_int_exts_3;
  dat_dump<2>(f, Core__io_int_exts_4, 0x222a);
  Core__io_int_exts_4__prev = Core__io_int_exts_4;
  dat_dump<2>(f, Core_datapath__io_int_exts_4, 0x222b);
  Core_datapath__io_int_exts_4__prev = Core_datapath__io_int_exts_4;
  dat_dump<2>(f, Core_datapath_csr__io_int_exts_4, 0x222c);
  Core_datapath_csr__io_int_exts_4__prev = Core_datapath_csr__io_int_exts_4;
  dat_dump<2>(f, Core__io_int_exts_5, 0x222d);
  Core__io_int_exts_5__prev = Core__io_int_exts_5;
  dat_dump<2>(f, Core_datapath__io_int_exts_5, 0x222e);
  Core_datapath__io_int_exts_5__prev = Core_datapath__io_int_exts_5;
  dat_dump<2>(f, Core_datapath_csr__io_int_exts_5, 0x222f);
  Core_datapath_csr__io_int_exts_5__prev = Core_datapath_csr__io_int_exts_5;
  dat_dump<2>(f, Core__io_int_exts_6, 0x2230);
  Core__io_int_exts_6__prev = Core__io_int_exts_6;
  dat_dump<2>(f, Core_datapath__io_int_exts_6, 0x2231);
  Core_datapath__io_int_exts_6__prev = Core_datapath__io_int_exts_6;
  dat_dump<2>(f, Core_datapath_csr__io_int_exts_6, 0x2232);
  Core_datapath_csr__io_int_exts_6__prev = Core_datapath_csr__io_int_exts_6;
  dat_dump<2>(f, Core__io_int_exts_7, 0x2233);
  Core__io_int_exts_7__prev = Core__io_int_exts_7;
  dat_dump<2>(f, Core_datapath__io_int_exts_7, 0x2234);
  Core_datapath__io_int_exts_7__prev = Core_datapath__io_int_exts_7;
  dat_dump<2>(f, Core_datapath_csr__io_int_exts_7, 0x2235);
  Core_datapath_csr__io_int_exts_7__prev = Core_datapath_csr__io_int_exts_7;
  dat_dump<2>(f, Core_datapath__reset, 0x2236);
  Core_datapath__reset__prev = Core_datapath__reset;
  dat_dump<2>(f, Core_datapath_csr__reset, 0x2237);
  Core_datapath_csr__reset__prev = Core_datapath_csr__reset;
  dat_dump<2>(f, Core_datapath_csr__reg_msip_1, 0x2238);
  Core_datapath_csr__reg_msip_1__prev = Core_datapath_csr__reg_msip_1;
  dat_dump<2>(f, Core_datapath_csr__reg_mtie_7, 0x2239);
  Core_datapath_csr__reg_mtie_7__prev = Core_datapath_csr__reg_mtie_7;
  dat_dump<2>(f, Core_datapath_csr__reg_ie1_7, 0x223a);
  Core_datapath_csr__reg_ie1_7__prev = Core_datapath_csr__reg_ie1_7;
  dat_dump<2>(f, Core_datapath_loadstore__io_store_misaligned, 0x223b);
  Core_datapath_loadstore__io_store_misaligned__prev = Core_datapath_loadstore__io_store_misaligned;
  dat_dump<2>(f, Core_datapath__io_control_exe_exc_store_misaligned, 0x223c);
  Core_datapath__io_control_exe_exc_store_misaligned__prev = Core_datapath__io_control_exe_exc_store_misaligned;
  dat_dump<2>(f, Core_control__io_exe_exc_store_misaligned, 0x223d);
  Core_control__io_exe_exc_store_misaligned__prev = Core_control__io_exe_exc_store_misaligned;
  dat_dump<2>(f, Core_datapath_loadstore__load_misaligned, 0x223e);
  Core_datapath_loadstore__load_misaligned__prev = Core_datapath_loadstore__load_misaligned;
  dat_dump<2>(f, Core_datapath_loadstore__io_load_misaligned, 0x223f);
  Core_datapath_loadstore__io_load_misaligned__prev = Core_datapath_loadstore__io_load_misaligned;
  dat_dump<2>(f, Core_datapath__io_control_exe_exc_load_misaligned, 0x2240);
  Core_datapath__io_control_exe_exc_load_misaligned__prev = Core_datapath__io_control_exe_exc_load_misaligned;
  dat_dump<2>(f, Core_control__io_exe_exc_load_misaligned, 0x2241);
  Core_control__io_exe_exc_load_misaligned__prev = Core_control__io_exe_exc_load_misaligned;
  dat_dump<2>(f, Core_datapath_csr__io_priv_fault, 0x2242);
  Core_datapath_csr__io_priv_fault__prev = Core_datapath_csr__io_priv_fault;
  dat_dump<2>(f, Core_datapath__io_control_exe_exc_priv_inst, 0x2243);
  Core_datapath__io_control_exe_exc_priv_inst__prev = Core_datapath__io_control_exe_exc_priv_inst;
  dat_dump<2>(f, Core_control__io_exe_exc_priv_inst, 0x2244);
  Core_control__io_exe_exc_priv_inst__prev = Core_control__io_exe_exc_priv_inst;
  dat_dump<2>(f, Core_control__exe_inst_exc, 0x2245);
  Core_control__exe_inst_exc__prev = Core_control__exe_inst_exc;
  dat_dump<2>(f, Core_control__exe_exception, 0x2246);
  Core_control__exe_exception__prev = Core_control__exe_exception;
  dat_dump<2>(f, Core_control__io_exe_exception, 0x2247);
  Core_control__io_exe_exception__prev = Core_control__io_exe_exception;
  dat_dump<2>(f, Core_datapath__io_control_exe_exception, 0x2248);
  Core_datapath__io_control_exe_exception__prev = Core_datapath__io_control_exe_exception;
  dat_dump<2>(f, Core_datapath_csr__io_exception, 0x2249);
  Core_datapath_csr__io_exception__prev = Core_datapath_csr__io_exception;
  dat_dump<2>(f, Core_datapath_csr__reg_ie_7, 0x224a);
  Core_datapath_csr__reg_ie_7__prev = Core_datapath_csr__reg_ie_7;
  dat_dump<2>(f, Core_datapath_csr__reg_msip_7, 0x224b);
  Core_datapath_csr__reg_msip_7__prev = Core_datapath_csr__reg_msip_7;
  dat_dump<2>(f, Core_datapath_csr__reg_mtie_6, 0x224c);
  Core_datapath_csr__reg_mtie_6__prev = Core_datapath_csr__reg_mtie_6;
  dat_dump<2>(f, Core_datapath_csr__reg_ie1_6, 0x224d);
  Core_datapath_csr__reg_ie1_6__prev = Core_datapath_csr__reg_ie1_6;
  dat_dump<2>(f, Core_datapath_csr__reg_ie_6, 0x224e);
  Core_datapath_csr__reg_ie_6__prev = Core_datapath_csr__reg_ie_6;
  dat_dump<2>(f, Core_datapath_csr__reg_msip_6, 0x224f);
  Core_datapath_csr__reg_msip_6__prev = Core_datapath_csr__reg_msip_6;
  dat_dump<2>(f, Core_datapath_csr__reg_mtie_5, 0x2250);
  Core_datapath_csr__reg_mtie_5__prev = Core_datapath_csr__reg_mtie_5;
  dat_dump<2>(f, Core_datapath_csr__reg_ie1_5, 0x2251);
  Core_datapath_csr__reg_ie1_5__prev = Core_datapath_csr__reg_ie1_5;
  dat_dump<2>(f, Core_datapath_csr__reg_ie_5, 0x2252);
  Core_datapath_csr__reg_ie_5__prev = Core_datapath_csr__reg_ie_5;
  dat_dump<2>(f, Core_datapath_csr__reg_msip_5, 0x2253);
  Core_datapath_csr__reg_msip_5__prev = Core_datapath_csr__reg_msip_5;
  dat_dump<2>(f, Core_datapath_csr__reg_mtie_4, 0x2254);
  Core_datapath_csr__reg_mtie_4__prev = Core_datapath_csr__reg_mtie_4;
  dat_dump<2>(f, Core_datapath_csr__reg_ie1_4, 0x2255);
  Core_datapath_csr__reg_ie1_4__prev = Core_datapath_csr__reg_ie1_4;
  dat_dump<2>(f, Core_datapath_csr__reg_ie_4, 0x2256);
  Core_datapath_csr__reg_ie_4__prev = Core_datapath_csr__reg_ie_4;
  dat_dump<2>(f, Core_datapath_csr__reg_msip_4, 0x2257);
  Core_datapath_csr__reg_msip_4__prev = Core_datapath_csr__reg_msip_4;
  dat_dump<2>(f, Core_datapath_csr__reg_mtie_3, 0x2258);
  Core_datapath_csr__reg_mtie_3__prev = Core_datapath_csr__reg_mtie_3;
  dat_dump<2>(f, Core_datapath_csr__reg_ie1_3, 0x2259);
  Core_datapath_csr__reg_ie1_3__prev = Core_datapath_csr__reg_ie1_3;
  dat_dump<2>(f, Core_datapath_csr__reg_ie_3, 0x225a);
  Core_datapath_csr__reg_ie_3__prev = Core_datapath_csr__reg_ie_3;
  dat_dump<2>(f, Core_datapath_csr__reg_msip_3, 0x225b);
  Core_datapath_csr__reg_msip_3__prev = Core_datapath_csr__reg_msip_3;
  dat_dump<2>(f, Core_datapath_csr__reg_mtie_2, 0x225c);
  Core_datapath_csr__reg_mtie_2__prev = Core_datapath_csr__reg_mtie_2;
  dat_dump<2>(f, Core_datapath_csr__reg_ie1_2, 0x225d);
  Core_datapath_csr__reg_ie1_2__prev = Core_datapath_csr__reg_ie1_2;
  dat_dump<2>(f, Core_datapath_csr__reg_ie_2, 0x225e);
  Core_datapath_csr__reg_ie_2__prev = Core_datapath_csr__reg_ie_2;
  dat_dump<2>(f, Core_datapath_csr__reg_msip_2, 0x225f);
  Core_datapath_csr__reg_msip_2__prev = Core_datapath_csr__reg_msip_2;
  dat_dump<2>(f, Core_datapath_csr__reg_mtie_1, 0x2260);
  Core_datapath_csr__reg_mtie_1__prev = Core_datapath_csr__reg_mtie_1;
  dat_dump<2>(f, Core_datapath_csr__reg_ie1_1, 0x2261);
  Core_datapath_csr__reg_ie1_1__prev = Core_datapath_csr__reg_ie1_1;
  dat_dump<2>(f, Core_datapath_csr__reg_ie_1, 0x2262);
  Core_datapath_csr__reg_ie_1__prev = Core_datapath_csr__reg_ie_1;
  dat_dump<2>(f, Core_datapath_csr__reg_mtie_0, 0x2263);
  Core_datapath_csr__reg_mtie_0__prev = Core_datapath_csr__reg_mtie_0;
  dat_dump<2>(f, Core_datapath_csr__reg_ie1_0, 0x2264);
  Core_datapath_csr__reg_ie1_0__prev = Core_datapath_csr__reg_ie1_0;
  dat_dump<2>(f, Core_datapath_csr__reg_ie_0, 0x2265);
  Core_datapath_csr__reg_ie_0__prev = Core_datapath_csr__reg_ie_0;
  dat_dump<2>(f, Core__io_gpio_in_3, 0x2266);
  Core__io_gpio_in_3__prev = Core__io_gpio_in_3;
  dat_dump<2>(f, Core_datapath__io_gpio_in_3, 0x2267);
  Core_datapath__io_gpio_in_3__prev = Core_datapath__io_gpio_in_3;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_in_3, 0x2268);
  Core_datapath_csr__io_gpio_in_3__prev = Core_datapath_csr__io_gpio_in_3;
  dat_dump<2>(f, Core_datapath_csr__reg_gpis_3, 0x2269);
  Core_datapath_csr__reg_gpis_3__prev = Core_datapath_csr__reg_gpis_3;
  dat_dump<2>(f, Core__io_gpio_in_2, 0x226a);
  Core__io_gpio_in_2__prev = Core__io_gpio_in_2;
  dat_dump<2>(f, Core_datapath__io_gpio_in_2, 0x226b);
  Core_datapath__io_gpio_in_2__prev = Core_datapath__io_gpio_in_2;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_in_2, 0x226c);
  Core_datapath_csr__io_gpio_in_2__prev = Core_datapath_csr__io_gpio_in_2;
  dat_dump<2>(f, Core_datapath_csr__reg_gpis_2, 0x226d);
  Core_datapath_csr__reg_gpis_2__prev = Core_datapath_csr__reg_gpis_2;
  dat_dump<2>(f, Core__io_gpio_in_1, 0x226e);
  Core__io_gpio_in_1__prev = Core__io_gpio_in_1;
  dat_dump<2>(f, Core_datapath__io_gpio_in_1, 0x226f);
  Core_datapath__io_gpio_in_1__prev = Core_datapath__io_gpio_in_1;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_in_1, 0x2270);
  Core_datapath_csr__io_gpio_in_1__prev = Core_datapath_csr__io_gpio_in_1;
  dat_dump<2>(f, Core_datapath_csr__reg_gpis_1, 0x2271);
  Core_datapath_csr__reg_gpis_1__prev = Core_datapath_csr__reg_gpis_1;
  dat_dump<2>(f, Core__io_gpio_in_0, 0x2272);
  Core__io_gpio_in_0__prev = Core__io_gpio_in_0;
  dat_dump<2>(f, Core_datapath__io_gpio_in_0, 0x2273);
  Core_datapath__io_gpio_in_0__prev = Core_datapath__io_gpio_in_0;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_in_0, 0x2274);
  Core_datapath_csr__io_gpio_in_0__prev = Core_datapath_csr__io_gpio_in_0;
  dat_dump<2>(f, Core_datapath_csr__reg_gpis_0, 0x2275);
  Core_datapath_csr__reg_gpis_0__prev = Core_datapath_csr__reg_gpis_0;
  dat_dump<2>(f, Core_control__exe_valid, 0x2276);
  Core_control__exe_valid__prev = Core_control__exe_valid;
  dat_dump<2>(f, Core_control__exe_sleep, 0x2277);
  Core_control__exe_sleep__prev = Core_control__exe_sleep;
  dat_dump<2>(f, Core_control__io_exe_sleep, 0x2278);
  Core_control__io_exe_sleep__prev = Core_control__io_exe_sleep;
  dat_dump<2>(f, Core_datapath__io_control_exe_sleep, 0x2279);
  Core_datapath__io_control_exe_sleep__prev = Core_datapath__io_control_exe_sleep;
  dat_dump<2>(f, Core_datapath_csr__io_sleep, 0x227a);
  Core_datapath_csr__io_sleep__prev = Core_datapath_csr__io_sleep;
  dat_dump<2>(f, Core_datapath_csr__sleep, 0x227b);
  Core_datapath_csr__sleep__prev = Core_datapath_csr__sleep;
  dat_dump<2>(f, Core_datapath_csr__wake_1, 0x227c);
  Core_datapath_csr__wake_1__prev = Core_datapath_csr__wake_1;
  dat_dump<2>(f, Core_datapath_csr__wake_7, 0x227d);
  Core_datapath_csr__wake_7__prev = Core_datapath_csr__wake_7;
  dat_dump<2>(f, Core_datapath_csr__wake_6, 0x227e);
  Core_datapath_csr__wake_6__prev = Core_datapath_csr__wake_6;
  dat_dump<2>(f, Core_datapath_csr__wake_5, 0x2321);
  Core_datapath_csr__wake_5__prev = Core_datapath_csr__wake_5;
  dat_dump<2>(f, Core_datapath_csr__wake_4, 0x2322);
  Core_datapath_csr__wake_4__prev = Core_datapath_csr__wake_4;
  dat_dump<2>(f, Core_datapath_csr__wake_3, 0x2323);
  Core_datapath_csr__wake_3__prev = Core_datapath_csr__wake_3;
  dat_dump<2>(f, Core_control__exe_ee, 0x2324);
  Core_control__exe_ee__prev = Core_control__exe_ee;
  dat_dump<2>(f, Core_control__io_exe_ee, 0x2325);
  Core_control__io_exe_ee__prev = Core_control__io_exe_ee;
  dat_dump<2>(f, Core_datapath__io_control_exe_ee, 0x2326);
  Core_datapath__io_control_exe_ee__prev = Core_datapath__io_control_exe_ee;
  dat_dump<2>(f, Core_datapath_csr__io_ee, 0x2327);
  Core_datapath_csr__io_ee__prev = Core_datapath_csr__io_ee;
  dat_dump<2>(f, Core_control__exe_ie, 0x2328);
  Core_control__exe_ie__prev = Core_control__exe_ie;
  dat_dump<2>(f, Core_control__io_exe_ie, 0x2329);
  Core_control__io_exe_ie__prev = Core_control__io_exe_ie;
  dat_dump<2>(f, Core_datapath__io_control_exe_ie, 0x232a);
  Core_datapath__io_control_exe_ie__prev = Core_datapath__io_control_exe_ie;
  dat_dump<2>(f, Core_datapath_csr__io_ie, 0x232b);
  Core_datapath_csr__io_ie__prev = Core_datapath_csr__io_ie;
  dat_dump<2>(f, Core_datapath_csr__wake_2, 0x232c);
  Core_datapath_csr__wake_2__prev = Core_datapath_csr__wake_2;
  dat_dump<2>(f, Core_datapath_csr__wake_0, 0x232d);
  Core_datapath_csr__wake_0__prev = Core_datapath_csr__wake_0;
  dat_dump<2>(f, Core_datapath_csr__reg_msip_0, 0x232e);
  Core_datapath_csr__reg_msip_0__prev = Core_datapath_csr__reg_msip_0;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_r_enable, 0x232f);
  Core_datapath_loadstore__io_imem_r_enable__prev = Core_datapath_loadstore__io_imem_r_enable;
  dat_dump<2>(f, Core_datapath_loadstore__dmem_op_reg, 0x2330);
  Core_datapath_loadstore__dmem_op_reg__prev = Core_datapath_loadstore__dmem_op_reg;
  dat_dump<2>(f, Core_datapath_loadstore__imem_op_reg, 0x2331);
  Core_datapath_loadstore__imem_op_reg__prev = Core_datapath_loadstore__imem_op_reg;
  dat_dump<2>(f, Core_control__mem_rd_write, 0x2332);
  Core_control__mem_rd_write__prev = Core_control__mem_rd_write;
  dat_dump<2>(f, Core_control__io_mem_rd_write, 0x2333);
  Core_control__io_mem_rd_write__prev = Core_control__io_mem_rd_write;
  dat_dump<2>(f, Core_datapath__io_control_mem_rd_write, 0x2334);
  Core_datapath__io_control_mem_rd_write__prev = Core_datapath__io_control_mem_rd_write;
  dat_dump<2>(f, Core_datapath_regfile__io_rd_enable, 0x2335);
  Core_datapath_regfile__io_rd_enable__prev = Core_datapath_regfile__io_rd_enable;
  dat_dump<2>(f, Core_control__reset, 0x2336);
  Core_control__reset__prev = Core_control__reset;
  dat_dump<2>(f, Core_control_scheduler__reset, 0x2337);
  Core_control_scheduler__reset__prev = Core_control_scheduler__reset;
  dat_dump<2>(f, Core_control_scheduler__R273, 0x2338);
  Core_control_scheduler__R273__prev = Core_control_scheduler__R273;
  dat_dump<2>(f, Core_control_scheduler__R248, 0x2339);
  Core_control_scheduler__R248__prev = Core_control_scheduler__R248;
  dat_dump<2>(f, Core_control_scheduler__R233, 0x233a);
  Core_control_scheduler__R233__prev = Core_control_scheduler__R233;
  dat_dump<2>(f, Core_control_scheduler__R227, 0x233b);
  Core_control_scheduler__R227__prev = Core_control_scheduler__R227;
  dat_dump<2>(f, Core_control_scheduler__R222, 0x233c);
  Core_control_scheduler__R222__prev = Core_control_scheduler__R222;
  dat_dump<2>(f, Core_control_scheduler__R210, 0x233d);
  Core_control_scheduler__R210__prev = Core_control_scheduler__R210;
  dat_dump<2>(f, Core_control_scheduler__R196, 0x233e);
  Core_control_scheduler__R196__prev = Core_control_scheduler__R196;
  dat_dump<2>(f, Core_control_scheduler__R112, 0x233f);
  Core_control_scheduler__R112__prev = Core_control_scheduler__R112;
  dat_dump<2>(f, Core_control_scheduler__R87, 0x2340);
  Core_control_scheduler__R87__prev = Core_control_scheduler__R87;
  dat_dump<2>(f, Core_control_scheduler__R72, 0x2341);
  Core_control_scheduler__R72__prev = Core_control_scheduler__R72;
  dat_dump<2>(f, Core_control_scheduler__R66, 0x2342);
  Core_control_scheduler__R66__prev = Core_control_scheduler__R66;
  dat_dump<2>(f, Core_control_scheduler__R61, 0x2343);
  Core_control_scheduler__R61__prev = Core_control_scheduler__R61;
  dat_dump<2>(f, Core_control_scheduler__R49, 0x2344);
  Core_control_scheduler__R49__prev = Core_control_scheduler__R49;
  dat_dump<2>(f, Core_control_scheduler__R35, 0x2345);
  Core_control_scheduler__R35__prev = Core_control_scheduler__R35;
  dat_dump<2>(f, Core_control__mem_reg_exception, 0x2346);
  Core_control__mem_reg_exception__prev = Core_control__mem_reg_exception;
  dat_dump<2>(f, Core_control__wb_reg_rd_write, 0x2347);
  Core_control__wb_reg_rd_write__prev = Core_control__wb_reg_rd_write;
  dat_dump<2>(f, Core_control__exe_reg_load, 0x2348);
  Core_control__exe_reg_load__prev = Core_control__exe_reg_load;
  dat_dump<2>(f, Core_control__dec_store, 0x2349);
  Core_control__dec_store__prev = Core_control__dec_store;
  dat_dump<2>(f, Core_control__exe_reg_store, 0x234a);
  Core_control__exe_reg_store__prev = Core_control__exe_reg_store;
  dat_dump<2>(f, Core_control__dec_csr, 0x234b);
  Core_control__dec_csr__prev = Core_control__dec_csr;
  dat_dump<2>(f, Core_control__exe_reg_csr_write, 0x234c);
  Core_control__exe_reg_csr_write__prev = Core_control__exe_reg_csr_write;
  dat_dump<2>(f, Core_control__dec_reg_cause, 0x234d);
  Core_control__dec_reg_cause__prev = Core_control__dec_reg_cause;
  dat_dump<2>(f, Core_control__dec_scall, 0x234e);
  Core_control__dec_scall__prev = Core_control__dec_scall;
  dat_dump<2>(f, Core_control__dec_ie, 0x234f);
  Core_control__dec_ie__prev = Core_control__dec_ie;
  dat_dump<2>(f, Core_control__dec_du, 0x2350);
  Core_control__dec_du__prev = Core_control__dec_du;
  dat_dump<2>(f, Core_control__dec_legal, 0x2351);
  Core_control__dec_legal__prev = Core_control__dec_legal;
  dat_dump<2>(f, Core_control__R238, 0x2352);
  Core_control__R238__prev = Core_control__R238;
  dat_dump<2>(f, Core_control__R231, 0x2353);
  Core_control__R231__prev = Core_control__R231;
  dat_dump<2>(f, Core_control__exe_reg_sret, 0x2354);
  Core_control__exe_reg_sret__prev = Core_control__exe_reg_sret;
  dat_dump<2>(f, Core_control__dec_rd_en, 0x2355);
  Core_control__dec_rd_en__prev = Core_control__dec_rd_en;
  dat_dump<2>(f, Core_control__dec_rd_write, 0x2356);
  Core_control__dec_rd_write__prev = Core_control__dec_rd_write;
  dat_dump<2>(f, Core_control__exe_reg_rd_write, 0x2357);
  Core_control__exe_reg_rd_write__prev = Core_control__exe_reg_rd_write;
  dat_dump<2>(f, Core_control__mem_reg_rd_write, 0x2358);
  Core_control__mem_reg_rd_write__prev = Core_control__mem_reg_rd_write;
  dat_dump<2>(f, Core_control__mem_reg_valid, 0x2359);
  Core_control__mem_reg_valid__prev = Core_control__mem_reg_valid;
  dat_dump<2>(f, Core_control_scheduler__io_valid, 0x235a);
  Core_control_scheduler__io_valid__prev = Core_control_scheduler__io_valid;
  dat_dump<2>(f, Core_control__R206, 0x235b);
  Core_control__R206__prev = Core_control__R206;
  dat_dump<2>(f, Core_control__if_reg_valid, 0x235c);
  Core_control__if_reg_valid__prev = Core_control__if_reg_valid;
  dat_dump<2>(f, Core_control__exe_flush, 0x235d);
  Core_control__exe_flush__prev = Core_control__exe_flush;
  dat_dump<2>(f, Core_control__if_valid, 0x235e);
  Core_control__if_valid__prev = Core_control__if_valid;
  dat_dump<2>(f, Core_control__dec_reg_valid, 0x235f);
  Core_control__dec_reg_valid__prev = Core_control__dec_reg_valid;
  dat_dump<2>(f, Core_control__R84, 0x2360);
  Core_control__R84__prev = Core_control__R84;
  dat_dump<2>(f, Core_control__dec_jump, 0x2361);
  Core_control__dec_jump__prev = Core_control__dec_jump;
  dat_dump<2>(f, Core_control__exe_reg_jump, 0x2362);
  Core_control__exe_reg_jump__prev = Core_control__exe_reg_jump;
  dat_dump<2>(f, Core_control__dec_branch, 0x2363);
  Core_control__dec_branch__prev = Core_control__dec_branch;
  dat_dump<2>(f, Core_control__exe_reg_branch, 0x2364);
  Core_control__exe_reg_branch__prev = Core_control__exe_reg_branch;
  dat_dump<2>(f, Core_control__dec_valid, 0x2365);
  Core_control__dec_valid__prev = Core_control__dec_valid;
  dat_dump<2>(f, Core_control__exe_reg_valid, 0x2366);
  Core_control__exe_reg_valid__prev = Core_control__exe_reg_valid;
  dat_dump<2>(f, Core_datapath__io_control_if_exc_misaligned, 0x2367);
  Core_datapath__io_control_if_exc_misaligned__prev = Core_datapath__io_control_if_exc_misaligned;
  dat_dump<2>(f, Core_control__io_if_exc_misaligned, 0x2368);
  Core_control__io_if_exc_misaligned__prev = Core_control__io_if_exc_misaligned;
  dat_dump<2>(f, Core_control__dec_reg_exc, 0x2369);
  Core_control__dec_reg_exc__prev = Core_control__dec_reg_exc;
  dat_dump<2>(f, Core_control__dec_exc, 0x236a);
  Core_control__dec_exc__prev = Core_control__dec_exc;
  dat_dump<2>(f, Core_control__exe_reg_exc, 0x236b);
  Core_control__exe_reg_exc__prev = Core_control__exe_reg_exc;
  dat_dump<2>(f, Core_imem__io_bus_ready, 0x236c);
  Core_imem__io_bus_ready__prev = Core_imem__io_bus_ready;
  dat_dump<2>(f, Core__io_imem_ready, 0x236d);
  Core__io_imem_ready__prev = Core__io_imem_ready;
  dat_dump<2>(f, Core_datapath_loadstore__io_bus_enable, 0x236e);
  Core_datapath_loadstore__io_bus_enable__prev = Core_datapath_loadstore__io_bus_enable;
  dat_dump<2>(f, Core_datapath__io_bus_enable, 0x236f);
  Core_datapath__io_bus_enable__prev = Core_datapath__io_bus_enable;
  dat_dump<2>(f, Core__io_bus_enable, 0x2370);
  Core__io_bus_enable__prev = Core__io_bus_enable;
  dat_dump<2>(f, Core_datapath_loadstore__io_bus_write, 0x2371);
  Core_datapath_loadstore__io_bus_write__prev = Core_datapath_loadstore__io_bus_write;
  dat_dump<2>(f, Core_datapath__io_bus_write, 0x2372);
  Core_datapath__io_bus_write__prev = Core_datapath__io_bus_write;
  dat_dump<2>(f, Core__io_bus_write, 0x2373);
  Core__io_bus_write__prev = Core__io_bus_write;
  dat_dump<2>(f, Core__io_dmem_byte_write_0, 0x2374);
  Core__io_dmem_byte_write_0__prev = Core__io_dmem_byte_write_0;
  dat_dump<2>(f, Core__io_dmem_byte_write_1, 0x2375);
  Core__io_dmem_byte_write_1__prev = Core__io_dmem_byte_write_1;
  dat_dump<2>(f, Core__io_dmem_byte_write_2, 0x2376);
  Core__io_dmem_byte_write_2__prev = Core__io_dmem_byte_write_2;
  dat_dump<2>(f, Core__io_dmem_byte_write_3, 0x2377);
  Core__io_dmem_byte_write_3__prev = Core__io_dmem_byte_write_3;
  dat_dump<2>(f, Core__io_dmem_enable, 0x2378);
  Core__io_dmem_enable__prev = Core__io_dmem_enable;
  dat_dump<2>(f, Core__io_imem_write, 0x2379);
  Core__io_imem_write__prev = Core__io_imem_write;
  dat_dump<2>(f, Core__io_imem_enable, 0x237a);
  Core__io_imem_enable__prev = Core__io_imem_enable;
  dat_dump<2>(f, Core_control__dec_mem_rd_data_sel, 0x237b);
  Core_control__dec_mem_rd_data_sel__prev = Core_control__dec_mem_rd_data_sel;
  dat_dump<2>(f, Core_control__next_pc_sel_0, 0x237c);
  Core_control__next_pc_sel_0__prev = Core_control__next_pc_sel_0;
  dat_dump<2>(f, Core_control__io_next_pc_sel_0, 0x237d);
  Core_control__io_next_pc_sel_0__prev = Core_control__io_next_pc_sel_0;
  dat_dump<2>(f, Core_datapath__io_control_next_pc_sel_0, 0x237e);
  Core_datapath__io_control_next_pc_sel_0__prev = Core_datapath__io_control_next_pc_sel_0;
  dat_dump<2>(f, Core_control__next_pc_sel_1, 0x2421);
  Core_control__next_pc_sel_1__prev = Core_control__next_pc_sel_1;
  dat_dump<2>(f, Core_control__io_next_pc_sel_1, 0x2422);
  Core_control__io_next_pc_sel_1__prev = Core_control__io_next_pc_sel_1;
  dat_dump<2>(f, Core_datapath__io_control_next_pc_sel_1, 0x2423);
  Core_datapath__io_control_next_pc_sel_1__prev = Core_datapath__io_control_next_pc_sel_1;
  dat_dump<2>(f, Core_control__next_pc_sel_2, 0x2424);
  Core_control__next_pc_sel_2__prev = Core_control__next_pc_sel_2;
  dat_dump<2>(f, Core_control__io_next_pc_sel_2, 0x2425);
  Core_control__io_next_pc_sel_2__prev = Core_control__io_next_pc_sel_2;
  dat_dump<2>(f, Core_datapath__io_control_next_pc_sel_2, 0x2426);
  Core_datapath__io_control_next_pc_sel_2__prev = Core_datapath__io_control_next_pc_sel_2;
  dat_dump<2>(f, Core_control__next_pc_sel_3, 0x2427);
  Core_control__next_pc_sel_3__prev = Core_control__next_pc_sel_3;
  dat_dump<2>(f, Core_control__io_next_pc_sel_3, 0x2428);
  Core_control__io_next_pc_sel_3__prev = Core_control__io_next_pc_sel_3;
  dat_dump<2>(f, Core_datapath__io_control_next_pc_sel_3, 0x2429);
  Core_datapath__io_control_next_pc_sel_3__prev = Core_datapath__io_control_next_pc_sel_3;
  dat_dump<2>(f, Core_control__next_pc_sel_4, 0x242a);
  Core_control__next_pc_sel_4__prev = Core_control__next_pc_sel_4;
  dat_dump<2>(f, Core_control__io_next_pc_sel_4, 0x242b);
  Core_control__io_next_pc_sel_4__prev = Core_control__io_next_pc_sel_4;
  dat_dump<2>(f, Core_datapath__io_control_next_pc_sel_4, 0x242c);
  Core_datapath__io_control_next_pc_sel_4__prev = Core_datapath__io_control_next_pc_sel_4;
  dat_dump<2>(f, Core_control__next_pc_sel_5, 0x242d);
  Core_control__next_pc_sel_5__prev = Core_control__next_pc_sel_5;
  dat_dump<2>(f, Core_control__io_next_pc_sel_5, 0x242e);
  Core_control__io_next_pc_sel_5__prev = Core_control__io_next_pc_sel_5;
  dat_dump<2>(f, Core_datapath__io_control_next_pc_sel_5, 0x242f);
  Core_datapath__io_control_next_pc_sel_5__prev = Core_datapath__io_control_next_pc_sel_5;
  dat_dump<2>(f, Core_control__next_pc_sel_6, 0x2430);
  Core_control__next_pc_sel_6__prev = Core_control__next_pc_sel_6;
  dat_dump<2>(f, Core_control__io_next_pc_sel_6, 0x2431);
  Core_control__io_next_pc_sel_6__prev = Core_control__io_next_pc_sel_6;
  dat_dump<2>(f, Core_datapath__io_control_next_pc_sel_6, 0x2432);
  Core_datapath__io_control_next_pc_sel_6__prev = Core_datapath__io_control_next_pc_sel_6;
  dat_dump<2>(f, Core_control__next_pc_sel_7, 0x2433);
  Core_control__next_pc_sel_7__prev = Core_control__next_pc_sel_7;
  dat_dump<2>(f, Core_control__io_next_pc_sel_7, 0x2434);
  Core_control__io_next_pc_sel_7__prev = Core_control__io_next_pc_sel_7;
  dat_dump<2>(f, Core_datapath__io_control_next_pc_sel_7, 0x2435);
  Core_datapath__io_control_next_pc_sel_7__prev = Core_datapath__io_control_next_pc_sel_7;
  dat_dump<2>(f, Core_control__io_exe_csr_type, 0x2436);
  Core_control__io_exe_csr_type__prev = Core_control__io_exe_csr_type;
  dat_dump<2>(f, Core_datapath__io_control_exe_csr_type, 0x2437);
  Core_datapath__io_control_exe_csr_type__prev = Core_datapath__io_control_exe_csr_type;
  dat_dump<2>(f, Core_datapath_csr__io_rw_csr_type, 0x2438);
  Core_datapath_csr__io_rw_csr_type__prev = Core_datapath_csr__io_rw_csr_type;
  dat_dump<2>(f, Core_datapath_csr__reg_prv1_7, 0x2439);
  Core_datapath_csr__reg_prv1_7__prev = Core_datapath_csr__reg_prv1_7;
  dat_dump<2>(f, Core_datapath_csr__reg_prv_7, 0x243a);
  Core_datapath_csr__reg_prv_7__prev = Core_datapath_csr__reg_prv_7;
  dat_dump<2>(f, Core_datapath_csr__reg_prv1_6, 0x243b);
  Core_datapath_csr__reg_prv1_6__prev = Core_datapath_csr__reg_prv1_6;
  dat_dump<2>(f, Core_datapath_csr__reg_prv_6, 0x243c);
  Core_datapath_csr__reg_prv_6__prev = Core_datapath_csr__reg_prv_6;
  dat_dump<2>(f, Core_datapath_csr__reg_prv1_5, 0x243d);
  Core_datapath_csr__reg_prv1_5__prev = Core_datapath_csr__reg_prv1_5;
  dat_dump<2>(f, Core_datapath_csr__reg_prv_5, 0x243e);
  Core_datapath_csr__reg_prv_5__prev = Core_datapath_csr__reg_prv_5;
  dat_dump<2>(f, Core_datapath_csr__reg_prv1_4, 0x243f);
  Core_datapath_csr__reg_prv1_4__prev = Core_datapath_csr__reg_prv1_4;
  dat_dump<2>(f, Core_datapath_csr__reg_prv_4, 0x2440);
  Core_datapath_csr__reg_prv_4__prev = Core_datapath_csr__reg_prv_4;
  dat_dump<2>(f, Core_datapath_csr__reg_prv1_3, 0x2441);
  Core_datapath_csr__reg_prv1_3__prev = Core_datapath_csr__reg_prv1_3;
  dat_dump<2>(f, Core_datapath_csr__reg_prv_3, 0x2442);
  Core_datapath_csr__reg_prv_3__prev = Core_datapath_csr__reg_prv_3;
  dat_dump<2>(f, Core_datapath_csr__reg_prv1_2, 0x2443);
  Core_datapath_csr__reg_prv1_2__prev = Core_datapath_csr__reg_prv1_2;
  dat_dump<2>(f, Core_datapath_csr__reg_prv_2, 0x2444);
  Core_datapath_csr__reg_prv_2__prev = Core_datapath_csr__reg_prv_2;
  dat_dump<2>(f, Core_datapath_csr__reg_prv1_1, 0x2445);
  Core_datapath_csr__reg_prv1_1__prev = Core_datapath_csr__reg_prv1_1;
  dat_dump<2>(f, Core_datapath_csr__reg_prv_1, 0x2446);
  Core_datapath_csr__reg_prv_1__prev = Core_datapath_csr__reg_prv_1;
  dat_dump<2>(f, Core_datapath_csr__reg_prv1_0, 0x2447);
  Core_datapath_csr__reg_prv1_0__prev = Core_datapath_csr__reg_prv1_0;
  dat_dump<2>(f, Core_datapath_csr__reg_prv_0, 0x2448);
  Core_datapath_csr__reg_prv_0__prev = Core_datapath_csr__reg_prv_0;
  dat_dump<2>(f, Core_datapath_csr__reg_gpos_3, 0x2449);
  Core_datapath_csr__reg_gpos_3__prev = Core_datapath_csr__reg_gpos_3;
  dat_dump<2>(f, Core_datapath_csr__reg_gpos_2, 0x244a);
  Core_datapath_csr__reg_gpos_2__prev = Core_datapath_csr__reg_gpos_2;
  dat_dump<2>(f, Core_datapath_csr__reg_gpos_1, 0x244b);
  Core_datapath_csr__reg_gpos_1__prev = Core_datapath_csr__reg_gpos_1;
  dat_dump<2>(f, Core_datapath_csr__reg_gpos_0, 0x244c);
  Core_datapath_csr__reg_gpos_0__prev = Core_datapath_csr__reg_gpos_0;
  dat_dump<2>(f, Core_datapath_csr__reg_tmodes_1, 0x244d);
  Core_datapath_csr__reg_tmodes_1__prev = Core_datapath_csr__reg_tmodes_1;
  dat_dump<2>(f, Core_datapath_csr__reg_tmodes_7, 0x244e);
  Core_datapath_csr__reg_tmodes_7__prev = Core_datapath_csr__reg_tmodes_7;
  dat_dump<2>(f, Core_datapath_csr__reg_tmodes_6, 0x244f);
  Core_datapath_csr__reg_tmodes_6__prev = Core_datapath_csr__reg_tmodes_6;
  dat_dump<2>(f, Core_datapath_csr__reg_tmodes_5, 0x2450);
  Core_datapath_csr__reg_tmodes_5__prev = Core_datapath_csr__reg_tmodes_5;
  dat_dump<2>(f, Core_datapath_csr__reg_tmodes_4, 0x2451);
  Core_datapath_csr__reg_tmodes_4__prev = Core_datapath_csr__reg_tmodes_4;
  dat_dump<2>(f, Core_datapath_csr__reg_tmodes_3, 0x2452);
  Core_datapath_csr__reg_tmodes_3__prev = Core_datapath_csr__reg_tmodes_3;
  dat_dump<2>(f, Core_datapath_csr__reg_timer_7, 0x2453);
  Core_datapath_csr__reg_timer_7__prev = Core_datapath_csr__reg_timer_7;
  dat_dump<2>(f, Core_datapath_csr__reg_timer_6, 0x2454);
  Core_datapath_csr__reg_timer_6__prev = Core_datapath_csr__reg_timer_6;
  dat_dump<2>(f, Core_datapath_csr__reg_timer_5, 0x2455);
  Core_datapath_csr__reg_timer_5__prev = Core_datapath_csr__reg_timer_5;
  dat_dump<2>(f, Core_datapath_csr__reg_timer_4, 0x2456);
  Core_datapath_csr__reg_timer_4__prev = Core_datapath_csr__reg_timer_4;
  dat_dump<2>(f, Core_datapath_csr__reg_timer_3, 0x2457);
  Core_datapath_csr__reg_timer_3__prev = Core_datapath_csr__reg_timer_3;
  dat_dump<2>(f, Core_datapath_csr__reg_timer_1, 0x2458);
  Core_datapath_csr__reg_timer_1__prev = Core_datapath_csr__reg_timer_1;
  dat_dump<2>(f, Core_datapath_csr__reg_timer_0, 0x2459);
  Core_datapath_csr__reg_timer_0__prev = Core_datapath_csr__reg_timer_0;
  dat_dump<2>(f, Core_datapath_csr__reg_timer_2, 0x245a);
  Core_datapath_csr__reg_timer_2__prev = Core_datapath_csr__reg_timer_2;
  dat_dump<2>(f, Core_datapath_csr__reg_tmodes_2, 0x245b);
  Core_datapath_csr__reg_tmodes_2__prev = Core_datapath_csr__reg_tmodes_2;
  dat_dump<2>(f, Core_datapath_csr__reg_tmodes_0, 0x245c);
  Core_datapath_csr__reg_tmodes_0__prev = Core_datapath_csr__reg_tmodes_0;
  dat_dump<2>(f, Core_datapath_loadstore__addr_byte_reg, 0x245d);
  Core_datapath_loadstore__addr_byte_reg__prev = Core_datapath_loadstore__addr_byte_reg;
  dat_dump<2>(f, Core_control__io_exe_mul_type, 0x245e);
  Core_control__io_exe_mul_type__prev = Core_control__io_exe_mul_type;
  dat_dump<2>(f, Core_datapath__io_control_exe_mul_type, 0x245f);
  Core_datapath__io_control_exe_mul_type__prev = Core_datapath__io_control_exe_mul_type;
  dat_dump<2>(f, Core_control__io_mem_rd_data_sel, 0x2460);
  Core_control__io_mem_rd_data_sel__prev = Core_control__io_mem_rd_data_sel;
  dat_dump<2>(f, Core_datapath__io_control_mem_rd_data_sel, 0x2461);
  Core_datapath__io_control_mem_rd_data_sel__prev = Core_datapath__io_control_mem_rd_data_sel;
  dat_dump<2>(f, Core_control__dec_rs1_sel, 0x2462);
  Core_control__dec_rs1_sel__prev = Core_control__dec_rs1_sel;
  dat_dump<2>(f, Core_control__io_dec_rs1_sel, 0x2463);
  Core_control__io_dec_rs1_sel__prev = Core_control__io_dec_rs1_sel;
  dat_dump<2>(f, Core_datapath__io_control_dec_rs1_sel, 0x2464);
  Core_datapath__io_control_dec_rs1_sel__prev = Core_datapath__io_control_dec_rs1_sel;
  dat_dump<2>(f, Core_control__io_exe_rd_data_sel, 0x2465);
  Core_control__io_exe_rd_data_sel__prev = Core_control__io_exe_rd_data_sel;
  dat_dump<2>(f, Core_datapath__io_control_exe_rd_data_sel, 0x2466);
  Core_datapath__io_control_exe_rd_data_sel__prev = Core_datapath__io_control_exe_rd_data_sel;
  dat_dump<2>(f, Core_control__dec_rs2_sel, 0x2467);
  Core_control__dec_rs2_sel__prev = Core_control__dec_rs2_sel;
  dat_dump<2>(f, Core_control__io_dec_rs2_sel, 0x2468);
  Core_control__io_dec_rs2_sel__prev = Core_control__io_dec_rs2_sel;
  dat_dump<2>(f, Core_datapath__io_control_dec_rs2_sel, 0x2469);
  Core_datapath__io_control_dec_rs2_sel__prev = Core_datapath__io_control_dec_rs2_sel;
  dat_dump<2>(f, Core_control__dec_op2_sel, 0x246a);
  Core_control__dec_op2_sel__prev = Core_control__dec_op2_sel;
  dat_dump<2>(f, Core_control__io_dec_op2_sel, 0x246b);
  Core_control__io_dec_op2_sel__prev = Core_control__io_dec_op2_sel;
  dat_dump<2>(f, Core_datapath__io_control_dec_op2_sel, 0x246c);
  Core_datapath__io_control_dec_op2_sel__prev = Core_datapath__io_control_dec_op2_sel;
  dat_dump<2>(f, Core_control__dec_op1_sel, 0x246d);
  Core_control__dec_op1_sel__prev = Core_control__dec_op1_sel;
  dat_dump<2>(f, Core_control__io_dec_op1_sel, 0x246e);
  Core_control__io_dec_op1_sel__prev = Core_control__io_dec_op1_sel;
  dat_dump<2>(f, Core_datapath__io_control_dec_op1_sel, 0x246f);
  Core_datapath__io_control_dec_op1_sel__prev = Core_datapath__io_control_dec_op1_sel;
  dat_dump<2>(f, Core_datapath_csr__io_tmodes_5, 0x2470);
  Core_datapath_csr__io_tmodes_5__prev = Core_datapath_csr__io_tmodes_5;
  dat_dump<2>(f, Core_datapath__io_control_csr_tmodes_5, 0x2471);
  Core_datapath__io_control_csr_tmodes_5__prev = Core_datapath__io_control_csr_tmodes_5;
  dat_dump<2>(f, Core_control__io_csr_tmodes_5, 0x2472);
  Core_control__io_csr_tmodes_5__prev = Core_control__io_csr_tmodes_5;
  dat_dump<2>(f, Core_control_scheduler__io_thread_modes_5, 0x2473);
  Core_control_scheduler__io_thread_modes_5__prev = Core_control_scheduler__io_thread_modes_5;
  dat_dump<2>(f, Core_datapath_csr__io_tmodes_4, 0x2474);
  Core_datapath_csr__io_tmodes_4__prev = Core_datapath_csr__io_tmodes_4;
  dat_dump<2>(f, Core_datapath__io_control_csr_tmodes_4, 0x2475);
  Core_datapath__io_control_csr_tmodes_4__prev = Core_datapath__io_control_csr_tmodes_4;
  dat_dump<2>(f, Core_control__io_csr_tmodes_4, 0x2476);
  Core_control__io_csr_tmodes_4__prev = Core_control__io_csr_tmodes_4;
  dat_dump<2>(f, Core_control_scheduler__io_thread_modes_4, 0x2477);
  Core_control_scheduler__io_thread_modes_4__prev = Core_control_scheduler__io_thread_modes_4;
  dat_dump<2>(f, Core_datapath_csr__io_tmodes_3, 0x2478);
  Core_datapath_csr__io_tmodes_3__prev = Core_datapath_csr__io_tmodes_3;
  dat_dump<2>(f, Core_datapath__io_control_csr_tmodes_3, 0x2479);
  Core_datapath__io_control_csr_tmodes_3__prev = Core_datapath__io_control_csr_tmodes_3;
  dat_dump<2>(f, Core_control__io_csr_tmodes_3, 0x247a);
  Core_control__io_csr_tmodes_3__prev = Core_control__io_csr_tmodes_3;
  dat_dump<2>(f, Core_control_scheduler__io_thread_modes_3, 0x247b);
  Core_control_scheduler__io_thread_modes_3__prev = Core_control_scheduler__io_thread_modes_3;
  dat_dump<2>(f, Core_datapath_csr__io_tmodes_2, 0x247c);
  Core_datapath_csr__io_tmodes_2__prev = Core_datapath_csr__io_tmodes_2;
  dat_dump<2>(f, Core_datapath__io_control_csr_tmodes_2, 0x247d);
  Core_datapath__io_control_csr_tmodes_2__prev = Core_datapath__io_control_csr_tmodes_2;
  dat_dump<2>(f, Core_control__io_csr_tmodes_2, 0x247e);
  Core_control__io_csr_tmodes_2__prev = Core_control__io_csr_tmodes_2;
  dat_dump<2>(f, Core_control_scheduler__io_thread_modes_2, 0x2521);
  Core_control_scheduler__io_thread_modes_2__prev = Core_control_scheduler__io_thread_modes_2;
  dat_dump<2>(f, Core_datapath_csr__io_tmodes_1, 0x2522);
  Core_datapath_csr__io_tmodes_1__prev = Core_datapath_csr__io_tmodes_1;
  dat_dump<2>(f, Core_datapath__io_control_csr_tmodes_1, 0x2523);
  Core_datapath__io_control_csr_tmodes_1__prev = Core_datapath__io_control_csr_tmodes_1;
  dat_dump<2>(f, Core_control__io_csr_tmodes_1, 0x2524);
  Core_control__io_csr_tmodes_1__prev = Core_control__io_csr_tmodes_1;
  dat_dump<2>(f, Core_control_scheduler__io_thread_modes_1, 0x2525);
  Core_control_scheduler__io_thread_modes_1__prev = Core_control_scheduler__io_thread_modes_1;
  dat_dump<2>(f, Core_datapath_csr__io_tmodes_0, 0x2526);
  Core_datapath_csr__io_tmodes_0__prev = Core_datapath_csr__io_tmodes_0;
  dat_dump<2>(f, Core_datapath__io_control_csr_tmodes_0, 0x2527);
  Core_datapath__io_control_csr_tmodes_0__prev = Core_datapath__io_control_csr_tmodes_0;
  dat_dump<2>(f, Core_control__io_csr_tmodes_0, 0x2528);
  Core_control__io_csr_tmodes_0__prev = Core_control__io_csr_tmodes_0;
  dat_dump<2>(f, Core_control_scheduler__io_thread_modes_0, 0x2529);
  Core_control_scheduler__io_thread_modes_0__prev = Core_control_scheduler__io_thread_modes_0;
  dat_dump<2>(f, Core_datapath_csr__io_tmodes_6, 0x252a);
  Core_datapath_csr__io_tmodes_6__prev = Core_datapath_csr__io_tmodes_6;
  dat_dump<2>(f, Core_datapath__io_control_csr_tmodes_6, 0x252b);
  Core_datapath__io_control_csr_tmodes_6__prev = Core_datapath__io_control_csr_tmodes_6;
  dat_dump<2>(f, Core_control__io_csr_tmodes_6, 0x252c);
  Core_control__io_csr_tmodes_6__prev = Core_control__io_csr_tmodes_6;
  dat_dump<2>(f, Core_control_scheduler__io_thread_modes_6, 0x252d);
  Core_control_scheduler__io_thread_modes_6__prev = Core_control_scheduler__io_thread_modes_6;
  dat_dump<2>(f, Core_datapath_csr__io_tmodes_7, 0x252e);
  Core_datapath_csr__io_tmodes_7__prev = Core_datapath_csr__io_tmodes_7;
  dat_dump<2>(f, Core_datapath__io_control_csr_tmodes_7, 0x252f);
  Core_datapath__io_control_csr_tmodes_7__prev = Core_datapath__io_control_csr_tmodes_7;
  dat_dump<2>(f, Core_control__io_csr_tmodes_7, 0x2530);
  Core_control__io_csr_tmodes_7__prev = Core_control__io_csr_tmodes_7;
  dat_dump<2>(f, Core_control_scheduler__io_thread_modes_7, 0x2531);
  Core_control_scheduler__io_thread_modes_7__prev = Core_control_scheduler__io_thread_modes_7;
  dat_dump<2>(f, Core_control__dec_csr_type, 0x2532);
  Core_control__dec_csr_type__prev = Core_control__dec_csr_type;
  dat_dump<2>(f, Core_control__exe_reg_csr_type, 0x2533);
  Core_control__exe_reg_csr_type__prev = Core_control__exe_reg_csr_type;
  dat_dump<2>(f, Core_control__dec_mul_type, 0x2534);
  Core_control__dec_mul_type__prev = Core_control__dec_mul_type;
  dat_dump<2>(f, Core_control__exe_reg_mul_type, 0x2535);
  Core_control__exe_reg_mul_type__prev = Core_control__exe_reg_mul_type;
  dat_dump<2>(f, Core_control__dec_exe_rd_data_sel, 0x2536);
  Core_control__dec_exe_rd_data_sel__prev = Core_control__dec_exe_rd_data_sel;
  dat_dump<2>(f, Core_control__exe_reg_rd_data_sel, 0x2537);
  Core_control__exe_reg_rd_data_sel__prev = Core_control__exe_reg_rd_data_sel;
  dat_dump<2>(f, Core_control__R364, 0x2538);
  Core_control__R364__prev = Core_control__R364;
  dat_dump<2>(f, Core_control__mem_reg_rd_data_sel, 0x2539);
  Core_control__mem_reg_rd_data_sel__prev = Core_control__mem_reg_rd_data_sel;
  dat_dump<2>(f, Core_control__stall_count_7, 0x253a);
  Core_control__stall_count_7__prev = Core_control__stall_count_7;
  dat_dump<2>(f, Core_control__stall_count_6, 0x253b);
  Core_control__stall_count_6__prev = Core_control__stall_count_6;
  dat_dump<2>(f, Core_control__stall_count_5, 0x253c);
  Core_control__stall_count_5__prev = Core_control__stall_count_5;
  dat_dump<2>(f, Core_control__stall_count_4, 0x253d);
  Core_control__stall_count_4__prev = Core_control__stall_count_4;
  dat_dump<2>(f, Core_control__stall_count_3, 0x253e);
  Core_control__stall_count_3__prev = Core_control__stall_count_3;
  dat_dump<2>(f, Core_control__stall_count_2, 0x253f);
  Core_control__stall_count_2__prev = Core_control__stall_count_2;
  dat_dump<2>(f, Core_control__stall_count_1, 0x2540);
  Core_control__stall_count_1__prev = Core_control__stall_count_1;
  dat_dump<2>(f, Core_control__stall_count_0, 0x2541);
  Core_control__stall_count_0__prev = Core_control__stall_count_0;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_out_3, 0x2542);
  Core_datapath_csr__io_gpio_out_3__prev = Core_datapath_csr__io_gpio_out_3;
  dat_dump<2>(f, Core_datapath__io_gpio_out_3, 0x2543);
  Core_datapath__io_gpio_out_3__prev = Core_datapath__io_gpio_out_3;
  dat_dump<2>(f, Core__io_gpio_out_3, 0x2544);
  Core__io_gpio_out_3__prev = Core__io_gpio_out_3;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_out_2, 0x2545);
  Core_datapath_csr__io_gpio_out_2__prev = Core_datapath_csr__io_gpio_out_2;
  dat_dump<2>(f, Core_datapath__io_gpio_out_2, 0x2546);
  Core_datapath__io_gpio_out_2__prev = Core_datapath__io_gpio_out_2;
  dat_dump<2>(f, Core__io_gpio_out_2, 0x2547);
  Core__io_gpio_out_2__prev = Core__io_gpio_out_2;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_out_1, 0x2548);
  Core_datapath_csr__io_gpio_out_1__prev = Core_datapath_csr__io_gpio_out_1;
  dat_dump<2>(f, Core_datapath__io_gpio_out_1, 0x2549);
  Core_datapath__io_gpio_out_1__prev = Core_datapath__io_gpio_out_1;
  dat_dump<2>(f, Core__io_gpio_out_1, 0x254a);
  Core__io_gpio_out_1__prev = Core__io_gpio_out_1;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_out_0, 0x254b);
  Core_datapath_csr__io_gpio_out_0__prev = Core_datapath_csr__io_gpio_out_0;
  dat_dump<2>(f, Core_datapath__io_gpio_out_0, 0x254c);
  Core_datapath__io_gpio_out_0__prev = Core_datapath__io_gpio_out_0;
  dat_dump<2>(f, Core__io_gpio_out_0, 0x254d);
  Core__io_gpio_out_0__prev = Core__io_gpio_out_0;
  dat_dump<2>(f, Core_datapath_csr__io_rw_thread, 0x254e);
  Core_datapath_csr__io_rw_thread__prev = Core_datapath_csr__io_rw_thread;
  dat_dump<2>(f, Core_datapath_loadstore__io_thread, 0x254f);
  Core_datapath_loadstore__io_thread__prev = Core_datapath_loadstore__io_thread;
  dat_dump<2>(f, Core_datapath__io_control_if_tid, 0x2550);
  Core_datapath__io_control_if_tid__prev = Core_datapath__io_control_if_tid;
  dat_dump<2>(f, Core_control__io_if_tid, 0x2551);
  Core_control__io_if_tid__prev = Core_control__io_if_tid;
  dat_dump<2>(f, Core_datapath__io_control_dec_tid, 0x2552);
  Core_datapath__io_control_dec_tid__prev = Core_datapath__io_control_dec_tid;
  dat_dump<2>(f, Core_control__io_dec_tid, 0x2553);
  Core_control__io_dec_tid__prev = Core_control__io_dec_tid;
  dat_dump<2>(f, Core_datapath__io_control_exe_tid, 0x2554);
  Core_datapath__io_control_exe_tid__prev = Core_datapath__io_control_exe_tid;
  dat_dump<2>(f, Core_control__io_exe_tid, 0x2555);
  Core_control__io_exe_tid__prev = Core_control__io_exe_tid;
  dat_dump<2>(f, Core_control__io_exe_br_type, 0x2556);
  Core_control__io_exe_br_type__prev = Core_control__io_exe_br_type;
  dat_dump<2>(f, Core_datapath__io_control_exe_br_type, 0x2557);
  Core_datapath__io_control_exe_br_type__prev = Core_datapath__io_control_exe_br_type;
  dat_dump<2>(f, Core_datapath__io_control_mem_tid, 0x2558);
  Core_datapath__io_control_mem_tid__prev = Core_datapath__io_control_mem_tid;
  dat_dump<2>(f, Core_control__io_mem_tid, 0x2559);
  Core_control__io_mem_tid__prev = Core_control__io_mem_tid;
  dat_dump<2>(f, Core_control__next_tid, 0x255a);
  Core_control__next_tid__prev = Core_control__next_tid;
  dat_dump<2>(f, Core_control__io_next_tid, 0x255b);
  Core_control__io_next_tid__prev = Core_control__io_next_tid;
  dat_dump<2>(f, Core_datapath__io_control_next_tid, 0x255c);
  Core_datapath__io_control_next_tid__prev = Core_datapath__io_control_next_tid;
  dat_dump<2>(f, Core_datapath_regfile__io_rs1_thread, 0x255d);
  Core_datapath_regfile__io_rs1_thread__prev = Core_datapath_regfile__io_rs1_thread;
  dat_dump<2>(f, Core_datapath_regfile__io_rd_thread, 0x255e);
  Core_datapath_regfile__io_rd_thread__prev = Core_datapath_regfile__io_rd_thread;
  dat_dump<2>(f, Core_datapath_regfile__io_rs2_thread, 0x255f);
  Core_datapath_regfile__io_rs2_thread__prev = Core_datapath_regfile__io_rs2_thread;
  dat_dump<2>(f, Core_datapath__io_control_wb_tid, 0x2560);
  Core_datapath__io_control_wb_tid__prev = Core_datapath__io_control_wb_tid;
  dat_dump<2>(f, Core_control__io_wb_tid, 0x2561);
  Core_control__io_wb_tid__prev = Core_control__io_wb_tid;
  dat_dump<2>(f, Core_datapath__wb_reg_tid, 0x2562);
  Core_datapath__wb_reg_tid__prev = Core_datapath__wb_reg_tid;
  dat_dump<2>(f, Core_control__dec_imm_sel, 0x2563);
  Core_control__dec_imm_sel__prev = Core_control__dec_imm_sel;
  dat_dump<2>(f, Core_control__io_dec_imm_sel, 0x2564);
  Core_control__io_dec_imm_sel__prev = Core_control__io_dec_imm_sel;
  dat_dump<2>(f, Core_datapath__io_control_dec_imm_sel, 0x2565);
  Core_datapath__io_control_dec_imm_sel__prev = Core_datapath__io_control_dec_imm_sel;
  dat_dump<2>(f, Core_datapath__mem_reg_tid, 0x2566);
  Core_datapath__mem_reg_tid__prev = Core_datapath__mem_reg_tid;
  dat_dump<2>(f, Core_datapath__exe_reg_tid, 0x2567);
  Core_datapath__exe_reg_tid__prev = Core_datapath__exe_reg_tid;
  dat_dump<2>(f, Core_datapath__if_reg_tid, 0x2568);
  Core_datapath__if_reg_tid__prev = Core_datapath__if_reg_tid;
  dat_dump<2>(f, Core_datapath__dec_reg_tid, 0x2569);
  Core_datapath__dec_reg_tid__prev = Core_datapath__dec_reg_tid;
  dat_dump<2>(f, Core_control__dec_br_type, 0x256a);
  Core_control__dec_br_type__prev = Core_control__dec_br_type;
  dat_dump<2>(f, Core_control__exe_reg_br_type, 0x256b);
  Core_control__exe_reg_br_type__prev = Core_control__exe_reg_br_type;
  dat_dump<2>(f, Core_control_scheduler__io_thread, 0x256c);
  Core_control_scheduler__io_thread__prev = Core_control_scheduler__io_thread;
  dat_dump<2>(f, Core_control__R284, 0x256d);
  Core_control__R284__prev = Core_control__R284;
  dat_dump<2>(f, Core_control__dec_cause, 0x256e);
  Core_control__dec_cause__prev = Core_control__dec_cause;
  dat_dump<2>(f, Core_control__exe_reg_cause, 0x256f);
  Core_control__exe_reg_cause__prev = Core_control__exe_reg_cause;
  dat_dump<2>(f, Core_control__io_exe_alu_type, 0x2570);
  Core_control__io_exe_alu_type__prev = Core_control__io_exe_alu_type;
  dat_dump<2>(f, Core_datapath__io_control_exe_alu_type, 0x2571);
  Core_datapath__io_control_exe_alu_type__prev = Core_datapath__io_control_exe_alu_type;
  dat_dump<2>(f, Core_control__io_exe_mem_type, 0x2572);
  Core_control__io_exe_mem_type__prev = Core_control__io_exe_mem_type;
  dat_dump<2>(f, Core_datapath__io_control_exe_mem_type, 0x2573);
  Core_datapath__io_control_exe_mem_type__prev = Core_datapath__io_control_exe_mem_type;
  dat_dump<2>(f, Core_datapath_loadstore__io_mem_type, 0x2574);
  Core_datapath_loadstore__io_mem_type__prev = Core_datapath_loadstore__io_mem_type;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_0, 0x2575);
  Core_datapath_csr__io_imem_protection_0__prev = Core_datapath_csr__io_imem_protection_0;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_0, 0x2576);
  Core_datapath_loadstore__io_imem_protection_0__prev = Core_datapath_loadstore__io_imem_protection_0;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_1, 0x2577);
  Core_datapath_csr__io_imem_protection_1__prev = Core_datapath_csr__io_imem_protection_1;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_1, 0x2578);
  Core_datapath_loadstore__io_imem_protection_1__prev = Core_datapath_loadstore__io_imem_protection_1;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_2, 0x2579);
  Core_datapath_csr__io_imem_protection_2__prev = Core_datapath_csr__io_imem_protection_2;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_2, 0x257a);
  Core_datapath_loadstore__io_imem_protection_2__prev = Core_datapath_loadstore__io_imem_protection_2;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_3, 0x257b);
  Core_datapath_csr__io_imem_protection_3__prev = Core_datapath_csr__io_imem_protection_3;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_3, 0x257c);
  Core_datapath_loadstore__io_imem_protection_3__prev = Core_datapath_loadstore__io_imem_protection_3;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_4, 0x257d);
  Core_datapath_csr__io_imem_protection_4__prev = Core_datapath_csr__io_imem_protection_4;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_4, 0x257e);
  Core_datapath_loadstore__io_imem_protection_4__prev = Core_datapath_loadstore__io_imem_protection_4;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_5, 0x2621);
  Core_datapath_csr__io_imem_protection_5__prev = Core_datapath_csr__io_imem_protection_5;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_5, 0x2622);
  Core_datapath_loadstore__io_imem_protection_5__prev = Core_datapath_loadstore__io_imem_protection_5;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_6, 0x2623);
  Core_datapath_csr__io_imem_protection_6__prev = Core_datapath_csr__io_imem_protection_6;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_6, 0x2624);
  Core_datapath_loadstore__io_imem_protection_6__prev = Core_datapath_loadstore__io_imem_protection_6;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_7, 0x2625);
  Core_datapath_csr__io_imem_protection_7__prev = Core_datapath_csr__io_imem_protection_7;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_7, 0x2626);
  Core_datapath_loadstore__io_imem_protection_7__prev = Core_datapath_loadstore__io_imem_protection_7;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_0, 0x2627);
  Core_datapath_csr__io_dmem_protection_0__prev = Core_datapath_csr__io_dmem_protection_0;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_0, 0x2628);
  Core_datapath_loadstore__io_dmem_protection_0__prev = Core_datapath_loadstore__io_dmem_protection_0;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_1, 0x2629);
  Core_datapath_csr__io_dmem_protection_1__prev = Core_datapath_csr__io_dmem_protection_1;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_1, 0x262a);
  Core_datapath_loadstore__io_dmem_protection_1__prev = Core_datapath_loadstore__io_dmem_protection_1;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_2, 0x262b);
  Core_datapath_csr__io_dmem_protection_2__prev = Core_datapath_csr__io_dmem_protection_2;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_2, 0x262c);
  Core_datapath_loadstore__io_dmem_protection_2__prev = Core_datapath_loadstore__io_dmem_protection_2;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_3, 0x262d);
  Core_datapath_csr__io_dmem_protection_3__prev = Core_datapath_csr__io_dmem_protection_3;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_3, 0x262e);
  Core_datapath_loadstore__io_dmem_protection_3__prev = Core_datapath_loadstore__io_dmem_protection_3;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_4, 0x262f);
  Core_datapath_csr__io_dmem_protection_4__prev = Core_datapath_csr__io_dmem_protection_4;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_4, 0x2630);
  Core_datapath_loadstore__io_dmem_protection_4__prev = Core_datapath_loadstore__io_dmem_protection_4;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_5, 0x2631);
  Core_datapath_csr__io_dmem_protection_5__prev = Core_datapath_csr__io_dmem_protection_5;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_5, 0x2632);
  Core_datapath_loadstore__io_dmem_protection_5__prev = Core_datapath_loadstore__io_dmem_protection_5;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_6, 0x2633);
  Core_datapath_csr__io_dmem_protection_6__prev = Core_datapath_csr__io_dmem_protection_6;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_6, 0x2634);
  Core_datapath_loadstore__io_dmem_protection_6__prev = Core_datapath_loadstore__io_dmem_protection_6;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_7, 0x2635);
  Core_datapath_csr__io_dmem_protection_7__prev = Core_datapath_csr__io_dmem_protection_7;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_7, 0x2636);
  Core_datapath_loadstore__io_dmem_protection_7__prev = Core_datapath_loadstore__io_dmem_protection_7;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_7, 0x2637);
  Core_datapath_csr__reg_dmem_protection_7__prev = Core_datapath_csr__reg_dmem_protection_7;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_6, 0x2638);
  Core_datapath_csr__reg_dmem_protection_6__prev = Core_datapath_csr__reg_dmem_protection_6;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_5, 0x2639);
  Core_datapath_csr__reg_dmem_protection_5__prev = Core_datapath_csr__reg_dmem_protection_5;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_4, 0x263a);
  Core_datapath_csr__reg_dmem_protection_4__prev = Core_datapath_csr__reg_dmem_protection_4;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_3, 0x263b);
  Core_datapath_csr__reg_dmem_protection_3__prev = Core_datapath_csr__reg_dmem_protection_3;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_2, 0x263c);
  Core_datapath_csr__reg_dmem_protection_2__prev = Core_datapath_csr__reg_dmem_protection_2;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_1, 0x263d);
  Core_datapath_csr__reg_dmem_protection_1__prev = Core_datapath_csr__reg_dmem_protection_1;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_0, 0x263e);
  Core_datapath_csr__reg_dmem_protection_0__prev = Core_datapath_csr__reg_dmem_protection_0;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_7, 0x263f);
  Core_datapath_csr__reg_imem_protection_7__prev = Core_datapath_csr__reg_imem_protection_7;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_6, 0x2640);
  Core_datapath_csr__reg_imem_protection_6__prev = Core_datapath_csr__reg_imem_protection_6;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_5, 0x2641);
  Core_datapath_csr__reg_imem_protection_5__prev = Core_datapath_csr__reg_imem_protection_5;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_4, 0x2642);
  Core_datapath_csr__reg_imem_protection_4__prev = Core_datapath_csr__reg_imem_protection_4;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_3, 0x2643);
  Core_datapath_csr__reg_imem_protection_3__prev = Core_datapath_csr__reg_imem_protection_3;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_2, 0x2644);
  Core_datapath_csr__reg_imem_protection_2__prev = Core_datapath_csr__reg_imem_protection_2;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_1, 0x2645);
  Core_datapath_csr__reg_imem_protection_1__prev = Core_datapath_csr__reg_imem_protection_1;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_0, 0x2646);
  Core_datapath_csr__reg_imem_protection_0__prev = Core_datapath_csr__reg_imem_protection_0;
  dat_dump<2>(f, Core_datapath_csr__reg_gpo_protection_3, 0x2647);
  Core_datapath_csr__reg_gpo_protection_3__prev = Core_datapath_csr__reg_gpo_protection_3;
  dat_dump<2>(f, Core_datapath_csr__reg_gpo_protection_2, 0x2648);
  Core_datapath_csr__reg_gpo_protection_2__prev = Core_datapath_csr__reg_gpo_protection_2;
  dat_dump<2>(f, Core_datapath_csr__reg_gpo_protection_1, 0x2649);
  Core_datapath_csr__reg_gpo_protection_1__prev = Core_datapath_csr__reg_gpo_protection_1;
  dat_dump<2>(f, Core_datapath_csr__reg_gpo_protection_0, 0x264a);
  Core_datapath_csr__reg_gpo_protection_0__prev = Core_datapath_csr__reg_gpo_protection_0;
  dat_dump<2>(f, Core_control__exe_inst_cause, 0x264b);
  Core_control__exe_inst_cause__prev = Core_control__exe_inst_cause;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_7, 0x264c);
  Core_datapath_csr__reg_slots_7__prev = Core_datapath_csr__reg_slots_7;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_6, 0x264d);
  Core_datapath_csr__reg_slots_6__prev = Core_datapath_csr__reg_slots_6;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_5, 0x264e);
  Core_datapath_csr__reg_slots_5__prev = Core_datapath_csr__reg_slots_5;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_4, 0x264f);
  Core_datapath_csr__reg_slots_4__prev = Core_datapath_csr__reg_slots_4;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_3, 0x2650);
  Core_datapath_csr__reg_slots_3__prev = Core_datapath_csr__reg_slots_3;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_2, 0x2651);
  Core_datapath_csr__reg_slots_2__prev = Core_datapath_csr__reg_slots_2;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_1, 0x2652);
  Core_datapath_csr__reg_slots_1__prev = Core_datapath_csr__reg_slots_1;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_0, 0x2653);
  Core_datapath_csr__reg_slots_0__prev = Core_datapath_csr__reg_slots_0;
  dat_dump<2>(f, Core_datapath_loadstore__mem_type_reg, 0x2654);
  Core_datapath_loadstore__mem_type_reg__prev = Core_datapath_loadstore__mem_type_reg;
  dat_dump<2>(f, Core_datapath_Multiplier__io_func, 0x2655);
  Core_datapath_Multiplier__io_func__prev = Core_datapath_Multiplier__io_func;
  dat_dump<2>(f, Core_datapath_csr__io_slots_7, 0x2656);
  Core_datapath_csr__io_slots_7__prev = Core_datapath_csr__io_slots_7;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_7, 0x2657);
  Core_datapath__io_control_csr_slots_7__prev = Core_datapath__io_control_csr_slots_7;
  dat_dump<2>(f, Core_control__io_csr_slots_7, 0x2658);
  Core_control__io_csr_slots_7__prev = Core_control__io_csr_slots_7;
  dat_dump<2>(f, Core_control_scheduler__io_slots_7, 0x2659);
  Core_control_scheduler__io_slots_7__prev = Core_control_scheduler__io_slots_7;
  dat_dump<2>(f, Core_datapath_csr__io_slots_6, 0x265a);
  Core_datapath_csr__io_slots_6__prev = Core_datapath_csr__io_slots_6;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_6, 0x265b);
  Core_datapath__io_control_csr_slots_6__prev = Core_datapath__io_control_csr_slots_6;
  dat_dump<2>(f, Core_control__io_csr_slots_6, 0x265c);
  Core_control__io_csr_slots_6__prev = Core_control__io_csr_slots_6;
  dat_dump<2>(f, Core_control_scheduler__io_slots_6, 0x265d);
  Core_control_scheduler__io_slots_6__prev = Core_control_scheduler__io_slots_6;
  dat_dump<2>(f, Core_datapath_csr__io_slots_5, 0x265e);
  Core_datapath_csr__io_slots_5__prev = Core_datapath_csr__io_slots_5;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_5, 0x265f);
  Core_datapath__io_control_csr_slots_5__prev = Core_datapath__io_control_csr_slots_5;
  dat_dump<2>(f, Core_control__io_csr_slots_5, 0x2660);
  Core_control__io_csr_slots_5__prev = Core_control__io_csr_slots_5;
  dat_dump<2>(f, Core_control_scheduler__io_slots_5, 0x2661);
  Core_control_scheduler__io_slots_5__prev = Core_control_scheduler__io_slots_5;
  dat_dump<2>(f, Core_datapath_csr__io_slots_4, 0x2662);
  Core_datapath_csr__io_slots_4__prev = Core_datapath_csr__io_slots_4;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_4, 0x2663);
  Core_datapath__io_control_csr_slots_4__prev = Core_datapath__io_control_csr_slots_4;
  dat_dump<2>(f, Core_control__io_csr_slots_4, 0x2664);
  Core_control__io_csr_slots_4__prev = Core_control__io_csr_slots_4;
  dat_dump<2>(f, Core_control_scheduler__io_slots_4, 0x2665);
  Core_control_scheduler__io_slots_4__prev = Core_control_scheduler__io_slots_4;
  dat_dump<2>(f, Core_datapath_csr__io_slots_3, 0x2666);
  Core_datapath_csr__io_slots_3__prev = Core_datapath_csr__io_slots_3;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_3, 0x2667);
  Core_datapath__io_control_csr_slots_3__prev = Core_datapath__io_control_csr_slots_3;
  dat_dump<2>(f, Core_control__io_csr_slots_3, 0x2668);
  Core_control__io_csr_slots_3__prev = Core_control__io_csr_slots_3;
  dat_dump<2>(f, Core_control_scheduler__io_slots_3, 0x2669);
  Core_control_scheduler__io_slots_3__prev = Core_control_scheduler__io_slots_3;
  dat_dump<2>(f, Core_datapath_csr__io_slots_2, 0x266a);
  Core_datapath_csr__io_slots_2__prev = Core_datapath_csr__io_slots_2;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_2, 0x266b);
  Core_datapath__io_control_csr_slots_2__prev = Core_datapath__io_control_csr_slots_2;
  dat_dump<2>(f, Core_control__io_csr_slots_2, 0x266c);
  Core_control__io_csr_slots_2__prev = Core_control__io_csr_slots_2;
  dat_dump<2>(f, Core_control_scheduler__io_slots_2, 0x266d);
  Core_control_scheduler__io_slots_2__prev = Core_control_scheduler__io_slots_2;
  dat_dump<2>(f, Core_datapath_csr__io_slots_1, 0x266e);
  Core_datapath_csr__io_slots_1__prev = Core_datapath_csr__io_slots_1;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_1, 0x266f);
  Core_datapath__io_control_csr_slots_1__prev = Core_datapath__io_control_csr_slots_1;
  dat_dump<2>(f, Core_control__io_csr_slots_1, 0x2670);
  Core_control__io_csr_slots_1__prev = Core_control__io_csr_slots_1;
  dat_dump<2>(f, Core_control_scheduler__io_slots_1, 0x2671);
  Core_control_scheduler__io_slots_1__prev = Core_control_scheduler__io_slots_1;
  dat_dump<2>(f, Core_datapath_csr__io_slots_0, 0x2672);
  Core_datapath_csr__io_slots_0__prev = Core_datapath_csr__io_slots_0;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_0, 0x2673);
  Core_datapath__io_control_csr_slots_0__prev = Core_datapath__io_control_csr_slots_0;
  dat_dump<2>(f, Core_control__io_csr_slots_0, 0x2674);
  Core_control__io_csr_slots_0__prev = Core_control__io_csr_slots_0;
  dat_dump<2>(f, Core_control_scheduler__io_slots_0, 0x2675);
  Core_control_scheduler__io_slots_0__prev = Core_control_scheduler__io_slots_0;
  dat_dump<2>(f, Core_control__dec_alu_type, 0x2676);
  Core_control__dec_alu_type__prev = Core_control__dec_alu_type;
  dat_dump<2>(f, Core_control__exe_reg_alu_type, 0x2677);
  Core_control__exe_reg_alu_type__prev = Core_control__exe_reg_alu_type;
  dat_dump<2>(f, Core_control__dec_mem_type, 0x2678);
  Core_control__dec_mem_type__prev = Core_control__dec_mem_type;
  dat_dump<2>(f, Core_control__exe_reg_mem_type, 0x2679);
  Core_control__exe_reg_mem_type__prev = Core_control__exe_reg_mem_type;
  dat_dump<2>(f, Core_datapath__exe_alu_shift, 0x267a);
  Core_datapath__exe_alu_shift__prev = Core_datapath__exe_alu_shift;
  dat_dump<2>(f, Core_control__exe_any_cause, 0x267b);
  Core_control__exe_any_cause__prev = Core_control__exe_any_cause;
  dat_dump<2>(f, Core_control__exe_exception_cause, 0x267c);
  Core_control__exe_exception_cause__prev = Core_control__exe_exception_cause;
  dat_dump<2>(f, Core_control__io_exe_cause, 0x267d);
  Core_control__io_exe_cause__prev = Core_control__io_exe_cause;
  dat_dump<2>(f, Core_datapath__io_control_exe_cause, 0x267e);
  Core_datapath__io_control_exe_cause__prev = Core_datapath__io_control_exe_cause;
  dat_dump<2>(f, Core_datapath_csr__io_cause, 0x2721);
  Core_datapath_csr__io_cause__prev = Core_datapath_csr__io_cause;
  dat_dump<2>(f, Core_datapath_csr__reg_causes_7, 0x2722);
  Core_datapath_csr__reg_causes_7__prev = Core_datapath_csr__reg_causes_7;
  dat_dump<2>(f, Core_datapath_csr__reg_causes_6, 0x2723);
  Core_datapath_csr__reg_causes_6__prev = Core_datapath_csr__reg_causes_6;
  dat_dump<2>(f, Core_datapath_csr__reg_causes_5, 0x2724);
  Core_datapath_csr__reg_causes_5__prev = Core_datapath_csr__reg_causes_5;
  dat_dump<2>(f, Core_datapath_csr__reg_causes_4, 0x2725);
  Core_datapath_csr__reg_causes_4__prev = Core_datapath_csr__reg_causes_4;
  dat_dump<2>(f, Core_datapath_csr__reg_causes_3, 0x2726);
  Core_datapath_csr__reg_causes_3__prev = Core_datapath_csr__reg_causes_3;
  dat_dump<2>(f, Core_datapath_csr__reg_causes_2, 0x2727);
  Core_datapath_csr__reg_causes_2__prev = Core_datapath_csr__reg_causes_2;
  dat_dump<2>(f, Core_datapath_csr__reg_causes_1, 0x2728);
  Core_datapath_csr__reg_causes_1__prev = Core_datapath_csr__reg_causes_1;
  dat_dump<2>(f, Core_datapath_csr__reg_causes_0, 0x2729);
  Core_datapath_csr__reg_causes_0__prev = Core_datapath_csr__reg_causes_0;
  dat_dump<2>(f, Core_datapath_regfile__io_rs1_addr, 0x272a);
  Core_datapath_regfile__io_rs1_addr__prev = Core_datapath_regfile__io_rs1_addr;
  dat_dump<2>(f, Core_datapath_regfile__io_rd_addr, 0x272b);
  Core_datapath_regfile__io_rd_addr__prev = Core_datapath_regfile__io_rd_addr;
  dat_dump<2>(f, Core_datapath_regfile__io_rs2_addr, 0x272c);
  Core_datapath_regfile__io_rs2_addr__prev = Core_datapath_regfile__io_rs2_addr;
  dat_dump<2>(f, Core_datapath__io_control_wb_rd_addr, 0x272d);
  Core_datapath__io_control_wb_rd_addr__prev = Core_datapath__io_control_wb_rd_addr;
  dat_dump<2>(f, Core_control__io_wb_rd_addr, 0x272e);
  Core_control__io_wb_rd_addr__prev = Core_control__io_wb_rd_addr;
  dat_dump<2>(f, Core_datapath__io_control_mem_rd_addr, 0x272f);
  Core_datapath__io_control_mem_rd_addr__prev = Core_datapath__io_control_mem_rd_addr;
  dat_dump<2>(f, Core_control__io_mem_rd_addr, 0x2730);
  Core_control__io_mem_rd_addr__prev = Core_control__io_mem_rd_addr;
  dat_dump<2>(f, Core_datapath__io_control_exe_rd_addr, 0x2731);
  Core_datapath__io_control_exe_rd_addr__prev = Core_datapath__io_control_exe_rd_addr;
  dat_dump<2>(f, Core_control__io_exe_rd_addr, 0x2732);
  Core_control__io_exe_rd_addr__prev = Core_control__io_exe_rd_addr;
  dat_dump<2>(f, Core_datapath__wb_reg_rd_addr, 0x2733);
  Core_datapath__wb_reg_rd_addr__prev = Core_datapath__wb_reg_rd_addr;
  dat_dump<2>(f, Core_datapath__exe_reg_rd_addr, 0x2734);
  Core_datapath__exe_reg_rd_addr__prev = Core_datapath__exe_reg_rd_addr;
  dat_dump<2>(f, Core_datapath__mem_reg_rd_addr, 0x2735);
  Core_datapath__mem_reg_rd_addr__prev = Core_datapath__mem_reg_rd_addr;
  dat_dump<2>(f, Core_datapath_loadstore__io_bus_addr, 0x2736);
  Core_datapath_loadstore__io_bus_addr__prev = Core_datapath_loadstore__io_bus_addr;
  dat_dump<2>(f, Core_datapath__io_bus_addr, 0x2737);
  Core_datapath__io_bus_addr__prev = Core_datapath__io_bus_addr;
  dat_dump<2>(f, Core__io_bus_addr, 0x2738);
  Core__io_bus_addr__prev = Core__io_bus_addr;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_addr, 0x2739);
  Core_datapath_loadstore__io_dmem_addr__prev = Core_datapath_loadstore__io_dmem_addr;
  dat_dump<2>(f, Core_datapath__io_dmem_addr, 0x273a);
  Core_datapath__io_dmem_addr__prev = Core_datapath__io_dmem_addr;
  dat_dump<2>(f, Core_dmem__io_core_addr, 0x273b);
  Core_dmem__io_core_addr__prev = Core_dmem__io_core_addr;
  dat_dump<2>(f, Core_datapath__io_imem_r_addr, 0x273c);
  Core_datapath__io_imem_r_addr__prev = Core_datapath__io_imem_r_addr;
  dat_dump<2>(f, Core_imem__io_core_r_addr, 0x273d);
  Core_imem__io_core_r_addr__prev = Core_imem__io_core_r_addr;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_rw_addr, 0x273e);
  Core_datapath_loadstore__io_imem_rw_addr__prev = Core_datapath_loadstore__io_imem_rw_addr;
  dat_dump<2>(f, Core_datapath__io_imem_rw_addr, 0x273f);
  Core_datapath__io_imem_rw_addr__prev = Core_datapath__io_imem_rw_addr;
  dat_dump<2>(f, Core_imem__io_core_rw_addr, 0x2740);
  Core_imem__io_core_rw_addr__prev = Core_imem__io_core_rw_addr;
  dat_dump<2>(f, Core_datapath_csr__io_rw_addr, 0x2741);
  Core_datapath_csr__io_rw_addr__prev = Core_datapath_csr__io_rw_addr;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_r_addr, 0x2742);
  Core_datapath_loadstore__io_imem_r_addr__prev = Core_datapath_loadstore__io_imem_r_addr;
  dat_dump<2>(f, Core_datapath__exe_reg_csr_addr, 0x2743);
  Core_datapath__exe_reg_csr_addr__prev = Core_datapath__exe_reg_csr_addr;
  dat_dump<2>(f, Core__io_dmem_addr, 0x2744);
  Core__io_dmem_addr__prev = Core__io_dmem_addr;
  dat_dump<2>(f, Core__io_imem_addr, 0x2745);
  Core__io_imem_addr__prev = Core__io_imem_addr;
  dat_dump<2>(f, Core_datapath__def_exe_alu_result, 0x2746);
  Core_datapath__def_exe_alu_result__prev = Core_datapath__def_exe_alu_result;
  dat_dump<2>(f, Core_datapath__exe_alu_result, 0x2747);
  Core_datapath__exe_alu_result__prev = Core_datapath__exe_alu_result;
  dat_dump<2>(f, Core_datapath__exe_address, 0x2748);
  Core_datapath__exe_address__prev = Core_datapath__exe_address;
  dat_dump<2>(f, Core_datapath_loadstore__io_addr, 0x2749);
  Core_datapath_loadstore__io_addr__prev = Core_datapath_loadstore__io_addr;
  dat_dump<2>(f, Core_datapath_loadstore__io_data_in, 0x274a);
  Core_datapath_loadstore__io_data_in__prev = Core_datapath_loadstore__io_data_in;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_data_in, 0x274b);
  Core_datapath_loadstore__io_dmem_data_in__prev = Core_datapath_loadstore__io_dmem_data_in;
  dat_dump<2>(f, Core_datapath__io_dmem_data_in, 0x274c);
  Core_datapath__io_dmem_data_in__prev = Core_datapath__io_dmem_data_in;
  dat_dump<2>(f, Core_dmem__io_core_data_in, 0x274d);
  Core_dmem__io_core_data_in__prev = Core_dmem__io_core_data_in;
  dat_dump<2>(f, Core_dmem__dout, 0x274e);
  Core_dmem__dout__prev = Core_dmem__dout;
  dat_dump<2>(f, Core_datapath__if_pc_plus4, 0x274f);
  Core_datapath__if_pc_plus4__prev = Core_datapath__if_pc_plus4;
  dat_dump<2>(f, Core_datapath__io_control_dec_inst, 0x2750);
  Core_datapath__io_control_dec_inst__prev = Core_datapath__io_control_dec_inst;
  dat_dump<2>(f, Core_control__io_dec_inst, 0x2751);
  Core_control__io_dec_inst__prev = Core_control__io_dec_inst;
  dat_dump<2>(f, Core_datapath_csr__io_evecs_0, 0x2752);
  Core_datapath_csr__io_evecs_0__prev = Core_datapath_csr__io_evecs_0;
  dat_dump<2>(f, Core_datapath_csr__io_evecs_1, 0x2753);
  Core_datapath_csr__io_evecs_1__prev = Core_datapath_csr__io_evecs_1;
  dat_dump<2>(f, Core_datapath_csr__io_evecs_2, 0x2754);
  Core_datapath_csr__io_evecs_2__prev = Core_datapath_csr__io_evecs_2;
  dat_dump<2>(f, Core_datapath_csr__io_evecs_3, 0x2755);
  Core_datapath_csr__io_evecs_3__prev = Core_datapath_csr__io_evecs_3;
  dat_dump<2>(f, Core_datapath_csr__io_evecs_4, 0x2756);
  Core_datapath_csr__io_evecs_4__prev = Core_datapath_csr__io_evecs_4;
  dat_dump<2>(f, Core_datapath_csr__io_evecs_5, 0x2757);
  Core_datapath_csr__io_evecs_5__prev = Core_datapath_csr__io_evecs_5;
  dat_dump<2>(f, Core_datapath_csr__io_evecs_6, 0x2758);
  Core_datapath_csr__io_evecs_6__prev = Core_datapath_csr__io_evecs_6;
  dat_dump<2>(f, Core_datapath_csr__io_evecs_7, 0x2759);
  Core_datapath_csr__io_evecs_7__prev = Core_datapath_csr__io_evecs_7;
  dat_dump<2>(f, Core_datapath__mem_evec, 0x275a);
  Core_datapath__mem_evec__prev = Core_datapath__mem_evec;
  dat_dump<2>(f, Core_datapath__next_pcs_0, 0x275b);
  Core_datapath__next_pcs_0__prev = Core_datapath__next_pcs_0;
  dat_dump<2>(f, Core_datapath__next_pcs_1, 0x275c);
  Core_datapath__next_pcs_1__prev = Core_datapath__next_pcs_1;
  dat_dump<2>(f, Core_datapath__next_pcs_2, 0x275d);
  Core_datapath__next_pcs_2__prev = Core_datapath__next_pcs_2;
  dat_dump<2>(f, Core_datapath__next_pcs_3, 0x275e);
  Core_datapath__next_pcs_3__prev = Core_datapath__next_pcs_3;
  dat_dump<2>(f, Core_datapath__next_pcs_4, 0x275f);
  Core_datapath__next_pcs_4__prev = Core_datapath__next_pcs_4;
  dat_dump<2>(f, Core_datapath__next_pcs_5, 0x2760);
  Core_datapath__next_pcs_5__prev = Core_datapath__next_pcs_5;
  dat_dump<2>(f, Core_datapath__next_pcs_6, 0x2761);
  Core_datapath__next_pcs_6__prev = Core_datapath__next_pcs_6;
  dat_dump<2>(f, Core_datapath__next_pcs_7, 0x2762);
  Core_datapath__next_pcs_7__prev = Core_datapath__next_pcs_7;
  dat_dump<2>(f, Core_datapath__next_pc, 0x2763);
  Core_datapath__next_pc__prev = Core_datapath__next_pc;
  dat_dump<2>(f, Core_imem__dout_r, 0x2764);
  Core_imem__dout_r__prev = Core_imem__dout_r;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_rw_data_in, 0x2765);
  Core_datapath_loadstore__io_imem_rw_data_in__prev = Core_datapath_loadstore__io_imem_rw_data_in;
  dat_dump<2>(f, Core_datapath__io_imem_rw_data_in, 0x2766);
  Core_datapath__io_imem_rw_data_in__prev = Core_datapath__io_imem_rw_data_in;
  dat_dump<2>(f, Core_imem__io_core_rw_data_in, 0x2767);
  Core_imem__io_core_rw_data_in__prev = Core_imem__io_core_rw_data_in;
  dat_dump<2>(f, Core_imem__R0, 0x2768);
  Core_imem__R0__prev = Core_imem__R0;
  dat_dump<2>(f, Core_datapath_csr__io_rw_data_in, 0x2769);
  Core_datapath_csr__io_rw_data_in__prev = Core_datapath_csr__io_rw_data_in;
  dat_dump<2>(f, Core_datapath_csr__reg_to_host, 0x276a);
  Core_datapath_csr__reg_to_host__prev = Core_datapath_csr__reg_to_host;
  dat_dump<2>(f, Core_datapath_csr__io_epc, 0x276b);
  Core_datapath_csr__io_epc__prev = Core_datapath_csr__io_epc;
  dat_dump<2>(f, Core_datapath_csr__reg_epcs_7, 0x276c);
  Core_datapath_csr__reg_epcs_7__prev = Core_datapath_csr__reg_epcs_7;
  dat_dump<2>(f, Core_datapath_csr__reg_epcs_6, 0x276d);
  Core_datapath_csr__reg_epcs_6__prev = Core_datapath_csr__reg_epcs_6;
  dat_dump<2>(f, Core_datapath_csr__reg_epcs_5, 0x276e);
  Core_datapath_csr__reg_epcs_5__prev = Core_datapath_csr__reg_epcs_5;
  dat_dump<2>(f, Core_datapath_csr__reg_epcs_4, 0x276f);
  Core_datapath_csr__reg_epcs_4__prev = Core_datapath_csr__reg_epcs_4;
  dat_dump<2>(f, Core_datapath_csr__reg_epcs_3, 0x2770);
  Core_datapath_csr__reg_epcs_3__prev = Core_datapath_csr__reg_epcs_3;
  dat_dump<2>(f, Core_datapath_csr__reg_epcs_2, 0x2771);
  Core_datapath_csr__reg_epcs_2__prev = Core_datapath_csr__reg_epcs_2;
  dat_dump<2>(f, Core_datapath_csr__reg_epcs_1, 0x2772);
  Core_datapath_csr__reg_epcs_1__prev = Core_datapath_csr__reg_epcs_1;
  dat_dump<2>(f, Core_datapath_csr__reg_epcs_0, 0x2773);
  Core_datapath_csr__reg_epcs_0__prev = Core_datapath_csr__reg_epcs_0;
  dat_dump<2>(f, Core_datapath_csr__reg_compare_7, 0x2774);
  Core_datapath_csr__reg_compare_7__prev = Core_datapath_csr__reg_compare_7;
  dat_dump<2>(f, Core_datapath_csr__reg_compare_6, 0x2775);
  Core_datapath_csr__reg_compare_6__prev = Core_datapath_csr__reg_compare_6;
  dat_dump<2>(f, Core_datapath_csr__reg_compare_5, 0x2776);
  Core_datapath_csr__reg_compare_5__prev = Core_datapath_csr__reg_compare_5;
  dat_dump<2>(f, Core_datapath_csr__reg_compare_4, 0x2777);
  Core_datapath_csr__reg_compare_4__prev = Core_datapath_csr__reg_compare_4;
  dat_dump<2>(f, Core_datapath_csr__reg_compare_3, 0x2778);
  Core_datapath_csr__reg_compare_3__prev = Core_datapath_csr__reg_compare_3;
  dat_dump<2>(f, Core_datapath_csr__reg_compare_1, 0x2779);
  Core_datapath_csr__reg_compare_1__prev = Core_datapath_csr__reg_compare_1;
  dat_dump<2>(f, Core_datapath_csr__reg_compare_0, 0x277a);
  Core_datapath_csr__reg_compare_0__prev = Core_datapath_csr__reg_compare_0;
  dat_dump<2>(f, Core_datapath_csr__reg_compare_2, 0x277b);
  Core_datapath_csr__reg_compare_2__prev = Core_datapath_csr__reg_compare_2;
  dat_dump<2>(f, Core_datapath_Multiplier__io_op2, 0x277c);
  Core_datapath_Multiplier__io_op2__prev = Core_datapath_Multiplier__io_op2;
  dat_dump<2>(f, Core_datapath_Multiplier__io_op1, 0x277d);
  Core_datapath_Multiplier__io_op1__prev = Core_datapath_Multiplier__io_op1;
  dat_dump<2>(f, Core_datapath_Multiplier__result, 0x277e);
  Core_datapath_Multiplier__result__prev = Core_datapath_Multiplier__result;
  dat_dump<2>(f, Core_datapath_Multiplier__R0, 0x2821);
  Core_datapath_Multiplier__R0__prev = Core_datapath_Multiplier__R0;
  dat_dump<2>(f, Core_imem__io_core_r_data_out, 0x2822);
  Core_imem__io_core_r_data_out__prev = Core_imem__io_core_r_data_out;
  dat_dump<2>(f, Core_datapath__io_imem_r_data_out, 0x2823);
  Core_datapath__io_imem_r_data_out__prev = Core_datapath__io_imem_r_data_out;
  dat_dump<2>(f, Core_datapath_regfile__dout1, 0x2824);
  Core_datapath_regfile__dout1__prev = Core_datapath_regfile__dout1;
  dat_dump<2>(f, Core_datapath_Multiplier__io_result, 0x2825);
  Core_datapath_Multiplier__io_result__prev = Core_datapath_Multiplier__io_result;
  dat_dump<2>(f, Core_datapath__mem_mul_result, 0x2826);
  Core_datapath__mem_mul_result__prev = Core_datapath__mem_mul_result;
  dat_dump<2>(f, Core__io_bus_data_out, 0x2827);
  Core__io_bus_data_out__prev = Core__io_bus_data_out;
  dat_dump<2>(f, Core_datapath__io_bus_data_out, 0x2828);
  Core_datapath__io_bus_data_out__prev = Core_datapath__io_bus_data_out;
  dat_dump<2>(f, Core_datapath_loadstore__io_bus_data_out, 0x2829);
  Core_datapath_loadstore__io_bus_data_out__prev = Core_datapath_loadstore__io_bus_data_out;
  dat_dump<2>(f, Core_imem__io_core_rw_data_out, 0x282a);
  Core_imem__io_core_rw_data_out__prev = Core_imem__io_core_rw_data_out;
  dat_dump<2>(f, Core_datapath__io_imem_rw_data_out, 0x282b);
  Core_datapath__io_imem_rw_data_out__prev = Core_datapath__io_imem_rw_data_out;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_rw_data_out, 0x282c);
  Core_datapath_loadstore__io_imem_rw_data_out__prev = Core_datapath_loadstore__io_imem_rw_data_out;
  dat_dump<2>(f, Core_dmem__io_core_data_out, 0x282d);
  Core_dmem__io_core_data_out__prev = Core_dmem__io_core_data_out;
  dat_dump<2>(f, Core_datapath__io_dmem_data_out, 0x282e);
  Core_datapath__io_dmem_data_out__prev = Core_datapath__io_dmem_data_out;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_data_out, 0x282f);
  Core_datapath_loadstore__io_dmem_data_out__prev = Core_datapath_loadstore__io_dmem_data_out;
  dat_dump<2>(f, Core_datapath_loadstore__io_data_out, 0x2830);
  Core_datapath_loadstore__io_data_out__prev = Core_datapath_loadstore__io_data_out;
  dat_dump<2>(f, Core_datapath__mem_rd_data, 0x2831);
  Core_datapath__mem_rd_data__prev = Core_datapath__mem_rd_data;
  dat_dump<2>(f, Core_datapath_regfile__io_rd_data, 0x2832);
  Core_datapath_regfile__io_rd_data__prev = Core_datapath_regfile__io_rd_data;
  dat_dump<2>(f, Core_datapath_regfile__dout2, 0x2833);
  Core_datapath_regfile__dout2__prev = Core_datapath_regfile__dout2;
  dat_dump<2>(f, Core_datapath_regfile__io_rs1_data, 0x2834);
  Core_datapath_regfile__io_rs1_data__prev = Core_datapath_regfile__io_rs1_data;
  dat_dump<2>(f, Core_datapath__wb_rd_data, 0x2835);
  Core_datapath__wb_rd_data__prev = Core_datapath__wb_rd_data;
  dat_dump<2>(f, Core_datapath_csr__io_rw_data_out, 0x2836);
  Core_datapath_csr__io_rw_data_out__prev = Core_datapath_csr__io_rw_data_out;
  dat_dump<2>(f, Core_datapath__exe_rd_data, 0x2837);
  Core_datapath__exe_rd_data__prev = Core_datapath__exe_rd_data;
  dat_dump<2>(f, Core_datapath__dec_rs1_data, 0x2838);
  Core_datapath__dec_rs1_data__prev = Core_datapath__dec_rs1_data;
  dat_dump<2>(f, Core_datapath__exe_reg_rs1_data, 0x2839);
  Core_datapath__exe_reg_rs1_data__prev = Core_datapath__exe_reg_rs1_data;
  dat_dump<2>(f, Core_datapath_regfile__io_rs2_data, 0x283a);
  Core_datapath_regfile__io_rs2_data__prev = Core_datapath_regfile__io_rs2_data;
  dat_dump<2>(f, Core_datapath__dec_rs2_data, 0x283b);
  Core_datapath__dec_rs2_data__prev = Core_datapath__dec_rs2_data;
  dat_dump<2>(f, Core_datapath__exe_reg_rs2_data, 0x283c);
  Core_datapath__exe_reg_rs2_data__prev = Core_datapath__exe_reg_rs2_data;
  dat_dump<2>(f, Core_datapath__dec_imm_i, 0x283d);
  Core_datapath__dec_imm_i__prev = Core_datapath__dec_imm_i;
  dat_dump<2>(f, Core_datapath__dec_imm_z, 0x283e);
  Core_datapath__dec_imm_z__prev = Core_datapath__dec_imm_z;
  dat_dump<2>(f, Core_datapath__dec_imm_j, 0x283f);
  Core_datapath__dec_imm_j__prev = Core_datapath__dec_imm_j;
  dat_dump<2>(f, Core_datapath__dec_imm_u, 0x2840);
  Core_datapath__dec_imm_u__prev = Core_datapath__dec_imm_u;
  dat_dump<2>(f, Core_datapath__dec_imm_b, 0x2841);
  Core_datapath__dec_imm_b__prev = Core_datapath__dec_imm_b;
  dat_dump<2>(f, Core_datapath__dec_imm_s, 0x2842);
  Core_datapath__dec_imm_s__prev = Core_datapath__dec_imm_s;
  dat_dump<2>(f, Core_datapath__dec_imm, 0x2843);
  Core_datapath__dec_imm__prev = Core_datapath__dec_imm;
  dat_dump<2>(f, Core_datapath__dec_csr_data, 0x2844);
  Core_datapath__dec_csr_data__prev = Core_datapath__dec_csr_data;
  dat_dump<2>(f, Core_datapath__exe_csr_data, 0x2845);
  Core_datapath__exe_csr_data__prev = Core_datapath__exe_csr_data;
  dat_dump<2>(f, Core_datapath__if_reg_pcs_7, 0x2846);
  Core_datapath__if_reg_pcs_7__prev = Core_datapath__if_reg_pcs_7;
  dat_dump<2>(f, Core_datapath__if_reg_pcs_6, 0x2847);
  Core_datapath__if_reg_pcs_6__prev = Core_datapath__if_reg_pcs_6;
  dat_dump<2>(f, Core_datapath__if_reg_pcs_5, 0x2848);
  Core_datapath__if_reg_pcs_5__prev = Core_datapath__if_reg_pcs_5;
  dat_dump<2>(f, Core_datapath__if_reg_pcs_4, 0x2849);
  Core_datapath__if_reg_pcs_4__prev = Core_datapath__if_reg_pcs_4;
  dat_dump<2>(f, Core_datapath__if_reg_pcs_3, 0x284a);
  Core_datapath__if_reg_pcs_3__prev = Core_datapath__if_reg_pcs_3;
  dat_dump<2>(f, Core_datapath__if_reg_pcs_2, 0x284b);
  Core_datapath__if_reg_pcs_2__prev = Core_datapath__if_reg_pcs_2;
  dat_dump<2>(f, Core_datapath__if_reg_pcs_1, 0x284c);
  Core_datapath__if_reg_pcs_1__prev = Core_datapath__if_reg_pcs_1;
  dat_dump<2>(f, Core_datapath__dec_op1, 0x284d);
  Core_datapath__dec_op1__prev = Core_datapath__dec_op1;
  dat_dump<2>(f, Core_datapath__exe_reg_op1, 0x284e);
  Core_datapath__exe_reg_op1__prev = Core_datapath__exe_reg_op1;
  dat_dump<2>(f, Core_datapath__dec_reg_pc4, 0x284f);
  Core_datapath__dec_reg_pc4__prev = Core_datapath__dec_reg_pc4;
  dat_dump<2>(f, Core_datapath__exe_reg_pc4, 0x2850);
  Core_datapath__exe_reg_pc4__prev = Core_datapath__exe_reg_pc4;
  dat_dump<2>(f, Core_datapath__mem_reg_rd_data, 0x2851);
  Core_datapath__mem_reg_rd_data__prev = Core_datapath__mem_reg_rd_data;
  dat_dump<2>(f, Core_datapath__wb_reg_rd_data, 0x2852);
  Core_datapath__wb_reg_rd_data__prev = Core_datapath__wb_reg_rd_data;
  dat_dump<2>(f, Core_datapath__dec_reg_inst, 0x2853);
  Core_datapath__dec_reg_inst__prev = Core_datapath__dec_reg_inst;
  dat_dump<2>(f, Core_datapath__dec_op2, 0x2854);
  Core_datapath__dec_op2__prev = Core_datapath__dec_op2;
  dat_dump<2>(f, Core_datapath__exe_reg_op2, 0x2855);
  Core_datapath__exe_reg_op2__prev = Core_datapath__exe_reg_op2;
  dat_dump<2>(f, Core_datapath__if_reg_pcs_0, 0x2856);
  Core_datapath__if_reg_pcs_0__prev = Core_datapath__if_reg_pcs_0;
  dat_dump<2>(f, Core_datapath__if_reg_pc, 0x2857);
  Core_datapath__if_reg_pc__prev = Core_datapath__if_reg_pc;
  dat_dump<2>(f, Core_datapath__dec_reg_pc, 0x2858);
  Core_datapath__dec_reg_pc__prev = Core_datapath__dec_reg_pc;
  dat_dump<2>(f, Core_datapath__exe_reg_pc, 0x2859);
  Core_datapath__exe_reg_pc__prev = Core_datapath__exe_reg_pc;
  dat_dump<2>(f, Core_imem__io_bus_data_out, 0x285a);
  Core_imem__io_bus_data_out__prev = Core_imem__io_bus_data_out;
  dat_dump<2>(f, Core__io_imem_data_out, 0x285b);
  Core__io_imem_data_out__prev = Core__io_imem_data_out;
  dat_dump<2>(f, Core_dmem__io_bus_data_out, 0x285c);
  Core_dmem__io_bus_data_out__prev = Core_dmem__io_bus_data_out;
  dat_dump<2>(f, Core__io_dmem_data_out, 0x285d);
  Core__io_dmem_data_out__prev = Core__io_dmem_data_out;
  dat_dump<2>(f, Core_datapath_loadstore__io_bus_data_in, 0x285e);
  Core_datapath_loadstore__io_bus_data_in__prev = Core_datapath_loadstore__io_bus_data_in;
  dat_dump<2>(f, Core_datapath__io_bus_data_in, 0x285f);
  Core_datapath__io_bus_data_in__prev = Core_datapath__io_bus_data_in;
  dat_dump<2>(f, Core__io_bus_data_in, 0x2860);
  Core__io_bus_data_in__prev = Core__io_bus_data_in;
  dat_dump<2>(f, Core_datapath_csr__io_host_to_host, 0x2861);
  Core_datapath_csr__io_host_to_host__prev = Core_datapath_csr__io_host_to_host;
  dat_dump<2>(f, Core_datapath__io_host_to_host, 0x2862);
  Core_datapath__io_host_to_host__prev = Core_datapath__io_host_to_host;
  dat_dump<2>(f, Core__io_host_to_host, 0x2863);
  Core__io_host_to_host__prev = Core__io_host_to_host;
  dat_dump<2>(f, Core__io_dmem_data_in, 0x2864);
  Core__io_dmem_data_in__prev = Core__io_dmem_data_in;
  dat_dump<2>(f, Core__io_imem_data_in, 0x2865);
  Core__io_imem_data_in__prev = Core__io_imem_data_in;
  dat_dump<2>(f, Core_datapath_Multiplier__op2, 0x2866);
  Core_datapath_Multiplier__op2__prev = Core_datapath_Multiplier__op2;
  dat_dump<2>(f, Core_datapath_Multiplier__op1, 0x2867);
  Core_datapath_Multiplier__op1__prev = Core_datapath_Multiplier__op1;
  dat_dump<2>(f, Core_datapath_csr__status_0, 0x2868);
  Core_datapath_csr__status_0__prev = Core_datapath_csr__status_0;
  dat_dump<2>(f, Core_datapath_csr__status_1, 0x2869);
  Core_datapath_csr__status_1__prev = Core_datapath_csr__status_1;
  dat_dump<2>(f, Core_datapath_csr__status_2, 0x286a);
  Core_datapath_csr__status_2__prev = Core_datapath_csr__status_2;
  dat_dump<2>(f, Core_datapath_csr__status_3, 0x286b);
  Core_datapath_csr__status_3__prev = Core_datapath_csr__status_3;
  dat_dump<2>(f, Core_datapath_csr__status_4, 0x286c);
  Core_datapath_csr__status_4__prev = Core_datapath_csr__status_4;
  dat_dump<2>(f, Core_datapath_csr__status_5, 0x286d);
  Core_datapath_csr__status_5__prev = Core_datapath_csr__status_5;
  dat_dump<2>(f, Core_datapath_csr__status_6, 0x286e);
  Core_datapath_csr__status_6__prev = Core_datapath_csr__status_6;
  dat_dump<2>(f, Core_datapath_csr__status_7, 0x286f);
  Core_datapath_csr__status_7__prev = Core_datapath_csr__status_7;
  dat_dump<2>(f, Core_datapath_csr__data_out, 0x2870);
  Core_datapath_csr__data_out__prev = Core_datapath_csr__data_out;
  dat_dump<2>(f, Core_datapath_csr__data_in, 0x2871);
  Core_datapath_csr__data_in__prev = Core_datapath_csr__data_in;
  dat_dump<2>(f, Core_datapath_csr__reg_sup0_7, 0x2872);
  Core_datapath_csr__reg_sup0_7__prev = Core_datapath_csr__reg_sup0_7;
  dat_dump<2>(f, Core_datapath_csr__reg_sup0_6, 0x2873);
  Core_datapath_csr__reg_sup0_6__prev = Core_datapath_csr__reg_sup0_6;
  dat_dump<2>(f, Core_datapath_csr__reg_sup0_5, 0x2874);
  Core_datapath_csr__reg_sup0_5__prev = Core_datapath_csr__reg_sup0_5;
  dat_dump<2>(f, Core_datapath_csr__reg_sup0_4, 0x2875);
  Core_datapath_csr__reg_sup0_4__prev = Core_datapath_csr__reg_sup0_4;
  dat_dump<2>(f, Core_datapath_csr__reg_sup0_3, 0x2876);
  Core_datapath_csr__reg_sup0_3__prev = Core_datapath_csr__reg_sup0_3;
  dat_dump<2>(f, Core_datapath_csr__reg_sup0_2, 0x2877);
  Core_datapath_csr__reg_sup0_2__prev = Core_datapath_csr__reg_sup0_2;
  dat_dump<2>(f, Core_datapath_csr__reg_sup0_1, 0x2878);
  Core_datapath_csr__reg_sup0_1__prev = Core_datapath_csr__reg_sup0_1;
  dat_dump<2>(f, Core_datapath_csr__reg_sup0_0, 0x2879);
  Core_datapath_csr__reg_sup0_0__prev = Core_datapath_csr__reg_sup0_0;
  dat_dump<2>(f, Core_datapath_csr__reg_evecs_7, 0x287a);
  Core_datapath_csr__reg_evecs_7__prev = Core_datapath_csr__reg_evecs_7;
  dat_dump<2>(f, Core_datapath_csr__reg_evecs_6, 0x287b);
  Core_datapath_csr__reg_evecs_6__prev = Core_datapath_csr__reg_evecs_6;
  dat_dump<2>(f, Core_datapath_csr__reg_evecs_5, 0x287c);
  Core_datapath_csr__reg_evecs_5__prev = Core_datapath_csr__reg_evecs_5;
  dat_dump<2>(f, Core_datapath_csr__reg_evecs_4, 0x287d);
  Core_datapath_csr__reg_evecs_4__prev = Core_datapath_csr__reg_evecs_4;
  dat_dump<2>(f, Core_datapath_csr__reg_evecs_3, 0x287e);
  Core_datapath_csr__reg_evecs_3__prev = Core_datapath_csr__reg_evecs_3;
  dat_dump<2>(f, Core_datapath_csr__reg_evecs_2, 0x2921);
  Core_datapath_csr__reg_evecs_2__prev = Core_datapath_csr__reg_evecs_2;
  dat_dump<2>(f, Core_datapath_csr__reg_evecs_1, 0x2922);
  Core_datapath_csr__reg_evecs_1__prev = Core_datapath_csr__reg_evecs_1;
  dat_dump<2>(f, Core_datapath_csr__reg_evecs_0, 0x2923);
  Core_datapath_csr__reg_evecs_0__prev = Core_datapath_csr__reg_evecs_0;
  dat_dump<2>(f, Core_datapath_csr__reg_time, 0x2924);
  Core_datapath_csr__reg_time__prev = Core_datapath_csr__reg_time;
  dat_dump<2>(f, Core_datapath_Multiplier__mul_result, 0x2925);
  Core_datapath_Multiplier__mul_result__prev = Core_datapath_Multiplier__mul_result;
}


void Core_t::dump ( FILE* f, int t ) {
  if (t == 0) return dump_init(f);
  fprintf(f, "#%d\n", t);
  if (Core_datapath_csr__int_ext != Core_datapath_csr__int_ext__prev)
    goto L0;
K0:
  if (Core_datapath_csr__io_int_ext != Core_datapath_csr__io_int_ext__prev)
    goto L1;
K1:
  if (Core_datapath__io_control_exe_int_ext != Core_datapath__io_control_exe_int_ext__prev)
    goto L2;
K2:
  if (Core_control__io_exe_int_ext != Core_control__io_exe_int_ext__prev)
    goto L3;
K3:
  if (Core_datapath_csr__expired_0 != Core_datapath_csr__expired_0__prev)
    goto L4;
K4:
  if (Core_datapath_csr__expired_1 != Core_datapath_csr__expired_1__prev)
    goto L5;
K5:
  if (Core_datapath_csr__expired_2 != Core_datapath_csr__expired_2__prev)
    goto L6;
K6:
  if (Core_datapath_csr__expired_3 != Core_datapath_csr__expired_3__prev)
    goto L7;
K7:
  if (Core_datapath_csr__expired_4 != Core_datapath_csr__expired_4__prev)
    goto L8;
K8:
  if (Core_datapath_csr__expired_5 != Core_datapath_csr__expired_5__prev)
    goto L9;
K9:
  if (Core_datapath_csr__expired_6 != Core_datapath_csr__expired_6__prev)
    goto L10;
K10:
  if (Core_datapath_csr__expired_7 != Core_datapath_csr__expired_7__prev)
    goto L11;
K11:
  if (Core_control__io_exe_valid != Core_control__io_exe_valid__prev)
    goto L12;
K12:
  if (Core_datapath__io_control_exe_valid != Core_datapath__io_control_exe_valid__prev)
    goto L13;
K13:
  if (Core_datapath_csr__io_rw_valid != Core_datapath_csr__io_rw_valid__prev)
    goto L14;
K14:
  if (Core_datapath_csr__int_expire != Core_datapath_csr__int_expire__prev)
    goto L15;
K15:
  if (Core_datapath_csr__io_int_expire != Core_datapath_csr__io_int_expire__prev)
    goto L16;
K16:
  if (Core_datapath__io_control_exe_int_expire != Core_datapath__io_control_exe_int_expire__prev)
    goto L17;
K17:
  if (Core_control__io_exe_int_expire != Core_control__io_exe_int_expire__prev)
    goto L18;
K18:
  if (Core_datapath_csr__exc_expire != Core_datapath_csr__exc_expire__prev)
    goto L19;
K19:
  if (Core_datapath_csr__io_exc_expire != Core_datapath_csr__io_exc_expire__prev)
    goto L20;
K20:
  if (Core_datapath__io_control_exe_exc_expire != Core_datapath__io_control_exe_exc_expire__prev)
    goto L21;
K21:
  if (Core_control__io_exe_exc_expire != Core_control__io_exe_exc_expire__prev)
    goto L22;
K22:
  if (Core_control__exe_any_exc != Core_control__exe_any_exc__prev)
    goto L23;
K23:
  if (Core_control__exe_kill != Core_control__exe_kill__prev)
    goto L24;
K24:
  if (Core_control__io_exe_kill != Core_control__io_exe_kill__prev)
    goto L25;
K25:
  if (Core_datapath__io_control_exe_kill != Core_datapath__io_control_exe_kill__prev)
    goto L26;
K26:
  if (Core_datapath_loadstore__io_kill != Core_datapath_loadstore__io_kill__prev)
    goto L27;
K27:
  if (Core_datapath_loadstore__store_fault != Core_datapath_loadstore__store_fault__prev)
    goto L28;
K28:
  if (Core_control__exe_store != Core_control__exe_store__prev)
    goto L29;
K29:
  if (Core_control__io_exe_store != Core_control__io_exe_store__prev)
    goto L30;
K30:
  if (Core_datapath__io_control_exe_store != Core_datapath__io_control_exe_store__prev)
    goto L31;
K31:
  if (Core_datapath_loadstore__io_store != Core_datapath_loadstore__io_store__prev)
    goto L32;
K32:
  if (Core_datapath_loadstore__store_misaligned != Core_datapath_loadstore__store_misaligned__prev)
    goto L33;
K33:
  if (Core_datapath_loadstore__bus_op != Core_datapath_loadstore__bus_op__prev)
    goto L34;
K34:
  if (Core_datapath_loadstore__imem_op != Core_datapath_loadstore__imem_op__prev)
    goto L35;
K35:
  if (Core_datapath_loadstore__dmem_op != Core_datapath_loadstore__dmem_op__prev)
    goto L36;
K36:
  if (Core_datapath_loadstore__permission != Core_datapath_loadstore__permission__prev)
    goto L37;
K37:
  if (Core_datapath_loadstore__write != Core_datapath_loadstore__write__prev)
    goto L38;
K38:
  if (Core_datapath_loadstore__io_dmem_byte_write_0 != Core_datapath_loadstore__io_dmem_byte_write_0__prev)
    goto L39;
K39:
  if (Core_datapath__io_dmem_byte_write_0 != Core_datapath__io_dmem_byte_write_0__prev)
    goto L40;
K40:
  if (Core_dmem__io_core_byte_write_0 != Core_dmem__io_core_byte_write_0__prev)
    goto L41;
K41:
  if (Core_datapath_loadstore__io_dmem_byte_write_1 != Core_datapath_loadstore__io_dmem_byte_write_1__prev)
    goto L42;
K42:
  if (Core_datapath__io_dmem_byte_write_1 != Core_datapath__io_dmem_byte_write_1__prev)
    goto L43;
K43:
  if (Core_dmem__io_core_byte_write_1 != Core_dmem__io_core_byte_write_1__prev)
    goto L44;
K44:
  if (Core_datapath_loadstore__io_dmem_byte_write_2 != Core_datapath_loadstore__io_dmem_byte_write_2__prev)
    goto L45;
K45:
  if (Core_datapath__io_dmem_byte_write_2 != Core_datapath__io_dmem_byte_write_2__prev)
    goto L46;
K46:
  if (Core_dmem__io_core_byte_write_2 != Core_dmem__io_core_byte_write_2__prev)
    goto L47;
K47:
  if (Core_datapath_loadstore__io_dmem_byte_write_3 != Core_datapath_loadstore__io_dmem_byte_write_3__prev)
    goto L48;
K48:
  if (Core_datapath__io_dmem_byte_write_3 != Core_datapath__io_dmem_byte_write_3__prev)
    goto L49;
K49:
  if (Core_dmem__io_core_byte_write_3 != Core_dmem__io_core_byte_write_3__prev)
    goto L50;
K50:
  if (Core_control__exe_load != Core_control__exe_load__prev)
    goto L51;
K51:
  if (Core_control__io_exe_load != Core_control__io_exe_load__prev)
    goto L52;
K52:
  if (Core_datapath__io_control_exe_load != Core_datapath__io_control_exe_load__prev)
    goto L53;
K53:
  if (Core_datapath_loadstore__io_load != Core_datapath_loadstore__io_load__prev)
    goto L54;
K54:
  if (Core_datapath_loadstore__io_dmem_enable != Core_datapath_loadstore__io_dmem_enable__prev)
    goto L55;
K55:
  if (Core_datapath__io_dmem_enable != Core_datapath__io_dmem_enable__prev)
    goto L56;
K56:
  if (Core_dmem__io_core_enable != Core_dmem__io_core_enable__prev)
    goto L57;
K57:
  if (Core_control__dec_load != Core_control__dec_load__prev)
    goto L58;
K58:
  if (Core_control__dec_fence_i != Core_control__dec_fence_i__prev)
    goto L59;
K59:
  if (Core_control__dec_stall != Core_control__dec_stall__prev)
    goto L60;
K60:
  if (Core_control__if_pre_valid != Core_control__if_pre_valid__prev)
    goto L61;
K61:
  if (Core_datapath_csr__io_expire != Core_datapath_csr__io_expire__prev)
    goto L62;
K62:
  if (Core_datapath__io_control_exe_expire != Core_datapath__io_control_exe_expire__prev)
    goto L63;
K63:
  if (Core_control__io_exe_expire != Core_control__io_exe_expire__prev)
    goto L64;
K64:
  if (Core_control__exe_du != Core_control__exe_du__prev)
    goto L65;
K65:
  if (Core_datapath__exe_ltu != Core_datapath__exe_ltu__prev)
    goto L66;
K66:
  if (Core_datapath__exe_lt != Core_datapath__exe_lt__prev)
    goto L67;
K67:
  if (Core_datapath__exe_eq != Core_datapath__exe_eq__prev)
    goto L68;
K68:
  if (Core_datapath__exe_br_cond != Core_datapath__exe_br_cond__prev)
    goto L69;
K69:
  if (Core_datapath__io_control_exe_br_cond != Core_datapath__io_control_exe_br_cond__prev)
    goto L70;
K70:
  if (Core_control__io_exe_br_cond != Core_control__io_exe_br_cond__prev)
    goto L71;
K71:
  if (Core_control__exe_brjmp != Core_control__exe_brjmp__prev)
    goto L72;
K72:
  if (Core_control__next_valid != Core_control__next_valid__prev)
    goto L73;
K73:
  if (Core_control__io_next_valid != Core_control__io_next_valid__prev)
    goto L74;
K74:
  if (Core_datapath__io_control_next_valid != Core_datapath__io_control_next_valid__prev)
    goto L75;
K75:
  if (Core_datapath__io_imem_r_enable != Core_datapath__io_imem_r_enable__prev)
    goto L76;
K76:
  if (Core_imem__io_core_r_enable != Core_imem__io_core_r_enable__prev)
    goto L77;
K77:
  if (Core_datapath_loadstore__io_imem_rw_write != Core_datapath_loadstore__io_imem_rw_write__prev)
    goto L78;
K78:
  if (Core_datapath__io_imem_rw_write != Core_datapath__io_imem_rw_write__prev)
    goto L79;
K79:
  if (Core_imem__io_core_rw_write != Core_imem__io_core_rw_write__prev)
    goto L80;
K80:
  if (Core_datapath_loadstore__io_imem_rw_enable != Core_datapath_loadstore__io_imem_rw_enable__prev)
    goto L81;
K81:
  if (Core_datapath__io_imem_rw_enable != Core_datapath__io_imem_rw_enable__prev)
    goto L82;
K82:
  if (Core_imem__io_core_rw_enable != Core_imem__io_core_rw_enable__prev)
    goto L83;
K83:
  if (Core_datapath_csr__io_kill != Core_datapath_csr__io_kill__prev)
    goto L84;
K84:
  if (Core_datapath_csr__priv_fault != Core_datapath_csr__priv_fault__prev)
    goto L85;
K85:
  if (Core_control__exe_csr_write != Core_control__exe_csr_write__prev)
    goto L86;
K86:
  if (Core_control__io_exe_csr_write != Core_control__io_exe_csr_write__prev)
    goto L87;
K87:
  if (Core_datapath__io_control_exe_csr_write != Core_datapath__io_control_exe_csr_write__prev)
    goto L88;
K88:
  if (Core_datapath_csr__io_rw_write != Core_datapath_csr__io_rw_write__prev)
    goto L89;
K89:
  if (Core_datapath_csr__write != Core_datapath_csr__write__prev)
    goto L90;
K90:
  if (Core__io_int_exts_0 != Core__io_int_exts_0__prev)
    goto L91;
K91:
  if (Core_datapath__io_int_exts_0 != Core_datapath__io_int_exts_0__prev)
    goto L92;
K92:
  if (Core_datapath_csr__io_int_exts_0 != Core_datapath_csr__io_int_exts_0__prev)
    goto L93;
K93:
  if (Core__io_int_exts_1 != Core__io_int_exts_1__prev)
    goto L94;
K94:
  if (Core_datapath__io_int_exts_1 != Core_datapath__io_int_exts_1__prev)
    goto L95;
K95:
  if (Core_datapath_csr__io_int_exts_1 != Core_datapath_csr__io_int_exts_1__prev)
    goto L96;
K96:
  if (Core__io_int_exts_2 != Core__io_int_exts_2__prev)
    goto L97;
K97:
  if (Core_datapath__io_int_exts_2 != Core_datapath__io_int_exts_2__prev)
    goto L98;
K98:
  if (Core_datapath_csr__io_int_exts_2 != Core_datapath_csr__io_int_exts_2__prev)
    goto L99;
K99:
  if (Core__io_int_exts_3 != Core__io_int_exts_3__prev)
    goto L100;
K100:
  if (Core_datapath__io_int_exts_3 != Core_datapath__io_int_exts_3__prev)
    goto L101;
K101:
  if (Core_datapath_csr__io_int_exts_3 != Core_datapath_csr__io_int_exts_3__prev)
    goto L102;
K102:
  if (Core__io_int_exts_4 != Core__io_int_exts_4__prev)
    goto L103;
K103:
  if (Core_datapath__io_int_exts_4 != Core_datapath__io_int_exts_4__prev)
    goto L104;
K104:
  if (Core_datapath_csr__io_int_exts_4 != Core_datapath_csr__io_int_exts_4__prev)
    goto L105;
K105:
  if (Core__io_int_exts_5 != Core__io_int_exts_5__prev)
    goto L106;
K106:
  if (Core_datapath__io_int_exts_5 != Core_datapath__io_int_exts_5__prev)
    goto L107;
K107:
  if (Core_datapath_csr__io_int_exts_5 != Core_datapath_csr__io_int_exts_5__prev)
    goto L108;
K108:
  if (Core__io_int_exts_6 != Core__io_int_exts_6__prev)
    goto L109;
K109:
  if (Core_datapath__io_int_exts_6 != Core_datapath__io_int_exts_6__prev)
    goto L110;
K110:
  if (Core_datapath_csr__io_int_exts_6 != Core_datapath_csr__io_int_exts_6__prev)
    goto L111;
K111:
  if (Core__io_int_exts_7 != Core__io_int_exts_7__prev)
    goto L112;
K112:
  if (Core_datapath__io_int_exts_7 != Core_datapath__io_int_exts_7__prev)
    goto L113;
K113:
  if (Core_datapath_csr__io_int_exts_7 != Core_datapath_csr__io_int_exts_7__prev)
    goto L114;
K114:
  if (Core_datapath__reset != Core_datapath__reset__prev)
    goto L115;
K115:
  if (Core_datapath_csr__reset != Core_datapath_csr__reset__prev)
    goto L116;
K116:
  if (Core_datapath_csr__reg_msip_1 != Core_datapath_csr__reg_msip_1__prev)
    goto L117;
K117:
  if (Core_datapath_csr__reg_mtie_7 != Core_datapath_csr__reg_mtie_7__prev)
    goto L118;
K118:
  if (Core_datapath_csr__reg_ie1_7 != Core_datapath_csr__reg_ie1_7__prev)
    goto L119;
K119:
  if (Core_datapath_loadstore__io_store_misaligned != Core_datapath_loadstore__io_store_misaligned__prev)
    goto L120;
K120:
  if (Core_datapath__io_control_exe_exc_store_misaligned != Core_datapath__io_control_exe_exc_store_misaligned__prev)
    goto L121;
K121:
  if (Core_control__io_exe_exc_store_misaligned != Core_control__io_exe_exc_store_misaligned__prev)
    goto L122;
K122:
  if (Core_datapath_loadstore__load_misaligned != Core_datapath_loadstore__load_misaligned__prev)
    goto L123;
K123:
  if (Core_datapath_loadstore__io_load_misaligned != Core_datapath_loadstore__io_load_misaligned__prev)
    goto L124;
K124:
  if (Core_datapath__io_control_exe_exc_load_misaligned != Core_datapath__io_control_exe_exc_load_misaligned__prev)
    goto L125;
K125:
  if (Core_control__io_exe_exc_load_misaligned != Core_control__io_exe_exc_load_misaligned__prev)
    goto L126;
K126:
  if (Core_datapath_csr__io_priv_fault != Core_datapath_csr__io_priv_fault__prev)
    goto L127;
K127:
  if (Core_datapath__io_control_exe_exc_priv_inst != Core_datapath__io_control_exe_exc_priv_inst__prev)
    goto L128;
K128:
  if (Core_control__io_exe_exc_priv_inst != Core_control__io_exe_exc_priv_inst__prev)
    goto L129;
K129:
  if (Core_control__exe_inst_exc != Core_control__exe_inst_exc__prev)
    goto L130;
K130:
  if (Core_control__exe_exception != Core_control__exe_exception__prev)
    goto L131;
K131:
  if (Core_control__io_exe_exception != Core_control__io_exe_exception__prev)
    goto L132;
K132:
  if (Core_datapath__io_control_exe_exception != Core_datapath__io_control_exe_exception__prev)
    goto L133;
K133:
  if (Core_datapath_csr__io_exception != Core_datapath_csr__io_exception__prev)
    goto L134;
K134:
  if (Core_datapath_csr__reg_ie_7 != Core_datapath_csr__reg_ie_7__prev)
    goto L135;
K135:
  if (Core_datapath_csr__reg_msip_7 != Core_datapath_csr__reg_msip_7__prev)
    goto L136;
K136:
  if (Core_datapath_csr__reg_mtie_6 != Core_datapath_csr__reg_mtie_6__prev)
    goto L137;
K137:
  if (Core_datapath_csr__reg_ie1_6 != Core_datapath_csr__reg_ie1_6__prev)
    goto L138;
K138:
  if (Core_datapath_csr__reg_ie_6 != Core_datapath_csr__reg_ie_6__prev)
    goto L139;
K139:
  if (Core_datapath_csr__reg_msip_6 != Core_datapath_csr__reg_msip_6__prev)
    goto L140;
K140:
  if (Core_datapath_csr__reg_mtie_5 != Core_datapath_csr__reg_mtie_5__prev)
    goto L141;
K141:
  if (Core_datapath_csr__reg_ie1_5 != Core_datapath_csr__reg_ie1_5__prev)
    goto L142;
K142:
  if (Core_datapath_csr__reg_ie_5 != Core_datapath_csr__reg_ie_5__prev)
    goto L143;
K143:
  if (Core_datapath_csr__reg_msip_5 != Core_datapath_csr__reg_msip_5__prev)
    goto L144;
K144:
  if (Core_datapath_csr__reg_mtie_4 != Core_datapath_csr__reg_mtie_4__prev)
    goto L145;
K145:
  if (Core_datapath_csr__reg_ie1_4 != Core_datapath_csr__reg_ie1_4__prev)
    goto L146;
K146:
  if (Core_datapath_csr__reg_ie_4 != Core_datapath_csr__reg_ie_4__prev)
    goto L147;
K147:
  if (Core_datapath_csr__reg_msip_4 != Core_datapath_csr__reg_msip_4__prev)
    goto L148;
K148:
  if (Core_datapath_csr__reg_mtie_3 != Core_datapath_csr__reg_mtie_3__prev)
    goto L149;
K149:
  if (Core_datapath_csr__reg_ie1_3 != Core_datapath_csr__reg_ie1_3__prev)
    goto L150;
K150:
  if (Core_datapath_csr__reg_ie_3 != Core_datapath_csr__reg_ie_3__prev)
    goto L151;
K151:
  if (Core_datapath_csr__reg_msip_3 != Core_datapath_csr__reg_msip_3__prev)
    goto L152;
K152:
  if (Core_datapath_csr__reg_mtie_2 != Core_datapath_csr__reg_mtie_2__prev)
    goto L153;
K153:
  if (Core_datapath_csr__reg_ie1_2 != Core_datapath_csr__reg_ie1_2__prev)
    goto L154;
K154:
  if (Core_datapath_csr__reg_ie_2 != Core_datapath_csr__reg_ie_2__prev)
    goto L155;
K155:
  if (Core_datapath_csr__reg_msip_2 != Core_datapath_csr__reg_msip_2__prev)
    goto L156;
K156:
  if (Core_datapath_csr__reg_mtie_1 != Core_datapath_csr__reg_mtie_1__prev)
    goto L157;
K157:
  if (Core_datapath_csr__reg_ie1_1 != Core_datapath_csr__reg_ie1_1__prev)
    goto L158;
K158:
  if (Core_datapath_csr__reg_ie_1 != Core_datapath_csr__reg_ie_1__prev)
    goto L159;
K159:
  if (Core_datapath_csr__reg_mtie_0 != Core_datapath_csr__reg_mtie_0__prev)
    goto L160;
K160:
  if (Core_datapath_csr__reg_ie1_0 != Core_datapath_csr__reg_ie1_0__prev)
    goto L161;
K161:
  if (Core_datapath_csr__reg_ie_0 != Core_datapath_csr__reg_ie_0__prev)
    goto L162;
K162:
  if (Core__io_gpio_in_3 != Core__io_gpio_in_3__prev)
    goto L163;
K163:
  if (Core_datapath__io_gpio_in_3 != Core_datapath__io_gpio_in_3__prev)
    goto L164;
K164:
  if (Core_datapath_csr__io_gpio_in_3 != Core_datapath_csr__io_gpio_in_3__prev)
    goto L165;
K165:
  if (Core_datapath_csr__reg_gpis_3 != Core_datapath_csr__reg_gpis_3__prev)
    goto L166;
K166:
  if (Core__io_gpio_in_2 != Core__io_gpio_in_2__prev)
    goto L167;
K167:
  if (Core_datapath__io_gpio_in_2 != Core_datapath__io_gpio_in_2__prev)
    goto L168;
K168:
  if (Core_datapath_csr__io_gpio_in_2 != Core_datapath_csr__io_gpio_in_2__prev)
    goto L169;
K169:
  if (Core_datapath_csr__reg_gpis_2 != Core_datapath_csr__reg_gpis_2__prev)
    goto L170;
K170:
  if (Core__io_gpio_in_1 != Core__io_gpio_in_1__prev)
    goto L171;
K171:
  if (Core_datapath__io_gpio_in_1 != Core_datapath__io_gpio_in_1__prev)
    goto L172;
K172:
  if (Core_datapath_csr__io_gpio_in_1 != Core_datapath_csr__io_gpio_in_1__prev)
    goto L173;
K173:
  if (Core_datapath_csr__reg_gpis_1 != Core_datapath_csr__reg_gpis_1__prev)
    goto L174;
K174:
  if (Core__io_gpio_in_0 != Core__io_gpio_in_0__prev)
    goto L175;
K175:
  if (Core_datapath__io_gpio_in_0 != Core_datapath__io_gpio_in_0__prev)
    goto L176;
K176:
  if (Core_datapath_csr__io_gpio_in_0 != Core_datapath_csr__io_gpio_in_0__prev)
    goto L177;
K177:
  if (Core_datapath_csr__reg_gpis_0 != Core_datapath_csr__reg_gpis_0__prev)
    goto L178;
K178:
  if (Core_control__exe_valid != Core_control__exe_valid__prev)
    goto L179;
K179:
  if (Core_control__exe_sleep != Core_control__exe_sleep__prev)
    goto L180;
K180:
  if (Core_control__io_exe_sleep != Core_control__io_exe_sleep__prev)
    goto L181;
K181:
  if (Core_datapath__io_control_exe_sleep != Core_datapath__io_control_exe_sleep__prev)
    goto L182;
K182:
  if (Core_datapath_csr__io_sleep != Core_datapath_csr__io_sleep__prev)
    goto L183;
K183:
  if (Core_datapath_csr__sleep != Core_datapath_csr__sleep__prev)
    goto L184;
K184:
  if (Core_datapath_csr__wake_1 != Core_datapath_csr__wake_1__prev)
    goto L185;
K185:
  if (Core_datapath_csr__wake_7 != Core_datapath_csr__wake_7__prev)
    goto L186;
K186:
  if (Core_datapath_csr__wake_6 != Core_datapath_csr__wake_6__prev)
    goto L187;
K187:
  if (Core_datapath_csr__wake_5 != Core_datapath_csr__wake_5__prev)
    goto L188;
K188:
  if (Core_datapath_csr__wake_4 != Core_datapath_csr__wake_4__prev)
    goto L189;
K189:
  if (Core_datapath_csr__wake_3 != Core_datapath_csr__wake_3__prev)
    goto L190;
K190:
  if (Core_control__exe_ee != Core_control__exe_ee__prev)
    goto L191;
K191:
  if (Core_control__io_exe_ee != Core_control__io_exe_ee__prev)
    goto L192;
K192:
  if (Core_datapath__io_control_exe_ee != Core_datapath__io_control_exe_ee__prev)
    goto L193;
K193:
  if (Core_datapath_csr__io_ee != Core_datapath_csr__io_ee__prev)
    goto L194;
K194:
  if (Core_control__exe_ie != Core_control__exe_ie__prev)
    goto L195;
K195:
  if (Core_control__io_exe_ie != Core_control__io_exe_ie__prev)
    goto L196;
K196:
  if (Core_datapath__io_control_exe_ie != Core_datapath__io_control_exe_ie__prev)
    goto L197;
K197:
  if (Core_datapath_csr__io_ie != Core_datapath_csr__io_ie__prev)
    goto L198;
K198:
  if (Core_datapath_csr__wake_2 != Core_datapath_csr__wake_2__prev)
    goto L199;
K199:
  if (Core_datapath_csr__wake_0 != Core_datapath_csr__wake_0__prev)
    goto L200;
K200:
  if (Core_datapath_csr__reg_msip_0 != Core_datapath_csr__reg_msip_0__prev)
    goto L201;
K201:
  if (Core_datapath_loadstore__io_imem_r_enable != Core_datapath_loadstore__io_imem_r_enable__prev)
    goto L202;
K202:
  if (Core_datapath_loadstore__dmem_op_reg != Core_datapath_loadstore__dmem_op_reg__prev)
    goto L203;
K203:
  if (Core_datapath_loadstore__imem_op_reg != Core_datapath_loadstore__imem_op_reg__prev)
    goto L204;
K204:
  if (Core_control__mem_rd_write != Core_control__mem_rd_write__prev)
    goto L205;
K205:
  if (Core_control__io_mem_rd_write != Core_control__io_mem_rd_write__prev)
    goto L206;
K206:
  if (Core_datapath__io_control_mem_rd_write != Core_datapath__io_control_mem_rd_write__prev)
    goto L207;
K207:
  if (Core_datapath_regfile__io_rd_enable != Core_datapath_regfile__io_rd_enable__prev)
    goto L208;
K208:
  if (Core_control__reset != Core_control__reset__prev)
    goto L209;
K209:
  if (Core_control_scheduler__reset != Core_control_scheduler__reset__prev)
    goto L210;
K210:
  if (Core_control_scheduler__R273 != Core_control_scheduler__R273__prev)
    goto L211;
K211:
  if (Core_control_scheduler__R248 != Core_control_scheduler__R248__prev)
    goto L212;
K212:
  if (Core_control_scheduler__R233 != Core_control_scheduler__R233__prev)
    goto L213;
K213:
  if (Core_control_scheduler__R227 != Core_control_scheduler__R227__prev)
    goto L214;
K214:
  if (Core_control_scheduler__R222 != Core_control_scheduler__R222__prev)
    goto L215;
K215:
  if (Core_control_scheduler__R210 != Core_control_scheduler__R210__prev)
    goto L216;
K216:
  if (Core_control_scheduler__R196 != Core_control_scheduler__R196__prev)
    goto L217;
K217:
  if (Core_control_scheduler__R112 != Core_control_scheduler__R112__prev)
    goto L218;
K218:
  if (Core_control_scheduler__R87 != Core_control_scheduler__R87__prev)
    goto L219;
K219:
  if (Core_control_scheduler__R72 != Core_control_scheduler__R72__prev)
    goto L220;
K220:
  if (Core_control_scheduler__R66 != Core_control_scheduler__R66__prev)
    goto L221;
K221:
  if (Core_control_scheduler__R61 != Core_control_scheduler__R61__prev)
    goto L222;
K222:
  if (Core_control_scheduler__R49 != Core_control_scheduler__R49__prev)
    goto L223;
K223:
  if (Core_control_scheduler__R35 != Core_control_scheduler__R35__prev)
    goto L224;
K224:
  if (Core_control__mem_reg_exception != Core_control__mem_reg_exception__prev)
    goto L225;
K225:
  if (Core_control__wb_reg_rd_write != Core_control__wb_reg_rd_write__prev)
    goto L226;
K226:
  if (Core_control__exe_reg_load != Core_control__exe_reg_load__prev)
    goto L227;
K227:
  if (Core_control__dec_store != Core_control__dec_store__prev)
    goto L228;
K228:
  if (Core_control__exe_reg_store != Core_control__exe_reg_store__prev)
    goto L229;
K229:
  if (Core_control__dec_csr != Core_control__dec_csr__prev)
    goto L230;
K230:
  if (Core_control__exe_reg_csr_write != Core_control__exe_reg_csr_write__prev)
    goto L231;
K231:
  if (Core_control__dec_reg_cause != Core_control__dec_reg_cause__prev)
    goto L232;
K232:
  if (Core_control__dec_scall != Core_control__dec_scall__prev)
    goto L233;
K233:
  if (Core_control__dec_ie != Core_control__dec_ie__prev)
    goto L234;
K234:
  if (Core_control__dec_du != Core_control__dec_du__prev)
    goto L235;
K235:
  if (Core_control__dec_legal != Core_control__dec_legal__prev)
    goto L236;
K236:
  if (Core_control__R238 != Core_control__R238__prev)
    goto L237;
K237:
  if (Core_control__R231 != Core_control__R231__prev)
    goto L238;
K238:
  if (Core_control__exe_reg_sret != Core_control__exe_reg_sret__prev)
    goto L239;
K239:
  if (Core_control__dec_rd_en != Core_control__dec_rd_en__prev)
    goto L240;
K240:
  if (Core_control__dec_rd_write != Core_control__dec_rd_write__prev)
    goto L241;
K241:
  if (Core_control__exe_reg_rd_write != Core_control__exe_reg_rd_write__prev)
    goto L242;
K242:
  if (Core_control__mem_reg_rd_write != Core_control__mem_reg_rd_write__prev)
    goto L243;
K243:
  if (Core_control__mem_reg_valid != Core_control__mem_reg_valid__prev)
    goto L244;
K244:
  if (Core_control_scheduler__io_valid != Core_control_scheduler__io_valid__prev)
    goto L245;
K245:
  if (Core_control__R206 != Core_control__R206__prev)
    goto L246;
K246:
  if (Core_control__if_reg_valid != Core_control__if_reg_valid__prev)
    goto L247;
K247:
  if (Core_control__exe_flush != Core_control__exe_flush__prev)
    goto L248;
K248:
  if (Core_control__if_valid != Core_control__if_valid__prev)
    goto L249;
K249:
  if (Core_control__dec_reg_valid != Core_control__dec_reg_valid__prev)
    goto L250;
K250:
  if (Core_control__R84 != Core_control__R84__prev)
    goto L251;
K251:
  if (Core_control__dec_jump != Core_control__dec_jump__prev)
    goto L252;
K252:
  if (Core_control__exe_reg_jump != Core_control__exe_reg_jump__prev)
    goto L253;
K253:
  if (Core_control__dec_branch != Core_control__dec_branch__prev)
    goto L254;
K254:
  if (Core_control__exe_reg_branch != Core_control__exe_reg_branch__prev)
    goto L255;
K255:
  if (Core_control__dec_valid != Core_control__dec_valid__prev)
    goto L256;
K256:
  if (Core_control__exe_reg_valid != Core_control__exe_reg_valid__prev)
    goto L257;
K257:
  if (Core_datapath__io_control_if_exc_misaligned != Core_datapath__io_control_if_exc_misaligned__prev)
    goto L258;
K258:
  if (Core_control__io_if_exc_misaligned != Core_control__io_if_exc_misaligned__prev)
    goto L259;
K259:
  if (Core_control__dec_reg_exc != Core_control__dec_reg_exc__prev)
    goto L260;
K260:
  if (Core_control__dec_exc != Core_control__dec_exc__prev)
    goto L261;
K261:
  if (Core_control__exe_reg_exc != Core_control__exe_reg_exc__prev)
    goto L262;
K262:
  if (Core_imem__io_bus_ready != Core_imem__io_bus_ready__prev)
    goto L263;
K263:
  if (Core__io_imem_ready != Core__io_imem_ready__prev)
    goto L264;
K264:
  if (Core_datapath_loadstore__io_bus_enable != Core_datapath_loadstore__io_bus_enable__prev)
    goto L265;
K265:
  if (Core_datapath__io_bus_enable != Core_datapath__io_bus_enable__prev)
    goto L266;
K266:
  if (Core__io_bus_enable != Core__io_bus_enable__prev)
    goto L267;
K267:
  if (Core_datapath_loadstore__io_bus_write != Core_datapath_loadstore__io_bus_write__prev)
    goto L268;
K268:
  if (Core_datapath__io_bus_write != Core_datapath__io_bus_write__prev)
    goto L269;
K269:
  if (Core__io_bus_write != Core__io_bus_write__prev)
    goto L270;
K270:
  if (Core__io_dmem_byte_write_0 != Core__io_dmem_byte_write_0__prev)
    goto L271;
K271:
  if (Core__io_dmem_byte_write_1 != Core__io_dmem_byte_write_1__prev)
    goto L272;
K272:
  if (Core__io_dmem_byte_write_2 != Core__io_dmem_byte_write_2__prev)
    goto L273;
K273:
  if (Core__io_dmem_byte_write_3 != Core__io_dmem_byte_write_3__prev)
    goto L274;
K274:
  if (Core__io_dmem_enable != Core__io_dmem_enable__prev)
    goto L275;
K275:
  if (Core__io_imem_write != Core__io_imem_write__prev)
    goto L276;
K276:
  if (Core__io_imem_enable != Core__io_imem_enable__prev)
    goto L277;
K277:
  if (Core_control__dec_mem_rd_data_sel != Core_control__dec_mem_rd_data_sel__prev)
    goto L278;
K278:
  if (Core_control__next_pc_sel_0 != Core_control__next_pc_sel_0__prev)
    goto L279;
K279:
  if (Core_control__io_next_pc_sel_0 != Core_control__io_next_pc_sel_0__prev)
    goto L280;
K280:
  if (Core_datapath__io_control_next_pc_sel_0 != Core_datapath__io_control_next_pc_sel_0__prev)
    goto L281;
K281:
  if (Core_control__next_pc_sel_1 != Core_control__next_pc_sel_1__prev)
    goto L282;
K282:
  if (Core_control__io_next_pc_sel_1 != Core_control__io_next_pc_sel_1__prev)
    goto L283;
K283:
  if (Core_datapath__io_control_next_pc_sel_1 != Core_datapath__io_control_next_pc_sel_1__prev)
    goto L284;
K284:
  if (Core_control__next_pc_sel_2 != Core_control__next_pc_sel_2__prev)
    goto L285;
K285:
  if (Core_control__io_next_pc_sel_2 != Core_control__io_next_pc_sel_2__prev)
    goto L286;
K286:
  if (Core_datapath__io_control_next_pc_sel_2 != Core_datapath__io_control_next_pc_sel_2__prev)
    goto L287;
K287:
  if (Core_control__next_pc_sel_3 != Core_control__next_pc_sel_3__prev)
    goto L288;
K288:
  if (Core_control__io_next_pc_sel_3 != Core_control__io_next_pc_sel_3__prev)
    goto L289;
K289:
  if (Core_datapath__io_control_next_pc_sel_3 != Core_datapath__io_control_next_pc_sel_3__prev)
    goto L290;
K290:
  if (Core_control__next_pc_sel_4 != Core_control__next_pc_sel_4__prev)
    goto L291;
K291:
  if (Core_control__io_next_pc_sel_4 != Core_control__io_next_pc_sel_4__prev)
    goto L292;
K292:
  if (Core_datapath__io_control_next_pc_sel_4 != Core_datapath__io_control_next_pc_sel_4__prev)
    goto L293;
K293:
  if (Core_control__next_pc_sel_5 != Core_control__next_pc_sel_5__prev)
    goto L294;
K294:
  if (Core_control__io_next_pc_sel_5 != Core_control__io_next_pc_sel_5__prev)
    goto L295;
K295:
  if (Core_datapath__io_control_next_pc_sel_5 != Core_datapath__io_control_next_pc_sel_5__prev)
    goto L296;
K296:
  if (Core_control__next_pc_sel_6 != Core_control__next_pc_sel_6__prev)
    goto L297;
K297:
  if (Core_control__io_next_pc_sel_6 != Core_control__io_next_pc_sel_6__prev)
    goto L298;
K298:
  if (Core_datapath__io_control_next_pc_sel_6 != Core_datapath__io_control_next_pc_sel_6__prev)
    goto L299;
K299:
  if (Core_control__next_pc_sel_7 != Core_control__next_pc_sel_7__prev)
    goto L300;
K300:
  if (Core_control__io_next_pc_sel_7 != Core_control__io_next_pc_sel_7__prev)
    goto L301;
K301:
  if (Core_datapath__io_control_next_pc_sel_7 != Core_datapath__io_control_next_pc_sel_7__prev)
    goto L302;
K302:
  if (Core_control__io_exe_csr_type != Core_control__io_exe_csr_type__prev)
    goto L303;
K303:
  if (Core_datapath__io_control_exe_csr_type != Core_datapath__io_control_exe_csr_type__prev)
    goto L304;
K304:
  if (Core_datapath_csr__io_rw_csr_type != Core_datapath_csr__io_rw_csr_type__prev)
    goto L305;
K305:
  if (Core_datapath_csr__reg_prv1_7 != Core_datapath_csr__reg_prv1_7__prev)
    goto L306;
K306:
  if (Core_datapath_csr__reg_prv_7 != Core_datapath_csr__reg_prv_7__prev)
    goto L307;
K307:
  if (Core_datapath_csr__reg_prv1_6 != Core_datapath_csr__reg_prv1_6__prev)
    goto L308;
K308:
  if (Core_datapath_csr__reg_prv_6 != Core_datapath_csr__reg_prv_6__prev)
    goto L309;
K309:
  if (Core_datapath_csr__reg_prv1_5 != Core_datapath_csr__reg_prv1_5__prev)
    goto L310;
K310:
  if (Core_datapath_csr__reg_prv_5 != Core_datapath_csr__reg_prv_5__prev)
    goto L311;
K311:
  if (Core_datapath_csr__reg_prv1_4 != Core_datapath_csr__reg_prv1_4__prev)
    goto L312;
K312:
  if (Core_datapath_csr__reg_prv_4 != Core_datapath_csr__reg_prv_4__prev)
    goto L313;
K313:
  if (Core_datapath_csr__reg_prv1_3 != Core_datapath_csr__reg_prv1_3__prev)
    goto L314;
K314:
  if (Core_datapath_csr__reg_prv_3 != Core_datapath_csr__reg_prv_3__prev)
    goto L315;
K315:
  if (Core_datapath_csr__reg_prv1_2 != Core_datapath_csr__reg_prv1_2__prev)
    goto L316;
K316:
  if (Core_datapath_csr__reg_prv_2 != Core_datapath_csr__reg_prv_2__prev)
    goto L317;
K317:
  if (Core_datapath_csr__reg_prv1_1 != Core_datapath_csr__reg_prv1_1__prev)
    goto L318;
K318:
  if (Core_datapath_csr__reg_prv_1 != Core_datapath_csr__reg_prv_1__prev)
    goto L319;
K319:
  if (Core_datapath_csr__reg_prv1_0 != Core_datapath_csr__reg_prv1_0__prev)
    goto L320;
K320:
  if (Core_datapath_csr__reg_prv_0 != Core_datapath_csr__reg_prv_0__prev)
    goto L321;
K321:
  if (Core_datapath_csr__reg_gpos_3 != Core_datapath_csr__reg_gpos_3__prev)
    goto L322;
K322:
  if (Core_datapath_csr__reg_gpos_2 != Core_datapath_csr__reg_gpos_2__prev)
    goto L323;
K323:
  if (Core_datapath_csr__reg_gpos_1 != Core_datapath_csr__reg_gpos_1__prev)
    goto L324;
K324:
  if (Core_datapath_csr__reg_gpos_0 != Core_datapath_csr__reg_gpos_0__prev)
    goto L325;
K325:
  if (Core_datapath_csr__reg_tmodes_1 != Core_datapath_csr__reg_tmodes_1__prev)
    goto L326;
K326:
  if (Core_datapath_csr__reg_tmodes_7 != Core_datapath_csr__reg_tmodes_7__prev)
    goto L327;
K327:
  if (Core_datapath_csr__reg_tmodes_6 != Core_datapath_csr__reg_tmodes_6__prev)
    goto L328;
K328:
  if (Core_datapath_csr__reg_tmodes_5 != Core_datapath_csr__reg_tmodes_5__prev)
    goto L329;
K329:
  if (Core_datapath_csr__reg_tmodes_4 != Core_datapath_csr__reg_tmodes_4__prev)
    goto L330;
K330:
  if (Core_datapath_csr__reg_tmodes_3 != Core_datapath_csr__reg_tmodes_3__prev)
    goto L331;
K331:
  if (Core_datapath_csr__reg_timer_7 != Core_datapath_csr__reg_timer_7__prev)
    goto L332;
K332:
  if (Core_datapath_csr__reg_timer_6 != Core_datapath_csr__reg_timer_6__prev)
    goto L333;
K333:
  if (Core_datapath_csr__reg_timer_5 != Core_datapath_csr__reg_timer_5__prev)
    goto L334;
K334:
  if (Core_datapath_csr__reg_timer_4 != Core_datapath_csr__reg_timer_4__prev)
    goto L335;
K335:
  if (Core_datapath_csr__reg_timer_3 != Core_datapath_csr__reg_timer_3__prev)
    goto L336;
K336:
  if (Core_datapath_csr__reg_timer_1 != Core_datapath_csr__reg_timer_1__prev)
    goto L337;
K337:
  if (Core_datapath_csr__reg_timer_0 != Core_datapath_csr__reg_timer_0__prev)
    goto L338;
K338:
  if (Core_datapath_csr__reg_timer_2 != Core_datapath_csr__reg_timer_2__prev)
    goto L339;
K339:
  if (Core_datapath_csr__reg_tmodes_2 != Core_datapath_csr__reg_tmodes_2__prev)
    goto L340;
K340:
  if (Core_datapath_csr__reg_tmodes_0 != Core_datapath_csr__reg_tmodes_0__prev)
    goto L341;
K341:
  if (Core_datapath_loadstore__addr_byte_reg != Core_datapath_loadstore__addr_byte_reg__prev)
    goto L342;
K342:
  if (Core_control__io_exe_mul_type != Core_control__io_exe_mul_type__prev)
    goto L343;
K343:
  if (Core_datapath__io_control_exe_mul_type != Core_datapath__io_control_exe_mul_type__prev)
    goto L344;
K344:
  if (Core_control__io_mem_rd_data_sel != Core_control__io_mem_rd_data_sel__prev)
    goto L345;
K345:
  if (Core_datapath__io_control_mem_rd_data_sel != Core_datapath__io_control_mem_rd_data_sel__prev)
    goto L346;
K346:
  if (Core_control__dec_rs1_sel != Core_control__dec_rs1_sel__prev)
    goto L347;
K347:
  if (Core_control__io_dec_rs1_sel != Core_control__io_dec_rs1_sel__prev)
    goto L348;
K348:
  if (Core_datapath__io_control_dec_rs1_sel != Core_datapath__io_control_dec_rs1_sel__prev)
    goto L349;
K349:
  if (Core_control__io_exe_rd_data_sel != Core_control__io_exe_rd_data_sel__prev)
    goto L350;
K350:
  if (Core_datapath__io_control_exe_rd_data_sel != Core_datapath__io_control_exe_rd_data_sel__prev)
    goto L351;
K351:
  if (Core_control__dec_rs2_sel != Core_control__dec_rs2_sel__prev)
    goto L352;
K352:
  if (Core_control__io_dec_rs2_sel != Core_control__io_dec_rs2_sel__prev)
    goto L353;
K353:
  if (Core_datapath__io_control_dec_rs2_sel != Core_datapath__io_control_dec_rs2_sel__prev)
    goto L354;
K354:
  if (Core_control__dec_op2_sel != Core_control__dec_op2_sel__prev)
    goto L355;
K355:
  if (Core_control__io_dec_op2_sel != Core_control__io_dec_op2_sel__prev)
    goto L356;
K356:
  if (Core_datapath__io_control_dec_op2_sel != Core_datapath__io_control_dec_op2_sel__prev)
    goto L357;
K357:
  if (Core_control__dec_op1_sel != Core_control__dec_op1_sel__prev)
    goto L358;
K358:
  if (Core_control__io_dec_op1_sel != Core_control__io_dec_op1_sel__prev)
    goto L359;
K359:
  if (Core_datapath__io_control_dec_op1_sel != Core_datapath__io_control_dec_op1_sel__prev)
    goto L360;
K360:
  if (Core_datapath_csr__io_tmodes_5 != Core_datapath_csr__io_tmodes_5__prev)
    goto L361;
K361:
  if (Core_datapath__io_control_csr_tmodes_5 != Core_datapath__io_control_csr_tmodes_5__prev)
    goto L362;
K362:
  if (Core_control__io_csr_tmodes_5 != Core_control__io_csr_tmodes_5__prev)
    goto L363;
K363:
  if (Core_control_scheduler__io_thread_modes_5 != Core_control_scheduler__io_thread_modes_5__prev)
    goto L364;
K364:
  if (Core_datapath_csr__io_tmodes_4 != Core_datapath_csr__io_tmodes_4__prev)
    goto L365;
K365:
  if (Core_datapath__io_control_csr_tmodes_4 != Core_datapath__io_control_csr_tmodes_4__prev)
    goto L366;
K366:
  if (Core_control__io_csr_tmodes_4 != Core_control__io_csr_tmodes_4__prev)
    goto L367;
K367:
  if (Core_control_scheduler__io_thread_modes_4 != Core_control_scheduler__io_thread_modes_4__prev)
    goto L368;
K368:
  if (Core_datapath_csr__io_tmodes_3 != Core_datapath_csr__io_tmodes_3__prev)
    goto L369;
K369:
  if (Core_datapath__io_control_csr_tmodes_3 != Core_datapath__io_control_csr_tmodes_3__prev)
    goto L370;
K370:
  if (Core_control__io_csr_tmodes_3 != Core_control__io_csr_tmodes_3__prev)
    goto L371;
K371:
  if (Core_control_scheduler__io_thread_modes_3 != Core_control_scheduler__io_thread_modes_3__prev)
    goto L372;
K372:
  if (Core_datapath_csr__io_tmodes_2 != Core_datapath_csr__io_tmodes_2__prev)
    goto L373;
K373:
  if (Core_datapath__io_control_csr_tmodes_2 != Core_datapath__io_control_csr_tmodes_2__prev)
    goto L374;
K374:
  if (Core_control__io_csr_tmodes_2 != Core_control__io_csr_tmodes_2__prev)
    goto L375;
K375:
  if (Core_control_scheduler__io_thread_modes_2 != Core_control_scheduler__io_thread_modes_2__prev)
    goto L376;
K376:
  if (Core_datapath_csr__io_tmodes_1 != Core_datapath_csr__io_tmodes_1__prev)
    goto L377;
K377:
  if (Core_datapath__io_control_csr_tmodes_1 != Core_datapath__io_control_csr_tmodes_1__prev)
    goto L378;
K378:
  if (Core_control__io_csr_tmodes_1 != Core_control__io_csr_tmodes_1__prev)
    goto L379;
K379:
  if (Core_control_scheduler__io_thread_modes_1 != Core_control_scheduler__io_thread_modes_1__prev)
    goto L380;
K380:
  if (Core_datapath_csr__io_tmodes_0 != Core_datapath_csr__io_tmodes_0__prev)
    goto L381;
K381:
  if (Core_datapath__io_control_csr_tmodes_0 != Core_datapath__io_control_csr_tmodes_0__prev)
    goto L382;
K382:
  if (Core_control__io_csr_tmodes_0 != Core_control__io_csr_tmodes_0__prev)
    goto L383;
K383:
  if (Core_control_scheduler__io_thread_modes_0 != Core_control_scheduler__io_thread_modes_0__prev)
    goto L384;
K384:
  if (Core_datapath_csr__io_tmodes_6 != Core_datapath_csr__io_tmodes_6__prev)
    goto L385;
K385:
  if (Core_datapath__io_control_csr_tmodes_6 != Core_datapath__io_control_csr_tmodes_6__prev)
    goto L386;
K386:
  if (Core_control__io_csr_tmodes_6 != Core_control__io_csr_tmodes_6__prev)
    goto L387;
K387:
  if (Core_control_scheduler__io_thread_modes_6 != Core_control_scheduler__io_thread_modes_6__prev)
    goto L388;
K388:
  if (Core_datapath_csr__io_tmodes_7 != Core_datapath_csr__io_tmodes_7__prev)
    goto L389;
K389:
  if (Core_datapath__io_control_csr_tmodes_7 != Core_datapath__io_control_csr_tmodes_7__prev)
    goto L390;
K390:
  if (Core_control__io_csr_tmodes_7 != Core_control__io_csr_tmodes_7__prev)
    goto L391;
K391:
  if (Core_control_scheduler__io_thread_modes_7 != Core_control_scheduler__io_thread_modes_7__prev)
    goto L392;
K392:
  if (Core_control__dec_csr_type != Core_control__dec_csr_type__prev)
    goto L393;
K393:
  if (Core_control__exe_reg_csr_type != Core_control__exe_reg_csr_type__prev)
    goto L394;
K394:
  if (Core_control__dec_mul_type != Core_control__dec_mul_type__prev)
    goto L395;
K395:
  if (Core_control__exe_reg_mul_type != Core_control__exe_reg_mul_type__prev)
    goto L396;
K396:
  if (Core_control__dec_exe_rd_data_sel != Core_control__dec_exe_rd_data_sel__prev)
    goto L397;
K397:
  if (Core_control__exe_reg_rd_data_sel != Core_control__exe_reg_rd_data_sel__prev)
    goto L398;
K398:
  if (Core_control__R364 != Core_control__R364__prev)
    goto L399;
K399:
  if (Core_control__mem_reg_rd_data_sel != Core_control__mem_reg_rd_data_sel__prev)
    goto L400;
K400:
  if (Core_control__stall_count_7 != Core_control__stall_count_7__prev)
    goto L401;
K401:
  if (Core_control__stall_count_6 != Core_control__stall_count_6__prev)
    goto L402;
K402:
  if (Core_control__stall_count_5 != Core_control__stall_count_5__prev)
    goto L403;
K403:
  if (Core_control__stall_count_4 != Core_control__stall_count_4__prev)
    goto L404;
K404:
  if (Core_control__stall_count_3 != Core_control__stall_count_3__prev)
    goto L405;
K405:
  if (Core_control__stall_count_2 != Core_control__stall_count_2__prev)
    goto L406;
K406:
  if (Core_control__stall_count_1 != Core_control__stall_count_1__prev)
    goto L407;
K407:
  if (Core_control__stall_count_0 != Core_control__stall_count_0__prev)
    goto L408;
K408:
  if (Core_datapath_csr__io_gpio_out_3 != Core_datapath_csr__io_gpio_out_3__prev)
    goto L409;
K409:
  if (Core_datapath__io_gpio_out_3 != Core_datapath__io_gpio_out_3__prev)
    goto L410;
K410:
  if (Core__io_gpio_out_3 != Core__io_gpio_out_3__prev)
    goto L411;
K411:
  if (Core_datapath_csr__io_gpio_out_2 != Core_datapath_csr__io_gpio_out_2__prev)
    goto L412;
K412:
  if (Core_datapath__io_gpio_out_2 != Core_datapath__io_gpio_out_2__prev)
    goto L413;
K413:
  if (Core__io_gpio_out_2 != Core__io_gpio_out_2__prev)
    goto L414;
K414:
  if (Core_datapath_csr__io_gpio_out_1 != Core_datapath_csr__io_gpio_out_1__prev)
    goto L415;
K415:
  if (Core_datapath__io_gpio_out_1 != Core_datapath__io_gpio_out_1__prev)
    goto L416;
K416:
  if (Core__io_gpio_out_1 != Core__io_gpio_out_1__prev)
    goto L417;
K417:
  if (Core_datapath_csr__io_gpio_out_0 != Core_datapath_csr__io_gpio_out_0__prev)
    goto L418;
K418:
  if (Core_datapath__io_gpio_out_0 != Core_datapath__io_gpio_out_0__prev)
    goto L419;
K419:
  if (Core__io_gpio_out_0 != Core__io_gpio_out_0__prev)
    goto L420;
K420:
  if (Core_datapath_csr__io_rw_thread != Core_datapath_csr__io_rw_thread__prev)
    goto L421;
K421:
  if (Core_datapath_loadstore__io_thread != Core_datapath_loadstore__io_thread__prev)
    goto L422;
K422:
  if (Core_datapath__io_control_if_tid != Core_datapath__io_control_if_tid__prev)
    goto L423;
K423:
  if (Core_control__io_if_tid != Core_control__io_if_tid__prev)
    goto L424;
K424:
  if (Core_datapath__io_control_dec_tid != Core_datapath__io_control_dec_tid__prev)
    goto L425;
K425:
  if (Core_control__io_dec_tid != Core_control__io_dec_tid__prev)
    goto L426;
K426:
  if (Core_datapath__io_control_exe_tid != Core_datapath__io_control_exe_tid__prev)
    goto L427;
K427:
  if (Core_control__io_exe_tid != Core_control__io_exe_tid__prev)
    goto L428;
K428:
  if (Core_control__io_exe_br_type != Core_control__io_exe_br_type__prev)
    goto L429;
K429:
  if (Core_datapath__io_control_exe_br_type != Core_datapath__io_control_exe_br_type__prev)
    goto L430;
K430:
  if (Core_datapath__io_control_mem_tid != Core_datapath__io_control_mem_tid__prev)
    goto L431;
K431:
  if (Core_control__io_mem_tid != Core_control__io_mem_tid__prev)
    goto L432;
K432:
  if (Core_control__next_tid != Core_control__next_tid__prev)
    goto L433;
K433:
  if (Core_control__io_next_tid != Core_control__io_next_tid__prev)
    goto L434;
K434:
  if (Core_datapath__io_control_next_tid != Core_datapath__io_control_next_tid__prev)
    goto L435;
K435:
  if (Core_datapath_regfile__io_rs1_thread != Core_datapath_regfile__io_rs1_thread__prev)
    goto L436;
K436:
  if (Core_datapath_regfile__io_rd_thread != Core_datapath_regfile__io_rd_thread__prev)
    goto L437;
K437:
  if (Core_datapath_regfile__io_rs2_thread != Core_datapath_regfile__io_rs2_thread__prev)
    goto L438;
K438:
  if (Core_datapath__io_control_wb_tid != Core_datapath__io_control_wb_tid__prev)
    goto L439;
K439:
  if (Core_control__io_wb_tid != Core_control__io_wb_tid__prev)
    goto L440;
K440:
  if (Core_datapath__wb_reg_tid != Core_datapath__wb_reg_tid__prev)
    goto L441;
K441:
  if (Core_control__dec_imm_sel != Core_control__dec_imm_sel__prev)
    goto L442;
K442:
  if (Core_control__io_dec_imm_sel != Core_control__io_dec_imm_sel__prev)
    goto L443;
K443:
  if (Core_datapath__io_control_dec_imm_sel != Core_datapath__io_control_dec_imm_sel__prev)
    goto L444;
K444:
  if (Core_datapath__mem_reg_tid != Core_datapath__mem_reg_tid__prev)
    goto L445;
K445:
  if (Core_datapath__exe_reg_tid != Core_datapath__exe_reg_tid__prev)
    goto L446;
K446:
  if (Core_datapath__if_reg_tid != Core_datapath__if_reg_tid__prev)
    goto L447;
K447:
  if (Core_datapath__dec_reg_tid != Core_datapath__dec_reg_tid__prev)
    goto L448;
K448:
  if (Core_control__dec_br_type != Core_control__dec_br_type__prev)
    goto L449;
K449:
  if (Core_control__exe_reg_br_type != Core_control__exe_reg_br_type__prev)
    goto L450;
K450:
  if (Core_control_scheduler__io_thread != Core_control_scheduler__io_thread__prev)
    goto L451;
K451:
  if (Core_control__R284 != Core_control__R284__prev)
    goto L452;
K452:
  if (Core_control__dec_cause != Core_control__dec_cause__prev)
    goto L453;
K453:
  if (Core_control__exe_reg_cause != Core_control__exe_reg_cause__prev)
    goto L454;
K454:
  if (Core_control__io_exe_alu_type != Core_control__io_exe_alu_type__prev)
    goto L455;
K455:
  if (Core_datapath__io_control_exe_alu_type != Core_datapath__io_control_exe_alu_type__prev)
    goto L456;
K456:
  if (Core_control__io_exe_mem_type != Core_control__io_exe_mem_type__prev)
    goto L457;
K457:
  if (Core_datapath__io_control_exe_mem_type != Core_datapath__io_control_exe_mem_type__prev)
    goto L458;
K458:
  if (Core_datapath_loadstore__io_mem_type != Core_datapath_loadstore__io_mem_type__prev)
    goto L459;
K459:
  if (Core_datapath_csr__io_imem_protection_0 != Core_datapath_csr__io_imem_protection_0__prev)
    goto L460;
K460:
  if (Core_datapath_loadstore__io_imem_protection_0 != Core_datapath_loadstore__io_imem_protection_0__prev)
    goto L461;
K461:
  if (Core_datapath_csr__io_imem_protection_1 != Core_datapath_csr__io_imem_protection_1__prev)
    goto L462;
K462:
  if (Core_datapath_loadstore__io_imem_protection_1 != Core_datapath_loadstore__io_imem_protection_1__prev)
    goto L463;
K463:
  if (Core_datapath_csr__io_imem_protection_2 != Core_datapath_csr__io_imem_protection_2__prev)
    goto L464;
K464:
  if (Core_datapath_loadstore__io_imem_protection_2 != Core_datapath_loadstore__io_imem_protection_2__prev)
    goto L465;
K465:
  if (Core_datapath_csr__io_imem_protection_3 != Core_datapath_csr__io_imem_protection_3__prev)
    goto L466;
K466:
  if (Core_datapath_loadstore__io_imem_protection_3 != Core_datapath_loadstore__io_imem_protection_3__prev)
    goto L467;
K467:
  if (Core_datapath_csr__io_imem_protection_4 != Core_datapath_csr__io_imem_protection_4__prev)
    goto L468;
K468:
  if (Core_datapath_loadstore__io_imem_protection_4 != Core_datapath_loadstore__io_imem_protection_4__prev)
    goto L469;
K469:
  if (Core_datapath_csr__io_imem_protection_5 != Core_datapath_csr__io_imem_protection_5__prev)
    goto L470;
K470:
  if (Core_datapath_loadstore__io_imem_protection_5 != Core_datapath_loadstore__io_imem_protection_5__prev)
    goto L471;
K471:
  if (Core_datapath_csr__io_imem_protection_6 != Core_datapath_csr__io_imem_protection_6__prev)
    goto L472;
K472:
  if (Core_datapath_loadstore__io_imem_protection_6 != Core_datapath_loadstore__io_imem_protection_6__prev)
    goto L473;
K473:
  if (Core_datapath_csr__io_imem_protection_7 != Core_datapath_csr__io_imem_protection_7__prev)
    goto L474;
K474:
  if (Core_datapath_loadstore__io_imem_protection_7 != Core_datapath_loadstore__io_imem_protection_7__prev)
    goto L475;
K475:
  if (Core_datapath_csr__io_dmem_protection_0 != Core_datapath_csr__io_dmem_protection_0__prev)
    goto L476;
K476:
  if (Core_datapath_loadstore__io_dmem_protection_0 != Core_datapath_loadstore__io_dmem_protection_0__prev)
    goto L477;
K477:
  if (Core_datapath_csr__io_dmem_protection_1 != Core_datapath_csr__io_dmem_protection_1__prev)
    goto L478;
K478:
  if (Core_datapath_loadstore__io_dmem_protection_1 != Core_datapath_loadstore__io_dmem_protection_1__prev)
    goto L479;
K479:
  if (Core_datapath_csr__io_dmem_protection_2 != Core_datapath_csr__io_dmem_protection_2__prev)
    goto L480;
K480:
  if (Core_datapath_loadstore__io_dmem_protection_2 != Core_datapath_loadstore__io_dmem_protection_2__prev)
    goto L481;
K481:
  if (Core_datapath_csr__io_dmem_protection_3 != Core_datapath_csr__io_dmem_protection_3__prev)
    goto L482;
K482:
  if (Core_datapath_loadstore__io_dmem_protection_3 != Core_datapath_loadstore__io_dmem_protection_3__prev)
    goto L483;
K483:
  if (Core_datapath_csr__io_dmem_protection_4 != Core_datapath_csr__io_dmem_protection_4__prev)
    goto L484;
K484:
  if (Core_datapath_loadstore__io_dmem_protection_4 != Core_datapath_loadstore__io_dmem_protection_4__prev)
    goto L485;
K485:
  if (Core_datapath_csr__io_dmem_protection_5 != Core_datapath_csr__io_dmem_protection_5__prev)
    goto L486;
K486:
  if (Core_datapath_loadstore__io_dmem_protection_5 != Core_datapath_loadstore__io_dmem_protection_5__prev)
    goto L487;
K487:
  if (Core_datapath_csr__io_dmem_protection_6 != Core_datapath_csr__io_dmem_protection_6__prev)
    goto L488;
K488:
  if (Core_datapath_loadstore__io_dmem_protection_6 != Core_datapath_loadstore__io_dmem_protection_6__prev)
    goto L489;
K489:
  if (Core_datapath_csr__io_dmem_protection_7 != Core_datapath_csr__io_dmem_protection_7__prev)
    goto L490;
K490:
  if (Core_datapath_loadstore__io_dmem_protection_7 != Core_datapath_loadstore__io_dmem_protection_7__prev)
    goto L491;
K491:
  if (Core_datapath_csr__reg_dmem_protection_7 != Core_datapath_csr__reg_dmem_protection_7__prev)
    goto L492;
K492:
  if (Core_datapath_csr__reg_dmem_protection_6 != Core_datapath_csr__reg_dmem_protection_6__prev)
    goto L493;
K493:
  if (Core_datapath_csr__reg_dmem_protection_5 != Core_datapath_csr__reg_dmem_protection_5__prev)
    goto L494;
K494:
  if (Core_datapath_csr__reg_dmem_protection_4 != Core_datapath_csr__reg_dmem_protection_4__prev)
    goto L495;
K495:
  if (Core_datapath_csr__reg_dmem_protection_3 != Core_datapath_csr__reg_dmem_protection_3__prev)
    goto L496;
K496:
  if (Core_datapath_csr__reg_dmem_protection_2 != Core_datapath_csr__reg_dmem_protection_2__prev)
    goto L497;
K497:
  if (Core_datapath_csr__reg_dmem_protection_1 != Core_datapath_csr__reg_dmem_protection_1__prev)
    goto L498;
K498:
  if (Core_datapath_csr__reg_dmem_protection_0 != Core_datapath_csr__reg_dmem_protection_0__prev)
    goto L499;
K499:
  if (Core_datapath_csr__reg_imem_protection_7 != Core_datapath_csr__reg_imem_protection_7__prev)
    goto L500;
K500:
  if (Core_datapath_csr__reg_imem_protection_6 != Core_datapath_csr__reg_imem_protection_6__prev)
    goto L501;
K501:
  if (Core_datapath_csr__reg_imem_protection_5 != Core_datapath_csr__reg_imem_protection_5__prev)
    goto L502;
K502:
  if (Core_datapath_csr__reg_imem_protection_4 != Core_datapath_csr__reg_imem_protection_4__prev)
    goto L503;
K503:
  if (Core_datapath_csr__reg_imem_protection_3 != Core_datapath_csr__reg_imem_protection_3__prev)
    goto L504;
K504:
  if (Core_datapath_csr__reg_imem_protection_2 != Core_datapath_csr__reg_imem_protection_2__prev)
    goto L505;
K505:
  if (Core_datapath_csr__reg_imem_protection_1 != Core_datapath_csr__reg_imem_protection_1__prev)
    goto L506;
K506:
  if (Core_datapath_csr__reg_imem_protection_0 != Core_datapath_csr__reg_imem_protection_0__prev)
    goto L507;
K507:
  if (Core_datapath_csr__reg_gpo_protection_3 != Core_datapath_csr__reg_gpo_protection_3__prev)
    goto L508;
K508:
  if (Core_datapath_csr__reg_gpo_protection_2 != Core_datapath_csr__reg_gpo_protection_2__prev)
    goto L509;
K509:
  if (Core_datapath_csr__reg_gpo_protection_1 != Core_datapath_csr__reg_gpo_protection_1__prev)
    goto L510;
K510:
  if (Core_datapath_csr__reg_gpo_protection_0 != Core_datapath_csr__reg_gpo_protection_0__prev)
    goto L511;
K511:
  if (Core_control__exe_inst_cause != Core_control__exe_inst_cause__prev)
    goto L512;
K512:
  if (Core_datapath_csr__reg_slots_7 != Core_datapath_csr__reg_slots_7__prev)
    goto L513;
K513:
  if (Core_datapath_csr__reg_slots_6 != Core_datapath_csr__reg_slots_6__prev)
    goto L514;
K514:
  if (Core_datapath_csr__reg_slots_5 != Core_datapath_csr__reg_slots_5__prev)
    goto L515;
K515:
  if (Core_datapath_csr__reg_slots_4 != Core_datapath_csr__reg_slots_4__prev)
    goto L516;
K516:
  if (Core_datapath_csr__reg_slots_3 != Core_datapath_csr__reg_slots_3__prev)
    goto L517;
K517:
  if (Core_datapath_csr__reg_slots_2 != Core_datapath_csr__reg_slots_2__prev)
    goto L518;
K518:
  if (Core_datapath_csr__reg_slots_1 != Core_datapath_csr__reg_slots_1__prev)
    goto L519;
K519:
  if (Core_datapath_csr__reg_slots_0 != Core_datapath_csr__reg_slots_0__prev)
    goto L520;
K520:
  if (Core_datapath_loadstore__mem_type_reg != Core_datapath_loadstore__mem_type_reg__prev)
    goto L521;
K521:
  if (Core_datapath_Multiplier__io_func != Core_datapath_Multiplier__io_func__prev)
    goto L522;
K522:
  if (Core_datapath_csr__io_slots_7 != Core_datapath_csr__io_slots_7__prev)
    goto L523;
K523:
  if (Core_datapath__io_control_csr_slots_7 != Core_datapath__io_control_csr_slots_7__prev)
    goto L524;
K524:
  if (Core_control__io_csr_slots_7 != Core_control__io_csr_slots_7__prev)
    goto L525;
K525:
  if (Core_control_scheduler__io_slots_7 != Core_control_scheduler__io_slots_7__prev)
    goto L526;
K526:
  if (Core_datapath_csr__io_slots_6 != Core_datapath_csr__io_slots_6__prev)
    goto L527;
K527:
  if (Core_datapath__io_control_csr_slots_6 != Core_datapath__io_control_csr_slots_6__prev)
    goto L528;
K528:
  if (Core_control__io_csr_slots_6 != Core_control__io_csr_slots_6__prev)
    goto L529;
K529:
  if (Core_control_scheduler__io_slots_6 != Core_control_scheduler__io_slots_6__prev)
    goto L530;
K530:
  if (Core_datapath_csr__io_slots_5 != Core_datapath_csr__io_slots_5__prev)
    goto L531;
K531:
  if (Core_datapath__io_control_csr_slots_5 != Core_datapath__io_control_csr_slots_5__prev)
    goto L532;
K532:
  if (Core_control__io_csr_slots_5 != Core_control__io_csr_slots_5__prev)
    goto L533;
K533:
  if (Core_control_scheduler__io_slots_5 != Core_control_scheduler__io_slots_5__prev)
    goto L534;
K534:
  if (Core_datapath_csr__io_slots_4 != Core_datapath_csr__io_slots_4__prev)
    goto L535;
K535:
  if (Core_datapath__io_control_csr_slots_4 != Core_datapath__io_control_csr_slots_4__prev)
    goto L536;
K536:
  if (Core_control__io_csr_slots_4 != Core_control__io_csr_slots_4__prev)
    goto L537;
K537:
  if (Core_control_scheduler__io_slots_4 != Core_control_scheduler__io_slots_4__prev)
    goto L538;
K538:
  if (Core_datapath_csr__io_slots_3 != Core_datapath_csr__io_slots_3__prev)
    goto L539;
K539:
  if (Core_datapath__io_control_csr_slots_3 != Core_datapath__io_control_csr_slots_3__prev)
    goto L540;
K540:
  if (Core_control__io_csr_slots_3 != Core_control__io_csr_slots_3__prev)
    goto L541;
K541:
  if (Core_control_scheduler__io_slots_3 != Core_control_scheduler__io_slots_3__prev)
    goto L542;
K542:
  if (Core_datapath_csr__io_slots_2 != Core_datapath_csr__io_slots_2__prev)
    goto L543;
K543:
  if (Core_datapath__io_control_csr_slots_2 != Core_datapath__io_control_csr_slots_2__prev)
    goto L544;
K544:
  if (Core_control__io_csr_slots_2 != Core_control__io_csr_slots_2__prev)
    goto L545;
K545:
  if (Core_control_scheduler__io_slots_2 != Core_control_scheduler__io_slots_2__prev)
    goto L546;
K546:
  if (Core_datapath_csr__io_slots_1 != Core_datapath_csr__io_slots_1__prev)
    goto L547;
K547:
  if (Core_datapath__io_control_csr_slots_1 != Core_datapath__io_control_csr_slots_1__prev)
    goto L548;
K548:
  if (Core_control__io_csr_slots_1 != Core_control__io_csr_slots_1__prev)
    goto L549;
K549:
  if (Core_control_scheduler__io_slots_1 != Core_control_scheduler__io_slots_1__prev)
    goto L550;
K550:
  if (Core_datapath_csr__io_slots_0 != Core_datapath_csr__io_slots_0__prev)
    goto L551;
K551:
  if (Core_datapath__io_control_csr_slots_0 != Core_datapath__io_control_csr_slots_0__prev)
    goto L552;
K552:
  if (Core_control__io_csr_slots_0 != Core_control__io_csr_slots_0__prev)
    goto L553;
K553:
  if (Core_control_scheduler__io_slots_0 != Core_control_scheduler__io_slots_0__prev)
    goto L554;
K554:
  if (Core_control__dec_alu_type != Core_control__dec_alu_type__prev)
    goto L555;
K555:
  if (Core_control__exe_reg_alu_type != Core_control__exe_reg_alu_type__prev)
    goto L556;
K556:
  if (Core_control__dec_mem_type != Core_control__dec_mem_type__prev)
    goto L557;
K557:
  if (Core_control__exe_reg_mem_type != Core_control__exe_reg_mem_type__prev)
    goto L558;
K558:
  if (Core_datapath__exe_alu_shift != Core_datapath__exe_alu_shift__prev)
    goto L559;
K559:
  if (Core_control__exe_any_cause != Core_control__exe_any_cause__prev)
    goto L560;
K560:
  if (Core_control__exe_exception_cause != Core_control__exe_exception_cause__prev)
    goto L561;
K561:
  if (Core_control__io_exe_cause != Core_control__io_exe_cause__prev)
    goto L562;
K562:
  if (Core_datapath__io_control_exe_cause != Core_datapath__io_control_exe_cause__prev)
    goto L563;
K563:
  if (Core_datapath_csr__io_cause != Core_datapath_csr__io_cause__prev)
    goto L564;
K564:
  if (Core_datapath_csr__reg_causes_7 != Core_datapath_csr__reg_causes_7__prev)
    goto L565;
K565:
  if (Core_datapath_csr__reg_causes_6 != Core_datapath_csr__reg_causes_6__prev)
    goto L566;
K566:
  if (Core_datapath_csr__reg_causes_5 != Core_datapath_csr__reg_causes_5__prev)
    goto L567;
K567:
  if (Core_datapath_csr__reg_causes_4 != Core_datapath_csr__reg_causes_4__prev)
    goto L568;
K568:
  if (Core_datapath_csr__reg_causes_3 != Core_datapath_csr__reg_causes_3__prev)
    goto L569;
K569:
  if (Core_datapath_csr__reg_causes_2 != Core_datapath_csr__reg_causes_2__prev)
    goto L570;
K570:
  if (Core_datapath_csr__reg_causes_1 != Core_datapath_csr__reg_causes_1__prev)
    goto L571;
K571:
  if (Core_datapath_csr__reg_causes_0 != Core_datapath_csr__reg_causes_0__prev)
    goto L572;
K572:
  if (Core_datapath_regfile__io_rs1_addr != Core_datapath_regfile__io_rs1_addr__prev)
    goto L573;
K573:
  if (Core_datapath_regfile__io_rd_addr != Core_datapath_regfile__io_rd_addr__prev)
    goto L574;
K574:
  if (Core_datapath_regfile__io_rs2_addr != Core_datapath_regfile__io_rs2_addr__prev)
    goto L575;
K575:
  if (Core_datapath__io_control_wb_rd_addr != Core_datapath__io_control_wb_rd_addr__prev)
    goto L576;
K576:
  if (Core_control__io_wb_rd_addr != Core_control__io_wb_rd_addr__prev)
    goto L577;
K577:
  if (Core_datapath__io_control_mem_rd_addr != Core_datapath__io_control_mem_rd_addr__prev)
    goto L578;
K578:
  if (Core_control__io_mem_rd_addr != Core_control__io_mem_rd_addr__prev)
    goto L579;
K579:
  if (Core_datapath__io_control_exe_rd_addr != Core_datapath__io_control_exe_rd_addr__prev)
    goto L580;
K580:
  if (Core_control__io_exe_rd_addr != Core_control__io_exe_rd_addr__prev)
    goto L581;
K581:
  if (Core_datapath__wb_reg_rd_addr != Core_datapath__wb_reg_rd_addr__prev)
    goto L582;
K582:
  if (Core_datapath__exe_reg_rd_addr != Core_datapath__exe_reg_rd_addr__prev)
    goto L583;
K583:
  if (Core_datapath__mem_reg_rd_addr != Core_datapath__mem_reg_rd_addr__prev)
    goto L584;
K584:
  if (Core_datapath_loadstore__io_bus_addr != Core_datapath_loadstore__io_bus_addr__prev)
    goto L585;
K585:
  if (Core_datapath__io_bus_addr != Core_datapath__io_bus_addr__prev)
    goto L586;
K586:
  if (Core__io_bus_addr != Core__io_bus_addr__prev)
    goto L587;
K587:
  if (Core_datapath_loadstore__io_dmem_addr != Core_datapath_loadstore__io_dmem_addr__prev)
    goto L588;
K588:
  if (Core_datapath__io_dmem_addr != Core_datapath__io_dmem_addr__prev)
    goto L589;
K589:
  if (Core_dmem__io_core_addr != Core_dmem__io_core_addr__prev)
    goto L590;
K590:
  if (Core_datapath__io_imem_r_addr != Core_datapath__io_imem_r_addr__prev)
    goto L591;
K591:
  if (Core_imem__io_core_r_addr != Core_imem__io_core_r_addr__prev)
    goto L592;
K592:
  if (Core_datapath_loadstore__io_imem_rw_addr != Core_datapath_loadstore__io_imem_rw_addr__prev)
    goto L593;
K593:
  if (Core_datapath__io_imem_rw_addr != Core_datapath__io_imem_rw_addr__prev)
    goto L594;
K594:
  if (Core_imem__io_core_rw_addr != Core_imem__io_core_rw_addr__prev)
    goto L595;
K595:
  if (Core_datapath_csr__io_rw_addr != Core_datapath_csr__io_rw_addr__prev)
    goto L596;
K596:
  if (Core_datapath_loadstore__io_imem_r_addr != Core_datapath_loadstore__io_imem_r_addr__prev)
    goto L597;
K597:
  if (Core_datapath__exe_reg_csr_addr != Core_datapath__exe_reg_csr_addr__prev)
    goto L598;
K598:
  if (Core__io_dmem_addr != Core__io_dmem_addr__prev)
    goto L599;
K599:
  if (Core__io_imem_addr != Core__io_imem_addr__prev)
    goto L600;
K600:
  if (Core_datapath__def_exe_alu_result != Core_datapath__def_exe_alu_result__prev)
    goto L601;
K601:
  if (Core_datapath__exe_alu_result != Core_datapath__exe_alu_result__prev)
    goto L602;
K602:
  if (Core_datapath__exe_address != Core_datapath__exe_address__prev)
    goto L603;
K603:
  if (Core_datapath_loadstore__io_addr != Core_datapath_loadstore__io_addr__prev)
    goto L604;
K604:
  if (Core_datapath_loadstore__io_data_in != Core_datapath_loadstore__io_data_in__prev)
    goto L605;
K605:
  if (Core_datapath_loadstore__io_dmem_data_in != Core_datapath_loadstore__io_dmem_data_in__prev)
    goto L606;
K606:
  if (Core_datapath__io_dmem_data_in != Core_datapath__io_dmem_data_in__prev)
    goto L607;
K607:
  if (Core_dmem__io_core_data_in != Core_dmem__io_core_data_in__prev)
    goto L608;
K608:
  if (Core_dmem__dout != Core_dmem__dout__prev)
    goto L609;
K609:
  if (Core_datapath__if_pc_plus4 != Core_datapath__if_pc_plus4__prev)
    goto L610;
K610:
  if (Core_datapath__io_control_dec_inst != Core_datapath__io_control_dec_inst__prev)
    goto L611;
K611:
  if (Core_control__io_dec_inst != Core_control__io_dec_inst__prev)
    goto L612;
K612:
  if (Core_datapath_csr__io_evecs_0 != Core_datapath_csr__io_evecs_0__prev)
    goto L613;
K613:
  if (Core_datapath_csr__io_evecs_1 != Core_datapath_csr__io_evecs_1__prev)
    goto L614;
K614:
  if (Core_datapath_csr__io_evecs_2 != Core_datapath_csr__io_evecs_2__prev)
    goto L615;
K615:
  if (Core_datapath_csr__io_evecs_3 != Core_datapath_csr__io_evecs_3__prev)
    goto L616;
K616:
  if (Core_datapath_csr__io_evecs_4 != Core_datapath_csr__io_evecs_4__prev)
    goto L617;
K617:
  if (Core_datapath_csr__io_evecs_5 != Core_datapath_csr__io_evecs_5__prev)
    goto L618;
K618:
  if (Core_datapath_csr__io_evecs_6 != Core_datapath_csr__io_evecs_6__prev)
    goto L619;
K619:
  if (Core_datapath_csr__io_evecs_7 != Core_datapath_csr__io_evecs_7__prev)
    goto L620;
K620:
  if (Core_datapath__mem_evec != Core_datapath__mem_evec__prev)
    goto L621;
K621:
  if (Core_datapath__next_pcs_0 != Core_datapath__next_pcs_0__prev)
    goto L622;
K622:
  if (Core_datapath__next_pcs_1 != Core_datapath__next_pcs_1__prev)
    goto L623;
K623:
  if (Core_datapath__next_pcs_2 != Core_datapath__next_pcs_2__prev)
    goto L624;
K624:
  if (Core_datapath__next_pcs_3 != Core_datapath__next_pcs_3__prev)
    goto L625;
K625:
  if (Core_datapath__next_pcs_4 != Core_datapath__next_pcs_4__prev)
    goto L626;
K626:
  if (Core_datapath__next_pcs_5 != Core_datapath__next_pcs_5__prev)
    goto L627;
K627:
  if (Core_datapath__next_pcs_6 != Core_datapath__next_pcs_6__prev)
    goto L628;
K628:
  if (Core_datapath__next_pcs_7 != Core_datapath__next_pcs_7__prev)
    goto L629;
K629:
  if (Core_datapath__next_pc != Core_datapath__next_pc__prev)
    goto L630;
K630:
  if (Core_imem__dout_r != Core_imem__dout_r__prev)
    goto L631;
K631:
  if (Core_datapath_loadstore__io_imem_rw_data_in != Core_datapath_loadstore__io_imem_rw_data_in__prev)
    goto L632;
K632:
  if (Core_datapath__io_imem_rw_data_in != Core_datapath__io_imem_rw_data_in__prev)
    goto L633;
K633:
  if (Core_imem__io_core_rw_data_in != Core_imem__io_core_rw_data_in__prev)
    goto L634;
K634:
  if (Core_imem__R0 != Core_imem__R0__prev)
    goto L635;
K635:
  if (Core_datapath_csr__io_rw_data_in != Core_datapath_csr__io_rw_data_in__prev)
    goto L636;
K636:
  if (Core_datapath_csr__reg_to_host != Core_datapath_csr__reg_to_host__prev)
    goto L637;
K637:
  if (Core_datapath_csr__io_epc != Core_datapath_csr__io_epc__prev)
    goto L638;
K638:
  if (Core_datapath_csr__reg_epcs_7 != Core_datapath_csr__reg_epcs_7__prev)
    goto L639;
K639:
  if (Core_datapath_csr__reg_epcs_6 != Core_datapath_csr__reg_epcs_6__prev)
    goto L640;
K640:
  if (Core_datapath_csr__reg_epcs_5 != Core_datapath_csr__reg_epcs_5__prev)
    goto L641;
K641:
  if (Core_datapath_csr__reg_epcs_4 != Core_datapath_csr__reg_epcs_4__prev)
    goto L642;
K642:
  if (Core_datapath_csr__reg_epcs_3 != Core_datapath_csr__reg_epcs_3__prev)
    goto L643;
K643:
  if (Core_datapath_csr__reg_epcs_2 != Core_datapath_csr__reg_epcs_2__prev)
    goto L644;
K644:
  if (Core_datapath_csr__reg_epcs_1 != Core_datapath_csr__reg_epcs_1__prev)
    goto L645;
K645:
  if (Core_datapath_csr__reg_epcs_0 != Core_datapath_csr__reg_epcs_0__prev)
    goto L646;
K646:
  if (Core_datapath_csr__reg_compare_7 != Core_datapath_csr__reg_compare_7__prev)
    goto L647;
K647:
  if (Core_datapath_csr__reg_compare_6 != Core_datapath_csr__reg_compare_6__prev)
    goto L648;
K648:
  if (Core_datapath_csr__reg_compare_5 != Core_datapath_csr__reg_compare_5__prev)
    goto L649;
K649:
  if (Core_datapath_csr__reg_compare_4 != Core_datapath_csr__reg_compare_4__prev)
    goto L650;
K650:
  if (Core_datapath_csr__reg_compare_3 != Core_datapath_csr__reg_compare_3__prev)
    goto L651;
K651:
  if (Core_datapath_csr__reg_compare_1 != Core_datapath_csr__reg_compare_1__prev)
    goto L652;
K652:
  if (Core_datapath_csr__reg_compare_0 != Core_datapath_csr__reg_compare_0__prev)
    goto L653;
K653:
  if (Core_datapath_csr__reg_compare_2 != Core_datapath_csr__reg_compare_2__prev)
    goto L654;
K654:
  if (Core_datapath_Multiplier__io_op2 != Core_datapath_Multiplier__io_op2__prev)
    goto L655;
K655:
  if (Core_datapath_Multiplier__io_op1 != Core_datapath_Multiplier__io_op1__prev)
    goto L656;
K656:
  if (Core_datapath_Multiplier__result != Core_datapath_Multiplier__result__prev)
    goto L657;
K657:
  if (Core_datapath_Multiplier__R0 != Core_datapath_Multiplier__R0__prev)
    goto L658;
K658:
  if (Core_imem__io_core_r_data_out != Core_imem__io_core_r_data_out__prev)
    goto L659;
K659:
  if (Core_datapath__io_imem_r_data_out != Core_datapath__io_imem_r_data_out__prev)
    goto L660;
K660:
  if (Core_datapath_regfile__dout1 != Core_datapath_regfile__dout1__prev)
    goto L661;
K661:
  if (Core_datapath_Multiplier__io_result != Core_datapath_Multiplier__io_result__prev)
    goto L662;
K662:
  if (Core_datapath__mem_mul_result != Core_datapath__mem_mul_result__prev)
    goto L663;
K663:
  if (Core__io_bus_data_out != Core__io_bus_data_out__prev)
    goto L664;
K664:
  if (Core_datapath__io_bus_data_out != Core_datapath__io_bus_data_out__prev)
    goto L665;
K665:
  if (Core_datapath_loadstore__io_bus_data_out != Core_datapath_loadstore__io_bus_data_out__prev)
    goto L666;
K666:
  if (Core_imem__io_core_rw_data_out != Core_imem__io_core_rw_data_out__prev)
    goto L667;
K667:
  if (Core_datapath__io_imem_rw_data_out != Core_datapath__io_imem_rw_data_out__prev)
    goto L668;
K668:
  if (Core_datapath_loadstore__io_imem_rw_data_out != Core_datapath_loadstore__io_imem_rw_data_out__prev)
    goto L669;
K669:
  if (Core_dmem__io_core_data_out != Core_dmem__io_core_data_out__prev)
    goto L670;
K670:
  if (Core_datapath__io_dmem_data_out != Core_datapath__io_dmem_data_out__prev)
    goto L671;
K671:
  if (Core_datapath_loadstore__io_dmem_data_out != Core_datapath_loadstore__io_dmem_data_out__prev)
    goto L672;
K672:
  if (Core_datapath_loadstore__io_data_out != Core_datapath_loadstore__io_data_out__prev)
    goto L673;
K673:
  if (Core_datapath__mem_rd_data != Core_datapath__mem_rd_data__prev)
    goto L674;
K674:
  if (Core_datapath_regfile__io_rd_data != Core_datapath_regfile__io_rd_data__prev)
    goto L675;
K675:
  if (Core_datapath_regfile__dout2 != Core_datapath_regfile__dout2__prev)
    goto L676;
K676:
  if (Core_datapath_regfile__io_rs1_data != Core_datapath_regfile__io_rs1_data__prev)
    goto L677;
K677:
  if (Core_datapath__wb_rd_data != Core_datapath__wb_rd_data__prev)
    goto L678;
K678:
  if (Core_datapath_csr__io_rw_data_out != Core_datapath_csr__io_rw_data_out__prev)
    goto L679;
K679:
  if (Core_datapath__exe_rd_data != Core_datapath__exe_rd_data__prev)
    goto L680;
K680:
  if (Core_datapath__dec_rs1_data != Core_datapath__dec_rs1_data__prev)
    goto L681;
K681:
  if (Core_datapath__exe_reg_rs1_data != Core_datapath__exe_reg_rs1_data__prev)
    goto L682;
K682:
  if (Core_datapath_regfile__io_rs2_data != Core_datapath_regfile__io_rs2_data__prev)
    goto L683;
K683:
  if (Core_datapath__dec_rs2_data != Core_datapath__dec_rs2_data__prev)
    goto L684;
K684:
  if (Core_datapath__exe_reg_rs2_data != Core_datapath__exe_reg_rs2_data__prev)
    goto L685;
K685:
  if (Core_datapath__dec_imm_i != Core_datapath__dec_imm_i__prev)
    goto L686;
K686:
  if (Core_datapath__dec_imm_z != Core_datapath__dec_imm_z__prev)
    goto L687;
K687:
  if (Core_datapath__dec_imm_j != Core_datapath__dec_imm_j__prev)
    goto L688;
K688:
  if (Core_datapath__dec_imm_u != Core_datapath__dec_imm_u__prev)
    goto L689;
K689:
  if (Core_datapath__dec_imm_b != Core_datapath__dec_imm_b__prev)
    goto L690;
K690:
  if (Core_datapath__dec_imm_s != Core_datapath__dec_imm_s__prev)
    goto L691;
K691:
  if (Core_datapath__dec_imm != Core_datapath__dec_imm__prev)
    goto L692;
K692:
  if (Core_datapath__dec_csr_data != Core_datapath__dec_csr_data__prev)
    goto L693;
K693:
  if (Core_datapath__exe_csr_data != Core_datapath__exe_csr_data__prev)
    goto L694;
K694:
  if (Core_datapath__if_reg_pcs_7 != Core_datapath__if_reg_pcs_7__prev)
    goto L695;
K695:
  if (Core_datapath__if_reg_pcs_6 != Core_datapath__if_reg_pcs_6__prev)
    goto L696;
K696:
  if (Core_datapath__if_reg_pcs_5 != Core_datapath__if_reg_pcs_5__prev)
    goto L697;
K697:
  if (Core_datapath__if_reg_pcs_4 != Core_datapath__if_reg_pcs_4__prev)
    goto L698;
K698:
  if (Core_datapath__if_reg_pcs_3 != Core_datapath__if_reg_pcs_3__prev)
    goto L699;
K699:
  if (Core_datapath__if_reg_pcs_2 != Core_datapath__if_reg_pcs_2__prev)
    goto L700;
K700:
  if (Core_datapath__if_reg_pcs_1 != Core_datapath__if_reg_pcs_1__prev)
    goto L701;
K701:
  if (Core_datapath__dec_op1 != Core_datapath__dec_op1__prev)
    goto L702;
K702:
  if (Core_datapath__exe_reg_op1 != Core_datapath__exe_reg_op1__prev)
    goto L703;
K703:
  if (Core_datapath__dec_reg_pc4 != Core_datapath__dec_reg_pc4__prev)
    goto L704;
K704:
  if (Core_datapath__exe_reg_pc4 != Core_datapath__exe_reg_pc4__prev)
    goto L705;
K705:
  if (Core_datapath__mem_reg_rd_data != Core_datapath__mem_reg_rd_data__prev)
    goto L706;
K706:
  if (Core_datapath__wb_reg_rd_data != Core_datapath__wb_reg_rd_data__prev)
    goto L707;
K707:
  if (Core_datapath__dec_reg_inst != Core_datapath__dec_reg_inst__prev)
    goto L708;
K708:
  if (Core_datapath__dec_op2 != Core_datapath__dec_op2__prev)
    goto L709;
K709:
  if (Core_datapath__exe_reg_op2 != Core_datapath__exe_reg_op2__prev)
    goto L710;
K710:
  if (Core_datapath__if_reg_pcs_0 != Core_datapath__if_reg_pcs_0__prev)
    goto L711;
K711:
  if (Core_datapath__if_reg_pc != Core_datapath__if_reg_pc__prev)
    goto L712;
K712:
  if (Core_datapath__dec_reg_pc != Core_datapath__dec_reg_pc__prev)
    goto L713;
K713:
  if (Core_datapath__exe_reg_pc != Core_datapath__exe_reg_pc__prev)
    goto L714;
K714:
  if (Core_imem__io_bus_data_out != Core_imem__io_bus_data_out__prev)
    goto L715;
K715:
  if (Core__io_imem_data_out != Core__io_imem_data_out__prev)
    goto L716;
K716:
  if (Core_dmem__io_bus_data_out != Core_dmem__io_bus_data_out__prev)
    goto L717;
K717:
  if (Core__io_dmem_data_out != Core__io_dmem_data_out__prev)
    goto L718;
K718:
  if (Core_datapath_loadstore__io_bus_data_in != Core_datapath_loadstore__io_bus_data_in__prev)
    goto L719;
K719:
  if (Core_datapath__io_bus_data_in != Core_datapath__io_bus_data_in__prev)
    goto L720;
K720:
  if (Core__io_bus_data_in != Core__io_bus_data_in__prev)
    goto L721;
K721:
  if (Core_datapath_csr__io_host_to_host != Core_datapath_csr__io_host_to_host__prev)
    goto L722;
K722:
  if (Core_datapath__io_host_to_host != Core_datapath__io_host_to_host__prev)
    goto L723;
K723:
  if (Core__io_host_to_host != Core__io_host_to_host__prev)
    goto L724;
K724:
  if (Core__io_dmem_data_in != Core__io_dmem_data_in__prev)
    goto L725;
K725:
  if (Core__io_imem_data_in != Core__io_imem_data_in__prev)
    goto L726;
K726:
  if (Core_datapath_Multiplier__op2 != Core_datapath_Multiplier__op2__prev)
    goto L727;
K727:
  if (Core_datapath_Multiplier__op1 != Core_datapath_Multiplier__op1__prev)
    goto L728;
K728:
  if (Core_datapath_csr__status_0 != Core_datapath_csr__status_0__prev)
    goto L729;
K729:
  if (Core_datapath_csr__status_1 != Core_datapath_csr__status_1__prev)
    goto L730;
K730:
  if (Core_datapath_csr__status_2 != Core_datapath_csr__status_2__prev)
    goto L731;
K731:
  if (Core_datapath_csr__status_3 != Core_datapath_csr__status_3__prev)
    goto L732;
K732:
  if (Core_datapath_csr__status_4 != Core_datapath_csr__status_4__prev)
    goto L733;
K733:
  if (Core_datapath_csr__status_5 != Core_datapath_csr__status_5__prev)
    goto L734;
K734:
  if (Core_datapath_csr__status_6 != Core_datapath_csr__status_6__prev)
    goto L735;
K735:
  if (Core_datapath_csr__status_7 != Core_datapath_csr__status_7__prev)
    goto L736;
K736:
  if (Core_datapath_csr__data_out != Core_datapath_csr__data_out__prev)
    goto L737;
K737:
  if (Core_datapath_csr__data_in != Core_datapath_csr__data_in__prev)
    goto L738;
K738:
  if (Core_datapath_csr__reg_sup0_7 != Core_datapath_csr__reg_sup0_7__prev)
    goto L739;
K739:
  if (Core_datapath_csr__reg_sup0_6 != Core_datapath_csr__reg_sup0_6__prev)
    goto L740;
K740:
  if (Core_datapath_csr__reg_sup0_5 != Core_datapath_csr__reg_sup0_5__prev)
    goto L741;
K741:
  if (Core_datapath_csr__reg_sup0_4 != Core_datapath_csr__reg_sup0_4__prev)
    goto L742;
K742:
  if (Core_datapath_csr__reg_sup0_3 != Core_datapath_csr__reg_sup0_3__prev)
    goto L743;
K743:
  if (Core_datapath_csr__reg_sup0_2 != Core_datapath_csr__reg_sup0_2__prev)
    goto L744;
K744:
  if (Core_datapath_csr__reg_sup0_1 != Core_datapath_csr__reg_sup0_1__prev)
    goto L745;
K745:
  if (Core_datapath_csr__reg_sup0_0 != Core_datapath_csr__reg_sup0_0__prev)
    goto L746;
K746:
  if (Core_datapath_csr__reg_evecs_7 != Core_datapath_csr__reg_evecs_7__prev)
    goto L747;
K747:
  if (Core_datapath_csr__reg_evecs_6 != Core_datapath_csr__reg_evecs_6__prev)
    goto L748;
K748:
  if (Core_datapath_csr__reg_evecs_5 != Core_datapath_csr__reg_evecs_5__prev)
    goto L749;
K749:
  if (Core_datapath_csr__reg_evecs_4 != Core_datapath_csr__reg_evecs_4__prev)
    goto L750;
K750:
  if (Core_datapath_csr__reg_evecs_3 != Core_datapath_csr__reg_evecs_3__prev)
    goto L751;
K751:
  if (Core_datapath_csr__reg_evecs_2 != Core_datapath_csr__reg_evecs_2__prev)
    goto L752;
K752:
  if (Core_datapath_csr__reg_evecs_1 != Core_datapath_csr__reg_evecs_1__prev)
    goto L753;
K753:
  if (Core_datapath_csr__reg_evecs_0 != Core_datapath_csr__reg_evecs_0__prev)
    goto L754;
K754:
  if (Core_datapath_csr__reg_time != Core_datapath_csr__reg_time__prev)
    goto L755;
K755:
  if (Core_datapath_Multiplier__mul_result != Core_datapath_Multiplier__mul_result__prev)
    goto L756;
K756:
  return;
L0:
  Core_datapath_csr__int_ext__prev = Core_datapath_csr__int_ext;
  dat_dump<1>(f, Core_datapath_csr__int_ext, 0x21);
  goto K0;
L1:
  Core_datapath_csr__io_int_ext__prev = Core_datapath_csr__io_int_ext;
  dat_dump<1>(f, Core_datapath_csr__io_int_ext, 0x22);
  goto K1;
L2:
  Core_datapath__io_control_exe_int_ext__prev = Core_datapath__io_control_exe_int_ext;
  dat_dump<1>(f, Core_datapath__io_control_exe_int_ext, 0x23);
  goto K2;
L3:
  Core_control__io_exe_int_ext__prev = Core_control__io_exe_int_ext;
  dat_dump<1>(f, Core_control__io_exe_int_ext, 0x24);
  goto K3;
L4:
  Core_datapath_csr__expired_0__prev = Core_datapath_csr__expired_0;
  dat_dump<1>(f, Core_datapath_csr__expired_0, 0x25);
  goto K4;
L5:
  Core_datapath_csr__expired_1__prev = Core_datapath_csr__expired_1;
  dat_dump<1>(f, Core_datapath_csr__expired_1, 0x26);
  goto K5;
L6:
  Core_datapath_csr__expired_2__prev = Core_datapath_csr__expired_2;
  dat_dump<1>(f, Core_datapath_csr__expired_2, 0x27);
  goto K6;
L7:
  Core_datapath_csr__expired_3__prev = Core_datapath_csr__expired_3;
  dat_dump<1>(f, Core_datapath_csr__expired_3, 0x28);
  goto K7;
L8:
  Core_datapath_csr__expired_4__prev = Core_datapath_csr__expired_4;
  dat_dump<1>(f, Core_datapath_csr__expired_4, 0x29);
  goto K8;
L9:
  Core_datapath_csr__expired_5__prev = Core_datapath_csr__expired_5;
  dat_dump<1>(f, Core_datapath_csr__expired_5, 0x2a);
  goto K9;
L10:
  Core_datapath_csr__expired_6__prev = Core_datapath_csr__expired_6;
  dat_dump<1>(f, Core_datapath_csr__expired_6, 0x2b);
  goto K10;
L11:
  Core_datapath_csr__expired_7__prev = Core_datapath_csr__expired_7;
  dat_dump<1>(f, Core_datapath_csr__expired_7, 0x2c);
  goto K11;
L12:
  Core_control__io_exe_valid__prev = Core_control__io_exe_valid;
  dat_dump<1>(f, Core_control__io_exe_valid, 0x2d);
  goto K12;
L13:
  Core_datapath__io_control_exe_valid__prev = Core_datapath__io_control_exe_valid;
  dat_dump<1>(f, Core_datapath__io_control_exe_valid, 0x2e);
  goto K13;
L14:
  Core_datapath_csr__io_rw_valid__prev = Core_datapath_csr__io_rw_valid;
  dat_dump<1>(f, Core_datapath_csr__io_rw_valid, 0x2f);
  goto K14;
L15:
  Core_datapath_csr__int_expire__prev = Core_datapath_csr__int_expire;
  dat_dump<1>(f, Core_datapath_csr__int_expire, 0x30);
  goto K15;
L16:
  Core_datapath_csr__io_int_expire__prev = Core_datapath_csr__io_int_expire;
  dat_dump<1>(f, Core_datapath_csr__io_int_expire, 0x31);
  goto K16;
L17:
  Core_datapath__io_control_exe_int_expire__prev = Core_datapath__io_control_exe_int_expire;
  dat_dump<1>(f, Core_datapath__io_control_exe_int_expire, 0x32);
  goto K17;
L18:
  Core_control__io_exe_int_expire__prev = Core_control__io_exe_int_expire;
  dat_dump<1>(f, Core_control__io_exe_int_expire, 0x33);
  goto K18;
L19:
  Core_datapath_csr__exc_expire__prev = Core_datapath_csr__exc_expire;
  dat_dump<1>(f, Core_datapath_csr__exc_expire, 0x34);
  goto K19;
L20:
  Core_datapath_csr__io_exc_expire__prev = Core_datapath_csr__io_exc_expire;
  dat_dump<1>(f, Core_datapath_csr__io_exc_expire, 0x35);
  goto K20;
L21:
  Core_datapath__io_control_exe_exc_expire__prev = Core_datapath__io_control_exe_exc_expire;
  dat_dump<1>(f, Core_datapath__io_control_exe_exc_expire, 0x36);
  goto K21;
L22:
  Core_control__io_exe_exc_expire__prev = Core_control__io_exe_exc_expire;
  dat_dump<1>(f, Core_control__io_exe_exc_expire, 0x37);
  goto K22;
L23:
  Core_control__exe_any_exc__prev = Core_control__exe_any_exc;
  dat_dump<1>(f, Core_control__exe_any_exc, 0x38);
  goto K23;
L24:
  Core_control__exe_kill__prev = Core_control__exe_kill;
  dat_dump<1>(f, Core_control__exe_kill, 0x39);
  goto K24;
L25:
  Core_control__io_exe_kill__prev = Core_control__io_exe_kill;
  dat_dump<1>(f, Core_control__io_exe_kill, 0x3a);
  goto K25;
L26:
  Core_datapath__io_control_exe_kill__prev = Core_datapath__io_control_exe_kill;
  dat_dump<1>(f, Core_datapath__io_control_exe_kill, 0x3b);
  goto K26;
L27:
  Core_datapath_loadstore__io_kill__prev = Core_datapath_loadstore__io_kill;
  dat_dump<1>(f, Core_datapath_loadstore__io_kill, 0x3c);
  goto K27;
L28:
  Core_datapath_loadstore__store_fault__prev = Core_datapath_loadstore__store_fault;
  dat_dump<1>(f, Core_datapath_loadstore__store_fault, 0x3d);
  goto K28;
L29:
  Core_control__exe_store__prev = Core_control__exe_store;
  dat_dump<1>(f, Core_control__exe_store, 0x3e);
  goto K29;
L30:
  Core_control__io_exe_store__prev = Core_control__io_exe_store;
  dat_dump<1>(f, Core_control__io_exe_store, 0x3f);
  goto K30;
L31:
  Core_datapath__io_control_exe_store__prev = Core_datapath__io_control_exe_store;
  dat_dump<1>(f, Core_datapath__io_control_exe_store, 0x40);
  goto K31;
L32:
  Core_datapath_loadstore__io_store__prev = Core_datapath_loadstore__io_store;
  dat_dump<1>(f, Core_datapath_loadstore__io_store, 0x41);
  goto K32;
L33:
  Core_datapath_loadstore__store_misaligned__prev = Core_datapath_loadstore__store_misaligned;
  dat_dump<1>(f, Core_datapath_loadstore__store_misaligned, 0x42);
  goto K33;
L34:
  Core_datapath_loadstore__bus_op__prev = Core_datapath_loadstore__bus_op;
  dat_dump<1>(f, Core_datapath_loadstore__bus_op, 0x43);
  goto K34;
L35:
  Core_datapath_loadstore__imem_op__prev = Core_datapath_loadstore__imem_op;
  dat_dump<1>(f, Core_datapath_loadstore__imem_op, 0x44);
  goto K35;
L36:
  Core_datapath_loadstore__dmem_op__prev = Core_datapath_loadstore__dmem_op;
  dat_dump<1>(f, Core_datapath_loadstore__dmem_op, 0x45);
  goto K36;
L37:
  Core_datapath_loadstore__permission__prev = Core_datapath_loadstore__permission;
  dat_dump<1>(f, Core_datapath_loadstore__permission, 0x46);
  goto K37;
L38:
  Core_datapath_loadstore__write__prev = Core_datapath_loadstore__write;
  dat_dump<1>(f, Core_datapath_loadstore__write, 0x47);
  goto K38;
L39:
  Core_datapath_loadstore__io_dmem_byte_write_0__prev = Core_datapath_loadstore__io_dmem_byte_write_0;
  dat_dump<1>(f, Core_datapath_loadstore__io_dmem_byte_write_0, 0x48);
  goto K39;
L40:
  Core_datapath__io_dmem_byte_write_0__prev = Core_datapath__io_dmem_byte_write_0;
  dat_dump<1>(f, Core_datapath__io_dmem_byte_write_0, 0x49);
  goto K40;
L41:
  Core_dmem__io_core_byte_write_0__prev = Core_dmem__io_core_byte_write_0;
  dat_dump<1>(f, Core_dmem__io_core_byte_write_0, 0x4a);
  goto K41;
L42:
  Core_datapath_loadstore__io_dmem_byte_write_1__prev = Core_datapath_loadstore__io_dmem_byte_write_1;
  dat_dump<1>(f, Core_datapath_loadstore__io_dmem_byte_write_1, 0x4b);
  goto K42;
L43:
  Core_datapath__io_dmem_byte_write_1__prev = Core_datapath__io_dmem_byte_write_1;
  dat_dump<1>(f, Core_datapath__io_dmem_byte_write_1, 0x4c);
  goto K43;
L44:
  Core_dmem__io_core_byte_write_1__prev = Core_dmem__io_core_byte_write_1;
  dat_dump<1>(f, Core_dmem__io_core_byte_write_1, 0x4d);
  goto K44;
L45:
  Core_datapath_loadstore__io_dmem_byte_write_2__prev = Core_datapath_loadstore__io_dmem_byte_write_2;
  dat_dump<1>(f, Core_datapath_loadstore__io_dmem_byte_write_2, 0x4e);
  goto K45;
L46:
  Core_datapath__io_dmem_byte_write_2__prev = Core_datapath__io_dmem_byte_write_2;
  dat_dump<1>(f, Core_datapath__io_dmem_byte_write_2, 0x4f);
  goto K46;
L47:
  Core_dmem__io_core_byte_write_2__prev = Core_dmem__io_core_byte_write_2;
  dat_dump<1>(f, Core_dmem__io_core_byte_write_2, 0x50);
  goto K47;
L48:
  Core_datapath_loadstore__io_dmem_byte_write_3__prev = Core_datapath_loadstore__io_dmem_byte_write_3;
  dat_dump<1>(f, Core_datapath_loadstore__io_dmem_byte_write_3, 0x51);
  goto K48;
L49:
  Core_datapath__io_dmem_byte_write_3__prev = Core_datapath__io_dmem_byte_write_3;
  dat_dump<1>(f, Core_datapath__io_dmem_byte_write_3, 0x52);
  goto K49;
L50:
  Core_dmem__io_core_byte_write_3__prev = Core_dmem__io_core_byte_write_3;
  dat_dump<1>(f, Core_dmem__io_core_byte_write_3, 0x53);
  goto K50;
L51:
  Core_control__exe_load__prev = Core_control__exe_load;
  dat_dump<1>(f, Core_control__exe_load, 0x54);
  goto K51;
L52:
  Core_control__io_exe_load__prev = Core_control__io_exe_load;
  dat_dump<1>(f, Core_control__io_exe_load, 0x55);
  goto K52;
L53:
  Core_datapath__io_control_exe_load__prev = Core_datapath__io_control_exe_load;
  dat_dump<1>(f, Core_datapath__io_control_exe_load, 0x56);
  goto K53;
L54:
  Core_datapath_loadstore__io_load__prev = Core_datapath_loadstore__io_load;
  dat_dump<1>(f, Core_datapath_loadstore__io_load, 0x57);
  goto K54;
L55:
  Core_datapath_loadstore__io_dmem_enable__prev = Core_datapath_loadstore__io_dmem_enable;
  dat_dump<1>(f, Core_datapath_loadstore__io_dmem_enable, 0x58);
  goto K55;
L56:
  Core_datapath__io_dmem_enable__prev = Core_datapath__io_dmem_enable;
  dat_dump<1>(f, Core_datapath__io_dmem_enable, 0x59);
  goto K56;
L57:
  Core_dmem__io_core_enable__prev = Core_dmem__io_core_enable;
  dat_dump<1>(f, Core_dmem__io_core_enable, 0x5a);
  goto K57;
L58:
  Core_control__dec_load__prev = Core_control__dec_load;
  dat_dump<1>(f, Core_control__dec_load, 0x5b);
  goto K58;
L59:
  Core_control__dec_fence_i__prev = Core_control__dec_fence_i;
  dat_dump<1>(f, Core_control__dec_fence_i, 0x5c);
  goto K59;
L60:
  Core_control__dec_stall__prev = Core_control__dec_stall;
  dat_dump<1>(f, Core_control__dec_stall, 0x5d);
  goto K60;
L61:
  Core_control__if_pre_valid__prev = Core_control__if_pre_valid;
  dat_dump<1>(f, Core_control__if_pre_valid, 0x5e);
  goto K61;
L62:
  Core_datapath_csr__io_expire__prev = Core_datapath_csr__io_expire;
  dat_dump<1>(f, Core_datapath_csr__io_expire, 0x5f);
  goto K62;
L63:
  Core_datapath__io_control_exe_expire__prev = Core_datapath__io_control_exe_expire;
  dat_dump<1>(f, Core_datapath__io_control_exe_expire, 0x60);
  goto K63;
L64:
  Core_control__io_exe_expire__prev = Core_control__io_exe_expire;
  dat_dump<1>(f, Core_control__io_exe_expire, 0x61);
  goto K64;
L65:
  Core_control__exe_du__prev = Core_control__exe_du;
  dat_dump<1>(f, Core_control__exe_du, 0x62);
  goto K65;
L66:
  Core_datapath__exe_ltu__prev = Core_datapath__exe_ltu;
  dat_dump<1>(f, Core_datapath__exe_ltu, 0x63);
  goto K66;
L67:
  Core_datapath__exe_lt__prev = Core_datapath__exe_lt;
  dat_dump<1>(f, Core_datapath__exe_lt, 0x64);
  goto K67;
L68:
  Core_datapath__exe_eq__prev = Core_datapath__exe_eq;
  dat_dump<1>(f, Core_datapath__exe_eq, 0x65);
  goto K68;
L69:
  Core_datapath__exe_br_cond__prev = Core_datapath__exe_br_cond;
  dat_dump<1>(f, Core_datapath__exe_br_cond, 0x66);
  goto K69;
L70:
  Core_datapath__io_control_exe_br_cond__prev = Core_datapath__io_control_exe_br_cond;
  dat_dump<1>(f, Core_datapath__io_control_exe_br_cond, 0x67);
  goto K70;
L71:
  Core_control__io_exe_br_cond__prev = Core_control__io_exe_br_cond;
  dat_dump<1>(f, Core_control__io_exe_br_cond, 0x68);
  goto K71;
L72:
  Core_control__exe_brjmp__prev = Core_control__exe_brjmp;
  dat_dump<1>(f, Core_control__exe_brjmp, 0x69);
  goto K72;
L73:
  Core_control__next_valid__prev = Core_control__next_valid;
  dat_dump<1>(f, Core_control__next_valid, 0x6a);
  goto K73;
L74:
  Core_control__io_next_valid__prev = Core_control__io_next_valid;
  dat_dump<1>(f, Core_control__io_next_valid, 0x6b);
  goto K74;
L75:
  Core_datapath__io_control_next_valid__prev = Core_datapath__io_control_next_valid;
  dat_dump<1>(f, Core_datapath__io_control_next_valid, 0x6c);
  goto K75;
L76:
  Core_datapath__io_imem_r_enable__prev = Core_datapath__io_imem_r_enable;
  dat_dump<1>(f, Core_datapath__io_imem_r_enable, 0x6d);
  goto K76;
L77:
  Core_imem__io_core_r_enable__prev = Core_imem__io_core_r_enable;
  dat_dump<1>(f, Core_imem__io_core_r_enable, 0x6e);
  goto K77;
L78:
  Core_datapath_loadstore__io_imem_rw_write__prev = Core_datapath_loadstore__io_imem_rw_write;
  dat_dump<1>(f, Core_datapath_loadstore__io_imem_rw_write, 0x6f);
  goto K78;
L79:
  Core_datapath__io_imem_rw_write__prev = Core_datapath__io_imem_rw_write;
  dat_dump<1>(f, Core_datapath__io_imem_rw_write, 0x70);
  goto K79;
L80:
  Core_imem__io_core_rw_write__prev = Core_imem__io_core_rw_write;
  dat_dump<1>(f, Core_imem__io_core_rw_write, 0x71);
  goto K80;
L81:
  Core_datapath_loadstore__io_imem_rw_enable__prev = Core_datapath_loadstore__io_imem_rw_enable;
  dat_dump<1>(f, Core_datapath_loadstore__io_imem_rw_enable, 0x72);
  goto K81;
L82:
  Core_datapath__io_imem_rw_enable__prev = Core_datapath__io_imem_rw_enable;
  dat_dump<1>(f, Core_datapath__io_imem_rw_enable, 0x73);
  goto K82;
L83:
  Core_imem__io_core_rw_enable__prev = Core_imem__io_core_rw_enable;
  dat_dump<1>(f, Core_imem__io_core_rw_enable, 0x74);
  goto K83;
L84:
  Core_datapath_csr__io_kill__prev = Core_datapath_csr__io_kill;
  dat_dump<1>(f, Core_datapath_csr__io_kill, 0x75);
  goto K84;
L85:
  Core_datapath_csr__priv_fault__prev = Core_datapath_csr__priv_fault;
  dat_dump<1>(f, Core_datapath_csr__priv_fault, 0x76);
  goto K85;
L86:
  Core_control__exe_csr_write__prev = Core_control__exe_csr_write;
  dat_dump<1>(f, Core_control__exe_csr_write, 0x77);
  goto K86;
L87:
  Core_control__io_exe_csr_write__prev = Core_control__io_exe_csr_write;
  dat_dump<1>(f, Core_control__io_exe_csr_write, 0x78);
  goto K87;
L88:
  Core_datapath__io_control_exe_csr_write__prev = Core_datapath__io_control_exe_csr_write;
  dat_dump<1>(f, Core_datapath__io_control_exe_csr_write, 0x79);
  goto K88;
L89:
  Core_datapath_csr__io_rw_write__prev = Core_datapath_csr__io_rw_write;
  dat_dump<1>(f, Core_datapath_csr__io_rw_write, 0x7a);
  goto K89;
L90:
  Core_datapath_csr__write__prev = Core_datapath_csr__write;
  dat_dump<1>(f, Core_datapath_csr__write, 0x7b);
  goto K90;
L91:
  Core__io_int_exts_0__prev = Core__io_int_exts_0;
  dat_dump<1>(f, Core__io_int_exts_0, 0x7c);
  goto K91;
L92:
  Core_datapath__io_int_exts_0__prev = Core_datapath__io_int_exts_0;
  dat_dump<1>(f, Core_datapath__io_int_exts_0, 0x7d);
  goto K92;
L93:
  Core_datapath_csr__io_int_exts_0__prev = Core_datapath_csr__io_int_exts_0;
  dat_dump<1>(f, Core_datapath_csr__io_int_exts_0, 0x7e);
  goto K93;
L94:
  Core__io_int_exts_1__prev = Core__io_int_exts_1;
  dat_dump<2>(f, Core__io_int_exts_1, 0x2221);
  goto K94;
L95:
  Core_datapath__io_int_exts_1__prev = Core_datapath__io_int_exts_1;
  dat_dump<2>(f, Core_datapath__io_int_exts_1, 0x2222);
  goto K95;
L96:
  Core_datapath_csr__io_int_exts_1__prev = Core_datapath_csr__io_int_exts_1;
  dat_dump<2>(f, Core_datapath_csr__io_int_exts_1, 0x2223);
  goto K96;
L97:
  Core__io_int_exts_2__prev = Core__io_int_exts_2;
  dat_dump<2>(f, Core__io_int_exts_2, 0x2224);
  goto K97;
L98:
  Core_datapath__io_int_exts_2__prev = Core_datapath__io_int_exts_2;
  dat_dump<2>(f, Core_datapath__io_int_exts_2, 0x2225);
  goto K98;
L99:
  Core_datapath_csr__io_int_exts_2__prev = Core_datapath_csr__io_int_exts_2;
  dat_dump<2>(f, Core_datapath_csr__io_int_exts_2, 0x2226);
  goto K99;
L100:
  Core__io_int_exts_3__prev = Core__io_int_exts_3;
  dat_dump<2>(f, Core__io_int_exts_3, 0x2227);
  goto K100;
L101:
  Core_datapath__io_int_exts_3__prev = Core_datapath__io_int_exts_3;
  dat_dump<2>(f, Core_datapath__io_int_exts_3, 0x2228);
  goto K101;
L102:
  Core_datapath_csr__io_int_exts_3__prev = Core_datapath_csr__io_int_exts_3;
  dat_dump<2>(f, Core_datapath_csr__io_int_exts_3, 0x2229);
  goto K102;
L103:
  Core__io_int_exts_4__prev = Core__io_int_exts_4;
  dat_dump<2>(f, Core__io_int_exts_4, 0x222a);
  goto K103;
L104:
  Core_datapath__io_int_exts_4__prev = Core_datapath__io_int_exts_4;
  dat_dump<2>(f, Core_datapath__io_int_exts_4, 0x222b);
  goto K104;
L105:
  Core_datapath_csr__io_int_exts_4__prev = Core_datapath_csr__io_int_exts_4;
  dat_dump<2>(f, Core_datapath_csr__io_int_exts_4, 0x222c);
  goto K105;
L106:
  Core__io_int_exts_5__prev = Core__io_int_exts_5;
  dat_dump<2>(f, Core__io_int_exts_5, 0x222d);
  goto K106;
L107:
  Core_datapath__io_int_exts_5__prev = Core_datapath__io_int_exts_5;
  dat_dump<2>(f, Core_datapath__io_int_exts_5, 0x222e);
  goto K107;
L108:
  Core_datapath_csr__io_int_exts_5__prev = Core_datapath_csr__io_int_exts_5;
  dat_dump<2>(f, Core_datapath_csr__io_int_exts_5, 0x222f);
  goto K108;
L109:
  Core__io_int_exts_6__prev = Core__io_int_exts_6;
  dat_dump<2>(f, Core__io_int_exts_6, 0x2230);
  goto K109;
L110:
  Core_datapath__io_int_exts_6__prev = Core_datapath__io_int_exts_6;
  dat_dump<2>(f, Core_datapath__io_int_exts_6, 0x2231);
  goto K110;
L111:
  Core_datapath_csr__io_int_exts_6__prev = Core_datapath_csr__io_int_exts_6;
  dat_dump<2>(f, Core_datapath_csr__io_int_exts_6, 0x2232);
  goto K111;
L112:
  Core__io_int_exts_7__prev = Core__io_int_exts_7;
  dat_dump<2>(f, Core__io_int_exts_7, 0x2233);
  goto K112;
L113:
  Core_datapath__io_int_exts_7__prev = Core_datapath__io_int_exts_7;
  dat_dump<2>(f, Core_datapath__io_int_exts_7, 0x2234);
  goto K113;
L114:
  Core_datapath_csr__io_int_exts_7__prev = Core_datapath_csr__io_int_exts_7;
  dat_dump<2>(f, Core_datapath_csr__io_int_exts_7, 0x2235);
  goto K114;
L115:
  Core_datapath__reset__prev = Core_datapath__reset;
  dat_dump<2>(f, Core_datapath__reset, 0x2236);
  goto K115;
L116:
  Core_datapath_csr__reset__prev = Core_datapath_csr__reset;
  dat_dump<2>(f, Core_datapath_csr__reset, 0x2237);
  goto K116;
L117:
  Core_datapath_csr__reg_msip_1__prev = Core_datapath_csr__reg_msip_1;
  dat_dump<2>(f, Core_datapath_csr__reg_msip_1, 0x2238);
  goto K117;
L118:
  Core_datapath_csr__reg_mtie_7__prev = Core_datapath_csr__reg_mtie_7;
  dat_dump<2>(f, Core_datapath_csr__reg_mtie_7, 0x2239);
  goto K118;
L119:
  Core_datapath_csr__reg_ie1_7__prev = Core_datapath_csr__reg_ie1_7;
  dat_dump<2>(f, Core_datapath_csr__reg_ie1_7, 0x223a);
  goto K119;
L120:
  Core_datapath_loadstore__io_store_misaligned__prev = Core_datapath_loadstore__io_store_misaligned;
  dat_dump<2>(f, Core_datapath_loadstore__io_store_misaligned, 0x223b);
  goto K120;
L121:
  Core_datapath__io_control_exe_exc_store_misaligned__prev = Core_datapath__io_control_exe_exc_store_misaligned;
  dat_dump<2>(f, Core_datapath__io_control_exe_exc_store_misaligned, 0x223c);
  goto K121;
L122:
  Core_control__io_exe_exc_store_misaligned__prev = Core_control__io_exe_exc_store_misaligned;
  dat_dump<2>(f, Core_control__io_exe_exc_store_misaligned, 0x223d);
  goto K122;
L123:
  Core_datapath_loadstore__load_misaligned__prev = Core_datapath_loadstore__load_misaligned;
  dat_dump<2>(f, Core_datapath_loadstore__load_misaligned, 0x223e);
  goto K123;
L124:
  Core_datapath_loadstore__io_load_misaligned__prev = Core_datapath_loadstore__io_load_misaligned;
  dat_dump<2>(f, Core_datapath_loadstore__io_load_misaligned, 0x223f);
  goto K124;
L125:
  Core_datapath__io_control_exe_exc_load_misaligned__prev = Core_datapath__io_control_exe_exc_load_misaligned;
  dat_dump<2>(f, Core_datapath__io_control_exe_exc_load_misaligned, 0x2240);
  goto K125;
L126:
  Core_control__io_exe_exc_load_misaligned__prev = Core_control__io_exe_exc_load_misaligned;
  dat_dump<2>(f, Core_control__io_exe_exc_load_misaligned, 0x2241);
  goto K126;
L127:
  Core_datapath_csr__io_priv_fault__prev = Core_datapath_csr__io_priv_fault;
  dat_dump<2>(f, Core_datapath_csr__io_priv_fault, 0x2242);
  goto K127;
L128:
  Core_datapath__io_control_exe_exc_priv_inst__prev = Core_datapath__io_control_exe_exc_priv_inst;
  dat_dump<2>(f, Core_datapath__io_control_exe_exc_priv_inst, 0x2243);
  goto K128;
L129:
  Core_control__io_exe_exc_priv_inst__prev = Core_control__io_exe_exc_priv_inst;
  dat_dump<2>(f, Core_control__io_exe_exc_priv_inst, 0x2244);
  goto K129;
L130:
  Core_control__exe_inst_exc__prev = Core_control__exe_inst_exc;
  dat_dump<2>(f, Core_control__exe_inst_exc, 0x2245);
  goto K130;
L131:
  Core_control__exe_exception__prev = Core_control__exe_exception;
  dat_dump<2>(f, Core_control__exe_exception, 0x2246);
  goto K131;
L132:
  Core_control__io_exe_exception__prev = Core_control__io_exe_exception;
  dat_dump<2>(f, Core_control__io_exe_exception, 0x2247);
  goto K132;
L133:
  Core_datapath__io_control_exe_exception__prev = Core_datapath__io_control_exe_exception;
  dat_dump<2>(f, Core_datapath__io_control_exe_exception, 0x2248);
  goto K133;
L134:
  Core_datapath_csr__io_exception__prev = Core_datapath_csr__io_exception;
  dat_dump<2>(f, Core_datapath_csr__io_exception, 0x2249);
  goto K134;
L135:
  Core_datapath_csr__reg_ie_7__prev = Core_datapath_csr__reg_ie_7;
  dat_dump<2>(f, Core_datapath_csr__reg_ie_7, 0x224a);
  goto K135;
L136:
  Core_datapath_csr__reg_msip_7__prev = Core_datapath_csr__reg_msip_7;
  dat_dump<2>(f, Core_datapath_csr__reg_msip_7, 0x224b);
  goto K136;
L137:
  Core_datapath_csr__reg_mtie_6__prev = Core_datapath_csr__reg_mtie_6;
  dat_dump<2>(f, Core_datapath_csr__reg_mtie_6, 0x224c);
  goto K137;
L138:
  Core_datapath_csr__reg_ie1_6__prev = Core_datapath_csr__reg_ie1_6;
  dat_dump<2>(f, Core_datapath_csr__reg_ie1_6, 0x224d);
  goto K138;
L139:
  Core_datapath_csr__reg_ie_6__prev = Core_datapath_csr__reg_ie_6;
  dat_dump<2>(f, Core_datapath_csr__reg_ie_6, 0x224e);
  goto K139;
L140:
  Core_datapath_csr__reg_msip_6__prev = Core_datapath_csr__reg_msip_6;
  dat_dump<2>(f, Core_datapath_csr__reg_msip_6, 0x224f);
  goto K140;
L141:
  Core_datapath_csr__reg_mtie_5__prev = Core_datapath_csr__reg_mtie_5;
  dat_dump<2>(f, Core_datapath_csr__reg_mtie_5, 0x2250);
  goto K141;
L142:
  Core_datapath_csr__reg_ie1_5__prev = Core_datapath_csr__reg_ie1_5;
  dat_dump<2>(f, Core_datapath_csr__reg_ie1_5, 0x2251);
  goto K142;
L143:
  Core_datapath_csr__reg_ie_5__prev = Core_datapath_csr__reg_ie_5;
  dat_dump<2>(f, Core_datapath_csr__reg_ie_5, 0x2252);
  goto K143;
L144:
  Core_datapath_csr__reg_msip_5__prev = Core_datapath_csr__reg_msip_5;
  dat_dump<2>(f, Core_datapath_csr__reg_msip_5, 0x2253);
  goto K144;
L145:
  Core_datapath_csr__reg_mtie_4__prev = Core_datapath_csr__reg_mtie_4;
  dat_dump<2>(f, Core_datapath_csr__reg_mtie_4, 0x2254);
  goto K145;
L146:
  Core_datapath_csr__reg_ie1_4__prev = Core_datapath_csr__reg_ie1_4;
  dat_dump<2>(f, Core_datapath_csr__reg_ie1_4, 0x2255);
  goto K146;
L147:
  Core_datapath_csr__reg_ie_4__prev = Core_datapath_csr__reg_ie_4;
  dat_dump<2>(f, Core_datapath_csr__reg_ie_4, 0x2256);
  goto K147;
L148:
  Core_datapath_csr__reg_msip_4__prev = Core_datapath_csr__reg_msip_4;
  dat_dump<2>(f, Core_datapath_csr__reg_msip_4, 0x2257);
  goto K148;
L149:
  Core_datapath_csr__reg_mtie_3__prev = Core_datapath_csr__reg_mtie_3;
  dat_dump<2>(f, Core_datapath_csr__reg_mtie_3, 0x2258);
  goto K149;
L150:
  Core_datapath_csr__reg_ie1_3__prev = Core_datapath_csr__reg_ie1_3;
  dat_dump<2>(f, Core_datapath_csr__reg_ie1_3, 0x2259);
  goto K150;
L151:
  Core_datapath_csr__reg_ie_3__prev = Core_datapath_csr__reg_ie_3;
  dat_dump<2>(f, Core_datapath_csr__reg_ie_3, 0x225a);
  goto K151;
L152:
  Core_datapath_csr__reg_msip_3__prev = Core_datapath_csr__reg_msip_3;
  dat_dump<2>(f, Core_datapath_csr__reg_msip_3, 0x225b);
  goto K152;
L153:
  Core_datapath_csr__reg_mtie_2__prev = Core_datapath_csr__reg_mtie_2;
  dat_dump<2>(f, Core_datapath_csr__reg_mtie_2, 0x225c);
  goto K153;
L154:
  Core_datapath_csr__reg_ie1_2__prev = Core_datapath_csr__reg_ie1_2;
  dat_dump<2>(f, Core_datapath_csr__reg_ie1_2, 0x225d);
  goto K154;
L155:
  Core_datapath_csr__reg_ie_2__prev = Core_datapath_csr__reg_ie_2;
  dat_dump<2>(f, Core_datapath_csr__reg_ie_2, 0x225e);
  goto K155;
L156:
  Core_datapath_csr__reg_msip_2__prev = Core_datapath_csr__reg_msip_2;
  dat_dump<2>(f, Core_datapath_csr__reg_msip_2, 0x225f);
  goto K156;
L157:
  Core_datapath_csr__reg_mtie_1__prev = Core_datapath_csr__reg_mtie_1;
  dat_dump<2>(f, Core_datapath_csr__reg_mtie_1, 0x2260);
  goto K157;
L158:
  Core_datapath_csr__reg_ie1_1__prev = Core_datapath_csr__reg_ie1_1;
  dat_dump<2>(f, Core_datapath_csr__reg_ie1_1, 0x2261);
  goto K158;
L159:
  Core_datapath_csr__reg_ie_1__prev = Core_datapath_csr__reg_ie_1;
  dat_dump<2>(f, Core_datapath_csr__reg_ie_1, 0x2262);
  goto K159;
L160:
  Core_datapath_csr__reg_mtie_0__prev = Core_datapath_csr__reg_mtie_0;
  dat_dump<2>(f, Core_datapath_csr__reg_mtie_0, 0x2263);
  goto K160;
L161:
  Core_datapath_csr__reg_ie1_0__prev = Core_datapath_csr__reg_ie1_0;
  dat_dump<2>(f, Core_datapath_csr__reg_ie1_0, 0x2264);
  goto K161;
L162:
  Core_datapath_csr__reg_ie_0__prev = Core_datapath_csr__reg_ie_0;
  dat_dump<2>(f, Core_datapath_csr__reg_ie_0, 0x2265);
  goto K162;
L163:
  Core__io_gpio_in_3__prev = Core__io_gpio_in_3;
  dat_dump<2>(f, Core__io_gpio_in_3, 0x2266);
  goto K163;
L164:
  Core_datapath__io_gpio_in_3__prev = Core_datapath__io_gpio_in_3;
  dat_dump<2>(f, Core_datapath__io_gpio_in_3, 0x2267);
  goto K164;
L165:
  Core_datapath_csr__io_gpio_in_3__prev = Core_datapath_csr__io_gpio_in_3;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_in_3, 0x2268);
  goto K165;
L166:
  Core_datapath_csr__reg_gpis_3__prev = Core_datapath_csr__reg_gpis_3;
  dat_dump<2>(f, Core_datapath_csr__reg_gpis_3, 0x2269);
  goto K166;
L167:
  Core__io_gpio_in_2__prev = Core__io_gpio_in_2;
  dat_dump<2>(f, Core__io_gpio_in_2, 0x226a);
  goto K167;
L168:
  Core_datapath__io_gpio_in_2__prev = Core_datapath__io_gpio_in_2;
  dat_dump<2>(f, Core_datapath__io_gpio_in_2, 0x226b);
  goto K168;
L169:
  Core_datapath_csr__io_gpio_in_2__prev = Core_datapath_csr__io_gpio_in_2;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_in_2, 0x226c);
  goto K169;
L170:
  Core_datapath_csr__reg_gpis_2__prev = Core_datapath_csr__reg_gpis_2;
  dat_dump<2>(f, Core_datapath_csr__reg_gpis_2, 0x226d);
  goto K170;
L171:
  Core__io_gpio_in_1__prev = Core__io_gpio_in_1;
  dat_dump<2>(f, Core__io_gpio_in_1, 0x226e);
  goto K171;
L172:
  Core_datapath__io_gpio_in_1__prev = Core_datapath__io_gpio_in_1;
  dat_dump<2>(f, Core_datapath__io_gpio_in_1, 0x226f);
  goto K172;
L173:
  Core_datapath_csr__io_gpio_in_1__prev = Core_datapath_csr__io_gpio_in_1;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_in_1, 0x2270);
  goto K173;
L174:
  Core_datapath_csr__reg_gpis_1__prev = Core_datapath_csr__reg_gpis_1;
  dat_dump<2>(f, Core_datapath_csr__reg_gpis_1, 0x2271);
  goto K174;
L175:
  Core__io_gpio_in_0__prev = Core__io_gpio_in_0;
  dat_dump<2>(f, Core__io_gpio_in_0, 0x2272);
  goto K175;
L176:
  Core_datapath__io_gpio_in_0__prev = Core_datapath__io_gpio_in_0;
  dat_dump<2>(f, Core_datapath__io_gpio_in_0, 0x2273);
  goto K176;
L177:
  Core_datapath_csr__io_gpio_in_0__prev = Core_datapath_csr__io_gpio_in_0;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_in_0, 0x2274);
  goto K177;
L178:
  Core_datapath_csr__reg_gpis_0__prev = Core_datapath_csr__reg_gpis_0;
  dat_dump<2>(f, Core_datapath_csr__reg_gpis_0, 0x2275);
  goto K178;
L179:
  Core_control__exe_valid__prev = Core_control__exe_valid;
  dat_dump<2>(f, Core_control__exe_valid, 0x2276);
  goto K179;
L180:
  Core_control__exe_sleep__prev = Core_control__exe_sleep;
  dat_dump<2>(f, Core_control__exe_sleep, 0x2277);
  goto K180;
L181:
  Core_control__io_exe_sleep__prev = Core_control__io_exe_sleep;
  dat_dump<2>(f, Core_control__io_exe_sleep, 0x2278);
  goto K181;
L182:
  Core_datapath__io_control_exe_sleep__prev = Core_datapath__io_control_exe_sleep;
  dat_dump<2>(f, Core_datapath__io_control_exe_sleep, 0x2279);
  goto K182;
L183:
  Core_datapath_csr__io_sleep__prev = Core_datapath_csr__io_sleep;
  dat_dump<2>(f, Core_datapath_csr__io_sleep, 0x227a);
  goto K183;
L184:
  Core_datapath_csr__sleep__prev = Core_datapath_csr__sleep;
  dat_dump<2>(f, Core_datapath_csr__sleep, 0x227b);
  goto K184;
L185:
  Core_datapath_csr__wake_1__prev = Core_datapath_csr__wake_1;
  dat_dump<2>(f, Core_datapath_csr__wake_1, 0x227c);
  goto K185;
L186:
  Core_datapath_csr__wake_7__prev = Core_datapath_csr__wake_7;
  dat_dump<2>(f, Core_datapath_csr__wake_7, 0x227d);
  goto K186;
L187:
  Core_datapath_csr__wake_6__prev = Core_datapath_csr__wake_6;
  dat_dump<2>(f, Core_datapath_csr__wake_6, 0x227e);
  goto K187;
L188:
  Core_datapath_csr__wake_5__prev = Core_datapath_csr__wake_5;
  dat_dump<2>(f, Core_datapath_csr__wake_5, 0x2321);
  goto K188;
L189:
  Core_datapath_csr__wake_4__prev = Core_datapath_csr__wake_4;
  dat_dump<2>(f, Core_datapath_csr__wake_4, 0x2322);
  goto K189;
L190:
  Core_datapath_csr__wake_3__prev = Core_datapath_csr__wake_3;
  dat_dump<2>(f, Core_datapath_csr__wake_3, 0x2323);
  goto K190;
L191:
  Core_control__exe_ee__prev = Core_control__exe_ee;
  dat_dump<2>(f, Core_control__exe_ee, 0x2324);
  goto K191;
L192:
  Core_control__io_exe_ee__prev = Core_control__io_exe_ee;
  dat_dump<2>(f, Core_control__io_exe_ee, 0x2325);
  goto K192;
L193:
  Core_datapath__io_control_exe_ee__prev = Core_datapath__io_control_exe_ee;
  dat_dump<2>(f, Core_datapath__io_control_exe_ee, 0x2326);
  goto K193;
L194:
  Core_datapath_csr__io_ee__prev = Core_datapath_csr__io_ee;
  dat_dump<2>(f, Core_datapath_csr__io_ee, 0x2327);
  goto K194;
L195:
  Core_control__exe_ie__prev = Core_control__exe_ie;
  dat_dump<2>(f, Core_control__exe_ie, 0x2328);
  goto K195;
L196:
  Core_control__io_exe_ie__prev = Core_control__io_exe_ie;
  dat_dump<2>(f, Core_control__io_exe_ie, 0x2329);
  goto K196;
L197:
  Core_datapath__io_control_exe_ie__prev = Core_datapath__io_control_exe_ie;
  dat_dump<2>(f, Core_datapath__io_control_exe_ie, 0x232a);
  goto K197;
L198:
  Core_datapath_csr__io_ie__prev = Core_datapath_csr__io_ie;
  dat_dump<2>(f, Core_datapath_csr__io_ie, 0x232b);
  goto K198;
L199:
  Core_datapath_csr__wake_2__prev = Core_datapath_csr__wake_2;
  dat_dump<2>(f, Core_datapath_csr__wake_2, 0x232c);
  goto K199;
L200:
  Core_datapath_csr__wake_0__prev = Core_datapath_csr__wake_0;
  dat_dump<2>(f, Core_datapath_csr__wake_0, 0x232d);
  goto K200;
L201:
  Core_datapath_csr__reg_msip_0__prev = Core_datapath_csr__reg_msip_0;
  dat_dump<2>(f, Core_datapath_csr__reg_msip_0, 0x232e);
  goto K201;
L202:
  Core_datapath_loadstore__io_imem_r_enable__prev = Core_datapath_loadstore__io_imem_r_enable;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_r_enable, 0x232f);
  goto K202;
L203:
  Core_datapath_loadstore__dmem_op_reg__prev = Core_datapath_loadstore__dmem_op_reg;
  dat_dump<2>(f, Core_datapath_loadstore__dmem_op_reg, 0x2330);
  goto K203;
L204:
  Core_datapath_loadstore__imem_op_reg__prev = Core_datapath_loadstore__imem_op_reg;
  dat_dump<2>(f, Core_datapath_loadstore__imem_op_reg, 0x2331);
  goto K204;
L205:
  Core_control__mem_rd_write__prev = Core_control__mem_rd_write;
  dat_dump<2>(f, Core_control__mem_rd_write, 0x2332);
  goto K205;
L206:
  Core_control__io_mem_rd_write__prev = Core_control__io_mem_rd_write;
  dat_dump<2>(f, Core_control__io_mem_rd_write, 0x2333);
  goto K206;
L207:
  Core_datapath__io_control_mem_rd_write__prev = Core_datapath__io_control_mem_rd_write;
  dat_dump<2>(f, Core_datapath__io_control_mem_rd_write, 0x2334);
  goto K207;
L208:
  Core_datapath_regfile__io_rd_enable__prev = Core_datapath_regfile__io_rd_enable;
  dat_dump<2>(f, Core_datapath_regfile__io_rd_enable, 0x2335);
  goto K208;
L209:
  Core_control__reset__prev = Core_control__reset;
  dat_dump<2>(f, Core_control__reset, 0x2336);
  goto K209;
L210:
  Core_control_scheduler__reset__prev = Core_control_scheduler__reset;
  dat_dump<2>(f, Core_control_scheduler__reset, 0x2337);
  goto K210;
L211:
  Core_control_scheduler__R273__prev = Core_control_scheduler__R273;
  dat_dump<2>(f, Core_control_scheduler__R273, 0x2338);
  goto K211;
L212:
  Core_control_scheduler__R248__prev = Core_control_scheduler__R248;
  dat_dump<2>(f, Core_control_scheduler__R248, 0x2339);
  goto K212;
L213:
  Core_control_scheduler__R233__prev = Core_control_scheduler__R233;
  dat_dump<2>(f, Core_control_scheduler__R233, 0x233a);
  goto K213;
L214:
  Core_control_scheduler__R227__prev = Core_control_scheduler__R227;
  dat_dump<2>(f, Core_control_scheduler__R227, 0x233b);
  goto K214;
L215:
  Core_control_scheduler__R222__prev = Core_control_scheduler__R222;
  dat_dump<2>(f, Core_control_scheduler__R222, 0x233c);
  goto K215;
L216:
  Core_control_scheduler__R210__prev = Core_control_scheduler__R210;
  dat_dump<2>(f, Core_control_scheduler__R210, 0x233d);
  goto K216;
L217:
  Core_control_scheduler__R196__prev = Core_control_scheduler__R196;
  dat_dump<2>(f, Core_control_scheduler__R196, 0x233e);
  goto K217;
L218:
  Core_control_scheduler__R112__prev = Core_control_scheduler__R112;
  dat_dump<2>(f, Core_control_scheduler__R112, 0x233f);
  goto K218;
L219:
  Core_control_scheduler__R87__prev = Core_control_scheduler__R87;
  dat_dump<2>(f, Core_control_scheduler__R87, 0x2340);
  goto K219;
L220:
  Core_control_scheduler__R72__prev = Core_control_scheduler__R72;
  dat_dump<2>(f, Core_control_scheduler__R72, 0x2341);
  goto K220;
L221:
  Core_control_scheduler__R66__prev = Core_control_scheduler__R66;
  dat_dump<2>(f, Core_control_scheduler__R66, 0x2342);
  goto K221;
L222:
  Core_control_scheduler__R61__prev = Core_control_scheduler__R61;
  dat_dump<2>(f, Core_control_scheduler__R61, 0x2343);
  goto K222;
L223:
  Core_control_scheduler__R49__prev = Core_control_scheduler__R49;
  dat_dump<2>(f, Core_control_scheduler__R49, 0x2344);
  goto K223;
L224:
  Core_control_scheduler__R35__prev = Core_control_scheduler__R35;
  dat_dump<2>(f, Core_control_scheduler__R35, 0x2345);
  goto K224;
L225:
  Core_control__mem_reg_exception__prev = Core_control__mem_reg_exception;
  dat_dump<2>(f, Core_control__mem_reg_exception, 0x2346);
  goto K225;
L226:
  Core_control__wb_reg_rd_write__prev = Core_control__wb_reg_rd_write;
  dat_dump<2>(f, Core_control__wb_reg_rd_write, 0x2347);
  goto K226;
L227:
  Core_control__exe_reg_load__prev = Core_control__exe_reg_load;
  dat_dump<2>(f, Core_control__exe_reg_load, 0x2348);
  goto K227;
L228:
  Core_control__dec_store__prev = Core_control__dec_store;
  dat_dump<2>(f, Core_control__dec_store, 0x2349);
  goto K228;
L229:
  Core_control__exe_reg_store__prev = Core_control__exe_reg_store;
  dat_dump<2>(f, Core_control__exe_reg_store, 0x234a);
  goto K229;
L230:
  Core_control__dec_csr__prev = Core_control__dec_csr;
  dat_dump<2>(f, Core_control__dec_csr, 0x234b);
  goto K230;
L231:
  Core_control__exe_reg_csr_write__prev = Core_control__exe_reg_csr_write;
  dat_dump<2>(f, Core_control__exe_reg_csr_write, 0x234c);
  goto K231;
L232:
  Core_control__dec_reg_cause__prev = Core_control__dec_reg_cause;
  dat_dump<2>(f, Core_control__dec_reg_cause, 0x234d);
  goto K232;
L233:
  Core_control__dec_scall__prev = Core_control__dec_scall;
  dat_dump<2>(f, Core_control__dec_scall, 0x234e);
  goto K233;
L234:
  Core_control__dec_ie__prev = Core_control__dec_ie;
  dat_dump<2>(f, Core_control__dec_ie, 0x234f);
  goto K234;
L235:
  Core_control__dec_du__prev = Core_control__dec_du;
  dat_dump<2>(f, Core_control__dec_du, 0x2350);
  goto K235;
L236:
  Core_control__dec_legal__prev = Core_control__dec_legal;
  dat_dump<2>(f, Core_control__dec_legal, 0x2351);
  goto K236;
L237:
  Core_control__R238__prev = Core_control__R238;
  dat_dump<2>(f, Core_control__R238, 0x2352);
  goto K237;
L238:
  Core_control__R231__prev = Core_control__R231;
  dat_dump<2>(f, Core_control__R231, 0x2353);
  goto K238;
L239:
  Core_control__exe_reg_sret__prev = Core_control__exe_reg_sret;
  dat_dump<2>(f, Core_control__exe_reg_sret, 0x2354);
  goto K239;
L240:
  Core_control__dec_rd_en__prev = Core_control__dec_rd_en;
  dat_dump<2>(f, Core_control__dec_rd_en, 0x2355);
  goto K240;
L241:
  Core_control__dec_rd_write__prev = Core_control__dec_rd_write;
  dat_dump<2>(f, Core_control__dec_rd_write, 0x2356);
  goto K241;
L242:
  Core_control__exe_reg_rd_write__prev = Core_control__exe_reg_rd_write;
  dat_dump<2>(f, Core_control__exe_reg_rd_write, 0x2357);
  goto K242;
L243:
  Core_control__mem_reg_rd_write__prev = Core_control__mem_reg_rd_write;
  dat_dump<2>(f, Core_control__mem_reg_rd_write, 0x2358);
  goto K243;
L244:
  Core_control__mem_reg_valid__prev = Core_control__mem_reg_valid;
  dat_dump<2>(f, Core_control__mem_reg_valid, 0x2359);
  goto K244;
L245:
  Core_control_scheduler__io_valid__prev = Core_control_scheduler__io_valid;
  dat_dump<2>(f, Core_control_scheduler__io_valid, 0x235a);
  goto K245;
L246:
  Core_control__R206__prev = Core_control__R206;
  dat_dump<2>(f, Core_control__R206, 0x235b);
  goto K246;
L247:
  Core_control__if_reg_valid__prev = Core_control__if_reg_valid;
  dat_dump<2>(f, Core_control__if_reg_valid, 0x235c);
  goto K247;
L248:
  Core_control__exe_flush__prev = Core_control__exe_flush;
  dat_dump<2>(f, Core_control__exe_flush, 0x235d);
  goto K248;
L249:
  Core_control__if_valid__prev = Core_control__if_valid;
  dat_dump<2>(f, Core_control__if_valid, 0x235e);
  goto K249;
L250:
  Core_control__dec_reg_valid__prev = Core_control__dec_reg_valid;
  dat_dump<2>(f, Core_control__dec_reg_valid, 0x235f);
  goto K250;
L251:
  Core_control__R84__prev = Core_control__R84;
  dat_dump<2>(f, Core_control__R84, 0x2360);
  goto K251;
L252:
  Core_control__dec_jump__prev = Core_control__dec_jump;
  dat_dump<2>(f, Core_control__dec_jump, 0x2361);
  goto K252;
L253:
  Core_control__exe_reg_jump__prev = Core_control__exe_reg_jump;
  dat_dump<2>(f, Core_control__exe_reg_jump, 0x2362);
  goto K253;
L254:
  Core_control__dec_branch__prev = Core_control__dec_branch;
  dat_dump<2>(f, Core_control__dec_branch, 0x2363);
  goto K254;
L255:
  Core_control__exe_reg_branch__prev = Core_control__exe_reg_branch;
  dat_dump<2>(f, Core_control__exe_reg_branch, 0x2364);
  goto K255;
L256:
  Core_control__dec_valid__prev = Core_control__dec_valid;
  dat_dump<2>(f, Core_control__dec_valid, 0x2365);
  goto K256;
L257:
  Core_control__exe_reg_valid__prev = Core_control__exe_reg_valid;
  dat_dump<2>(f, Core_control__exe_reg_valid, 0x2366);
  goto K257;
L258:
  Core_datapath__io_control_if_exc_misaligned__prev = Core_datapath__io_control_if_exc_misaligned;
  dat_dump<2>(f, Core_datapath__io_control_if_exc_misaligned, 0x2367);
  goto K258;
L259:
  Core_control__io_if_exc_misaligned__prev = Core_control__io_if_exc_misaligned;
  dat_dump<2>(f, Core_control__io_if_exc_misaligned, 0x2368);
  goto K259;
L260:
  Core_control__dec_reg_exc__prev = Core_control__dec_reg_exc;
  dat_dump<2>(f, Core_control__dec_reg_exc, 0x2369);
  goto K260;
L261:
  Core_control__dec_exc__prev = Core_control__dec_exc;
  dat_dump<2>(f, Core_control__dec_exc, 0x236a);
  goto K261;
L262:
  Core_control__exe_reg_exc__prev = Core_control__exe_reg_exc;
  dat_dump<2>(f, Core_control__exe_reg_exc, 0x236b);
  goto K262;
L263:
  Core_imem__io_bus_ready__prev = Core_imem__io_bus_ready;
  dat_dump<2>(f, Core_imem__io_bus_ready, 0x236c);
  goto K263;
L264:
  Core__io_imem_ready__prev = Core__io_imem_ready;
  dat_dump<2>(f, Core__io_imem_ready, 0x236d);
  goto K264;
L265:
  Core_datapath_loadstore__io_bus_enable__prev = Core_datapath_loadstore__io_bus_enable;
  dat_dump<2>(f, Core_datapath_loadstore__io_bus_enable, 0x236e);
  goto K265;
L266:
  Core_datapath__io_bus_enable__prev = Core_datapath__io_bus_enable;
  dat_dump<2>(f, Core_datapath__io_bus_enable, 0x236f);
  goto K266;
L267:
  Core__io_bus_enable__prev = Core__io_bus_enable;
  dat_dump<2>(f, Core__io_bus_enable, 0x2370);
  goto K267;
L268:
  Core_datapath_loadstore__io_bus_write__prev = Core_datapath_loadstore__io_bus_write;
  dat_dump<2>(f, Core_datapath_loadstore__io_bus_write, 0x2371);
  goto K268;
L269:
  Core_datapath__io_bus_write__prev = Core_datapath__io_bus_write;
  dat_dump<2>(f, Core_datapath__io_bus_write, 0x2372);
  goto K269;
L270:
  Core__io_bus_write__prev = Core__io_bus_write;
  dat_dump<2>(f, Core__io_bus_write, 0x2373);
  goto K270;
L271:
  Core__io_dmem_byte_write_0__prev = Core__io_dmem_byte_write_0;
  dat_dump<2>(f, Core__io_dmem_byte_write_0, 0x2374);
  goto K271;
L272:
  Core__io_dmem_byte_write_1__prev = Core__io_dmem_byte_write_1;
  dat_dump<2>(f, Core__io_dmem_byte_write_1, 0x2375);
  goto K272;
L273:
  Core__io_dmem_byte_write_2__prev = Core__io_dmem_byte_write_2;
  dat_dump<2>(f, Core__io_dmem_byte_write_2, 0x2376);
  goto K273;
L274:
  Core__io_dmem_byte_write_3__prev = Core__io_dmem_byte_write_3;
  dat_dump<2>(f, Core__io_dmem_byte_write_3, 0x2377);
  goto K274;
L275:
  Core__io_dmem_enable__prev = Core__io_dmem_enable;
  dat_dump<2>(f, Core__io_dmem_enable, 0x2378);
  goto K275;
L276:
  Core__io_imem_write__prev = Core__io_imem_write;
  dat_dump<2>(f, Core__io_imem_write, 0x2379);
  goto K276;
L277:
  Core__io_imem_enable__prev = Core__io_imem_enable;
  dat_dump<2>(f, Core__io_imem_enable, 0x237a);
  goto K277;
L278:
  Core_control__dec_mem_rd_data_sel__prev = Core_control__dec_mem_rd_data_sel;
  dat_dump<2>(f, Core_control__dec_mem_rd_data_sel, 0x237b);
  goto K278;
L279:
  Core_control__next_pc_sel_0__prev = Core_control__next_pc_sel_0;
  dat_dump<2>(f, Core_control__next_pc_sel_0, 0x237c);
  goto K279;
L280:
  Core_control__io_next_pc_sel_0__prev = Core_control__io_next_pc_sel_0;
  dat_dump<2>(f, Core_control__io_next_pc_sel_0, 0x237d);
  goto K280;
L281:
  Core_datapath__io_control_next_pc_sel_0__prev = Core_datapath__io_control_next_pc_sel_0;
  dat_dump<2>(f, Core_datapath__io_control_next_pc_sel_0, 0x237e);
  goto K281;
L282:
  Core_control__next_pc_sel_1__prev = Core_control__next_pc_sel_1;
  dat_dump<2>(f, Core_control__next_pc_sel_1, 0x2421);
  goto K282;
L283:
  Core_control__io_next_pc_sel_1__prev = Core_control__io_next_pc_sel_1;
  dat_dump<2>(f, Core_control__io_next_pc_sel_1, 0x2422);
  goto K283;
L284:
  Core_datapath__io_control_next_pc_sel_1__prev = Core_datapath__io_control_next_pc_sel_1;
  dat_dump<2>(f, Core_datapath__io_control_next_pc_sel_1, 0x2423);
  goto K284;
L285:
  Core_control__next_pc_sel_2__prev = Core_control__next_pc_sel_2;
  dat_dump<2>(f, Core_control__next_pc_sel_2, 0x2424);
  goto K285;
L286:
  Core_control__io_next_pc_sel_2__prev = Core_control__io_next_pc_sel_2;
  dat_dump<2>(f, Core_control__io_next_pc_sel_2, 0x2425);
  goto K286;
L287:
  Core_datapath__io_control_next_pc_sel_2__prev = Core_datapath__io_control_next_pc_sel_2;
  dat_dump<2>(f, Core_datapath__io_control_next_pc_sel_2, 0x2426);
  goto K287;
L288:
  Core_control__next_pc_sel_3__prev = Core_control__next_pc_sel_3;
  dat_dump<2>(f, Core_control__next_pc_sel_3, 0x2427);
  goto K288;
L289:
  Core_control__io_next_pc_sel_3__prev = Core_control__io_next_pc_sel_3;
  dat_dump<2>(f, Core_control__io_next_pc_sel_3, 0x2428);
  goto K289;
L290:
  Core_datapath__io_control_next_pc_sel_3__prev = Core_datapath__io_control_next_pc_sel_3;
  dat_dump<2>(f, Core_datapath__io_control_next_pc_sel_3, 0x2429);
  goto K290;
L291:
  Core_control__next_pc_sel_4__prev = Core_control__next_pc_sel_4;
  dat_dump<2>(f, Core_control__next_pc_sel_4, 0x242a);
  goto K291;
L292:
  Core_control__io_next_pc_sel_4__prev = Core_control__io_next_pc_sel_4;
  dat_dump<2>(f, Core_control__io_next_pc_sel_4, 0x242b);
  goto K292;
L293:
  Core_datapath__io_control_next_pc_sel_4__prev = Core_datapath__io_control_next_pc_sel_4;
  dat_dump<2>(f, Core_datapath__io_control_next_pc_sel_4, 0x242c);
  goto K293;
L294:
  Core_control__next_pc_sel_5__prev = Core_control__next_pc_sel_5;
  dat_dump<2>(f, Core_control__next_pc_sel_5, 0x242d);
  goto K294;
L295:
  Core_control__io_next_pc_sel_5__prev = Core_control__io_next_pc_sel_5;
  dat_dump<2>(f, Core_control__io_next_pc_sel_5, 0x242e);
  goto K295;
L296:
  Core_datapath__io_control_next_pc_sel_5__prev = Core_datapath__io_control_next_pc_sel_5;
  dat_dump<2>(f, Core_datapath__io_control_next_pc_sel_5, 0x242f);
  goto K296;
L297:
  Core_control__next_pc_sel_6__prev = Core_control__next_pc_sel_6;
  dat_dump<2>(f, Core_control__next_pc_sel_6, 0x2430);
  goto K297;
L298:
  Core_control__io_next_pc_sel_6__prev = Core_control__io_next_pc_sel_6;
  dat_dump<2>(f, Core_control__io_next_pc_sel_6, 0x2431);
  goto K298;
L299:
  Core_datapath__io_control_next_pc_sel_6__prev = Core_datapath__io_control_next_pc_sel_6;
  dat_dump<2>(f, Core_datapath__io_control_next_pc_sel_6, 0x2432);
  goto K299;
L300:
  Core_control__next_pc_sel_7__prev = Core_control__next_pc_sel_7;
  dat_dump<2>(f, Core_control__next_pc_sel_7, 0x2433);
  goto K300;
L301:
  Core_control__io_next_pc_sel_7__prev = Core_control__io_next_pc_sel_7;
  dat_dump<2>(f, Core_control__io_next_pc_sel_7, 0x2434);
  goto K301;
L302:
  Core_datapath__io_control_next_pc_sel_7__prev = Core_datapath__io_control_next_pc_sel_7;
  dat_dump<2>(f, Core_datapath__io_control_next_pc_sel_7, 0x2435);
  goto K302;
L303:
  Core_control__io_exe_csr_type__prev = Core_control__io_exe_csr_type;
  dat_dump<2>(f, Core_control__io_exe_csr_type, 0x2436);
  goto K303;
L304:
  Core_datapath__io_control_exe_csr_type__prev = Core_datapath__io_control_exe_csr_type;
  dat_dump<2>(f, Core_datapath__io_control_exe_csr_type, 0x2437);
  goto K304;
L305:
  Core_datapath_csr__io_rw_csr_type__prev = Core_datapath_csr__io_rw_csr_type;
  dat_dump<2>(f, Core_datapath_csr__io_rw_csr_type, 0x2438);
  goto K305;
L306:
  Core_datapath_csr__reg_prv1_7__prev = Core_datapath_csr__reg_prv1_7;
  dat_dump<2>(f, Core_datapath_csr__reg_prv1_7, 0x2439);
  goto K306;
L307:
  Core_datapath_csr__reg_prv_7__prev = Core_datapath_csr__reg_prv_7;
  dat_dump<2>(f, Core_datapath_csr__reg_prv_7, 0x243a);
  goto K307;
L308:
  Core_datapath_csr__reg_prv1_6__prev = Core_datapath_csr__reg_prv1_6;
  dat_dump<2>(f, Core_datapath_csr__reg_prv1_6, 0x243b);
  goto K308;
L309:
  Core_datapath_csr__reg_prv_6__prev = Core_datapath_csr__reg_prv_6;
  dat_dump<2>(f, Core_datapath_csr__reg_prv_6, 0x243c);
  goto K309;
L310:
  Core_datapath_csr__reg_prv1_5__prev = Core_datapath_csr__reg_prv1_5;
  dat_dump<2>(f, Core_datapath_csr__reg_prv1_5, 0x243d);
  goto K310;
L311:
  Core_datapath_csr__reg_prv_5__prev = Core_datapath_csr__reg_prv_5;
  dat_dump<2>(f, Core_datapath_csr__reg_prv_5, 0x243e);
  goto K311;
L312:
  Core_datapath_csr__reg_prv1_4__prev = Core_datapath_csr__reg_prv1_4;
  dat_dump<2>(f, Core_datapath_csr__reg_prv1_4, 0x243f);
  goto K312;
L313:
  Core_datapath_csr__reg_prv_4__prev = Core_datapath_csr__reg_prv_4;
  dat_dump<2>(f, Core_datapath_csr__reg_prv_4, 0x2440);
  goto K313;
L314:
  Core_datapath_csr__reg_prv1_3__prev = Core_datapath_csr__reg_prv1_3;
  dat_dump<2>(f, Core_datapath_csr__reg_prv1_3, 0x2441);
  goto K314;
L315:
  Core_datapath_csr__reg_prv_3__prev = Core_datapath_csr__reg_prv_3;
  dat_dump<2>(f, Core_datapath_csr__reg_prv_3, 0x2442);
  goto K315;
L316:
  Core_datapath_csr__reg_prv1_2__prev = Core_datapath_csr__reg_prv1_2;
  dat_dump<2>(f, Core_datapath_csr__reg_prv1_2, 0x2443);
  goto K316;
L317:
  Core_datapath_csr__reg_prv_2__prev = Core_datapath_csr__reg_prv_2;
  dat_dump<2>(f, Core_datapath_csr__reg_prv_2, 0x2444);
  goto K317;
L318:
  Core_datapath_csr__reg_prv1_1__prev = Core_datapath_csr__reg_prv1_1;
  dat_dump<2>(f, Core_datapath_csr__reg_prv1_1, 0x2445);
  goto K318;
L319:
  Core_datapath_csr__reg_prv_1__prev = Core_datapath_csr__reg_prv_1;
  dat_dump<2>(f, Core_datapath_csr__reg_prv_1, 0x2446);
  goto K319;
L320:
  Core_datapath_csr__reg_prv1_0__prev = Core_datapath_csr__reg_prv1_0;
  dat_dump<2>(f, Core_datapath_csr__reg_prv1_0, 0x2447);
  goto K320;
L321:
  Core_datapath_csr__reg_prv_0__prev = Core_datapath_csr__reg_prv_0;
  dat_dump<2>(f, Core_datapath_csr__reg_prv_0, 0x2448);
  goto K321;
L322:
  Core_datapath_csr__reg_gpos_3__prev = Core_datapath_csr__reg_gpos_3;
  dat_dump<2>(f, Core_datapath_csr__reg_gpos_3, 0x2449);
  goto K322;
L323:
  Core_datapath_csr__reg_gpos_2__prev = Core_datapath_csr__reg_gpos_2;
  dat_dump<2>(f, Core_datapath_csr__reg_gpos_2, 0x244a);
  goto K323;
L324:
  Core_datapath_csr__reg_gpos_1__prev = Core_datapath_csr__reg_gpos_1;
  dat_dump<2>(f, Core_datapath_csr__reg_gpos_1, 0x244b);
  goto K324;
L325:
  Core_datapath_csr__reg_gpos_0__prev = Core_datapath_csr__reg_gpos_0;
  dat_dump<2>(f, Core_datapath_csr__reg_gpos_0, 0x244c);
  goto K325;
L326:
  Core_datapath_csr__reg_tmodes_1__prev = Core_datapath_csr__reg_tmodes_1;
  dat_dump<2>(f, Core_datapath_csr__reg_tmodes_1, 0x244d);
  goto K326;
L327:
  Core_datapath_csr__reg_tmodes_7__prev = Core_datapath_csr__reg_tmodes_7;
  dat_dump<2>(f, Core_datapath_csr__reg_tmodes_7, 0x244e);
  goto K327;
L328:
  Core_datapath_csr__reg_tmodes_6__prev = Core_datapath_csr__reg_tmodes_6;
  dat_dump<2>(f, Core_datapath_csr__reg_tmodes_6, 0x244f);
  goto K328;
L329:
  Core_datapath_csr__reg_tmodes_5__prev = Core_datapath_csr__reg_tmodes_5;
  dat_dump<2>(f, Core_datapath_csr__reg_tmodes_5, 0x2450);
  goto K329;
L330:
  Core_datapath_csr__reg_tmodes_4__prev = Core_datapath_csr__reg_tmodes_4;
  dat_dump<2>(f, Core_datapath_csr__reg_tmodes_4, 0x2451);
  goto K330;
L331:
  Core_datapath_csr__reg_tmodes_3__prev = Core_datapath_csr__reg_tmodes_3;
  dat_dump<2>(f, Core_datapath_csr__reg_tmodes_3, 0x2452);
  goto K331;
L332:
  Core_datapath_csr__reg_timer_7__prev = Core_datapath_csr__reg_timer_7;
  dat_dump<2>(f, Core_datapath_csr__reg_timer_7, 0x2453);
  goto K332;
L333:
  Core_datapath_csr__reg_timer_6__prev = Core_datapath_csr__reg_timer_6;
  dat_dump<2>(f, Core_datapath_csr__reg_timer_6, 0x2454);
  goto K333;
L334:
  Core_datapath_csr__reg_timer_5__prev = Core_datapath_csr__reg_timer_5;
  dat_dump<2>(f, Core_datapath_csr__reg_timer_5, 0x2455);
  goto K334;
L335:
  Core_datapath_csr__reg_timer_4__prev = Core_datapath_csr__reg_timer_4;
  dat_dump<2>(f, Core_datapath_csr__reg_timer_4, 0x2456);
  goto K335;
L336:
  Core_datapath_csr__reg_timer_3__prev = Core_datapath_csr__reg_timer_3;
  dat_dump<2>(f, Core_datapath_csr__reg_timer_3, 0x2457);
  goto K336;
L337:
  Core_datapath_csr__reg_timer_1__prev = Core_datapath_csr__reg_timer_1;
  dat_dump<2>(f, Core_datapath_csr__reg_timer_1, 0x2458);
  goto K337;
L338:
  Core_datapath_csr__reg_timer_0__prev = Core_datapath_csr__reg_timer_0;
  dat_dump<2>(f, Core_datapath_csr__reg_timer_0, 0x2459);
  goto K338;
L339:
  Core_datapath_csr__reg_timer_2__prev = Core_datapath_csr__reg_timer_2;
  dat_dump<2>(f, Core_datapath_csr__reg_timer_2, 0x245a);
  goto K339;
L340:
  Core_datapath_csr__reg_tmodes_2__prev = Core_datapath_csr__reg_tmodes_2;
  dat_dump<2>(f, Core_datapath_csr__reg_tmodes_2, 0x245b);
  goto K340;
L341:
  Core_datapath_csr__reg_tmodes_0__prev = Core_datapath_csr__reg_tmodes_0;
  dat_dump<2>(f, Core_datapath_csr__reg_tmodes_0, 0x245c);
  goto K341;
L342:
  Core_datapath_loadstore__addr_byte_reg__prev = Core_datapath_loadstore__addr_byte_reg;
  dat_dump<2>(f, Core_datapath_loadstore__addr_byte_reg, 0x245d);
  goto K342;
L343:
  Core_control__io_exe_mul_type__prev = Core_control__io_exe_mul_type;
  dat_dump<2>(f, Core_control__io_exe_mul_type, 0x245e);
  goto K343;
L344:
  Core_datapath__io_control_exe_mul_type__prev = Core_datapath__io_control_exe_mul_type;
  dat_dump<2>(f, Core_datapath__io_control_exe_mul_type, 0x245f);
  goto K344;
L345:
  Core_control__io_mem_rd_data_sel__prev = Core_control__io_mem_rd_data_sel;
  dat_dump<2>(f, Core_control__io_mem_rd_data_sel, 0x2460);
  goto K345;
L346:
  Core_datapath__io_control_mem_rd_data_sel__prev = Core_datapath__io_control_mem_rd_data_sel;
  dat_dump<2>(f, Core_datapath__io_control_mem_rd_data_sel, 0x2461);
  goto K346;
L347:
  Core_control__dec_rs1_sel__prev = Core_control__dec_rs1_sel;
  dat_dump<2>(f, Core_control__dec_rs1_sel, 0x2462);
  goto K347;
L348:
  Core_control__io_dec_rs1_sel__prev = Core_control__io_dec_rs1_sel;
  dat_dump<2>(f, Core_control__io_dec_rs1_sel, 0x2463);
  goto K348;
L349:
  Core_datapath__io_control_dec_rs1_sel__prev = Core_datapath__io_control_dec_rs1_sel;
  dat_dump<2>(f, Core_datapath__io_control_dec_rs1_sel, 0x2464);
  goto K349;
L350:
  Core_control__io_exe_rd_data_sel__prev = Core_control__io_exe_rd_data_sel;
  dat_dump<2>(f, Core_control__io_exe_rd_data_sel, 0x2465);
  goto K350;
L351:
  Core_datapath__io_control_exe_rd_data_sel__prev = Core_datapath__io_control_exe_rd_data_sel;
  dat_dump<2>(f, Core_datapath__io_control_exe_rd_data_sel, 0x2466);
  goto K351;
L352:
  Core_control__dec_rs2_sel__prev = Core_control__dec_rs2_sel;
  dat_dump<2>(f, Core_control__dec_rs2_sel, 0x2467);
  goto K352;
L353:
  Core_control__io_dec_rs2_sel__prev = Core_control__io_dec_rs2_sel;
  dat_dump<2>(f, Core_control__io_dec_rs2_sel, 0x2468);
  goto K353;
L354:
  Core_datapath__io_control_dec_rs2_sel__prev = Core_datapath__io_control_dec_rs2_sel;
  dat_dump<2>(f, Core_datapath__io_control_dec_rs2_sel, 0x2469);
  goto K354;
L355:
  Core_control__dec_op2_sel__prev = Core_control__dec_op2_sel;
  dat_dump<2>(f, Core_control__dec_op2_sel, 0x246a);
  goto K355;
L356:
  Core_control__io_dec_op2_sel__prev = Core_control__io_dec_op2_sel;
  dat_dump<2>(f, Core_control__io_dec_op2_sel, 0x246b);
  goto K356;
L357:
  Core_datapath__io_control_dec_op2_sel__prev = Core_datapath__io_control_dec_op2_sel;
  dat_dump<2>(f, Core_datapath__io_control_dec_op2_sel, 0x246c);
  goto K357;
L358:
  Core_control__dec_op1_sel__prev = Core_control__dec_op1_sel;
  dat_dump<2>(f, Core_control__dec_op1_sel, 0x246d);
  goto K358;
L359:
  Core_control__io_dec_op1_sel__prev = Core_control__io_dec_op1_sel;
  dat_dump<2>(f, Core_control__io_dec_op1_sel, 0x246e);
  goto K359;
L360:
  Core_datapath__io_control_dec_op1_sel__prev = Core_datapath__io_control_dec_op1_sel;
  dat_dump<2>(f, Core_datapath__io_control_dec_op1_sel, 0x246f);
  goto K360;
L361:
  Core_datapath_csr__io_tmodes_5__prev = Core_datapath_csr__io_tmodes_5;
  dat_dump<2>(f, Core_datapath_csr__io_tmodes_5, 0x2470);
  goto K361;
L362:
  Core_datapath__io_control_csr_tmodes_5__prev = Core_datapath__io_control_csr_tmodes_5;
  dat_dump<2>(f, Core_datapath__io_control_csr_tmodes_5, 0x2471);
  goto K362;
L363:
  Core_control__io_csr_tmodes_5__prev = Core_control__io_csr_tmodes_5;
  dat_dump<2>(f, Core_control__io_csr_tmodes_5, 0x2472);
  goto K363;
L364:
  Core_control_scheduler__io_thread_modes_5__prev = Core_control_scheduler__io_thread_modes_5;
  dat_dump<2>(f, Core_control_scheduler__io_thread_modes_5, 0x2473);
  goto K364;
L365:
  Core_datapath_csr__io_tmodes_4__prev = Core_datapath_csr__io_tmodes_4;
  dat_dump<2>(f, Core_datapath_csr__io_tmodes_4, 0x2474);
  goto K365;
L366:
  Core_datapath__io_control_csr_tmodes_4__prev = Core_datapath__io_control_csr_tmodes_4;
  dat_dump<2>(f, Core_datapath__io_control_csr_tmodes_4, 0x2475);
  goto K366;
L367:
  Core_control__io_csr_tmodes_4__prev = Core_control__io_csr_tmodes_4;
  dat_dump<2>(f, Core_control__io_csr_tmodes_4, 0x2476);
  goto K367;
L368:
  Core_control_scheduler__io_thread_modes_4__prev = Core_control_scheduler__io_thread_modes_4;
  dat_dump<2>(f, Core_control_scheduler__io_thread_modes_4, 0x2477);
  goto K368;
L369:
  Core_datapath_csr__io_tmodes_3__prev = Core_datapath_csr__io_tmodes_3;
  dat_dump<2>(f, Core_datapath_csr__io_tmodes_3, 0x2478);
  goto K369;
L370:
  Core_datapath__io_control_csr_tmodes_3__prev = Core_datapath__io_control_csr_tmodes_3;
  dat_dump<2>(f, Core_datapath__io_control_csr_tmodes_3, 0x2479);
  goto K370;
L371:
  Core_control__io_csr_tmodes_3__prev = Core_control__io_csr_tmodes_3;
  dat_dump<2>(f, Core_control__io_csr_tmodes_3, 0x247a);
  goto K371;
L372:
  Core_control_scheduler__io_thread_modes_3__prev = Core_control_scheduler__io_thread_modes_3;
  dat_dump<2>(f, Core_control_scheduler__io_thread_modes_3, 0x247b);
  goto K372;
L373:
  Core_datapath_csr__io_tmodes_2__prev = Core_datapath_csr__io_tmodes_2;
  dat_dump<2>(f, Core_datapath_csr__io_tmodes_2, 0x247c);
  goto K373;
L374:
  Core_datapath__io_control_csr_tmodes_2__prev = Core_datapath__io_control_csr_tmodes_2;
  dat_dump<2>(f, Core_datapath__io_control_csr_tmodes_2, 0x247d);
  goto K374;
L375:
  Core_control__io_csr_tmodes_2__prev = Core_control__io_csr_tmodes_2;
  dat_dump<2>(f, Core_control__io_csr_tmodes_2, 0x247e);
  goto K375;
L376:
  Core_control_scheduler__io_thread_modes_2__prev = Core_control_scheduler__io_thread_modes_2;
  dat_dump<2>(f, Core_control_scheduler__io_thread_modes_2, 0x2521);
  goto K376;
L377:
  Core_datapath_csr__io_tmodes_1__prev = Core_datapath_csr__io_tmodes_1;
  dat_dump<2>(f, Core_datapath_csr__io_tmodes_1, 0x2522);
  goto K377;
L378:
  Core_datapath__io_control_csr_tmodes_1__prev = Core_datapath__io_control_csr_tmodes_1;
  dat_dump<2>(f, Core_datapath__io_control_csr_tmodes_1, 0x2523);
  goto K378;
L379:
  Core_control__io_csr_tmodes_1__prev = Core_control__io_csr_tmodes_1;
  dat_dump<2>(f, Core_control__io_csr_tmodes_1, 0x2524);
  goto K379;
L380:
  Core_control_scheduler__io_thread_modes_1__prev = Core_control_scheduler__io_thread_modes_1;
  dat_dump<2>(f, Core_control_scheduler__io_thread_modes_1, 0x2525);
  goto K380;
L381:
  Core_datapath_csr__io_tmodes_0__prev = Core_datapath_csr__io_tmodes_0;
  dat_dump<2>(f, Core_datapath_csr__io_tmodes_0, 0x2526);
  goto K381;
L382:
  Core_datapath__io_control_csr_tmodes_0__prev = Core_datapath__io_control_csr_tmodes_0;
  dat_dump<2>(f, Core_datapath__io_control_csr_tmodes_0, 0x2527);
  goto K382;
L383:
  Core_control__io_csr_tmodes_0__prev = Core_control__io_csr_tmodes_0;
  dat_dump<2>(f, Core_control__io_csr_tmodes_0, 0x2528);
  goto K383;
L384:
  Core_control_scheduler__io_thread_modes_0__prev = Core_control_scheduler__io_thread_modes_0;
  dat_dump<2>(f, Core_control_scheduler__io_thread_modes_0, 0x2529);
  goto K384;
L385:
  Core_datapath_csr__io_tmodes_6__prev = Core_datapath_csr__io_tmodes_6;
  dat_dump<2>(f, Core_datapath_csr__io_tmodes_6, 0x252a);
  goto K385;
L386:
  Core_datapath__io_control_csr_tmodes_6__prev = Core_datapath__io_control_csr_tmodes_6;
  dat_dump<2>(f, Core_datapath__io_control_csr_tmodes_6, 0x252b);
  goto K386;
L387:
  Core_control__io_csr_tmodes_6__prev = Core_control__io_csr_tmodes_6;
  dat_dump<2>(f, Core_control__io_csr_tmodes_6, 0x252c);
  goto K387;
L388:
  Core_control_scheduler__io_thread_modes_6__prev = Core_control_scheduler__io_thread_modes_6;
  dat_dump<2>(f, Core_control_scheduler__io_thread_modes_6, 0x252d);
  goto K388;
L389:
  Core_datapath_csr__io_tmodes_7__prev = Core_datapath_csr__io_tmodes_7;
  dat_dump<2>(f, Core_datapath_csr__io_tmodes_7, 0x252e);
  goto K389;
L390:
  Core_datapath__io_control_csr_tmodes_7__prev = Core_datapath__io_control_csr_tmodes_7;
  dat_dump<2>(f, Core_datapath__io_control_csr_tmodes_7, 0x252f);
  goto K390;
L391:
  Core_control__io_csr_tmodes_7__prev = Core_control__io_csr_tmodes_7;
  dat_dump<2>(f, Core_control__io_csr_tmodes_7, 0x2530);
  goto K391;
L392:
  Core_control_scheduler__io_thread_modes_7__prev = Core_control_scheduler__io_thread_modes_7;
  dat_dump<2>(f, Core_control_scheduler__io_thread_modes_7, 0x2531);
  goto K392;
L393:
  Core_control__dec_csr_type__prev = Core_control__dec_csr_type;
  dat_dump<2>(f, Core_control__dec_csr_type, 0x2532);
  goto K393;
L394:
  Core_control__exe_reg_csr_type__prev = Core_control__exe_reg_csr_type;
  dat_dump<2>(f, Core_control__exe_reg_csr_type, 0x2533);
  goto K394;
L395:
  Core_control__dec_mul_type__prev = Core_control__dec_mul_type;
  dat_dump<2>(f, Core_control__dec_mul_type, 0x2534);
  goto K395;
L396:
  Core_control__exe_reg_mul_type__prev = Core_control__exe_reg_mul_type;
  dat_dump<2>(f, Core_control__exe_reg_mul_type, 0x2535);
  goto K396;
L397:
  Core_control__dec_exe_rd_data_sel__prev = Core_control__dec_exe_rd_data_sel;
  dat_dump<2>(f, Core_control__dec_exe_rd_data_sel, 0x2536);
  goto K397;
L398:
  Core_control__exe_reg_rd_data_sel__prev = Core_control__exe_reg_rd_data_sel;
  dat_dump<2>(f, Core_control__exe_reg_rd_data_sel, 0x2537);
  goto K398;
L399:
  Core_control__R364__prev = Core_control__R364;
  dat_dump<2>(f, Core_control__R364, 0x2538);
  goto K399;
L400:
  Core_control__mem_reg_rd_data_sel__prev = Core_control__mem_reg_rd_data_sel;
  dat_dump<2>(f, Core_control__mem_reg_rd_data_sel, 0x2539);
  goto K400;
L401:
  Core_control__stall_count_7__prev = Core_control__stall_count_7;
  dat_dump<2>(f, Core_control__stall_count_7, 0x253a);
  goto K401;
L402:
  Core_control__stall_count_6__prev = Core_control__stall_count_6;
  dat_dump<2>(f, Core_control__stall_count_6, 0x253b);
  goto K402;
L403:
  Core_control__stall_count_5__prev = Core_control__stall_count_5;
  dat_dump<2>(f, Core_control__stall_count_5, 0x253c);
  goto K403;
L404:
  Core_control__stall_count_4__prev = Core_control__stall_count_4;
  dat_dump<2>(f, Core_control__stall_count_4, 0x253d);
  goto K404;
L405:
  Core_control__stall_count_3__prev = Core_control__stall_count_3;
  dat_dump<2>(f, Core_control__stall_count_3, 0x253e);
  goto K405;
L406:
  Core_control__stall_count_2__prev = Core_control__stall_count_2;
  dat_dump<2>(f, Core_control__stall_count_2, 0x253f);
  goto K406;
L407:
  Core_control__stall_count_1__prev = Core_control__stall_count_1;
  dat_dump<2>(f, Core_control__stall_count_1, 0x2540);
  goto K407;
L408:
  Core_control__stall_count_0__prev = Core_control__stall_count_0;
  dat_dump<2>(f, Core_control__stall_count_0, 0x2541);
  goto K408;
L409:
  Core_datapath_csr__io_gpio_out_3__prev = Core_datapath_csr__io_gpio_out_3;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_out_3, 0x2542);
  goto K409;
L410:
  Core_datapath__io_gpio_out_3__prev = Core_datapath__io_gpio_out_3;
  dat_dump<2>(f, Core_datapath__io_gpio_out_3, 0x2543);
  goto K410;
L411:
  Core__io_gpio_out_3__prev = Core__io_gpio_out_3;
  dat_dump<2>(f, Core__io_gpio_out_3, 0x2544);
  goto K411;
L412:
  Core_datapath_csr__io_gpio_out_2__prev = Core_datapath_csr__io_gpio_out_2;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_out_2, 0x2545);
  goto K412;
L413:
  Core_datapath__io_gpio_out_2__prev = Core_datapath__io_gpio_out_2;
  dat_dump<2>(f, Core_datapath__io_gpio_out_2, 0x2546);
  goto K413;
L414:
  Core__io_gpio_out_2__prev = Core__io_gpio_out_2;
  dat_dump<2>(f, Core__io_gpio_out_2, 0x2547);
  goto K414;
L415:
  Core_datapath_csr__io_gpio_out_1__prev = Core_datapath_csr__io_gpio_out_1;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_out_1, 0x2548);
  goto K415;
L416:
  Core_datapath__io_gpio_out_1__prev = Core_datapath__io_gpio_out_1;
  dat_dump<2>(f, Core_datapath__io_gpio_out_1, 0x2549);
  goto K416;
L417:
  Core__io_gpio_out_1__prev = Core__io_gpio_out_1;
  dat_dump<2>(f, Core__io_gpio_out_1, 0x254a);
  goto K417;
L418:
  Core_datapath_csr__io_gpio_out_0__prev = Core_datapath_csr__io_gpio_out_0;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_out_0, 0x254b);
  goto K418;
L419:
  Core_datapath__io_gpio_out_0__prev = Core_datapath__io_gpio_out_0;
  dat_dump<2>(f, Core_datapath__io_gpio_out_0, 0x254c);
  goto K419;
L420:
  Core__io_gpio_out_0__prev = Core__io_gpio_out_0;
  dat_dump<2>(f, Core__io_gpio_out_0, 0x254d);
  goto K420;
L421:
  Core_datapath_csr__io_rw_thread__prev = Core_datapath_csr__io_rw_thread;
  dat_dump<2>(f, Core_datapath_csr__io_rw_thread, 0x254e);
  goto K421;
L422:
  Core_datapath_loadstore__io_thread__prev = Core_datapath_loadstore__io_thread;
  dat_dump<2>(f, Core_datapath_loadstore__io_thread, 0x254f);
  goto K422;
L423:
  Core_datapath__io_control_if_tid__prev = Core_datapath__io_control_if_tid;
  dat_dump<2>(f, Core_datapath__io_control_if_tid, 0x2550);
  goto K423;
L424:
  Core_control__io_if_tid__prev = Core_control__io_if_tid;
  dat_dump<2>(f, Core_control__io_if_tid, 0x2551);
  goto K424;
L425:
  Core_datapath__io_control_dec_tid__prev = Core_datapath__io_control_dec_tid;
  dat_dump<2>(f, Core_datapath__io_control_dec_tid, 0x2552);
  goto K425;
L426:
  Core_control__io_dec_tid__prev = Core_control__io_dec_tid;
  dat_dump<2>(f, Core_control__io_dec_tid, 0x2553);
  goto K426;
L427:
  Core_datapath__io_control_exe_tid__prev = Core_datapath__io_control_exe_tid;
  dat_dump<2>(f, Core_datapath__io_control_exe_tid, 0x2554);
  goto K427;
L428:
  Core_control__io_exe_tid__prev = Core_control__io_exe_tid;
  dat_dump<2>(f, Core_control__io_exe_tid, 0x2555);
  goto K428;
L429:
  Core_control__io_exe_br_type__prev = Core_control__io_exe_br_type;
  dat_dump<2>(f, Core_control__io_exe_br_type, 0x2556);
  goto K429;
L430:
  Core_datapath__io_control_exe_br_type__prev = Core_datapath__io_control_exe_br_type;
  dat_dump<2>(f, Core_datapath__io_control_exe_br_type, 0x2557);
  goto K430;
L431:
  Core_datapath__io_control_mem_tid__prev = Core_datapath__io_control_mem_tid;
  dat_dump<2>(f, Core_datapath__io_control_mem_tid, 0x2558);
  goto K431;
L432:
  Core_control__io_mem_tid__prev = Core_control__io_mem_tid;
  dat_dump<2>(f, Core_control__io_mem_tid, 0x2559);
  goto K432;
L433:
  Core_control__next_tid__prev = Core_control__next_tid;
  dat_dump<2>(f, Core_control__next_tid, 0x255a);
  goto K433;
L434:
  Core_control__io_next_tid__prev = Core_control__io_next_tid;
  dat_dump<2>(f, Core_control__io_next_tid, 0x255b);
  goto K434;
L435:
  Core_datapath__io_control_next_tid__prev = Core_datapath__io_control_next_tid;
  dat_dump<2>(f, Core_datapath__io_control_next_tid, 0x255c);
  goto K435;
L436:
  Core_datapath_regfile__io_rs1_thread__prev = Core_datapath_regfile__io_rs1_thread;
  dat_dump<2>(f, Core_datapath_regfile__io_rs1_thread, 0x255d);
  goto K436;
L437:
  Core_datapath_regfile__io_rd_thread__prev = Core_datapath_regfile__io_rd_thread;
  dat_dump<2>(f, Core_datapath_regfile__io_rd_thread, 0x255e);
  goto K437;
L438:
  Core_datapath_regfile__io_rs2_thread__prev = Core_datapath_regfile__io_rs2_thread;
  dat_dump<2>(f, Core_datapath_regfile__io_rs2_thread, 0x255f);
  goto K438;
L439:
  Core_datapath__io_control_wb_tid__prev = Core_datapath__io_control_wb_tid;
  dat_dump<2>(f, Core_datapath__io_control_wb_tid, 0x2560);
  goto K439;
L440:
  Core_control__io_wb_tid__prev = Core_control__io_wb_tid;
  dat_dump<2>(f, Core_control__io_wb_tid, 0x2561);
  goto K440;
L441:
  Core_datapath__wb_reg_tid__prev = Core_datapath__wb_reg_tid;
  dat_dump<2>(f, Core_datapath__wb_reg_tid, 0x2562);
  goto K441;
L442:
  Core_control__dec_imm_sel__prev = Core_control__dec_imm_sel;
  dat_dump<2>(f, Core_control__dec_imm_sel, 0x2563);
  goto K442;
L443:
  Core_control__io_dec_imm_sel__prev = Core_control__io_dec_imm_sel;
  dat_dump<2>(f, Core_control__io_dec_imm_sel, 0x2564);
  goto K443;
L444:
  Core_datapath__io_control_dec_imm_sel__prev = Core_datapath__io_control_dec_imm_sel;
  dat_dump<2>(f, Core_datapath__io_control_dec_imm_sel, 0x2565);
  goto K444;
L445:
  Core_datapath__mem_reg_tid__prev = Core_datapath__mem_reg_tid;
  dat_dump<2>(f, Core_datapath__mem_reg_tid, 0x2566);
  goto K445;
L446:
  Core_datapath__exe_reg_tid__prev = Core_datapath__exe_reg_tid;
  dat_dump<2>(f, Core_datapath__exe_reg_tid, 0x2567);
  goto K446;
L447:
  Core_datapath__if_reg_tid__prev = Core_datapath__if_reg_tid;
  dat_dump<2>(f, Core_datapath__if_reg_tid, 0x2568);
  goto K447;
L448:
  Core_datapath__dec_reg_tid__prev = Core_datapath__dec_reg_tid;
  dat_dump<2>(f, Core_datapath__dec_reg_tid, 0x2569);
  goto K448;
L449:
  Core_control__dec_br_type__prev = Core_control__dec_br_type;
  dat_dump<2>(f, Core_control__dec_br_type, 0x256a);
  goto K449;
L450:
  Core_control__exe_reg_br_type__prev = Core_control__exe_reg_br_type;
  dat_dump<2>(f, Core_control__exe_reg_br_type, 0x256b);
  goto K450;
L451:
  Core_control_scheduler__io_thread__prev = Core_control_scheduler__io_thread;
  dat_dump<2>(f, Core_control_scheduler__io_thread, 0x256c);
  goto K451;
L452:
  Core_control__R284__prev = Core_control__R284;
  dat_dump<2>(f, Core_control__R284, 0x256d);
  goto K452;
L453:
  Core_control__dec_cause__prev = Core_control__dec_cause;
  dat_dump<2>(f, Core_control__dec_cause, 0x256e);
  goto K453;
L454:
  Core_control__exe_reg_cause__prev = Core_control__exe_reg_cause;
  dat_dump<2>(f, Core_control__exe_reg_cause, 0x256f);
  goto K454;
L455:
  Core_control__io_exe_alu_type__prev = Core_control__io_exe_alu_type;
  dat_dump<2>(f, Core_control__io_exe_alu_type, 0x2570);
  goto K455;
L456:
  Core_datapath__io_control_exe_alu_type__prev = Core_datapath__io_control_exe_alu_type;
  dat_dump<2>(f, Core_datapath__io_control_exe_alu_type, 0x2571);
  goto K456;
L457:
  Core_control__io_exe_mem_type__prev = Core_control__io_exe_mem_type;
  dat_dump<2>(f, Core_control__io_exe_mem_type, 0x2572);
  goto K457;
L458:
  Core_datapath__io_control_exe_mem_type__prev = Core_datapath__io_control_exe_mem_type;
  dat_dump<2>(f, Core_datapath__io_control_exe_mem_type, 0x2573);
  goto K458;
L459:
  Core_datapath_loadstore__io_mem_type__prev = Core_datapath_loadstore__io_mem_type;
  dat_dump<2>(f, Core_datapath_loadstore__io_mem_type, 0x2574);
  goto K459;
L460:
  Core_datapath_csr__io_imem_protection_0__prev = Core_datapath_csr__io_imem_protection_0;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_0, 0x2575);
  goto K460;
L461:
  Core_datapath_loadstore__io_imem_protection_0__prev = Core_datapath_loadstore__io_imem_protection_0;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_0, 0x2576);
  goto K461;
L462:
  Core_datapath_csr__io_imem_protection_1__prev = Core_datapath_csr__io_imem_protection_1;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_1, 0x2577);
  goto K462;
L463:
  Core_datapath_loadstore__io_imem_protection_1__prev = Core_datapath_loadstore__io_imem_protection_1;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_1, 0x2578);
  goto K463;
L464:
  Core_datapath_csr__io_imem_protection_2__prev = Core_datapath_csr__io_imem_protection_2;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_2, 0x2579);
  goto K464;
L465:
  Core_datapath_loadstore__io_imem_protection_2__prev = Core_datapath_loadstore__io_imem_protection_2;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_2, 0x257a);
  goto K465;
L466:
  Core_datapath_csr__io_imem_protection_3__prev = Core_datapath_csr__io_imem_protection_3;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_3, 0x257b);
  goto K466;
L467:
  Core_datapath_loadstore__io_imem_protection_3__prev = Core_datapath_loadstore__io_imem_protection_3;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_3, 0x257c);
  goto K467;
L468:
  Core_datapath_csr__io_imem_protection_4__prev = Core_datapath_csr__io_imem_protection_4;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_4, 0x257d);
  goto K468;
L469:
  Core_datapath_loadstore__io_imem_protection_4__prev = Core_datapath_loadstore__io_imem_protection_4;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_4, 0x257e);
  goto K469;
L470:
  Core_datapath_csr__io_imem_protection_5__prev = Core_datapath_csr__io_imem_protection_5;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_5, 0x2621);
  goto K470;
L471:
  Core_datapath_loadstore__io_imem_protection_5__prev = Core_datapath_loadstore__io_imem_protection_5;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_5, 0x2622);
  goto K471;
L472:
  Core_datapath_csr__io_imem_protection_6__prev = Core_datapath_csr__io_imem_protection_6;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_6, 0x2623);
  goto K472;
L473:
  Core_datapath_loadstore__io_imem_protection_6__prev = Core_datapath_loadstore__io_imem_protection_6;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_6, 0x2624);
  goto K473;
L474:
  Core_datapath_csr__io_imem_protection_7__prev = Core_datapath_csr__io_imem_protection_7;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_7, 0x2625);
  goto K474;
L475:
  Core_datapath_loadstore__io_imem_protection_7__prev = Core_datapath_loadstore__io_imem_protection_7;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_7, 0x2626);
  goto K475;
L476:
  Core_datapath_csr__io_dmem_protection_0__prev = Core_datapath_csr__io_dmem_protection_0;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_0, 0x2627);
  goto K476;
L477:
  Core_datapath_loadstore__io_dmem_protection_0__prev = Core_datapath_loadstore__io_dmem_protection_0;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_0, 0x2628);
  goto K477;
L478:
  Core_datapath_csr__io_dmem_protection_1__prev = Core_datapath_csr__io_dmem_protection_1;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_1, 0x2629);
  goto K478;
L479:
  Core_datapath_loadstore__io_dmem_protection_1__prev = Core_datapath_loadstore__io_dmem_protection_1;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_1, 0x262a);
  goto K479;
L480:
  Core_datapath_csr__io_dmem_protection_2__prev = Core_datapath_csr__io_dmem_protection_2;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_2, 0x262b);
  goto K480;
L481:
  Core_datapath_loadstore__io_dmem_protection_2__prev = Core_datapath_loadstore__io_dmem_protection_2;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_2, 0x262c);
  goto K481;
L482:
  Core_datapath_csr__io_dmem_protection_3__prev = Core_datapath_csr__io_dmem_protection_3;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_3, 0x262d);
  goto K482;
L483:
  Core_datapath_loadstore__io_dmem_protection_3__prev = Core_datapath_loadstore__io_dmem_protection_3;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_3, 0x262e);
  goto K483;
L484:
  Core_datapath_csr__io_dmem_protection_4__prev = Core_datapath_csr__io_dmem_protection_4;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_4, 0x262f);
  goto K484;
L485:
  Core_datapath_loadstore__io_dmem_protection_4__prev = Core_datapath_loadstore__io_dmem_protection_4;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_4, 0x2630);
  goto K485;
L486:
  Core_datapath_csr__io_dmem_protection_5__prev = Core_datapath_csr__io_dmem_protection_5;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_5, 0x2631);
  goto K486;
L487:
  Core_datapath_loadstore__io_dmem_protection_5__prev = Core_datapath_loadstore__io_dmem_protection_5;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_5, 0x2632);
  goto K487;
L488:
  Core_datapath_csr__io_dmem_protection_6__prev = Core_datapath_csr__io_dmem_protection_6;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_6, 0x2633);
  goto K488;
L489:
  Core_datapath_loadstore__io_dmem_protection_6__prev = Core_datapath_loadstore__io_dmem_protection_6;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_6, 0x2634);
  goto K489;
L490:
  Core_datapath_csr__io_dmem_protection_7__prev = Core_datapath_csr__io_dmem_protection_7;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_7, 0x2635);
  goto K490;
L491:
  Core_datapath_loadstore__io_dmem_protection_7__prev = Core_datapath_loadstore__io_dmem_protection_7;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_7, 0x2636);
  goto K491;
L492:
  Core_datapath_csr__reg_dmem_protection_7__prev = Core_datapath_csr__reg_dmem_protection_7;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_7, 0x2637);
  goto K492;
L493:
  Core_datapath_csr__reg_dmem_protection_6__prev = Core_datapath_csr__reg_dmem_protection_6;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_6, 0x2638);
  goto K493;
L494:
  Core_datapath_csr__reg_dmem_protection_5__prev = Core_datapath_csr__reg_dmem_protection_5;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_5, 0x2639);
  goto K494;
L495:
  Core_datapath_csr__reg_dmem_protection_4__prev = Core_datapath_csr__reg_dmem_protection_4;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_4, 0x263a);
  goto K495;
L496:
  Core_datapath_csr__reg_dmem_protection_3__prev = Core_datapath_csr__reg_dmem_protection_3;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_3, 0x263b);
  goto K496;
L497:
  Core_datapath_csr__reg_dmem_protection_2__prev = Core_datapath_csr__reg_dmem_protection_2;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_2, 0x263c);
  goto K497;
L498:
  Core_datapath_csr__reg_dmem_protection_1__prev = Core_datapath_csr__reg_dmem_protection_1;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_1, 0x263d);
  goto K498;
L499:
  Core_datapath_csr__reg_dmem_protection_0__prev = Core_datapath_csr__reg_dmem_protection_0;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_0, 0x263e);
  goto K499;
L500:
  Core_datapath_csr__reg_imem_protection_7__prev = Core_datapath_csr__reg_imem_protection_7;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_7, 0x263f);
  goto K500;
L501:
  Core_datapath_csr__reg_imem_protection_6__prev = Core_datapath_csr__reg_imem_protection_6;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_6, 0x2640);
  goto K501;
L502:
  Core_datapath_csr__reg_imem_protection_5__prev = Core_datapath_csr__reg_imem_protection_5;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_5, 0x2641);
  goto K502;
L503:
  Core_datapath_csr__reg_imem_protection_4__prev = Core_datapath_csr__reg_imem_protection_4;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_4, 0x2642);
  goto K503;
L504:
  Core_datapath_csr__reg_imem_protection_3__prev = Core_datapath_csr__reg_imem_protection_3;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_3, 0x2643);
  goto K504;
L505:
  Core_datapath_csr__reg_imem_protection_2__prev = Core_datapath_csr__reg_imem_protection_2;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_2, 0x2644);
  goto K505;
L506:
  Core_datapath_csr__reg_imem_protection_1__prev = Core_datapath_csr__reg_imem_protection_1;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_1, 0x2645);
  goto K506;
L507:
  Core_datapath_csr__reg_imem_protection_0__prev = Core_datapath_csr__reg_imem_protection_0;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_0, 0x2646);
  goto K507;
L508:
  Core_datapath_csr__reg_gpo_protection_3__prev = Core_datapath_csr__reg_gpo_protection_3;
  dat_dump<2>(f, Core_datapath_csr__reg_gpo_protection_3, 0x2647);
  goto K508;
L509:
  Core_datapath_csr__reg_gpo_protection_2__prev = Core_datapath_csr__reg_gpo_protection_2;
  dat_dump<2>(f, Core_datapath_csr__reg_gpo_protection_2, 0x2648);
  goto K509;
L510:
  Core_datapath_csr__reg_gpo_protection_1__prev = Core_datapath_csr__reg_gpo_protection_1;
  dat_dump<2>(f, Core_datapath_csr__reg_gpo_protection_1, 0x2649);
  goto K510;
L511:
  Core_datapath_csr__reg_gpo_protection_0__prev = Core_datapath_csr__reg_gpo_protection_0;
  dat_dump<2>(f, Core_datapath_csr__reg_gpo_protection_0, 0x264a);
  goto K511;
L512:
  Core_control__exe_inst_cause__prev = Core_control__exe_inst_cause;
  dat_dump<2>(f, Core_control__exe_inst_cause, 0x264b);
  goto K512;
L513:
  Core_datapath_csr__reg_slots_7__prev = Core_datapath_csr__reg_slots_7;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_7, 0x264c);
  goto K513;
L514:
  Core_datapath_csr__reg_slots_6__prev = Core_datapath_csr__reg_slots_6;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_6, 0x264d);
  goto K514;
L515:
  Core_datapath_csr__reg_slots_5__prev = Core_datapath_csr__reg_slots_5;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_5, 0x264e);
  goto K515;
L516:
  Core_datapath_csr__reg_slots_4__prev = Core_datapath_csr__reg_slots_4;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_4, 0x264f);
  goto K516;
L517:
  Core_datapath_csr__reg_slots_3__prev = Core_datapath_csr__reg_slots_3;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_3, 0x2650);
  goto K517;
L518:
  Core_datapath_csr__reg_slots_2__prev = Core_datapath_csr__reg_slots_2;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_2, 0x2651);
  goto K518;
L519:
  Core_datapath_csr__reg_slots_1__prev = Core_datapath_csr__reg_slots_1;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_1, 0x2652);
  goto K519;
L520:
  Core_datapath_csr__reg_slots_0__prev = Core_datapath_csr__reg_slots_0;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_0, 0x2653);
  goto K520;
L521:
  Core_datapath_loadstore__mem_type_reg__prev = Core_datapath_loadstore__mem_type_reg;
  dat_dump<2>(f, Core_datapath_loadstore__mem_type_reg, 0x2654);
  goto K521;
L522:
  Core_datapath_Multiplier__io_func__prev = Core_datapath_Multiplier__io_func;
  dat_dump<2>(f, Core_datapath_Multiplier__io_func, 0x2655);
  goto K522;
L523:
  Core_datapath_csr__io_slots_7__prev = Core_datapath_csr__io_slots_7;
  dat_dump<2>(f, Core_datapath_csr__io_slots_7, 0x2656);
  goto K523;
L524:
  Core_datapath__io_control_csr_slots_7__prev = Core_datapath__io_control_csr_slots_7;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_7, 0x2657);
  goto K524;
L525:
  Core_control__io_csr_slots_7__prev = Core_control__io_csr_slots_7;
  dat_dump<2>(f, Core_control__io_csr_slots_7, 0x2658);
  goto K525;
L526:
  Core_control_scheduler__io_slots_7__prev = Core_control_scheduler__io_slots_7;
  dat_dump<2>(f, Core_control_scheduler__io_slots_7, 0x2659);
  goto K526;
L527:
  Core_datapath_csr__io_slots_6__prev = Core_datapath_csr__io_slots_6;
  dat_dump<2>(f, Core_datapath_csr__io_slots_6, 0x265a);
  goto K527;
L528:
  Core_datapath__io_control_csr_slots_6__prev = Core_datapath__io_control_csr_slots_6;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_6, 0x265b);
  goto K528;
L529:
  Core_control__io_csr_slots_6__prev = Core_control__io_csr_slots_6;
  dat_dump<2>(f, Core_control__io_csr_slots_6, 0x265c);
  goto K529;
L530:
  Core_control_scheduler__io_slots_6__prev = Core_control_scheduler__io_slots_6;
  dat_dump<2>(f, Core_control_scheduler__io_slots_6, 0x265d);
  goto K530;
L531:
  Core_datapath_csr__io_slots_5__prev = Core_datapath_csr__io_slots_5;
  dat_dump<2>(f, Core_datapath_csr__io_slots_5, 0x265e);
  goto K531;
L532:
  Core_datapath__io_control_csr_slots_5__prev = Core_datapath__io_control_csr_slots_5;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_5, 0x265f);
  goto K532;
L533:
  Core_control__io_csr_slots_5__prev = Core_control__io_csr_slots_5;
  dat_dump<2>(f, Core_control__io_csr_slots_5, 0x2660);
  goto K533;
L534:
  Core_control_scheduler__io_slots_5__prev = Core_control_scheduler__io_slots_5;
  dat_dump<2>(f, Core_control_scheduler__io_slots_5, 0x2661);
  goto K534;
L535:
  Core_datapath_csr__io_slots_4__prev = Core_datapath_csr__io_slots_4;
  dat_dump<2>(f, Core_datapath_csr__io_slots_4, 0x2662);
  goto K535;
L536:
  Core_datapath__io_control_csr_slots_4__prev = Core_datapath__io_control_csr_slots_4;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_4, 0x2663);
  goto K536;
L537:
  Core_control__io_csr_slots_4__prev = Core_control__io_csr_slots_4;
  dat_dump<2>(f, Core_control__io_csr_slots_4, 0x2664);
  goto K537;
L538:
  Core_control_scheduler__io_slots_4__prev = Core_control_scheduler__io_slots_4;
  dat_dump<2>(f, Core_control_scheduler__io_slots_4, 0x2665);
  goto K538;
L539:
  Core_datapath_csr__io_slots_3__prev = Core_datapath_csr__io_slots_3;
  dat_dump<2>(f, Core_datapath_csr__io_slots_3, 0x2666);
  goto K539;
L540:
  Core_datapath__io_control_csr_slots_3__prev = Core_datapath__io_control_csr_slots_3;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_3, 0x2667);
  goto K540;
L541:
  Core_control__io_csr_slots_3__prev = Core_control__io_csr_slots_3;
  dat_dump<2>(f, Core_control__io_csr_slots_3, 0x2668);
  goto K541;
L542:
  Core_control_scheduler__io_slots_3__prev = Core_control_scheduler__io_slots_3;
  dat_dump<2>(f, Core_control_scheduler__io_slots_3, 0x2669);
  goto K542;
L543:
  Core_datapath_csr__io_slots_2__prev = Core_datapath_csr__io_slots_2;
  dat_dump<2>(f, Core_datapath_csr__io_slots_2, 0x266a);
  goto K543;
L544:
  Core_datapath__io_control_csr_slots_2__prev = Core_datapath__io_control_csr_slots_2;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_2, 0x266b);
  goto K544;
L545:
  Core_control__io_csr_slots_2__prev = Core_control__io_csr_slots_2;
  dat_dump<2>(f, Core_control__io_csr_slots_2, 0x266c);
  goto K545;
L546:
  Core_control_scheduler__io_slots_2__prev = Core_control_scheduler__io_slots_2;
  dat_dump<2>(f, Core_control_scheduler__io_slots_2, 0x266d);
  goto K546;
L547:
  Core_datapath_csr__io_slots_1__prev = Core_datapath_csr__io_slots_1;
  dat_dump<2>(f, Core_datapath_csr__io_slots_1, 0x266e);
  goto K547;
L548:
  Core_datapath__io_control_csr_slots_1__prev = Core_datapath__io_control_csr_slots_1;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_1, 0x266f);
  goto K548;
L549:
  Core_control__io_csr_slots_1__prev = Core_control__io_csr_slots_1;
  dat_dump<2>(f, Core_control__io_csr_slots_1, 0x2670);
  goto K549;
L550:
  Core_control_scheduler__io_slots_1__prev = Core_control_scheduler__io_slots_1;
  dat_dump<2>(f, Core_control_scheduler__io_slots_1, 0x2671);
  goto K550;
L551:
  Core_datapath_csr__io_slots_0__prev = Core_datapath_csr__io_slots_0;
  dat_dump<2>(f, Core_datapath_csr__io_slots_0, 0x2672);
  goto K551;
L552:
  Core_datapath__io_control_csr_slots_0__prev = Core_datapath__io_control_csr_slots_0;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_0, 0x2673);
  goto K552;
L553:
  Core_control__io_csr_slots_0__prev = Core_control__io_csr_slots_0;
  dat_dump<2>(f, Core_control__io_csr_slots_0, 0x2674);
  goto K553;
L554:
  Core_control_scheduler__io_slots_0__prev = Core_control_scheduler__io_slots_0;
  dat_dump<2>(f, Core_control_scheduler__io_slots_0, 0x2675);
  goto K554;
L555:
  Core_control__dec_alu_type__prev = Core_control__dec_alu_type;
  dat_dump<2>(f, Core_control__dec_alu_type, 0x2676);
  goto K555;
L556:
  Core_control__exe_reg_alu_type__prev = Core_control__exe_reg_alu_type;
  dat_dump<2>(f, Core_control__exe_reg_alu_type, 0x2677);
  goto K556;
L557:
  Core_control__dec_mem_type__prev = Core_control__dec_mem_type;
  dat_dump<2>(f, Core_control__dec_mem_type, 0x2678);
  goto K557;
L558:
  Core_control__exe_reg_mem_type__prev = Core_control__exe_reg_mem_type;
  dat_dump<2>(f, Core_control__exe_reg_mem_type, 0x2679);
  goto K558;
L559:
  Core_datapath__exe_alu_shift__prev = Core_datapath__exe_alu_shift;
  dat_dump<2>(f, Core_datapath__exe_alu_shift, 0x267a);
  goto K559;
L560:
  Core_control__exe_any_cause__prev = Core_control__exe_any_cause;
  dat_dump<2>(f, Core_control__exe_any_cause, 0x267b);
  goto K560;
L561:
  Core_control__exe_exception_cause__prev = Core_control__exe_exception_cause;
  dat_dump<2>(f, Core_control__exe_exception_cause, 0x267c);
  goto K561;
L562:
  Core_control__io_exe_cause__prev = Core_control__io_exe_cause;
  dat_dump<2>(f, Core_control__io_exe_cause, 0x267d);
  goto K562;
L563:
  Core_datapath__io_control_exe_cause__prev = Core_datapath__io_control_exe_cause;
  dat_dump<2>(f, Core_datapath__io_control_exe_cause, 0x267e);
  goto K563;
L564:
  Core_datapath_csr__io_cause__prev = Core_datapath_csr__io_cause;
  dat_dump<2>(f, Core_datapath_csr__io_cause, 0x2721);
  goto K564;
L565:
  Core_datapath_csr__reg_causes_7__prev = Core_datapath_csr__reg_causes_7;
  dat_dump<2>(f, Core_datapath_csr__reg_causes_7, 0x2722);
  goto K565;
L566:
  Core_datapath_csr__reg_causes_6__prev = Core_datapath_csr__reg_causes_6;
  dat_dump<2>(f, Core_datapath_csr__reg_causes_6, 0x2723);
  goto K566;
L567:
  Core_datapath_csr__reg_causes_5__prev = Core_datapath_csr__reg_causes_5;
  dat_dump<2>(f, Core_datapath_csr__reg_causes_5, 0x2724);
  goto K567;
L568:
  Core_datapath_csr__reg_causes_4__prev = Core_datapath_csr__reg_causes_4;
  dat_dump<2>(f, Core_datapath_csr__reg_causes_4, 0x2725);
  goto K568;
L569:
  Core_datapath_csr__reg_causes_3__prev = Core_datapath_csr__reg_causes_3;
  dat_dump<2>(f, Core_datapath_csr__reg_causes_3, 0x2726);
  goto K569;
L570:
  Core_datapath_csr__reg_causes_2__prev = Core_datapath_csr__reg_causes_2;
  dat_dump<2>(f, Core_datapath_csr__reg_causes_2, 0x2727);
  goto K570;
L571:
  Core_datapath_csr__reg_causes_1__prev = Core_datapath_csr__reg_causes_1;
  dat_dump<2>(f, Core_datapath_csr__reg_causes_1, 0x2728);
  goto K571;
L572:
  Core_datapath_csr__reg_causes_0__prev = Core_datapath_csr__reg_causes_0;
  dat_dump<2>(f, Core_datapath_csr__reg_causes_0, 0x2729);
  goto K572;
L573:
  Core_datapath_regfile__io_rs1_addr__prev = Core_datapath_regfile__io_rs1_addr;
  dat_dump<2>(f, Core_datapath_regfile__io_rs1_addr, 0x272a);
  goto K573;
L574:
  Core_datapath_regfile__io_rd_addr__prev = Core_datapath_regfile__io_rd_addr;
  dat_dump<2>(f, Core_datapath_regfile__io_rd_addr, 0x272b);
  goto K574;
L575:
  Core_datapath_regfile__io_rs2_addr__prev = Core_datapath_regfile__io_rs2_addr;
  dat_dump<2>(f, Core_datapath_regfile__io_rs2_addr, 0x272c);
  goto K575;
L576:
  Core_datapath__io_control_wb_rd_addr__prev = Core_datapath__io_control_wb_rd_addr;
  dat_dump<2>(f, Core_datapath__io_control_wb_rd_addr, 0x272d);
  goto K576;
L577:
  Core_control__io_wb_rd_addr__prev = Core_control__io_wb_rd_addr;
  dat_dump<2>(f, Core_control__io_wb_rd_addr, 0x272e);
  goto K577;
L578:
  Core_datapath__io_control_mem_rd_addr__prev = Core_datapath__io_control_mem_rd_addr;
  dat_dump<2>(f, Core_datapath__io_control_mem_rd_addr, 0x272f);
  goto K578;
L579:
  Core_control__io_mem_rd_addr__prev = Core_control__io_mem_rd_addr;
  dat_dump<2>(f, Core_control__io_mem_rd_addr, 0x2730);
  goto K579;
L580:
  Core_datapath__io_control_exe_rd_addr__prev = Core_datapath__io_control_exe_rd_addr;
  dat_dump<2>(f, Core_datapath__io_control_exe_rd_addr, 0x2731);
  goto K580;
L581:
  Core_control__io_exe_rd_addr__prev = Core_control__io_exe_rd_addr;
  dat_dump<2>(f, Core_control__io_exe_rd_addr, 0x2732);
  goto K581;
L582:
  Core_datapath__wb_reg_rd_addr__prev = Core_datapath__wb_reg_rd_addr;
  dat_dump<2>(f, Core_datapath__wb_reg_rd_addr, 0x2733);
  goto K582;
L583:
  Core_datapath__exe_reg_rd_addr__prev = Core_datapath__exe_reg_rd_addr;
  dat_dump<2>(f, Core_datapath__exe_reg_rd_addr, 0x2734);
  goto K583;
L584:
  Core_datapath__mem_reg_rd_addr__prev = Core_datapath__mem_reg_rd_addr;
  dat_dump<2>(f, Core_datapath__mem_reg_rd_addr, 0x2735);
  goto K584;
L585:
  Core_datapath_loadstore__io_bus_addr__prev = Core_datapath_loadstore__io_bus_addr;
  dat_dump<2>(f, Core_datapath_loadstore__io_bus_addr, 0x2736);
  goto K585;
L586:
  Core_datapath__io_bus_addr__prev = Core_datapath__io_bus_addr;
  dat_dump<2>(f, Core_datapath__io_bus_addr, 0x2737);
  goto K586;
L587:
  Core__io_bus_addr__prev = Core__io_bus_addr;
  dat_dump<2>(f, Core__io_bus_addr, 0x2738);
  goto K587;
L588:
  Core_datapath_loadstore__io_dmem_addr__prev = Core_datapath_loadstore__io_dmem_addr;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_addr, 0x2739);
  goto K588;
L589:
  Core_datapath__io_dmem_addr__prev = Core_datapath__io_dmem_addr;
  dat_dump<2>(f, Core_datapath__io_dmem_addr, 0x273a);
  goto K589;
L590:
  Core_dmem__io_core_addr__prev = Core_dmem__io_core_addr;
  dat_dump<2>(f, Core_dmem__io_core_addr, 0x273b);
  goto K590;
L591:
  Core_datapath__io_imem_r_addr__prev = Core_datapath__io_imem_r_addr;
  dat_dump<2>(f, Core_datapath__io_imem_r_addr, 0x273c);
  goto K591;
L592:
  Core_imem__io_core_r_addr__prev = Core_imem__io_core_r_addr;
  dat_dump<2>(f, Core_imem__io_core_r_addr, 0x273d);
  goto K592;
L593:
  Core_datapath_loadstore__io_imem_rw_addr__prev = Core_datapath_loadstore__io_imem_rw_addr;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_rw_addr, 0x273e);
  goto K593;
L594:
  Core_datapath__io_imem_rw_addr__prev = Core_datapath__io_imem_rw_addr;
  dat_dump<2>(f, Core_datapath__io_imem_rw_addr, 0x273f);
  goto K594;
L595:
  Core_imem__io_core_rw_addr__prev = Core_imem__io_core_rw_addr;
  dat_dump<2>(f, Core_imem__io_core_rw_addr, 0x2740);
  goto K595;
L596:
  Core_datapath_csr__io_rw_addr__prev = Core_datapath_csr__io_rw_addr;
  dat_dump<2>(f, Core_datapath_csr__io_rw_addr, 0x2741);
  goto K596;
L597:
  Core_datapath_loadstore__io_imem_r_addr__prev = Core_datapath_loadstore__io_imem_r_addr;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_r_addr, 0x2742);
  goto K597;
L598:
  Core_datapath__exe_reg_csr_addr__prev = Core_datapath__exe_reg_csr_addr;
  dat_dump<2>(f, Core_datapath__exe_reg_csr_addr, 0x2743);
  goto K598;
L599:
  Core__io_dmem_addr__prev = Core__io_dmem_addr;
  dat_dump<2>(f, Core__io_dmem_addr, 0x2744);
  goto K599;
L600:
  Core__io_imem_addr__prev = Core__io_imem_addr;
  dat_dump<2>(f, Core__io_imem_addr, 0x2745);
  goto K600;
L601:
  Core_datapath__def_exe_alu_result__prev = Core_datapath__def_exe_alu_result;
  dat_dump<2>(f, Core_datapath__def_exe_alu_result, 0x2746);
  goto K601;
L602:
  Core_datapath__exe_alu_result__prev = Core_datapath__exe_alu_result;
  dat_dump<2>(f, Core_datapath__exe_alu_result, 0x2747);
  goto K602;
L603:
  Core_datapath__exe_address__prev = Core_datapath__exe_address;
  dat_dump<2>(f, Core_datapath__exe_address, 0x2748);
  goto K603;
L604:
  Core_datapath_loadstore__io_addr__prev = Core_datapath_loadstore__io_addr;
  dat_dump<2>(f, Core_datapath_loadstore__io_addr, 0x2749);
  goto K604;
L605:
  Core_datapath_loadstore__io_data_in__prev = Core_datapath_loadstore__io_data_in;
  dat_dump<2>(f, Core_datapath_loadstore__io_data_in, 0x274a);
  goto K605;
L606:
  Core_datapath_loadstore__io_dmem_data_in__prev = Core_datapath_loadstore__io_dmem_data_in;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_data_in, 0x274b);
  goto K606;
L607:
  Core_datapath__io_dmem_data_in__prev = Core_datapath__io_dmem_data_in;
  dat_dump<2>(f, Core_datapath__io_dmem_data_in, 0x274c);
  goto K607;
L608:
  Core_dmem__io_core_data_in__prev = Core_dmem__io_core_data_in;
  dat_dump<2>(f, Core_dmem__io_core_data_in, 0x274d);
  goto K608;
L609:
  Core_dmem__dout__prev = Core_dmem__dout;
  dat_dump<2>(f, Core_dmem__dout, 0x274e);
  goto K609;
L610:
  Core_datapath__if_pc_plus4__prev = Core_datapath__if_pc_plus4;
  dat_dump<2>(f, Core_datapath__if_pc_plus4, 0x274f);
  goto K610;
L611:
  Core_datapath__io_control_dec_inst__prev = Core_datapath__io_control_dec_inst;
  dat_dump<2>(f, Core_datapath__io_control_dec_inst, 0x2750);
  goto K611;
L612:
  Core_control__io_dec_inst__prev = Core_control__io_dec_inst;
  dat_dump<2>(f, Core_control__io_dec_inst, 0x2751);
  goto K612;
L613:
  Core_datapath_csr__io_evecs_0__prev = Core_datapath_csr__io_evecs_0;
  dat_dump<2>(f, Core_datapath_csr__io_evecs_0, 0x2752);
  goto K613;
L614:
  Core_datapath_csr__io_evecs_1__prev = Core_datapath_csr__io_evecs_1;
  dat_dump<2>(f, Core_datapath_csr__io_evecs_1, 0x2753);
  goto K614;
L615:
  Core_datapath_csr__io_evecs_2__prev = Core_datapath_csr__io_evecs_2;
  dat_dump<2>(f, Core_datapath_csr__io_evecs_2, 0x2754);
  goto K615;
L616:
  Core_datapath_csr__io_evecs_3__prev = Core_datapath_csr__io_evecs_3;
  dat_dump<2>(f, Core_datapath_csr__io_evecs_3, 0x2755);
  goto K616;
L617:
  Core_datapath_csr__io_evecs_4__prev = Core_datapath_csr__io_evecs_4;
  dat_dump<2>(f, Core_datapath_csr__io_evecs_4, 0x2756);
  goto K617;
L618:
  Core_datapath_csr__io_evecs_5__prev = Core_datapath_csr__io_evecs_5;
  dat_dump<2>(f, Core_datapath_csr__io_evecs_5, 0x2757);
  goto K618;
L619:
  Core_datapath_csr__io_evecs_6__prev = Core_datapath_csr__io_evecs_6;
  dat_dump<2>(f, Core_datapath_csr__io_evecs_6, 0x2758);
  goto K619;
L620:
  Core_datapath_csr__io_evecs_7__prev = Core_datapath_csr__io_evecs_7;
  dat_dump<2>(f, Core_datapath_csr__io_evecs_7, 0x2759);
  goto K620;
L621:
  Core_datapath__mem_evec__prev = Core_datapath__mem_evec;
  dat_dump<2>(f, Core_datapath__mem_evec, 0x275a);
  goto K621;
L622:
  Core_datapath__next_pcs_0__prev = Core_datapath__next_pcs_0;
  dat_dump<2>(f, Core_datapath__next_pcs_0, 0x275b);
  goto K622;
L623:
  Core_datapath__next_pcs_1__prev = Core_datapath__next_pcs_1;
  dat_dump<2>(f, Core_datapath__next_pcs_1, 0x275c);
  goto K623;
L624:
  Core_datapath__next_pcs_2__prev = Core_datapath__next_pcs_2;
  dat_dump<2>(f, Core_datapath__next_pcs_2, 0x275d);
  goto K624;
L625:
  Core_datapath__next_pcs_3__prev = Core_datapath__next_pcs_3;
  dat_dump<2>(f, Core_datapath__next_pcs_3, 0x275e);
  goto K625;
L626:
  Core_datapath__next_pcs_4__prev = Core_datapath__next_pcs_4;
  dat_dump<2>(f, Core_datapath__next_pcs_4, 0x275f);
  goto K626;
L627:
  Core_datapath__next_pcs_5__prev = Core_datapath__next_pcs_5;
  dat_dump<2>(f, Core_datapath__next_pcs_5, 0x2760);
  goto K627;
L628:
  Core_datapath__next_pcs_6__prev = Core_datapath__next_pcs_6;
  dat_dump<2>(f, Core_datapath__next_pcs_6, 0x2761);
  goto K628;
L629:
  Core_datapath__next_pcs_7__prev = Core_datapath__next_pcs_7;
  dat_dump<2>(f, Core_datapath__next_pcs_7, 0x2762);
  goto K629;
L630:
  Core_datapath__next_pc__prev = Core_datapath__next_pc;
  dat_dump<2>(f, Core_datapath__next_pc, 0x2763);
  goto K630;
L631:
  Core_imem__dout_r__prev = Core_imem__dout_r;
  dat_dump<2>(f, Core_imem__dout_r, 0x2764);
  goto K631;
L632:
  Core_datapath_loadstore__io_imem_rw_data_in__prev = Core_datapath_loadstore__io_imem_rw_data_in;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_rw_data_in, 0x2765);
  goto K632;
L633:
  Core_datapath__io_imem_rw_data_in__prev = Core_datapath__io_imem_rw_data_in;
  dat_dump<2>(f, Core_datapath__io_imem_rw_data_in, 0x2766);
  goto K633;
L634:
  Core_imem__io_core_rw_data_in__prev = Core_imem__io_core_rw_data_in;
  dat_dump<2>(f, Core_imem__io_core_rw_data_in, 0x2767);
  goto K634;
L635:
  Core_imem__R0__prev = Core_imem__R0;
  dat_dump<2>(f, Core_imem__R0, 0x2768);
  goto K635;
L636:
  Core_datapath_csr__io_rw_data_in__prev = Core_datapath_csr__io_rw_data_in;
  dat_dump<2>(f, Core_datapath_csr__io_rw_data_in, 0x2769);
  goto K636;
L637:
  Core_datapath_csr__reg_to_host__prev = Core_datapath_csr__reg_to_host;
  dat_dump<2>(f, Core_datapath_csr__reg_to_host, 0x276a);
  goto K637;
L638:
  Core_datapath_csr__io_epc__prev = Core_datapath_csr__io_epc;
  dat_dump<2>(f, Core_datapath_csr__io_epc, 0x276b);
  goto K638;
L639:
  Core_datapath_csr__reg_epcs_7__prev = Core_datapath_csr__reg_epcs_7;
  dat_dump<2>(f, Core_datapath_csr__reg_epcs_7, 0x276c);
  goto K639;
L640:
  Core_datapath_csr__reg_epcs_6__prev = Core_datapath_csr__reg_epcs_6;
  dat_dump<2>(f, Core_datapath_csr__reg_epcs_6, 0x276d);
  goto K640;
L641:
  Core_datapath_csr__reg_epcs_5__prev = Core_datapath_csr__reg_epcs_5;
  dat_dump<2>(f, Core_datapath_csr__reg_epcs_5, 0x276e);
  goto K641;
L642:
  Core_datapath_csr__reg_epcs_4__prev = Core_datapath_csr__reg_epcs_4;
  dat_dump<2>(f, Core_datapath_csr__reg_epcs_4, 0x276f);
  goto K642;
L643:
  Core_datapath_csr__reg_epcs_3__prev = Core_datapath_csr__reg_epcs_3;
  dat_dump<2>(f, Core_datapath_csr__reg_epcs_3, 0x2770);
  goto K643;
L644:
  Core_datapath_csr__reg_epcs_2__prev = Core_datapath_csr__reg_epcs_2;
  dat_dump<2>(f, Core_datapath_csr__reg_epcs_2, 0x2771);
  goto K644;
L645:
  Core_datapath_csr__reg_epcs_1__prev = Core_datapath_csr__reg_epcs_1;
  dat_dump<2>(f, Core_datapath_csr__reg_epcs_1, 0x2772);
  goto K645;
L646:
  Core_datapath_csr__reg_epcs_0__prev = Core_datapath_csr__reg_epcs_0;
  dat_dump<2>(f, Core_datapath_csr__reg_epcs_0, 0x2773);
  goto K646;
L647:
  Core_datapath_csr__reg_compare_7__prev = Core_datapath_csr__reg_compare_7;
  dat_dump<2>(f, Core_datapath_csr__reg_compare_7, 0x2774);
  goto K647;
L648:
  Core_datapath_csr__reg_compare_6__prev = Core_datapath_csr__reg_compare_6;
  dat_dump<2>(f, Core_datapath_csr__reg_compare_6, 0x2775);
  goto K648;
L649:
  Core_datapath_csr__reg_compare_5__prev = Core_datapath_csr__reg_compare_5;
  dat_dump<2>(f, Core_datapath_csr__reg_compare_5, 0x2776);
  goto K649;
L650:
  Core_datapath_csr__reg_compare_4__prev = Core_datapath_csr__reg_compare_4;
  dat_dump<2>(f, Core_datapath_csr__reg_compare_4, 0x2777);
  goto K650;
L651:
  Core_datapath_csr__reg_compare_3__prev = Core_datapath_csr__reg_compare_3;
  dat_dump<2>(f, Core_datapath_csr__reg_compare_3, 0x2778);
  goto K651;
L652:
  Core_datapath_csr__reg_compare_1__prev = Core_datapath_csr__reg_compare_1;
  dat_dump<2>(f, Core_datapath_csr__reg_compare_1, 0x2779);
  goto K652;
L653:
  Core_datapath_csr__reg_compare_0__prev = Core_datapath_csr__reg_compare_0;
  dat_dump<2>(f, Core_datapath_csr__reg_compare_0, 0x277a);
  goto K653;
L654:
  Core_datapath_csr__reg_compare_2__prev = Core_datapath_csr__reg_compare_2;
  dat_dump<2>(f, Core_datapath_csr__reg_compare_2, 0x277b);
  goto K654;
L655:
  Core_datapath_Multiplier__io_op2__prev = Core_datapath_Multiplier__io_op2;
  dat_dump<2>(f, Core_datapath_Multiplier__io_op2, 0x277c);
  goto K655;
L656:
  Core_datapath_Multiplier__io_op1__prev = Core_datapath_Multiplier__io_op1;
  dat_dump<2>(f, Core_datapath_Multiplier__io_op1, 0x277d);
  goto K656;
L657:
  Core_datapath_Multiplier__result__prev = Core_datapath_Multiplier__result;
  dat_dump<2>(f, Core_datapath_Multiplier__result, 0x277e);
  goto K657;
L658:
  Core_datapath_Multiplier__R0__prev = Core_datapath_Multiplier__R0;
  dat_dump<2>(f, Core_datapath_Multiplier__R0, 0x2821);
  goto K658;
L659:
  Core_imem__io_core_r_data_out__prev = Core_imem__io_core_r_data_out;
  dat_dump<2>(f, Core_imem__io_core_r_data_out, 0x2822);
  goto K659;
L660:
  Core_datapath__io_imem_r_data_out__prev = Core_datapath__io_imem_r_data_out;
  dat_dump<2>(f, Core_datapath__io_imem_r_data_out, 0x2823);
  goto K660;
L661:
  Core_datapath_regfile__dout1__prev = Core_datapath_regfile__dout1;
  dat_dump<2>(f, Core_datapath_regfile__dout1, 0x2824);
  goto K661;
L662:
  Core_datapath_Multiplier__io_result__prev = Core_datapath_Multiplier__io_result;
  dat_dump<2>(f, Core_datapath_Multiplier__io_result, 0x2825);
  goto K662;
L663:
  Core_datapath__mem_mul_result__prev = Core_datapath__mem_mul_result;
  dat_dump<2>(f, Core_datapath__mem_mul_result, 0x2826);
  goto K663;
L664:
  Core__io_bus_data_out__prev = Core__io_bus_data_out;
  dat_dump<2>(f, Core__io_bus_data_out, 0x2827);
  goto K664;
L665:
  Core_datapath__io_bus_data_out__prev = Core_datapath__io_bus_data_out;
  dat_dump<2>(f, Core_datapath__io_bus_data_out, 0x2828);
  goto K665;
L666:
  Core_datapath_loadstore__io_bus_data_out__prev = Core_datapath_loadstore__io_bus_data_out;
  dat_dump<2>(f, Core_datapath_loadstore__io_bus_data_out, 0x2829);
  goto K666;
L667:
  Core_imem__io_core_rw_data_out__prev = Core_imem__io_core_rw_data_out;
  dat_dump<2>(f, Core_imem__io_core_rw_data_out, 0x282a);
  goto K667;
L668:
  Core_datapath__io_imem_rw_data_out__prev = Core_datapath__io_imem_rw_data_out;
  dat_dump<2>(f, Core_datapath__io_imem_rw_data_out, 0x282b);
  goto K668;
L669:
  Core_datapath_loadstore__io_imem_rw_data_out__prev = Core_datapath_loadstore__io_imem_rw_data_out;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_rw_data_out, 0x282c);
  goto K669;
L670:
  Core_dmem__io_core_data_out__prev = Core_dmem__io_core_data_out;
  dat_dump<2>(f, Core_dmem__io_core_data_out, 0x282d);
  goto K670;
L671:
  Core_datapath__io_dmem_data_out__prev = Core_datapath__io_dmem_data_out;
  dat_dump<2>(f, Core_datapath__io_dmem_data_out, 0x282e);
  goto K671;
L672:
  Core_datapath_loadstore__io_dmem_data_out__prev = Core_datapath_loadstore__io_dmem_data_out;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_data_out, 0x282f);
  goto K672;
L673:
  Core_datapath_loadstore__io_data_out__prev = Core_datapath_loadstore__io_data_out;
  dat_dump<2>(f, Core_datapath_loadstore__io_data_out, 0x2830);
  goto K673;
L674:
  Core_datapath__mem_rd_data__prev = Core_datapath__mem_rd_data;
  dat_dump<2>(f, Core_datapath__mem_rd_data, 0x2831);
  goto K674;
L675:
  Core_datapath_regfile__io_rd_data__prev = Core_datapath_regfile__io_rd_data;
  dat_dump<2>(f, Core_datapath_regfile__io_rd_data, 0x2832);
  goto K675;
L676:
  Core_datapath_regfile__dout2__prev = Core_datapath_regfile__dout2;
  dat_dump<2>(f, Core_datapath_regfile__dout2, 0x2833);
  goto K676;
L677:
  Core_datapath_regfile__io_rs1_data__prev = Core_datapath_regfile__io_rs1_data;
  dat_dump<2>(f, Core_datapath_regfile__io_rs1_data, 0x2834);
  goto K677;
L678:
  Core_datapath__wb_rd_data__prev = Core_datapath__wb_rd_data;
  dat_dump<2>(f, Core_datapath__wb_rd_data, 0x2835);
  goto K678;
L679:
  Core_datapath_csr__io_rw_data_out__prev = Core_datapath_csr__io_rw_data_out;
  dat_dump<2>(f, Core_datapath_csr__io_rw_data_out, 0x2836);
  goto K679;
L680:
  Core_datapath__exe_rd_data__prev = Core_datapath__exe_rd_data;
  dat_dump<2>(f, Core_datapath__exe_rd_data, 0x2837);
  goto K680;
L681:
  Core_datapath__dec_rs1_data__prev = Core_datapath__dec_rs1_data;
  dat_dump<2>(f, Core_datapath__dec_rs1_data, 0x2838);
  goto K681;
L682:
  Core_datapath__exe_reg_rs1_data__prev = Core_datapath__exe_reg_rs1_data;
  dat_dump<2>(f, Core_datapath__exe_reg_rs1_data, 0x2839);
  goto K682;
L683:
  Core_datapath_regfile__io_rs2_data__prev = Core_datapath_regfile__io_rs2_data;
  dat_dump<2>(f, Core_datapath_regfile__io_rs2_data, 0x283a);
  goto K683;
L684:
  Core_datapath__dec_rs2_data__prev = Core_datapath__dec_rs2_data;
  dat_dump<2>(f, Core_datapath__dec_rs2_data, 0x283b);
  goto K684;
L685:
  Core_datapath__exe_reg_rs2_data__prev = Core_datapath__exe_reg_rs2_data;
  dat_dump<2>(f, Core_datapath__exe_reg_rs2_data, 0x283c);
  goto K685;
L686:
  Core_datapath__dec_imm_i__prev = Core_datapath__dec_imm_i;
  dat_dump<2>(f, Core_datapath__dec_imm_i, 0x283d);
  goto K686;
L687:
  Core_datapath__dec_imm_z__prev = Core_datapath__dec_imm_z;
  dat_dump<2>(f, Core_datapath__dec_imm_z, 0x283e);
  goto K687;
L688:
  Core_datapath__dec_imm_j__prev = Core_datapath__dec_imm_j;
  dat_dump<2>(f, Core_datapath__dec_imm_j, 0x283f);
  goto K688;
L689:
  Core_datapath__dec_imm_u__prev = Core_datapath__dec_imm_u;
  dat_dump<2>(f, Core_datapath__dec_imm_u, 0x2840);
  goto K689;
L690:
  Core_datapath__dec_imm_b__prev = Core_datapath__dec_imm_b;
  dat_dump<2>(f, Core_datapath__dec_imm_b, 0x2841);
  goto K690;
L691:
  Core_datapath__dec_imm_s__prev = Core_datapath__dec_imm_s;
  dat_dump<2>(f, Core_datapath__dec_imm_s, 0x2842);
  goto K691;
L692:
  Core_datapath__dec_imm__prev = Core_datapath__dec_imm;
  dat_dump<2>(f, Core_datapath__dec_imm, 0x2843);
  goto K692;
L693:
  Core_datapath__dec_csr_data__prev = Core_datapath__dec_csr_data;
  dat_dump<2>(f, Core_datapath__dec_csr_data, 0x2844);
  goto K693;
L694:
  Core_datapath__exe_csr_data__prev = Core_datapath__exe_csr_data;
  dat_dump<2>(f, Core_datapath__exe_csr_data, 0x2845);
  goto K694;
L695:
  Core_datapath__if_reg_pcs_7__prev = Core_datapath__if_reg_pcs_7;
  dat_dump<2>(f, Core_datapath__if_reg_pcs_7, 0x2846);
  goto K695;
L696:
  Core_datapath__if_reg_pcs_6__prev = Core_datapath__if_reg_pcs_6;
  dat_dump<2>(f, Core_datapath__if_reg_pcs_6, 0x2847);
  goto K696;
L697:
  Core_datapath__if_reg_pcs_5__prev = Core_datapath__if_reg_pcs_5;
  dat_dump<2>(f, Core_datapath__if_reg_pcs_5, 0x2848);
  goto K697;
L698:
  Core_datapath__if_reg_pcs_4__prev = Core_datapath__if_reg_pcs_4;
  dat_dump<2>(f, Core_datapath__if_reg_pcs_4, 0x2849);
  goto K698;
L699:
  Core_datapath__if_reg_pcs_3__prev = Core_datapath__if_reg_pcs_3;
  dat_dump<2>(f, Core_datapath__if_reg_pcs_3, 0x284a);
  goto K699;
L700:
  Core_datapath__if_reg_pcs_2__prev = Core_datapath__if_reg_pcs_2;
  dat_dump<2>(f, Core_datapath__if_reg_pcs_2, 0x284b);
  goto K700;
L701:
  Core_datapath__if_reg_pcs_1__prev = Core_datapath__if_reg_pcs_1;
  dat_dump<2>(f, Core_datapath__if_reg_pcs_1, 0x284c);
  goto K701;
L702:
  Core_datapath__dec_op1__prev = Core_datapath__dec_op1;
  dat_dump<2>(f, Core_datapath__dec_op1, 0x284d);
  goto K702;
L703:
  Core_datapath__exe_reg_op1__prev = Core_datapath__exe_reg_op1;
  dat_dump<2>(f, Core_datapath__exe_reg_op1, 0x284e);
  goto K703;
L704:
  Core_datapath__dec_reg_pc4__prev = Core_datapath__dec_reg_pc4;
  dat_dump<2>(f, Core_datapath__dec_reg_pc4, 0x284f);
  goto K704;
L705:
  Core_datapath__exe_reg_pc4__prev = Core_datapath__exe_reg_pc4;
  dat_dump<2>(f, Core_datapath__exe_reg_pc4, 0x2850);
  goto K705;
L706:
  Core_datapath__mem_reg_rd_data__prev = Core_datapath__mem_reg_rd_data;
  dat_dump<2>(f, Core_datapath__mem_reg_rd_data, 0x2851);
  goto K706;
L707:
  Core_datapath__wb_reg_rd_data__prev = Core_datapath__wb_reg_rd_data;
  dat_dump<2>(f, Core_datapath__wb_reg_rd_data, 0x2852);
  goto K707;
L708:
  Core_datapath__dec_reg_inst__prev = Core_datapath__dec_reg_inst;
  dat_dump<2>(f, Core_datapath__dec_reg_inst, 0x2853);
  goto K708;
L709:
  Core_datapath__dec_op2__prev = Core_datapath__dec_op2;
  dat_dump<2>(f, Core_datapath__dec_op2, 0x2854);
  goto K709;
L710:
  Core_datapath__exe_reg_op2__prev = Core_datapath__exe_reg_op2;
  dat_dump<2>(f, Core_datapath__exe_reg_op2, 0x2855);
  goto K710;
L711:
  Core_datapath__if_reg_pcs_0__prev = Core_datapath__if_reg_pcs_0;
  dat_dump<2>(f, Core_datapath__if_reg_pcs_0, 0x2856);
  goto K711;
L712:
  Core_datapath__if_reg_pc__prev = Core_datapath__if_reg_pc;
  dat_dump<2>(f, Core_datapath__if_reg_pc, 0x2857);
  goto K712;
L713:
  Core_datapath__dec_reg_pc__prev = Core_datapath__dec_reg_pc;
  dat_dump<2>(f, Core_datapath__dec_reg_pc, 0x2858);
  goto K713;
L714:
  Core_datapath__exe_reg_pc__prev = Core_datapath__exe_reg_pc;
  dat_dump<2>(f, Core_datapath__exe_reg_pc, 0x2859);
  goto K714;
L715:
  Core_imem__io_bus_data_out__prev = Core_imem__io_bus_data_out;
  dat_dump<2>(f, Core_imem__io_bus_data_out, 0x285a);
  goto K715;
L716:
  Core__io_imem_data_out__prev = Core__io_imem_data_out;
  dat_dump<2>(f, Core__io_imem_data_out, 0x285b);
  goto K716;
L717:
  Core_dmem__io_bus_data_out__prev = Core_dmem__io_bus_data_out;
  dat_dump<2>(f, Core_dmem__io_bus_data_out, 0x285c);
  goto K717;
L718:
  Core__io_dmem_data_out__prev = Core__io_dmem_data_out;
  dat_dump<2>(f, Core__io_dmem_data_out, 0x285d);
  goto K718;
L719:
  Core_datapath_loadstore__io_bus_data_in__prev = Core_datapath_loadstore__io_bus_data_in;
  dat_dump<2>(f, Core_datapath_loadstore__io_bus_data_in, 0x285e);
  goto K719;
L720:
  Core_datapath__io_bus_data_in__prev = Core_datapath__io_bus_data_in;
  dat_dump<2>(f, Core_datapath__io_bus_data_in, 0x285f);
  goto K720;
L721:
  Core__io_bus_data_in__prev = Core__io_bus_data_in;
  dat_dump<2>(f, Core__io_bus_data_in, 0x2860);
  goto K721;
L722:
  Core_datapath_csr__io_host_to_host__prev = Core_datapath_csr__io_host_to_host;
  dat_dump<2>(f, Core_datapath_csr__io_host_to_host, 0x2861);
  goto K722;
L723:
  Core_datapath__io_host_to_host__prev = Core_datapath__io_host_to_host;
  dat_dump<2>(f, Core_datapath__io_host_to_host, 0x2862);
  goto K723;
L724:
  Core__io_host_to_host__prev = Core__io_host_to_host;
  dat_dump<2>(f, Core__io_host_to_host, 0x2863);
  goto K724;
L725:
  Core__io_dmem_data_in__prev = Core__io_dmem_data_in;
  dat_dump<2>(f, Core__io_dmem_data_in, 0x2864);
  goto K725;
L726:
  Core__io_imem_data_in__prev = Core__io_imem_data_in;
  dat_dump<2>(f, Core__io_imem_data_in, 0x2865);
  goto K726;
L727:
  Core_datapath_Multiplier__op2__prev = Core_datapath_Multiplier__op2;
  dat_dump<2>(f, Core_datapath_Multiplier__op2, 0x2866);
  goto K727;
L728:
  Core_datapath_Multiplier__op1__prev = Core_datapath_Multiplier__op1;
  dat_dump<2>(f, Core_datapath_Multiplier__op1, 0x2867);
  goto K728;
L729:
  Core_datapath_csr__status_0__prev = Core_datapath_csr__status_0;
  dat_dump<2>(f, Core_datapath_csr__status_0, 0x2868);
  goto K729;
L730:
  Core_datapath_csr__status_1__prev = Core_datapath_csr__status_1;
  dat_dump<2>(f, Core_datapath_csr__status_1, 0x2869);
  goto K730;
L731:
  Core_datapath_csr__status_2__prev = Core_datapath_csr__status_2;
  dat_dump<2>(f, Core_datapath_csr__status_2, 0x286a);
  goto K731;
L732:
  Core_datapath_csr__status_3__prev = Core_datapath_csr__status_3;
  dat_dump<2>(f, Core_datapath_csr__status_3, 0x286b);
  goto K732;
L733:
  Core_datapath_csr__status_4__prev = Core_datapath_csr__status_4;
  dat_dump<2>(f, Core_datapath_csr__status_4, 0x286c);
  goto K733;
L734:
  Core_datapath_csr__status_5__prev = Core_datapath_csr__status_5;
  dat_dump<2>(f, Core_datapath_csr__status_5, 0x286d);
  goto K734;
L735:
  Core_datapath_csr__status_6__prev = Core_datapath_csr__status_6;
  dat_dump<2>(f, Core_datapath_csr__status_6, 0x286e);
  goto K735;
L736:
  Core_datapath_csr__status_7__prev = Core_datapath_csr__status_7;
  dat_dump<2>(f, Core_datapath_csr__status_7, 0x286f);
  goto K736;
L737:
  Core_datapath_csr__data_out__prev = Core_datapath_csr__data_out;
  dat_dump<2>(f, Core_datapath_csr__data_out, 0x2870);
  goto K737;
L738:
  Core_datapath_csr__data_in__prev = Core_datapath_csr__data_in;
  dat_dump<2>(f, Core_datapath_csr__data_in, 0x2871);
  goto K738;
L739:
  Core_datapath_csr__reg_sup0_7__prev = Core_datapath_csr__reg_sup0_7;
  dat_dump<2>(f, Core_datapath_csr__reg_sup0_7, 0x2872);
  goto K739;
L740:
  Core_datapath_csr__reg_sup0_6__prev = Core_datapath_csr__reg_sup0_6;
  dat_dump<2>(f, Core_datapath_csr__reg_sup0_6, 0x2873);
  goto K740;
L741:
  Core_datapath_csr__reg_sup0_5__prev = Core_datapath_csr__reg_sup0_5;
  dat_dump<2>(f, Core_datapath_csr__reg_sup0_5, 0x2874);
  goto K741;
L742:
  Core_datapath_csr__reg_sup0_4__prev = Core_datapath_csr__reg_sup0_4;
  dat_dump<2>(f, Core_datapath_csr__reg_sup0_4, 0x2875);
  goto K742;
L743:
  Core_datapath_csr__reg_sup0_3__prev = Core_datapath_csr__reg_sup0_3;
  dat_dump<2>(f, Core_datapath_csr__reg_sup0_3, 0x2876);
  goto K743;
L744:
  Core_datapath_csr__reg_sup0_2__prev = Core_datapath_csr__reg_sup0_2;
  dat_dump<2>(f, Core_datapath_csr__reg_sup0_2, 0x2877);
  goto K744;
L745:
  Core_datapath_csr__reg_sup0_1__prev = Core_datapath_csr__reg_sup0_1;
  dat_dump<2>(f, Core_datapath_csr__reg_sup0_1, 0x2878);
  goto K745;
L746:
  Core_datapath_csr__reg_sup0_0__prev = Core_datapath_csr__reg_sup0_0;
  dat_dump<2>(f, Core_datapath_csr__reg_sup0_0, 0x2879);
  goto K746;
L747:
  Core_datapath_csr__reg_evecs_7__prev = Core_datapath_csr__reg_evecs_7;
  dat_dump<2>(f, Core_datapath_csr__reg_evecs_7, 0x287a);
  goto K747;
L748:
  Core_datapath_csr__reg_evecs_6__prev = Core_datapath_csr__reg_evecs_6;
  dat_dump<2>(f, Core_datapath_csr__reg_evecs_6, 0x287b);
  goto K748;
L749:
  Core_datapath_csr__reg_evecs_5__prev = Core_datapath_csr__reg_evecs_5;
  dat_dump<2>(f, Core_datapath_csr__reg_evecs_5, 0x287c);
  goto K749;
L750:
  Core_datapath_csr__reg_evecs_4__prev = Core_datapath_csr__reg_evecs_4;
  dat_dump<2>(f, Core_datapath_csr__reg_evecs_4, 0x287d);
  goto K750;
L751:
  Core_datapath_csr__reg_evecs_3__prev = Core_datapath_csr__reg_evecs_3;
  dat_dump<2>(f, Core_datapath_csr__reg_evecs_3, 0x287e);
  goto K751;
L752:
  Core_datapath_csr__reg_evecs_2__prev = Core_datapath_csr__reg_evecs_2;
  dat_dump<2>(f, Core_datapath_csr__reg_evecs_2, 0x2921);
  goto K752;
L753:
  Core_datapath_csr__reg_evecs_1__prev = Core_datapath_csr__reg_evecs_1;
  dat_dump<2>(f, Core_datapath_csr__reg_evecs_1, 0x2922);
  goto K753;
L754:
  Core_datapath_csr__reg_evecs_0__prev = Core_datapath_csr__reg_evecs_0;
  dat_dump<2>(f, Core_datapath_csr__reg_evecs_0, 0x2923);
  goto K754;
L755:
  Core_datapath_csr__reg_time__prev = Core_datapath_csr__reg_time;
  dat_dump<2>(f, Core_datapath_csr__reg_time, 0x2924);
  goto K755;
L756:
  Core_datapath_Multiplier__mul_result__prev = Core_datapath_Multiplier__mul_result;
  dat_dump<2>(f, Core_datapath_Multiplier__mul_result, 0x2925);
  goto K756;
}




void Core_t::clock_lo ( dat_t<1> reset ) {
  { Core_datapath__def_exe_alu_result.values[0] = Core_datapath__exe_reg_op1.values[0]+Core_datapath__exe_reg_op2.values[0];}
  Core_datapath__def_exe_alu_result.values[0] = Core_datapath__def_exe_alu_result.values[0] & 0xffffffffL;
  { Core_datapath__exe_alu_shift.values[0] = Core_datapath__exe_reg_op2.values[0];}
  Core_datapath__exe_alu_shift.values[0] = Core_datapath__exe_alu_shift.values[0] & 0x1fL;
  val_t T0;
  T0 = sval_t(Core_datapath__exe_reg_op1.values[0] << 32) >> (32 + Core_datapath__exe_alu_shift.values[0]);
  T0 = T0 & 0xffffffffL;
  { Core_control__io_exe_alu_type.values[0] = Core_control__exe_reg_alu_type.values[0];}
  { Core_datapath__io_control_exe_alu_type.values[0] = Core_control__io_exe_alu_type.values[0];}
  val_t T1;
  T1 = Core_datapath__io_control_exe_alu_type.values[0] == 0xdL;
  val_t T2;
  { T2 = TERNARY_1(T1, T0, Core_datapath__def_exe_alu_result.values[0]);}
  val_t T3;
  T3 = Core_datapath__exe_reg_op1.values[0]<Core_datapath__exe_reg_op2.values[0];
  val_t T4;
  { T4 = T3 | 0x0L << 1;}
  val_t T5;
  T5 = Core_datapath__io_control_exe_alu_type.values[0] == 0xbL;
  val_t T6;
  { T6 = TERNARY_1(T5, T4, T2);}
  val_t T7;
  T7 = (Core_datapath__exe_reg_op1.values[0] >> 31) & 1;
  val_t T8;
  T8 = Core_datapath__exe_reg_op1.values[0]<Core_datapath__exe_reg_op2.values[0];
  val_t T9;
  T9 = (Core_datapath__exe_reg_op2.values[0] >> 31) & 1;
  val_t T10;
  T10 = T7 == T9;
  val_t T11;
  { T11 = TERNARY_1(T10, T8, T7);}
  val_t T12;
  { T12 = T11 | 0x0L << 1;}
  val_t T13;
  T13 = Core_datapath__io_control_exe_alu_type.values[0] == 0xaL;
  val_t T14;
  { T14 = TERNARY_1(T13, T12, T6);}
  val_t T15;
  { T15 = Core_datapath__exe_reg_op1.values[0]-Core_datapath__exe_reg_op2.values[0];}
  T15 = T15 & 0xffffffffL;
  val_t T16;
  T16 = Core_datapath__io_control_exe_alu_type.values[0] == 0x8L;
  val_t T17;
  { T17 = TERNARY_1(T16, T15, T14);}
  val_t T18;
  { T18 = Core_datapath__exe_reg_op1.values[0] & Core_datapath__exe_reg_op2.values[0];}
  val_t T19;
  T19 = Core_datapath__io_control_exe_alu_type.values[0] == 0x7L;
  val_t T20;
  { T20 = TERNARY_1(T19, T18, T17);}
  val_t T21;
  { T21 = Core_datapath__exe_reg_op1.values[0] | Core_datapath__exe_reg_op2.values[0];}
  val_t T22;
  T22 = Core_datapath__io_control_exe_alu_type.values[0] == 0x6L;
  val_t T23;
  { T23 = TERNARY_1(T22, T21, T20);}
  val_t T24;
  T24 = Core_datapath__exe_reg_op1.values[0] >> Core_datapath__exe_alu_shift.values[0];
  val_t T25;
  T25 = Core_datapath__io_control_exe_alu_type.values[0] == 0x5L;
  val_t T26;
  { T26 = TERNARY_1(T25, T24, T23);}
  val_t T27;
  { T27 = Core_datapath__exe_reg_op1.values[0] ^ Core_datapath__exe_reg_op2.values[0];}
  val_t T28;
  T28 = Core_datapath__io_control_exe_alu_type.values[0] == 0x4L;
  val_t T29;
  { T29 = TERNARY_1(T28, T27, T26);}
  val_t T30;
  T30 = Core_datapath__exe_reg_op1.values[0] << Core_datapath__exe_alu_shift.values[0];
  T30 = T30 & 0x7fffffffffffffffL;
  val_t T31;
  { T31 = T30;}
  T31 = T31 & 0xffffffffL;
  val_t T32;
  T32 = Core_datapath__io_control_exe_alu_type.values[0] == 0x1L;
  val_t T33;
  { T33 = TERNARY_1(T32, T31, T29);}
  val_t T34;
  { T34 = Core_datapath__exe_reg_op1.values[0]+Core_datapath__exe_reg_op2.values[0];}
  T34 = T34 & 0xffffffffL;
  val_t T35;
  T35 = Core_datapath__io_control_exe_alu_type.values[0] == 0x0L;
  val_t T36;
  { T36 = TERNARY_1(T35, T34, T33);}
  { Core_datapath__exe_alu_result.values[0] = T36;}
  { Core_datapath__exe_address.values[0] = Core_datapath__exe_alu_result.values[0];}
  { Core_datapath_loadstore__io_addr.values[0] = Core_datapath__exe_address.values[0];}
  val_t T37;
  { T37 = Core_datapath_loadstore__io_addr.values[0] >> 2;}
  T37 = T37 & 0xfffL;
  { Core_datapath_loadstore__io_dmem_addr.values[0] = T37;}
  { Core_datapath__io_dmem_addr.values[0] = Core_datapath_loadstore__io_dmem_addr.values[0];}
  { Core_dmem__io_core_addr.values[0] = Core_datapath__io_dmem_addr.values[0];}
  val_t T38;
  { T38 = Core_dmem__dspm.get(Core_dmem__io_core_addr.values[0], 0);}
  val_t T39;
  { T39 = T38;}
  T39 = T39 & 0xffL;
  { Core_datapath_loadstore__io_data_in.values[0] = Core_datapath__exe_reg_rs2_data.values[0];}
  val_t T40;
  { T40 = Core_datapath_loadstore__io_data_in.values[0];}
  T40 = T40 & 0xffffL;
  val_t T41;
  { T41 = T40 | T40 << 16;}
  { Core_control__io_exe_mem_type.values[0] = Core_control__exe_reg_mem_type.values[0];}
  { Core_datapath__io_control_exe_mem_type.values[0] = Core_control__io_exe_mem_type.values[0];}
  { Core_datapath_loadstore__io_mem_type.values[0] = Core_datapath__io_control_exe_mem_type.values[0];}
  val_t T42;
  T42 = Core_datapath_loadstore__io_mem_type.values[0] == 0x9L;
  val_t T43;
  { T43 = TERNARY_1(T42, T41, Core_datapath_loadstore__io_data_in.values[0]);}
  val_t T44;
  { T44 = Core_datapath_loadstore__io_data_in.values[0];}
  T44 = T44 & 0xffL;
  val_t T45;
  { T45 = T44 | T44 << 8;}
  val_t T46;
  { T46 = T45 | T45 << 16;}
  val_t T47;
  T47 = Core_datapath_loadstore__io_mem_type.values[0] == 0x8L;
  val_t T48;
  { T48 = TERNARY_1(T47, T46, T43);}
  { Core_datapath_loadstore__io_dmem_data_in.values[0] = T48;}
  { Core_datapath__io_dmem_data_in.values[0] = Core_datapath_loadstore__io_dmem_data_in.values[0];}
  { Core_dmem__io_core_data_in.values[0] = Core_datapath__io_dmem_data_in.values[0];}
  val_t T49;
  { T49 = Core_dmem__io_core_data_in.values[0];}
  T49 = T49 & 0xffL;
  { Core_datapath_csr__io_rw_thread.values[0] = Core_datapath__exe_reg_tid.values[0];}
  val_t T50;
  T50 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T51;
  { T51 = TERNARY_1(T50, Core_datapath_csr__reg_msip_1.values[0], Core_datapath_csr__reg_msip_0.values[0]);}
  val_t T52;
  T52 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T53;
  { T53 = TERNARY_1(T52, Core_datapath_csr__reg_msip_3.values[0], Core_datapath_csr__reg_msip_2.values[0]);}
  val_t T54;
  T54 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T55;
  { T55 = TERNARY_1(T54, T53, T51);}
  val_t T56;
  T56 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T57;
  { T57 = TERNARY_1(T56, Core_datapath_csr__reg_msip_5.values[0], Core_datapath_csr__reg_msip_4.values[0]);}
  val_t T58;
  T58 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T59;
  { T59 = TERNARY_1(T58, Core_datapath_csr__reg_msip_7.values[0], Core_datapath_csr__reg_msip_6.values[0]);}
  val_t T60;
  T60 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T61;
  { T61 = TERNARY_1(T60, T59, T57);}
  val_t T62;
  T62 = (Core_datapath_csr__io_rw_thread.values[0] >> 2) & 1;
  val_t T63;
  { T63 = TERNARY_1(T62, T61, T55);}
  val_t T64;
  T64 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T65;
  { T65 = TERNARY_1(T64, Core_datapath_csr__reg_ie_1.values[0], Core_datapath_csr__reg_ie_0.values[0]);}
  val_t T66;
  T66 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T67;
  { T67 = TERNARY_1(T66, Core_datapath_csr__reg_ie_3.values[0], Core_datapath_csr__reg_ie_2.values[0]);}
  val_t T68;
  T68 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T69;
  { T69 = TERNARY_1(T68, T67, T65);}
  val_t T70;
  T70 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T71;
  { T71 = TERNARY_1(T70, Core_datapath_csr__reg_ie_5.values[0], Core_datapath_csr__reg_ie_4.values[0]);}
  val_t T72;
  T72 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T73;
  { T73 = TERNARY_1(T72, Core_datapath_csr__reg_ie_7.values[0], Core_datapath_csr__reg_ie_6.values[0]);}
  val_t T74;
  T74 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T75;
  { T75 = TERNARY_1(T74, T73, T71);}
  val_t T76;
  T76 = (Core_datapath_csr__io_rw_thread.values[0] >> 2) & 1;
  val_t T77;
  { T77 = TERNARY_1(T76, T75, T69);}
  val_t T78;
  { T78 = T77 & T63;}
  { Core_datapath_csr__int_ext.values[0] = T78;}
  { Core_datapath_csr__io_int_ext.values[0] = Core_datapath_csr__int_ext.values[0];}
  { Core_datapath__io_control_exe_int_ext.values[0] = Core_datapath_csr__io_int_ext.values[0];}
  { Core_control__io_exe_int_ext.values[0] = Core_datapath__io_control_exe_int_ext.values[0];}
  val_t T79;
  { T79 = Core_datapath_csr__reg_time.values[0];}
  T79 = T79 & 0xffffffffL;
  val_t T80;
  { T80 = T79-Core_datapath_csr__reg_compare_0.values[0];}
  T80 = T80 & 0xffffffffL;
  val_t T81;
  T81 = (T80 >> 31) & 1;
  val_t T82;
  T82 = T81 == 0x0L;
  { Core_datapath_csr__expired_0.values[0] = T82;}
  val_t T83;
  { T83 = Core_datapath_csr__reg_time.values[0];}
  T83 = T83 & 0xffffffffL;
  val_t T84;
  { T84 = T83-Core_datapath_csr__reg_compare_1.values[0];}
  T84 = T84 & 0xffffffffL;
  val_t T85;
  T85 = (T84 >> 31) & 1;
  val_t T86;
  T86 = T85 == 0x0L;
  { Core_datapath_csr__expired_1.values[0] = T86;}
  val_t T87;
  T87 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T88;
  { T88 = TERNARY_1(T87, Core_datapath_csr__expired_1.values[0], Core_datapath_csr__expired_0.values[0]);}
  val_t T89;
  { T89 = Core_datapath_csr__reg_time.values[0];}
  T89 = T89 & 0xffffffffL;
  val_t T90;
  { T90 = T89-Core_datapath_csr__reg_compare_2.values[0];}
  T90 = T90 & 0xffffffffL;
  val_t T91;
  T91 = (T90 >> 31) & 1;
  val_t T92;
  T92 = T91 == 0x0L;
  { Core_datapath_csr__expired_2.values[0] = T92;}
  val_t T93;
  { T93 = Core_datapath_csr__reg_time.values[0];}
  T93 = T93 & 0xffffffffL;
  val_t T94;
  { T94 = T93-Core_datapath_csr__reg_compare_3.values[0];}
  T94 = T94 & 0xffffffffL;
  val_t T95;
  T95 = (T94 >> 31) & 1;
  val_t T96;
  T96 = T95 == 0x0L;
  { Core_datapath_csr__expired_3.values[0] = T96;}
  val_t T97;
  T97 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T98;
  { T98 = TERNARY_1(T97, Core_datapath_csr__expired_3.values[0], Core_datapath_csr__expired_2.values[0]);}
  val_t T99;
  T99 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T100;
  { T100 = TERNARY_1(T99, T98, T88);}
  val_t T101;
  { T101 = Core_datapath_csr__reg_time.values[0];}
  T101 = T101 & 0xffffffffL;
  val_t T102;
  { T102 = T101-Core_datapath_csr__reg_compare_4.values[0];}
  T102 = T102 & 0xffffffffL;
  val_t T103;
  T103 = (T102 >> 31) & 1;
  val_t T104;
  T104 = T103 == 0x0L;
  { Core_datapath_csr__expired_4.values[0] = T104;}
  val_t T105;
  { T105 = Core_datapath_csr__reg_time.values[0];}
  T105 = T105 & 0xffffffffL;
  val_t T106;
  { T106 = T105-Core_datapath_csr__reg_compare_5.values[0];}
  T106 = T106 & 0xffffffffL;
  val_t T107;
  T107 = (T106 >> 31) & 1;
  val_t T108;
  T108 = T107 == 0x0L;
  { Core_datapath_csr__expired_5.values[0] = T108;}
  val_t T109;
  T109 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T110;
  { T110 = TERNARY_1(T109, Core_datapath_csr__expired_5.values[0], Core_datapath_csr__expired_4.values[0]);}
  val_t T111;
  { T111 = Core_datapath_csr__reg_time.values[0];}
  T111 = T111 & 0xffffffffL;
  val_t T112;
  { T112 = T111-Core_datapath_csr__reg_compare_6.values[0];}
  T112 = T112 & 0xffffffffL;
  val_t T113;
  T113 = (T112 >> 31) & 1;
  val_t T114;
  T114 = T113 == 0x0L;
  { Core_datapath_csr__expired_6.values[0] = T114;}
  val_t T115;
  { T115 = Core_datapath_csr__reg_time.values[0];}
  T115 = T115 & 0xffffffffL;
  val_t T116;
  { T116 = T115-Core_datapath_csr__reg_compare_7.values[0];}
  T116 = T116 & 0xffffffffL;
  val_t T117;
  T117 = (T116 >> 31) & 1;
  val_t T118;
  T118 = T117 == 0x0L;
  { Core_datapath_csr__expired_7.values[0] = T118;}
  val_t T119;
  T119 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T120;
  { T120 = TERNARY_1(T119, Core_datapath_csr__expired_7.values[0], Core_datapath_csr__expired_6.values[0]);}
  val_t T121;
  T121 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T122;
  { T122 = TERNARY_1(T121, T120, T110);}
  val_t T123;
  T123 = (Core_datapath_csr__io_rw_thread.values[0] >> 2) & 1;
  val_t T124;
  { T124 = TERNARY_1(T123, T122, T100);}
  val_t T125;
  T125 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T126;
  { T126 = TERNARY_1(T125, Core_datapath_csr__reg_timer_1.values[0], Core_datapath_csr__reg_timer_0.values[0]);}
  val_t T127;
  T127 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T128;
  { T128 = TERNARY_1(T127, Core_datapath_csr__reg_timer_3.values[0], Core_datapath_csr__reg_timer_2.values[0]);}
  val_t T129;
  T129 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T130;
  { T130 = TERNARY_1(T129, T128, T126);}
  val_t T131;
  T131 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T132;
  { T132 = TERNARY_1(T131, Core_datapath_csr__reg_timer_5.values[0], Core_datapath_csr__reg_timer_4.values[0]);}
  val_t T133;
  T133 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T134;
  { T134 = TERNARY_1(T133, Core_datapath_csr__reg_timer_7.values[0], Core_datapath_csr__reg_timer_6.values[0]);}
  val_t T135;
  T135 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T136;
  { T136 = TERNARY_1(T135, T134, T132);}
  val_t T137;
  T137 = (Core_datapath_csr__io_rw_thread.values[0] >> 2) & 1;
  val_t T138;
  { T138 = TERNARY_1(T137, T136, T130);}
  val_t T139;
  T139 = T138 == 0x2L;
  { Core_control__io_exe_valid.values[0] = Core_control__exe_reg_valid.values[0];}
  { Core_datapath__io_control_exe_valid.values[0] = Core_control__io_exe_valid.values[0];}
  { Core_datapath_csr__io_rw_valid.values[0] = Core_datapath__io_control_exe_valid.values[0];}
  val_t T140;
  { T140 = Core_datapath_csr__io_rw_valid.values[0] & T139;}
  val_t T141;
  { T141 = T140 & T124;}
  val_t T142;
  T142 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T143;
  { T143 = TERNARY_1(T142, Core_datapath_csr__reg_mtie_1.values[0], Core_datapath_csr__reg_mtie_0.values[0]);}
  val_t T144;
  T144 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T145;
  { T145 = TERNARY_1(T144, Core_datapath_csr__reg_mtie_3.values[0], Core_datapath_csr__reg_mtie_2.values[0]);}
  val_t T146;
  T146 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T147;
  { T147 = TERNARY_1(T146, T145, T143);}
  val_t T148;
  T148 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T149;
  { T149 = TERNARY_1(T148, Core_datapath_csr__reg_mtie_5.values[0], Core_datapath_csr__reg_mtie_4.values[0]);}
  val_t T150;
  T150 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T151;
  { T151 = TERNARY_1(T150, Core_datapath_csr__reg_mtie_7.values[0], Core_datapath_csr__reg_mtie_6.values[0]);}
  val_t T152;
  T152 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T153;
  { T153 = TERNARY_1(T152, T151, T149);}
  val_t T154;
  T154 = (Core_datapath_csr__io_rw_thread.values[0] >> 2) & 1;
  val_t T155;
  { T155 = TERNARY_1(T154, T153, T147);}
  val_t T156;
  { T156 = T155 | T141;}
  val_t T157;
  { T157 = T77 & T156;}
  { Core_datapath_csr__int_expire.values[0] = T157;}
  { Core_datapath_csr__io_int_expire.values[0] = Core_datapath_csr__int_expire.values[0];}
  { Core_datapath__io_control_exe_int_expire.values[0] = Core_datapath_csr__io_int_expire.values[0];}
  { Core_control__io_exe_int_expire.values[0] = Core_datapath__io_control_exe_int_expire.values[0];}
  val_t T158;
  T158 = T138 == 0x3L;
  val_t T159;
  { T159 = Core_datapath_csr__io_rw_valid.values[0] & T158;}
  val_t T160;
  { T160 = T159 & T124;}
  { Core_datapath_csr__exc_expire.values[0] = T160;}
  { Core_datapath_csr__io_exc_expire.values[0] = Core_datapath_csr__exc_expire.values[0];}
  { Core_datapath__io_control_exe_exc_expire.values[0] = Core_datapath_csr__io_exc_expire.values[0];}
  { Core_control__io_exe_exc_expire.values[0] = Core_datapath__io_control_exe_exc_expire.values[0];}
  val_t T161;
  { T161 = Core_control__io_exe_exc_expire.values[0] | Core_control__io_exe_int_expire.values[0];}
  { Core_control__exe_any_exc.values[0] = T161 | Core_control__io_exe_int_ext.values[0];}
  { Core_control__exe_kill.values[0] = Core_control__exe_reg_exc.values[0] | Core_control__exe_any_exc.values[0];}
  { Core_control__io_exe_kill.values[0] = Core_control__exe_kill.values[0];}
  { Core_datapath__io_control_exe_kill.values[0] = Core_control__io_exe_kill.values[0];}
  { Core_datapath_loadstore__io_kill.values[0] = Core_datapath__io_control_exe_kill.values[0];}
  val_t T162;
  { T162 = Core_datapath_loadstore__io_kill.values[0] ^ 0x1L;}
  { Core_datapath_loadstore__store_fault.values[0] = 0x0L;}
  val_t T163;
  { T163 = Core_datapath_loadstore__store_fault.values[0] ^ 0x1L;}
  val_t T164;
  { T164 = Core_datapath_loadstore__io_addr.values[0];}
  T164 = T164 & 0x3L;
  val_t T165;
  T165 = T164 != 0x0L;
  val_t T166;
  T166 = Core_datapath_loadstore__io_mem_type.values[0] == 0xaL;
  val_t T167;
  { T167 = T166 & T165;}
  val_t T168;
  T168 = (Core_datapath_loadstore__io_addr.values[0] >> 0) & 1;
  val_t T169;
  T169 = T168 != 0x0L;
  val_t T170;
  T170 = Core_datapath_loadstore__io_mem_type.values[0] == 0x9L;
  val_t T171;
  { T171 = T170 & T169;}
  val_t T172;
  { T172 = T171 | T167;}
  { Core_control__exe_store.values[0] = Core_control__exe_reg_store.values[0] & Core_control__exe_reg_valid.values[0];}
  { Core_control__io_exe_store.values[0] = Core_control__exe_store.values[0];}
  { Core_datapath__io_control_exe_store.values[0] = Core_control__io_exe_store.values[0];}
  { Core_datapath_loadstore__io_store.values[0] = Core_datapath__io_control_exe_store.values[0];}
  val_t T173;
  { T173 = Core_datapath_loadstore__io_store.values[0] & T172;}
  { Core_datapath_loadstore__store_misaligned.values[0] = T173;}
  val_t T174;
  { T174 = Core_datapath_loadstore__store_misaligned.values[0] ^ 0x1L;}
  val_t T175;
  { T175 = Core_datapath_loadstore__io_addr.values[0] >> 30;}
  T175 = T175 & 0x3L;
  Core_datapath_loadstore__bus_op.values[0] = T175 == 0x1L;
  { Core_datapath_csr__io_imem_protection_0.values[0] = Core_datapath_csr__reg_imem_protection_0.values[0];}
  { Core_datapath_loadstore__io_imem_protection_0.values[0] = Core_datapath_csr__io_imem_protection_0.values[0];}
  { Core_datapath_csr__io_imem_protection_1.values[0] = Core_datapath_csr__reg_imem_protection_1.values[0];}
  { Core_datapath_loadstore__io_imem_protection_1.values[0] = Core_datapath_csr__io_imem_protection_1.values[0];}
  val_t T176;
  { T176 = Core_datapath_loadstore__io_addr.values[0] >> 11;}
  T176 = T176 & 0x7L;
  val_t T177;
  T177 = (T176 >> 0) & 1;
  val_t T178;
  { T178 = TERNARY_1(T177, Core_datapath_loadstore__io_imem_protection_1.values[0], Core_datapath_loadstore__io_imem_protection_0.values[0]);}
  { Core_datapath_csr__io_imem_protection_2.values[0] = Core_datapath_csr__reg_imem_protection_2.values[0];}
  { Core_datapath_loadstore__io_imem_protection_2.values[0] = Core_datapath_csr__io_imem_protection_2.values[0];}
  { Core_datapath_csr__io_imem_protection_3.values[0] = Core_datapath_csr__reg_imem_protection_3.values[0];}
  { Core_datapath_loadstore__io_imem_protection_3.values[0] = Core_datapath_csr__io_imem_protection_3.values[0];}
  val_t T179;
  T179 = (T176 >> 0) & 1;
  val_t T180;
  { T180 = TERNARY_1(T179, Core_datapath_loadstore__io_imem_protection_3.values[0], Core_datapath_loadstore__io_imem_protection_2.values[0]);}
  val_t T181;
  T181 = (T176 >> 1) & 1;
  val_t T182;
  { T182 = TERNARY_1(T181, T180, T178);}
  { Core_datapath_csr__io_imem_protection_4.values[0] = Core_datapath_csr__reg_imem_protection_4.values[0];}
  { Core_datapath_loadstore__io_imem_protection_4.values[0] = Core_datapath_csr__io_imem_protection_4.values[0];}
  { Core_datapath_csr__io_imem_protection_5.values[0] = Core_datapath_csr__reg_imem_protection_5.values[0];}
  { Core_datapath_loadstore__io_imem_protection_5.values[0] = Core_datapath_csr__io_imem_protection_5.values[0];}
  val_t T183;
  T183 = (T176 >> 0) & 1;
  val_t T184;
  { T184 = TERNARY_1(T183, Core_datapath_loadstore__io_imem_protection_5.values[0], Core_datapath_loadstore__io_imem_protection_4.values[0]);}
  { Core_datapath_csr__io_imem_protection_6.values[0] = Core_datapath_csr__reg_imem_protection_6.values[0];}
  { Core_datapath_loadstore__io_imem_protection_6.values[0] = Core_datapath_csr__io_imem_protection_6.values[0];}
  { Core_datapath_csr__io_imem_protection_7.values[0] = Core_datapath_csr__reg_imem_protection_7.values[0];}
  { Core_datapath_loadstore__io_imem_protection_7.values[0] = Core_datapath_csr__io_imem_protection_7.values[0];}
  val_t T185;
  T185 = (T176 >> 0) & 1;
  val_t T186;
  { T186 = TERNARY_1(T185, Core_datapath_loadstore__io_imem_protection_7.values[0], Core_datapath_loadstore__io_imem_protection_6.values[0]);}
  val_t T187;
  T187 = (T176 >> 1) & 1;
  val_t T188;
  { T188 = TERNARY_1(T187, T186, T184);}
  val_t T189;
  T189 = (T176 >> 2) & 1;
  val_t T190;
  { T190 = TERNARY_1(T189, T188, T182);}
  val_t T191;
  T191 = T190 != 0xcL;
  { Core_datapath_loadstore__io_thread.values[0] = Core_datapath__exe_reg_tid.values[0];}
  val_t T192;
  { T192 = T190;}
  T192 = T192 & 0x7L;
  val_t T193;
  T193 = T192 == Core_datapath_loadstore__io_thread.values[0];
  val_t T194;
  T194 = T190 == 0x8L;
  val_t T195;
  { T195 = T194 | T193;}
  val_t T196;
  { T196 = T195 & T191;}
  val_t T197;
  { T197 = Core_datapath_loadstore__io_addr.values[0] >> 29;}
  T197 = T197 & 0x7L;
  Core_datapath_loadstore__imem_op.values[0] = T197 == 0x0L;
  val_t T198;
  { T198 = Core_datapath_loadstore__imem_op.values[0] & T196;}
  { Core_datapath_csr__io_dmem_protection_0.values[0] = Core_datapath_csr__reg_dmem_protection_0.values[0];}
  { Core_datapath_loadstore__io_dmem_protection_0.values[0] = Core_datapath_csr__io_dmem_protection_0.values[0];}
  { Core_datapath_csr__io_dmem_protection_1.values[0] = Core_datapath_csr__reg_dmem_protection_1.values[0];}
  { Core_datapath_loadstore__io_dmem_protection_1.values[0] = Core_datapath_csr__io_dmem_protection_1.values[0];}
  val_t T199;
  { T199 = Core_datapath_loadstore__io_addr.values[0] >> 11;}
  T199 = T199 & 0x7L;
  val_t T200;
  T200 = (T199 >> 0) & 1;
  val_t T201;
  { T201 = TERNARY_1(T200, Core_datapath_loadstore__io_dmem_protection_1.values[0], Core_datapath_loadstore__io_dmem_protection_0.values[0]);}
  { Core_datapath_csr__io_dmem_protection_2.values[0] = Core_datapath_csr__reg_dmem_protection_2.values[0];}
  { Core_datapath_loadstore__io_dmem_protection_2.values[0] = Core_datapath_csr__io_dmem_protection_2.values[0];}
  { Core_datapath_csr__io_dmem_protection_3.values[0] = Core_datapath_csr__reg_dmem_protection_3.values[0];}
  { Core_datapath_loadstore__io_dmem_protection_3.values[0] = Core_datapath_csr__io_dmem_protection_3.values[0];}
  val_t T202;
  T202 = (T199 >> 0) & 1;
  val_t T203;
  { T203 = TERNARY_1(T202, Core_datapath_loadstore__io_dmem_protection_3.values[0], Core_datapath_loadstore__io_dmem_protection_2.values[0]);}
  val_t T204;
  T204 = (T199 >> 1) & 1;
  val_t T205;
  { T205 = TERNARY_1(T204, T203, T201);}
  { Core_datapath_csr__io_dmem_protection_4.values[0] = Core_datapath_csr__reg_dmem_protection_4.values[0];}
  { Core_datapath_loadstore__io_dmem_protection_4.values[0] = Core_datapath_csr__io_dmem_protection_4.values[0];}
  { Core_datapath_csr__io_dmem_protection_5.values[0] = Core_datapath_csr__reg_dmem_protection_5.values[0];}
  { Core_datapath_loadstore__io_dmem_protection_5.values[0] = Core_datapath_csr__io_dmem_protection_5.values[0];}
  val_t T206;
  T206 = (T199 >> 0) & 1;
  val_t T207;
  { T207 = TERNARY_1(T206, Core_datapath_loadstore__io_dmem_protection_5.values[0], Core_datapath_loadstore__io_dmem_protection_4.values[0]);}
  { Core_datapath_csr__io_dmem_protection_6.values[0] = Core_datapath_csr__reg_dmem_protection_6.values[0];}
  { Core_datapath_loadstore__io_dmem_protection_6.values[0] = Core_datapath_csr__io_dmem_protection_6.values[0];}
  { Core_datapath_csr__io_dmem_protection_7.values[0] = Core_datapath_csr__reg_dmem_protection_7.values[0];}
  { Core_datapath_loadstore__io_dmem_protection_7.values[0] = Core_datapath_csr__io_dmem_protection_7.values[0];}
  val_t T208;
  T208 = (T199 >> 0) & 1;
  val_t T209;
  { T209 = TERNARY_1(T208, Core_datapath_loadstore__io_dmem_protection_7.values[0], Core_datapath_loadstore__io_dmem_protection_6.values[0]);}
  val_t T210;
  T210 = (T199 >> 1) & 1;
  val_t T211;
  { T211 = TERNARY_1(T210, T209, T207);}
  val_t T212;
  T212 = (T199 >> 2) & 1;
  val_t T213;
  { T213 = TERNARY_1(T212, T211, T205);}
  val_t T214;
  T214 = T213 != 0xcL;
  val_t T215;
  { T215 = T213;}
  T215 = T215 & 0x7L;
  val_t T216;
  T216 = T215 == Core_datapath_loadstore__io_thread.values[0];
  val_t T217;
  T217 = T213 == 0x8L;
  val_t T218;
  { T218 = T217 | T216;}
  val_t T219;
  { T219 = T218 & T214;}
  val_t T220;
  { T220 = Core_datapath_loadstore__io_addr.values[0] >> 29;}
  T220 = T220 & 0x7L;
  Core_datapath_loadstore__dmem_op.values[0] = T220 == 0x1L;
  val_t T221;
  { T221 = Core_datapath_loadstore__dmem_op.values[0] & T219;}
  val_t T222;
  { T222 = T221 | T198;}
  val_t T223;
  { T223 = T222 | Core_datapath_loadstore__bus_op.values[0];}
  { Core_datapath_loadstore__permission.values[0] = T223;}
  val_t T224;
  { T224 = Core_datapath_loadstore__io_store.values[0] & Core_datapath_loadstore__permission.values[0];}
  val_t T225;
  { T225 = T224 & T174;}
  val_t T226;
  { T226 = T225 & T163;}
  { Core_datapath_loadstore__write.values[0] = T226 & T162;}
  val_t T227;
  { T227 = TERNARY(Core_datapath_loadstore__write.values[0], 0xfL, 0x0L);}
  val_t T228;
  { T228 = T227 | 0x0L << 4;}
  val_t T229;
  T229 = Core_datapath_loadstore__io_mem_type.values[0] == 0xaL;
  val_t T230;
  { T230 = TERNARY(T229, 0xfL, 0x0L);}
  val_t T231;
  { T231 = T230 | 0x0L << 4;}
  val_t T232;
  { T232 = Core_datapath_loadstore__io_addr.values[0];}
  T232 = T232 & 0x3L;
  val_t T233;
  T233 = 0x3L << T232;
  T233 = T233 & 0x1fL;
  val_t T234;
  T234 = Core_datapath_loadstore__io_mem_type.values[0] == 0x9L;
  val_t T235;
  { T235 = TERNARY_1(T234, T233, T231);}
  val_t T236;
  T236 = 0x1L << T232;
  T236 = T236 & 0xfL;
  val_t T237;
  { T237 = T236 | 0x0L << 4;}
  val_t T238;
  T238 = Core_datapath_loadstore__io_mem_type.values[0] == 0x8L;
  val_t T239;
  { T239 = TERNARY_1(T238, T237, T235);}
  val_t T240;
  { T240 = T239 & T228;}
  val_t T241;
  T241 = (T240 >> 0) & 1;
  { Core_datapath_loadstore__io_dmem_byte_write_0.values[0] = T241;}
  { Core_datapath__io_dmem_byte_write_0.values[0] = Core_datapath_loadstore__io_dmem_byte_write_0.values[0];}
  { Core_dmem__io_core_byte_write_0.values[0] = Core_datapath__io_dmem_byte_write_0.values[0];}
  val_t T242;
  { T242 = TERNARY_1(Core_dmem__io_core_byte_write_0.values[0], T49, T39);}
  val_t T243;
  { T243 = T38 >> 8;}
  T243 = T243 & 0xffL;
  val_t T244;
  { T244 = Core_dmem__io_core_data_in.values[0] >> 8;}
  T244 = T244 & 0xffL;
  val_t T245;
  T245 = (T240 >> 1) & 1;
  { Core_datapath_loadstore__io_dmem_byte_write_1.values[0] = T245;}
  { Core_datapath__io_dmem_byte_write_1.values[0] = Core_datapath_loadstore__io_dmem_byte_write_1.values[0];}
  { Core_dmem__io_core_byte_write_1.values[0] = Core_datapath__io_dmem_byte_write_1.values[0];}
  val_t T246;
  { T246 = TERNARY_1(Core_dmem__io_core_byte_write_1.values[0], T244, T243);}
  val_t T247;
  { T247 = T242 | T246 << 8;}
  val_t T248;
  { T248 = T38 >> 16;}
  T248 = T248 & 0xffL;
  val_t T249;
  { T249 = Core_dmem__io_core_data_in.values[0] >> 16;}
  T249 = T249 & 0xffL;
  val_t T250;
  T250 = (T240 >> 2) & 1;
  { Core_datapath_loadstore__io_dmem_byte_write_2.values[0] = T250;}
  { Core_datapath__io_dmem_byte_write_2.values[0] = Core_datapath_loadstore__io_dmem_byte_write_2.values[0];}
  { Core_dmem__io_core_byte_write_2.values[0] = Core_datapath__io_dmem_byte_write_2.values[0];}
  val_t T251;
  { T251 = TERNARY_1(Core_dmem__io_core_byte_write_2.values[0], T249, T248);}
  val_t T252;
  { T252 = T38 >> 24;}
  T252 = T252 & 0xffL;
  val_t T253;
  { T253 = Core_dmem__io_core_data_in.values[0] >> 24;}
  T253 = T253 & 0xffL;
  val_t T254;
  T254 = (T240 >> 3) & 1;
  { Core_datapath_loadstore__io_dmem_byte_write_3.values[0] = T254;}
  { Core_datapath__io_dmem_byte_write_3.values[0] = Core_datapath_loadstore__io_dmem_byte_write_3.values[0];}
  { Core_dmem__io_core_byte_write_3.values[0] = Core_datapath__io_dmem_byte_write_3.values[0];}
  val_t T255;
  { T255 = TERNARY_1(Core_dmem__io_core_byte_write_3.values[0], T253, T252);}
  val_t T256;
  { T256 = T251 | T255 << 8;}
  { T257.values[0] = T247 | T256 << 16;}
  { Core_control__exe_load.values[0] = Core_control__exe_reg_load.values[0] & Core_control__exe_reg_valid.values[0];}
  { Core_control__io_exe_load.values[0] = Core_control__exe_load.values[0];}
  { Core_datapath__io_control_exe_load.values[0] = Core_control__io_exe_load.values[0];}
  { Core_datapath_loadstore__io_load.values[0] = Core_datapath__io_control_exe_load.values[0];}
  val_t T258;
  { T258 = Core_datapath_loadstore__io_load.values[0] | Core_datapath_loadstore__io_store.values[0];}
  val_t T259;
  { T259 = Core_datapath_loadstore__dmem_op.values[0] & T258;}
  { Core_datapath_loadstore__io_dmem_enable.values[0] = T259;}
  { Core_datapath__io_dmem_enable.values[0] = Core_datapath_loadstore__io_dmem_enable.values[0];}
  { Core_dmem__io_core_enable.values[0] = Core_datapath__io_dmem_enable.values[0];}
  { T260.values[0] = TERNARY_1(Core_dmem__io_core_enable.values[0], T38, Core_dmem__dout.values[0]);}
  val_t T261;
  { T261 = Core_datapath__if_reg_pc.values[0]+0x4L;}
  T261 = T261 & 0xffffffffL;
  { Core_datapath__if_pc_plus4.values[0] = T261;}
  val_t T262;
  T262 = 0x1L << Core_datapath__if_reg_tid.values[0];
  T262 = T262 & 0xffL;
  val_t T263;
  T263 = (T262 >> 0) & 1;
  { Core_datapath__io_control_if_tid.values[0] = Core_datapath__if_reg_tid.values[0];}
  { Core_control__io_if_tid.values[0] = Core_datapath__io_control_if_tid.values[0];}
  val_t T264;
  T264 = 0x1L << Core_control__io_if_tid.values[0];
  T264 = T264 & 0xffL;
  val_t T265;
  T265 = (T264 >> 0) & 1;
  val_t T266;
  T266 = (Core_control__io_if_tid.values[0] >> 0) & 1;
  val_t T267;
  { T267 = TERNARY_1(T266, Core_control__stall_count_1.values[0], Core_control__stall_count_0.values[0]);}
  val_t T268;
  T268 = (Core_control__io_if_tid.values[0] >> 0) & 1;
  val_t T269;
  { T269 = TERNARY_1(T268, Core_control__stall_count_3.values[0], Core_control__stall_count_2.values[0]);}
  val_t T270;
  T270 = (Core_control__io_if_tid.values[0] >> 1) & 1;
  val_t T271;
  { T271 = TERNARY_1(T270, T269, T267);}
  val_t T272;
  T272 = (Core_control__io_if_tid.values[0] >> 0) & 1;
  val_t T273;
  { T273 = TERNARY_1(T272, Core_control__stall_count_5.values[0], Core_control__stall_count_4.values[0]);}
  val_t T274;
  T274 = (Core_control__io_if_tid.values[0] >> 0) & 1;
  val_t T275;
  { T275 = TERNARY_1(T274, Core_control__stall_count_7.values[0], Core_control__stall_count_6.values[0]);}
  val_t T276;
  T276 = (Core_control__io_if_tid.values[0] >> 1) & 1;
  val_t T277;
  { T277 = TERNARY_1(T276, T275, T273);}
  val_t T278;
  T278 = (Core_control__io_if_tid.values[0] >> 2) & 1;
  val_t T279;
  { T279 = TERNARY_1(T278, T277, T271);}
  val_t T280;
  T280 = T279 == 0x0L;
  { Core_datapath__io_control_dec_tid.values[0] = Core_datapath__dec_reg_tid.values[0];}
  { Core_control__io_dec_tid.values[0] = Core_datapath__io_control_dec_tid.values[0];}
  val_t T281;
  T281 = Core_control__io_if_tid.values[0] == Core_control__io_dec_tid.values[0];
  { Core_datapath__io_control_dec_inst.values[0] = Core_datapath__dec_reg_inst.values[0];}
  { Core_control__io_dec_inst.values[0] = Core_datapath__io_control_dec_inst.values[0];}
  val_t T282;
  { T282 = Core_control__io_dec_inst.values[0] & 0x207fL;}
  val_t T283;
  T283 = T282 == 0x3L;
  val_t T284;
  { T284 = Core_control__io_dec_inst.values[0] & 0x507fL;}
  val_t T285;
  T285 = T284 == 0x3L;
  { Core_control__dec_load.values[0] = T285 | T283;}
  val_t T286;
  { T286 = Core_control__dec_reg_valid.values[0] & Core_control__dec_load.values[0];}
  val_t T287;
  { T287 = Core_control__io_dec_inst.values[0] & 0x50L;}
  val_t T288;
  T288 = T287 == 0x0L;
  val_t T289;
  { T289 = Core_control__io_dec_inst.values[0] & 0x2000064L;}
  val_t T290;
  T290 = T289 == 0x2000020L;
  { Core_control__dec_mem_rd_data_sel.values[0] = T288 | T290 << 1;}
  val_t T291;
  T291 = Core_control__dec_mem_rd_data_sel.values[0] == 0x2L;
  val_t T292;
  { T292 = Core_control__dec_reg_valid.values[0] & T291;}
  val_t T293;
  { T293 = TERNARY(T292, 0x1L, T286);}
  val_t T294;
  { T294 = Core_control__io_dec_inst.values[0] & 0x707fL;}
  Core_control__dec_fence_i.values[0] = T294 == 0x100fL;
  val_t T295;
  { T295 = Core_control__dec_reg_valid.values[0] & Core_control__dec_fence_i.values[0];}
  val_t T296;
  { T296 = TERNARY(T295, 0x1L, T293);}
  { Core_control__dec_stall.values[0] = T296;}
  val_t T297;
  { T297 = Core_control__dec_stall.values[0] & T281;}
  val_t T298;
  { T298 = T297 ^ 0x1L;}
  val_t T299;
  { T299 = Core_control__if_reg_valid.values[0] & T298;}
  { Core_control__if_pre_valid.values[0] = T299 & T280;}
  val_t T300;
  { T300 = Core_control__if_pre_valid.values[0] & T265;}
  val_t T301;
  { T301 = TERNARY(T300, 0x1L, 0x0L);}
  { Core_datapath__io_control_exe_tid.values[0] = Core_datapath__exe_reg_tid.values[0];}
  { Core_control__io_exe_tid.values[0] = Core_datapath__io_control_exe_tid.values[0];}
  val_t T302;
  T302 = 0x1L << Core_control__io_exe_tid.values[0];
  T302 = T302 & 0xffL;
  val_t T303;
  T303 = (T302 >> 0) & 1;
  { Core_datapath_csr__io_expire.values[0] = T124;}
  { Core_datapath__io_control_exe_expire.values[0] = Core_datapath_csr__io_expire.values[0];}
  { Core_control__io_exe_expire.values[0] = Core_datapath__io_control_exe_expire.values[0];}
  val_t T304;
  { T304 = Core_control__io_exe_expire.values[0] ^ 0x1L;}
  val_t T305;
  { T305 = Core_control__exe_reg_valid.values[0] & Core_control__R84.values[0];}
  val_t T306;
  { T306 = T305 & T304;}
  { Core_control__exe_du.values[0] = T306;}
  Core_datapath__exe_ltu.values[0] = Core_datapath__exe_reg_rs1_data.values[0]<Core_datapath__exe_reg_rs2_data.values[0];
  val_t T307;
  { T307 = Core_datapath__exe_ltu.values[0] ^ 0x1L;}
  { Core_control__io_exe_br_type.values[0] = Core_control__exe_reg_br_type.values[0];}
  { Core_datapath__io_control_exe_br_type.values[0] = Core_control__io_exe_br_type.values[0];}
  val_t T308;
  T308 = Core_datapath__io_control_exe_br_type.values[0] == 0x5L;
  val_t T309;
  { T309 = TERNARY(T308, T307, 0x0L);}
  val_t T310;
  T310 = (Core_datapath__exe_reg_rs1_data.values[0] >> 31) & 1;
  val_t T311;
  T311 = Core_datapath__exe_reg_rs1_data.values[0]<Core_datapath__exe_reg_rs2_data.values[0];
  val_t T312;
  T312 = (Core_datapath__exe_reg_rs2_data.values[0] >> 31) & 1;
  val_t T313;
  T313 = T310 == T312;
  { Core_datapath__exe_lt.values[0] = TERNARY_1(T313, T311, T310);}
  val_t T314;
  { T314 = Core_datapath__exe_lt.values[0] ^ 0x1L;}
  val_t T315;
  T315 = Core_datapath__io_control_exe_br_type.values[0] == 0x3L;
  val_t T316;
  { T316 = TERNARY_1(T315, T314, T309);}
  Core_datapath__exe_eq.values[0] = Core_datapath__exe_reg_rs1_data.values[0] == Core_datapath__exe_reg_rs2_data.values[0];
  val_t T317;
  { T317 = Core_datapath__exe_eq.values[0] ^ 0x1L;}
  val_t T318;
  T318 = Core_datapath__io_control_exe_br_type.values[0] == 0x1L;
  val_t T319;
  { T319 = TERNARY_1(T318, T317, T316);}
  val_t T320;
  T320 = Core_datapath__io_control_exe_br_type.values[0] == 0x4L;
  val_t T321;
  { T321 = TERNARY_1(T320, Core_datapath__exe_ltu.values[0], T319);}
  val_t T322;
  T322 = Core_datapath__io_control_exe_br_type.values[0] == 0x2L;
  val_t T323;
  { T323 = TERNARY_1(T322, Core_datapath__exe_lt.values[0], T321);}
  val_t T324;
  T324 = Core_datapath__io_control_exe_br_type.values[0] == 0x0L;
  val_t T325;
  { T325 = TERNARY_1(T324, Core_datapath__exe_eq.values[0], T323);}
  { Core_datapath__exe_br_cond.values[0] = T325;}
  { Core_datapath__io_control_exe_br_cond.values[0] = Core_datapath__exe_br_cond.values[0];}
  { Core_control__io_exe_br_cond.values[0] = Core_datapath__io_control_exe_br_cond.values[0];}
  val_t T326;
  { T326 = Core_control__exe_reg_branch.values[0] & Core_control__io_exe_br_cond.values[0];}
  val_t T327;
  { T327 = Core_control__exe_reg_jump.values[0] | T326;}
  { Core_control__exe_brjmp.values[0] = Core_control__exe_reg_valid.values[0] & T327;}
  val_t T328;
  { T328 = Core_control__exe_brjmp.values[0] | Core_control__exe_du.values[0];}
  val_t T329;
  { T329 = T328 & T303;}
  val_t T330;
  { T330 = TERNARY(T329, 0x2L, T301);}
  { Core_datapath__io_control_mem_tid.values[0] = Core_datapath__mem_reg_tid.values[0];}
  { Core_control__io_mem_tid.values[0] = Core_datapath__io_control_mem_tid.values[0];}
  val_t T331;
  T331 = 0x1L << Core_control__io_mem_tid.values[0];
  T331 = T331 & 0xffL;
  val_t T332;
  T332 = (T331 >> 0) & 1;
  val_t T333;
  { T333 = Core_control__mem_reg_exception.values[0] & T332;}
  val_t T334;
  { T334 = TERNARY(T333, 0x3L, T330);}
  { Core_control__next_pc_sel_0.values[0] = T334;}
  { Core_control__io_next_pc_sel_0.values[0] = Core_control__next_pc_sel_0.values[0];}
  { Core_datapath__io_control_next_pc_sel_0.values[0] = Core_control__io_next_pc_sel_0.values[0];}
  val_t T335;
  T335 = (T264 >> 1) & 1;
  val_t T336;
  { T336 = Core_control__if_pre_valid.values[0] & T335;}
  val_t T337;
  { T337 = TERNARY(T336, 0x1L, 0x0L);}
  val_t T338;
  T338 = (T302 >> 1) & 1;
  val_t T339;
  { T339 = T328 & T338;}
  val_t T340;
  { T340 = TERNARY(T339, 0x2L, T337);}
  val_t T341;
  T341 = (T331 >> 1) & 1;
  val_t T342;
  { T342 = Core_control__mem_reg_exception.values[0] & T341;}
  val_t T343;
  { T343 = TERNARY(T342, 0x3L, T340);}
  { Core_control__next_pc_sel_1.values[0] = T343;}
  { Core_control__io_next_pc_sel_1.values[0] = Core_control__next_pc_sel_1.values[0];}
  { Core_datapath__io_control_next_pc_sel_1.values[0] = Core_control__io_next_pc_sel_1.values[0];}
  val_t T344;
  T344 = (Core_datapath__if_reg_tid.values[0] >> 0) & 1;
  val_t T345;
  { T345 = TERNARY_1(T344, Core_datapath__io_control_next_pc_sel_1.values[0], Core_datapath__io_control_next_pc_sel_0.values[0]);}
  val_t T346;
  T346 = (T264 >> 2) & 1;
  val_t T347;
  { T347 = Core_control__if_pre_valid.values[0] & T346;}
  val_t T348;
  { T348 = TERNARY(T347, 0x1L, 0x0L);}
  val_t T349;
  T349 = (T302 >> 2) & 1;
  val_t T350;
  { T350 = T328 & T349;}
  val_t T351;
  { T351 = TERNARY(T350, 0x2L, T348);}
  val_t T352;
  T352 = (T331 >> 2) & 1;
  val_t T353;
  { T353 = Core_control__mem_reg_exception.values[0] & T352;}
  val_t T354;
  { T354 = TERNARY(T353, 0x3L, T351);}
  { Core_control__next_pc_sel_2.values[0] = T354;}
  { Core_control__io_next_pc_sel_2.values[0] = Core_control__next_pc_sel_2.values[0];}
  { Core_datapath__io_control_next_pc_sel_2.values[0] = Core_control__io_next_pc_sel_2.values[0];}
  val_t T355;
  T355 = (T264 >> 3) & 1;
  val_t T356;
  { T356 = Core_control__if_pre_valid.values[0] & T355;}
  val_t T357;
  { T357 = TERNARY(T356, 0x1L, 0x0L);}
  val_t T358;
  T358 = (T302 >> 3) & 1;
  val_t T359;
  { T359 = T328 & T358;}
  val_t T360;
  { T360 = TERNARY(T359, 0x2L, T357);}
  val_t T361;
  T361 = (T331 >> 3) & 1;
  val_t T362;
  { T362 = Core_control__mem_reg_exception.values[0] & T361;}
  val_t T363;
  { T363 = TERNARY(T362, 0x3L, T360);}
  { Core_control__next_pc_sel_3.values[0] = T363;}
  { Core_control__io_next_pc_sel_3.values[0] = Core_control__next_pc_sel_3.values[0];}
  { Core_datapath__io_control_next_pc_sel_3.values[0] = Core_control__io_next_pc_sel_3.values[0];}
  val_t T364;
  T364 = (Core_datapath__if_reg_tid.values[0] >> 0) & 1;
  val_t T365;
  { T365 = TERNARY_1(T364, Core_datapath__io_control_next_pc_sel_3.values[0], Core_datapath__io_control_next_pc_sel_2.values[0]);}
  val_t T366;
  T366 = (Core_datapath__if_reg_tid.values[0] >> 1) & 1;
  val_t T367;
  { T367 = TERNARY_1(T366, T365, T345);}
  val_t T368;
  T368 = (T264 >> 4) & 1;
  val_t T369;
  { T369 = Core_control__if_pre_valid.values[0] & T368;}
  val_t T370;
  { T370 = TERNARY(T369, 0x1L, 0x0L);}
  val_t T371;
  T371 = (T302 >> 4) & 1;
  val_t T372;
  { T372 = T328 & T371;}
  val_t T373;
  { T373 = TERNARY(T372, 0x2L, T370);}
  val_t T374;
  T374 = (T331 >> 4) & 1;
  val_t T375;
  { T375 = Core_control__mem_reg_exception.values[0] & T374;}
  val_t T376;
  { T376 = TERNARY(T375, 0x3L, T373);}
  { Core_control__next_pc_sel_4.values[0] = T376;}
  { Core_control__io_next_pc_sel_4.values[0] = Core_control__next_pc_sel_4.values[0];}
  { Core_datapath__io_control_next_pc_sel_4.values[0] = Core_control__io_next_pc_sel_4.values[0];}
  val_t T377;
  T377 = (T264 >> 5) & 1;
  val_t T378;
  { T378 = Core_control__if_pre_valid.values[0] & T377;}
  val_t T379;
  { T379 = TERNARY(T378, 0x1L, 0x0L);}
  val_t T380;
  T380 = (T302 >> 5) & 1;
  val_t T381;
  { T381 = T328 & T380;}
  val_t T382;
  { T382 = TERNARY(T381, 0x2L, T379);}
  val_t T383;
  T383 = (T331 >> 5) & 1;
  val_t T384;
  { T384 = Core_control__mem_reg_exception.values[0] & T383;}
  val_t T385;
  { T385 = TERNARY(T384, 0x3L, T382);}
  { Core_control__next_pc_sel_5.values[0] = T385;}
  { Core_control__io_next_pc_sel_5.values[0] = Core_control__next_pc_sel_5.values[0];}
  { Core_datapath__io_control_next_pc_sel_5.values[0] = Core_control__io_next_pc_sel_5.values[0];}
  val_t T386;
  T386 = (Core_datapath__if_reg_tid.values[0] >> 0) & 1;
  val_t T387;
  { T387 = TERNARY_1(T386, Core_datapath__io_control_next_pc_sel_5.values[0], Core_datapath__io_control_next_pc_sel_4.values[0]);}
  val_t T388;
  T388 = (T264 >> 6) & 1;
  val_t T389;
  { T389 = Core_control__if_pre_valid.values[0] & T388;}
  val_t T390;
  { T390 = TERNARY(T389, 0x1L, 0x0L);}
  val_t T391;
  T391 = (T302 >> 6) & 1;
  val_t T392;
  { T392 = T328 & T391;}
  val_t T393;
  { T393 = TERNARY(T392, 0x2L, T390);}
  val_t T394;
  T394 = (T331 >> 6) & 1;
  val_t T395;
  { T395 = Core_control__mem_reg_exception.values[0] & T394;}
  val_t T396;
  { T396 = TERNARY(T395, 0x3L, T393);}
  { Core_control__next_pc_sel_6.values[0] = T396;}
  { Core_control__io_next_pc_sel_6.values[0] = Core_control__next_pc_sel_6.values[0];}
  { Core_datapath__io_control_next_pc_sel_6.values[0] = Core_control__io_next_pc_sel_6.values[0];}
  val_t T397;
  T397 = (T264 >> 7) & 1;
  val_t T398;
  { T398 = Core_control__if_pre_valid.values[0] & T397;}
  val_t T399;
  { T399 = TERNARY(T398, 0x1L, 0x0L);}
  val_t T400;
  T400 = (T302 >> 7) & 1;
  val_t T401;
  { T401 = T328 & T400;}
  val_t T402;
  { T402 = TERNARY(T401, 0x2L, T399);}
  val_t T403;
  T403 = (T331 >> 7) & 1;
  val_t T404;
  { T404 = Core_control__mem_reg_exception.values[0] & T403;}
  val_t T405;
  { T405 = TERNARY(T404, 0x3L, T402);}
  { Core_control__next_pc_sel_7.values[0] = T405;}
  { Core_control__io_next_pc_sel_7.values[0] = Core_control__next_pc_sel_7.values[0];}
  { Core_datapath__io_control_next_pc_sel_7.values[0] = Core_control__io_next_pc_sel_7.values[0];}
  val_t T406;
  T406 = (Core_datapath__if_reg_tid.values[0] >> 0) & 1;
  val_t T407;
  { T407 = TERNARY_1(T406, Core_datapath__io_control_next_pc_sel_7.values[0], Core_datapath__io_control_next_pc_sel_6.values[0]);}
  val_t T408;
  T408 = (Core_datapath__if_reg_tid.values[0] >> 1) & 1;
  val_t T409;
  { T409 = TERNARY_1(T408, T407, T387);}
  val_t T410;
  T410 = (Core_datapath__if_reg_tid.values[0] >> 2) & 1;
  val_t T411;
  { T411 = TERNARY_1(T410, T409, T367);}
  val_t T412;
  T412 = T411 == 0x1L;
  val_t T413;
  { T413 = T412 & T263;}
  val_t T414;
  { T414 = TERNARY_1(T413, Core_datapath__if_pc_plus4.values[0], Core_datapath__if_reg_pcs_0.values[0]);}
  val_t T415;
  T415 = 0x1L << Core_datapath__exe_reg_tid.values[0];
  T415 = T415 & 0xffL;
  val_t T416;
  T416 = (T415 >> 0) & 1;
  val_t T417;
  T417 = (Core_datapath__exe_reg_tid.values[0] >> 0) & 1;
  val_t T418;
  { T418 = TERNARY_1(T417, Core_datapath__io_control_next_pc_sel_1.values[0], Core_datapath__io_control_next_pc_sel_0.values[0]);}
  val_t T419;
  T419 = (Core_datapath__exe_reg_tid.values[0] >> 0) & 1;
  val_t T420;
  { T420 = TERNARY_1(T419, Core_datapath__io_control_next_pc_sel_3.values[0], Core_datapath__io_control_next_pc_sel_2.values[0]);}
  val_t T421;
  T421 = (Core_datapath__exe_reg_tid.values[0] >> 1) & 1;
  val_t T422;
  { T422 = TERNARY_1(T421, T420, T418);}
  val_t T423;
  T423 = (Core_datapath__exe_reg_tid.values[0] >> 0) & 1;
  val_t T424;
  { T424 = TERNARY_1(T423, Core_datapath__io_control_next_pc_sel_5.values[0], Core_datapath__io_control_next_pc_sel_4.values[0]);}
  val_t T425;
  T425 = (Core_datapath__exe_reg_tid.values[0] >> 0) & 1;
  val_t T426;
  { T426 = TERNARY_1(T425, Core_datapath__io_control_next_pc_sel_7.values[0], Core_datapath__io_control_next_pc_sel_6.values[0]);}
  val_t T427;
  T427 = (Core_datapath__exe_reg_tid.values[0] >> 1) & 1;
  val_t T428;
  { T428 = TERNARY_1(T427, T426, T424);}
  val_t T429;
  T429 = (Core_datapath__exe_reg_tid.values[0] >> 2) & 1;
  val_t T430;
  { T430 = TERNARY_1(T429, T428, T422);}
  val_t T431;
  T431 = T430 == 0x2L;
  val_t T432;
  { T432 = T431 & T416;}
  val_t T433;
  { T433 = TERNARY_1(T432, Core_datapath__exe_address.values[0], T414);}
  val_t T434;
  { T434 = Core_datapath_csr__reg_evecs_0.values[0];}
  T434 = T434 & 0xffffffffL;
  { Core_datapath_csr__io_evecs_0.values[0] = T434;}
  val_t T435;
  { T435 = Core_datapath_csr__reg_evecs_1.values[0];}
  T435 = T435 & 0xffffffffL;
  { Core_datapath_csr__io_evecs_1.values[0] = T435;}
  val_t T436;
  T436 = (Core_datapath__mem_reg_tid.values[0] >> 0) & 1;
  val_t T437;
  { T437 = TERNARY_1(T436, Core_datapath_csr__io_evecs_1.values[0], Core_datapath_csr__io_evecs_0.values[0]);}
  val_t T438;
  { T438 = Core_datapath_csr__reg_evecs_2.values[0];}
  T438 = T438 & 0xffffffffL;
  { Core_datapath_csr__io_evecs_2.values[0] = T438;}
  val_t T439;
  { T439 = Core_datapath_csr__reg_evecs_3.values[0];}
  T439 = T439 & 0xffffffffL;
  { Core_datapath_csr__io_evecs_3.values[0] = T439;}
  val_t T440;
  T440 = (Core_datapath__mem_reg_tid.values[0] >> 0) & 1;
  val_t T441;
  { T441 = TERNARY_1(T440, Core_datapath_csr__io_evecs_3.values[0], Core_datapath_csr__io_evecs_2.values[0]);}
  val_t T442;
  T442 = (Core_datapath__mem_reg_tid.values[0] >> 1) & 1;
  val_t T443;
  { T443 = TERNARY_1(T442, T441, T437);}
  val_t T444;
  { T444 = Core_datapath_csr__reg_evecs_4.values[0];}
  T444 = T444 & 0xffffffffL;
  { Core_datapath_csr__io_evecs_4.values[0] = T444;}
  val_t T445;
  { T445 = Core_datapath_csr__reg_evecs_5.values[0];}
  T445 = T445 & 0xffffffffL;
  { Core_datapath_csr__io_evecs_5.values[0] = T445;}
  val_t T446;
  T446 = (Core_datapath__mem_reg_tid.values[0] >> 0) & 1;
  val_t T447;
  { T447 = TERNARY_1(T446, Core_datapath_csr__io_evecs_5.values[0], Core_datapath_csr__io_evecs_4.values[0]);}
  val_t T448;
  { T448 = Core_datapath_csr__reg_evecs_6.values[0];}
  T448 = T448 & 0xffffffffL;
  { Core_datapath_csr__io_evecs_6.values[0] = T448;}
  val_t T449;
  { T449 = Core_datapath_csr__reg_evecs_7.values[0];}
  T449 = T449 & 0xffffffffL;
  { Core_datapath_csr__io_evecs_7.values[0] = T449;}
  val_t T450;
  T450 = (Core_datapath__mem_reg_tid.values[0] >> 0) & 1;
  val_t T451;
  { T451 = TERNARY_1(T450, Core_datapath_csr__io_evecs_7.values[0], Core_datapath_csr__io_evecs_6.values[0]);}
  val_t T452;
  T452 = (Core_datapath__mem_reg_tid.values[0] >> 1) & 1;
  val_t T453;
  { T453 = TERNARY_1(T452, T451, T447);}
  val_t T454;
  T454 = (Core_datapath__mem_reg_tid.values[0] >> 2) & 1;
  val_t T455;
  { T455 = TERNARY_1(T454, T453, T443);}
  { Core_datapath__mem_evec.values[0] = T455;}
  val_t T456;
  T456 = 0x1L << Core_datapath__mem_reg_tid.values[0];
  T456 = T456 & 0xffL;
  val_t T457;
  T457 = (T456 >> 0) & 1;
  val_t T458;
  T458 = (Core_datapath__mem_reg_tid.values[0] >> 0) & 1;
  val_t T459;
  { T459 = TERNARY_1(T458, Core_datapath__io_control_next_pc_sel_1.values[0], Core_datapath__io_control_next_pc_sel_0.values[0]);}
  val_t T460;
  T460 = (Core_datapath__mem_reg_tid.values[0] >> 0) & 1;
  val_t T461;
  { T461 = TERNARY_1(T460, Core_datapath__io_control_next_pc_sel_3.values[0], Core_datapath__io_control_next_pc_sel_2.values[0]);}
  val_t T462;
  T462 = (Core_datapath__mem_reg_tid.values[0] >> 1) & 1;
  val_t T463;
  { T463 = TERNARY_1(T462, T461, T459);}
  val_t T464;
  T464 = (Core_datapath__mem_reg_tid.values[0] >> 0) & 1;
  val_t T465;
  { T465 = TERNARY_1(T464, Core_datapath__io_control_next_pc_sel_5.values[0], Core_datapath__io_control_next_pc_sel_4.values[0]);}
  val_t T466;
  T466 = (Core_datapath__mem_reg_tid.values[0] >> 0) & 1;
  val_t T467;
  { T467 = TERNARY_1(T466, Core_datapath__io_control_next_pc_sel_7.values[0], Core_datapath__io_control_next_pc_sel_6.values[0]);}
  val_t T468;
  T468 = (Core_datapath__mem_reg_tid.values[0] >> 1) & 1;
  val_t T469;
  { T469 = TERNARY_1(T468, T467, T465);}
  val_t T470;
  T470 = (Core_datapath__mem_reg_tid.values[0] >> 2) & 1;
  val_t T471;
  { T471 = TERNARY_1(T470, T469, T463);}
  val_t T472;
  T472 = T471 == 0x3L;
  val_t T473;
  { T473 = T472 & T457;}
  val_t T474;
  { T474 = TERNARY_1(T473, Core_datapath__mem_evec.values[0], T433);}
  { Core_datapath__next_pcs_0.values[0] = T474;}
  val_t T475;
  T475 = (T262 >> 1) & 1;
  val_t T476;
  { T476 = T412 & T475;}
  val_t T477;
  { T477 = TERNARY_1(T476, Core_datapath__if_pc_plus4.values[0], Core_datapath__if_reg_pcs_1.values[0]);}
  val_t T478;
  T478 = (T415 >> 1) & 1;
  val_t T479;
  { T479 = T431 & T478;}
  val_t T480;
  { T480 = TERNARY_1(T479, Core_datapath__exe_address.values[0], T477);}
  val_t T481;
  T481 = (T456 >> 1) & 1;
  val_t T482;
  { T482 = T472 & T481;}
  val_t T483;
  { T483 = TERNARY_1(T482, Core_datapath__mem_evec.values[0], T480);}
  { Core_datapath__next_pcs_1.values[0] = T483;}
  { Core_control__next_tid.values[0] = Core_control__R284.values[0];}
  { Core_control__io_next_tid.values[0] = Core_control__next_tid.values[0];}
  { Core_datapath__io_control_next_tid.values[0] = Core_control__io_next_tid.values[0];}
  val_t T484;
  T484 = (Core_datapath__io_control_next_tid.values[0] >> 0) & 1;
  val_t T485;
  { T485 = TERNARY_1(T484, Core_datapath__next_pcs_1.values[0], Core_datapath__next_pcs_0.values[0]);}
  val_t T486;
  T486 = (T262 >> 2) & 1;
  val_t T487;
  { T487 = T412 & T486;}
  val_t T488;
  { T488 = TERNARY_1(T487, Core_datapath__if_pc_plus4.values[0], Core_datapath__if_reg_pcs_2.values[0]);}
  val_t T489;
  T489 = (T415 >> 2) & 1;
  val_t T490;
  { T490 = T431 & T489;}
  val_t T491;
  { T491 = TERNARY_1(T490, Core_datapath__exe_address.values[0], T488);}
  val_t T492;
  T492 = (T456 >> 2) & 1;
  val_t T493;
  { T493 = T472 & T492;}
  val_t T494;
  { T494 = TERNARY_1(T493, Core_datapath__mem_evec.values[0], T491);}
  { Core_datapath__next_pcs_2.values[0] = T494;}
  val_t T495;
  T495 = (T262 >> 3) & 1;
  val_t T496;
  { T496 = T412 & T495;}
  val_t T497;
  { T497 = TERNARY_1(T496, Core_datapath__if_pc_plus4.values[0], Core_datapath__if_reg_pcs_3.values[0]);}
  val_t T498;
  T498 = (T415 >> 3) & 1;
  val_t T499;
  { T499 = T431 & T498;}
  val_t T500;
  { T500 = TERNARY_1(T499, Core_datapath__exe_address.values[0], T497);}
  val_t T501;
  T501 = (T456 >> 3) & 1;
  val_t T502;
  { T502 = T472 & T501;}
  val_t T503;
  { T503 = TERNARY_1(T502, Core_datapath__mem_evec.values[0], T500);}
  { Core_datapath__next_pcs_3.values[0] = T503;}
  val_t T504;
  T504 = (Core_datapath__io_control_next_tid.values[0] >> 0) & 1;
  val_t T505;
  { T505 = TERNARY_1(T504, Core_datapath__next_pcs_3.values[0], Core_datapath__next_pcs_2.values[0]);}
  val_t T506;
  T506 = (Core_datapath__io_control_next_tid.values[0] >> 1) & 1;
  val_t T507;
  { T507 = TERNARY_1(T506, T505, T485);}
  val_t T508;
  T508 = (T262 >> 4) & 1;
  val_t T509;
  { T509 = T412 & T508;}
  val_t T510;
  { T510 = TERNARY_1(T509, Core_datapath__if_pc_plus4.values[0], Core_datapath__if_reg_pcs_4.values[0]);}
  val_t T511;
  T511 = (T415 >> 4) & 1;
  val_t T512;
  { T512 = T431 & T511;}
  val_t T513;
  { T513 = TERNARY_1(T512, Core_datapath__exe_address.values[0], T510);}
  val_t T514;
  T514 = (T456 >> 4) & 1;
  val_t T515;
  { T515 = T472 & T514;}
  val_t T516;
  { T516 = TERNARY_1(T515, Core_datapath__mem_evec.values[0], T513);}
  { Core_datapath__next_pcs_4.values[0] = T516;}
  val_t T517;
  T517 = (T262 >> 5) & 1;
  val_t T518;
  { T518 = T412 & T517;}
  val_t T519;
  { T519 = TERNARY_1(T518, Core_datapath__if_pc_plus4.values[0], Core_datapath__if_reg_pcs_5.values[0]);}
  val_t T520;
  T520 = (T415 >> 5) & 1;
  val_t T521;
  { T521 = T431 & T520;}
  val_t T522;
  { T522 = TERNARY_1(T521, Core_datapath__exe_address.values[0], T519);}
  val_t T523;
  T523 = (T456 >> 5) & 1;
  val_t T524;
  { T524 = T472 & T523;}
  val_t T525;
  { T525 = TERNARY_1(T524, Core_datapath__mem_evec.values[0], T522);}
  { Core_datapath__next_pcs_5.values[0] = T525;}
  val_t T526;
  T526 = (Core_datapath__io_control_next_tid.values[0] >> 0) & 1;
  val_t T527;
  { T527 = TERNARY_1(T526, Core_datapath__next_pcs_5.values[0], Core_datapath__next_pcs_4.values[0]);}
  val_t T528;
  T528 = (T262 >> 6) & 1;
  val_t T529;
  { T529 = T412 & T528;}
  val_t T530;
  { T530 = TERNARY_1(T529, Core_datapath__if_pc_plus4.values[0], Core_datapath__if_reg_pcs_6.values[0]);}
  val_t T531;
  T531 = (T415 >> 6) & 1;
  val_t T532;
  { T532 = T431 & T531;}
  val_t T533;
  { T533 = TERNARY_1(T532, Core_datapath__exe_address.values[0], T530);}
  val_t T534;
  T534 = (T456 >> 6) & 1;
  val_t T535;
  { T535 = T472 & T534;}
  val_t T536;
  { T536 = TERNARY_1(T535, Core_datapath__mem_evec.values[0], T533);}
  { Core_datapath__next_pcs_6.values[0] = T536;}
  val_t T537;
  T537 = (T262 >> 7) & 1;
  val_t T538;
  { T538 = T412 & T537;}
  val_t T539;
  { T539 = TERNARY_1(T538, Core_datapath__if_pc_plus4.values[0], Core_datapath__if_reg_pcs_7.values[0]);}
  val_t T540;
  T540 = (T415 >> 7) & 1;
  val_t T541;
  { T541 = T431 & T540;}
  val_t T542;
  { T542 = TERNARY_1(T541, Core_datapath__exe_address.values[0], T539);}
  val_t T543;
  T543 = (T456 >> 7) & 1;
  val_t T544;
  { T544 = T472 & T543;}
  val_t T545;
  { T545 = TERNARY_1(T544, Core_datapath__mem_evec.values[0], T542);}
  { Core_datapath__next_pcs_7.values[0] = T545;}
  val_t T546;
  T546 = (Core_datapath__io_control_next_tid.values[0] >> 0) & 1;
  val_t T547;
  { T547 = TERNARY_1(T546, Core_datapath__next_pcs_7.values[0], Core_datapath__next_pcs_6.values[0]);}
  val_t T548;
  T548 = (Core_datapath__io_control_next_tid.values[0] >> 1) & 1;
  val_t T549;
  { T549 = TERNARY_1(T548, T547, T527);}
  val_t T550;
  T550 = (Core_datapath__io_control_next_tid.values[0] >> 2) & 1;
  { Core_datapath__next_pc.values[0] = TERNARY_1(T550, T549, T507);}
  val_t T551;
  { T551 = Core_datapath__next_pc.values[0] >> 2;}
  T551 = T551 & 0x3fffffffL;
  val_t T552;
  { T552 = T551;}
  T552 = T552 & 0xfffL;
  { Core_datapath__io_imem_r_addr.values[0] = T552;}
  { Core_imem__io_core_r_addr.values[0] = Core_datapath__io_imem_r_addr.values[0];}
  val_t T553;
  { T553 = Core_imem__ispm.get(Core_imem__io_core_r_addr.values[0], 0);}
  { Core_control__next_valid.values[0] = Core_control__R206.values[0];}
  { Core_control__io_next_valid.values[0] = Core_control__next_valid.values[0];}
  { Core_datapath__io_control_next_valid.values[0] = Core_control__io_next_valid.values[0];}
  { Core_datapath__io_imem_r_enable.values[0] = Core_datapath__io_control_next_valid.values[0];}
  { Core_imem__io_core_r_enable.values[0] = Core_datapath__io_imem_r_enable.values[0];}
  { T554.values[0] = TERNARY_1(Core_imem__io_core_r_enable.values[0], T553, Core_imem__dout_r.values[0]);}
  { Core_datapath_loadstore__io_imem_rw_data_in.values[0] = Core_datapath_loadstore__io_data_in.values[0];}
  { Core_datapath__io_imem_rw_data_in.values[0] = Core_datapath_loadstore__io_imem_rw_data_in.values[0];}
  { Core_imem__io_core_rw_data_in.values[0] = Core_datapath__io_imem_rw_data_in.values[0];}
  val_t T555;
  { T555 = Core_datapath_loadstore__imem_op.values[0] & Core_datapath_loadstore__write.values[0];}
  { Core_datapath_loadstore__io_imem_rw_write.values[0] = T555;}
  { Core_datapath__io_imem_rw_write.values[0] = Core_datapath_loadstore__io_imem_rw_write.values[0];}
  { Core_imem__io_core_rw_write.values[0] = Core_datapath__io_imem_rw_write.values[0];}
  val_t T556;
  { T556 = Core_datapath_loadstore__io_load.values[0] | Core_datapath_loadstore__io_store.values[0];}
  val_t T557;
  { T557 = Core_datapath_loadstore__imem_op.values[0] & T556;}
  { Core_datapath_loadstore__io_imem_rw_enable.values[0] = T557;}
  { Core_datapath__io_imem_rw_enable.values[0] = Core_datapath_loadstore__io_imem_rw_enable.values[0];}
  { Core_imem__io_core_rw_enable.values[0] = Core_datapath__io_imem_rw_enable.values[0];}
  { T558.values[0] = Core_imem__io_core_rw_enable.values[0] & Core_imem__io_core_rw_write.values[0];}
  val_t T559;
  { T559 = Core_datapath_loadstore__io_addr.values[0] >> 2;}
  T559 = T559 & 0x3ffL;
  val_t T560;
  { T560 = T559 | 0x0L << 10;}
  { Core_datapath_loadstore__io_imem_rw_addr.values[0] = T560;}
  { Core_datapath__io_imem_rw_addr.values[0] = Core_datapath_loadstore__io_imem_rw_addr.values[0];}
  { Core_imem__io_core_rw_addr.values[0] = Core_datapath__io_imem_rw_addr.values[0];}
  val_t T561;
  { T561 = Core_imem__ispm.get(Core_imem__io_core_rw_addr.values[0], 0);}
  { T562.values[0] = TERNARY_1(Core_imem__io_core_rw_enable.values[0], T561, Core_imem__R0.values[0]);}
  { Core_datapath_csr__io_rw_data_in.values[0] = Core_datapath__exe_csr_data.values[0];}
  { Core_control__io_exe_csr_type.values[0] = Core_control__exe_reg_csr_type.values[0];}
  { Core_datapath__io_control_exe_csr_type.values[0] = Core_control__io_exe_csr_type.values[0];}
  { Core_datapath_csr__io_rw_csr_type.values[0] = Core_datapath__io_control_exe_csr_type.values[0];}
  val_t T563;
  T563 = Core_datapath_csr__io_rw_csr_type.values[0] == 0x1L;
  val_t T564;
  { T564 = TERNARY_1(T563, Core_datapath_csr__io_rw_data_in.values[0], Core_datapath_csr__io_rw_data_in.values[0]);}
  val_t T565;
  { T565 = T564 | 0x0L << 32;}
  val_t T566;
  { T566 = ~Core_datapath_csr__io_rw_data_in.values[0];}
  T566 = T566 & 0xffffffffL;
  val_t T567;
  { T567 = T566 | 0x0L << 32;}
  val_t T568;
  { T568 = Core_datapath_csr__reg_slots_0.values[0] | Core_datapath_csr__reg_slots_1.values[0] << 4;}
  val_t T569;
  { T569 = Core_datapath_csr__reg_slots_2.values[0] | Core_datapath_csr__reg_slots_3.values[0] << 4;}
  val_t T570;
  { T570 = T568 | T569 << 8;}
  val_t T571;
  { T571 = Core_datapath_csr__reg_slots_4.values[0] | Core_datapath_csr__reg_slots_5.values[0] << 4;}
  val_t T572;
  { T572 = Core_datapath_csr__reg_slots_6.values[0] | Core_datapath_csr__reg_slots_7.values[0] << 4;}
  val_t T573;
  { T573 = T571 | T572 << 8;}
  val_t T574;
  { T574 = T570 | T573 << 16;}
  { Core_datapath_csr__io_rw_addr.values[0] = Core_datapath__exe_reg_csr_addr.values[0];}
  val_t T575;
  T575 = Core_datapath_csr__io_rw_addr.values[0] == 0x503L;
  val_t T576;
  { T576 = TERNARY(T575, T574, 0x0L);}
  val_t T577;
  { T577 = Core_datapath_csr__io_rw_thread.values[0] | 0x0L << 3;}
  val_t T578;
  T578 = Core_datapath_csr__io_rw_addr.values[0] == 0x50bL;
  val_t T579;
  { T579 = TERNARY_1(T578, T577, T576);}
  val_t T580;
  { T580 = Core_datapath_csr__reg_tmodes_0.values[0] | Core_datapath_csr__reg_tmodes_1.values[0] << 2;}
  val_t T581;
  { T581 = Core_datapath_csr__reg_tmodes_2.values[0] | Core_datapath_csr__reg_tmodes_3.values[0] << 2;}
  val_t T582;
  { T582 = T580 | T581 << 4;}
  val_t T583;
  { T583 = Core_datapath_csr__reg_tmodes_4.values[0] | Core_datapath_csr__reg_tmodes_5.values[0] << 2;}
  val_t T584;
  { T584 = Core_datapath_csr__reg_tmodes_6.values[0] | Core_datapath_csr__reg_tmodes_7.values[0] << 2;}
  val_t T585;
  { T585 = T583 | T584 << 4;}
  val_t T586;
  { T586 = T582 | T585 << 8;}
  val_t T587;
  { T587 = T586 | 0x0L << 16;}
  val_t T588;
  T588 = Core_datapath_csr__io_rw_addr.values[0] == 0x504L;
  val_t T589;
  { T589 = TERNARY_1(T588, T587, T579);}
  val_t T590;
  { T590 = T589 | 0x0L << 32;}
  val_t T591;
  T591 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T592;
  { T592 = TERNARY_1(T591, Core_datapath_csr__reg_evecs_1.values[0], Core_datapath_csr__reg_evecs_0.values[0]);}
  val_t T593;
  T593 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T594;
  { T594 = TERNARY_1(T593, Core_datapath_csr__reg_evecs_3.values[0], Core_datapath_csr__reg_evecs_2.values[0]);}
  val_t T595;
  T595 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T596;
  { T596 = TERNARY_1(T595, T594, T592);}
  val_t T597;
  T597 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T598;
  { T598 = TERNARY_1(T597, Core_datapath_csr__reg_evecs_5.values[0], Core_datapath_csr__reg_evecs_4.values[0]);}
  val_t T599;
  T599 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T600;
  { T600 = TERNARY_1(T599, Core_datapath_csr__reg_evecs_7.values[0], Core_datapath_csr__reg_evecs_6.values[0]);}
  val_t T601;
  T601 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T602;
  { T602 = TERNARY_1(T601, T600, T598);}
  val_t T603;
  T603 = (Core_datapath_csr__io_rw_thread.values[0] >> 2) & 1;
  val_t T604;
  { T604 = TERNARY_1(T603, T602, T596);}
  val_t T605;
  T605 = Core_datapath_csr__io_rw_addr.values[0] == 0x508L;
  val_t T606;
  { T606 = TERNARY_1(T605, T604, T590);}
  val_t T607;
  T607 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T608;
  { T608 = TERNARY_1(T607, Core_datapath_csr__reg_epcs_1.values[0], Core_datapath_csr__reg_epcs_0.values[0]);}
  val_t T609;
  T609 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T610;
  { T610 = TERNARY_1(T609, Core_datapath_csr__reg_epcs_3.values[0], Core_datapath_csr__reg_epcs_2.values[0]);}
  val_t T611;
  T611 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T612;
  { T612 = TERNARY_1(T611, T610, T608);}
  val_t T613;
  T613 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T614;
  { T614 = TERNARY_1(T613, Core_datapath_csr__reg_epcs_5.values[0], Core_datapath_csr__reg_epcs_4.values[0]);}
  val_t T615;
  T615 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T616;
  { T616 = TERNARY_1(T615, Core_datapath_csr__reg_epcs_7.values[0], Core_datapath_csr__reg_epcs_6.values[0]);}
  val_t T617;
  T617 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T618;
  { T618 = TERNARY_1(T617, T616, T614);}
  val_t T619;
  T619 = (Core_datapath_csr__io_rw_thread.values[0] >> 2) & 1;
  val_t T620;
  { T620 = TERNARY_1(T619, T618, T612);}
  val_t T621;
  { T621 = T620 | 0x0L << 32;}
  val_t T622;
  T622 = Core_datapath_csr__io_rw_addr.values[0] == 0x502L;
  val_t T623;
  { T623 = TERNARY_1(T622, T621, T606);}
  val_t T624;
  T624 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T625;
  { T625 = TERNARY_1(T624, Core_datapath_csr__reg_causes_1.values[0], Core_datapath_csr__reg_causes_0.values[0]);}
  val_t T626;
  T626 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T627;
  { T627 = TERNARY_1(T626, Core_datapath_csr__reg_causes_3.values[0], Core_datapath_csr__reg_causes_2.values[0]);}
  val_t T628;
  T628 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T629;
  { T629 = TERNARY_1(T628, T627, T625);}
  val_t T630;
  T630 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T631;
  { T631 = TERNARY_1(T630, Core_datapath_csr__reg_causes_5.values[0], Core_datapath_csr__reg_causes_4.values[0]);}
  val_t T632;
  T632 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T633;
  { T633 = TERNARY_1(T632, Core_datapath_csr__reg_causes_7.values[0], Core_datapath_csr__reg_causes_6.values[0]);}
  val_t T634;
  T634 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T635;
  { T635 = TERNARY_1(T634, T633, T631);}
  val_t T636;
  T636 = (Core_datapath_csr__io_rw_thread.values[0] >> 2) & 1;
  val_t T637;
  { T637 = TERNARY_1(T636, T635, T629);}
  val_t T638;
  { T638 = T637;}
  T638 = T638 & 0xfL;
  val_t T639;
  { T639 = T638 | 0x0L << 4;}
  val_t T640;
  T640 = (T637 >> 4) & 1;
  val_t T641;
  { T641 = T639 | T640 << 31;}
  val_t T642;
  { T642 = T641 | 0x0L << 32;}
  val_t T643;
  T643 = Core_datapath_csr__io_rw_addr.values[0] == 0x509L;
  val_t T644;
  { T644 = TERNARY_1(T643, T642, T623);}
  val_t T645;
  T645 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T646;
  { T646 = TERNARY_1(T645, Core_datapath_csr__reg_sup0_1.values[0], Core_datapath_csr__reg_sup0_0.values[0]);}
  val_t T647;
  T647 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T648;
  { T648 = TERNARY_1(T647, Core_datapath_csr__reg_sup0_3.values[0], Core_datapath_csr__reg_sup0_2.values[0]);}
  val_t T649;
  T649 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T650;
  { T650 = TERNARY_1(T649, T648, T646);}
  val_t T651;
  T651 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T652;
  { T652 = TERNARY_1(T651, Core_datapath_csr__reg_sup0_5.values[0], Core_datapath_csr__reg_sup0_4.values[0]);}
  val_t T653;
  T653 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T654;
  { T654 = TERNARY_1(T653, Core_datapath_csr__reg_sup0_7.values[0], Core_datapath_csr__reg_sup0_6.values[0]);}
  val_t T655;
  T655 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T656;
  { T656 = TERNARY_1(T655, T654, T652);}
  val_t T657;
  T657 = (Core_datapath_csr__io_rw_thread.values[0] >> 2) & 1;
  val_t T658;
  { T658 = TERNARY_1(T657, T656, T650);}
  val_t T659;
  T659 = Core_datapath_csr__io_rw_addr.values[0] == 0x500L;
  val_t T660;
  { T660 = TERNARY_1(T659, T658, T644);}
  val_t T661;
  { T661 = Core_datapath_csr__reg_time.values[0];}
  T661 = T661 & 0xffffffffL;
  val_t T662;
  { T662 = T661 | 0x0L << 32;}
  val_t T663;
  T663 = Core_datapath_csr__io_rw_addr.values[0] == 0x1L;
  val_t T664;
  { T664 = TERNARY_1(T663, T662, T660);}
  val_t T665;
  { T665 = Core_datapath_csr__reg_to_host.values[0] | 0x0L << 32;}
  val_t T666;
  T666 = Core_datapath_csr__io_rw_addr.values[0] == 0x51eL;
  val_t T667;
  { T667 = TERNARY_1(T666, T665, T664);}
  val_t T668;
  { T668 = Core_datapath_csr__reg_gpis_0.values[0] | 0x0L << 1;}
  val_t T669;
  { T669 = T668 | 0x0L << 32;}
  val_t T670;
  T670 = Core_datapath_csr__io_rw_addr.values[0] == 0xcc0L;
  val_t T671;
  { T671 = TERNARY_1(T670, T669, T667);}
  val_t T672;
  { T672 = Core_datapath_csr__reg_gpis_1.values[0] | 0x0L << 1;}
  val_t T673;
  { T673 = T672 | 0x0L << 32;}
  val_t T674;
  T674 = Core_datapath_csr__io_rw_addr.values[0] == 0xcc1L;
  val_t T675;
  { T675 = TERNARY_1(T674, T673, T671);}
  val_t T676;
  { T676 = Core_datapath_csr__reg_gpis_2.values[0] | 0x0L << 1;}
  val_t T677;
  { T677 = T676 | 0x0L << 32;}
  val_t T678;
  T678 = Core_datapath_csr__io_rw_addr.values[0] == 0xcc2L;
  val_t T679;
  { T679 = TERNARY_1(T678, T677, T675);}
  val_t T680;
  { T680 = Core_datapath_csr__reg_gpis_3.values[0] | 0x0L << 1;}
  val_t T681;
  { T681 = T680 | 0x0L << 32;}
  val_t T682;
  T682 = Core_datapath_csr__io_rw_addr.values[0] == 0xcc3L;
  val_t T683;
  { T683 = TERNARY_1(T682, T681, T679);}
  val_t T684;
  { T684 = Core_datapath_csr__reg_gpos_0.values[0] | 0x0L << 2;}
  val_t T685;
  { T685 = T684 | 0x0L << 32;}
  val_t T686;
  T686 = Core_datapath_csr__io_rw_addr.values[0] == 0xcc4L;
  val_t T687;
  { T687 = TERNARY_1(T686, T685, T683);}
  val_t T688;
  { T688 = Core_datapath_csr__reg_gpos_1.values[0] | 0x0L << 2;}
  val_t T689;
  { T689 = T688 | 0x0L << 32;}
  val_t T690;
  T690 = Core_datapath_csr__io_rw_addr.values[0] == 0xcc5L;
  val_t T691;
  { T691 = TERNARY_1(T690, T689, T687);}
  val_t T692;
  { T692 = Core_datapath_csr__reg_gpos_2.values[0] | 0x0L << 2;}
  val_t T693;
  { T693 = T692 | 0x0L << 32;}
  val_t T694;
  T694 = Core_datapath_csr__io_rw_addr.values[0] == 0xcc6L;
  val_t T695;
  { T695 = TERNARY_1(T694, T693, T691);}
  val_t T696;
  { T696 = Core_datapath_csr__reg_gpos_3.values[0] | 0x0L << 2;}
  val_t T697;
  { T697 = T696 | 0x0L << 32;}
  val_t T698;
  T698 = Core_datapath_csr__io_rw_addr.values[0] == 0xcc7L;
  val_t T699;
  { T699 = TERNARY_1(T698, T697, T695);}
  val_t T700;
  { T700 = Core_datapath_csr__reg_gpo_protection_0.values[0] | Core_datapath_csr__reg_gpo_protection_1.values[0] << 4;}
  val_t T701;
  { T701 = Core_datapath_csr__reg_gpo_protection_2.values[0] | Core_datapath_csr__reg_gpo_protection_3.values[0] << 4;}
  val_t T702;
  { T702 = T700 | T701 << 8;}
  val_t T703;
  { T703 = T702 | 0x0L << 16;}
  val_t T704;
  T704 = Core_datapath_csr__io_rw_addr.values[0] == 0x50dL;
  val_t T705;
  { T705 = TERNARY_1(T704, T703, T699);}
  val_t T706;
  { T706 = Core_datapath_csr__reg_imem_protection_0.values[0] | Core_datapath_csr__reg_imem_protection_1.values[0] << 4;}
  val_t T707;
  { T707 = Core_datapath_csr__reg_imem_protection_2.values[0] | Core_datapath_csr__reg_imem_protection_3.values[0] << 4;}
  val_t T708;
  { T708 = T706 | T707 << 8;}
  val_t T709;
  { T709 = Core_datapath_csr__reg_imem_protection_4.values[0] | Core_datapath_csr__reg_imem_protection_5.values[0] << 4;}
  val_t T710;
  { T710 = Core_datapath_csr__reg_imem_protection_6.values[0] | Core_datapath_csr__reg_imem_protection_7.values[0] << 4;}
  val_t T711;
  { T711 = T709 | T710 << 8;}
  val_t T712;
  { T712 = T708 | T711 << 16;}
  val_t T713;
  { T713 = T712 | 0x0L << 32;}
  val_t T714;
  T714 = Core_datapath_csr__io_rw_addr.values[0] == 0x505L;
  val_t T715;
  { T715 = TERNARY_1(T714, T713, T705);}
  val_t T716;
  { T716 = Core_datapath_csr__reg_dmem_protection_0.values[0] | Core_datapath_csr__reg_dmem_protection_1.values[0] << 4;}
  val_t T717;
  { T717 = Core_datapath_csr__reg_dmem_protection_2.values[0] | Core_datapath_csr__reg_dmem_protection_3.values[0] << 4;}
  val_t T718;
  { T718 = T716 | T717 << 8;}
  val_t T719;
  { T719 = Core_datapath_csr__reg_dmem_protection_4.values[0] | Core_datapath_csr__reg_dmem_protection_5.values[0] << 4;}
  val_t T720;
  { T720 = Core_datapath_csr__reg_dmem_protection_6.values[0] | Core_datapath_csr__reg_dmem_protection_7.values[0] << 4;}
  val_t T721;
  { T721 = T719 | T720 << 8;}
  val_t T722;
  { T722 = T718 | T721 << 16;}
  val_t T723;
  { T723 = T722 | 0x0L << 32;}
  val_t T724;
  T724 = Core_datapath_csr__io_rw_addr.values[0] == 0x50cL;
  val_t T725;
  { T725 = TERNARY_1(T724, T723, T715);}
  val_t T726;
  { T726 = 0x0L | Core_datapath_csr__reg_msip_0.values[0] << 3;}
  val_t T727;
  { T727 = T726 | Core_datapath_csr__reg_ie_0.values[0] << 4;}
  val_t T728;
  { T728 = Core_datapath_csr__reg_prv_0.values[0] | Core_datapath_csr__reg_ie1_0.values[0] << 2;}
  val_t T729;
  { T729 = T727 | T728 << 5;}
  val_t T730;
  { T730 = Core_datapath_csr__reg_prv1_0.values[0] | 0x0L << 2;}
  val_t T731;
  { T731 = T730 | Core_datapath_csr__reg_mtie_0.values[0] << 22;}
  val_t T732;
  { T732 = T731 | 0x10L << 23;}
  val_t T733;
  { T733 = T729 | T732 << 8;}
  { Core_datapath_csr__status_0.values[0] = T733;}
  val_t T734;
  { T734 = 0x0L | Core_datapath_csr__reg_msip_1.values[0] << 3;}
  val_t T735;
  { T735 = T734 | Core_datapath_csr__reg_ie_1.values[0] << 4;}
  val_t T736;
  { T736 = Core_datapath_csr__reg_prv_1.values[0] | Core_datapath_csr__reg_ie1_1.values[0] << 2;}
  val_t T737;
  { T737 = T735 | T736 << 5;}
  val_t T738;
  { T738 = Core_datapath_csr__reg_prv1_1.values[0] | 0x0L << 2;}
  val_t T739;
  { T739 = T738 | Core_datapath_csr__reg_mtie_1.values[0] << 22;}
  val_t T740;
  { T740 = T739 | 0x10L << 23;}
  val_t T741;
  { T741 = T737 | T740 << 8;}
  { Core_datapath_csr__status_1.values[0] = T741;}
  val_t T742;
  T742 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T743;
  { T743 = TERNARY_1(T742, Core_datapath_csr__status_1.values[0], Core_datapath_csr__status_0.values[0]);}
  val_t T744;
  { T744 = 0x0L | Core_datapath_csr__reg_msip_2.values[0] << 3;}
  val_t T745;
  { T745 = T744 | Core_datapath_csr__reg_ie_2.values[0] << 4;}
  val_t T746;
  { T746 = Core_datapath_csr__reg_prv_2.values[0] | Core_datapath_csr__reg_ie1_2.values[0] << 2;}
  val_t T747;
  { T747 = T745 | T746 << 5;}
  val_t T748;
  { T748 = Core_datapath_csr__reg_prv1_2.values[0] | 0x0L << 2;}
  val_t T749;
  { T749 = T748 | Core_datapath_csr__reg_mtie_2.values[0] << 22;}
  val_t T750;
  { T750 = T749 | 0x10L << 23;}
  val_t T751;
  { T751 = T747 | T750 << 8;}
  { Core_datapath_csr__status_2.values[0] = T751;}
  val_t T752;
  { T752 = 0x0L | Core_datapath_csr__reg_msip_3.values[0] << 3;}
  val_t T753;
  { T753 = T752 | Core_datapath_csr__reg_ie_3.values[0] << 4;}
  val_t T754;
  { T754 = Core_datapath_csr__reg_prv_3.values[0] | Core_datapath_csr__reg_ie1_3.values[0] << 2;}
  val_t T755;
  { T755 = T753 | T754 << 5;}
  val_t T756;
  { T756 = Core_datapath_csr__reg_prv1_3.values[0] | 0x0L << 2;}
  val_t T757;
  { T757 = T756 | Core_datapath_csr__reg_mtie_3.values[0] << 22;}
  val_t T758;
  { T758 = T757 | 0x10L << 23;}
  val_t T759;
  { T759 = T755 | T758 << 8;}
  { Core_datapath_csr__status_3.values[0] = T759;}
  val_t T760;
  T760 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T761;
  { T761 = TERNARY_1(T760, Core_datapath_csr__status_3.values[0], Core_datapath_csr__status_2.values[0]);}
  val_t T762;
  T762 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T763;
  { T763 = TERNARY_1(T762, T761, T743);}
  val_t T764;
  { T764 = 0x0L | Core_datapath_csr__reg_msip_4.values[0] << 3;}
  val_t T765;
  { T765 = T764 | Core_datapath_csr__reg_ie_4.values[0] << 4;}
  val_t T766;
  { T766 = Core_datapath_csr__reg_prv_4.values[0] | Core_datapath_csr__reg_ie1_4.values[0] << 2;}
  val_t T767;
  { T767 = T765 | T766 << 5;}
  val_t T768;
  { T768 = Core_datapath_csr__reg_prv1_4.values[0] | 0x0L << 2;}
  val_t T769;
  { T769 = T768 | Core_datapath_csr__reg_mtie_4.values[0] << 22;}
  val_t T770;
  { T770 = T769 | 0x10L << 23;}
  val_t T771;
  { T771 = T767 | T770 << 8;}
  { Core_datapath_csr__status_4.values[0] = T771;}
  val_t T772;
  { T772 = 0x0L | Core_datapath_csr__reg_msip_5.values[0] << 3;}
  val_t T773;
  { T773 = T772 | Core_datapath_csr__reg_ie_5.values[0] << 4;}
  val_t T774;
  { T774 = Core_datapath_csr__reg_prv_5.values[0] | Core_datapath_csr__reg_ie1_5.values[0] << 2;}
  val_t T775;
  { T775 = T773 | T774 << 5;}
  val_t T776;
  { T776 = Core_datapath_csr__reg_prv1_5.values[0] | 0x0L << 2;}
  val_t T777;
  { T777 = T776 | Core_datapath_csr__reg_mtie_5.values[0] << 22;}
  val_t T778;
  { T778 = T777 | 0x10L << 23;}
  val_t T779;
  { T779 = T775 | T778 << 8;}
  { Core_datapath_csr__status_5.values[0] = T779;}
  val_t T780;
  T780 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T781;
  { T781 = TERNARY_1(T780, Core_datapath_csr__status_5.values[0], Core_datapath_csr__status_4.values[0]);}
  val_t T782;
  { T782 = 0x0L | Core_datapath_csr__reg_msip_6.values[0] << 3;}
  val_t T783;
  { T783 = T782 | Core_datapath_csr__reg_ie_6.values[0] << 4;}
  val_t T784;
  { T784 = Core_datapath_csr__reg_prv_6.values[0] | Core_datapath_csr__reg_ie1_6.values[0] << 2;}
  val_t T785;
  { T785 = T783 | T784 << 5;}
  val_t T786;
  { T786 = Core_datapath_csr__reg_prv1_6.values[0] | 0x0L << 2;}
  val_t T787;
  { T787 = T786 | Core_datapath_csr__reg_mtie_6.values[0] << 22;}
  val_t T788;
  { T788 = T787 | 0x10L << 23;}
  val_t T789;
  { T789 = T785 | T788 << 8;}
  { Core_datapath_csr__status_6.values[0] = T789;}
  val_t T790;
  { T790 = 0x0L | Core_datapath_csr__reg_msip_7.values[0] << 3;}
  val_t T791;
  { T791 = T790 | Core_datapath_csr__reg_ie_7.values[0] << 4;}
  val_t T792;
  { T792 = Core_datapath_csr__reg_prv_7.values[0] | Core_datapath_csr__reg_ie1_7.values[0] << 2;}
  val_t T793;
  { T793 = T791 | T792 << 5;}
  val_t T794;
  { T794 = Core_datapath_csr__reg_prv1_7.values[0] | 0x0L << 2;}
  val_t T795;
  { T795 = T794 | Core_datapath_csr__reg_mtie_7.values[0] << 22;}
  val_t T796;
  { T796 = T795 | 0x10L << 23;}
  val_t T797;
  { T797 = T793 | T796 << 8;}
  { Core_datapath_csr__status_7.values[0] = T797;}
  val_t T798;
  T798 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T799;
  { T799 = TERNARY_1(T798, Core_datapath_csr__status_7.values[0], Core_datapath_csr__status_6.values[0]);}
  val_t T800;
  T800 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T801;
  { T801 = TERNARY_1(T800, T799, T781);}
  val_t T802;
  T802 = (Core_datapath_csr__io_rw_thread.values[0] >> 2) & 1;
  val_t T803;
  { T803 = TERNARY_1(T802, T801, T763);}
  val_t T804;
  T804 = Core_datapath_csr__io_rw_addr.values[0] == 0x50aL;
  val_t T805;
  { T805 = TERNARY_1(T804, T803, T725);}
  { Core_datapath_csr__data_out.values[0] = T805;}
  val_t T806;
  { T806 = Core_datapath_csr__data_out.values[0] & T567;}
  val_t T807;
  T807 = Core_datapath_csr__io_rw_csr_type.values[0] == 0x3L;
  val_t T808;
  { T808 = TERNARY_1(T807, T806, T565);}
  val_t T809;
  { T809 = Core_datapath_csr__io_rw_data_in.values[0] | 0x0L << 32;}
  val_t T810;
  { T810 = Core_datapath_csr__data_out.values[0] | T809;}
  val_t T811;
  T811 = Core_datapath_csr__io_rw_csr_type.values[0] == 0x2L;
  { Core_datapath_csr__data_in.values[0] = TERNARY_1(T811, T810, T808);}
  val_t T812;
  T812 = (Core_datapath_csr__data_in.values[0] >> 3) & 1;
  val_t T813;
  T813 = 0x1L << Core_datapath_csr__io_rw_thread.values[0];
  T813 = T813 & 0xffL;
  val_t T814;
  T814 = (T813 >> 1) & 1;
  val_t T815;
  T815 = Core_datapath_csr__io_rw_addr.values[0] == 0x50aL;
  { Core_datapath_csr__io_kill.values[0] = Core_datapath__io_control_exe_kill.values[0];}
  val_t T816;
  { T816 = Core_datapath_csr__io_kill.values[0] ^ 0x1L;}
  { Core_datapath_csr__priv_fault.values[0] = 0x0L;}
  val_t T817;
  { T817 = Core_datapath_csr__priv_fault.values[0] ^ 0x1L;}
  { Core_control__exe_csr_write.values[0] = Core_control__exe_reg_csr_write.values[0] & Core_control__exe_reg_valid.values[0];}
  { Core_control__io_exe_csr_write.values[0] = Core_control__exe_csr_write.values[0];}
  { Core_datapath__io_control_exe_csr_write.values[0] = Core_control__io_exe_csr_write.values[0];}
  { Core_datapath_csr__io_rw_write.values[0] = Core_datapath__io_control_exe_csr_write.values[0];}
  val_t T818;
  { T818 = Core_datapath_csr__io_rw_write.values[0] & T817;}
  { Core_datapath_csr__write.values[0] = T818 & T816;}
  val_t T819;
  { T819 = Core_datapath_csr__write.values[0] & T815;}
  val_t T820;
  { T820 = T819 & T814;}
  val_t T821;
  { T821 = TERNARY_1(T820, T812, Core_datapath_csr__reg_msip_1.values[0]);}
  { Core_datapath__io_int_exts_0.values[0] = Core__io_int_exts_0.values[0];}
  { Core_datapath_csr__io_int_exts_0.values[0] = Core_datapath__io_int_exts_0.values[0];}
  val_t T822;
  { T822 = Core_datapath_csr__io_int_exts_0.values[0] & T814;}
  val_t T823;
  { T823 = TERNARY(T822, 0x1L, T821);}
  { Core_datapath__io_int_exts_1.values[0] = Core__io_int_exts_1.values[0];}
  { Core_datapath_csr__io_int_exts_1.values[0] = Core_datapath__io_int_exts_1.values[0];}
  val_t T824;
  { T824 = Core_datapath_csr__io_int_exts_1.values[0] & T814;}
  val_t T825;
  { T825 = TERNARY(T824, 0x1L, T823);}
  { Core_datapath__io_int_exts_2.values[0] = Core__io_int_exts_2.values[0];}
  { Core_datapath_csr__io_int_exts_2.values[0] = Core_datapath__io_int_exts_2.values[0];}
  val_t T826;
  { T826 = Core_datapath_csr__io_int_exts_2.values[0] & T814;}
  val_t T827;
  { T827 = TERNARY(T826, 0x1L, T825);}
  { Core_datapath__io_int_exts_3.values[0] = Core__io_int_exts_3.values[0];}
  { Core_datapath_csr__io_int_exts_3.values[0] = Core_datapath__io_int_exts_3.values[0];}
  val_t T828;
  { T828 = Core_datapath_csr__io_int_exts_3.values[0] & T814;}
  val_t T829;
  { T829 = TERNARY(T828, 0x1L, T827);}
  { Core_datapath__io_int_exts_4.values[0] = Core__io_int_exts_4.values[0];}
  { Core_datapath_csr__io_int_exts_4.values[0] = Core_datapath__io_int_exts_4.values[0];}
  val_t T830;
  { T830 = Core_datapath_csr__io_int_exts_4.values[0] & T814;}
  val_t T831;
  { T831 = TERNARY(T830, 0x1L, T829);}
  { Core_datapath__io_int_exts_5.values[0] = Core__io_int_exts_5.values[0];}
  { Core_datapath_csr__io_int_exts_5.values[0] = Core_datapath__io_int_exts_5.values[0];}
  val_t T832;
  { T832 = Core_datapath_csr__io_int_exts_5.values[0] & T814;}
  val_t T833;
  { T833 = TERNARY(T832, 0x1L, T831);}
  { Core_datapath__io_int_exts_6.values[0] = Core__io_int_exts_6.values[0];}
  { Core_datapath_csr__io_int_exts_6.values[0] = Core_datapath__io_int_exts_6.values[0];}
  val_t T834;
  { T834 = Core_datapath_csr__io_int_exts_6.values[0] & T814;}
  val_t T835;
  { T835 = TERNARY(T834, 0x1L, T833);}
  { Core_datapath__io_int_exts_7.values[0] = Core__io_int_exts_7.values[0];}
  { Core_datapath_csr__io_int_exts_7.values[0] = Core_datapath__io_int_exts_7.values[0];}
  val_t T836;
  { T836 = Core_datapath_csr__io_int_exts_7.values[0] & T814;}
  val_t T837;
  { T837 = TERNARY(T836, 0x1L, T835);}
  { Core_datapath__reset.values[0] = reset.values[0];}
  { Core_datapath_csr__reset.values[0] = Core_datapath__reset.values[0];}
  { T838.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T837);}
  val_t T839;
  T839 = (Core_datapath_csr__data_in.values[0] >> 26) & 1;
  val_t T840;
  T840 = 0x1L << Core_datapath_csr__io_rw_thread.values[0];
  T840 = T840 & 0xffL;
  val_t T841;
  T841 = (T840 >> 7) & 1;
  val_t T842;
  { T842 = T819 & T841;}
  val_t T843;
  { T843 = TERNARY_1(T842, T839, Core_datapath_csr__reg_mtie_7.values[0]);}
  val_t T844;
  { T844 = T141 & T841;}
  val_t T845;
  { T845 = TERNARY(T844, 0x1L, T843);}
  { T846.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T845);}
  { T847.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, Core_datapath_csr__reg_prv1_7.values[0]);}
  { T848.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, Core_datapath_csr__reg_ie1_7.values[0]);}
  { T849.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x3L, Core_datapath_csr__reg_prv_7.values[0]);}
  val_t T850;
  T850 = (Core_datapath_csr__data_in.values[0] >> 4) & 1;
  val_t T851;
  T851 = 0x1L << Core_datapath_csr__io_rw_thread.values[0];
  T851 = T851 & 0xffL;
  val_t T852;
  T852 = (T851 >> 7) & 1;
  val_t T853;
  { T853 = T819 & T852;}
  val_t T854;
  { T854 = TERNARY_1(T853, T850, Core_datapath_csr__reg_ie_7.values[0]);}
  { Core_datapath_loadstore__io_store_misaligned.values[0] = Core_datapath_loadstore__store_misaligned.values[0];}
  { Core_datapath__io_control_exe_exc_store_misaligned.values[0] = Core_datapath_loadstore__io_store_misaligned.values[0];}
  { Core_control__io_exe_exc_store_misaligned.values[0] = Core_datapath__io_control_exe_exc_store_misaligned.values[0];}
  val_t T855;
  { T855 = Core_datapath_loadstore__io_addr.values[0];}
  T855 = T855 & 0x3L;
  val_t T856;
  T856 = T855 != 0x0L;
  val_t T857;
  T857 = Core_datapath_loadstore__io_mem_type.values[0] == 0x2L;
  val_t T858;
  { T858 = T857 & T856;}
  val_t T859;
  T859 = (Core_datapath_loadstore__io_addr.values[0] >> 0) & 1;
  val_t T860;
  T860 = T859 != 0x0L;
  val_t T861;
  T861 = Core_datapath_loadstore__io_mem_type.values[0] == 0x5L;
  val_t T862;
  T862 = Core_datapath_loadstore__io_mem_type.values[0] == 0x1L;
  val_t T863;
  { T863 = T862 | T861;}
  val_t T864;
  { T864 = T863 & T860;}
  val_t T865;
  { T865 = T864 | T858;}
  val_t T866;
  { T866 = Core_datapath_loadstore__io_load.values[0] & T865;}
  { Core_datapath_loadstore__load_misaligned.values[0] = T866;}
  { Core_datapath_loadstore__io_load_misaligned.values[0] = Core_datapath_loadstore__load_misaligned.values[0];}
  { Core_datapath__io_control_exe_exc_load_misaligned.values[0] = Core_datapath_loadstore__io_load_misaligned.values[0];}
  { Core_control__io_exe_exc_load_misaligned.values[0] = Core_datapath__io_control_exe_exc_load_misaligned.values[0];}
  { Core_datapath_csr__io_priv_fault.values[0] = Core_datapath_csr__priv_fault.values[0];}
  { Core_datapath__io_control_exe_exc_priv_inst.values[0] = Core_datapath_csr__io_priv_fault.values[0];}
  { Core_control__io_exe_exc_priv_inst.values[0] = Core_datapath__io_control_exe_exc_priv_inst.values[0];}
  val_t T867;
  { T867 = Core_control__io_exe_exc_priv_inst.values[0] | Core_control__io_exe_exc_load_misaligned.values[0];}
  { Core_control__exe_inst_exc.values[0] = T867 | Core_control__io_exe_exc_store_misaligned.values[0];}
  val_t T868;
  { T868 = Core_control__exe_reg_exc.values[0] | Core_control__exe_inst_exc.values[0];}
  val_t T869;
  { T869 = T868 | Core_control__exe_any_exc.values[0];}
  val_t T870;
  { T870 = Core_control__exe_reg_valid.values[0] & T869;}
  { Core_control__exe_exception.values[0] = T870;}
  { Core_control__io_exe_exception.values[0] = Core_control__exe_exception.values[0];}
  { Core_datapath__io_control_exe_exception.values[0] = Core_control__io_exe_exception.values[0];}
  { Core_datapath_csr__io_exception.values[0] = Core_datapath__io_control_exe_exception.values[0];}
  val_t T871;
  { T871 = TERNARY(Core_datapath_csr__io_exception.values[0], 0x0L, T854);}
  { T872.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T871);}
  val_t T873;
  T873 = (T813 >> 7) & 1;
  val_t T874;
  { T874 = T819 & T873;}
  val_t T875;
  { T875 = TERNARY_1(T874, T812, Core_datapath_csr__reg_msip_7.values[0]);}
  val_t T876;
  { T876 = Core_datapath_csr__io_int_exts_0.values[0] & T873;}
  val_t T877;
  { T877 = TERNARY(T876, 0x1L, T875);}
  val_t T878;
  { T878 = Core_datapath_csr__io_int_exts_1.values[0] & T873;}
  val_t T879;
  { T879 = TERNARY(T878, 0x1L, T877);}
  val_t T880;
  { T880 = Core_datapath_csr__io_int_exts_2.values[0] & T873;}
  val_t T881;
  { T881 = TERNARY(T880, 0x1L, T879);}
  val_t T882;
  { T882 = Core_datapath_csr__io_int_exts_3.values[0] & T873;}
  val_t T883;
  { T883 = TERNARY(T882, 0x1L, T881);}
  val_t T884;
  { T884 = Core_datapath_csr__io_int_exts_4.values[0] & T873;}
  val_t T885;
  { T885 = TERNARY(T884, 0x1L, T883);}
  val_t T886;
  { T886 = Core_datapath_csr__io_int_exts_5.values[0] & T873;}
  val_t T887;
  { T887 = TERNARY(T886, 0x1L, T885);}
  val_t T888;
  { T888 = Core_datapath_csr__io_int_exts_6.values[0] & T873;}
  val_t T889;
  { T889 = TERNARY(T888, 0x1L, T887);}
  val_t T890;
  { T890 = Core_datapath_csr__io_int_exts_7.values[0] & T873;}
  val_t T891;
  { T891 = TERNARY(T890, 0x1L, T889);}
  { T892.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T891);}
  val_t T893;
  T893 = (T840 >> 6) & 1;
  val_t T894;
  { T894 = T819 & T893;}
  val_t T895;
  { T895 = TERNARY_1(T894, T839, Core_datapath_csr__reg_mtie_6.values[0]);}
  val_t T896;
  { T896 = T141 & T893;}
  val_t T897;
  { T897 = TERNARY(T896, 0x1L, T895);}
  { T898.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T897);}
  { T899.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, Core_datapath_csr__reg_prv1_6.values[0]);}
  { T900.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, Core_datapath_csr__reg_ie1_6.values[0]);}
  { T901.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x3L, Core_datapath_csr__reg_prv_6.values[0]);}
  val_t T902;
  T902 = (T851 >> 6) & 1;
  val_t T903;
  { T903 = T819 & T902;}
  val_t T904;
  { T904 = TERNARY_1(T903, T850, Core_datapath_csr__reg_ie_6.values[0]);}
  val_t T905;
  { T905 = TERNARY(Core_datapath_csr__io_exception.values[0], 0x0L, T904);}
  { T906.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T905);}
  val_t T907;
  T907 = (T813 >> 6) & 1;
  val_t T908;
  { T908 = T819 & T907;}
  val_t T909;
  { T909 = TERNARY_1(T908, T812, Core_datapath_csr__reg_msip_6.values[0]);}
  val_t T910;
  { T910 = Core_datapath_csr__io_int_exts_0.values[0] & T907;}
  val_t T911;
  { T911 = TERNARY(T910, 0x1L, T909);}
  val_t T912;
  { T912 = Core_datapath_csr__io_int_exts_1.values[0] & T907;}
  val_t T913;
  { T913 = TERNARY(T912, 0x1L, T911);}
  val_t T914;
  { T914 = Core_datapath_csr__io_int_exts_2.values[0] & T907;}
  val_t T915;
  { T915 = TERNARY(T914, 0x1L, T913);}
  val_t T916;
  { T916 = Core_datapath_csr__io_int_exts_3.values[0] & T907;}
  val_t T917;
  { T917 = TERNARY(T916, 0x1L, T915);}
  val_t T918;
  { T918 = Core_datapath_csr__io_int_exts_4.values[0] & T907;}
  val_t T919;
  { T919 = TERNARY(T918, 0x1L, T917);}
  val_t T920;
  { T920 = Core_datapath_csr__io_int_exts_5.values[0] & T907;}
  val_t T921;
  { T921 = TERNARY(T920, 0x1L, T919);}
  val_t T922;
  { T922 = Core_datapath_csr__io_int_exts_6.values[0] & T907;}
  val_t T923;
  { T923 = TERNARY(T922, 0x1L, T921);}
  val_t T924;
  { T924 = Core_datapath_csr__io_int_exts_7.values[0] & T907;}
  val_t T925;
  { T925 = TERNARY(T924, 0x1L, T923);}
  { T926.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T925);}
  val_t T927;
  T927 = (T840 >> 5) & 1;
  val_t T928;
  { T928 = T819 & T927;}
  val_t T929;
  { T929 = TERNARY_1(T928, T839, Core_datapath_csr__reg_mtie_5.values[0]);}
  val_t T930;
  { T930 = T141 & T927;}
  val_t T931;
  { T931 = TERNARY(T930, 0x1L, T929);}
  { T932.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T931);}
  { T933.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, Core_datapath_csr__reg_prv1_5.values[0]);}
  { T934.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, Core_datapath_csr__reg_ie1_5.values[0]);}
  { T935.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x3L, Core_datapath_csr__reg_prv_5.values[0]);}
  val_t T936;
  T936 = (T851 >> 5) & 1;
  val_t T937;
  { T937 = T819 & T936;}
  val_t T938;
  { T938 = TERNARY_1(T937, T850, Core_datapath_csr__reg_ie_5.values[0]);}
  val_t T939;
  { T939 = TERNARY(Core_datapath_csr__io_exception.values[0], 0x0L, T938);}
  { T940.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T939);}
  val_t T941;
  T941 = (T813 >> 5) & 1;
  val_t T942;
  { T942 = T819 & T941;}
  val_t T943;
  { T943 = TERNARY_1(T942, T812, Core_datapath_csr__reg_msip_5.values[0]);}
  val_t T944;
  { T944 = Core_datapath_csr__io_int_exts_0.values[0] & T941;}
  val_t T945;
  { T945 = TERNARY(T944, 0x1L, T943);}
  val_t T946;
  { T946 = Core_datapath_csr__io_int_exts_1.values[0] & T941;}
  val_t T947;
  { T947 = TERNARY(T946, 0x1L, T945);}
  val_t T948;
  { T948 = Core_datapath_csr__io_int_exts_2.values[0] & T941;}
  val_t T949;
  { T949 = TERNARY(T948, 0x1L, T947);}
  val_t T950;
  { T950 = Core_datapath_csr__io_int_exts_3.values[0] & T941;}
  val_t T951;
  { T951 = TERNARY(T950, 0x1L, T949);}
  val_t T952;
  { T952 = Core_datapath_csr__io_int_exts_4.values[0] & T941;}
  val_t T953;
  { T953 = TERNARY(T952, 0x1L, T951);}
  val_t T954;
  { T954 = Core_datapath_csr__io_int_exts_5.values[0] & T941;}
  val_t T955;
  { T955 = TERNARY(T954, 0x1L, T953);}
  val_t T956;
  { T956 = Core_datapath_csr__io_int_exts_6.values[0] & T941;}
  val_t T957;
  { T957 = TERNARY(T956, 0x1L, T955);}
  val_t T958;
  { T958 = Core_datapath_csr__io_int_exts_7.values[0] & T941;}
  val_t T959;
  { T959 = TERNARY(T958, 0x1L, T957);}
  { T960.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T959);}
  val_t T961;
  T961 = (T840 >> 4) & 1;
  val_t T962;
  { T962 = T819 & T961;}
  val_t T963;
  { T963 = TERNARY_1(T962, T839, Core_datapath_csr__reg_mtie_4.values[0]);}
  val_t T964;
  { T964 = T141 & T961;}
  val_t T965;
  { T965 = TERNARY(T964, 0x1L, T963);}
  { T966.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T965);}
  { T967.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, Core_datapath_csr__reg_prv1_4.values[0]);}
  { T968.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, Core_datapath_csr__reg_ie1_4.values[0]);}
  { T969.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x3L, Core_datapath_csr__reg_prv_4.values[0]);}
  val_t T970;
  T970 = (T851 >> 4) & 1;
  val_t T971;
  { T971 = T819 & T970;}
  val_t T972;
  { T972 = TERNARY_1(T971, T850, Core_datapath_csr__reg_ie_4.values[0]);}
  val_t T973;
  { T973 = TERNARY(Core_datapath_csr__io_exception.values[0], 0x0L, T972);}
  { T974.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T973);}
  val_t T975;
  T975 = (T813 >> 4) & 1;
  val_t T976;
  { T976 = T819 & T975;}
  val_t T977;
  { T977 = TERNARY_1(T976, T812, Core_datapath_csr__reg_msip_4.values[0]);}
  val_t T978;
  { T978 = Core_datapath_csr__io_int_exts_0.values[0] & T975;}
  val_t T979;
  { T979 = TERNARY(T978, 0x1L, T977);}
  val_t T980;
  { T980 = Core_datapath_csr__io_int_exts_1.values[0] & T975;}
  val_t T981;
  { T981 = TERNARY(T980, 0x1L, T979);}
  val_t T982;
  { T982 = Core_datapath_csr__io_int_exts_2.values[0] & T975;}
  val_t T983;
  { T983 = TERNARY(T982, 0x1L, T981);}
  val_t T984;
  { T984 = Core_datapath_csr__io_int_exts_3.values[0] & T975;}
  val_t T985;
  { T985 = TERNARY(T984, 0x1L, T983);}
  val_t T986;
  { T986 = Core_datapath_csr__io_int_exts_4.values[0] & T975;}
  val_t T987;
  { T987 = TERNARY(T986, 0x1L, T985);}
  val_t T988;
  { T988 = Core_datapath_csr__io_int_exts_5.values[0] & T975;}
  val_t T989;
  { T989 = TERNARY(T988, 0x1L, T987);}
  val_t T990;
  { T990 = Core_datapath_csr__io_int_exts_6.values[0] & T975;}
  val_t T991;
  { T991 = TERNARY(T990, 0x1L, T989);}
  val_t T992;
  { T992 = Core_datapath_csr__io_int_exts_7.values[0] & T975;}
  val_t T993;
  { T993 = TERNARY(T992, 0x1L, T991);}
  { T994.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T993);}
  val_t T995;
  T995 = (T840 >> 3) & 1;
  val_t T996;
  { T996 = T819 & T995;}
  val_t T997;
  { T997 = TERNARY_1(T996, T839, Core_datapath_csr__reg_mtie_3.values[0]);}
  val_t T998;
  { T998 = T141 & T995;}
  val_t T999;
  { T999 = TERNARY(T998, 0x1L, T997);}
  { T1000.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T999);}
  { T1001.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, Core_datapath_csr__reg_prv1_3.values[0]);}
  { T1002.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, Core_datapath_csr__reg_ie1_3.values[0]);}
  { T1003.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x3L, Core_datapath_csr__reg_prv_3.values[0]);}
  val_t T1004;
  T1004 = (T851 >> 3) & 1;
  val_t T1005;
  { T1005 = T819 & T1004;}
  val_t T1006;
  { T1006 = TERNARY_1(T1005, T850, Core_datapath_csr__reg_ie_3.values[0]);}
  val_t T1007;
  { T1007 = TERNARY(Core_datapath_csr__io_exception.values[0], 0x0L, T1006);}
  { T1008.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1007);}
  val_t T1009;
  T1009 = (T813 >> 3) & 1;
  val_t T1010;
  { T1010 = T819 & T1009;}
  val_t T1011;
  { T1011 = TERNARY_1(T1010, T812, Core_datapath_csr__reg_msip_3.values[0]);}
  val_t T1012;
  { T1012 = Core_datapath_csr__io_int_exts_0.values[0] & T1009;}
  val_t T1013;
  { T1013 = TERNARY(T1012, 0x1L, T1011);}
  val_t T1014;
  { T1014 = Core_datapath_csr__io_int_exts_1.values[0] & T1009;}
  val_t T1015;
  { T1015 = TERNARY(T1014, 0x1L, T1013);}
  val_t T1016;
  { T1016 = Core_datapath_csr__io_int_exts_2.values[0] & T1009;}
  val_t T1017;
  { T1017 = TERNARY(T1016, 0x1L, T1015);}
  val_t T1018;
  { T1018 = Core_datapath_csr__io_int_exts_3.values[0] & T1009;}
  val_t T1019;
  { T1019 = TERNARY(T1018, 0x1L, T1017);}
  val_t T1020;
  { T1020 = Core_datapath_csr__io_int_exts_4.values[0] & T1009;}
  val_t T1021;
  { T1021 = TERNARY(T1020, 0x1L, T1019);}
  val_t T1022;
  { T1022 = Core_datapath_csr__io_int_exts_5.values[0] & T1009;}
  val_t T1023;
  { T1023 = TERNARY(T1022, 0x1L, T1021);}
  val_t T1024;
  { T1024 = Core_datapath_csr__io_int_exts_6.values[0] & T1009;}
  val_t T1025;
  { T1025 = TERNARY(T1024, 0x1L, T1023);}
  val_t T1026;
  { T1026 = Core_datapath_csr__io_int_exts_7.values[0] & T1009;}
  val_t T1027;
  { T1027 = TERNARY(T1026, 0x1L, T1025);}
  { T1028.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1027);}
  val_t T1029;
  T1029 = (T840 >> 2) & 1;
  val_t T1030;
  { T1030 = T819 & T1029;}
  val_t T1031;
  { T1031 = TERNARY_1(T1030, T839, Core_datapath_csr__reg_mtie_2.values[0]);}
  val_t T1032;
  { T1032 = T141 & T1029;}
  val_t T1033;
  { T1033 = TERNARY(T1032, 0x1L, T1031);}
  { T1034.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1033);}
  { T1035.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, Core_datapath_csr__reg_prv1_2.values[0]);}
  { T1036.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, Core_datapath_csr__reg_ie1_2.values[0]);}
  { T1037.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x3L, Core_datapath_csr__reg_prv_2.values[0]);}
  val_t T1038;
  T1038 = (T851 >> 2) & 1;
  val_t T1039;
  { T1039 = T819 & T1038;}
  val_t T1040;
  { T1040 = TERNARY_1(T1039, T850, Core_datapath_csr__reg_ie_2.values[0]);}
  val_t T1041;
  { T1041 = TERNARY(Core_datapath_csr__io_exception.values[0], 0x0L, T1040);}
  { T1042.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1041);}
  val_t T1043;
  T1043 = (T813 >> 2) & 1;
  val_t T1044;
  { T1044 = T819 & T1043;}
  val_t T1045;
  { T1045 = TERNARY_1(T1044, T812, Core_datapath_csr__reg_msip_2.values[0]);}
  val_t T1046;
  { T1046 = Core_datapath_csr__io_int_exts_0.values[0] & T1043;}
  val_t T1047;
  { T1047 = TERNARY(T1046, 0x1L, T1045);}
  val_t T1048;
  { T1048 = Core_datapath_csr__io_int_exts_1.values[0] & T1043;}
  val_t T1049;
  { T1049 = TERNARY(T1048, 0x1L, T1047);}
  val_t T1050;
  { T1050 = Core_datapath_csr__io_int_exts_2.values[0] & T1043;}
  val_t T1051;
  { T1051 = TERNARY(T1050, 0x1L, T1049);}
  val_t T1052;
  { T1052 = Core_datapath_csr__io_int_exts_3.values[0] & T1043;}
  val_t T1053;
  { T1053 = TERNARY(T1052, 0x1L, T1051);}
  val_t T1054;
  { T1054 = Core_datapath_csr__io_int_exts_4.values[0] & T1043;}
  val_t T1055;
  { T1055 = TERNARY(T1054, 0x1L, T1053);}
  val_t T1056;
  { T1056 = Core_datapath_csr__io_int_exts_5.values[0] & T1043;}
  val_t T1057;
  { T1057 = TERNARY(T1056, 0x1L, T1055);}
  val_t T1058;
  { T1058 = Core_datapath_csr__io_int_exts_6.values[0] & T1043;}
  val_t T1059;
  { T1059 = TERNARY(T1058, 0x1L, T1057);}
  val_t T1060;
  { T1060 = Core_datapath_csr__io_int_exts_7.values[0] & T1043;}
  val_t T1061;
  { T1061 = TERNARY(T1060, 0x1L, T1059);}
  { T1062.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1061);}
  val_t T1063;
  T1063 = (T840 >> 1) & 1;
  val_t T1064;
  { T1064 = T819 & T1063;}
  val_t T1065;
  { T1065 = TERNARY_1(T1064, T839, Core_datapath_csr__reg_mtie_1.values[0]);}
  val_t T1066;
  { T1066 = T141 & T1063;}
  val_t T1067;
  { T1067 = TERNARY(T1066, 0x1L, T1065);}
  { T1068.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1067);}
  { T1069.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, Core_datapath_csr__reg_prv1_1.values[0]);}
  { T1070.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, Core_datapath_csr__reg_ie1_1.values[0]);}
  { T1071.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x3L, Core_datapath_csr__reg_prv_1.values[0]);}
  val_t T1072;
  T1072 = (T851 >> 1) & 1;
  val_t T1073;
  { T1073 = T819 & T1072;}
  val_t T1074;
  { T1074 = TERNARY_1(T1073, T850, Core_datapath_csr__reg_ie_1.values[0]);}
  val_t T1075;
  { T1075 = TERNARY(Core_datapath_csr__io_exception.values[0], 0x0L, T1074);}
  { T1076.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1075);}
  val_t T1077;
  T1077 = (T840 >> 0) & 1;
  val_t T1078;
  { T1078 = T819 & T1077;}
  val_t T1079;
  { T1079 = TERNARY_1(T1078, T839, Core_datapath_csr__reg_mtie_0.values[0]);}
  val_t T1080;
  { T1080 = T141 & T1077;}
  val_t T1081;
  { T1081 = TERNARY(T1080, 0x1L, T1079);}
  { T1082.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1081);}
  { T1083.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, Core_datapath_csr__reg_prv1_0.values[0]);}
  { T1084.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, Core_datapath_csr__reg_ie1_0.values[0]);}
  { T1085.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x3L, Core_datapath_csr__reg_prv_0.values[0]);}
  val_t T1086;
  T1086 = (T851 >> 0) & 1;
  val_t T1087;
  { T1087 = T819 & T1086;}
  val_t T1088;
  { T1088 = TERNARY_1(T1087, T850, Core_datapath_csr__reg_ie_0.values[0]);}
  val_t T1089;
  { T1089 = TERNARY(Core_datapath_csr__io_exception.values[0], 0x0L, T1088);}
  { T1090.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1089);}
  val_t T1091;
  { T1091 = Core_datapath_csr__data_in.values[0] >> 28;}
  T1091 = T1091 & 0xfL;
  val_t T1092;
  T1092 = Core_datapath_csr__io_rw_addr.values[0] == 0x50cL;
  val_t T1093;
  { T1093 = Core_datapath_csr__write.values[0] & T1092;}
  val_t T1094;
  { T1094 = TERNARY_1(T1093, T1091, Core_datapath_csr__reg_dmem_protection_7.values[0]);}
  { T1095.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x8L, T1094);}
  val_t T1096;
  { T1096 = Core_datapath_csr__data_in.values[0] >> 24;}
  T1096 = T1096 & 0xfL;
  val_t T1097;
  { T1097 = TERNARY_1(T1093, T1096, Core_datapath_csr__reg_dmem_protection_6.values[0]);}
  { T1098.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x8L, T1097);}
  val_t T1099;
  { T1099 = Core_datapath_csr__data_in.values[0] >> 20;}
  T1099 = T1099 & 0xfL;
  val_t T1100;
  { T1100 = TERNARY_1(T1093, T1099, Core_datapath_csr__reg_dmem_protection_5.values[0]);}
  { T1101.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x8L, T1100);}
  val_t T1102;
  { T1102 = Core_datapath_csr__data_in.values[0] >> 16;}
  T1102 = T1102 & 0xfL;
  val_t T1103;
  { T1103 = TERNARY_1(T1093, T1102, Core_datapath_csr__reg_dmem_protection_4.values[0]);}
  { T1104.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x8L, T1103);}
  val_t T1105;
  { T1105 = Core_datapath_csr__data_in.values[0] >> 12;}
  T1105 = T1105 & 0xfL;
  val_t T1106;
  { T1106 = TERNARY_1(T1093, T1105, Core_datapath_csr__reg_dmem_protection_3.values[0]);}
  { T1107.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x8L, T1106);}
  val_t T1108;
  { T1108 = Core_datapath_csr__data_in.values[0] >> 8;}
  T1108 = T1108 & 0xfL;
  val_t T1109;
  { T1109 = TERNARY_1(T1093, T1108, Core_datapath_csr__reg_dmem_protection_2.values[0]);}
  { T1110.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x8L, T1109);}
  val_t T1111;
  { T1111 = Core_datapath_csr__data_in.values[0] >> 4;}
  T1111 = T1111 & 0xfL;
  val_t T1112;
  { T1112 = TERNARY_1(T1093, T1111, Core_datapath_csr__reg_dmem_protection_1.values[0]);}
  { T1113.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x8L, T1112);}
  val_t T1114;
  { T1114 = Core_datapath_csr__data_in.values[0];}
  T1114 = T1114 & 0xfL;
  val_t T1115;
  { T1115 = TERNARY_1(T1093, T1114, Core_datapath_csr__reg_dmem_protection_0.values[0]);}
  { T1116.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x8L, T1115);}
  val_t T1117;
  { T1117 = Core_datapath_csr__data_in.values[0] >> 28;}
  T1117 = T1117 & 0xfL;
  val_t T1118;
  T1118 = Core_datapath_csr__io_rw_addr.values[0] == 0x505L;
  val_t T1119;
  { T1119 = Core_datapath_csr__write.values[0] & T1118;}
  val_t T1120;
  { T1120 = TERNARY_1(T1119, T1117, Core_datapath_csr__reg_imem_protection_7.values[0]);}
  { T1121.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xcL, T1120);}
  val_t T1122;
  { T1122 = Core_datapath_csr__data_in.values[0] >> 24;}
  T1122 = T1122 & 0xfL;
  val_t T1123;
  { T1123 = TERNARY_1(T1119, T1122, Core_datapath_csr__reg_imem_protection_6.values[0]);}
  { T1124.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xcL, T1123);}
  val_t T1125;
  { T1125 = Core_datapath_csr__data_in.values[0] >> 20;}
  T1125 = T1125 & 0xfL;
  val_t T1126;
  { T1126 = TERNARY_1(T1119, T1125, Core_datapath_csr__reg_imem_protection_5.values[0]);}
  { T1127.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xcL, T1126);}
  val_t T1128;
  { T1128 = Core_datapath_csr__data_in.values[0] >> 16;}
  T1128 = T1128 & 0xfL;
  val_t T1129;
  { T1129 = TERNARY_1(T1119, T1128, Core_datapath_csr__reg_imem_protection_4.values[0]);}
  { T1130.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xcL, T1129);}
  val_t T1131;
  { T1131 = Core_datapath_csr__data_in.values[0] >> 12;}
  T1131 = T1131 & 0xfL;
  val_t T1132;
  { T1132 = TERNARY_1(T1119, T1131, Core_datapath_csr__reg_imem_protection_3.values[0]);}
  { T1133.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xcL, T1132);}
  val_t T1134;
  { T1134 = Core_datapath_csr__data_in.values[0] >> 8;}
  T1134 = T1134 & 0xfL;
  val_t T1135;
  { T1135 = TERNARY_1(T1119, T1134, Core_datapath_csr__reg_imem_protection_2.values[0]);}
  { T1136.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xcL, T1135);}
  val_t T1137;
  { T1137 = Core_datapath_csr__data_in.values[0] >> 4;}
  T1137 = T1137 & 0xfL;
  val_t T1138;
  { T1138 = TERNARY_1(T1119, T1137, Core_datapath_csr__reg_imem_protection_1.values[0]);}
  { T1139.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xcL, T1138);}
  val_t T1140;
  { T1140 = Core_datapath_csr__data_in.values[0];}
  T1140 = T1140 & 0xfL;
  val_t T1141;
  { T1141 = TERNARY_1(T1119, T1140, Core_datapath_csr__reg_imem_protection_0.values[0]);}
  { T1142.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x8L, T1141);}
  val_t T1143;
  { T1143 = Core_datapath_csr__data_in.values[0] >> 12;}
  T1143 = T1143 & 0xfL;
  val_t T1144;
  T1144 = Core_datapath_csr__io_rw_addr.values[0] == 0x50dL;
  val_t T1145;
  { T1145 = Core_datapath_csr__write.values[0] & T1144;}
  val_t T1146;
  { T1146 = TERNARY_1(T1145, T1143, Core_datapath_csr__reg_gpo_protection_3.values[0]);}
  { T1147.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x8L, T1146);}
  val_t T1148;
  { T1148 = Core_datapath_csr__data_in.values[0];}
  T1148 = T1148 & 0x3L;
  val_t T1149;
  T1149 = Core_datapath_csr__reg_gpo_protection_3.values[0] != 0xcL;
  val_t T1150;
  { T1150 = Core_datapath_csr__reg_gpo_protection_3.values[0];}
  T1150 = T1150 & 0x7L;
  val_t T1151;
  T1151 = T1150 == Core_datapath_csr__io_rw_thread.values[0];
  val_t T1152;
  T1152 = Core_datapath_csr__reg_gpo_protection_3.values[0] == 0x8L;
  val_t T1153;
  { T1153 = T1152 | T1151;}
  val_t T1154;
  { T1154 = T1153 & T1149;}
  val_t T1155;
  T1155 = Core_datapath_csr__io_rw_addr.values[0] == 0xcc7L;
  val_t T1156;
  { T1156 = Core_datapath_csr__write.values[0] & T1155;}
  val_t T1157;
  { T1157 = T1156 & T1154;}
  val_t T1158;
  { T1158 = TERNARY_1(T1157, T1148, Core_datapath_csr__reg_gpos_3.values[0]);}
  { T1159.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1158);}
  val_t T1160;
  { T1160 = Core_datapath_csr__data_in.values[0] >> 8;}
  T1160 = T1160 & 0xfL;
  val_t T1161;
  { T1161 = TERNARY_1(T1145, T1160, Core_datapath_csr__reg_gpo_protection_2.values[0]);}
  { T1162.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x8L, T1161);}
  val_t T1163;
  { T1163 = Core_datapath_csr__data_in.values[0];}
  T1163 = T1163 & 0x3L;
  val_t T1164;
  T1164 = Core_datapath_csr__reg_gpo_protection_2.values[0] != 0xcL;
  val_t T1165;
  { T1165 = Core_datapath_csr__reg_gpo_protection_2.values[0];}
  T1165 = T1165 & 0x7L;
  val_t T1166;
  T1166 = T1165 == Core_datapath_csr__io_rw_thread.values[0];
  val_t T1167;
  T1167 = Core_datapath_csr__reg_gpo_protection_2.values[0] == 0x8L;
  val_t T1168;
  { T1168 = T1167 | T1166;}
  val_t T1169;
  { T1169 = T1168 & T1164;}
  val_t T1170;
  T1170 = Core_datapath_csr__io_rw_addr.values[0] == 0xcc6L;
  val_t T1171;
  { T1171 = Core_datapath_csr__write.values[0] & T1170;}
  val_t T1172;
  { T1172 = T1171 & T1169;}
  val_t T1173;
  { T1173 = TERNARY_1(T1172, T1163, Core_datapath_csr__reg_gpos_2.values[0]);}
  { T1174.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1173);}
  val_t T1175;
  { T1175 = Core_datapath_csr__data_in.values[0] >> 4;}
  T1175 = T1175 & 0xfL;
  val_t T1176;
  { T1176 = TERNARY_1(T1145, T1175, Core_datapath_csr__reg_gpo_protection_1.values[0]);}
  { T1177.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x8L, T1176);}
  val_t T1178;
  { T1178 = Core_datapath_csr__data_in.values[0];}
  T1178 = T1178 & 0x3L;
  val_t T1179;
  T1179 = Core_datapath_csr__reg_gpo_protection_1.values[0] != 0xcL;
  val_t T1180;
  { T1180 = Core_datapath_csr__reg_gpo_protection_1.values[0];}
  T1180 = T1180 & 0x7L;
  val_t T1181;
  T1181 = T1180 == Core_datapath_csr__io_rw_thread.values[0];
  val_t T1182;
  T1182 = Core_datapath_csr__reg_gpo_protection_1.values[0] == 0x8L;
  val_t T1183;
  { T1183 = T1182 | T1181;}
  val_t T1184;
  { T1184 = T1183 & T1179;}
  val_t T1185;
  T1185 = Core_datapath_csr__io_rw_addr.values[0] == 0xcc5L;
  val_t T1186;
  { T1186 = Core_datapath_csr__write.values[0] & T1185;}
  val_t T1187;
  { T1187 = T1186 & T1184;}
  val_t T1188;
  { T1188 = TERNARY_1(T1187, T1178, Core_datapath_csr__reg_gpos_1.values[0]);}
  { T1189.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1188);}
  val_t T1190;
  { T1190 = Core_datapath_csr__data_in.values[0];}
  T1190 = T1190 & 0xfL;
  val_t T1191;
  { T1191 = TERNARY_1(T1145, T1190, Core_datapath_csr__reg_gpo_protection_0.values[0]);}
  { T1192.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1191);}
  val_t T1193;
  { T1193 = Core_datapath_csr__data_in.values[0];}
  T1193 = T1193 & 0x3L;
  val_t T1194;
  T1194 = Core_datapath_csr__reg_gpo_protection_0.values[0] != 0xcL;
  val_t T1195;
  { T1195 = Core_datapath_csr__reg_gpo_protection_0.values[0];}
  T1195 = T1195 & 0x7L;
  val_t T1196;
  T1196 = T1195 == Core_datapath_csr__io_rw_thread.values[0];
  val_t T1197;
  T1197 = Core_datapath_csr__reg_gpo_protection_0.values[0] == 0x8L;
  val_t T1198;
  { T1198 = T1197 | T1196;}
  val_t T1199;
  { T1199 = T1198 & T1194;}
  val_t T1200;
  T1200 = Core_datapath_csr__io_rw_addr.values[0] == 0xcc4L;
  val_t T1201;
  { T1201 = Core_datapath_csr__write.values[0] & T1200;}
  val_t T1202;
  { T1202 = T1201 & T1199;}
  val_t T1203;
  { T1203 = TERNARY_1(T1202, T1193, Core_datapath_csr__reg_gpos_0.values[0]);}
  { T1204.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1203);}
  { Core_datapath__io_gpio_in_3.values[0] = Core__io_gpio_in_3.values[0];}
  { Core_datapath_csr__io_gpio_in_3.values[0] = Core_datapath__io_gpio_in_3.values[0];}
  { Core_datapath__io_gpio_in_2.values[0] = Core__io_gpio_in_2.values[0];}
  { Core_datapath_csr__io_gpio_in_2.values[0] = Core_datapath__io_gpio_in_2.values[0];}
  { Core_datapath__io_gpio_in_1.values[0] = Core__io_gpio_in_1.values[0];}
  { Core_datapath_csr__io_gpio_in_1.values[0] = Core_datapath__io_gpio_in_1.values[0];}
  { Core_datapath__io_gpio_in_0.values[0] = Core__io_gpio_in_0.values[0];}
  { Core_datapath_csr__io_gpio_in_0.values[0] = Core_datapath__io_gpio_in_0.values[0];}
  val_t T1205;
  { T1205 = Core_datapath_csr__reg_to_host.values[0] | 0x0L << 32;}
  val_t T1206;
  T1206 = Core_datapath_csr__io_rw_addr.values[0] == 0x51eL;
  val_t T1207;
  { T1207 = Core_datapath_csr__write.values[0] & T1206;}
  val_t T1208;
  { T1208 = TERNARY_1(T1207, Core_datapath_csr__data_in.values[0], T1205);}
  val_t T1209;
  { T1209 = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1208);}
  { T1210.values[0] = T1209;}
  T1210.values[0] = T1210.values[0] & 0xffffffffL;
  val_t T1211;
  T1211 = 0x1L << Core_datapath_csr__io_rw_thread.values[0];
  T1211 = T1211 & 0xffL;
  val_t T1212;
  T1212 = (T1211 >> 7) & 1;
  val_t T1213;
  T1213 = Core_datapath_csr__io_rw_addr.values[0] == 0x500L;
  val_t T1214;
  { T1214 = Core_datapath_csr__write.values[0] & T1213;}
  val_t T1215;
  { T1215 = T1214 & T1212;}
  { T1216.values[0] = TERNARY_1(T1215, Core_datapath_csr__data_in.values[0], Core_datapath_csr__reg_sup0_7.values[0]);}
  val_t T1217;
  T1217 = (T1211 >> 6) & 1;
  val_t T1218;
  { T1218 = T1214 & T1217;}
  { T1219.values[0] = TERNARY_1(T1218, Core_datapath_csr__data_in.values[0], Core_datapath_csr__reg_sup0_6.values[0]);}
  val_t T1220;
  T1220 = (T1211 >> 5) & 1;
  val_t T1221;
  { T1221 = T1214 & T1220;}
  { T1222.values[0] = TERNARY_1(T1221, Core_datapath_csr__data_in.values[0], Core_datapath_csr__reg_sup0_5.values[0]);}
  val_t T1223;
  T1223 = (T1211 >> 4) & 1;
  val_t T1224;
  { T1224 = T1214 & T1223;}
  { T1225.values[0] = TERNARY_1(T1224, Core_datapath_csr__data_in.values[0], Core_datapath_csr__reg_sup0_4.values[0]);}
  val_t T1226;
  T1226 = (T1211 >> 3) & 1;
  val_t T1227;
  { T1227 = T1214 & T1226;}
  { T1228.values[0] = TERNARY_1(T1227, Core_datapath_csr__data_in.values[0], Core_datapath_csr__reg_sup0_3.values[0]);}
  val_t T1229;
  T1229 = (T1211 >> 2) & 1;
  val_t T1230;
  { T1230 = T1214 & T1229;}
  { T1231.values[0] = TERNARY_1(T1230, Core_datapath_csr__data_in.values[0], Core_datapath_csr__reg_sup0_2.values[0]);}
  val_t T1232;
  T1232 = (T1211 >> 1) & 1;
  val_t T1233;
  { T1233 = T1214 & T1232;}
  { T1234.values[0] = TERNARY_1(T1233, Core_datapath_csr__data_in.values[0], Core_datapath_csr__reg_sup0_1.values[0]);}
  val_t T1235;
  T1235 = (T1211 >> 0) & 1;
  val_t T1236;
  { T1236 = T1214 & T1235;}
  { T1237.values[0] = TERNARY_1(T1236, Core_datapath_csr__data_in.values[0], Core_datapath_csr__reg_sup0_0.values[0]);}
  val_t T1238;
  { T1238 = TERNARY(Core_control__io_exe_int_ext.values[0], 0x1eL, 0x0L);}
  val_t T1239;
  { T1239 = TERNARY(Core_control__io_exe_int_expire.values[0], 0x1dL, T1238);}
  { Core_control__exe_any_cause.values[0] = TERNARY(Core_control__io_exe_exc_expire.values[0], 0xdL, T1239);}
  val_t T1240;
  { T1240 = TERNARY(Core_control__io_exe_exc_store_misaligned.values[0], 0x9L, 0x0L);}
  val_t T1241;
  { T1241 = TERNARY(Core_control__io_exe_exc_load_misaligned.values[0], 0x8L, T1240);}
  { Core_control__exe_inst_cause.values[0] = TERNARY(Core_control__io_exe_exc_priv_inst.values[0], 0x3L, T1241);}
  val_t T1242;
  { T1242 = Core_control__exe_inst_cause.values[0] | 0x0L << 4;}
  val_t T1243;
  { T1243 = TERNARY_1(Core_control__exe_inst_exc.values[0], T1242, Core_control__exe_any_cause.values[0]);}
  val_t T1244;
  { T1244 = Core_control__exe_reg_cause.values[0] | 0x0L << 3;}
  val_t T1245;
  { T1245 = TERNARY_1(Core_control__exe_reg_exc.values[0], T1244, T1243);}
  { Core_control__exe_exception_cause.values[0] = T1245;}
  { Core_control__io_exe_cause.values[0] = Core_control__exe_exception_cause.values[0];}
  { Core_datapath__io_control_exe_cause.values[0] = Core_control__io_exe_cause.values[0];}
  { Core_datapath_csr__io_cause.values[0] = Core_datapath__io_control_exe_cause.values[0];}
  val_t T1246;
  T1246 = 0x1L << Core_datapath_csr__io_rw_thread.values[0];
  T1246 = T1246 & 0xffL;
  val_t T1247;
  T1247 = (T1246 >> 7) & 1;
  val_t T1248;
  { T1248 = Core_datapath_csr__io_exception.values[0] & T1247;}
  { T1249.values[0] = TERNARY_1(T1248, Core_datapath_csr__io_cause.values[0], Core_datapath_csr__reg_causes_7.values[0]);}
  val_t T1250;
  T1250 = (T1246 >> 6) & 1;
  val_t T1251;
  { T1251 = Core_datapath_csr__io_exception.values[0] & T1250;}
  { T1252.values[0] = TERNARY_1(T1251, Core_datapath_csr__io_cause.values[0], Core_datapath_csr__reg_causes_6.values[0]);}
  val_t T1253;
  T1253 = (T1246 >> 5) & 1;
  val_t T1254;
  { T1254 = Core_datapath_csr__io_exception.values[0] & T1253;}
  { T1255.values[0] = TERNARY_1(T1254, Core_datapath_csr__io_cause.values[0], Core_datapath_csr__reg_causes_5.values[0]);}
  val_t T1256;
  T1256 = (T1246 >> 4) & 1;
  val_t T1257;
  { T1257 = Core_datapath_csr__io_exception.values[0] & T1256;}
  { T1258.values[0] = TERNARY_1(T1257, Core_datapath_csr__io_cause.values[0], Core_datapath_csr__reg_causes_4.values[0]);}
  val_t T1259;
  T1259 = (T1246 >> 3) & 1;
  val_t T1260;
  { T1260 = Core_datapath_csr__io_exception.values[0] & T1259;}
  { T1261.values[0] = TERNARY_1(T1260, Core_datapath_csr__io_cause.values[0], Core_datapath_csr__reg_causes_3.values[0]);}
  val_t T1262;
  T1262 = (T1246 >> 2) & 1;
  val_t T1263;
  { T1263 = Core_datapath_csr__io_exception.values[0] & T1262;}
  { T1264.values[0] = TERNARY_1(T1263, Core_datapath_csr__io_cause.values[0], Core_datapath_csr__reg_causes_2.values[0]);}
  val_t T1265;
  T1265 = (T1246 >> 1) & 1;
  val_t T1266;
  { T1266 = Core_datapath_csr__io_exception.values[0] & T1265;}
  { T1267.values[0] = TERNARY_1(T1266, Core_datapath_csr__io_cause.values[0], Core_datapath_csr__reg_causes_1.values[0]);}
  val_t T1268;
  T1268 = (T1246 >> 0) & 1;
  val_t T1269;
  { T1269 = Core_datapath_csr__io_exception.values[0] & T1268;}
  { T1270.values[0] = TERNARY_1(T1269, Core_datapath_csr__io_cause.values[0], Core_datapath_csr__reg_causes_0.values[0]);}
  { Core_datapath_csr__io_epc.values[0] = Core_datapath__exe_reg_pc.values[0];}
  val_t T1271;
  T1271 = 0x1L << Core_datapath_csr__io_rw_thread.values[0];
  T1271 = T1271 & 0xffL;
  val_t T1272;
  T1272 = (T1271 >> 7) & 1;
  val_t T1273;
  { T1273 = Core_datapath_csr__io_exception.values[0] & T1272;}
  { T1274.values[0] = TERNARY_1(T1273, Core_datapath_csr__io_epc.values[0], Core_datapath_csr__reg_epcs_7.values[0]);}
  val_t T1275;
  T1275 = (T1271 >> 6) & 1;
  val_t T1276;
  { T1276 = Core_datapath_csr__io_exception.values[0] & T1275;}
  { T1277.values[0] = TERNARY_1(T1276, Core_datapath_csr__io_epc.values[0], Core_datapath_csr__reg_epcs_6.values[0]);}
  val_t T1278;
  T1278 = (T1271 >> 5) & 1;
  val_t T1279;
  { T1279 = Core_datapath_csr__io_exception.values[0] & T1278;}
  { T1280.values[0] = TERNARY_1(T1279, Core_datapath_csr__io_epc.values[0], Core_datapath_csr__reg_epcs_5.values[0]);}
  val_t T1281;
  T1281 = (T1271 >> 4) & 1;
  val_t T1282;
  { T1282 = Core_datapath_csr__io_exception.values[0] & T1281;}
  { T1283.values[0] = TERNARY_1(T1282, Core_datapath_csr__io_epc.values[0], Core_datapath_csr__reg_epcs_4.values[0]);}
  val_t T1284;
  T1284 = (T1271 >> 3) & 1;
  val_t T1285;
  { T1285 = Core_datapath_csr__io_exception.values[0] & T1284;}
  { T1286.values[0] = TERNARY_1(T1285, Core_datapath_csr__io_epc.values[0], Core_datapath_csr__reg_epcs_3.values[0]);}
  val_t T1287;
  T1287 = (T1271 >> 2) & 1;
  val_t T1288;
  { T1288 = Core_datapath_csr__io_exception.values[0] & T1287;}
  { T1289.values[0] = TERNARY_1(T1288, Core_datapath_csr__io_epc.values[0], Core_datapath_csr__reg_epcs_2.values[0]);}
  val_t T1290;
  T1290 = (T1271 >> 1) & 1;
  val_t T1291;
  { T1291 = Core_datapath_csr__io_exception.values[0] & T1290;}
  { T1292.values[0] = TERNARY_1(T1291, Core_datapath_csr__io_epc.values[0], Core_datapath_csr__reg_epcs_1.values[0]);}
  val_t T1293;
  T1293 = (T1271 >> 0) & 1;
  val_t T1294;
  { T1294 = Core_datapath_csr__io_exception.values[0] & T1293;}
  { T1295.values[0] = TERNARY_1(T1294, Core_datapath_csr__io_epc.values[0], Core_datapath_csr__reg_epcs_0.values[0]);}
  val_t T1296;
  T1296 = 0x1L << Core_datapath_csr__io_rw_thread.values[0];
  T1296 = T1296 & 0xffL;
  val_t T1297;
  T1297 = (T1296 >> 7) & 1;
  val_t T1298;
  T1298 = Core_datapath_csr__io_rw_addr.values[0] == 0x508L;
  val_t T1299;
  { T1299 = Core_datapath_csr__write.values[0] & T1298;}
  val_t T1300;
  { T1300 = T1299 & T1297;}
  { T1301.values[0] = TERNARY_1(T1300, Core_datapath_csr__data_in.values[0], Core_datapath_csr__reg_evecs_7.values[0]);}
  val_t T1302;
  T1302 = (T1296 >> 6) & 1;
  val_t T1303;
  { T1303 = T1299 & T1302;}
  { T1304.values[0] = TERNARY_1(T1303, Core_datapath_csr__data_in.values[0], Core_datapath_csr__reg_evecs_6.values[0]);}
  val_t T1305;
  T1305 = (T1296 >> 5) & 1;
  val_t T1306;
  { T1306 = T1299 & T1305;}
  { T1307.values[0] = TERNARY_1(T1306, Core_datapath_csr__data_in.values[0], Core_datapath_csr__reg_evecs_5.values[0]);}
  val_t T1308;
  T1308 = (T1296 >> 4) & 1;
  val_t T1309;
  { T1309 = T1299 & T1308;}
  { T1310.values[0] = TERNARY_1(T1309, Core_datapath_csr__data_in.values[0], Core_datapath_csr__reg_evecs_4.values[0]);}
  val_t T1311;
  T1311 = (T1296 >> 3) & 1;
  val_t T1312;
  { T1312 = T1299 & T1311;}
  { T1313.values[0] = TERNARY_1(T1312, Core_datapath_csr__data_in.values[0], Core_datapath_csr__reg_evecs_3.values[0]);}
  val_t T1314;
  T1314 = (T1296 >> 2) & 1;
  val_t T1315;
  { T1315 = T1299 & T1314;}
  { T1316.values[0] = TERNARY_1(T1315, Core_datapath_csr__data_in.values[0], Core_datapath_csr__reg_evecs_2.values[0]);}
  val_t T1317;
  T1317 = (T1296 >> 1) & 1;
  val_t T1318;
  { T1318 = T1299 & T1317;}
  { T1319.values[0] = TERNARY_1(T1318, Core_datapath_csr__data_in.values[0], Core_datapath_csr__reg_evecs_1.values[0]);}
  val_t T1320;
  T1320 = (T1296 >> 0) & 1;
  val_t T1321;
  { T1321 = T1299 & T1320;}
  { T1322.values[0] = TERNARY_1(T1321, Core_datapath_csr__data_in.values[0], Core_datapath_csr__reg_evecs_0.values[0]);}
  val_t T1323;
  { T1323 = Core_datapath_csr__data_in.values[0] >> 2;}
  T1323 = T1323 & 0x3L;
  val_t T1324;
  T1324 = Core_datapath_csr__io_rw_addr.values[0] == 0x504L;
  val_t T1325;
  { T1325 = Core_datapath_csr__write.values[0] & T1324;}
  val_t T1326;
  { T1326 = TERNARY_1(T1325, T1323, Core_datapath_csr__reg_tmodes_1.values[0]);}
  val_t T1327;
  T1327 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T1328;
  { T1328 = TERNARY_1(T1327, Core_datapath_csr__reg_tmodes_1.values[0], Core_datapath_csr__reg_tmodes_0.values[0]);}
  val_t T1329;
  T1329 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T1330;
  { T1330 = TERNARY_1(T1329, Core_datapath_csr__reg_tmodes_3.values[0], Core_datapath_csr__reg_tmodes_2.values[0]);}
  val_t T1331;
  T1331 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T1332;
  { T1332 = TERNARY_1(T1331, T1330, T1328);}
  val_t T1333;
  T1333 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T1334;
  { T1334 = TERNARY_1(T1333, Core_datapath_csr__reg_tmodes_5.values[0], Core_datapath_csr__reg_tmodes_4.values[0]);}
  val_t T1335;
  T1335 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T1336;
  { T1336 = TERNARY_1(T1335, Core_datapath_csr__reg_tmodes_7.values[0], Core_datapath_csr__reg_tmodes_6.values[0]);}
  val_t T1337;
  T1337 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T1338;
  { T1338 = TERNARY_1(T1337, T1336, T1334);}
  val_t T1339;
  T1339 = (Core_datapath_csr__io_rw_thread.values[0] >> 2) & 1;
  val_t T1340;
  { T1340 = TERNARY_1(T1339, T1338, T1332);}
  val_t T1341;
  { T1341 = T1340 | 0x1L;}
  val_t T1342;
  T1342 = 0x1L << Core_datapath_csr__io_rw_thread.values[0];
  T1342 = T1342 & 0xffL;
  val_t T1343;
  T1343 = (T1342 >> 1) & 1;
  val_t T1344;
  { T1344 = Core_control__exe_exception.values[0] ^ 0x1L;}
  { Core_control__exe_valid.values[0] = Core_control__exe_reg_valid.values[0] & T1344;}
  { Core_control__exe_sleep.values[0] = Core_control__exe_du.values[0] & Core_control__exe_valid.values[0];}
  { Core_control__io_exe_sleep.values[0] = Core_control__exe_sleep.values[0];}
  { Core_datapath__io_control_exe_sleep.values[0] = Core_control__io_exe_sleep.values[0];}
  { Core_datapath_csr__io_sleep.values[0] = Core_datapath__io_control_exe_sleep.values[0];}
  { Core_datapath_csr__sleep.values[0] = Core_datapath_csr__io_sleep.values[0];}
  val_t T1345;
  { T1345 = Core_datapath_csr__sleep.values[0] & T1343;}
  val_t T1346;
  { T1346 = TERNARY_1(T1345, T1341, T1326);}
  val_t T1347;
  { T1347 = Core_datapath_csr__reg_tmodes_1.values[0] & 0x2L;}
  val_t T1348;
  T1348 = Core_datapath_csr__reg_timer_1.values[0] == 0x1L;
  val_t T1349;
  { T1349 = T1348 & Core_datapath_csr__expired_1.values[0];}
  val_t T1350;
  { T1350 = TERNARY(Core_datapath_csr__io_int_exts_1.values[0], 0x1L, T1349);}
  { Core_datapath_csr__wake_1.values[0] = T1350;}
  val_t T1351;
  { T1351 = TERNARY_1(Core_datapath_csr__wake_1.values[0], T1347, T1346);}
  { T1352.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x1L, T1351);}
  val_t T1353;
  { T1353 = Core_datapath_csr__data_in.values[0] >> 14;}
  T1353 = T1353 & 0x3L;
  val_t T1354;
  { T1354 = TERNARY_1(T1325, T1353, Core_datapath_csr__reg_tmodes_7.values[0]);}
  val_t T1355;
  T1355 = (T1342 >> 7) & 1;
  val_t T1356;
  { T1356 = Core_datapath_csr__sleep.values[0] & T1355;}
  val_t T1357;
  { T1357 = TERNARY_1(T1356, T1341, T1354);}
  val_t T1358;
  { T1358 = Core_datapath_csr__reg_tmodes_7.values[0] & 0x2L;}
  val_t T1359;
  T1359 = Core_datapath_csr__reg_timer_7.values[0] == 0x1L;
  val_t T1360;
  { T1360 = T1359 & Core_datapath_csr__expired_7.values[0];}
  val_t T1361;
  { T1361 = TERNARY(Core_datapath_csr__io_int_exts_7.values[0], 0x1L, T1360);}
  { Core_datapath_csr__wake_7.values[0] = T1361;}
  val_t T1362;
  { T1362 = TERNARY_1(Core_datapath_csr__wake_7.values[0], T1358, T1357);}
  { T1363.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x1L, T1362);}
  val_t T1364;
  { T1364 = Core_datapath_csr__data_in.values[0] >> 12;}
  T1364 = T1364 & 0x3L;
  val_t T1365;
  { T1365 = TERNARY_1(T1325, T1364, Core_datapath_csr__reg_tmodes_6.values[0]);}
  val_t T1366;
  T1366 = (T1342 >> 6) & 1;
  val_t T1367;
  { T1367 = Core_datapath_csr__sleep.values[0] & T1366;}
  val_t T1368;
  { T1368 = TERNARY_1(T1367, T1341, T1365);}
  val_t T1369;
  { T1369 = Core_datapath_csr__reg_tmodes_6.values[0] & 0x2L;}
  val_t T1370;
  T1370 = Core_datapath_csr__reg_timer_6.values[0] == 0x1L;
  val_t T1371;
  { T1371 = T1370 & Core_datapath_csr__expired_6.values[0];}
  val_t T1372;
  { T1372 = TERNARY(Core_datapath_csr__io_int_exts_6.values[0], 0x1L, T1371);}
  { Core_datapath_csr__wake_6.values[0] = T1372;}
  val_t T1373;
  { T1373 = TERNARY_1(Core_datapath_csr__wake_6.values[0], T1369, T1368);}
  { T1374.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x1L, T1373);}
  val_t T1375;
  { T1375 = Core_datapath_csr__data_in.values[0] >> 10;}
  T1375 = T1375 & 0x3L;
  val_t T1376;
  { T1376 = TERNARY_1(T1325, T1375, Core_datapath_csr__reg_tmodes_5.values[0]);}
  val_t T1377;
  T1377 = (T1342 >> 5) & 1;
  val_t T1378;
  { T1378 = Core_datapath_csr__sleep.values[0] & T1377;}
  val_t T1379;
  { T1379 = TERNARY_1(T1378, T1341, T1376);}
  val_t T1380;
  { T1380 = Core_datapath_csr__reg_tmodes_5.values[0] & 0x2L;}
  val_t T1381;
  T1381 = Core_datapath_csr__reg_timer_5.values[0] == 0x1L;
  val_t T1382;
  { T1382 = T1381 & Core_datapath_csr__expired_5.values[0];}
  val_t T1383;
  { T1383 = TERNARY(Core_datapath_csr__io_int_exts_5.values[0], 0x1L, T1382);}
  { Core_datapath_csr__wake_5.values[0] = T1383;}
  val_t T1384;
  { T1384 = TERNARY_1(Core_datapath_csr__wake_5.values[0], T1380, T1379);}
  { T1385.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x1L, T1384);}
  val_t T1386;
  { T1386 = Core_datapath_csr__data_in.values[0] >> 8;}
  T1386 = T1386 & 0x3L;
  val_t T1387;
  { T1387 = TERNARY_1(T1325, T1386, Core_datapath_csr__reg_tmodes_4.values[0]);}
  val_t T1388;
  T1388 = (T1342 >> 4) & 1;
  val_t T1389;
  { T1389 = Core_datapath_csr__sleep.values[0] & T1388;}
  val_t T1390;
  { T1390 = TERNARY_1(T1389, T1341, T1387);}
  val_t T1391;
  { T1391 = Core_datapath_csr__reg_tmodes_4.values[0] & 0x2L;}
  val_t T1392;
  T1392 = Core_datapath_csr__reg_timer_4.values[0] == 0x1L;
  val_t T1393;
  { T1393 = T1392 & Core_datapath_csr__expired_4.values[0];}
  val_t T1394;
  { T1394 = TERNARY(Core_datapath_csr__io_int_exts_4.values[0], 0x1L, T1393);}
  { Core_datapath_csr__wake_4.values[0] = T1394;}
  val_t T1395;
  { T1395 = TERNARY_1(Core_datapath_csr__wake_4.values[0], T1391, T1390);}
  { T1396.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x1L, T1395);}
  val_t T1397;
  { T1397 = Core_datapath_csr__data_in.values[0] >> 6;}
  T1397 = T1397 & 0x3L;
  val_t T1398;
  { T1398 = TERNARY_1(T1325, T1397, Core_datapath_csr__reg_tmodes_3.values[0]);}
  val_t T1399;
  T1399 = (T1342 >> 3) & 1;
  val_t T1400;
  { T1400 = Core_datapath_csr__sleep.values[0] & T1399;}
  val_t T1401;
  { T1401 = TERNARY_1(T1400, T1341, T1398);}
  val_t T1402;
  { T1402 = Core_datapath_csr__reg_tmodes_3.values[0] & 0x2L;}
  val_t T1403;
  T1403 = Core_datapath_csr__reg_timer_3.values[0] == 0x1L;
  val_t T1404;
  { T1404 = T1403 & Core_datapath_csr__expired_3.values[0];}
  val_t T1405;
  { T1405 = TERNARY(Core_datapath_csr__io_int_exts_3.values[0], 0x1L, T1404);}
  { Core_datapath_csr__wake_3.values[0] = T1405;}
  val_t T1406;
  { T1406 = TERNARY_1(Core_datapath_csr__wake_3.values[0], T1402, T1401);}
  { T1407.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x1L, T1406);}
  val_t T1408;
  T1408 = 0x1L << Core_datapath_csr__io_rw_thread.values[0];
  T1408 = T1408 & 0xffL;
  val_t T1409;
  T1409 = (T1408 >> 7) & 1;
  val_t T1410;
  T1410 = Core_datapath_csr__io_rw_addr.values[0] == 0x507L;
  val_t T1411;
  { T1411 = Core_datapath_csr__write.values[0] & T1410;}
  val_t T1412;
  { T1412 = T1411 & T1409;}
  val_t T1413;
  { T1413 = TERNARY(T1412, 0x0L, Core_datapath_csr__reg_timer_7.values[0]);}
  val_t T1414;
  { T1414 = Core_datapath_csr__io_sleep.values[0] & T1409;}
  val_t T1415;
  { T1415 = TERNARY(T1414, 0x1L, T1413);}
  val_t T1416;
  { T1416 = TERNARY(T1360, 0x0L, T1415);}
  val_t T1417;
  { T1417 = Core_control__exe_valid.values[0] & Core_control__R231.values[0];}
  { Core_control__exe_ee.values[0] = T1417;}
  { Core_control__io_exe_ee.values[0] = Core_control__exe_ee.values[0];}
  { Core_datapath__io_control_exe_ee.values[0] = Core_control__io_exe_ee.values[0];}
  { Core_datapath_csr__io_ee.values[0] = Core_datapath__io_control_exe_ee.values[0];}
  val_t T1418;
  { T1418 = Core_datapath_csr__io_ee.values[0] & T1409;}
  val_t T1419;
  { T1419 = TERNARY(T1418, 0x3L, T1416);}
  val_t T1420;
  { T1420 = T160 & T1409;}
  val_t T1421;
  { T1421 = TERNARY(T1420, 0x0L, T1419);}
  val_t T1422;
  { T1422 = Core_control__exe_valid.values[0] & Core_control__R238.values[0];}
  { Core_control__exe_ie.values[0] = T1422;}
  { Core_control__io_exe_ie.values[0] = Core_control__exe_ie.values[0];}
  { Core_datapath__io_control_exe_ie.values[0] = Core_control__io_exe_ie.values[0];}
  { Core_datapath_csr__io_ie.values[0] = Core_datapath__io_control_exe_ie.values[0];}
  val_t T1423;
  { T1423 = Core_datapath_csr__io_ie.values[0] & T1409;}
  val_t T1424;
  { T1424 = TERNARY(T1423, 0x2L, T1421);}
  val_t T1425;
  { T1425 = T141 & T1409;}
  val_t T1426;
  { T1426 = TERNARY(T1425, 0x0L, T1424);}
  { T1427.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1426);}
  val_t T1428;
  T1428 = (T1408 >> 6) & 1;
  val_t T1429;
  { T1429 = T1411 & T1428;}
  val_t T1430;
  { T1430 = TERNARY(T1429, 0x0L, Core_datapath_csr__reg_timer_6.values[0]);}
  val_t T1431;
  { T1431 = Core_datapath_csr__io_sleep.values[0] & T1428;}
  val_t T1432;
  { T1432 = TERNARY(T1431, 0x1L, T1430);}
  val_t T1433;
  { T1433 = TERNARY(T1371, 0x0L, T1432);}
  val_t T1434;
  { T1434 = Core_datapath_csr__io_ee.values[0] & T1428;}
  val_t T1435;
  { T1435 = TERNARY(T1434, 0x3L, T1433);}
  val_t T1436;
  { T1436 = T160 & T1428;}
  val_t T1437;
  { T1437 = TERNARY(T1436, 0x0L, T1435);}
  val_t T1438;
  { T1438 = Core_datapath_csr__io_ie.values[0] & T1428;}
  val_t T1439;
  { T1439 = TERNARY(T1438, 0x2L, T1437);}
  val_t T1440;
  { T1440 = T141 & T1428;}
  val_t T1441;
  { T1441 = TERNARY(T1440, 0x0L, T1439);}
  { T1442.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1441);}
  val_t T1443;
  T1443 = (T1408 >> 5) & 1;
  val_t T1444;
  { T1444 = T1411 & T1443;}
  val_t T1445;
  { T1445 = TERNARY(T1444, 0x0L, Core_datapath_csr__reg_timer_5.values[0]);}
  val_t T1446;
  { T1446 = Core_datapath_csr__io_sleep.values[0] & T1443;}
  val_t T1447;
  { T1447 = TERNARY(T1446, 0x1L, T1445);}
  val_t T1448;
  { T1448 = TERNARY(T1382, 0x0L, T1447);}
  val_t T1449;
  { T1449 = Core_datapath_csr__io_ee.values[0] & T1443;}
  val_t T1450;
  { T1450 = TERNARY(T1449, 0x3L, T1448);}
  val_t T1451;
  { T1451 = T160 & T1443;}
  val_t T1452;
  { T1452 = TERNARY(T1451, 0x0L, T1450);}
  val_t T1453;
  { T1453 = Core_datapath_csr__io_ie.values[0] & T1443;}
  val_t T1454;
  { T1454 = TERNARY(T1453, 0x2L, T1452);}
  val_t T1455;
  { T1455 = T141 & T1443;}
  val_t T1456;
  { T1456 = TERNARY(T1455, 0x0L, T1454);}
  { T1457.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1456);}
  val_t T1458;
  T1458 = (T1408 >> 4) & 1;
  val_t T1459;
  { T1459 = T1411 & T1458;}
  val_t T1460;
  { T1460 = TERNARY(T1459, 0x0L, Core_datapath_csr__reg_timer_4.values[0]);}
  val_t T1461;
  { T1461 = Core_datapath_csr__io_sleep.values[0] & T1458;}
  val_t T1462;
  { T1462 = TERNARY(T1461, 0x1L, T1460);}
  val_t T1463;
  { T1463 = TERNARY(T1393, 0x0L, T1462);}
  val_t T1464;
  { T1464 = Core_datapath_csr__io_ee.values[0] & T1458;}
  val_t T1465;
  { T1465 = TERNARY(T1464, 0x3L, T1463);}
  val_t T1466;
  { T1466 = T160 & T1458;}
  val_t T1467;
  { T1467 = TERNARY(T1466, 0x0L, T1465);}
  val_t T1468;
  { T1468 = Core_datapath_csr__io_ie.values[0] & T1458;}
  val_t T1469;
  { T1469 = TERNARY(T1468, 0x2L, T1467);}
  val_t T1470;
  { T1470 = T141 & T1458;}
  val_t T1471;
  { T1471 = TERNARY(T1470, 0x0L, T1469);}
  { T1472.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1471);}
  val_t T1473;
  T1473 = (T1408 >> 3) & 1;
  val_t T1474;
  { T1474 = T1411 & T1473;}
  val_t T1475;
  { T1475 = TERNARY(T1474, 0x0L, Core_datapath_csr__reg_timer_3.values[0]);}
  val_t T1476;
  { T1476 = Core_datapath_csr__io_sleep.values[0] & T1473;}
  val_t T1477;
  { T1477 = TERNARY(T1476, 0x1L, T1475);}
  val_t T1478;
  { T1478 = TERNARY(T1404, 0x0L, T1477);}
  val_t T1479;
  { T1479 = Core_datapath_csr__io_ee.values[0] & T1473;}
  val_t T1480;
  { T1480 = TERNARY(T1479, 0x3L, T1478);}
  val_t T1481;
  { T1481 = T160 & T1473;}
  val_t T1482;
  { T1482 = TERNARY(T1481, 0x0L, T1480);}
  val_t T1483;
  { T1483 = Core_datapath_csr__io_ie.values[0] & T1473;}
  val_t T1484;
  { T1484 = TERNARY(T1483, 0x2L, T1482);}
  val_t T1485;
  { T1485 = T141 & T1473;}
  val_t T1486;
  { T1486 = TERNARY(T1485, 0x0L, T1484);}
  { T1487.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1486);}
  val_t T1488;
  T1488 = (T1408 >> 1) & 1;
  val_t T1489;
  { T1489 = T1411 & T1488;}
  val_t T1490;
  { T1490 = TERNARY(T1489, 0x0L, Core_datapath_csr__reg_timer_1.values[0]);}
  val_t T1491;
  { T1491 = Core_datapath_csr__io_sleep.values[0] & T1488;}
  val_t T1492;
  { T1492 = TERNARY(T1491, 0x1L, T1490);}
  val_t T1493;
  { T1493 = TERNARY(T1349, 0x0L, T1492);}
  val_t T1494;
  { T1494 = Core_datapath_csr__io_ee.values[0] & T1488;}
  val_t T1495;
  { T1495 = TERNARY(T1494, 0x3L, T1493);}
  val_t T1496;
  { T1496 = T160 & T1488;}
  val_t T1497;
  { T1497 = TERNARY(T1496, 0x0L, T1495);}
  val_t T1498;
  { T1498 = Core_datapath_csr__io_ie.values[0] & T1488;}
  val_t T1499;
  { T1499 = TERNARY(T1498, 0x2L, T1497);}
  val_t T1500;
  { T1500 = T141 & T1488;}
  val_t T1501;
  { T1501 = TERNARY(T1500, 0x0L, T1499);}
  { T1502.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1501);}
  val_t T1503;
  T1503 = (T1408 >> 0) & 1;
  val_t T1504;
  { T1504 = T1411 & T1503;}
  val_t T1505;
  { T1505 = TERNARY(T1504, 0x0L, Core_datapath_csr__reg_timer_0.values[0]);}
  val_t T1506;
  { T1506 = Core_datapath_csr__io_sleep.values[0] & T1503;}
  val_t T1507;
  { T1507 = TERNARY(T1506, 0x1L, T1505);}
  val_t T1508;
  T1508 = Core_datapath_csr__reg_timer_0.values[0] == 0x1L;
  val_t T1509;
  { T1509 = T1508 & Core_datapath_csr__expired_0.values[0];}
  val_t T1510;
  { T1510 = TERNARY(T1509, 0x0L, T1507);}
  val_t T1511;
  { T1511 = Core_datapath_csr__io_ee.values[0] & T1503;}
  val_t T1512;
  { T1512 = TERNARY(T1511, 0x3L, T1510);}
  val_t T1513;
  { T1513 = T160 & T1503;}
  val_t T1514;
  { T1514 = TERNARY(T1513, 0x0L, T1512);}
  val_t T1515;
  { T1515 = Core_datapath_csr__io_ie.values[0] & T1503;}
  val_t T1516;
  { T1516 = TERNARY(T1515, 0x2L, T1514);}
  val_t T1517;
  { T1517 = T141 & T1503;}
  val_t T1518;
  { T1518 = TERNARY(T1517, 0x0L, T1516);}
  { T1519.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1518);}
  val_t T1520;
  { T1520 = Core_datapath_csr__data_in.values[0];}
  T1520 = T1520 & 0xffffffffL;
  val_t T1521;
  T1521 = 0x1L << Core_datapath_csr__io_rw_thread.values[0];
  T1521 = T1521 & 0xffL;
  val_t T1522;
  T1522 = (T1521 >> 7) & 1;
  val_t T1523;
  { T1523 = T1411 & T1522;}
  { T1524.values[0] = TERNARY_1(T1523, T1520, Core_datapath_csr__reg_compare_7.values[0]);}
  val_t T1525;
  T1525 = (T1521 >> 6) & 1;
  val_t T1526;
  { T1526 = T1411 & T1525;}
  { T1527.values[0] = TERNARY_1(T1526, T1520, Core_datapath_csr__reg_compare_6.values[0]);}
  val_t T1528;
  T1528 = (T1521 >> 5) & 1;
  val_t T1529;
  { T1529 = T1411 & T1528;}
  { T1530.values[0] = TERNARY_1(T1529, T1520, Core_datapath_csr__reg_compare_5.values[0]);}
  val_t T1531;
  T1531 = (T1521 >> 4) & 1;
  val_t T1532;
  { T1532 = T1411 & T1531;}
  { T1533.values[0] = TERNARY_1(T1532, T1520, Core_datapath_csr__reg_compare_4.values[0]);}
  val_t T1534;
  T1534 = (T1521 >> 3) & 1;
  val_t T1535;
  { T1535 = T1411 & T1534;}
  { T1536.values[0] = TERNARY_1(T1535, T1520, Core_datapath_csr__reg_compare_3.values[0]);}
  val_t T1537;
  T1537 = (T1521 >> 1) & 1;
  val_t T1538;
  { T1538 = T1411 & T1537;}
  { T1539.values[0] = TERNARY_1(T1538, T1520, Core_datapath_csr__reg_compare_1.values[0]);}
  val_t T1540;
  T1540 = (T1521 >> 0) & 1;
  val_t T1541;
  { T1541 = T1411 & T1540;}
  { T1542.values[0] = TERNARY_1(T1541, T1520, Core_datapath_csr__reg_compare_0.values[0]);}
  val_t T1543;
  T1543 = (T1408 >> 2) & 1;
  val_t T1544;
  { T1544 = T1411 & T1543;}
  val_t T1545;
  { T1545 = TERNARY(T1544, 0x0L, Core_datapath_csr__reg_timer_2.values[0]);}
  val_t T1546;
  { T1546 = Core_datapath_csr__io_sleep.values[0] & T1543;}
  val_t T1547;
  { T1547 = TERNARY(T1546, 0x1L, T1545);}
  val_t T1548;
  T1548 = Core_datapath_csr__reg_timer_2.values[0] == 0x1L;
  val_t T1549;
  { T1549 = T1548 & Core_datapath_csr__expired_2.values[0];}
  val_t T1550;
  { T1550 = TERNARY(T1549, 0x0L, T1547);}
  val_t T1551;
  { T1551 = Core_datapath_csr__io_ee.values[0] & T1543;}
  val_t T1552;
  { T1552 = TERNARY(T1551, 0x3L, T1550);}
  val_t T1553;
  { T1553 = T160 & T1543;}
  val_t T1554;
  { T1554 = TERNARY(T1553, 0x0L, T1552);}
  val_t T1555;
  { T1555 = Core_datapath_csr__io_ie.values[0] & T1543;}
  val_t T1556;
  { T1556 = TERNARY(T1555, 0x2L, T1554);}
  val_t T1557;
  { T1557 = T141 & T1543;}
  val_t T1558;
  { T1558 = TERNARY(T1557, 0x0L, T1556);}
  { T1559.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1558);}
  val_t T1560;
  { T1560 = Core_datapath_csr__reg_time.values[0]+0xaL;}
  { T1561.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1560);}
  val_t T1562;
  T1562 = (T1521 >> 2) & 1;
  val_t T1563;
  { T1563 = T1411 & T1562;}
  { T1564.values[0] = TERNARY_1(T1563, T1520, Core_datapath_csr__reg_compare_2.values[0]);}
  val_t T1565;
  { T1565 = Core_datapath_csr__data_in.values[0] >> 4;}
  T1565 = T1565 & 0x3L;
  val_t T1566;
  { T1566 = TERNARY_1(T1325, T1565, Core_datapath_csr__reg_tmodes_2.values[0]);}
  val_t T1567;
  T1567 = (T1342 >> 2) & 1;
  val_t T1568;
  { T1568 = Core_datapath_csr__sleep.values[0] & T1567;}
  val_t T1569;
  { T1569 = TERNARY_1(T1568, T1341, T1566);}
  val_t T1570;
  { T1570 = Core_datapath_csr__reg_tmodes_2.values[0] & 0x2L;}
  val_t T1571;
  { T1571 = TERNARY(Core_datapath_csr__io_int_exts_2.values[0], 0x1L, T1549);}
  { Core_datapath_csr__wake_2.values[0] = T1571;}
  val_t T1572;
  { T1572 = TERNARY_1(Core_datapath_csr__wake_2.values[0], T1570, T1569);}
  { T1573.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x1L, T1572);}
  val_t T1574;
  { T1574 = Core_datapath_csr__data_in.values[0];}
  T1574 = T1574 & 0x3L;
  val_t T1575;
  { T1575 = TERNARY_1(T1325, T1574, Core_datapath_csr__reg_tmodes_0.values[0]);}
  val_t T1576;
  T1576 = (T1342 >> 0) & 1;
  val_t T1577;
  { T1577 = Core_datapath_csr__sleep.values[0] & T1576;}
  val_t T1578;
  { T1578 = TERNARY_1(T1577, T1341, T1575);}
  val_t T1579;
  { T1579 = Core_datapath_csr__reg_tmodes_0.values[0] & 0x2L;}
  val_t T1580;
  { T1580 = TERNARY(Core_datapath_csr__io_int_exts_0.values[0], 0x1L, T1509);}
  { Core_datapath_csr__wake_0.values[0] = T1580;}
  val_t T1581;
  { T1581 = TERNARY_1(Core_datapath_csr__wake_0.values[0], T1579, T1578);}
  { T1582.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1581);}
  val_t T1583;
  { T1583 = Core_datapath_csr__data_in.values[0] >> 28;}
  T1583 = T1583 & 0xfL;
  val_t T1584;
  T1584 = Core_datapath_csr__io_rw_addr.values[0] == 0x503L;
  val_t T1585;
  { T1585 = Core_datapath_csr__write.values[0] & T1584;}
  val_t T1586;
  { T1586 = TERNARY_1(T1585, T1583, Core_datapath_csr__reg_slots_7.values[0]);}
  { T1587.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1586);}
  val_t T1588;
  { T1588 = Core_datapath_csr__data_in.values[0] >> 24;}
  T1588 = T1588 & 0xfL;
  val_t T1589;
  { T1589 = TERNARY_1(T1585, T1588, Core_datapath_csr__reg_slots_6.values[0]);}
  { T1590.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xfL, T1589);}
  val_t T1591;
  { T1591 = Core_datapath_csr__data_in.values[0] >> 20;}
  T1591 = T1591 & 0xfL;
  val_t T1592;
  { T1592 = TERNARY_1(T1585, T1591, Core_datapath_csr__reg_slots_5.values[0]);}
  { T1593.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xfL, T1592);}
  val_t T1594;
  { T1594 = Core_datapath_csr__data_in.values[0] >> 16;}
  T1594 = T1594 & 0xfL;
  val_t T1595;
  { T1595 = TERNARY_1(T1585, T1594, Core_datapath_csr__reg_slots_4.values[0]);}
  { T1596.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xfL, T1595);}
  val_t T1597;
  { T1597 = Core_datapath_csr__data_in.values[0] >> 12;}
  T1597 = T1597 & 0xfL;
  val_t T1598;
  { T1598 = TERNARY_1(T1585, T1597, Core_datapath_csr__reg_slots_3.values[0]);}
  { T1599.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xfL, T1598);}
  val_t T1600;
  { T1600 = Core_datapath_csr__data_in.values[0] >> 8;}
  T1600 = T1600 & 0xfL;
  val_t T1601;
  { T1601 = TERNARY_1(T1585, T1600, Core_datapath_csr__reg_slots_2.values[0]);}
  { T1602.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xfL, T1601);}
  val_t T1603;
  { T1603 = Core_datapath_csr__data_in.values[0] >> 4;}
  T1603 = T1603 & 0xfL;
  val_t T1604;
  { T1604 = TERNARY_1(T1585, T1603, Core_datapath_csr__reg_slots_1.values[0]);}
  { T1605.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xfL, T1604);}
  val_t T1606;
  { T1606 = Core_datapath_csr__data_in.values[0];}
  T1606 = T1606 & 0xfL;
  val_t T1607;
  { T1607 = TERNARY_1(T1585, T1606, Core_datapath_csr__reg_slots_0.values[0]);}
  { T1608.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xfL, T1607);}
  val_t T1609;
  T1609 = (T813 >> 0) & 1;
  val_t T1610;
  { T1610 = T819 & T1609;}
  val_t T1611;
  { T1611 = TERNARY_1(T1610, T812, Core_datapath_csr__reg_msip_0.values[0]);}
  val_t T1612;
  { T1612 = Core_datapath_csr__io_int_exts_0.values[0] & T1609;}
  val_t T1613;
  { T1613 = TERNARY(T1612, 0x1L, T1611);}
  val_t T1614;
  { T1614 = Core_datapath_csr__io_int_exts_1.values[0] & T1609;}
  val_t T1615;
  { T1615 = TERNARY(T1614, 0x1L, T1613);}
  val_t T1616;
  { T1616 = Core_datapath_csr__io_int_exts_2.values[0] & T1609;}
  val_t T1617;
  { T1617 = TERNARY(T1616, 0x1L, T1615);}
  val_t T1618;
  { T1618 = Core_datapath_csr__io_int_exts_3.values[0] & T1609;}
  val_t T1619;
  { T1619 = TERNARY(T1618, 0x1L, T1617);}
  val_t T1620;
  { T1620 = Core_datapath_csr__io_int_exts_4.values[0] & T1609;}
  val_t T1621;
  { T1621 = TERNARY(T1620, 0x1L, T1619);}
  val_t T1622;
  { T1622 = Core_datapath_csr__io_int_exts_5.values[0] & T1609;}
  val_t T1623;
  { T1623 = TERNARY(T1622, 0x1L, T1621);}
  val_t T1624;
  { T1624 = Core_datapath_csr__io_int_exts_6.values[0] & T1609;}
  val_t T1625;
  { T1625 = TERNARY(T1624, 0x1L, T1623);}
  val_t T1626;
  { T1626 = Core_datapath_csr__io_int_exts_7.values[0] & T1609;}
  val_t T1627;
  { T1627 = TERNARY(T1626, 0x1L, T1625);}
  { T1628.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1627);}
  { val_t __r = this->__rand_val(); Core_datapath_loadstore__io_imem_r_addr.values[0] = __r;}
  Core_datapath_loadstore__io_imem_r_addr.values[0] = Core_datapath_loadstore__io_imem_r_addr.values[0] & 0xfffL;
  { val_t __r = this->__rand_val(); Core_datapath_loadstore__io_imem_r_enable.values[0] = __r;}
  Core_datapath_loadstore__io_imem_r_enable.values[0] = Core_datapath_loadstore__io_imem_r_enable.values[0] & 0x1L;
  { T1629.values[0] = Core_datapath_loadstore__io_addr.values[0];}
  T1629.values[0] = T1629.values[0] & 0x3L;
  { Core_datapath_Multiplier__io_op2.values[0] = Core_datapath__exe_reg_op2.values[0];}
  val_t T1630;
  T1630 = (Core_datapath_Multiplier__io_op2.values[0] >> 31) & 1;
  val_t T1631;
  { T1631 = Core_datapath_Multiplier__io_op2.values[0] | T1630 << 32;}
  val_t T1632;
  { T1632 = Core_datapath_Multiplier__io_op2.values[0] | 0x0L << 32;}
  { Core_control__io_exe_mul_type.values[0] = Core_control__exe_reg_mul_type.values[0];}
  { Core_datapath__io_control_exe_mul_type.values[0] = Core_control__io_exe_mul_type.values[0];}
  val_t T1633;
  { T1633 = Core_datapath__io_control_exe_mul_type.values[0] | 0x0L << 2;}
  { Core_datapath_Multiplier__io_func.values[0] = T1633;}
  val_t T1634;
  T1634 = Core_datapath_Multiplier__io_func.values[0] == 0x3L;
  val_t T1635;
  T1635 = Core_datapath_Multiplier__io_func.values[0] == 0x2L;
  val_t T1636;
  { T1636 = T1635 | T1634;}
  { Core_datapath_Multiplier__op2.values[0] = TERNARY_1(T1636, T1632, T1631);}
  val_t T1637;
  { T1637 = 0x0L-Core_datapath_Multiplier__op2.values[0];}
  T1637 = T1637 & 0x1ffffffffL;
  val_t T1638;
  T1638 = (Core_datapath_Multiplier__op2.values[0] >> 32) & 1;
  val_t T1639;
  { T1639 = TERNARY_1(T1638, T1637, Core_datapath_Multiplier__op2.values[0]);}
  { Core_datapath_Multiplier__io_op1.values[0] = Core_datapath__exe_reg_op1.values[0];}
  val_t T1640;
  T1640 = (Core_datapath_Multiplier__io_op1.values[0] >> 31) & 1;
  val_t T1641;
  { T1641 = Core_datapath_Multiplier__io_op1.values[0] | T1640 << 32;}
  val_t T1642;
  { T1642 = Core_datapath_Multiplier__io_op1.values[0] | 0x0L << 32;}
  val_t T1643;
  T1643 = Core_datapath_Multiplier__io_func.values[0] == 0x3L;
  { Core_datapath_Multiplier__op1.values[0] = TERNARY_1(T1643, T1642, T1641);}
  val_t T1644;
  { T1644 = 0x0L-Core_datapath_Multiplier__op1.values[0];}
  T1644 = T1644 & 0x1ffffffffL;
  val_t T1645;
  T1645 = (Core_datapath_Multiplier__op1.values[0] >> 32) & 1;
  val_t T1646;
  { T1646 = TERNARY_1(T1645, T1644, Core_datapath_Multiplier__op1.values[0]);}
  val_t T1647[2];
  *reinterpret_cast<dat_t<66>*>(&T1647) = *reinterpret_cast<dat_t<33>*>(&T1646) * *reinterpret_cast<dat_t<33>*>(&T1639);
  val_t T1648[] = {0x0L, 0x0L};
  val_t T1649[2];
  { T1649[0] = 0x0L-T1647[0]; val_t __c = 0x0L-T1647[0] > 0x0L; T1649[1] = 0x0L-T1647[1]-__c;}
  T1649[1] = T1649[1] & 0x3L;
  val_t T1650;
  { T1650 = T1645 ^ T1638;}
  { Core_datapath_Multiplier__mul_result.values[0] = TERNARY_1(T1650, T1649[0], T1647[0]); Core_datapath_Multiplier__mul_result.values[1] = TERNARY_1(T1650, T1649[1], T1647[1]);}
  val_t T1651;
  { T1651 = Core_datapath_Multiplier__mul_result.values[0] >> 32 | Core_datapath_Multiplier__mul_result.values[1] << 32;}
  T1651 = T1651 & 0xffffffffL;
  val_t T1652;
  { T1652 = Core_datapath_Multiplier__mul_result.values[0];}
  T1652 = T1652 & 0xffffffffL;
  val_t T1653;
  T1653 = Core_datapath_Multiplier__io_func.values[0] == 0x0L;
  { Core_datapath_Multiplier__result.values[0] = TERNARY_1(T1653, T1652, T1651);}
  { Core_datapath_regfile__io_rs1_thread.values[0] = Core_datapath__if_reg_tid.values[0];}
  { Core_imem__io_core_r_data_out.values[0] = Core_imem__dout_r.values[0];}
  { Core_datapath__io_imem_r_data_out.values[0] = Core_imem__io_core_r_data_out.values[0];}
  val_t T1654;
  { T1654 = Core_datapath__io_imem_r_data_out.values[0] >> 15;}
  T1654 = T1654 & 0x1fL;
  { Core_datapath_regfile__io_rs1_addr.values[0] = T1654;}
  val_t T1655;
  { T1655 = Core_datapath_regfile__io_rs1_thread.values[0] | Core_datapath_regfile__io_rs1_addr.values[0] << 3;}
  val_t T1656;
  { T1656 = Core_datapath_regfile__regfile.get(T1655, 0);}
  val_t T1657;
  T1657 = Core_datapath_regfile__io_rs1_addr.values[0] == 0x0L;
  { T1658.values[0] = TERNARY(T1657, 0x0L, T1656);}
  { Core_datapath_Multiplier__io_result.values[0] = Core_datapath_Multiplier__R0.values[0];}
  { Core_datapath__mem_mul_result.values[0] = Core_datapath_Multiplier__io_result.values[0];}
  { Core_control__io_mem_rd_data_sel.values[0] = Core_control__mem_reg_rd_data_sel.values[0];}
  { Core_datapath__io_control_mem_rd_data_sel.values[0] = Core_control__io_mem_rd_data_sel.values[0];}
  val_t T1659;
  T1659 = Core_datapath__io_control_mem_rd_data_sel.values[0] == 0x2L;
  val_t T1660;
  { T1660 = TERNARY_1(T1659, Core_datapath__mem_mul_result.values[0], Core_datapath__mem_reg_rd_data.values[0]);}
  { Core_datapath__io_bus_data_out.values[0] = Core__io_bus_data_out.values[0];}
  { Core_datapath_loadstore__io_bus_data_out.values[0] = Core_datapath__io_bus_data_out.values[0];}
  { Core_imem__io_core_rw_data_out.values[0] = Core_imem__R0.values[0];}
  { Core_datapath__io_imem_rw_data_out.values[0] = Core_imem__io_core_rw_data_out.values[0];}
  { Core_datapath_loadstore__io_imem_rw_data_out.values[0] = Core_datapath__io_imem_rw_data_out.values[0];}
  val_t T1661;
  { T1661 = TERNARY_1(Core_datapath_loadstore__imem_op_reg.values[0], Core_datapath_loadstore__io_imem_rw_data_out.values[0], Core_datapath_loadstore__io_bus_data_out.values[0]);}
  val_t T1662;
  { T1662 = 0x0L | Core_datapath_loadstore__addr_byte_reg.values[0] << 3;}
  { Core_dmem__io_core_data_out.values[0] = Core_dmem__dout.values[0];}
  { Core_datapath__io_dmem_data_out.values[0] = Core_dmem__io_core_data_out.values[0];}
  { Core_datapath_loadstore__io_dmem_data_out.values[0] = Core_datapath__io_dmem_data_out.values[0];}
  val_t T1663;
  T1663 = Core_datapath_loadstore__io_dmem_data_out.values[0] >> T1662;
  val_t T1664;
  { T1664 = T1663;}
  T1664 = T1664 & 0xffffL;
  val_t T1665;
  { T1665 = T1664 | 0x0L << 16;}
  val_t T1666;
  T1666 = Core_datapath_loadstore__mem_type_reg.values[0] == 0x5L;
  val_t T1667;
  { T1667 = TERNARY_1(T1666, T1665, T1663);}
  val_t T1668;
  { T1668 = T1663;}
  T1668 = T1668 & 0xffffL;
  val_t T1669;
  T1669 = (T1663 >> 15) & 1;
  val_t T1670;
  { T1670 = T1669 | 0x0L << 1;}
  val_t T1671;
  { T1671 = 0x0L-T1670;}
  T1671 = T1671 & 0xffffL;
  val_t T1672;
  { T1672 = T1668 | T1671 << 16;}
  val_t T1673;
  T1673 = Core_datapath_loadstore__mem_type_reg.values[0] == 0x1L;
  val_t T1674;
  { T1674 = TERNARY_1(T1673, T1672, T1667);}
  val_t T1675;
  { T1675 = T1663;}
  T1675 = T1675 & 0xffL;
  val_t T1676;
  { T1676 = T1675 | 0x0L << 8;}
  val_t T1677;
  T1677 = Core_datapath_loadstore__mem_type_reg.values[0] == 0x4L;
  val_t T1678;
  { T1678 = TERNARY_1(T1677, T1676, T1674);}
  val_t T1679;
  { T1679 = T1663;}
  T1679 = T1679 & 0xffL;
  val_t T1680;
  T1680 = (T1663 >> 7) & 1;
  val_t T1681;
  { T1681 = T1680 | 0x0L << 1;}
  val_t T1682;
  { T1682 = 0x0L-T1681;}
  T1682 = T1682 & 0xffffffL;
  val_t T1683;
  { T1683 = T1679 | T1682 << 8;}
  val_t T1684;
  T1684 = Core_datapath_loadstore__mem_type_reg.values[0] == 0x0L;
  val_t T1685;
  { T1685 = TERNARY_1(T1684, T1683, T1678);}
  val_t T1686;
  { T1686 = TERNARY_1(Core_datapath_loadstore__dmem_op_reg.values[0], T1685, T1661);}
  { Core_datapath_loadstore__io_data_out.values[0] = T1686;}
  val_t T1687;
  T1687 = Core_datapath__io_control_mem_rd_data_sel.values[0] == 0x1L;
  val_t T1688;
  { T1688 = TERNARY_1(T1687, Core_datapath_loadstore__io_data_out.values[0], T1660);}
  { Core_datapath__mem_rd_data.values[0] = T1688;}
  { Core_datapath_regfile__io_rd_data.values[0] = Core_datapath__mem_rd_data.values[0];}
  { Core_control__mem_rd_write.values[0] = Core_control__mem_reg_rd_write.values[0] & Core_control__mem_reg_valid.values[0];}
  { Core_control__io_mem_rd_write.values[0] = Core_control__mem_rd_write.values[0];}
  { Core_datapath__io_control_mem_rd_write.values[0] = Core_control__io_mem_rd_write.values[0];}
  { Core_datapath_regfile__io_rd_enable.values[0] = Core_datapath__io_control_mem_rd_write.values[0];}
  { Core_datapath_regfile__io_rd_thread.values[0] = Core_datapath__mem_reg_tid.values[0];}
  { Core_datapath_regfile__io_rd_addr.values[0] = Core_datapath__mem_reg_rd_addr.values[0];}
  { T1689.values[0] = Core_datapath_regfile__io_rd_thread.values[0] | Core_datapath_regfile__io_rd_addr.values[0] << 3;}
  { Core_datapath_regfile__io_rs2_thread.values[0] = Core_datapath__if_reg_tid.values[0];}
  val_t T1690;
  { T1690 = Core_datapath__io_imem_r_data_out.values[0] >> 20;}
  T1690 = T1690 & 0x1fL;
  { Core_datapath_regfile__io_rs2_addr.values[0] = T1690;}
  val_t T1691;
  { T1691 = Core_datapath_regfile__io_rs2_thread.values[0] | Core_datapath_regfile__io_rs2_addr.values[0] << 3;}
  val_t T1692;
  { T1692 = Core_datapath_regfile__regfile.get(T1691, 0);}
  val_t T1693;
  T1693 = Core_datapath_regfile__io_rs2_addr.values[0] == 0x0L;
  { T1694.values[0] = TERNARY(T1693, 0x0L, T1692);}
  { Core_datapath_regfile__io_rs1_data.values[0] = Core_datapath_regfile__dout1.values[0];}
  { Core_datapath__wb_rd_data.values[0] = Core_datapath__wb_reg_rd_data.values[0];}
  { Core_datapath__io_control_wb_rd_addr.values[0] = Core_datapath__wb_reg_rd_addr.values[0];}
  { Core_control__io_wb_rd_addr.values[0] = Core_datapath__io_control_wb_rd_addr.values[0];}
  val_t T1695;
  { T1695 = Core_control__io_dec_inst.values[0] >> 15;}
  T1695 = T1695 & 0x1fL;
  val_t T1696;
  T1696 = T1695 == Core_control__io_wb_rd_addr.values[0];
  { Core_datapath__io_control_wb_tid.values[0] = Core_datapath__wb_reg_tid.values[0];}
  { Core_control__io_wb_tid.values[0] = Core_datapath__io_control_wb_tid.values[0];}
  val_t T1697;
  T1697 = Core_control__io_dec_tid.values[0] == Core_control__io_wb_tid.values[0];
  val_t T1698;
  { T1698 = T1697 & Core_control__wb_reg_rd_write.values[0];}
  val_t T1699;
  { T1699 = T1698 & T1696;}
  val_t T1700;
  { T1700 = TERNARY(T1699, 0x3L, 0x0L);}
  { Core_datapath__io_control_mem_rd_addr.values[0] = Core_datapath__mem_reg_rd_addr.values[0];}
  { Core_control__io_mem_rd_addr.values[0] = Core_datapath__io_control_mem_rd_addr.values[0];}
  val_t T1701;
  T1701 = T1695 == Core_control__io_mem_rd_addr.values[0];
  val_t T1702;
  T1702 = Core_control__io_dec_tid.values[0] == Core_control__io_mem_tid.values[0];
  val_t T1703;
  { T1703 = T1702 & Core_control__mem_reg_rd_write.values[0];}
  val_t T1704;
  { T1704 = T1703 & T1701;}
  val_t T1705;
  { T1705 = TERNARY(T1704, 0x2L, T1700);}
  { Core_datapath__io_control_exe_rd_addr.values[0] = Core_datapath__exe_reg_rd_addr.values[0];}
  { Core_control__io_exe_rd_addr.values[0] = Core_datapath__io_control_exe_rd_addr.values[0];}
  val_t T1706;
  T1706 = T1695 == Core_control__io_exe_rd_addr.values[0];
  val_t T1707;
  T1707 = Core_control__io_dec_tid.values[0] == Core_control__io_exe_tid.values[0];
  val_t T1708;
  { T1708 = T1707 & Core_control__exe_reg_rd_write.values[0];}
  val_t T1709;
  { T1709 = T1708 & T1706;}
  val_t T1710;
  { T1710 = TERNARY(T1709, 0x1L, T1705);}
  { Core_control__dec_rs1_sel.values[0] = T1710;}
  { Core_control__io_dec_rs1_sel.values[0] = Core_control__dec_rs1_sel.values[0];}
  { Core_datapath__io_control_dec_rs1_sel.values[0] = Core_control__io_dec_rs1_sel.values[0];}
  val_t T1711;
  T1711 = Core_datapath__io_control_dec_rs1_sel.values[0] == 0x3L;
  val_t T1712;
  { T1712 = TERNARY_1(T1711, Core_datapath__wb_rd_data.values[0], Core_datapath_regfile__io_rs1_data.values[0]);}
  val_t T1713;
  T1713 = Core_datapath__io_control_dec_rs1_sel.values[0] == 0x2L;
  val_t T1714;
  { T1714 = TERNARY_1(T1713, Core_datapath__mem_rd_data.values[0], T1712);}
  { Core_control__io_exe_rd_data_sel.values[0] = Core_control__exe_reg_rd_data_sel.values[0];}
  { Core_datapath__io_control_exe_rd_data_sel.values[0] = Core_control__io_exe_rd_data_sel.values[0];}
  val_t T1715;
  T1715 = Core_datapath__io_control_exe_rd_data_sel.values[0] == 0x2L;
  val_t T1716;
  { T1716 = TERNARY_1(T1715, Core_datapath__exe_reg_pc4.values[0], Core_datapath__exe_alu_result.values[0]);}
  val_t T1717;
  { T1717 = Core_datapath_csr__data_out.values[0];}
  T1717 = T1717 & 0xffffffffL;
  { Core_datapath_csr__io_rw_data_out.values[0] = T1717;}
  val_t T1718;
  T1718 = Core_datapath__io_control_exe_rd_data_sel.values[0] == 0x1L;
  val_t T1719;
  { T1719 = TERNARY_1(T1718, Core_datapath_csr__io_rw_data_out.values[0], T1716);}
  { Core_datapath__exe_rd_data.values[0] = T1719;}
  val_t T1720;
  T1720 = Core_datapath__io_control_dec_rs1_sel.values[0] == 0x1L;
  val_t T1721;
  { T1721 = TERNARY_1(T1720, Core_datapath__exe_rd_data.values[0], T1714);}
  { Core_datapath__dec_rs1_data.values[0] = T1721;}
  { T1722.values[0] = Core_datapath__dec_reg_inst.values[0] >> 7;}
  T1722.values[0] = T1722.values[0] & 0x1fL;
  { Core_datapath_regfile__io_rs2_data.values[0] = Core_datapath_regfile__dout2.values[0];}
  val_t T1723;
  { T1723 = Core_control__io_dec_inst.values[0] >> 20;}
  T1723 = T1723 & 0x1fL;
  val_t T1724;
  T1724 = T1723 == Core_control__io_wb_rd_addr.values[0];
  val_t T1725;
  { T1725 = T1698 & T1724;}
  val_t T1726;
  { T1726 = TERNARY(T1725, 0x3L, 0x0L);}
  val_t T1727;
  T1727 = T1723 == Core_control__io_mem_rd_addr.values[0];
  val_t T1728;
  { T1728 = T1703 & T1727;}
  val_t T1729;
  { T1729 = TERNARY(T1728, 0x2L, T1726);}
  val_t T1730;
  T1730 = T1723 == Core_control__io_exe_rd_addr.values[0];
  val_t T1731;
  { T1731 = T1708 & T1730;}
  val_t T1732;
  { T1732 = TERNARY(T1731, 0x1L, T1729);}
  { Core_control__dec_rs2_sel.values[0] = T1732;}
  { Core_control__io_dec_rs2_sel.values[0] = Core_control__dec_rs2_sel.values[0];}
  { Core_datapath__io_control_dec_rs2_sel.values[0] = Core_control__io_dec_rs2_sel.values[0];}
  val_t T1733;
  T1733 = Core_datapath__io_control_dec_rs2_sel.values[0] == 0x3L;
  val_t T1734;
  { T1734 = TERNARY_1(T1733, Core_datapath__wb_rd_data.values[0], Core_datapath_regfile__io_rs2_data.values[0]);}
  val_t T1735;
  T1735 = Core_datapath__io_control_dec_rs2_sel.values[0] == 0x2L;
  val_t T1736;
  { T1736 = TERNARY_1(T1735, Core_datapath__mem_rd_data.values[0], T1734);}
  val_t T1737;
  T1737 = Core_datapath__io_control_dec_rs2_sel.values[0] == 0x1L;
  val_t T1738;
  { T1738 = TERNARY_1(T1737, Core_datapath__exe_rd_data.values[0], T1736);}
  { Core_datapath__dec_rs2_data.values[0] = T1738;}
  { T1739.values[0] = Core_datapath__dec_reg_inst.values[0] >> 20;}
  T1739.values[0] = T1739.values[0] & 0xfffL;
  val_t T1740;
  { T1740 = Core_datapath__dec_reg_inst.values[0] >> 20;}
  T1740 = T1740 & 0x7ffL;
  val_t T1741;
  T1741 = (Core_datapath__dec_reg_inst.values[0] >> 31) & 1;
  val_t T1742;
  { T1742 = T1741 | 0x0L << 1;}
  val_t T1743;
  { T1743 = 0x0L-T1742;}
  T1743 = T1743 & 0x1fffffL;
  { Core_datapath__dec_imm_i.values[0] = T1740 | T1743 << 11;}
  val_t T1744;
  { T1744 = Core_datapath__dec_reg_inst.values[0] >> 15;}
  T1744 = T1744 & 0x1fL;
  { Core_datapath__dec_imm_z.values[0] = T1744 | 0x0L << 5;}
  val_t T1745;
  { T1745 = Core_control__io_dec_inst.values[0] & 0x44L;}
  val_t T1746;
  T1746 = T1745 == 0x40L;
  val_t T1747;
  { T1747 = Core_control__io_dec_inst.values[0] & 0x8L;}
  val_t T1748;
  T1748 = T1747 == 0x8L;
  val_t T1749;
  { T1749 = T1748 | T1746;}
  val_t T1750;
  { T1750 = Core_control__io_dec_inst.values[0] & 0x44L;}
  val_t T1751;
  T1751 = T1750 == 0x4L;
  val_t T1752;
  { T1752 = T1751 | T1748;}
  val_t T1753;
  { T1753 = T1749 | T1752 << 1;}
  val_t T1754;
  { T1754 = Core_control__io_dec_inst.values[0] & 0x14L;}
  val_t T1755;
  T1755 = T1754 == 0x10L;
  val_t T1756;
  { T1756 = Core_control__io_dec_inst.values[0] & 0x1cL;}
  val_t T1757;
  T1757 = T1756 == 0x4L;
  val_t T1758;
  { T1758 = Core_control__io_dec_inst.values[0] & 0x24L;}
  val_t T1759;
  T1759 = T1758 == 0x0L;
  val_t T1760;
  { T1760 = T1759 | T1757;}
  val_t T1761;
  { T1761 = T1760 | T1755;}
  { Core_control__dec_imm_sel.values[0] = T1753 | T1761 << 2;}
  { Core_control__io_dec_imm_sel.values[0] = Core_control__dec_imm_sel.values[0];}
  { Core_datapath__io_control_dec_imm_sel.values[0] = Core_control__io_dec_imm_sel.values[0];}
  val_t T1762;
  T1762 = Core_datapath__io_control_dec_imm_sel.values[0] == 0x5L;
  val_t T1763;
  { T1763 = TERNARY_1(T1762, Core_datapath__dec_imm_z.values[0], Core_datapath__dec_imm_i.values[0]);}
  val_t T1764;
  T1764 = Core_datapath__io_control_dec_imm_sel.values[0] == 0x4L;
  val_t T1765;
  { T1765 = TERNARY_1(T1764, Core_datapath__dec_imm_i.values[0], T1763);}
  val_t T1766;
  { T1766 = Core_datapath__dec_reg_inst.values[0] >> 21;}
  T1766 = T1766 & 0x3ffL;
  val_t T1767;
  { T1767 = 0x0L | T1766 << 1;}
  val_t T1768;
  T1768 = (Core_datapath__dec_reg_inst.values[0] >> 20) & 1;
  val_t T1769;
  { T1769 = T1767 | T1768 << 11;}
  val_t T1770;
  { T1770 = Core_datapath__dec_reg_inst.values[0] >> 12;}
  T1770 = T1770 & 0xffL;
  val_t T1771;
  T1771 = (Core_datapath__dec_reg_inst.values[0] >> 31) & 1;
  val_t T1772;
  { T1772 = T1771 | 0x0L << 1;}
  val_t T1773;
  { T1773 = 0x0L-T1772;}
  T1773 = T1773 & 0xfffL;
  val_t T1774;
  { T1774 = T1770 | T1773 << 8;}
  { Core_datapath__dec_imm_j.values[0] = T1769 | T1774 << 12;}
  val_t T1775;
  T1775 = Core_datapath__io_control_dec_imm_sel.values[0] == 0x3L;
  val_t T1776;
  { T1776 = TERNARY_1(T1775, Core_datapath__dec_imm_j.values[0], T1765);}
  val_t T1777;
  { T1777 = Core_datapath__dec_reg_inst.values[0] >> 12;}
  T1777 = T1777 & 0xfffffL;
  { Core_datapath__dec_imm_u.values[0] = 0x0L | T1777 << 12;}
  val_t T1778;
  T1778 = Core_datapath__io_control_dec_imm_sel.values[0] == 0x2L;
  val_t T1779;
  { T1779 = TERNARY_1(T1778, Core_datapath__dec_imm_u.values[0], T1776);}
  val_t T1780;
  { T1780 = Core_datapath__dec_reg_inst.values[0] >> 8;}
  T1780 = T1780 & 0xfL;
  val_t T1781;
  { T1781 = 0x0L | T1780 << 1;}
  val_t T1782;
  { T1782 = Core_datapath__dec_reg_inst.values[0] >> 25;}
  T1782 = T1782 & 0x3fL;
  val_t T1783;
  { T1783 = T1781 | T1782 << 5;}
  val_t T1784;
  T1784 = (Core_datapath__dec_reg_inst.values[0] >> 7) & 1;
  val_t T1785;
  T1785 = (Core_datapath__dec_reg_inst.values[0] >> 31) & 1;
  val_t T1786;
  { T1786 = T1785 | 0x0L << 1;}
  val_t T1787;
  { T1787 = 0x0L-T1786;}
  T1787 = T1787 & 0xfffffL;
  val_t T1788;
  { T1788 = T1784 | T1787 << 1;}
  { Core_datapath__dec_imm_b.values[0] = T1783 | T1788 << 11;}
  val_t T1789;
  T1789 = Core_datapath__io_control_dec_imm_sel.values[0] == 0x1L;
  val_t T1790;
  { T1790 = TERNARY_1(T1789, Core_datapath__dec_imm_b.values[0], T1779);}
  val_t T1791;
  { T1791 = Core_datapath__dec_reg_inst.values[0] >> 7;}
  T1791 = T1791 & 0x1fL;
  val_t T1792;
  { T1792 = Core_datapath__dec_reg_inst.values[0] >> 25;}
  T1792 = T1792 & 0x3fL;
  val_t T1793;
  { T1793 = T1791 | T1792 << 5;}
  val_t T1794;
  T1794 = (Core_datapath__dec_reg_inst.values[0] >> 31) & 1;
  val_t T1795;
  { T1795 = T1794 | 0x0L << 1;}
  val_t T1796;
  { T1796 = 0x0L-T1795;}
  T1796 = T1796 & 0x1fffffL;
  { Core_datapath__dec_imm_s.values[0] = T1793 | T1796 << 11;}
  val_t T1797;
  T1797 = Core_datapath__io_control_dec_imm_sel.values[0] == 0x0L;
  { Core_datapath__dec_imm.values[0] = TERNARY_1(T1797, Core_datapath__dec_imm_s.values[0], T1790);}
  val_t T1798;
  { T1798 = Core_control__io_dec_inst.values[0] & 0x4064L;}
  val_t T1799;
  T1799 = T1798 == 0x4020L;
  val_t T1800;
  { T1800 = Core_control__io_dec_inst.values[0] & 0x60L;}
  val_t T1801;
  T1801 = T1800 == 0x40L;
  val_t T1802;
  { T1802 = Core_control__io_dec_inst.values[0] & 0x74L;}
  val_t T1803;
  T1803 = T1802 == 0x30L;
  val_t T1804;
  { T1804 = T1803 | T1801;}
  val_t T1805;
  { T1805 = T1804 | T1799;}
  val_t T1806;
  { T1806 = Core_control__io_dec_inst.values[0] & 0x6050L;}
  val_t T1807;
  T1807 = T1806 == 0x6000L;
  val_t T1808;
  { T1808 = Core_control__io_dec_inst.values[0] & 0x4050L;}
  val_t T1809;
  T1809 = T1808 == 0x50L;
  val_t T1810;
  { T1810 = T1801 | T1809;}
  val_t T1811;
  { T1811 = T1810 | T1807;}
  { Core_control__dec_op2_sel.values[0] = T1805 | T1811 << 1;}
  { Core_control__io_dec_op2_sel.values[0] = Core_control__dec_op2_sel.values[0];}
  { Core_datapath__io_control_dec_op2_sel.values[0] = Core_control__io_dec_op2_sel.values[0];}
  val_t T1812;
  T1812 = Core_datapath__io_control_dec_op2_sel.values[0] == 0x0L;
  { Core_datapath__dec_csr_data.values[0] = TERNARY_1(T1812, Core_datapath__dec_imm.values[0], Core_datapath__dec_rs1_data.values[0]);}
  { T1813.values[0] = TERNARY(Core_datapath__reset.values[0], 0x0L, Core_datapath__next_pcs_7.values[0]);}
  { T1814.values[0] = TERNARY(Core_datapath__reset.values[0], 0x0L, Core_datapath__next_pcs_6.values[0]);}
  { T1815.values[0] = TERNARY(Core_datapath__reset.values[0], 0x0L, Core_datapath__next_pcs_5.values[0]);}
  { T1816.values[0] = TERNARY(Core_datapath__reset.values[0], 0x0L, Core_datapath__next_pcs_4.values[0]);}
  { T1817.values[0] = TERNARY(Core_datapath__reset.values[0], 0x0L, Core_datapath__next_pcs_3.values[0]);}
  { T1818.values[0] = TERNARY(Core_datapath__reset.values[0], 0x0L, Core_datapath__next_pcs_2.values[0]);}
  { T1819.values[0] = TERNARY(Core_datapath__reset.values[0], 0x0L, Core_datapath__next_pcs_1.values[0]);}
  val_t T1820;
  { T1820 = Core_control__io_dec_inst.values[0] & 0x4014L;}
  val_t T1821;
  T1821 = T1820 == 0x10L;
  val_t T1822;
  { T1822 = Core_control__io_dec_inst.values[0] & 0x4cL;}
  val_t T1823;
  T1823 = T1822 == 0x0L;
  val_t T1824;
  { T1824 = T1823 | T1757;}
  val_t T1825;
  { T1825 = T1824 | T1821;}
  val_t T1826;
  { T1826 = Core_control__io_dec_inst.values[0] & 0x4058L;}
  val_t T1827;
  T1827 = T1826 == 0x4050L;
  val_t T1828;
  { T1828 = Core_control__io_dec_inst.values[0] & 0x64L;}
  val_t T1829;
  T1829 = T1828 == 0x24L;
  val_t T1830;
  { T1830 = T1829 | T1827;}
  { Core_control__dec_op1_sel.values[0] = T1825 | T1830 << 1;}
  { Core_control__io_dec_op1_sel.values[0] = Core_control__dec_op1_sel.values[0];}
  { Core_datapath__io_control_dec_op1_sel.values[0] = Core_control__io_dec_op1_sel.values[0];}
  val_t T1831;
  T1831 = Core_datapath__io_control_dec_op1_sel.values[0] == 0x0L;
  val_t T1832;
  { T1832 = TERNARY(T1831, Core_datapath__dec_reg_pc.values[0], 0x0L);}
  val_t T1833;
  T1833 = Core_datapath__io_control_dec_op1_sel.values[0] == 0x1L;
  { Core_datapath__dec_op1.values[0] = TERNARY_1(T1833, Core_datapath__dec_rs1_data.values[0], T1832);}
  val_t T1834;
  T1834 = Core_datapath__io_control_dec_op2_sel.values[0] == 0x0L;
  val_t T1835;
  { T1835 = TERNARY(T1834, Core_datapath__dec_imm.values[0], 0x0L);}
  val_t T1836;
  T1836 = Core_datapath__io_control_dec_op2_sel.values[0] == 0x1L;
  { Core_datapath__dec_op2.values[0] = TERNARY_1(T1836, Core_datapath__dec_rs2_data.values[0], T1835);}
  { T1837.values[0] = TERNARY(Core_datapath__reset.values[0], 0x0L, Core_datapath__next_pcs_0.values[0]);}
  { Core_datapath_csr__io_tmodes_5.values[0] = Core_datapath_csr__reg_tmodes_5.values[0];}
  { Core_datapath__io_control_csr_tmodes_5.values[0] = Core_datapath_csr__io_tmodes_5.values[0];}
  { Core_control__io_csr_tmodes_5.values[0] = Core_datapath__io_control_csr_tmodes_5.values[0];}
  { Core_control_scheduler__io_thread_modes_5.values[0] = Core_control__io_csr_tmodes_5.values[0];}
  val_t T1838;
  T1838 = Core_control_scheduler__io_thread_modes_5.values[0] == 0x2L;
  { Core_datapath_csr__io_tmodes_4.values[0] = Core_datapath_csr__reg_tmodes_4.values[0];}
  { Core_datapath__io_control_csr_tmodes_4.values[0] = Core_datapath_csr__io_tmodes_4.values[0];}
  { Core_control__io_csr_tmodes_4.values[0] = Core_datapath__io_control_csr_tmodes_4.values[0];}
  { Core_control_scheduler__io_thread_modes_4.values[0] = Core_control__io_csr_tmodes_4.values[0];}
  val_t T1839;
  T1839 = Core_control_scheduler__io_thread_modes_4.values[0] == 0x2L;
  { Core_datapath_csr__io_tmodes_3.values[0] = Core_datapath_csr__reg_tmodes_3.values[0];}
  { Core_datapath__io_control_csr_tmodes_3.values[0] = Core_datapath_csr__io_tmodes_3.values[0];}
  { Core_control__io_csr_tmodes_3.values[0] = Core_datapath__io_control_csr_tmodes_3.values[0];}
  { Core_control_scheduler__io_thread_modes_3.values[0] = Core_control__io_csr_tmodes_3.values[0];}
  val_t T1840;
  T1840 = Core_control_scheduler__io_thread_modes_3.values[0] == 0x2L;
  { Core_datapath_csr__io_tmodes_2.values[0] = Core_datapath_csr__reg_tmodes_2.values[0];}
  { Core_datapath__io_control_csr_tmodes_2.values[0] = Core_datapath_csr__io_tmodes_2.values[0];}
  { Core_control__io_csr_tmodes_2.values[0] = Core_datapath__io_control_csr_tmodes_2.values[0];}
  { Core_control_scheduler__io_thread_modes_2.values[0] = Core_control__io_csr_tmodes_2.values[0];}
  val_t T1841;
  T1841 = Core_control_scheduler__io_thread_modes_2.values[0] == 0x2L;
  { Core_datapath_csr__io_tmodes_1.values[0] = Core_datapath_csr__reg_tmodes_1.values[0];}
  { Core_datapath__io_control_csr_tmodes_1.values[0] = Core_datapath_csr__io_tmodes_1.values[0];}
  { Core_control__io_csr_tmodes_1.values[0] = Core_datapath__io_control_csr_tmodes_1.values[0];}
  { Core_control_scheduler__io_thread_modes_1.values[0] = Core_control__io_csr_tmodes_1.values[0];}
  val_t T1842;
  T1842 = Core_control_scheduler__io_thread_modes_1.values[0] == 0x2L;
  { Core_datapath_csr__io_tmodes_0.values[0] = Core_datapath_csr__reg_tmodes_0.values[0];}
  { Core_datapath__io_control_csr_tmodes_0.values[0] = Core_datapath_csr__io_tmodes_0.values[0];}
  { Core_control__io_csr_tmodes_0.values[0] = Core_datapath__io_control_csr_tmodes_0.values[0];}
  { Core_control_scheduler__io_thread_modes_0.values[0] = Core_control__io_csr_tmodes_0.values[0];}
  val_t T1843;
  T1843 = Core_control_scheduler__io_thread_modes_0.values[0] == 0x2L;
  val_t T1844;
  { T1844 = T1843 | T1842;}
  val_t T1845;
  { T1845 = T1844 | T1841;}
  val_t T1846;
  { T1846 = T1845 | T1840;}
  val_t T1847;
  { T1847 = T1846 | T1839;}
  val_t T1848;
  { T1848 = T1847 | T1838;}
  val_t T1849;
  { T1849 = T1848 ^ 0x1L;}
  { Core_datapath_csr__io_tmodes_6.values[0] = Core_datapath_csr__reg_tmodes_6.values[0];}
  { Core_datapath__io_control_csr_tmodes_6.values[0] = Core_datapath_csr__io_tmodes_6.values[0];}
  { Core_control__io_csr_tmodes_6.values[0] = Core_datapath__io_control_csr_tmodes_6.values[0];}
  { Core_control_scheduler__io_thread_modes_6.values[0] = Core_control__io_csr_tmodes_6.values[0];}
  val_t T1850;
  T1850 = Core_control_scheduler__io_thread_modes_6.values[0] == 0x2L;
  val_t T1851;
  { T1851 = T1850 & T1849;}
  val_t T1852;
  { T1852 = Core_control_scheduler__R227.values[0] | Core_control_scheduler__R222.values[0];}
  val_t T1853;
  { T1853 = T1852 | Core_control_scheduler__R233.values[0];}
  val_t T1854;
  { T1854 = T1853 | Core_control_scheduler__R210.values[0];}
  val_t T1855;
  { T1855 = T1854 | Core_control_scheduler__R248.values[0];}
  val_t T1856;
  { T1856 = T1838 & T1855;}
  val_t T1857;
  { T1857 = Core_control_scheduler__R227.values[0] | Core_control_scheduler__R222.values[0];}
  val_t T1858;
  { T1858 = T1857 | Core_control_scheduler__R233.values[0];}
  val_t T1859;
  { T1859 = T1858 | Core_control_scheduler__R210.values[0];}
  val_t T1860;
  { T1860 = T1839 & T1859;}
  val_t T1861;
  { T1861 = Core_control_scheduler__R227.values[0] | Core_control_scheduler__R222.values[0];}
  val_t T1862;
  { T1862 = T1861 | Core_control_scheduler__R233.values[0];}
  val_t T1863;
  { T1863 = T1840 & T1862;}
  val_t T1864;
  { T1864 = Core_control_scheduler__R227.values[0] | Core_control_scheduler__R222.values[0];}
  val_t T1865;
  { T1865 = T1841 & T1864;}
  val_t T1866;
  { T1866 = T1842 & Core_control_scheduler__R227.values[0];}
  val_t T1867;
  { T1867 = T1866 | T1865;}
  val_t T1868;
  { T1868 = T1867 | T1863;}
  val_t T1869;
  { T1869 = T1868 | T1860;}
  val_t T1870;
  { T1870 = T1869 | T1856;}
  val_t T1871;
  { T1871 = T1870 ^ 0x1L;}
  val_t T1872;
  { T1872 = Core_control_scheduler__R227.values[0] | Core_control_scheduler__R222.values[0];}
  val_t T1873;
  { T1873 = T1872 | Core_control_scheduler__R233.values[0];}
  val_t T1874;
  { T1874 = T1873 | Core_control_scheduler__R210.values[0];}
  val_t T1875;
  { T1875 = T1874 | Core_control_scheduler__R248.values[0];}
  val_t T1876;
  { T1876 = T1875 | Core_control_scheduler__R196.values[0];}
  val_t T1877;
  { T1877 = T1850 & T1876;}
  val_t T1878;
  { T1878 = T1877 & T1871;}
  val_t T1879;
  { T1879 = Core_control_scheduler__R227.values[0] | Core_control_scheduler__R222.values[0];}
  val_t T1880;
  { T1880 = T1879 | Core_control_scheduler__R233.values[0];}
  val_t T1881;
  { T1881 = T1880 | Core_control_scheduler__R210.values[0];}
  val_t T1882;
  { T1882 = T1881 | Core_control_scheduler__R248.values[0];}
  val_t T1883;
  { T1883 = T1882 | Core_control_scheduler__R196.values[0];}
  val_t T1884;
  { T1884 = T1883 | Core_control_scheduler__R273.values[0];}
  { Core_datapath_csr__io_tmodes_7.values[0] = Core_datapath_csr__reg_tmodes_7.values[0];}
  { Core_datapath__io_control_csr_tmodes_7.values[0] = Core_datapath_csr__io_tmodes_7.values[0];}
  { Core_control__io_csr_tmodes_7.values[0] = Core_datapath__io_control_csr_tmodes_7.values[0];}
  { Core_control_scheduler__io_thread_modes_7.values[0] = Core_control__io_csr_tmodes_7.values[0];}
  val_t T1885;
  T1885 = Core_control_scheduler__io_thread_modes_7.values[0] == 0x2L;
  val_t T1886;
  { T1886 = T1885 & T1884;}
  val_t T1887;
  { T1887 = T1866 | T1865;}
  val_t T1888;
  { T1888 = T1887 | T1863;}
  val_t T1889;
  { T1889 = T1888 | T1860;}
  val_t T1890;
  { T1890 = T1889 | T1856;}
  val_t T1891;
  { T1891 = T1890 | T1877;}
  val_t T1892;
  { T1892 = T1891 | T1886;}
  val_t T1893;
  { T1893 = TERNARY_1(T1892, T1878, T1851);}
  val_t T1894;
  { T1894 = T1843 | T1842;}
  val_t T1895;
  { T1895 = T1894 | T1841;}
  val_t T1896;
  { T1896 = T1895 | T1840;}
  val_t T1897;
  { T1897 = T1896 | T1839;}
  val_t T1898;
  { T1898 = T1897 | T1838;}
  val_t T1899;
  { T1899 = T1898 | T1850;}
  val_t T1900;
  { T1900 = T1899 ^ 0x1L;}
  val_t T1901;
  { T1901 = T1885 & T1900;}
  val_t T1902;
  { T1902 = T1866 | T1865;}
  val_t T1903;
  { T1903 = T1902 | T1863;}
  val_t T1904;
  { T1904 = T1903 | T1860;}
  val_t T1905;
  { T1905 = T1904 | T1856;}
  val_t T1906;
  { T1906 = T1905 | T1877;}
  val_t T1907;
  { T1907 = T1906 ^ 0x1L;}
  val_t T1908;
  { T1908 = T1886 & T1907;}
  val_t T1909;
  { T1909 = TERNARY_1(T1892, T1908, T1901);}
  val_t T1910;
  { T1910 = T1843 | T1842;}
  val_t T1911;
  { T1911 = T1910 | T1841;}
  val_t T1912;
  { T1912 = T1911 | T1840;}
  val_t T1913;
  { T1913 = T1912 | T1839;}
  val_t T1914;
  { T1914 = T1913 ^ 0x1L;}
  val_t T1915;
  { T1915 = T1838 & T1914;}
  val_t T1916;
  { T1916 = T1866 | T1865;}
  val_t T1917;
  { T1917 = T1916 | T1863;}
  val_t T1918;
  { T1918 = T1917 | T1860;}
  val_t T1919;
  { T1919 = T1918 ^ 0x1L;}
  val_t T1920;
  { T1920 = T1856 & T1919;}
  val_t T1921;
  { T1921 = TERNARY_1(T1892, T1920, T1915);}
  val_t T1922;
  { T1922 = T1843 | T1842;}
  val_t T1923;
  { T1923 = T1922 | T1841;}
  val_t T1924;
  { T1924 = T1923 | T1840;}
  val_t T1925;
  { T1925 = T1924 ^ 0x1L;}
  val_t T1926;
  { T1926 = T1839 & T1925;}
  val_t T1927;
  { T1927 = T1866 | T1865;}
  val_t T1928;
  { T1928 = T1927 | T1863;}
  val_t T1929;
  { T1929 = T1928 ^ 0x1L;}
  val_t T1930;
  { T1930 = T1860 & T1929;}
  val_t T1931;
  { T1931 = TERNARY_1(T1892, T1930, T1926);}
  val_t T1932;
  { T1932 = T1843 | T1842;}
  val_t T1933;
  { T1933 = T1932 | T1841;}
  val_t T1934;
  { T1934 = T1933 ^ 0x1L;}
  val_t T1935;
  { T1935 = T1840 & T1934;}
  val_t T1936;
  { T1936 = T1866 | T1865;}
  val_t T1937;
  { T1937 = T1936 ^ 0x1L;}
  val_t T1938;
  { T1938 = T1863 & T1937;}
  val_t T1939;
  { T1939 = TERNARY_1(T1892, T1938, T1935);}
  val_t T1940;
  { T1940 = T1843 | T1842;}
  val_t T1941;
  { T1941 = T1940 ^ 0x1L;}
  val_t T1942;
  { T1942 = T1841 & T1941;}
  val_t T1943;
  { T1943 = T1866 ^ 0x1L;}
  val_t T1944;
  { T1944 = T1865 & T1943;}
  val_t T1945;
  { T1945 = TERNARY_1(T1892, T1944, T1942);}
  val_t T1946;
  { T1946 = T1843 ^ 0x1L;}
  val_t T1947;
  { T1947 = T1842 & T1946;}
  val_t T1948;
  { T1948 = TERNARY_1(T1892, T1866, T1947);}
  val_t T1949;
  { T1949 = TERNARY(T1892, 0x0L, T1843);}
  val_t T1950;
  { T1950 = T1949 | T1948;}
  val_t T1951;
  { T1951 = T1950 | T1945;}
  val_t T1952;
  { T1952 = T1951 | T1939;}
  val_t T1953;
  { T1953 = T1952 | T1931;}
  val_t T1954;
  { T1954 = T1953 | T1921;}
  val_t T1955;
  { T1955 = T1954 | T1893;}
  val_t T1956;
  { T1956 = T1955 | T1909;}
  { Core_datapath_csr__io_slots_7.values[0] = Core_datapath_csr__reg_slots_7.values[0];}
  { Core_datapath__io_control_csr_slots_7.values[0] = Core_datapath_csr__io_slots_7.values[0];}
  { Core_control__io_csr_slots_7.values[0] = Core_datapath__io_control_csr_slots_7.values[0];}
  { Core_control_scheduler__io_slots_7.values[0] = Core_control__io_csr_slots_7.values[0];}
  { Core_datapath_csr__io_slots_6.values[0] = Core_datapath_csr__reg_slots_6.values[0];}
  { Core_datapath__io_control_csr_slots_6.values[0] = Core_datapath_csr__io_slots_6.values[0];}
  { Core_control__io_csr_slots_6.values[0] = Core_datapath__io_control_csr_slots_6.values[0];}
  { Core_control_scheduler__io_slots_6.values[0] = Core_control__io_csr_slots_6.values[0];}
  val_t T1957;
  T1957 = Core_control_scheduler__io_slots_6.values[0] != 0xfL;
  { Core_datapath_csr__io_slots_5.values[0] = Core_datapath_csr__reg_slots_5.values[0];}
  { Core_datapath__io_control_csr_slots_5.values[0] = Core_datapath_csr__io_slots_5.values[0];}
  { Core_control__io_csr_slots_5.values[0] = Core_datapath__io_control_csr_slots_5.values[0];}
  { Core_control_scheduler__io_slots_5.values[0] = Core_control__io_csr_slots_5.values[0];}
  val_t T1958;
  T1958 = Core_control_scheduler__io_slots_5.values[0] != 0xfL;
  { Core_datapath_csr__io_slots_4.values[0] = Core_datapath_csr__reg_slots_4.values[0];}
  { Core_datapath__io_control_csr_slots_4.values[0] = Core_datapath_csr__io_slots_4.values[0];}
  { Core_control__io_csr_slots_4.values[0] = Core_datapath__io_control_csr_slots_4.values[0];}
  { Core_control_scheduler__io_slots_4.values[0] = Core_control__io_csr_slots_4.values[0];}
  val_t T1959;
  T1959 = Core_control_scheduler__io_slots_4.values[0] != 0xfL;
  { Core_datapath_csr__io_slots_3.values[0] = Core_datapath_csr__reg_slots_3.values[0];}
  { Core_datapath__io_control_csr_slots_3.values[0] = Core_datapath_csr__io_slots_3.values[0];}
  { Core_control__io_csr_slots_3.values[0] = Core_datapath__io_control_csr_slots_3.values[0];}
  { Core_control_scheduler__io_slots_3.values[0] = Core_control__io_csr_slots_3.values[0];}
  val_t T1960;
  T1960 = Core_control_scheduler__io_slots_3.values[0] != 0xfL;
  { Core_datapath_csr__io_slots_2.values[0] = Core_datapath_csr__reg_slots_2.values[0];}
  { Core_datapath__io_control_csr_slots_2.values[0] = Core_datapath_csr__io_slots_2.values[0];}
  { Core_control__io_csr_slots_2.values[0] = Core_datapath__io_control_csr_slots_2.values[0];}
  { Core_control_scheduler__io_slots_2.values[0] = Core_control__io_csr_slots_2.values[0];}
  val_t T1961;
  T1961 = Core_control_scheduler__io_slots_2.values[0] != 0xfL;
  { Core_datapath_csr__io_slots_1.values[0] = Core_datapath_csr__reg_slots_1.values[0];}
  { Core_datapath__io_control_csr_slots_1.values[0] = Core_datapath_csr__io_slots_1.values[0];}
  { Core_control__io_csr_slots_1.values[0] = Core_datapath__io_control_csr_slots_1.values[0];}
  { Core_control_scheduler__io_slots_1.values[0] = Core_control__io_csr_slots_1.values[0];}
  val_t T1962;
  T1962 = Core_control_scheduler__io_slots_1.values[0] != 0xfL;
  { Core_datapath_csr__io_slots_0.values[0] = Core_datapath_csr__reg_slots_0.values[0];}
  { Core_datapath__io_control_csr_slots_0.values[0] = Core_datapath_csr__io_slots_0.values[0];}
  { Core_control__io_csr_slots_0.values[0] = Core_datapath__io_control_csr_slots_0.values[0];}
  { Core_control_scheduler__io_slots_0.values[0] = Core_control__io_csr_slots_0.values[0];}
  val_t T1963;
  T1963 = Core_control_scheduler__io_slots_0.values[0] != 0xfL;
  val_t T1964;
  { T1964 = T1963 | T1962;}
  val_t T1965;
  { T1965 = T1964 | T1961;}
  val_t T1966;
  { T1966 = T1965 | T1960;}
  val_t T1967;
  { T1967 = T1966 | T1959;}
  val_t T1968;
  { T1968 = T1967 | T1958;}
  val_t T1969;
  { T1969 = T1968 | T1957;}
  val_t T1970;
  { T1970 = T1969 ^ 0x1L;}
  val_t T1971;
  T1971 = Core_control_scheduler__io_slots_7.values[0] != 0xfL;
  val_t T1972;
  { T1972 = T1971 & T1970;}
  val_t T1973;
  { T1973 = Core_control_scheduler__R66.values[0] | Core_control_scheduler__R61.values[0];}
  val_t T1974;
  { T1974 = T1973 | Core_control_scheduler__R72.values[0];}
  val_t T1975;
  { T1975 = T1974 | Core_control_scheduler__R49.values[0];}
  val_t T1976;
  { T1976 = T1975 | Core_control_scheduler__R87.values[0];}
  val_t T1977;
  { T1977 = T1976 | Core_control_scheduler__R35.values[0];}
  val_t T1978;
  { T1978 = T1957 & T1977;}
  val_t T1979;
  { T1979 = Core_control_scheduler__R66.values[0] | Core_control_scheduler__R61.values[0];}
  val_t T1980;
  { T1980 = T1979 | Core_control_scheduler__R72.values[0];}
  val_t T1981;
  { T1981 = T1980 | Core_control_scheduler__R49.values[0];}
  val_t T1982;
  { T1982 = T1981 | Core_control_scheduler__R87.values[0];}
  val_t T1983;
  { T1983 = T1958 & T1982;}
  val_t T1984;
  { T1984 = Core_control_scheduler__R66.values[0] | Core_control_scheduler__R61.values[0];}
  val_t T1985;
  { T1985 = T1984 | Core_control_scheduler__R72.values[0];}
  val_t T1986;
  { T1986 = T1985 | Core_control_scheduler__R49.values[0];}
  val_t T1987;
  { T1987 = T1959 & T1986;}
  val_t T1988;
  { T1988 = Core_control_scheduler__R66.values[0] | Core_control_scheduler__R61.values[0];}
  val_t T1989;
  { T1989 = T1988 | Core_control_scheduler__R72.values[0];}
  val_t T1990;
  { T1990 = T1960 & T1989;}
  val_t T1991;
  { T1991 = Core_control_scheduler__R66.values[0] | Core_control_scheduler__R61.values[0];}
  val_t T1992;
  { T1992 = T1961 & T1991;}
  val_t T1993;
  { T1993 = T1962 & Core_control_scheduler__R66.values[0];}
  val_t T1994;
  { T1994 = T1993 | T1992;}
  val_t T1995;
  { T1995 = T1994 | T1990;}
  val_t T1996;
  { T1996 = T1995 | T1987;}
  val_t T1997;
  { T1997 = T1996 | T1983;}
  val_t T1998;
  { T1998 = T1997 | T1978;}
  val_t T1999;
  { T1999 = T1998 ^ 0x1L;}
  val_t T2000;
  { T2000 = Core_control_scheduler__R66.values[0] | Core_control_scheduler__R61.values[0];}
  val_t T2001;
  { T2001 = T2000 | Core_control_scheduler__R72.values[0];}
  val_t T2002;
  { T2002 = T2001 | Core_control_scheduler__R49.values[0];}
  val_t T2003;
  { T2003 = T2002 | Core_control_scheduler__R87.values[0];}
  val_t T2004;
  { T2004 = T2003 | Core_control_scheduler__R35.values[0];}
  val_t T2005;
  { T2005 = T2004 | Core_control_scheduler__R112.values[0];}
  val_t T2006;
  { T2006 = T1971 & T2005;}
  val_t T2007;
  { T2007 = T2006 & T1999;}
  val_t T2008;
  { T2008 = T1993 | T1992;}
  val_t T2009;
  { T2009 = T2008 | T1990;}
  val_t T2010;
  { T2010 = T2009 | T1987;}
  val_t T2011;
  { T2011 = T2010 | T1983;}
  val_t T2012;
  { T2012 = T2011 | T1978;}
  val_t T2013;
  { T2013 = T2012 | T2006;}
  val_t T2014;
  { T2014 = TERNARY_1(T2013, T2007, T1972);}
  val_t T2015;
  { T2015 = TERNARY(T2014, Core_control_scheduler__io_slots_7.values[0], 0x0L);}
  val_t T2016;
  { T2016 = T1963 | T1962;}
  val_t T2017;
  { T2017 = T2016 | T1961;}
  val_t T2018;
  { T2018 = T2017 | T1960;}
  val_t T2019;
  { T2019 = T2018 | T1959;}
  val_t T2020;
  { T2020 = T2019 | T1958;}
  val_t T2021;
  { T2021 = T2020 ^ 0x1L;}
  val_t T2022;
  { T2022 = T1957 & T2021;}
  val_t T2023;
  { T2023 = T1993 | T1992;}
  val_t T2024;
  { T2024 = T2023 | T1990;}
  val_t T2025;
  { T2025 = T2024 | T1987;}
  val_t T2026;
  { T2026 = T2025 | T1983;}
  val_t T2027;
  { T2027 = T2026 ^ 0x1L;}
  val_t T2028;
  { T2028 = T1978 & T2027;}
  val_t T2029;
  { T2029 = TERNARY_1(T2013, T2028, T2022);}
  val_t T2030;
  { T2030 = TERNARY(T2029, Core_control_scheduler__io_slots_6.values[0], 0x0L);}
  val_t T2031;
  { T2031 = T1963 | T1962;}
  val_t T2032;
  { T2032 = T2031 | T1961;}
  val_t T2033;
  { T2033 = T2032 | T1960;}
  val_t T2034;
  { T2034 = T2033 | T1959;}
  val_t T2035;
  { T2035 = T2034 ^ 0x1L;}
  val_t T2036;
  { T2036 = T1958 & T2035;}
  val_t T2037;
  { T2037 = T1993 | T1992;}
  val_t T2038;
  { T2038 = T2037 | T1990;}
  val_t T2039;
  { T2039 = T2038 | T1987;}
  val_t T2040;
  { T2040 = T2039 ^ 0x1L;}
  val_t T2041;
  { T2041 = T1983 & T2040;}
  val_t T2042;
  { T2042 = TERNARY_1(T2013, T2041, T2036);}
  val_t T2043;
  { T2043 = TERNARY(T2042, Core_control_scheduler__io_slots_5.values[0], 0x0L);}
  val_t T2044;
  { T2044 = T1963 | T1962;}
  val_t T2045;
  { T2045 = T2044 | T1961;}
  val_t T2046;
  { T2046 = T2045 | T1960;}
  val_t T2047;
  { T2047 = T2046 ^ 0x1L;}
  val_t T2048;
  { T2048 = T1959 & T2047;}
  val_t T2049;
  { T2049 = T1993 | T1992;}
  val_t T2050;
  { T2050 = T2049 | T1990;}
  val_t T2051;
  { T2051 = T2050 ^ 0x1L;}
  val_t T2052;
  { T2052 = T1987 & T2051;}
  val_t T2053;
  { T2053 = TERNARY_1(T2013, T2052, T2048);}
  val_t T2054;
  { T2054 = TERNARY(T2053, Core_control_scheduler__io_slots_4.values[0], 0x0L);}
  val_t T2055;
  { T2055 = T1963 | T1962;}
  val_t T2056;
  { T2056 = T2055 | T1961;}
  val_t T2057;
  { T2057 = T2056 ^ 0x1L;}
  val_t T2058;
  { T2058 = T1960 & T2057;}
  val_t T2059;
  { T2059 = T1993 | T1992;}
  val_t T2060;
  { T2060 = T2059 ^ 0x1L;}
  val_t T2061;
  { T2061 = T1990 & T2060;}
  val_t T2062;
  { T2062 = TERNARY_1(T2013, T2061, T2058);}
  val_t T2063;
  { T2063 = TERNARY(T2062, Core_control_scheduler__io_slots_3.values[0], 0x0L);}
  val_t T2064;
  { T2064 = T1963 | T1962;}
  val_t T2065;
  { T2065 = T2064 ^ 0x1L;}
  val_t T2066;
  { T2066 = T1961 & T2065;}
  val_t T2067;
  { T2067 = T1993 ^ 0x1L;}
  val_t T2068;
  { T2068 = T1992 & T2067;}
  val_t T2069;
  { T2069 = TERNARY_1(T2013, T2068, T2066);}
  val_t T2070;
  { T2070 = TERNARY(T2069, Core_control_scheduler__io_slots_2.values[0], 0x0L);}
  val_t T2071;
  { T2071 = T1963 ^ 0x1L;}
  val_t T2072;
  { T2072 = T1962 & T2071;}
  val_t T2073;
  { T2073 = TERNARY_1(T2013, T1993, T2072);}
  val_t T2074;
  { T2074 = TERNARY(T2073, Core_control_scheduler__io_slots_1.values[0], 0x0L);}
  val_t T2075;
  { T2075 = TERNARY(T2013, 0x0L, T1963);}
  val_t T2076;
  { T2076 = TERNARY(T2075, Core_control_scheduler__io_slots_0.values[0], 0x0L);}
  val_t T2077;
  { T2077 = T2076 | T2074;}
  val_t T2078;
  { T2078 = T2077 | T2070;}
  val_t T2079;
  { T2079 = T2078 | T2063;}
  val_t T2080;
  { T2080 = T2079 | T2054;}
  val_t T2081;
  { T2081 = T2080 | T2043;}
  val_t T2082;
  { T2082 = T2081 | T2030;}
  val_t T2083;
  { T2083 = T2082 | T2015;}
  val_t T2084;
  { T2084 = T2083;}
  T2084 = T2084 & 0x7L;
  val_t T2085;
  T2085 = (T2084 >> 0) & 1;
  val_t T2086;
  { T2086 = TERNARY_1(T2085, Core_control_scheduler__io_thread_modes_1.values[0], Core_control_scheduler__io_thread_modes_0.values[0]);}
  val_t T2087;
  T2087 = (T2084 >> 0) & 1;
  val_t T2088;
  { T2088 = TERNARY_1(T2087, Core_control_scheduler__io_thread_modes_3.values[0], Core_control_scheduler__io_thread_modes_2.values[0]);}
  val_t T2089;
  T2089 = (T2084 >> 1) & 1;
  val_t T2090;
  { T2090 = TERNARY_1(T2089, T2088, T2086);}
  val_t T2091;
  T2091 = (T2084 >> 0) & 1;
  val_t T2092;
  { T2092 = TERNARY_1(T2091, Core_control_scheduler__io_thread_modes_5.values[0], Core_control_scheduler__io_thread_modes_4.values[0]);}
  val_t T2093;
  T2093 = (T2084 >> 0) & 1;
  val_t T2094;
  { T2094 = TERNARY_1(T2093, Core_control_scheduler__io_thread_modes_7.values[0], Core_control_scheduler__io_thread_modes_6.values[0]);}
  val_t T2095;
  T2095 = (T2084 >> 1) & 1;
  val_t T2096;
  { T2096 = TERNARY_1(T2095, T2094, T2092);}
  val_t T2097;
  T2097 = (T2084 >> 2) & 1;
  val_t T2098;
  { T2098 = TERNARY_1(T2097, T2096, T2090);}
  val_t T2099;
  T2099 = T2098 == 0x2L;
  val_t T2100;
  T2100 = T2098 == 0x0L;
  val_t T2101;
  { T2101 = T2100 | T2099;}
  val_t T2102;
  T2102 = T2083 != 0xeL;
  val_t T2103;
  { T2103 = T2102 & T2101;}
  val_t T2104;
  { T2104 = T2103 ^ 0x1L;}
  val_t T2105;
  { T2105 = T2104 & T1956;}
  val_t T2106;
  { T2106 = T2075 | T2073;}
  val_t T2107;
  { T2107 = T2106 | T2069;}
  val_t T2108;
  { T2108 = T2107 | T2062;}
  val_t T2109;
  { T2109 = T2108 | T2053;}
  val_t T2110;
  { T2110 = T2109 | T2042;}
  val_t T2111;
  { T2111 = T2110 | T2029;}
  val_t T2112;
  { T2112 = T2111 | T2014;}
  val_t T2113;
  { T2113 = T2112 & T2105;}
  val_t T2114;
  { T2114 = TERNARY_1(T2113, T1893, Core_control_scheduler__R273.values[0]);}
  { Core_control__reset.values[0] = reset.values[0];}
  { Core_control_scheduler__reset.values[0] = Core_control__reset.values[0];}
  { T2115.values[0] = TERNARY(Core_control_scheduler__reset.values[0], 0x0L, T2114);}
  val_t T2116;
  { T2116 = TERNARY_1(T2113, T1931, Core_control_scheduler__R248.values[0]);}
  { T2117.values[0] = TERNARY(Core_control_scheduler__reset.values[0], 0x0L, T2116);}
  val_t T2118;
  { T2118 = TERNARY_1(T2113, T1945, Core_control_scheduler__R233.values[0]);}
  { T2119.values[0] = TERNARY(Core_control_scheduler__reset.values[0], 0x0L, T2118);}
  val_t T2120;
  { T2120 = TERNARY_1(T2113, T1949, Core_control_scheduler__R227.values[0]);}
  { T2121.values[0] = TERNARY(Core_control_scheduler__reset.values[0], 0x0L, T2120);}
  val_t T2122;
  { T2122 = TERNARY_1(T2113, T1948, Core_control_scheduler__R222.values[0]);}
  { T2123.values[0] = TERNARY(Core_control_scheduler__reset.values[0], 0x0L, T2122);}
  val_t T2124;
  { T2124 = TERNARY_1(T2113, T1939, Core_control_scheduler__R210.values[0]);}
  { T2125.values[0] = TERNARY(Core_control_scheduler__reset.values[0], 0x0L, T2124);}
  val_t T2126;
  { T2126 = TERNARY_1(T2113, T1921, Core_control_scheduler__R196.values[0]);}
  { T2127.values[0] = TERNARY(Core_control_scheduler__reset.values[0], 0x0L, T2126);}
  val_t T2128;
  { T2128 = TERNARY_1(T2112, T2029, Core_control_scheduler__R112.values[0]);}
  { T2129.values[0] = TERNARY(Core_control_scheduler__reset.values[0], 0x0L, T2128);}
  val_t T2130;
  { T2130 = TERNARY_1(T2112, T2053, Core_control_scheduler__R87.values[0]);}
  { T2131.values[0] = TERNARY(Core_control_scheduler__reset.values[0], 0x0L, T2130);}
  val_t T2132;
  { T2132 = TERNARY_1(T2112, T2069, Core_control_scheduler__R72.values[0]);}
  { T2133.values[0] = TERNARY(Core_control_scheduler__reset.values[0], 0x0L, T2132);}
  val_t T2134;
  { T2134 = TERNARY_1(T2112, T2075, Core_control_scheduler__R66.values[0]);}
  { T2135.values[0] = TERNARY(Core_control_scheduler__reset.values[0], 0x0L, T2134);}
  val_t T2136;
  { T2136 = TERNARY_1(T2112, T2073, Core_control_scheduler__R61.values[0]);}
  { T2137.values[0] = TERNARY(Core_control_scheduler__reset.values[0], 0x0L, T2136);}
  val_t T2138;
  { T2138 = TERNARY_1(T2112, T2062, Core_control_scheduler__R49.values[0]);}
  { T2139.values[0] = TERNARY(Core_control_scheduler__reset.values[0], 0x0L, T2138);}
  val_t T2140;
  { T2140 = TERNARY_1(T2112, T2042, Core_control_scheduler__R35.values[0]);}
  { T2141.values[0] = TERNARY(Core_control_scheduler__reset.values[0], 0x0L, T2140);}
  val_t T2142;
  { T2142 = Core_control__io_dec_inst.values[0] & 0x1054L;}
  val_t T2143;
  T2143 = T2142 == 0x1010L;
  val_t T2144;
  { T2144 = Core_control__io_dec_inst.values[0] & 0x2054L;}
  val_t T2145;
  T2145 = T2144 == 0x2010L;
  val_t T2146;
  { T2146 = T2143 | T2145 << 1;}
  val_t T2147;
  { T2147 = Core_control__io_dec_inst.values[0] & 0x4054L;}
  val_t T2148;
  T2148 = T2147 == 0x4010L;
  val_t T2149;
  { T2149 = T2146 | T2148 << 2;}
  val_t T2150;
  { T2150 = Core_control__io_dec_inst.values[0] & 0x40003054L;}
  val_t T2151;
  T2151 = T2150 == 0x40001010L;
  val_t T2152;
  { T2152 = Core_control__io_dec_inst.values[0] & 0x40003034L;}
  val_t T2153;
  T2153 = T2152 == 0x40000030L;
  val_t T2154;
  { T2154 = Core_control__io_dec_inst.values[0] & 0x6054L;}
  val_t T2155;
  T2155 = T2154 == 0x2010L;
  val_t T2156;
  { T2156 = T2155 | T2153;}
  val_t T2157;
  { T2157 = T2156 | T2151;}
  { Core_control__dec_alu_type.values[0] = T2149 | T2157 << 3;}
  val_t T2158;
  { T2158 = Core_control__io_dec_inst.values[0] & 0x1000L;}
  val_t T2159;
  T2159 = T2158 == 0x1000L;
  val_t T2160;
  { T2160 = Core_control__io_dec_inst.values[0] & 0x6000L;}
  val_t T2161;
  T2161 = T2160 == 0x4000L;
  val_t T2162;
  { T2162 = T2159 | T2161 << 1;}
  val_t T2163;
  { T2163 = Core_control__io_dec_inst.values[0] & 0x2000L;}
  val_t T2164;
  T2164 = T2163 == 0x2000L;
  { Core_control__dec_br_type.values[0] = T2162 | T2164 << 2;}
  { Core_control__dec_csr_type.values[0] = T2159 | T2164 << 1;}
  { Core_control__dec_mul_type.values[0] = T2159 | T2164 << 1;}
  val_t T2165;
  { T2165 = Core_control__io_dec_inst.values[0] & 0x10L;}
  val_t T2166;
  T2166 = T2165 == 0x0L;
  { Core_control__dec_exe_rd_data_sel.values[0] = T1746 | T2166 << 1;}
  val_t T2167;
  { T2167 = T2159 | T2164 << 1;}
  val_t T2168;
  { T2168 = Core_control__io_dec_inst.values[0] & 0x4000L;}
  val_t T2169;
  T2169 = T2168 == 0x4000L;
  val_t T2170;
  { T2170 = T2167 | T2169 << 2;}
  val_t T2171;
  { T2171 = Core_control__io_dec_inst.values[0] & 0x20L;}
  val_t T2172;
  T2172 = T2171 == 0x20L;
  { Core_control__dec_mem_type.values[0] = T2170 | T2172 << 3;}
  val_t T2173;
  { T2173 = T2083;}
  T2173 = T2173 & 0x7L;
  val_t T2174;
  { T2174 = T2173 | 0x0L << 3;}
  val_t T2175;
  { T2175 = T2083;}
  T2175 = T2175 & 0xfL;
  val_t T2176;
  { T2176 = T2112 & T2103;}
  val_t T2177;
  { T2177 = TERNARY_1(T2176, T2175, T2174);}
  val_t T2178;
  { T2178 = T1949 | T1948 << 1;}
  val_t T2179;
  { T2179 = T1945 | T1939 << 1;}
  val_t T2180;
  { T2180 = T2178 | T2179 << 2;}
  val_t T2181;
  { T2181 = T1931 | T1921 << 1;}
  val_t T2182;
  { T2182 = T1893 | T1909 << 1;}
  val_t T2183;
  { T2183 = T2181 | T2182 << 2;}
  val_t T2184;
  { T2184 = T2180 | T2183 << 4;}
  val_t T2185;
  T2185 = TERNARY(T2184 != 0, 0 + priority_encode_1(T2184), 0);
  val_t T2186;
  { T2186 = T2185 | 0x0L << 3;}
  val_t T2187;
  { T2187 = TERNARY_1(T2113, T2186, T2177);}
  val_t T2188;
  { T2188 = T2187;}
  T2188 = T2188 & 0x7L;
  { Core_control_scheduler__io_thread.values[0] = T2188;}
  { T2189.values[0] = Core_control__dec_load.values[0];}
  val_t T2190;
  { T2190 = Core_control__io_dec_inst.values[0] & 0x507fL;}
  val_t T2191;
  T2191 = T2190 == 0x23L;
  val_t T2192;
  { T2192 = Core_control__io_dec_inst.values[0] & 0x607fL;}
  val_t T2193;
  T2193 = T2192 == 0x23L;
  { Core_control__dec_store.values[0] = T2193 | T2191;}
  { T2194.values[0] = Core_control__dec_store.values[0];}
  val_t T2195;
  { T2195 = Core_control__io_dec_inst.values[0] & 0x207fL;}
  val_t T2196;
  T2196 = T2195 == 0x2073L;
  val_t T2197;
  { T2197 = Core_control__io_dec_inst.values[0] & 0x107fL;}
  val_t T2198;
  T2198 = T2197 == 0x1073L;
  { Core_control__dec_csr.values[0] = T2198 | T2196;}
  { T2199.values[0] = Core_control__dec_csr.values[0];}
  val_t T2200;
  { T2200 = Core_control__io_dec_inst.values[0] & 0x8010707fL;}
  Core_control__dec_scall.values[0] = T2200 == 0x73L;
  val_t T2201;
  { T2201 = TERNARY(Core_control__dec_scall.values[0], 0x6L, 0x0L);}
  val_t T2202;
  { T2202 = Core_control__io_dec_inst.values[0] & 0x306fL;}
  val_t T2203;
  T2203 = T2202 == 0x3L;
  val_t T2204;
  { T2204 = Core_control__io_dec_inst.values[0] & 0xfc00705fL;}
  val_t T2205;
  T2205 = T2204 == 0x1013L;
  val_t T2206;
  { T2206 = Core_control__io_dec_inst.values[0] & 0x407fL;}
  val_t T2207;
  T2207 = T2206 == 0x4063L;
  val_t T2208;
  { T2208 = Core_control__io_dec_inst.values[0] & 0x306fL;}
  val_t T2209;
  T2209 = T2208 == 0x1063L;
  val_t T2210;
  { T2210 = Core_control__io_dec_inst.values[0] & 0x603fL;}
  val_t T2211;
  T2211 = T2210 == 0x23L;
  val_t T2212;
  { T2212 = Core_control__io_dec_inst.values[0] & 0x707fL;}
  Core_control__dec_ie.values[0] = T2212 == 0x705bL;
  val_t T2213;
  { T2213 = Core_control__io_dec_inst.values[0] & 0x705fL;}
  Core_control__dec_du.values[0] = T2213 == 0x700bL;
  val_t T2214;
  { T2214 = Core_control__io_dec_inst.values[0] & 0xbe00707fL;}
  val_t T2215;
  T2215 = T2214 == 0x5033L;
  val_t T2216;
  { T2216 = Core_control__io_dec_inst.values[0] & 0xbc00707fL;}
  val_t T2217;
  T2217 = T2216 == 0x5013L;
  val_t T2218;
  { T2218 = Core_control__io_dec_inst.values[0] & 0x207fL;}
  val_t T2219;
  T2219 = T2218 == 0x2013L;
  val_t T2220;
  { T2220 = Core_control__io_dec_inst.values[0] & 0x7fL;}
  val_t T2221;
  T2221 = T2220 == 0x6fL;
  val_t T2222;
  { T2222 = Core_control__io_dec_inst.values[0] & 0x707bL;}
  val_t T2223;
  T2223 = T2222 == 0x63L;
  val_t T2224;
  { T2224 = Core_control__io_dec_inst.values[0] & 0xbe00707fL;}
  val_t T2225;
  T2225 = T2224 == 0x33L;
  val_t T2226;
  { T2226 = Core_control__io_dec_inst.values[0] & 0xfc00407fL;}
  val_t T2227;
  T2227 = T2226 == 0x33L;
  val_t T2228;
  { T2228 = Core_control__io_dec_inst.values[0] & 0xfe00007fL;}
  val_t T2229;
  T2229 = T2228 == 0x33L;
  val_t T2230;
  { T2230 = Core_control__io_dec_inst.values[0] & 0x5fL;}
  val_t T2231;
  T2231 = T2230 == 0x17L;
  val_t T2232;
  { T2232 = Core_control__io_dec_inst.values[0] & 0x607fL;}
  val_t T2233;
  T2233 = T2232 == 0xfL;
  val_t T2234;
  { T2234 = Core_control__io_dec_inst.values[0] & 0x505fL;}
  val_t T2235;
  T2235 = T2234 == 0x3L;
  val_t T2236;
  { T2236 = T2235 | T283;}
  val_t T2237;
  { T2237 = T2236 | T2233;}
  val_t T2238;
  { T2238 = T2237 | T2231;}
  val_t T2239;
  { T2239 = T2238 | T2229;}
  val_t T2240;
  { T2240 = T2239 | T2227;}
  val_t T2241;
  { T2241 = T2240 | T2225;}
  val_t T2242;
  { T2242 = T2241 | T2223;}
  val_t T2243;
  { T2243 = T2242 | T2221;}
  val_t T2244;
  { T2244 = T2243 | Core_control__dec_scall.values[0];}
  val_t T2245;
  { T2245 = T2244 | T2219;}
  val_t T2246;
  { T2246 = T2245 | T2196;}
  val_t T2247;
  { T2247 = T2246 | T2217;}
  val_t T2248;
  { T2248 = T2247 | T2215;}
  val_t T2249;
  { T2249 = T2248 | Core_control__dec_du.values[0];}
  val_t T2250;
  { T2250 = T2249 | Core_control__dec_ie.values[0];}
  val_t T2251;
  { T2251 = T2250 | T2211;}
  val_t T2252;
  { T2252 = T2251 | T2209;}
  val_t T2253;
  { T2253 = T2252 | T2207;}
  val_t T2254;
  { T2254 = T2253 | T2205;}
  { Core_control__dec_legal.values[0] = T2254 | T2203;}
  val_t T2255;
  { T2255 = Core_control__dec_legal.values[0] ^ 0x1L;}
  { Core_control__dec_cause.values[0] = TERNARY(T2255, 0x2L, T2201);}
  val_t T2256;
  { T2256 = Core_control__dec_reg_cause.values[0] | 0x0L << 1;}
  { T2257.values[0] = TERNARY_1(Core_control__dec_reg_exc.values[0], T2256, Core_control__dec_cause.values[0]);}
  val_t T2258;
  T2258 = (Core_control__io_dec_inst.values[0] >> 25) & 1;
  { T2259.values[0] = Core_control__dec_ie.values[0] & T2258;}
  val_t T2260;
  T2260 = (Core_control__io_dec_inst.values[0] >> 25) & 1;
  val_t T2261;
  { T2261 = T2260 ^ 0x1L;}
  { T2262.values[0] = Core_control__dec_ie.values[0] & T2261;}
  { T2263.values[0] = 0x0L;}
  val_t T2264;
  { T2264 = Core_control__io_dec_inst.values[0] & 0x707fL;}
  val_t T2265;
  T2265 = T2264 == 0x67L;
  val_t T2266;
  { T2266 = Core_control__io_dec_inst.values[0] & 0x506fL;}
  val_t T2267;
  T2267 = T2266 == 0x3L;
  val_t T2268;
  { T2268 = T2267 | T283;}
  val_t T2269;
  { T2269 = T2268 | T2231;}
  val_t T2270;
  { T2270 = T2269 | T2229;}
  val_t T2271;
  { T2271 = T2270 | T2227;}
  val_t T2272;
  { T2272 = T2271 | T2225;}
  val_t T2273;
  { T2273 = T2272 | T2265;}
  val_t T2274;
  { T2274 = T2273 | T2221;}
  val_t T2275;
  { T2275 = T2274 | T2198;}
  val_t T2276;
  { T2276 = T2275 | T2219;}
  val_t T2277;
  { T2277 = T2276 | T2196;}
  val_t T2278;
  { T2278 = T2277 | T2217;}
  val_t T2279;
  { T2279 = T2278 | T2215;}
  val_t T2280;
  { T2280 = T2279 | T2205;}
  { Core_control__dec_rd_en.values[0] = T2280 | T2203;}
  val_t T2281;
  { T2281 = Core_control__io_dec_inst.values[0] >> 7;}
  T2281 = T2281 & 0x1fL;
  val_t T2282;
  T2282 = T2281 != 0x0L;
  { Core_control__dec_rd_write.values[0] = T2282 & Core_control__dec_rd_en.values[0];}
  { T2283.values[0] = Core_control__dec_rd_write.values[0] & Core_control__dec_reg_valid.values[0];}
  { T2284.values[0] = Core_control__exe_reg_rd_write.values[0] & Core_control__exe_reg_valid.values[0];}
  { T2285.values[0] = TERNARY(Core_control__reset.values[0], 0x0L, Core_control__exe_valid.values[0]);}
  val_t T2286;
  { T2286 = TERNARY(T2113, 0x1L, T2176);}
  { Core_control_scheduler__io_valid.values[0] = T2286;}
  { T2287.values[0] = TERNARY(Core_control__reset.values[0], 0x0L, Core_control_scheduler__io_valid.values[0]);}
  { T2288.values[0] = TERNARY(Core_control__reset.values[0], 0x0L, Core_control__next_valid.values[0]);}
  val_t T2289;
  { T2289 = Core_control__stall_count_7.values[0]-0x1L;}
  T2289 = T2289 & 0x3L;
  val_t T2290;
  T2290 = Core_control__stall_count_7.values[0] != 0x0L;
  val_t T2291;
  { T2291 = TERNARY(T2290, T2289, 0x0L);}
  val_t T2292;
  T2292 = 0x1L << Core_control__io_exe_tid.values[0];
  T2292 = T2292 & 0xffL;
  val_t T2293;
  T2293 = (T2292 >> 7) & 1;
  val_t T2294;
  { T2294 = Core_control__exe_sleep.values[0] & T2293;}
  val_t T2295;
  { T2295 = TERNARY(T2294, 0x2L, T2291);}
  val_t T2296;
  { T2296 = T295 & T2293;}
  val_t T2297;
  { T2297 = TERNARY(T2296, 0x1L, T2295);}
  val_t T2298;
  { T2298 = T870 & T2293;}
  val_t T2299;
  { T2299 = TERNARY(T2298, 0x1L, T2297);}
  { T2300.values[0] = TERNARY(Core_control__reset.values[0], 0x0L, T2299);}
  val_t T2301;
  { T2301 = Core_control__stall_count_6.values[0]-0x1L;}
  T2301 = T2301 & 0x3L;
  val_t T2302;
  T2302 = Core_control__stall_count_6.values[0] != 0x0L;
  val_t T2303;
  { T2303 = TERNARY(T2302, T2301, 0x0L);}
  val_t T2304;
  T2304 = (T2292 >> 6) & 1;
  val_t T2305;
  { T2305 = Core_control__exe_sleep.values[0] & T2304;}
  val_t T2306;
  { T2306 = TERNARY(T2305, 0x2L, T2303);}
  val_t T2307;
  { T2307 = T295 & T2304;}
  val_t T2308;
  { T2308 = TERNARY(T2307, 0x1L, T2306);}
  val_t T2309;
  { T2309 = T870 & T2304;}
  val_t T2310;
  { T2310 = TERNARY(T2309, 0x1L, T2308);}
  { T2311.values[0] = TERNARY(Core_control__reset.values[0], 0x0L, T2310);}
  val_t T2312;
  { T2312 = Core_control__stall_count_5.values[0]-0x1L;}
  T2312 = T2312 & 0x3L;
  val_t T2313;
  T2313 = Core_control__stall_count_5.values[0] != 0x0L;
  val_t T2314;
  { T2314 = TERNARY(T2313, T2312, 0x0L);}
  val_t T2315;
  T2315 = (T2292 >> 5) & 1;
  val_t T2316;
  { T2316 = Core_control__exe_sleep.values[0] & T2315;}
  val_t T2317;
  { T2317 = TERNARY(T2316, 0x2L, T2314);}
  val_t T2318;
  { T2318 = T295 & T2315;}
  val_t T2319;
  { T2319 = TERNARY(T2318, 0x1L, T2317);}
  val_t T2320;
  { T2320 = T870 & T2315;}
  val_t T2321;
  { T2321 = TERNARY(T2320, 0x1L, T2319);}
  { T2322.values[0] = TERNARY(Core_control__reset.values[0], 0x0L, T2321);}
  val_t T2323;
  { T2323 = Core_control__stall_count_4.values[0]-0x1L;}
  T2323 = T2323 & 0x3L;
  val_t T2324;
  T2324 = Core_control__stall_count_4.values[0] != 0x0L;
  val_t T2325;
  { T2325 = TERNARY(T2324, T2323, 0x0L);}
  val_t T2326;
  T2326 = (T2292 >> 4) & 1;
  val_t T2327;
  { T2327 = Core_control__exe_sleep.values[0] & T2326;}
  val_t T2328;
  { T2328 = TERNARY(T2327, 0x2L, T2325);}
  val_t T2329;
  { T2329 = T295 & T2326;}
  val_t T2330;
  { T2330 = TERNARY(T2329, 0x1L, T2328);}
  val_t T2331;
  { T2331 = T870 & T2326;}
  val_t T2332;
  { T2332 = TERNARY(T2331, 0x1L, T2330);}
  { T2333.values[0] = TERNARY(Core_control__reset.values[0], 0x0L, T2332);}
  val_t T2334;
  { T2334 = Core_control__stall_count_3.values[0]-0x1L;}
  T2334 = T2334 & 0x3L;
  val_t T2335;
  T2335 = Core_control__stall_count_3.values[0] != 0x0L;
  val_t T2336;
  { T2336 = TERNARY(T2335, T2334, 0x0L);}
  val_t T2337;
  T2337 = (T2292 >> 3) & 1;
  val_t T2338;
  { T2338 = Core_control__exe_sleep.values[0] & T2337;}
  val_t T2339;
  { T2339 = TERNARY(T2338, 0x2L, T2336);}
  val_t T2340;
  { T2340 = T295 & T2337;}
  val_t T2341;
  { T2341 = TERNARY(T2340, 0x1L, T2339);}
  val_t T2342;
  { T2342 = T870 & T2337;}
  val_t T2343;
  { T2343 = TERNARY(T2342, 0x1L, T2341);}
  { T2344.values[0] = TERNARY(Core_control__reset.values[0], 0x0L, T2343);}
  val_t T2345;
  { T2345 = Core_control__stall_count_2.values[0]-0x1L;}
  T2345 = T2345 & 0x3L;
  val_t T2346;
  T2346 = Core_control__stall_count_2.values[0] != 0x0L;
  val_t T2347;
  { T2347 = TERNARY(T2346, T2345, 0x0L);}
  val_t T2348;
  T2348 = (T2292 >> 2) & 1;
  val_t T2349;
  { T2349 = Core_control__exe_sleep.values[0] & T2348;}
  val_t T2350;
  { T2350 = TERNARY(T2349, 0x2L, T2347);}
  val_t T2351;
  { T2351 = T295 & T2348;}
  val_t T2352;
  { T2352 = TERNARY(T2351, 0x1L, T2350);}
  val_t T2353;
  { T2353 = T870 & T2348;}
  val_t T2354;
  { T2354 = TERNARY(T2353, 0x1L, T2352);}
  { T2355.values[0] = TERNARY(Core_control__reset.values[0], 0x0L, T2354);}
  val_t T2356;
  { T2356 = Core_control__stall_count_1.values[0]-0x1L;}
  T2356 = T2356 & 0x3L;
  val_t T2357;
  T2357 = Core_control__stall_count_1.values[0] != 0x0L;
  val_t T2358;
  { T2358 = TERNARY(T2357, T2356, 0x0L);}
  val_t T2359;
  T2359 = (T2292 >> 1) & 1;
  val_t T2360;
  { T2360 = Core_control__exe_sleep.values[0] & T2359;}
  val_t T2361;
  { T2361 = TERNARY(T2360, 0x2L, T2358);}
  val_t T2362;
  { T2362 = T295 & T2359;}
  val_t T2363;
  { T2363 = TERNARY(T2362, 0x1L, T2361);}
  val_t T2364;
  { T2364 = T870 & T2359;}
  val_t T2365;
  { T2365 = TERNARY(T2364, 0x1L, T2363);}
  { T2366.values[0] = TERNARY(Core_control__reset.values[0], 0x0L, T2365);}
  val_t T2367;
  { T2367 = Core_control__stall_count_0.values[0]-0x1L;}
  T2367 = T2367 & 0x3L;
  val_t T2368;
  T2368 = Core_control__stall_count_0.values[0] != 0x0L;
  val_t T2369;
  { T2369 = TERNARY(T2368, T2367, 0x0L);}
  val_t T2370;
  T2370 = (T2292 >> 0) & 1;
  val_t T2371;
  { T2371 = Core_control__exe_sleep.values[0] & T2370;}
  val_t T2372;
  { T2372 = TERNARY(T2371, 0x2L, T2369);}
  val_t T2373;
  { T2373 = T295 & T2370;}
  val_t T2374;
  { T2374 = TERNARY(T2373, 0x1L, T2372);}
  val_t T2375;
  { T2375 = T870 & T2370;}
  val_t T2376;
  { T2376 = TERNARY(T2375, 0x1L, T2374);}
  { T2377.values[0] = TERNARY(Core_control__reset.values[0], 0x0L, T2376);}
  val_t T2378;
  T2378 = Core_control__io_if_tid.values[0] == Core_control__io_exe_tid.values[0];
  val_t T2379;
  { T2379 = TERNARY(Core_control__exe_brjmp.values[0], 0x1L, Core_control__exe_exception.values[0]);}
  val_t T2380;
  { T2380 = TERNARY(Core_control__exe_sleep.values[0], 0x1L, T2379);}
  { Core_control__exe_flush.values[0] = T2380;}
  val_t T2381;
  { T2381 = Core_control__exe_flush.values[0] & T2378;}
  val_t T2382;
  { T2382 = T2381 ^ 0x1L;}
  { Core_control__if_valid.values[0] = Core_control__if_pre_valid.values[0] & T2382;}
  { T2383.values[0] = TERNARY(Core_control__reset.values[0], 0x0L, Core_control__if_valid.values[0]);}
  { T2384.values[0] = Core_control__dec_du.values[0];}
  { Core_control__dec_jump.values[0] = T2265 | T2221;}
  { T2385.values[0] = Core_control__dec_jump.values[0];}
  val_t T2386;
  { T2386 = Core_control__io_dec_inst.values[0] & 0x207fL;}
  val_t T2387;
  T2387 = T2386 == 0x63L;
  { Core_control__dec_branch.values[0] = T2387 | T2207;}
  { T2388.values[0] = Core_control__dec_branch.values[0];}
  val_t T2389;
  T2389 = Core_control__io_dec_tid.values[0] == Core_control__io_exe_tid.values[0];
  val_t T2390;
  { T2390 = Core_control__exe_flush.values[0] & T2389;}
  val_t T2391;
  { T2391 = T2390 ^ 0x1L;}
  { Core_control__dec_valid.values[0] = Core_control__dec_reg_valid.values[0] & T2391;}
  { T2392.values[0] = TERNARY(Core_control__reset.values[0], 0x0L, Core_control__dec_valid.values[0]);}
  val_t T2393;
  { T2393 = Core_datapath__if_reg_pc.values[0];}
  T2393 = T2393 & 0x3L;
  val_t T2394;
  T2394 = T2393 != 0x0L;
  { Core_datapath__io_control_if_exc_misaligned.values[0] = T2394;}
  { Core_control__io_if_exc_misaligned.values[0] = Core_datapath__io_control_if_exc_misaligned.values[0];}
  { Core_control__dec_exc.values[0] = T2255 | Core_control__dec_scall.values[0];}
  { T2395.values[0] = Core_control__dec_reg_exc.values[0] | Core_control__dec_exc.values[0];}
  { val_t __r = this->__rand_val(); Core_imem__io_bus_data_out.values[0] = __r;}
  Core_imem__io_bus_data_out.values[0] = Core_imem__io_bus_data_out.values[0] & 0xffffffffL;
  { Core__io_imem_data_out.values[0] = Core_imem__io_bus_data_out.values[0];}
  { val_t __r = this->__rand_val(); Core_imem__io_bus_ready.values[0] = __r;}
  Core_imem__io_bus_ready.values[0] = Core_imem__io_bus_ready.values[0] & 0x1L;
  { Core__io_imem_ready.values[0] = Core_imem__io_bus_ready.values[0];}
  { val_t __r = this->__rand_val(); Core_dmem__io_bus_data_out.values[0] = __r;}
  Core_dmem__io_bus_data_out.values[0] = Core_dmem__io_bus_data_out.values[0] & 0xffffffffL;
  { Core__io_dmem_data_out.values[0] = Core_dmem__io_bus_data_out.values[0];}
  val_t T2396;
  { T2396 = Core_datapath_loadstore__io_addr.values[0];}
  T2396 = T2396 & 0x7fL;
  val_t T2397;
  { T2397 = T2396 | Core_datapath_loadstore__io_thread.values[0] << 7;}
  { Core_datapath_loadstore__io_bus_addr.values[0] = T2397;}
  { Core_datapath__io_bus_addr.values[0] = Core_datapath_loadstore__io_bus_addr.values[0];}
  { Core__io_bus_addr.values[0] = Core_datapath__io_bus_addr.values[0];}
  val_t T2398;
  { T2398 = Core_datapath_loadstore__io_load.values[0] | Core_datapath_loadstore__io_store.values[0];}
  val_t T2399;
  { T2399 = Core_datapath_loadstore__bus_op.values[0] & T2398;}
  { Core_datapath_loadstore__io_bus_enable.values[0] = T2399;}
  { Core_datapath__io_bus_enable.values[0] = Core_datapath_loadstore__io_bus_enable.values[0];}
  { Core__io_bus_enable.values[0] = Core_datapath__io_bus_enable.values[0];}
  val_t T2400;
  { T2400 = Core_datapath_loadstore__bus_op.values[0] & Core_datapath_loadstore__write.values[0];}
  { Core_datapath_loadstore__io_bus_write.values[0] = T2400;}
  { Core_datapath__io_bus_write.values[0] = Core_datapath_loadstore__io_bus_write.values[0];}
  { Core__io_bus_write.values[0] = Core_datapath__io_bus_write.values[0];}
  { Core_datapath_loadstore__io_bus_data_in.values[0] = Core_datapath_loadstore__io_data_in.values[0];}
  { Core_datapath__io_bus_data_in.values[0] = Core_datapath_loadstore__io_bus_data_in.values[0];}
  { Core__io_bus_data_in.values[0] = Core_datapath__io_bus_data_in.values[0];}
  { Core_datapath_csr__io_host_to_host.values[0] = Core_datapath_csr__reg_to_host.values[0];}
  { Core_datapath__io_host_to_host.values[0] = Core_datapath_csr__io_host_to_host.values[0];}
  { Core__io_host_to_host.values[0] = Core_datapath__io_host_to_host.values[0];}
  { Core_datapath_csr__io_gpio_out_3.values[0] = Core_datapath_csr__reg_gpos_3.values[0];}
  { Core_datapath__io_gpio_out_3.values[0] = Core_datapath_csr__io_gpio_out_3.values[0];}
  { Core__io_gpio_out_3.values[0] = Core_datapath__io_gpio_out_3.values[0];}
  { Core_datapath_csr__io_gpio_out_2.values[0] = Core_datapath_csr__reg_gpos_2.values[0];}
  { Core_datapath__io_gpio_out_2.values[0] = Core_datapath_csr__io_gpio_out_2.values[0];}
  { Core__io_gpio_out_2.values[0] = Core_datapath__io_gpio_out_2.values[0];}
  { Core_datapath_csr__io_gpio_out_1.values[0] = Core_datapath_csr__reg_gpos_1.values[0];}
  { Core_datapath__io_gpio_out_1.values[0] = Core_datapath_csr__io_gpio_out_1.values[0];}
  { Core__io_gpio_out_1.values[0] = Core_datapath__io_gpio_out_1.values[0];}
  { Core_datapath_csr__io_gpio_out_0.values[0] = Core_datapath_csr__reg_gpos_0.values[0];}
  { Core_datapath__io_gpio_out_0.values[0] = Core_datapath_csr__io_gpio_out_0.values[0];}
  { Core__io_gpio_out_0.values[0] = Core_datapath__io_gpio_out_0.values[0];}
}


void Core_t::clock_hi ( dat_t<1> reset ) {
  { if (Core_dmem__io_core_enable.values[0]) Core_dmem__dspm.put(Core_dmem__io_core_addr.values[0], 0, T257.values[0]);}
  dat_t<32> Core_dmem__dout__shadow = T260;
  dat_t<32> Core_imem__dout_r__shadow = T554;
  { if (T558.values[0]) Core_imem__ispm.put(Core_imem__io_core_rw_addr.values[0], 0, Core_imem__io_core_rw_data_in.values[0]);}
  dat_t<32> Core_imem__R0__shadow = T562;
  dat_t<1> Core_datapath_csr__reg_msip_1__shadow = T838;
  dat_t<1> Core_datapath_csr__reg_mtie_7__shadow = T846;
  dat_t<2> Core_datapath_csr__reg_prv1_7__shadow = T847;
  dat_t<1> Core_datapath_csr__reg_ie1_7__shadow = T848;
  dat_t<2> Core_datapath_csr__reg_prv_7__shadow = T849;
  dat_t<1> Core_datapath_csr__reg_ie_7__shadow = T872;
  dat_t<1> Core_datapath_csr__reg_msip_7__shadow = T892;
  dat_t<1> Core_datapath_csr__reg_mtie_6__shadow = T898;
  dat_t<2> Core_datapath_csr__reg_prv1_6__shadow = T899;
  dat_t<1> Core_datapath_csr__reg_ie1_6__shadow = T900;
  dat_t<2> Core_datapath_csr__reg_prv_6__shadow = T901;
  dat_t<1> Core_datapath_csr__reg_ie_6__shadow = T906;
  dat_t<1> Core_datapath_csr__reg_msip_6__shadow = T926;
  dat_t<1> Core_datapath_csr__reg_mtie_5__shadow = T932;
  dat_t<2> Core_datapath_csr__reg_prv1_5__shadow = T933;
  dat_t<1> Core_datapath_csr__reg_ie1_5__shadow = T934;
  dat_t<2> Core_datapath_csr__reg_prv_5__shadow = T935;
  dat_t<1> Core_datapath_csr__reg_ie_5__shadow = T940;
  dat_t<1> Core_datapath_csr__reg_msip_5__shadow = T960;
  dat_t<1> Core_datapath_csr__reg_mtie_4__shadow = T966;
  dat_t<2> Core_datapath_csr__reg_prv1_4__shadow = T967;
  dat_t<1> Core_datapath_csr__reg_ie1_4__shadow = T968;
  dat_t<2> Core_datapath_csr__reg_prv_4__shadow = T969;
  dat_t<1> Core_datapath_csr__reg_ie_4__shadow = T974;
  dat_t<1> Core_datapath_csr__reg_msip_4__shadow = T994;
  dat_t<1> Core_datapath_csr__reg_mtie_3__shadow = T1000;
  dat_t<2> Core_datapath_csr__reg_prv1_3__shadow = T1001;
  dat_t<1> Core_datapath_csr__reg_ie1_3__shadow = T1002;
  dat_t<2> Core_datapath_csr__reg_prv_3__shadow = T1003;
  dat_t<1> Core_datapath_csr__reg_ie_3__shadow = T1008;
  dat_t<1> Core_datapath_csr__reg_msip_3__shadow = T1028;
  dat_t<1> Core_datapath_csr__reg_mtie_2__shadow = T1034;
  dat_t<2> Core_datapath_csr__reg_prv1_2__shadow = T1035;
  dat_t<1> Core_datapath_csr__reg_ie1_2__shadow = T1036;
  dat_t<2> Core_datapath_csr__reg_prv_2__shadow = T1037;
  dat_t<1> Core_datapath_csr__reg_ie_2__shadow = T1042;
  dat_t<1> Core_datapath_csr__reg_msip_2__shadow = T1062;
  dat_t<1> Core_datapath_csr__reg_mtie_1__shadow = T1068;
  dat_t<2> Core_datapath_csr__reg_prv1_1__shadow = T1069;
  dat_t<1> Core_datapath_csr__reg_ie1_1__shadow = T1070;
  dat_t<2> Core_datapath_csr__reg_prv_1__shadow = T1071;
  dat_t<1> Core_datapath_csr__reg_ie_1__shadow = T1076;
  dat_t<1> Core_datapath_csr__reg_mtie_0__shadow = T1082;
  dat_t<2> Core_datapath_csr__reg_prv1_0__shadow = T1083;
  dat_t<1> Core_datapath_csr__reg_ie1_0__shadow = T1084;
  dat_t<2> Core_datapath_csr__reg_prv_0__shadow = T1085;
  dat_t<1> Core_datapath_csr__reg_ie_0__shadow = T1090;
  dat_t<4> Core_datapath_csr__reg_dmem_protection_7__shadow = T1095;
  dat_t<4> Core_datapath_csr__reg_dmem_protection_6__shadow = T1098;
  dat_t<4> Core_datapath_csr__reg_dmem_protection_5__shadow = T1101;
  dat_t<4> Core_datapath_csr__reg_dmem_protection_4__shadow = T1104;
  dat_t<4> Core_datapath_csr__reg_dmem_protection_3__shadow = T1107;
  dat_t<4> Core_datapath_csr__reg_dmem_protection_2__shadow = T1110;
  dat_t<4> Core_datapath_csr__reg_dmem_protection_1__shadow = T1113;
  dat_t<4> Core_datapath_csr__reg_dmem_protection_0__shadow = T1116;
  dat_t<4> Core_datapath_csr__reg_imem_protection_7__shadow = T1121;
  dat_t<4> Core_datapath_csr__reg_imem_protection_6__shadow = T1124;
  dat_t<4> Core_datapath_csr__reg_imem_protection_5__shadow = T1127;
  dat_t<4> Core_datapath_csr__reg_imem_protection_4__shadow = T1130;
  dat_t<4> Core_datapath_csr__reg_imem_protection_3__shadow = T1133;
  dat_t<4> Core_datapath_csr__reg_imem_protection_2__shadow = T1136;
  dat_t<4> Core_datapath_csr__reg_imem_protection_1__shadow = T1139;
  dat_t<4> Core_datapath_csr__reg_imem_protection_0__shadow = T1142;
  dat_t<4> Core_datapath_csr__reg_gpo_protection_3__shadow = T1147;
  dat_t<2> Core_datapath_csr__reg_gpos_3__shadow = T1159;
  dat_t<4> Core_datapath_csr__reg_gpo_protection_2__shadow = T1162;
  dat_t<2> Core_datapath_csr__reg_gpos_2__shadow = T1174;
  dat_t<4> Core_datapath_csr__reg_gpo_protection_1__shadow = T1177;
  dat_t<2> Core_datapath_csr__reg_gpos_1__shadow = T1189;
  dat_t<4> Core_datapath_csr__reg_gpo_protection_0__shadow = T1192;
  dat_t<2> Core_datapath_csr__reg_gpos_0__shadow = T1204;
  dat_t<1> Core_datapath_csr__reg_gpis_3__shadow = Core_datapath_csr__io_gpio_in_3;
  dat_t<1> Core_datapath_csr__reg_gpis_2__shadow = Core_datapath_csr__io_gpio_in_2;
  dat_t<1> Core_datapath_csr__reg_gpis_1__shadow = Core_datapath_csr__io_gpio_in_1;
  dat_t<1> Core_datapath_csr__reg_gpis_0__shadow = Core_datapath_csr__io_gpio_in_0;
  dat_t<32> Core_datapath_csr__reg_to_host__shadow = T1210;
  dat_t<36> Core_datapath_csr__reg_sup0_7__shadow = T1216;
  dat_t<36> Core_datapath_csr__reg_sup0_6__shadow = T1219;
  dat_t<36> Core_datapath_csr__reg_sup0_5__shadow = T1222;
  dat_t<36> Core_datapath_csr__reg_sup0_4__shadow = T1225;
  dat_t<36> Core_datapath_csr__reg_sup0_3__shadow = T1228;
  dat_t<36> Core_datapath_csr__reg_sup0_2__shadow = T1231;
  dat_t<36> Core_datapath_csr__reg_sup0_1__shadow = T1234;
  dat_t<36> Core_datapath_csr__reg_sup0_0__shadow = T1237;
  dat_t<5> Core_datapath_csr__reg_causes_7__shadow = T1249;
  dat_t<5> Core_datapath_csr__reg_causes_6__shadow = T1252;
  dat_t<5> Core_datapath_csr__reg_causes_5__shadow = T1255;
  dat_t<5> Core_datapath_csr__reg_causes_4__shadow = T1258;
  dat_t<5> Core_datapath_csr__reg_causes_3__shadow = T1261;
  dat_t<5> Core_datapath_csr__reg_causes_2__shadow = T1264;
  dat_t<5> Core_datapath_csr__reg_causes_1__shadow = T1267;
  dat_t<5> Core_datapath_csr__reg_causes_0__shadow = T1270;
  dat_t<32> Core_datapath_csr__reg_epcs_7__shadow = T1274;
  dat_t<32> Core_datapath_csr__reg_epcs_6__shadow = T1277;
  dat_t<32> Core_datapath_csr__reg_epcs_5__shadow = T1280;
  dat_t<32> Core_datapath_csr__reg_epcs_4__shadow = T1283;
  dat_t<32> Core_datapath_csr__reg_epcs_3__shadow = T1286;
  dat_t<32> Core_datapath_csr__reg_epcs_2__shadow = T1289;
  dat_t<32> Core_datapath_csr__reg_epcs_1__shadow = T1292;
  dat_t<32> Core_datapath_csr__reg_epcs_0__shadow = T1295;
  dat_t<36> Core_datapath_csr__reg_evecs_7__shadow = T1301;
  dat_t<36> Core_datapath_csr__reg_evecs_6__shadow = T1304;
  dat_t<36> Core_datapath_csr__reg_evecs_5__shadow = T1307;
  dat_t<36> Core_datapath_csr__reg_evecs_4__shadow = T1310;
  dat_t<36> Core_datapath_csr__reg_evecs_3__shadow = T1313;
  dat_t<36> Core_datapath_csr__reg_evecs_2__shadow = T1316;
  dat_t<36> Core_datapath_csr__reg_evecs_1__shadow = T1319;
  dat_t<36> Core_datapath_csr__reg_evecs_0__shadow = T1322;
  dat_t<2> Core_datapath_csr__reg_tmodes_1__shadow = T1352;
  dat_t<2> Core_datapath_csr__reg_tmodes_7__shadow = T1363;
  dat_t<2> Core_datapath_csr__reg_tmodes_6__shadow = T1374;
  dat_t<2> Core_datapath_csr__reg_tmodes_5__shadow = T1385;
  dat_t<2> Core_datapath_csr__reg_tmodes_4__shadow = T1396;
  dat_t<2> Core_datapath_csr__reg_tmodes_3__shadow = T1407;
  dat_t<2> Core_datapath_csr__reg_timer_7__shadow = T1427;
  dat_t<2> Core_datapath_csr__reg_timer_6__shadow = T1442;
  dat_t<2> Core_datapath_csr__reg_timer_5__shadow = T1457;
  dat_t<2> Core_datapath_csr__reg_timer_4__shadow = T1472;
  dat_t<2> Core_datapath_csr__reg_timer_3__shadow = T1487;
  dat_t<2> Core_datapath_csr__reg_timer_1__shadow = T1502;
  dat_t<2> Core_datapath_csr__reg_timer_0__shadow = T1519;
  dat_t<32> Core_datapath_csr__reg_compare_7__shadow = T1524;
  dat_t<32> Core_datapath_csr__reg_compare_6__shadow = T1527;
  dat_t<32> Core_datapath_csr__reg_compare_5__shadow = T1530;
  dat_t<32> Core_datapath_csr__reg_compare_4__shadow = T1533;
  dat_t<32> Core_datapath_csr__reg_compare_3__shadow = T1536;
  dat_t<32> Core_datapath_csr__reg_compare_1__shadow = T1539;
  dat_t<32> Core_datapath_csr__reg_compare_0__shadow = T1542;
  dat_t<2> Core_datapath_csr__reg_timer_2__shadow = T1559;
  dat_t<64> Core_datapath_csr__reg_time__shadow = T1561;
  dat_t<32> Core_datapath_csr__reg_compare_2__shadow = T1564;
  dat_t<2> Core_datapath_csr__reg_tmodes_2__shadow = T1573;
  dat_t<2> Core_datapath_csr__reg_tmodes_0__shadow = T1582;
  dat_t<4> Core_datapath_csr__reg_slots_7__shadow = T1587;
  dat_t<4> Core_datapath_csr__reg_slots_6__shadow = T1590;
  dat_t<4> Core_datapath_csr__reg_slots_5__shadow = T1593;
  dat_t<4> Core_datapath_csr__reg_slots_4__shadow = T1596;
  dat_t<4> Core_datapath_csr__reg_slots_3__shadow = T1599;
  dat_t<4> Core_datapath_csr__reg_slots_2__shadow = T1602;
  dat_t<4> Core_datapath_csr__reg_slots_1__shadow = T1605;
  dat_t<4> Core_datapath_csr__reg_slots_0__shadow = T1608;
  dat_t<1> Core_datapath_csr__reg_msip_0__shadow = T1628;
  dat_t<1> Core_datapath_loadstore__dmem_op_reg__shadow = Core_datapath_loadstore__dmem_op;
  dat_t<4> Core_datapath_loadstore__mem_type_reg__shadow = Core_datapath_loadstore__io_mem_type;
  dat_t<2> Core_datapath_loadstore__addr_byte_reg__shadow = T1629;
  dat_t<1> Core_datapath_loadstore__imem_op_reg__shadow = Core_datapath_loadstore__imem_op;
  dat_t<32> Core_datapath_Multiplier__R0__shadow = Core_datapath_Multiplier__result;
  dat_t<32> Core_datapath_regfile__dout1__shadow = T1658;
  { if (Core_datapath_regfile__io_rd_enable.values[0]) Core_datapath_regfile__regfile.put(T1689.values[0], 0, Core_datapath_regfile__io_rd_data.values[0]);}
  dat_t<32> Core_datapath_regfile__dout2__shadow = T1694;
  dat_t<32> Core_datapath__exe_reg_rs1_data__shadow = Core_datapath__dec_rs1_data;
  dat_t<3> Core_datapath__wb_reg_tid__shadow = Core_datapath__mem_reg_tid;
  dat_t<5> Core_datapath__wb_reg_rd_addr__shadow = Core_datapath__mem_reg_rd_addr;
  dat_t<5> Core_datapath__exe_reg_rd_addr__shadow = T1722;
  dat_t<5> Core_datapath__mem_reg_rd_addr__shadow = Core_datapath__exe_reg_rd_addr;
  dat_t<32> Core_datapath__exe_reg_rs2_data__shadow = Core_datapath__dec_rs2_data;
  dat_t<12> Core_datapath__exe_reg_csr_addr__shadow = T1739;
  dat_t<32> Core_datapath__exe_csr_data__shadow = Core_datapath__dec_csr_data;
  dat_t<32> Core_datapath__if_reg_pcs_7__shadow = T1813;
  dat_t<32> Core_datapath__if_reg_pcs_6__shadow = T1814;
  dat_t<32> Core_datapath__if_reg_pcs_5__shadow = T1815;
  dat_t<32> Core_datapath__if_reg_pcs_4__shadow = T1816;
  dat_t<32> Core_datapath__if_reg_pcs_3__shadow = T1817;
  dat_t<32> Core_datapath__if_reg_pcs_2__shadow = T1818;
  dat_t<32> Core_datapath__if_reg_pcs_1__shadow = T1819;
  dat_t<3> Core_datapath__mem_reg_tid__shadow = Core_datapath__exe_reg_tid;
  dat_t<3> Core_datapath__exe_reg_tid__shadow = Core_datapath__dec_reg_tid;
  dat_t<32> Core_datapath__exe_reg_op1__shadow = Core_datapath__dec_op1;
  dat_t<32> Core_datapath__dec_reg_pc4__shadow = Core_datapath__if_pc_plus4;
  dat_t<32> Core_datapath__exe_reg_pc4__shadow = Core_datapath__dec_reg_pc4;
  dat_t<32> Core_datapath__mem_reg_rd_data__shadow = Core_datapath__exe_rd_data;
  dat_t<32> Core_datapath__wb_reg_rd_data__shadow = Core_datapath__mem_rd_data;
  dat_t<32> Core_datapath__dec_reg_inst__shadow = Core_datapath__io_imem_r_data_out;
  dat_t<32> Core_datapath__exe_reg_op2__shadow = Core_datapath__dec_op2;
  dat_t<32> Core_datapath__if_reg_pcs_0__shadow = T1837;
  dat_t<32> Core_datapath__if_reg_pc__shadow = Core_datapath__next_pc;
  dat_t<32> Core_datapath__dec_reg_pc__shadow = Core_datapath__if_reg_pc;
  dat_t<32> Core_datapath__exe_reg_pc__shadow = Core_datapath__dec_reg_pc;
  dat_t<3> Core_datapath__if_reg_tid__shadow = Core_datapath__io_control_next_tid;
  dat_t<3> Core_datapath__dec_reg_tid__shadow = Core_datapath__if_reg_tid;
  dat_t<1> Core_control_scheduler__R273__shadow = T2115;
  dat_t<1> Core_control_scheduler__R248__shadow = T2117;
  dat_t<1> Core_control_scheduler__R233__shadow = T2119;
  dat_t<1> Core_control_scheduler__R227__shadow = T2121;
  dat_t<1> Core_control_scheduler__R222__shadow = T2123;
  dat_t<1> Core_control_scheduler__R210__shadow = T2125;
  dat_t<1> Core_control_scheduler__R196__shadow = T2127;
  dat_t<1> Core_control_scheduler__R112__shadow = T2129;
  dat_t<1> Core_control_scheduler__R87__shadow = T2131;
  dat_t<1> Core_control_scheduler__R72__shadow = T2133;
  dat_t<1> Core_control_scheduler__R66__shadow = T2135;
  dat_t<1> Core_control_scheduler__R61__shadow = T2137;
  dat_t<1> Core_control_scheduler__R49__shadow = T2139;
  dat_t<1> Core_control_scheduler__R35__shadow = T2141;
  dat_t<4> Core_control__exe_reg_alu_type__shadow = Core_control__dec_alu_type;
  dat_t<3> Core_control__exe_reg_br_type__shadow = Core_control__dec_br_type;
  dat_t<2> Core_control__exe_reg_csr_type__shadow = Core_control__dec_csr_type;
  dat_t<2> Core_control__exe_reg_mul_type__shadow = Core_control__dec_mul_type;
  dat_t<2> Core_control__exe_reg_rd_data_sel__shadow = Core_control__dec_exe_rd_data_sel;
  dat_t<4> Core_control__exe_reg_mem_type__shadow = Core_control__dec_mem_type;
  dat_t<2> Core_control__R364__shadow = Core_control__dec_mem_rd_data_sel;
  dat_t<2> Core_control__mem_reg_rd_data_sel__shadow = Core_control__R364;
  dat_t<1> Core_control__mem_reg_exception__shadow = Core_control__exe_exception;
  dat_t<3> Core_control__R284__shadow = Core_control_scheduler__io_thread;
  dat_t<1> Core_control__wb_reg_rd_write__shadow = Core_control__mem_rd_write;
  dat_t<1> Core_control__exe_reg_load__shadow = T2189;
  dat_t<1> Core_control__exe_reg_store__shadow = T2194;
  dat_t<1> Core_control__exe_reg_csr_write__shadow = T2199;
  dat_t<1> Core_control__dec_reg_cause__shadow = 0x0;
  dat_t<3> Core_control__exe_reg_cause__shadow = T2257;
  dat_t<1> Core_control__R238__shadow = T2259;
  dat_t<1> Core_control__R231__shadow = T2262;
  dat_t<1> Core_control__exe_reg_sret__shadow = T2263;
  dat_t<1> Core_control__exe_reg_rd_write__shadow = T2283;
  dat_t<1> Core_control__mem_reg_rd_write__shadow = T2284;
  dat_t<1> Core_control__mem_reg_valid__shadow = T2285;
  dat_t<1> Core_control__R206__shadow = T2287;
  dat_t<1> Core_control__if_reg_valid__shadow = T2288;
  dat_t<2> Core_control__stall_count_7__shadow = T2300;
  dat_t<2> Core_control__stall_count_6__shadow = T2311;
  dat_t<2> Core_control__stall_count_5__shadow = T2322;
  dat_t<2> Core_control__stall_count_4__shadow = T2333;
  dat_t<2> Core_control__stall_count_3__shadow = T2344;
  dat_t<2> Core_control__stall_count_2__shadow = T2355;
  dat_t<2> Core_control__stall_count_1__shadow = T2366;
  dat_t<2> Core_control__stall_count_0__shadow = T2377;
  dat_t<1> Core_control__dec_reg_valid__shadow = T2383;
  dat_t<1> Core_control__R84__shadow = T2384;
  dat_t<1> Core_control__exe_reg_jump__shadow = T2385;
  dat_t<1> Core_control__exe_reg_branch__shadow = T2388;
  dat_t<1> Core_control__exe_reg_valid__shadow = T2392;
  dat_t<1> Core_control__dec_reg_exc__shadow = Core_control__io_if_exc_misaligned;
  dat_t<1> Core_control__exe_reg_exc__shadow = T2395;
  Core_dmem__dout = T260;
  Core_imem__dout_r = T554;
  Core_imem__R0 = T562;
  Core_datapath_csr__reg_msip_1 = T838;
  Core_datapath_csr__reg_mtie_7 = T846;
  Core_datapath_csr__reg_prv1_7 = T847;
  Core_datapath_csr__reg_ie1_7 = T848;
  Core_datapath_csr__reg_prv_7 = T849;
  Core_datapath_csr__reg_ie_7 = T872;
  Core_datapath_csr__reg_msip_7 = T892;
  Core_datapath_csr__reg_mtie_6 = T898;
  Core_datapath_csr__reg_prv1_6 = T899;
  Core_datapath_csr__reg_ie1_6 = T900;
  Core_datapath_csr__reg_prv_6 = T901;
  Core_datapath_csr__reg_ie_6 = T906;
  Core_datapath_csr__reg_msip_6 = T926;
  Core_datapath_csr__reg_mtie_5 = T932;
  Core_datapath_csr__reg_prv1_5 = T933;
  Core_datapath_csr__reg_ie1_5 = T934;
  Core_datapath_csr__reg_prv_5 = T935;
  Core_datapath_csr__reg_ie_5 = T940;
  Core_datapath_csr__reg_msip_5 = T960;
  Core_datapath_csr__reg_mtie_4 = T966;
  Core_datapath_csr__reg_prv1_4 = T967;
  Core_datapath_csr__reg_ie1_4 = T968;
  Core_datapath_csr__reg_prv_4 = T969;
  Core_datapath_csr__reg_ie_4 = T974;
  Core_datapath_csr__reg_msip_4 = T994;
  Core_datapath_csr__reg_mtie_3 = T1000;
  Core_datapath_csr__reg_prv1_3 = T1001;
  Core_datapath_csr__reg_ie1_3 = T1002;
  Core_datapath_csr__reg_prv_3 = T1003;
  Core_datapath_csr__reg_ie_3 = T1008;
  Core_datapath_csr__reg_msip_3 = T1028;
  Core_datapath_csr__reg_mtie_2 = T1034;
  Core_datapath_csr__reg_prv1_2 = T1035;
  Core_datapath_csr__reg_ie1_2 = T1036;
  Core_datapath_csr__reg_prv_2 = T1037;
  Core_datapath_csr__reg_ie_2 = T1042;
  Core_datapath_csr__reg_msip_2 = T1062;
  Core_datapath_csr__reg_mtie_1 = T1068;
  Core_datapath_csr__reg_prv1_1 = T1069;
  Core_datapath_csr__reg_ie1_1 = T1070;
  Core_datapath_csr__reg_prv_1 = T1071;
  Core_datapath_csr__reg_ie_1 = T1076;
  Core_datapath_csr__reg_mtie_0 = T1082;
  Core_datapath_csr__reg_prv1_0 = T1083;
  Core_datapath_csr__reg_ie1_0 = T1084;
  Core_datapath_csr__reg_prv_0 = T1085;
  Core_datapath_csr__reg_ie_0 = T1090;
  Core_datapath_csr__reg_dmem_protection_7 = T1095;
  Core_datapath_csr__reg_dmem_protection_6 = T1098;
  Core_datapath_csr__reg_dmem_protection_5 = T1101;
  Core_datapath_csr__reg_dmem_protection_4 = T1104;
  Core_datapath_csr__reg_dmem_protection_3 = T1107;
  Core_datapath_csr__reg_dmem_protection_2 = T1110;
  Core_datapath_csr__reg_dmem_protection_1 = T1113;
  Core_datapath_csr__reg_dmem_protection_0 = T1116;
  Core_datapath_csr__reg_imem_protection_7 = T1121;
  Core_datapath_csr__reg_imem_protection_6 = T1124;
  Core_datapath_csr__reg_imem_protection_5 = T1127;
  Core_datapath_csr__reg_imem_protection_4 = T1130;
  Core_datapath_csr__reg_imem_protection_3 = T1133;
  Core_datapath_csr__reg_imem_protection_2 = T1136;
  Core_datapath_csr__reg_imem_protection_1 = T1139;
  Core_datapath_csr__reg_imem_protection_0 = T1142;
  Core_datapath_csr__reg_gpo_protection_3 = T1147;
  Core_datapath_csr__reg_gpos_3 = T1159;
  Core_datapath_csr__reg_gpo_protection_2 = T1162;
  Core_datapath_csr__reg_gpos_2 = T1174;
  Core_datapath_csr__reg_gpo_protection_1 = T1177;
  Core_datapath_csr__reg_gpos_1 = T1189;
  Core_datapath_csr__reg_gpo_protection_0 = T1192;
  Core_datapath_csr__reg_gpos_0 = T1204;
  Core_datapath_csr__reg_gpis_3 = Core_datapath_csr__io_gpio_in_3;
  Core_datapath_csr__reg_gpis_2 = Core_datapath_csr__io_gpio_in_2;
  Core_datapath_csr__reg_gpis_1 = Core_datapath_csr__io_gpio_in_1;
  Core_datapath_csr__reg_gpis_0 = Core_datapath_csr__io_gpio_in_0;
  Core_datapath_csr__reg_to_host = T1210;
  Core_datapath_csr__reg_sup0_7 = T1216;
  Core_datapath_csr__reg_sup0_6 = T1219;
  Core_datapath_csr__reg_sup0_5 = T1222;
  Core_datapath_csr__reg_sup0_4 = T1225;
  Core_datapath_csr__reg_sup0_3 = T1228;
  Core_datapath_csr__reg_sup0_2 = T1231;
  Core_datapath_csr__reg_sup0_1 = T1234;
  Core_datapath_csr__reg_sup0_0 = T1237;
  Core_datapath_csr__reg_causes_7 = T1249;
  Core_datapath_csr__reg_causes_6 = T1252;
  Core_datapath_csr__reg_causes_5 = T1255;
  Core_datapath_csr__reg_causes_4 = T1258;
  Core_datapath_csr__reg_causes_3 = T1261;
  Core_datapath_csr__reg_causes_2 = T1264;
  Core_datapath_csr__reg_causes_1 = T1267;
  Core_datapath_csr__reg_causes_0 = T1270;
  Core_datapath_csr__reg_epcs_7 = T1274;
  Core_datapath_csr__reg_epcs_6 = T1277;
  Core_datapath_csr__reg_epcs_5 = T1280;
  Core_datapath_csr__reg_epcs_4 = T1283;
  Core_datapath_csr__reg_epcs_3 = T1286;
  Core_datapath_csr__reg_epcs_2 = T1289;
  Core_datapath_csr__reg_epcs_1 = T1292;
  Core_datapath_csr__reg_epcs_0 = T1295;
  Core_datapath_csr__reg_evecs_7 = T1301;
  Core_datapath_csr__reg_evecs_6 = T1304;
  Core_datapath_csr__reg_evecs_5 = T1307;
  Core_datapath_csr__reg_evecs_4 = T1310;
  Core_datapath_csr__reg_evecs_3 = T1313;
  Core_datapath_csr__reg_evecs_2 = T1316;
  Core_datapath_csr__reg_evecs_1 = T1319;
  Core_datapath_csr__reg_evecs_0 = T1322;
  Core_datapath_csr__reg_tmodes_1 = T1352;
  Core_datapath_csr__reg_tmodes_7 = T1363;
  Core_datapath_csr__reg_tmodes_6 = T1374;
  Core_datapath_csr__reg_tmodes_5 = T1385;
  Core_datapath_csr__reg_tmodes_4 = T1396;
  Core_datapath_csr__reg_tmodes_3 = T1407;
  Core_datapath_csr__reg_timer_7 = T1427;
  Core_datapath_csr__reg_timer_6 = T1442;
  Core_datapath_csr__reg_timer_5 = T1457;
  Core_datapath_csr__reg_timer_4 = T1472;
  Core_datapath_csr__reg_timer_3 = T1487;
  Core_datapath_csr__reg_timer_1 = T1502;
  Core_datapath_csr__reg_timer_0 = T1519;
  Core_datapath_csr__reg_compare_7 = T1524;
  Core_datapath_csr__reg_compare_6 = T1527;
  Core_datapath_csr__reg_compare_5 = T1530;
  Core_datapath_csr__reg_compare_4 = T1533;
  Core_datapath_csr__reg_compare_3 = T1536;
  Core_datapath_csr__reg_compare_1 = T1539;
  Core_datapath_csr__reg_compare_0 = T1542;
  Core_datapath_csr__reg_timer_2 = T1559;
  Core_datapath_csr__reg_time = T1561;
  Core_datapath_csr__reg_compare_2 = T1564;
  Core_datapath_csr__reg_tmodes_2 = T1573;
  Core_datapath_csr__reg_tmodes_0 = T1582;
  Core_datapath_csr__reg_slots_7 = T1587;
  Core_datapath_csr__reg_slots_6 = T1590;
  Core_datapath_csr__reg_slots_5 = T1593;
  Core_datapath_csr__reg_slots_4 = T1596;
  Core_datapath_csr__reg_slots_3 = T1599;
  Core_datapath_csr__reg_slots_2 = T1602;
  Core_datapath_csr__reg_slots_1 = T1605;
  Core_datapath_csr__reg_slots_0 = T1608;
  Core_datapath_csr__reg_msip_0 = T1628;
  Core_datapath_loadstore__dmem_op_reg = Core_datapath_loadstore__dmem_op;
  Core_datapath_loadstore__mem_type_reg = Core_datapath_loadstore__io_mem_type;
  Core_datapath_loadstore__addr_byte_reg = T1629;
  Core_datapath_loadstore__imem_op_reg = Core_datapath_loadstore__imem_op;
  Core_datapath_Multiplier__R0 = Core_datapath_Multiplier__result;
  Core_datapath_regfile__dout1 = T1658;
  Core_datapath_regfile__dout2 = T1694;
  Core_datapath__exe_reg_rs1_data = Core_datapath__dec_rs1_data;
  Core_datapath__wb_reg_tid = Core_datapath__wb_reg_tid__shadow;
  Core_datapath__wb_reg_rd_addr = Core_datapath__wb_reg_rd_addr__shadow;
  Core_datapath__exe_reg_rd_addr = T1722;
  Core_datapath__mem_reg_rd_addr = Core_datapath__mem_reg_rd_addr__shadow;
  Core_datapath__exe_reg_rs2_data = Core_datapath__dec_rs2_data;
  Core_datapath__exe_reg_csr_addr = T1739;
  Core_datapath__exe_csr_data = Core_datapath__dec_csr_data;
  Core_datapath__if_reg_pcs_7 = T1813;
  Core_datapath__if_reg_pcs_6 = T1814;
  Core_datapath__if_reg_pcs_5 = T1815;
  Core_datapath__if_reg_pcs_4 = T1816;
  Core_datapath__if_reg_pcs_3 = T1817;
  Core_datapath__if_reg_pcs_2 = T1818;
  Core_datapath__if_reg_pcs_1 = T1819;
  Core_datapath__mem_reg_tid = Core_datapath__mem_reg_tid__shadow;
  Core_datapath__exe_reg_tid = Core_datapath__exe_reg_tid__shadow;
  Core_datapath__exe_reg_op1 = Core_datapath__dec_op1;
  Core_datapath__dec_reg_pc4 = Core_datapath__if_pc_plus4;
  Core_datapath__exe_reg_pc4 = Core_datapath__exe_reg_pc4__shadow;
  Core_datapath__mem_reg_rd_data = Core_datapath__exe_rd_data;
  Core_datapath__wb_reg_rd_data = Core_datapath__mem_rd_data;
  Core_datapath__dec_reg_inst = Core_datapath__io_imem_r_data_out;
  Core_datapath__exe_reg_op2 = Core_datapath__dec_op2;
  Core_datapath__if_reg_pcs_0 = T1837;
  Core_datapath__if_reg_pc = Core_datapath__next_pc;
  Core_datapath__dec_reg_pc = Core_datapath__dec_reg_pc__shadow;
  Core_datapath__exe_reg_pc = Core_datapath__exe_reg_pc__shadow;
  Core_datapath__if_reg_tid = Core_datapath__io_control_next_tid;
  Core_datapath__dec_reg_tid = Core_datapath__dec_reg_tid__shadow;
  Core_control_scheduler__R273 = T2115;
  Core_control_scheduler__R248 = T2117;
  Core_control_scheduler__R233 = T2119;
  Core_control_scheduler__R227 = T2121;
  Core_control_scheduler__R222 = T2123;
  Core_control_scheduler__R210 = T2125;
  Core_control_scheduler__R196 = T2127;
  Core_control_scheduler__R112 = T2129;
  Core_control_scheduler__R87 = T2131;
  Core_control_scheduler__R72 = T2133;
  Core_control_scheduler__R66 = T2135;
  Core_control_scheduler__R61 = T2137;
  Core_control_scheduler__R49 = T2139;
  Core_control_scheduler__R35 = T2141;
  Core_control__exe_reg_alu_type = Core_control__dec_alu_type;
  Core_control__exe_reg_br_type = Core_control__dec_br_type;
  Core_control__exe_reg_csr_type = Core_control__dec_csr_type;
  Core_control__exe_reg_mul_type = Core_control__dec_mul_type;
  Core_control__exe_reg_rd_data_sel = Core_control__dec_exe_rd_data_sel;
  Core_control__exe_reg_mem_type = Core_control__dec_mem_type;
  Core_control__R364 = Core_control__dec_mem_rd_data_sel;
  Core_control__mem_reg_rd_data_sel = Core_control__mem_reg_rd_data_sel__shadow;
  Core_control__mem_reg_exception = Core_control__exe_exception;
  Core_control__R284 = Core_control_scheduler__io_thread;
  Core_control__wb_reg_rd_write = Core_control__mem_rd_write;
  Core_control__exe_reg_load = T2189;
  Core_control__exe_reg_store = T2194;
  Core_control__exe_reg_csr_write = T2199;
  Core_control__dec_reg_cause = 0x0;
  Core_control__exe_reg_cause = T2257;
  Core_control__R238 = T2259;
  Core_control__R231 = T2262;
  Core_control__exe_reg_sret = T2263;
  Core_control__exe_reg_rd_write = T2283;
  Core_control__mem_reg_rd_write = T2284;
  Core_control__mem_reg_valid = T2285;
  Core_control__R206 = T2287;
  Core_control__if_reg_valid = T2288;
  Core_control__stall_count_7 = T2300;
  Core_control__stall_count_6 = T2311;
  Core_control__stall_count_5 = T2322;
  Core_control__stall_count_4 = T2333;
  Core_control__stall_count_3 = T2344;
  Core_control__stall_count_2 = T2355;
  Core_control__stall_count_1 = T2366;
  Core_control__stall_count_0 = T2377;
  Core_control__dec_reg_valid = T2383;
  Core_control__R84 = T2384;
  Core_control__exe_reg_jump = T2385;
  Core_control__exe_reg_branch = T2388;
  Core_control__exe_reg_valid = T2392;
  Core_control__dec_reg_exc = Core_control__io_if_exc_misaligned;
  Core_control__exe_reg_exc = T2395;
}


void Core_api_t::init_mapping_table (  ) {
  dat_table.clear();
  mem_table.clear();
  Core_t* mod_typed = dynamic_cast<Core_t*>(module);
  assert(mod_typed);
  dat_table["Core.datapath.def_exe_alu_result"] = new dat_api<32>(&mod_typed->Core_datapath__def_exe_alu_result, "Core.datapath.def_exe_alu_result", "");
  dat_table["Core.datapath.exe_alu_shift"] = new dat_api<5>(&mod_typed->Core_datapath__exe_alu_shift, "Core.datapath.exe_alu_shift", "");
  dat_table["Core.control.io_exe_alu_type"] = new dat_api<4>(&mod_typed->Core_control__io_exe_alu_type, "Core.control.io_exe_alu_type", "");
  dat_table["Core.datapath.io_control_exe_alu_type"] = new dat_api<4>(&mod_typed->Core_datapath__io_control_exe_alu_type, "Core.datapath.io_control_exe_alu_type", "");
  dat_table["Core.datapath.exe_alu_result"] = new dat_api<32>(&mod_typed->Core_datapath__exe_alu_result, "Core.datapath.exe_alu_result", "");
  dat_table["Core.datapath.exe_address"] = new dat_api<32>(&mod_typed->Core_datapath__exe_address, "Core.datapath.exe_address", "");
  dat_table["Core.datapath.loadstore.io_addr"] = new dat_api<32>(&mod_typed->Core_datapath_loadstore__io_addr, "Core.datapath.loadstore.io_addr", "");
  dat_table["Core.datapath.loadstore.io_dmem_addr"] = new dat_api<12>(&mod_typed->Core_datapath_loadstore__io_dmem_addr, "Core.datapath.loadstore.io_dmem_addr", "");
  dat_table["Core.datapath.io_dmem_addr"] = new dat_api<12>(&mod_typed->Core_datapath__io_dmem_addr, "Core.datapath.io_dmem_addr", "");
  dat_table["Core.dmem.io_core_addr"] = new dat_api<12>(&mod_typed->Core_dmem__io_core_addr, "Core.dmem.io_core_addr", "");
  dat_table["Core.datapath.loadstore.io_data_in"] = new dat_api<32>(&mod_typed->Core_datapath_loadstore__io_data_in, "Core.datapath.loadstore.io_data_in", "");
  dat_table["Core.control.io_exe_mem_type"] = new dat_api<4>(&mod_typed->Core_control__io_exe_mem_type, "Core.control.io_exe_mem_type", "");
  dat_table["Core.datapath.io_control_exe_mem_type"] = new dat_api<4>(&mod_typed->Core_datapath__io_control_exe_mem_type, "Core.datapath.io_control_exe_mem_type", "");
  dat_table["Core.datapath.loadstore.io_mem_type"] = new dat_api<4>(&mod_typed->Core_datapath_loadstore__io_mem_type, "Core.datapath.loadstore.io_mem_type", "");
  dat_table["Core.datapath.loadstore.io_dmem_data_in"] = new dat_api<32>(&mod_typed->Core_datapath_loadstore__io_dmem_data_in, "Core.datapath.loadstore.io_dmem_data_in", "");
  dat_table["Core.datapath.io_dmem_data_in"] = new dat_api<32>(&mod_typed->Core_datapath__io_dmem_data_in, "Core.datapath.io_dmem_data_in", "");
  dat_table["Core.dmem.io_core_data_in"] = new dat_api<32>(&mod_typed->Core_dmem__io_core_data_in, "Core.dmem.io_core_data_in", "");
  dat_table["Core.datapath.csr.io_rw_thread"] = new dat_api<3>(&mod_typed->Core_datapath_csr__io_rw_thread, "Core.datapath.csr.io_rw_thread", "");
  dat_table["Core.datapath.csr.int_ext"] = new dat_api<1>(&mod_typed->Core_datapath_csr__int_ext, "Core.datapath.csr.int_ext", "");
  dat_table["Core.datapath.csr.io_int_ext"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_int_ext, "Core.datapath.csr.io_int_ext", "");
  dat_table["Core.datapath.io_control_exe_int_ext"] = new dat_api<1>(&mod_typed->Core_datapath__io_control_exe_int_ext, "Core.datapath.io_control_exe_int_ext", "");
  dat_table["Core.control.io_exe_int_ext"] = new dat_api<1>(&mod_typed->Core_control__io_exe_int_ext, "Core.control.io_exe_int_ext", "");
  dat_table["Core.datapath.csr.expired_0"] = new dat_api<1>(&mod_typed->Core_datapath_csr__expired_0, "Core.datapath.csr.expired_0", "");
  dat_table["Core.datapath.csr.expired_1"] = new dat_api<1>(&mod_typed->Core_datapath_csr__expired_1, "Core.datapath.csr.expired_1", "");
  dat_table["Core.datapath.csr.expired_2"] = new dat_api<1>(&mod_typed->Core_datapath_csr__expired_2, "Core.datapath.csr.expired_2", "");
  dat_table["Core.datapath.csr.expired_3"] = new dat_api<1>(&mod_typed->Core_datapath_csr__expired_3, "Core.datapath.csr.expired_3", "");
  dat_table["Core.datapath.csr.expired_4"] = new dat_api<1>(&mod_typed->Core_datapath_csr__expired_4, "Core.datapath.csr.expired_4", "");
  dat_table["Core.datapath.csr.expired_5"] = new dat_api<1>(&mod_typed->Core_datapath_csr__expired_5, "Core.datapath.csr.expired_5", "");
  dat_table["Core.datapath.csr.expired_6"] = new dat_api<1>(&mod_typed->Core_datapath_csr__expired_6, "Core.datapath.csr.expired_6", "");
  dat_table["Core.datapath.csr.expired_7"] = new dat_api<1>(&mod_typed->Core_datapath_csr__expired_7, "Core.datapath.csr.expired_7", "");
  dat_table["Core.control.io_exe_valid"] = new dat_api<1>(&mod_typed->Core_control__io_exe_valid, "Core.control.io_exe_valid", "");
  dat_table["Core.datapath.io_control_exe_valid"] = new dat_api<1>(&mod_typed->Core_datapath__io_control_exe_valid, "Core.datapath.io_control_exe_valid", "");
  dat_table["Core.datapath.csr.io_rw_valid"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_rw_valid, "Core.datapath.csr.io_rw_valid", "");
  dat_table["Core.datapath.csr.int_expire"] = new dat_api<1>(&mod_typed->Core_datapath_csr__int_expire, "Core.datapath.csr.int_expire", "");
  dat_table["Core.datapath.csr.io_int_expire"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_int_expire, "Core.datapath.csr.io_int_expire", "");
  dat_table["Core.datapath.io_control_exe_int_expire"] = new dat_api<1>(&mod_typed->Core_datapath__io_control_exe_int_expire, "Core.datapath.io_control_exe_int_expire", "");
  dat_table["Core.control.io_exe_int_expire"] = new dat_api<1>(&mod_typed->Core_control__io_exe_int_expire, "Core.control.io_exe_int_expire", "");
  dat_table["Core.datapath.csr.exc_expire"] = new dat_api<1>(&mod_typed->Core_datapath_csr__exc_expire, "Core.datapath.csr.exc_expire", "");
  dat_table["Core.datapath.csr.io_exc_expire"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_exc_expire, "Core.datapath.csr.io_exc_expire", "");
  dat_table["Core.datapath.io_control_exe_exc_expire"] = new dat_api<1>(&mod_typed->Core_datapath__io_control_exe_exc_expire, "Core.datapath.io_control_exe_exc_expire", "");
  dat_table["Core.control.io_exe_exc_expire"] = new dat_api<1>(&mod_typed->Core_control__io_exe_exc_expire, "Core.control.io_exe_exc_expire", "");
  dat_table["Core.control.exe_any_exc"] = new dat_api<1>(&mod_typed->Core_control__exe_any_exc, "Core.control.exe_any_exc", "");
  dat_table["Core.control.exe_kill"] = new dat_api<1>(&mod_typed->Core_control__exe_kill, "Core.control.exe_kill", "");
  dat_table["Core.control.io_exe_kill"] = new dat_api<1>(&mod_typed->Core_control__io_exe_kill, "Core.control.io_exe_kill", "");
  dat_table["Core.datapath.io_control_exe_kill"] = new dat_api<1>(&mod_typed->Core_datapath__io_control_exe_kill, "Core.datapath.io_control_exe_kill", "");
  dat_table["Core.datapath.loadstore.io_kill"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__io_kill, "Core.datapath.loadstore.io_kill", "");
  dat_table["Core.datapath.loadstore.store_fault"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__store_fault, "Core.datapath.loadstore.store_fault", "");
  dat_table["Core.control.exe_store"] = new dat_api<1>(&mod_typed->Core_control__exe_store, "Core.control.exe_store", "");
  dat_table["Core.control.io_exe_store"] = new dat_api<1>(&mod_typed->Core_control__io_exe_store, "Core.control.io_exe_store", "");
  dat_table["Core.datapath.io_control_exe_store"] = new dat_api<1>(&mod_typed->Core_datapath__io_control_exe_store, "Core.datapath.io_control_exe_store", "");
  dat_table["Core.datapath.loadstore.io_store"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__io_store, "Core.datapath.loadstore.io_store", "");
  dat_table["Core.datapath.loadstore.store_misaligned"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__store_misaligned, "Core.datapath.loadstore.store_misaligned", "");
  dat_table["Core.datapath.loadstore.bus_op"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__bus_op, "Core.datapath.loadstore.bus_op", "");
  dat_table["Core.datapath.csr.io_imem_protection_0"] = new dat_api<4>(&mod_typed->Core_datapath_csr__io_imem_protection_0, "Core.datapath.csr.io_imem_protection_0", "");
  dat_table["Core.datapath.loadstore.io_imem_protection_0"] = new dat_api<4>(&mod_typed->Core_datapath_loadstore__io_imem_protection_0, "Core.datapath.loadstore.io_imem_protection_0", "");
  dat_table["Core.datapath.csr.io_imem_protection_1"] = new dat_api<4>(&mod_typed->Core_datapath_csr__io_imem_protection_1, "Core.datapath.csr.io_imem_protection_1", "");
  dat_table["Core.datapath.loadstore.io_imem_protection_1"] = new dat_api<4>(&mod_typed->Core_datapath_loadstore__io_imem_protection_1, "Core.datapath.loadstore.io_imem_protection_1", "");
  dat_table["Core.datapath.csr.io_imem_protection_2"] = new dat_api<4>(&mod_typed->Core_datapath_csr__io_imem_protection_2, "Core.datapath.csr.io_imem_protection_2", "");
  dat_table["Core.datapath.loadstore.io_imem_protection_2"] = new dat_api<4>(&mod_typed->Core_datapath_loadstore__io_imem_protection_2, "Core.datapath.loadstore.io_imem_protection_2", "");
  dat_table["Core.datapath.csr.io_imem_protection_3"] = new dat_api<4>(&mod_typed->Core_datapath_csr__io_imem_protection_3, "Core.datapath.csr.io_imem_protection_3", "");
  dat_table["Core.datapath.loadstore.io_imem_protection_3"] = new dat_api<4>(&mod_typed->Core_datapath_loadstore__io_imem_protection_3, "Core.datapath.loadstore.io_imem_protection_3", "");
  dat_table["Core.datapath.csr.io_imem_protection_4"] = new dat_api<4>(&mod_typed->Core_datapath_csr__io_imem_protection_4, "Core.datapath.csr.io_imem_protection_4", "");
  dat_table["Core.datapath.loadstore.io_imem_protection_4"] = new dat_api<4>(&mod_typed->Core_datapath_loadstore__io_imem_protection_4, "Core.datapath.loadstore.io_imem_protection_4", "");
  dat_table["Core.datapath.csr.io_imem_protection_5"] = new dat_api<4>(&mod_typed->Core_datapath_csr__io_imem_protection_5, "Core.datapath.csr.io_imem_protection_5", "");
  dat_table["Core.datapath.loadstore.io_imem_protection_5"] = new dat_api<4>(&mod_typed->Core_datapath_loadstore__io_imem_protection_5, "Core.datapath.loadstore.io_imem_protection_5", "");
  dat_table["Core.datapath.csr.io_imem_protection_6"] = new dat_api<4>(&mod_typed->Core_datapath_csr__io_imem_protection_6, "Core.datapath.csr.io_imem_protection_6", "");
  dat_table["Core.datapath.loadstore.io_imem_protection_6"] = new dat_api<4>(&mod_typed->Core_datapath_loadstore__io_imem_protection_6, "Core.datapath.loadstore.io_imem_protection_6", "");
  dat_table["Core.datapath.csr.io_imem_protection_7"] = new dat_api<4>(&mod_typed->Core_datapath_csr__io_imem_protection_7, "Core.datapath.csr.io_imem_protection_7", "");
  dat_table["Core.datapath.loadstore.io_imem_protection_7"] = new dat_api<4>(&mod_typed->Core_datapath_loadstore__io_imem_protection_7, "Core.datapath.loadstore.io_imem_protection_7", "");
  dat_table["Core.datapath.loadstore.io_thread"] = new dat_api<3>(&mod_typed->Core_datapath_loadstore__io_thread, "Core.datapath.loadstore.io_thread", "");
  dat_table["Core.datapath.loadstore.imem_op"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__imem_op, "Core.datapath.loadstore.imem_op", "");
  dat_table["Core.datapath.csr.io_dmem_protection_0"] = new dat_api<4>(&mod_typed->Core_datapath_csr__io_dmem_protection_0, "Core.datapath.csr.io_dmem_protection_0", "");
  dat_table["Core.datapath.loadstore.io_dmem_protection_0"] = new dat_api<4>(&mod_typed->Core_datapath_loadstore__io_dmem_protection_0, "Core.datapath.loadstore.io_dmem_protection_0", "");
  dat_table["Core.datapath.csr.io_dmem_protection_1"] = new dat_api<4>(&mod_typed->Core_datapath_csr__io_dmem_protection_1, "Core.datapath.csr.io_dmem_protection_1", "");
  dat_table["Core.datapath.loadstore.io_dmem_protection_1"] = new dat_api<4>(&mod_typed->Core_datapath_loadstore__io_dmem_protection_1, "Core.datapath.loadstore.io_dmem_protection_1", "");
  dat_table["Core.datapath.csr.io_dmem_protection_2"] = new dat_api<4>(&mod_typed->Core_datapath_csr__io_dmem_protection_2, "Core.datapath.csr.io_dmem_protection_2", "");
  dat_table["Core.datapath.loadstore.io_dmem_protection_2"] = new dat_api<4>(&mod_typed->Core_datapath_loadstore__io_dmem_protection_2, "Core.datapath.loadstore.io_dmem_protection_2", "");
  dat_table["Core.datapath.csr.io_dmem_protection_3"] = new dat_api<4>(&mod_typed->Core_datapath_csr__io_dmem_protection_3, "Core.datapath.csr.io_dmem_protection_3", "");
  dat_table["Core.datapath.loadstore.io_dmem_protection_3"] = new dat_api<4>(&mod_typed->Core_datapath_loadstore__io_dmem_protection_3, "Core.datapath.loadstore.io_dmem_protection_3", "");
  dat_table["Core.datapath.csr.io_dmem_protection_4"] = new dat_api<4>(&mod_typed->Core_datapath_csr__io_dmem_protection_4, "Core.datapath.csr.io_dmem_protection_4", "");
  dat_table["Core.datapath.loadstore.io_dmem_protection_4"] = new dat_api<4>(&mod_typed->Core_datapath_loadstore__io_dmem_protection_4, "Core.datapath.loadstore.io_dmem_protection_4", "");
  dat_table["Core.datapath.csr.io_dmem_protection_5"] = new dat_api<4>(&mod_typed->Core_datapath_csr__io_dmem_protection_5, "Core.datapath.csr.io_dmem_protection_5", "");
  dat_table["Core.datapath.loadstore.io_dmem_protection_5"] = new dat_api<4>(&mod_typed->Core_datapath_loadstore__io_dmem_protection_5, "Core.datapath.loadstore.io_dmem_protection_5", "");
  dat_table["Core.datapath.csr.io_dmem_protection_6"] = new dat_api<4>(&mod_typed->Core_datapath_csr__io_dmem_protection_6, "Core.datapath.csr.io_dmem_protection_6", "");
  dat_table["Core.datapath.loadstore.io_dmem_protection_6"] = new dat_api<4>(&mod_typed->Core_datapath_loadstore__io_dmem_protection_6, "Core.datapath.loadstore.io_dmem_protection_6", "");
  dat_table["Core.datapath.csr.io_dmem_protection_7"] = new dat_api<4>(&mod_typed->Core_datapath_csr__io_dmem_protection_7, "Core.datapath.csr.io_dmem_protection_7", "");
  dat_table["Core.datapath.loadstore.io_dmem_protection_7"] = new dat_api<4>(&mod_typed->Core_datapath_loadstore__io_dmem_protection_7, "Core.datapath.loadstore.io_dmem_protection_7", "");
  dat_table["Core.datapath.loadstore.dmem_op"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__dmem_op, "Core.datapath.loadstore.dmem_op", "");
  dat_table["Core.datapath.loadstore.permission"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__permission, "Core.datapath.loadstore.permission", "");
  dat_table["Core.datapath.loadstore.write"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__write, "Core.datapath.loadstore.write", "");
  dat_table["Core.datapath.loadstore.io_dmem_byte_write_0"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__io_dmem_byte_write_0, "Core.datapath.loadstore.io_dmem_byte_write_0", "");
  dat_table["Core.datapath.io_dmem_byte_write_0"] = new dat_api<1>(&mod_typed->Core_datapath__io_dmem_byte_write_0, "Core.datapath.io_dmem_byte_write_0", "");
  dat_table["Core.dmem.io_core_byte_write_0"] = new dat_api<1>(&mod_typed->Core_dmem__io_core_byte_write_0, "Core.dmem.io_core_byte_write_0", "");
  dat_table["Core.datapath.loadstore.io_dmem_byte_write_1"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__io_dmem_byte_write_1, "Core.datapath.loadstore.io_dmem_byte_write_1", "");
  dat_table["Core.datapath.io_dmem_byte_write_1"] = new dat_api<1>(&mod_typed->Core_datapath__io_dmem_byte_write_1, "Core.datapath.io_dmem_byte_write_1", "");
  dat_table["Core.dmem.io_core_byte_write_1"] = new dat_api<1>(&mod_typed->Core_dmem__io_core_byte_write_1, "Core.dmem.io_core_byte_write_1", "");
  dat_table["Core.datapath.loadstore.io_dmem_byte_write_2"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__io_dmem_byte_write_2, "Core.datapath.loadstore.io_dmem_byte_write_2", "");
  dat_table["Core.datapath.io_dmem_byte_write_2"] = new dat_api<1>(&mod_typed->Core_datapath__io_dmem_byte_write_2, "Core.datapath.io_dmem_byte_write_2", "");
  dat_table["Core.dmem.io_core_byte_write_2"] = new dat_api<1>(&mod_typed->Core_dmem__io_core_byte_write_2, "Core.dmem.io_core_byte_write_2", "");
  dat_table["Core.datapath.loadstore.io_dmem_byte_write_3"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__io_dmem_byte_write_3, "Core.datapath.loadstore.io_dmem_byte_write_3", "");
  dat_table["Core.datapath.io_dmem_byte_write_3"] = new dat_api<1>(&mod_typed->Core_datapath__io_dmem_byte_write_3, "Core.datapath.io_dmem_byte_write_3", "");
  dat_table["Core.dmem.io_core_byte_write_3"] = new dat_api<1>(&mod_typed->Core_dmem__io_core_byte_write_3, "Core.dmem.io_core_byte_write_3", "");
  dat_table["Core.control.exe_load"] = new dat_api<1>(&mod_typed->Core_control__exe_load, "Core.control.exe_load", "");
  dat_table["Core.control.io_exe_load"] = new dat_api<1>(&mod_typed->Core_control__io_exe_load, "Core.control.io_exe_load", "");
  dat_table["Core.datapath.io_control_exe_load"] = new dat_api<1>(&mod_typed->Core_datapath__io_control_exe_load, "Core.datapath.io_control_exe_load", "");
  dat_table["Core.datapath.loadstore.io_load"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__io_load, "Core.datapath.loadstore.io_load", "");
  dat_table["Core.datapath.loadstore.io_dmem_enable"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__io_dmem_enable, "Core.datapath.loadstore.io_dmem_enable", "");
  dat_table["Core.datapath.io_dmem_enable"] = new dat_api<1>(&mod_typed->Core_datapath__io_dmem_enable, "Core.datapath.io_dmem_enable", "");
  dat_table["Core.dmem.io_core_enable"] = new dat_api<1>(&mod_typed->Core_dmem__io_core_enable, "Core.dmem.io_core_enable", "");
  mem_table["Core.dmem.dspm"] = new mem_api<32, 4096>(&mod_typed->Core_dmem__dspm, "Core.dmem.dspm", "");
  dat_table["Core.dmem.dout"] = new dat_api<32>(&mod_typed->Core_dmem__dout, "Core.dmem.dout", "");
  dat_table["Core.datapath.if_pc_plus4"] = new dat_api<32>(&mod_typed->Core_datapath__if_pc_plus4, "Core.datapath.if_pc_plus4", "");
  dat_table["Core.datapath.io_control_if_tid"] = new dat_api<3>(&mod_typed->Core_datapath__io_control_if_tid, "Core.datapath.io_control_if_tid", "");
  dat_table["Core.control.io_if_tid"] = new dat_api<3>(&mod_typed->Core_control__io_if_tid, "Core.control.io_if_tid", "");
  dat_table["Core.datapath.io_control_dec_tid"] = new dat_api<3>(&mod_typed->Core_datapath__io_control_dec_tid, "Core.datapath.io_control_dec_tid", "");
  dat_table["Core.control.io_dec_tid"] = new dat_api<3>(&mod_typed->Core_control__io_dec_tid, "Core.control.io_dec_tid", "");
  dat_table["Core.datapath.io_control_dec_inst"] = new dat_api<32>(&mod_typed->Core_datapath__io_control_dec_inst, "Core.datapath.io_control_dec_inst", "");
  dat_table["Core.control.io_dec_inst"] = new dat_api<32>(&mod_typed->Core_control__io_dec_inst, "Core.control.io_dec_inst", "");
  dat_table["Core.control.dec_load"] = new dat_api<1>(&mod_typed->Core_control__dec_load, "Core.control.dec_load", "");
  dat_table["Core.control.dec_mem_rd_data_sel"] = new dat_api<2>(&mod_typed->Core_control__dec_mem_rd_data_sel, "Core.control.dec_mem_rd_data_sel", "");
  dat_table["Core.control.dec_fence_i"] = new dat_api<1>(&mod_typed->Core_control__dec_fence_i, "Core.control.dec_fence_i", "");
  dat_table["Core.control.dec_stall"] = new dat_api<1>(&mod_typed->Core_control__dec_stall, "Core.control.dec_stall", "");
  dat_table["Core.control.if_pre_valid"] = new dat_api<1>(&mod_typed->Core_control__if_pre_valid, "Core.control.if_pre_valid", "");
  dat_table["Core.datapath.io_control_exe_tid"] = new dat_api<3>(&mod_typed->Core_datapath__io_control_exe_tid, "Core.datapath.io_control_exe_tid", "");
  dat_table["Core.control.io_exe_tid"] = new dat_api<3>(&mod_typed->Core_control__io_exe_tid, "Core.control.io_exe_tid", "");
  dat_table["Core.datapath.csr.io_expire"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_expire, "Core.datapath.csr.io_expire", "");
  dat_table["Core.datapath.io_control_exe_expire"] = new dat_api<1>(&mod_typed->Core_datapath__io_control_exe_expire, "Core.datapath.io_control_exe_expire", "");
  dat_table["Core.control.io_exe_expire"] = new dat_api<1>(&mod_typed->Core_control__io_exe_expire, "Core.control.io_exe_expire", "");
  dat_table["Core.control.exe_du"] = new dat_api<1>(&mod_typed->Core_control__exe_du, "Core.control.exe_du", "");
  dat_table["Core.datapath.exe_ltu"] = new dat_api<1>(&mod_typed->Core_datapath__exe_ltu, "Core.datapath.exe_ltu", "");
  dat_table["Core.control.io_exe_br_type"] = new dat_api<3>(&mod_typed->Core_control__io_exe_br_type, "Core.control.io_exe_br_type", "");
  dat_table["Core.datapath.io_control_exe_br_type"] = new dat_api<3>(&mod_typed->Core_datapath__io_control_exe_br_type, "Core.datapath.io_control_exe_br_type", "");
  dat_table["Core.datapath.exe_lt"] = new dat_api<1>(&mod_typed->Core_datapath__exe_lt, "Core.datapath.exe_lt", "");
  dat_table["Core.datapath.exe_eq"] = new dat_api<1>(&mod_typed->Core_datapath__exe_eq, "Core.datapath.exe_eq", "");
  dat_table["Core.datapath.exe_br_cond"] = new dat_api<1>(&mod_typed->Core_datapath__exe_br_cond, "Core.datapath.exe_br_cond", "");
  dat_table["Core.datapath.io_control_exe_br_cond"] = new dat_api<1>(&mod_typed->Core_datapath__io_control_exe_br_cond, "Core.datapath.io_control_exe_br_cond", "");
  dat_table["Core.control.io_exe_br_cond"] = new dat_api<1>(&mod_typed->Core_control__io_exe_br_cond, "Core.control.io_exe_br_cond", "");
  dat_table["Core.control.exe_brjmp"] = new dat_api<1>(&mod_typed->Core_control__exe_brjmp, "Core.control.exe_brjmp", "");
  dat_table["Core.datapath.io_control_mem_tid"] = new dat_api<3>(&mod_typed->Core_datapath__io_control_mem_tid, "Core.datapath.io_control_mem_tid", "");
  dat_table["Core.control.io_mem_tid"] = new dat_api<3>(&mod_typed->Core_control__io_mem_tid, "Core.control.io_mem_tid", "");
  dat_table["Core.control.next_pc_sel_0"] = new dat_api<2>(&mod_typed->Core_control__next_pc_sel_0, "Core.control.next_pc_sel_0", "");
  dat_table["Core.control.io_next_pc_sel_0"] = new dat_api<2>(&mod_typed->Core_control__io_next_pc_sel_0, "Core.control.io_next_pc_sel_0", "");
  dat_table["Core.datapath.io_control_next_pc_sel_0"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_next_pc_sel_0, "Core.datapath.io_control_next_pc_sel_0", "");
  dat_table["Core.control.next_pc_sel_1"] = new dat_api<2>(&mod_typed->Core_control__next_pc_sel_1, "Core.control.next_pc_sel_1", "");
  dat_table["Core.control.io_next_pc_sel_1"] = new dat_api<2>(&mod_typed->Core_control__io_next_pc_sel_1, "Core.control.io_next_pc_sel_1", "");
  dat_table["Core.datapath.io_control_next_pc_sel_1"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_next_pc_sel_1, "Core.datapath.io_control_next_pc_sel_1", "");
  dat_table["Core.control.next_pc_sel_2"] = new dat_api<2>(&mod_typed->Core_control__next_pc_sel_2, "Core.control.next_pc_sel_2", "");
  dat_table["Core.control.io_next_pc_sel_2"] = new dat_api<2>(&mod_typed->Core_control__io_next_pc_sel_2, "Core.control.io_next_pc_sel_2", "");
  dat_table["Core.datapath.io_control_next_pc_sel_2"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_next_pc_sel_2, "Core.datapath.io_control_next_pc_sel_2", "");
  dat_table["Core.control.next_pc_sel_3"] = new dat_api<2>(&mod_typed->Core_control__next_pc_sel_3, "Core.control.next_pc_sel_3", "");
  dat_table["Core.control.io_next_pc_sel_3"] = new dat_api<2>(&mod_typed->Core_control__io_next_pc_sel_3, "Core.control.io_next_pc_sel_3", "");
  dat_table["Core.datapath.io_control_next_pc_sel_3"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_next_pc_sel_3, "Core.datapath.io_control_next_pc_sel_3", "");
  dat_table["Core.control.next_pc_sel_4"] = new dat_api<2>(&mod_typed->Core_control__next_pc_sel_4, "Core.control.next_pc_sel_4", "");
  dat_table["Core.control.io_next_pc_sel_4"] = new dat_api<2>(&mod_typed->Core_control__io_next_pc_sel_4, "Core.control.io_next_pc_sel_4", "");
  dat_table["Core.datapath.io_control_next_pc_sel_4"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_next_pc_sel_4, "Core.datapath.io_control_next_pc_sel_4", "");
  dat_table["Core.control.next_pc_sel_5"] = new dat_api<2>(&mod_typed->Core_control__next_pc_sel_5, "Core.control.next_pc_sel_5", "");
  dat_table["Core.control.io_next_pc_sel_5"] = new dat_api<2>(&mod_typed->Core_control__io_next_pc_sel_5, "Core.control.io_next_pc_sel_5", "");
  dat_table["Core.datapath.io_control_next_pc_sel_5"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_next_pc_sel_5, "Core.datapath.io_control_next_pc_sel_5", "");
  dat_table["Core.control.next_pc_sel_6"] = new dat_api<2>(&mod_typed->Core_control__next_pc_sel_6, "Core.control.next_pc_sel_6", "");
  dat_table["Core.control.io_next_pc_sel_6"] = new dat_api<2>(&mod_typed->Core_control__io_next_pc_sel_6, "Core.control.io_next_pc_sel_6", "");
  dat_table["Core.datapath.io_control_next_pc_sel_6"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_next_pc_sel_6, "Core.datapath.io_control_next_pc_sel_6", "");
  dat_table["Core.control.next_pc_sel_7"] = new dat_api<2>(&mod_typed->Core_control__next_pc_sel_7, "Core.control.next_pc_sel_7", "");
  dat_table["Core.control.io_next_pc_sel_7"] = new dat_api<2>(&mod_typed->Core_control__io_next_pc_sel_7, "Core.control.io_next_pc_sel_7", "");
  dat_table["Core.datapath.io_control_next_pc_sel_7"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_next_pc_sel_7, "Core.datapath.io_control_next_pc_sel_7", "");
  dat_table["Core.datapath.csr.io_evecs_0"] = new dat_api<32>(&mod_typed->Core_datapath_csr__io_evecs_0, "Core.datapath.csr.io_evecs_0", "");
  dat_table["Core.datapath.csr.io_evecs_1"] = new dat_api<32>(&mod_typed->Core_datapath_csr__io_evecs_1, "Core.datapath.csr.io_evecs_1", "");
  dat_table["Core.datapath.csr.io_evecs_2"] = new dat_api<32>(&mod_typed->Core_datapath_csr__io_evecs_2, "Core.datapath.csr.io_evecs_2", "");
  dat_table["Core.datapath.csr.io_evecs_3"] = new dat_api<32>(&mod_typed->Core_datapath_csr__io_evecs_3, "Core.datapath.csr.io_evecs_3", "");
  dat_table["Core.datapath.csr.io_evecs_4"] = new dat_api<32>(&mod_typed->Core_datapath_csr__io_evecs_4, "Core.datapath.csr.io_evecs_4", "");
  dat_table["Core.datapath.csr.io_evecs_5"] = new dat_api<32>(&mod_typed->Core_datapath_csr__io_evecs_5, "Core.datapath.csr.io_evecs_5", "");
  dat_table["Core.datapath.csr.io_evecs_6"] = new dat_api<32>(&mod_typed->Core_datapath_csr__io_evecs_6, "Core.datapath.csr.io_evecs_6", "");
  dat_table["Core.datapath.csr.io_evecs_7"] = new dat_api<32>(&mod_typed->Core_datapath_csr__io_evecs_7, "Core.datapath.csr.io_evecs_7", "");
  dat_table["Core.datapath.mem_evec"] = new dat_api<32>(&mod_typed->Core_datapath__mem_evec, "Core.datapath.mem_evec", "");
  dat_table["Core.datapath.next_pcs_0"] = new dat_api<32>(&mod_typed->Core_datapath__next_pcs_0, "Core.datapath.next_pcs_0", "");
  dat_table["Core.datapath.next_pcs_1"] = new dat_api<32>(&mod_typed->Core_datapath__next_pcs_1, "Core.datapath.next_pcs_1", "");
  dat_table["Core.control.next_tid"] = new dat_api<3>(&mod_typed->Core_control__next_tid, "Core.control.next_tid", "");
  dat_table["Core.control.io_next_tid"] = new dat_api<3>(&mod_typed->Core_control__io_next_tid, "Core.control.io_next_tid", "");
  dat_table["Core.datapath.io_control_next_tid"] = new dat_api<3>(&mod_typed->Core_datapath__io_control_next_tid, "Core.datapath.io_control_next_tid", "");
  dat_table["Core.datapath.next_pcs_2"] = new dat_api<32>(&mod_typed->Core_datapath__next_pcs_2, "Core.datapath.next_pcs_2", "");
  dat_table["Core.datapath.next_pcs_3"] = new dat_api<32>(&mod_typed->Core_datapath__next_pcs_3, "Core.datapath.next_pcs_3", "");
  dat_table["Core.datapath.next_pcs_4"] = new dat_api<32>(&mod_typed->Core_datapath__next_pcs_4, "Core.datapath.next_pcs_4", "");
  dat_table["Core.datapath.next_pcs_5"] = new dat_api<32>(&mod_typed->Core_datapath__next_pcs_5, "Core.datapath.next_pcs_5", "");
  dat_table["Core.datapath.next_pcs_6"] = new dat_api<32>(&mod_typed->Core_datapath__next_pcs_6, "Core.datapath.next_pcs_6", "");
  dat_table["Core.datapath.next_pcs_7"] = new dat_api<32>(&mod_typed->Core_datapath__next_pcs_7, "Core.datapath.next_pcs_7", "");
  dat_table["Core.datapath.next_pc"] = new dat_api<32>(&mod_typed->Core_datapath__next_pc, "Core.datapath.next_pc", "");
  dat_table["Core.datapath.io_imem_r_addr"] = new dat_api<12>(&mod_typed->Core_datapath__io_imem_r_addr, "Core.datapath.io_imem_r_addr", "");
  dat_table["Core.imem.io_core_r_addr"] = new dat_api<12>(&mod_typed->Core_imem__io_core_r_addr, "Core.imem.io_core_r_addr", "");
  dat_table["Core.control.next_valid"] = new dat_api<1>(&mod_typed->Core_control__next_valid, "Core.control.next_valid", "");
  dat_table["Core.control.io_next_valid"] = new dat_api<1>(&mod_typed->Core_control__io_next_valid, "Core.control.io_next_valid", "");
  dat_table["Core.datapath.io_control_next_valid"] = new dat_api<1>(&mod_typed->Core_datapath__io_control_next_valid, "Core.datapath.io_control_next_valid", "");
  dat_table["Core.datapath.io_imem_r_enable"] = new dat_api<1>(&mod_typed->Core_datapath__io_imem_r_enable, "Core.datapath.io_imem_r_enable", "");
  dat_table["Core.imem.io_core_r_enable"] = new dat_api<1>(&mod_typed->Core_imem__io_core_r_enable, "Core.imem.io_core_r_enable", "");
  dat_table["Core.imem.dout_r"] = new dat_api<32>(&mod_typed->Core_imem__dout_r, "Core.imem.dout_r", "");
  dat_table["Core.datapath.loadstore.io_imem_rw_data_in"] = new dat_api<32>(&mod_typed->Core_datapath_loadstore__io_imem_rw_data_in, "Core.datapath.loadstore.io_imem_rw_data_in", "");
  dat_table["Core.datapath.io_imem_rw_data_in"] = new dat_api<32>(&mod_typed->Core_datapath__io_imem_rw_data_in, "Core.datapath.io_imem_rw_data_in", "");
  dat_table["Core.imem.io_core_rw_data_in"] = new dat_api<32>(&mod_typed->Core_imem__io_core_rw_data_in, "Core.imem.io_core_rw_data_in", "");
  dat_table["Core.datapath.loadstore.io_imem_rw_write"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__io_imem_rw_write, "Core.datapath.loadstore.io_imem_rw_write", "");
  dat_table["Core.datapath.io_imem_rw_write"] = new dat_api<1>(&mod_typed->Core_datapath__io_imem_rw_write, "Core.datapath.io_imem_rw_write", "");
  dat_table["Core.imem.io_core_rw_write"] = new dat_api<1>(&mod_typed->Core_imem__io_core_rw_write, "Core.imem.io_core_rw_write", "");
  dat_table["Core.datapath.loadstore.io_imem_rw_enable"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__io_imem_rw_enable, "Core.datapath.loadstore.io_imem_rw_enable", "");
  dat_table["Core.datapath.io_imem_rw_enable"] = new dat_api<1>(&mod_typed->Core_datapath__io_imem_rw_enable, "Core.datapath.io_imem_rw_enable", "");
  dat_table["Core.imem.io_core_rw_enable"] = new dat_api<1>(&mod_typed->Core_imem__io_core_rw_enable, "Core.imem.io_core_rw_enable", "");
  dat_table["Core.datapath.loadstore.io_imem_rw_addr"] = new dat_api<12>(&mod_typed->Core_datapath_loadstore__io_imem_rw_addr, "Core.datapath.loadstore.io_imem_rw_addr", "");
  dat_table["Core.datapath.io_imem_rw_addr"] = new dat_api<12>(&mod_typed->Core_datapath__io_imem_rw_addr, "Core.datapath.io_imem_rw_addr", "");
  dat_table["Core.imem.io_core_rw_addr"] = new dat_api<12>(&mod_typed->Core_imem__io_core_rw_addr, "Core.imem.io_core_rw_addr", "");
  mem_table["Core.imem.ispm"] = new mem_api<32, 4096>(&mod_typed->Core_imem__ispm, "Core.imem.ispm", "");
  dat_table["Core.imem.R0"] = new dat_api<32>(&mod_typed->Core_imem__R0, "Core.imem.R0", "");
  dat_table["Core.datapath.csr.io_rw_data_in"] = new dat_api<32>(&mod_typed->Core_datapath_csr__io_rw_data_in, "Core.datapath.csr.io_rw_data_in", "");
  dat_table["Core.control.io_exe_csr_type"] = new dat_api<2>(&mod_typed->Core_control__io_exe_csr_type, "Core.control.io_exe_csr_type", "");
  dat_table["Core.datapath.io_control_exe_csr_type"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_exe_csr_type, "Core.datapath.io_control_exe_csr_type", "");
  dat_table["Core.datapath.csr.io_rw_csr_type"] = new dat_api<2>(&mod_typed->Core_datapath_csr__io_rw_csr_type, "Core.datapath.csr.io_rw_csr_type", "");
  dat_table["Core.datapath.csr.io_rw_addr"] = new dat_api<12>(&mod_typed->Core_datapath_csr__io_rw_addr, "Core.datapath.csr.io_rw_addr", "");
  dat_table["Core.datapath.csr.status_0"] = new dat_api<36>(&mod_typed->Core_datapath_csr__status_0, "Core.datapath.csr.status_0", "");
  dat_table["Core.datapath.csr.status_1"] = new dat_api<36>(&mod_typed->Core_datapath_csr__status_1, "Core.datapath.csr.status_1", "");
  dat_table["Core.datapath.csr.status_2"] = new dat_api<36>(&mod_typed->Core_datapath_csr__status_2, "Core.datapath.csr.status_2", "");
  dat_table["Core.datapath.csr.status_3"] = new dat_api<36>(&mod_typed->Core_datapath_csr__status_3, "Core.datapath.csr.status_3", "");
  dat_table["Core.datapath.csr.status_4"] = new dat_api<36>(&mod_typed->Core_datapath_csr__status_4, "Core.datapath.csr.status_4", "");
  dat_table["Core.datapath.csr.status_5"] = new dat_api<36>(&mod_typed->Core_datapath_csr__status_5, "Core.datapath.csr.status_5", "");
  dat_table["Core.datapath.csr.status_6"] = new dat_api<36>(&mod_typed->Core_datapath_csr__status_6, "Core.datapath.csr.status_6", "");
  dat_table["Core.datapath.csr.status_7"] = new dat_api<36>(&mod_typed->Core_datapath_csr__status_7, "Core.datapath.csr.status_7", "");
  dat_table["Core.datapath.csr.data_out"] = new dat_api<36>(&mod_typed->Core_datapath_csr__data_out, "Core.datapath.csr.data_out", "");
  dat_table["Core.datapath.csr.data_in"] = new dat_api<36>(&mod_typed->Core_datapath_csr__data_in, "Core.datapath.csr.data_in", "");
  dat_table["Core.datapath.csr.io_kill"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_kill, "Core.datapath.csr.io_kill", "");
  dat_table["Core.datapath.csr.priv_fault"] = new dat_api<1>(&mod_typed->Core_datapath_csr__priv_fault, "Core.datapath.csr.priv_fault", "");
  dat_table["Core.control.exe_csr_write"] = new dat_api<1>(&mod_typed->Core_control__exe_csr_write, "Core.control.exe_csr_write", "");
  dat_table["Core.control.io_exe_csr_write"] = new dat_api<1>(&mod_typed->Core_control__io_exe_csr_write, "Core.control.io_exe_csr_write", "");
  dat_table["Core.datapath.io_control_exe_csr_write"] = new dat_api<1>(&mod_typed->Core_datapath__io_control_exe_csr_write, "Core.datapath.io_control_exe_csr_write", "");
  dat_table["Core.datapath.csr.io_rw_write"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_rw_write, "Core.datapath.csr.io_rw_write", "");
  dat_table["Core.datapath.csr.write"] = new dat_api<1>(&mod_typed->Core_datapath_csr__write, "Core.datapath.csr.write", "");
  dat_table["Core.io_int_exts_0"] = new dat_api<1>(&mod_typed->Core__io_int_exts_0, "Core.io_int_exts_0", "");
  dat_table["Core.datapath.io_int_exts_0"] = new dat_api<1>(&mod_typed->Core_datapath__io_int_exts_0, "Core.datapath.io_int_exts_0", "");
  dat_table["Core.datapath.csr.io_int_exts_0"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_int_exts_0, "Core.datapath.csr.io_int_exts_0", "");
  dat_table["Core.io_int_exts_1"] = new dat_api<1>(&mod_typed->Core__io_int_exts_1, "Core.io_int_exts_1", "");
  dat_table["Core.datapath.io_int_exts_1"] = new dat_api<1>(&mod_typed->Core_datapath__io_int_exts_1, "Core.datapath.io_int_exts_1", "");
  dat_table["Core.datapath.csr.io_int_exts_1"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_int_exts_1, "Core.datapath.csr.io_int_exts_1", "");
  dat_table["Core.io_int_exts_2"] = new dat_api<1>(&mod_typed->Core__io_int_exts_2, "Core.io_int_exts_2", "");
  dat_table["Core.datapath.io_int_exts_2"] = new dat_api<1>(&mod_typed->Core_datapath__io_int_exts_2, "Core.datapath.io_int_exts_2", "");
  dat_table["Core.datapath.csr.io_int_exts_2"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_int_exts_2, "Core.datapath.csr.io_int_exts_2", "");
  dat_table["Core.io_int_exts_3"] = new dat_api<1>(&mod_typed->Core__io_int_exts_3, "Core.io_int_exts_3", "");
  dat_table["Core.datapath.io_int_exts_3"] = new dat_api<1>(&mod_typed->Core_datapath__io_int_exts_3, "Core.datapath.io_int_exts_3", "");
  dat_table["Core.datapath.csr.io_int_exts_3"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_int_exts_3, "Core.datapath.csr.io_int_exts_3", "");
  dat_table["Core.io_int_exts_4"] = new dat_api<1>(&mod_typed->Core__io_int_exts_4, "Core.io_int_exts_4", "");
  dat_table["Core.datapath.io_int_exts_4"] = new dat_api<1>(&mod_typed->Core_datapath__io_int_exts_4, "Core.datapath.io_int_exts_4", "");
  dat_table["Core.datapath.csr.io_int_exts_4"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_int_exts_4, "Core.datapath.csr.io_int_exts_4", "");
  dat_table["Core.io_int_exts_5"] = new dat_api<1>(&mod_typed->Core__io_int_exts_5, "Core.io_int_exts_5", "");
  dat_table["Core.datapath.io_int_exts_5"] = new dat_api<1>(&mod_typed->Core_datapath__io_int_exts_5, "Core.datapath.io_int_exts_5", "");
  dat_table["Core.datapath.csr.io_int_exts_5"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_int_exts_5, "Core.datapath.csr.io_int_exts_5", "");
  dat_table["Core.io_int_exts_6"] = new dat_api<1>(&mod_typed->Core__io_int_exts_6, "Core.io_int_exts_6", "");
  dat_table["Core.datapath.io_int_exts_6"] = new dat_api<1>(&mod_typed->Core_datapath__io_int_exts_6, "Core.datapath.io_int_exts_6", "");
  dat_table["Core.datapath.csr.io_int_exts_6"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_int_exts_6, "Core.datapath.csr.io_int_exts_6", "");
  dat_table["Core.io_int_exts_7"] = new dat_api<1>(&mod_typed->Core__io_int_exts_7, "Core.io_int_exts_7", "");
  dat_table["Core.datapath.io_int_exts_7"] = new dat_api<1>(&mod_typed->Core_datapath__io_int_exts_7, "Core.datapath.io_int_exts_7", "");
  dat_table["Core.datapath.csr.io_int_exts_7"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_int_exts_7, "Core.datapath.csr.io_int_exts_7", "");
  dat_table["Core.datapath.csr.reg_msip_1"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_msip_1, "Core.datapath.csr.reg_msip_1", "");
  dat_table["Core.datapath.csr.reg_mtie_7"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_mtie_7, "Core.datapath.csr.reg_mtie_7", "");
  dat_table["Core.datapath.csr.reg_prv1_7"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_prv1_7, "Core.datapath.csr.reg_prv1_7", "");
  dat_table["Core.datapath.csr.reg_ie1_7"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_ie1_7, "Core.datapath.csr.reg_ie1_7", "");
  dat_table["Core.datapath.csr.reg_prv_7"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_prv_7, "Core.datapath.csr.reg_prv_7", "");
  dat_table["Core.datapath.loadstore.io_store_misaligned"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__io_store_misaligned, "Core.datapath.loadstore.io_store_misaligned", "");
  dat_table["Core.datapath.io_control_exe_exc_store_misaligned"] = new dat_api<1>(&mod_typed->Core_datapath__io_control_exe_exc_store_misaligned, "Core.datapath.io_control_exe_exc_store_misaligned", "");
  dat_table["Core.control.io_exe_exc_store_misaligned"] = new dat_api<1>(&mod_typed->Core_control__io_exe_exc_store_misaligned, "Core.control.io_exe_exc_store_misaligned", "");
  dat_table["Core.datapath.loadstore.load_misaligned"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__load_misaligned, "Core.datapath.loadstore.load_misaligned", "");
  dat_table["Core.datapath.loadstore.io_load_misaligned"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__io_load_misaligned, "Core.datapath.loadstore.io_load_misaligned", "");
  dat_table["Core.datapath.io_control_exe_exc_load_misaligned"] = new dat_api<1>(&mod_typed->Core_datapath__io_control_exe_exc_load_misaligned, "Core.datapath.io_control_exe_exc_load_misaligned", "");
  dat_table["Core.control.io_exe_exc_load_misaligned"] = new dat_api<1>(&mod_typed->Core_control__io_exe_exc_load_misaligned, "Core.control.io_exe_exc_load_misaligned", "");
  dat_table["Core.datapath.csr.io_priv_fault"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_priv_fault, "Core.datapath.csr.io_priv_fault", "");
  dat_table["Core.datapath.io_control_exe_exc_priv_inst"] = new dat_api<1>(&mod_typed->Core_datapath__io_control_exe_exc_priv_inst, "Core.datapath.io_control_exe_exc_priv_inst", "");
  dat_table["Core.control.io_exe_exc_priv_inst"] = new dat_api<1>(&mod_typed->Core_control__io_exe_exc_priv_inst, "Core.control.io_exe_exc_priv_inst", "");
  dat_table["Core.control.exe_inst_exc"] = new dat_api<1>(&mod_typed->Core_control__exe_inst_exc, "Core.control.exe_inst_exc", "");
  dat_table["Core.control.exe_exception"] = new dat_api<1>(&mod_typed->Core_control__exe_exception, "Core.control.exe_exception", "");
  dat_table["Core.control.io_exe_exception"] = new dat_api<1>(&mod_typed->Core_control__io_exe_exception, "Core.control.io_exe_exception", "");
  dat_table["Core.datapath.io_control_exe_exception"] = new dat_api<1>(&mod_typed->Core_datapath__io_control_exe_exception, "Core.datapath.io_control_exe_exception", "");
  dat_table["Core.datapath.csr.io_exception"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_exception, "Core.datapath.csr.io_exception", "");
  dat_table["Core.datapath.csr.reg_ie_7"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_ie_7, "Core.datapath.csr.reg_ie_7", "");
  dat_table["Core.datapath.csr.reg_msip_7"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_msip_7, "Core.datapath.csr.reg_msip_7", "");
  dat_table["Core.datapath.csr.reg_mtie_6"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_mtie_6, "Core.datapath.csr.reg_mtie_6", "");
  dat_table["Core.datapath.csr.reg_prv1_6"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_prv1_6, "Core.datapath.csr.reg_prv1_6", "");
  dat_table["Core.datapath.csr.reg_ie1_6"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_ie1_6, "Core.datapath.csr.reg_ie1_6", "");
  dat_table["Core.datapath.csr.reg_prv_6"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_prv_6, "Core.datapath.csr.reg_prv_6", "");
  dat_table["Core.datapath.csr.reg_ie_6"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_ie_6, "Core.datapath.csr.reg_ie_6", "");
  dat_table["Core.datapath.csr.reg_msip_6"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_msip_6, "Core.datapath.csr.reg_msip_6", "");
  dat_table["Core.datapath.csr.reg_mtie_5"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_mtie_5, "Core.datapath.csr.reg_mtie_5", "");
  dat_table["Core.datapath.csr.reg_prv1_5"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_prv1_5, "Core.datapath.csr.reg_prv1_5", "");
  dat_table["Core.datapath.csr.reg_ie1_5"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_ie1_5, "Core.datapath.csr.reg_ie1_5", "");
  dat_table["Core.datapath.csr.reg_prv_5"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_prv_5, "Core.datapath.csr.reg_prv_5", "");
  dat_table["Core.datapath.csr.reg_ie_5"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_ie_5, "Core.datapath.csr.reg_ie_5", "");
  dat_table["Core.datapath.csr.reg_msip_5"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_msip_5, "Core.datapath.csr.reg_msip_5", "");
  dat_table["Core.datapath.csr.reg_mtie_4"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_mtie_4, "Core.datapath.csr.reg_mtie_4", "");
  dat_table["Core.datapath.csr.reg_prv1_4"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_prv1_4, "Core.datapath.csr.reg_prv1_4", "");
  dat_table["Core.datapath.csr.reg_ie1_4"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_ie1_4, "Core.datapath.csr.reg_ie1_4", "");
  dat_table["Core.datapath.csr.reg_prv_4"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_prv_4, "Core.datapath.csr.reg_prv_4", "");
  dat_table["Core.datapath.csr.reg_ie_4"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_ie_4, "Core.datapath.csr.reg_ie_4", "");
  dat_table["Core.datapath.csr.reg_msip_4"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_msip_4, "Core.datapath.csr.reg_msip_4", "");
  dat_table["Core.datapath.csr.reg_mtie_3"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_mtie_3, "Core.datapath.csr.reg_mtie_3", "");
  dat_table["Core.datapath.csr.reg_prv1_3"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_prv1_3, "Core.datapath.csr.reg_prv1_3", "");
  dat_table["Core.datapath.csr.reg_ie1_3"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_ie1_3, "Core.datapath.csr.reg_ie1_3", "");
  dat_table["Core.datapath.csr.reg_prv_3"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_prv_3, "Core.datapath.csr.reg_prv_3", "");
  dat_table["Core.datapath.csr.reg_ie_3"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_ie_3, "Core.datapath.csr.reg_ie_3", "");
  dat_table["Core.datapath.csr.reg_msip_3"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_msip_3, "Core.datapath.csr.reg_msip_3", "");
  dat_table["Core.datapath.csr.reg_mtie_2"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_mtie_2, "Core.datapath.csr.reg_mtie_2", "");
  dat_table["Core.datapath.csr.reg_prv1_2"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_prv1_2, "Core.datapath.csr.reg_prv1_2", "");
  dat_table["Core.datapath.csr.reg_ie1_2"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_ie1_2, "Core.datapath.csr.reg_ie1_2", "");
  dat_table["Core.datapath.csr.reg_prv_2"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_prv_2, "Core.datapath.csr.reg_prv_2", "");
  dat_table["Core.datapath.csr.reg_ie_2"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_ie_2, "Core.datapath.csr.reg_ie_2", "");
  dat_table["Core.datapath.csr.reg_msip_2"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_msip_2, "Core.datapath.csr.reg_msip_2", "");
  dat_table["Core.datapath.csr.reg_mtie_1"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_mtie_1, "Core.datapath.csr.reg_mtie_1", "");
  dat_table["Core.datapath.csr.reg_prv1_1"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_prv1_1, "Core.datapath.csr.reg_prv1_1", "");
  dat_table["Core.datapath.csr.reg_ie1_1"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_ie1_1, "Core.datapath.csr.reg_ie1_1", "");
  dat_table["Core.datapath.csr.reg_prv_1"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_prv_1, "Core.datapath.csr.reg_prv_1", "");
  dat_table["Core.datapath.csr.reg_ie_1"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_ie_1, "Core.datapath.csr.reg_ie_1", "");
  dat_table["Core.datapath.csr.reg_mtie_0"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_mtie_0, "Core.datapath.csr.reg_mtie_0", "");
  dat_table["Core.datapath.csr.reg_prv1_0"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_prv1_0, "Core.datapath.csr.reg_prv1_0", "");
  dat_table["Core.datapath.csr.reg_ie1_0"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_ie1_0, "Core.datapath.csr.reg_ie1_0", "");
  dat_table["Core.datapath.csr.reg_prv_0"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_prv_0, "Core.datapath.csr.reg_prv_0", "");
  dat_table["Core.datapath.csr.reg_ie_0"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_ie_0, "Core.datapath.csr.reg_ie_0", "");
  dat_table["Core.datapath.csr.reg_dmem_protection_7"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_dmem_protection_7, "Core.datapath.csr.reg_dmem_protection_7", "");
  dat_table["Core.datapath.csr.reg_dmem_protection_6"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_dmem_protection_6, "Core.datapath.csr.reg_dmem_protection_6", "");
  dat_table["Core.datapath.csr.reg_dmem_protection_5"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_dmem_protection_5, "Core.datapath.csr.reg_dmem_protection_5", "");
  dat_table["Core.datapath.csr.reg_dmem_protection_4"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_dmem_protection_4, "Core.datapath.csr.reg_dmem_protection_4", "");
  dat_table["Core.datapath.csr.reg_dmem_protection_3"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_dmem_protection_3, "Core.datapath.csr.reg_dmem_protection_3", "");
  dat_table["Core.datapath.csr.reg_dmem_protection_2"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_dmem_protection_2, "Core.datapath.csr.reg_dmem_protection_2", "");
  dat_table["Core.datapath.csr.reg_dmem_protection_1"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_dmem_protection_1, "Core.datapath.csr.reg_dmem_protection_1", "");
  dat_table["Core.datapath.csr.reg_dmem_protection_0"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_dmem_protection_0, "Core.datapath.csr.reg_dmem_protection_0", "");
  dat_table["Core.datapath.csr.reg_imem_protection_7"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_imem_protection_7, "Core.datapath.csr.reg_imem_protection_7", "");
  dat_table["Core.datapath.csr.reg_imem_protection_6"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_imem_protection_6, "Core.datapath.csr.reg_imem_protection_6", "");
  dat_table["Core.datapath.csr.reg_imem_protection_5"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_imem_protection_5, "Core.datapath.csr.reg_imem_protection_5", "");
  dat_table["Core.datapath.csr.reg_imem_protection_4"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_imem_protection_4, "Core.datapath.csr.reg_imem_protection_4", "");
  dat_table["Core.datapath.csr.reg_imem_protection_3"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_imem_protection_3, "Core.datapath.csr.reg_imem_protection_3", "");
  dat_table["Core.datapath.csr.reg_imem_protection_2"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_imem_protection_2, "Core.datapath.csr.reg_imem_protection_2", "");
  dat_table["Core.datapath.csr.reg_imem_protection_1"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_imem_protection_1, "Core.datapath.csr.reg_imem_protection_1", "");
  dat_table["Core.datapath.csr.reg_imem_protection_0"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_imem_protection_0, "Core.datapath.csr.reg_imem_protection_0", "");
  dat_table["Core.datapath.csr.reg_gpo_protection_3"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_gpo_protection_3, "Core.datapath.csr.reg_gpo_protection_3", "");
  dat_table["Core.datapath.csr.reg_gpos_3"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_gpos_3, "Core.datapath.csr.reg_gpos_3", "");
  dat_table["Core.datapath.csr.reg_gpo_protection_2"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_gpo_protection_2, "Core.datapath.csr.reg_gpo_protection_2", "");
  dat_table["Core.datapath.csr.reg_gpos_2"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_gpos_2, "Core.datapath.csr.reg_gpos_2", "");
  dat_table["Core.datapath.csr.reg_gpo_protection_1"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_gpo_protection_1, "Core.datapath.csr.reg_gpo_protection_1", "");
  dat_table["Core.datapath.csr.reg_gpos_1"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_gpos_1, "Core.datapath.csr.reg_gpos_1", "");
  dat_table["Core.datapath.csr.reg_gpo_protection_0"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_gpo_protection_0, "Core.datapath.csr.reg_gpo_protection_0", "");
  dat_table["Core.datapath.csr.reg_gpos_0"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_gpos_0, "Core.datapath.csr.reg_gpos_0", "");
  dat_table["Core.io_gpio_in_3"] = new dat_api<1>(&mod_typed->Core__io_gpio_in_3, "Core.io_gpio_in_3", "");
  dat_table["Core.datapath.io_gpio_in_3"] = new dat_api<1>(&mod_typed->Core_datapath__io_gpio_in_3, "Core.datapath.io_gpio_in_3", "");
  dat_table["Core.datapath.csr.io_gpio_in_3"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_gpio_in_3, "Core.datapath.csr.io_gpio_in_3", "");
  dat_table["Core.datapath.csr.reg_gpis_3"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_gpis_3, "Core.datapath.csr.reg_gpis_3", "");
  dat_table["Core.io_gpio_in_2"] = new dat_api<1>(&mod_typed->Core__io_gpio_in_2, "Core.io_gpio_in_2", "");
  dat_table["Core.datapath.io_gpio_in_2"] = new dat_api<1>(&mod_typed->Core_datapath__io_gpio_in_2, "Core.datapath.io_gpio_in_2", "");
  dat_table["Core.datapath.csr.io_gpio_in_2"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_gpio_in_2, "Core.datapath.csr.io_gpio_in_2", "");
  dat_table["Core.datapath.csr.reg_gpis_2"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_gpis_2, "Core.datapath.csr.reg_gpis_2", "");
  dat_table["Core.io_gpio_in_1"] = new dat_api<1>(&mod_typed->Core__io_gpio_in_1, "Core.io_gpio_in_1", "");
  dat_table["Core.datapath.io_gpio_in_1"] = new dat_api<1>(&mod_typed->Core_datapath__io_gpio_in_1, "Core.datapath.io_gpio_in_1", "");
  dat_table["Core.datapath.csr.io_gpio_in_1"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_gpio_in_1, "Core.datapath.csr.io_gpio_in_1", "");
  dat_table["Core.datapath.csr.reg_gpis_1"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_gpis_1, "Core.datapath.csr.reg_gpis_1", "");
  dat_table["Core.io_gpio_in_0"] = new dat_api<1>(&mod_typed->Core__io_gpio_in_0, "Core.io_gpio_in_0", "");
  dat_table["Core.datapath.io_gpio_in_0"] = new dat_api<1>(&mod_typed->Core_datapath__io_gpio_in_0, "Core.datapath.io_gpio_in_0", "");
  dat_table["Core.datapath.csr.io_gpio_in_0"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_gpio_in_0, "Core.datapath.csr.io_gpio_in_0", "");
  dat_table["Core.datapath.csr.reg_gpis_0"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_gpis_0, "Core.datapath.csr.reg_gpis_0", "");
  dat_table["Core.datapath.csr.reg_to_host"] = new dat_api<32>(&mod_typed->Core_datapath_csr__reg_to_host, "Core.datapath.csr.reg_to_host", "");
  dat_table["Core.datapath.csr.reg_sup0_7"] = new dat_api<36>(&mod_typed->Core_datapath_csr__reg_sup0_7, "Core.datapath.csr.reg_sup0_7", "");
  dat_table["Core.datapath.csr.reg_sup0_6"] = new dat_api<36>(&mod_typed->Core_datapath_csr__reg_sup0_6, "Core.datapath.csr.reg_sup0_6", "");
  dat_table["Core.datapath.csr.reg_sup0_5"] = new dat_api<36>(&mod_typed->Core_datapath_csr__reg_sup0_5, "Core.datapath.csr.reg_sup0_5", "");
  dat_table["Core.datapath.csr.reg_sup0_4"] = new dat_api<36>(&mod_typed->Core_datapath_csr__reg_sup0_4, "Core.datapath.csr.reg_sup0_4", "");
  dat_table["Core.datapath.csr.reg_sup0_3"] = new dat_api<36>(&mod_typed->Core_datapath_csr__reg_sup0_3, "Core.datapath.csr.reg_sup0_3", "");
  dat_table["Core.datapath.csr.reg_sup0_2"] = new dat_api<36>(&mod_typed->Core_datapath_csr__reg_sup0_2, "Core.datapath.csr.reg_sup0_2", "");
  dat_table["Core.datapath.csr.reg_sup0_1"] = new dat_api<36>(&mod_typed->Core_datapath_csr__reg_sup0_1, "Core.datapath.csr.reg_sup0_1", "");
  dat_table["Core.datapath.csr.reg_sup0_0"] = new dat_api<36>(&mod_typed->Core_datapath_csr__reg_sup0_0, "Core.datapath.csr.reg_sup0_0", "");
  dat_table["Core.control.exe_any_cause"] = new dat_api<5>(&mod_typed->Core_control__exe_any_cause, "Core.control.exe_any_cause", "");
  dat_table["Core.control.exe_inst_cause"] = new dat_api<4>(&mod_typed->Core_control__exe_inst_cause, "Core.control.exe_inst_cause", "");
  dat_table["Core.control.exe_exception_cause"] = new dat_api<5>(&mod_typed->Core_control__exe_exception_cause, "Core.control.exe_exception_cause", "");
  dat_table["Core.control.io_exe_cause"] = new dat_api<5>(&mod_typed->Core_control__io_exe_cause, "Core.control.io_exe_cause", "");
  dat_table["Core.datapath.io_control_exe_cause"] = new dat_api<5>(&mod_typed->Core_datapath__io_control_exe_cause, "Core.datapath.io_control_exe_cause", "");
  dat_table["Core.datapath.csr.io_cause"] = new dat_api<5>(&mod_typed->Core_datapath_csr__io_cause, "Core.datapath.csr.io_cause", "");
  dat_table["Core.datapath.csr.reg_causes_7"] = new dat_api<5>(&mod_typed->Core_datapath_csr__reg_causes_7, "Core.datapath.csr.reg_causes_7", "");
  dat_table["Core.datapath.csr.reg_causes_6"] = new dat_api<5>(&mod_typed->Core_datapath_csr__reg_causes_6, "Core.datapath.csr.reg_causes_6", "");
  dat_table["Core.datapath.csr.reg_causes_5"] = new dat_api<5>(&mod_typed->Core_datapath_csr__reg_causes_5, "Core.datapath.csr.reg_causes_5", "");
  dat_table["Core.datapath.csr.reg_causes_4"] = new dat_api<5>(&mod_typed->Core_datapath_csr__reg_causes_4, "Core.datapath.csr.reg_causes_4", "");
  dat_table["Core.datapath.csr.reg_causes_3"] = new dat_api<5>(&mod_typed->Core_datapath_csr__reg_causes_3, "Core.datapath.csr.reg_causes_3", "");
  dat_table["Core.datapath.csr.reg_causes_2"] = new dat_api<5>(&mod_typed->Core_datapath_csr__reg_causes_2, "Core.datapath.csr.reg_causes_2", "");
  dat_table["Core.datapath.csr.reg_causes_1"] = new dat_api<5>(&mod_typed->Core_datapath_csr__reg_causes_1, "Core.datapath.csr.reg_causes_1", "");
  dat_table["Core.datapath.csr.reg_causes_0"] = new dat_api<5>(&mod_typed->Core_datapath_csr__reg_causes_0, "Core.datapath.csr.reg_causes_0", "");
  dat_table["Core.datapath.csr.io_epc"] = new dat_api<32>(&mod_typed->Core_datapath_csr__io_epc, "Core.datapath.csr.io_epc", "");
  dat_table["Core.datapath.csr.reg_epcs_7"] = new dat_api<32>(&mod_typed->Core_datapath_csr__reg_epcs_7, "Core.datapath.csr.reg_epcs_7", "");
  dat_table["Core.datapath.csr.reg_epcs_6"] = new dat_api<32>(&mod_typed->Core_datapath_csr__reg_epcs_6, "Core.datapath.csr.reg_epcs_6", "");
  dat_table["Core.datapath.csr.reg_epcs_5"] = new dat_api<32>(&mod_typed->Core_datapath_csr__reg_epcs_5, "Core.datapath.csr.reg_epcs_5", "");
  dat_table["Core.datapath.csr.reg_epcs_4"] = new dat_api<32>(&mod_typed->Core_datapath_csr__reg_epcs_4, "Core.datapath.csr.reg_epcs_4", "");
  dat_table["Core.datapath.csr.reg_epcs_3"] = new dat_api<32>(&mod_typed->Core_datapath_csr__reg_epcs_3, "Core.datapath.csr.reg_epcs_3", "");
  dat_table["Core.datapath.csr.reg_epcs_2"] = new dat_api<32>(&mod_typed->Core_datapath_csr__reg_epcs_2, "Core.datapath.csr.reg_epcs_2", "");
  dat_table["Core.datapath.csr.reg_epcs_1"] = new dat_api<32>(&mod_typed->Core_datapath_csr__reg_epcs_1, "Core.datapath.csr.reg_epcs_1", "");
  dat_table["Core.datapath.csr.reg_epcs_0"] = new dat_api<32>(&mod_typed->Core_datapath_csr__reg_epcs_0, "Core.datapath.csr.reg_epcs_0", "");
  dat_table["Core.datapath.csr.reg_evecs_7"] = new dat_api<36>(&mod_typed->Core_datapath_csr__reg_evecs_7, "Core.datapath.csr.reg_evecs_7", "");
  dat_table["Core.datapath.csr.reg_evecs_6"] = new dat_api<36>(&mod_typed->Core_datapath_csr__reg_evecs_6, "Core.datapath.csr.reg_evecs_6", "");
  dat_table["Core.datapath.csr.reg_evecs_5"] = new dat_api<36>(&mod_typed->Core_datapath_csr__reg_evecs_5, "Core.datapath.csr.reg_evecs_5", "");
  dat_table["Core.datapath.csr.reg_evecs_4"] = new dat_api<36>(&mod_typed->Core_datapath_csr__reg_evecs_4, "Core.datapath.csr.reg_evecs_4", "");
  dat_table["Core.datapath.csr.reg_evecs_3"] = new dat_api<36>(&mod_typed->Core_datapath_csr__reg_evecs_3, "Core.datapath.csr.reg_evecs_3", "");
  dat_table["Core.datapath.csr.reg_evecs_2"] = new dat_api<36>(&mod_typed->Core_datapath_csr__reg_evecs_2, "Core.datapath.csr.reg_evecs_2", "");
  dat_table["Core.datapath.csr.reg_evecs_1"] = new dat_api<36>(&mod_typed->Core_datapath_csr__reg_evecs_1, "Core.datapath.csr.reg_evecs_1", "");
  dat_table["Core.datapath.csr.reg_evecs_0"] = new dat_api<36>(&mod_typed->Core_datapath_csr__reg_evecs_0, "Core.datapath.csr.reg_evecs_0", "");
  dat_table["Core.control.exe_valid"] = new dat_api<1>(&mod_typed->Core_control__exe_valid, "Core.control.exe_valid", "");
  dat_table["Core.control.exe_sleep"] = new dat_api<1>(&mod_typed->Core_control__exe_sleep, "Core.control.exe_sleep", "");
  dat_table["Core.control.io_exe_sleep"] = new dat_api<1>(&mod_typed->Core_control__io_exe_sleep, "Core.control.io_exe_sleep", "");
  dat_table["Core.datapath.io_control_exe_sleep"] = new dat_api<1>(&mod_typed->Core_datapath__io_control_exe_sleep, "Core.datapath.io_control_exe_sleep", "");
  dat_table["Core.datapath.csr.io_sleep"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_sleep, "Core.datapath.csr.io_sleep", "");
  dat_table["Core.datapath.csr.sleep"] = new dat_api<1>(&mod_typed->Core_datapath_csr__sleep, "Core.datapath.csr.sleep", "");
  dat_table["Core.datapath.csr.wake_1"] = new dat_api<1>(&mod_typed->Core_datapath_csr__wake_1, "Core.datapath.csr.wake_1", "");
  dat_table["Core.datapath.csr.reg_tmodes_1"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_tmodes_1, "Core.datapath.csr.reg_tmodes_1", "");
  dat_table["Core.datapath.csr.wake_7"] = new dat_api<1>(&mod_typed->Core_datapath_csr__wake_7, "Core.datapath.csr.wake_7", "");
  dat_table["Core.datapath.csr.reg_tmodes_7"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_tmodes_7, "Core.datapath.csr.reg_tmodes_7", "");
  dat_table["Core.datapath.csr.wake_6"] = new dat_api<1>(&mod_typed->Core_datapath_csr__wake_6, "Core.datapath.csr.wake_6", "");
  dat_table["Core.datapath.csr.reg_tmodes_6"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_tmodes_6, "Core.datapath.csr.reg_tmodes_6", "");
  dat_table["Core.datapath.csr.wake_5"] = new dat_api<1>(&mod_typed->Core_datapath_csr__wake_5, "Core.datapath.csr.wake_5", "");
  dat_table["Core.datapath.csr.reg_tmodes_5"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_tmodes_5, "Core.datapath.csr.reg_tmodes_5", "");
  dat_table["Core.datapath.csr.wake_4"] = new dat_api<1>(&mod_typed->Core_datapath_csr__wake_4, "Core.datapath.csr.wake_4", "");
  dat_table["Core.datapath.csr.reg_tmodes_4"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_tmodes_4, "Core.datapath.csr.reg_tmodes_4", "");
  dat_table["Core.datapath.csr.wake_3"] = new dat_api<1>(&mod_typed->Core_datapath_csr__wake_3, "Core.datapath.csr.wake_3", "");
  dat_table["Core.datapath.csr.reg_tmodes_3"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_tmodes_3, "Core.datapath.csr.reg_tmodes_3", "");
  dat_table["Core.control.exe_ee"] = new dat_api<1>(&mod_typed->Core_control__exe_ee, "Core.control.exe_ee", "");
  dat_table["Core.control.io_exe_ee"] = new dat_api<1>(&mod_typed->Core_control__io_exe_ee, "Core.control.io_exe_ee", "");
  dat_table["Core.datapath.io_control_exe_ee"] = new dat_api<1>(&mod_typed->Core_datapath__io_control_exe_ee, "Core.datapath.io_control_exe_ee", "");
  dat_table["Core.datapath.csr.io_ee"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_ee, "Core.datapath.csr.io_ee", "");
  dat_table["Core.control.exe_ie"] = new dat_api<1>(&mod_typed->Core_control__exe_ie, "Core.control.exe_ie", "");
  dat_table["Core.control.io_exe_ie"] = new dat_api<1>(&mod_typed->Core_control__io_exe_ie, "Core.control.io_exe_ie", "");
  dat_table["Core.datapath.io_control_exe_ie"] = new dat_api<1>(&mod_typed->Core_datapath__io_control_exe_ie, "Core.datapath.io_control_exe_ie", "");
  dat_table["Core.datapath.csr.io_ie"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_ie, "Core.datapath.csr.io_ie", "");
  dat_table["Core.datapath.csr.reg_timer_7"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_timer_7, "Core.datapath.csr.reg_timer_7", "");
  dat_table["Core.datapath.csr.reg_timer_6"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_timer_6, "Core.datapath.csr.reg_timer_6", "");
  dat_table["Core.datapath.csr.reg_timer_5"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_timer_5, "Core.datapath.csr.reg_timer_5", "");
  dat_table["Core.datapath.csr.reg_timer_4"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_timer_4, "Core.datapath.csr.reg_timer_4", "");
  dat_table["Core.datapath.csr.reg_timer_3"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_timer_3, "Core.datapath.csr.reg_timer_3", "");
  dat_table["Core.datapath.csr.reg_timer_1"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_timer_1, "Core.datapath.csr.reg_timer_1", "");
  dat_table["Core.datapath.csr.reg_timer_0"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_timer_0, "Core.datapath.csr.reg_timer_0", "");
  dat_table["Core.datapath.csr.reg_compare_7"] = new dat_api<32>(&mod_typed->Core_datapath_csr__reg_compare_7, "Core.datapath.csr.reg_compare_7", "");
  dat_table["Core.datapath.csr.reg_compare_6"] = new dat_api<32>(&mod_typed->Core_datapath_csr__reg_compare_6, "Core.datapath.csr.reg_compare_6", "");
  dat_table["Core.datapath.csr.reg_compare_5"] = new dat_api<32>(&mod_typed->Core_datapath_csr__reg_compare_5, "Core.datapath.csr.reg_compare_5", "");
  dat_table["Core.datapath.csr.reg_compare_4"] = new dat_api<32>(&mod_typed->Core_datapath_csr__reg_compare_4, "Core.datapath.csr.reg_compare_4", "");
  dat_table["Core.datapath.csr.reg_compare_3"] = new dat_api<32>(&mod_typed->Core_datapath_csr__reg_compare_3, "Core.datapath.csr.reg_compare_3", "");
  dat_table["Core.datapath.csr.reg_compare_1"] = new dat_api<32>(&mod_typed->Core_datapath_csr__reg_compare_1, "Core.datapath.csr.reg_compare_1", "");
  dat_table["Core.datapath.csr.reg_compare_0"] = new dat_api<32>(&mod_typed->Core_datapath_csr__reg_compare_0, "Core.datapath.csr.reg_compare_0", "");
  dat_table["Core.datapath.csr.reg_timer_2"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_timer_2, "Core.datapath.csr.reg_timer_2", "");
  dat_table["Core.datapath.csr.reg_time"] = new dat_api<64>(&mod_typed->Core_datapath_csr__reg_time, "Core.datapath.csr.reg_time", "");
  dat_table["Core.datapath.csr.reg_compare_2"] = new dat_api<32>(&mod_typed->Core_datapath_csr__reg_compare_2, "Core.datapath.csr.reg_compare_2", "");
  dat_table["Core.datapath.csr.wake_2"] = new dat_api<1>(&mod_typed->Core_datapath_csr__wake_2, "Core.datapath.csr.wake_2", "");
  dat_table["Core.datapath.csr.reg_tmodes_2"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_tmodes_2, "Core.datapath.csr.reg_tmodes_2", "");
  dat_table["Core.datapath.csr.wake_0"] = new dat_api<1>(&mod_typed->Core_datapath_csr__wake_0, "Core.datapath.csr.wake_0", "");
  dat_table["Core.datapath.csr.reg_tmodes_0"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_tmodes_0, "Core.datapath.csr.reg_tmodes_0", "");
  dat_table["Core.datapath.csr.reg_slots_7"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_slots_7, "Core.datapath.csr.reg_slots_7", "");
  dat_table["Core.datapath.csr.reg_slots_6"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_slots_6, "Core.datapath.csr.reg_slots_6", "");
  dat_table["Core.datapath.csr.reg_slots_5"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_slots_5, "Core.datapath.csr.reg_slots_5", "");
  dat_table["Core.datapath.csr.reg_slots_4"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_slots_4, "Core.datapath.csr.reg_slots_4", "");
  dat_table["Core.datapath.csr.reg_slots_3"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_slots_3, "Core.datapath.csr.reg_slots_3", "");
  dat_table["Core.datapath.csr.reg_slots_2"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_slots_2, "Core.datapath.csr.reg_slots_2", "");
  dat_table["Core.datapath.csr.reg_slots_1"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_slots_1, "Core.datapath.csr.reg_slots_1", "");
  dat_table["Core.datapath.csr.reg_slots_0"] = new dat_api<4>(&mod_typed->Core_datapath_csr__reg_slots_0, "Core.datapath.csr.reg_slots_0", "");
  dat_table["Core.datapath.csr.reg_msip_0"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_msip_0, "Core.datapath.csr.reg_msip_0", "");
  dat_table["Core.datapath.loadstore.io_imem_r_addr"] = new dat_api<12>(&mod_typed->Core_datapath_loadstore__io_imem_r_addr, "Core.datapath.loadstore.io_imem_r_addr", "");
  dat_table["Core.datapath.loadstore.io_imem_r_enable"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__io_imem_r_enable, "Core.datapath.loadstore.io_imem_r_enable", "");
  dat_table["Core.datapath.loadstore.dmem_op_reg"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__dmem_op_reg, "Core.datapath.loadstore.dmem_op_reg", "");
  dat_table["Core.datapath.loadstore.mem_type_reg"] = new dat_api<4>(&mod_typed->Core_datapath_loadstore__mem_type_reg, "Core.datapath.loadstore.mem_type_reg", "");
  dat_table["Core.datapath.loadstore.addr_byte_reg"] = new dat_api<2>(&mod_typed->Core_datapath_loadstore__addr_byte_reg, "Core.datapath.loadstore.addr_byte_reg", "");
  dat_table["Core.datapath.loadstore.imem_op_reg"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__imem_op_reg, "Core.datapath.loadstore.imem_op_reg", "");
  dat_table["Core.datapath.Multiplier.io_op2"] = new dat_api<32>(&mod_typed->Core_datapath_Multiplier__io_op2, "Core.datapath.Multiplier.io_op2", "");
  dat_table["Core.control.io_exe_mul_type"] = new dat_api<2>(&mod_typed->Core_control__io_exe_mul_type, "Core.control.io_exe_mul_type", "");
  dat_table["Core.datapath.io_control_exe_mul_type"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_exe_mul_type, "Core.datapath.io_control_exe_mul_type", "");
  dat_table["Core.datapath.Multiplier.io_func"] = new dat_api<4>(&mod_typed->Core_datapath_Multiplier__io_func, "Core.datapath.Multiplier.io_func", "");
  dat_table["Core.datapath.Multiplier.op2"] = new dat_api<33>(&mod_typed->Core_datapath_Multiplier__op2, "Core.datapath.Multiplier.op2", "");
  dat_table["Core.datapath.Multiplier.io_op1"] = new dat_api<32>(&mod_typed->Core_datapath_Multiplier__io_op1, "Core.datapath.Multiplier.io_op1", "");
  dat_table["Core.datapath.Multiplier.op1"] = new dat_api<33>(&mod_typed->Core_datapath_Multiplier__op1, "Core.datapath.Multiplier.op1", "");
  dat_table["Core.datapath.Multiplier.mul_result"] = new dat_api<66>(&mod_typed->Core_datapath_Multiplier__mul_result, "Core.datapath.Multiplier.mul_result", "");
  dat_table["Core.datapath.Multiplier.result"] = new dat_api<32>(&mod_typed->Core_datapath_Multiplier__result, "Core.datapath.Multiplier.result", "");
  dat_table["Core.datapath.Multiplier.R0"] = new dat_api<32>(&mod_typed->Core_datapath_Multiplier__R0, "Core.datapath.Multiplier.R0", "");
  dat_table["Core.datapath.regfile.io_rs1_thread"] = new dat_api<3>(&mod_typed->Core_datapath_regfile__io_rs1_thread, "Core.datapath.regfile.io_rs1_thread", "");
  dat_table["Core.imem.io_core_r_data_out"] = new dat_api<32>(&mod_typed->Core_imem__io_core_r_data_out, "Core.imem.io_core_r_data_out", "");
  dat_table["Core.datapath.io_imem_r_data_out"] = new dat_api<32>(&mod_typed->Core_datapath__io_imem_r_data_out, "Core.datapath.io_imem_r_data_out", "");
  dat_table["Core.datapath.regfile.io_rs1_addr"] = new dat_api<5>(&mod_typed->Core_datapath_regfile__io_rs1_addr, "Core.datapath.regfile.io_rs1_addr", "");
  dat_table["Core.datapath.regfile.dout1"] = new dat_api<32>(&mod_typed->Core_datapath_regfile__dout1, "Core.datapath.regfile.dout1", "");
  dat_table["Core.datapath.Multiplier.io_result"] = new dat_api<32>(&mod_typed->Core_datapath_Multiplier__io_result, "Core.datapath.Multiplier.io_result", "");
  dat_table["Core.datapath.mem_mul_result"] = new dat_api<32>(&mod_typed->Core_datapath__mem_mul_result, "Core.datapath.mem_mul_result", "");
  dat_table["Core.control.io_mem_rd_data_sel"] = new dat_api<2>(&mod_typed->Core_control__io_mem_rd_data_sel, "Core.control.io_mem_rd_data_sel", "");
  dat_table["Core.datapath.io_control_mem_rd_data_sel"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_mem_rd_data_sel, "Core.datapath.io_control_mem_rd_data_sel", "");
  dat_table["Core.io_bus_data_out"] = new dat_api<32>(&mod_typed->Core__io_bus_data_out, "Core.io_bus_data_out", "");
  dat_table["Core.datapath.io_bus_data_out"] = new dat_api<32>(&mod_typed->Core_datapath__io_bus_data_out, "Core.datapath.io_bus_data_out", "");
  dat_table["Core.datapath.loadstore.io_bus_data_out"] = new dat_api<32>(&mod_typed->Core_datapath_loadstore__io_bus_data_out, "Core.datapath.loadstore.io_bus_data_out", "");
  dat_table["Core.imem.io_core_rw_data_out"] = new dat_api<32>(&mod_typed->Core_imem__io_core_rw_data_out, "Core.imem.io_core_rw_data_out", "");
  dat_table["Core.datapath.io_imem_rw_data_out"] = new dat_api<32>(&mod_typed->Core_datapath__io_imem_rw_data_out, "Core.datapath.io_imem_rw_data_out", "");
  dat_table["Core.datapath.loadstore.io_imem_rw_data_out"] = new dat_api<32>(&mod_typed->Core_datapath_loadstore__io_imem_rw_data_out, "Core.datapath.loadstore.io_imem_rw_data_out", "");
  dat_table["Core.dmem.io_core_data_out"] = new dat_api<32>(&mod_typed->Core_dmem__io_core_data_out, "Core.dmem.io_core_data_out", "");
  dat_table["Core.datapath.io_dmem_data_out"] = new dat_api<32>(&mod_typed->Core_datapath__io_dmem_data_out, "Core.datapath.io_dmem_data_out", "");
  dat_table["Core.datapath.loadstore.io_dmem_data_out"] = new dat_api<32>(&mod_typed->Core_datapath_loadstore__io_dmem_data_out, "Core.datapath.loadstore.io_dmem_data_out", "");
  dat_table["Core.datapath.loadstore.io_data_out"] = new dat_api<32>(&mod_typed->Core_datapath_loadstore__io_data_out, "Core.datapath.loadstore.io_data_out", "");
  dat_table["Core.datapath.mem_rd_data"] = new dat_api<32>(&mod_typed->Core_datapath__mem_rd_data, "Core.datapath.mem_rd_data", "");
  dat_table["Core.datapath.regfile.io_rd_data"] = new dat_api<32>(&mod_typed->Core_datapath_regfile__io_rd_data, "Core.datapath.regfile.io_rd_data", "");
  dat_table["Core.control.mem_rd_write"] = new dat_api<1>(&mod_typed->Core_control__mem_rd_write, "Core.control.mem_rd_write", "");
  dat_table["Core.control.io_mem_rd_write"] = new dat_api<1>(&mod_typed->Core_control__io_mem_rd_write, "Core.control.io_mem_rd_write", "");
  dat_table["Core.datapath.io_control_mem_rd_write"] = new dat_api<1>(&mod_typed->Core_datapath__io_control_mem_rd_write, "Core.datapath.io_control_mem_rd_write", "");
  dat_table["Core.datapath.regfile.io_rd_enable"] = new dat_api<1>(&mod_typed->Core_datapath_regfile__io_rd_enable, "Core.datapath.regfile.io_rd_enable", "");
  dat_table["Core.datapath.regfile.io_rd_thread"] = new dat_api<3>(&mod_typed->Core_datapath_regfile__io_rd_thread, "Core.datapath.regfile.io_rd_thread", "");
  dat_table["Core.datapath.regfile.io_rd_addr"] = new dat_api<5>(&mod_typed->Core_datapath_regfile__io_rd_addr, "Core.datapath.regfile.io_rd_addr", "");
  mem_table["Core.datapath.regfile.regfile"] = new mem_api<32, 256>(&mod_typed->Core_datapath_regfile__regfile, "Core.datapath.regfile.regfile", "");
  dat_table["Core.datapath.regfile.io_rs2_thread"] = new dat_api<3>(&mod_typed->Core_datapath_regfile__io_rs2_thread, "Core.datapath.regfile.io_rs2_thread", "");
  dat_table["Core.datapath.regfile.io_rs2_addr"] = new dat_api<5>(&mod_typed->Core_datapath_regfile__io_rs2_addr, "Core.datapath.regfile.io_rs2_addr", "");
  dat_table["Core.datapath.regfile.dout2"] = new dat_api<32>(&mod_typed->Core_datapath_regfile__dout2, "Core.datapath.regfile.dout2", "");
  dat_table["Core.datapath.regfile.io_rs1_data"] = new dat_api<32>(&mod_typed->Core_datapath_regfile__io_rs1_data, "Core.datapath.regfile.io_rs1_data", "");
  dat_table["Core.datapath.wb_rd_data"] = new dat_api<32>(&mod_typed->Core_datapath__wb_rd_data, "Core.datapath.wb_rd_data", "");
  dat_table["Core.datapath.io_control_wb_rd_addr"] = new dat_api<5>(&mod_typed->Core_datapath__io_control_wb_rd_addr, "Core.datapath.io_control_wb_rd_addr", "");
  dat_table["Core.control.io_wb_rd_addr"] = new dat_api<5>(&mod_typed->Core_control__io_wb_rd_addr, "Core.control.io_wb_rd_addr", "");
  dat_table["Core.datapath.io_control_wb_tid"] = new dat_api<3>(&mod_typed->Core_datapath__io_control_wb_tid, "Core.datapath.io_control_wb_tid", "");
  dat_table["Core.control.io_wb_tid"] = new dat_api<3>(&mod_typed->Core_control__io_wb_tid, "Core.control.io_wb_tid", "");
  dat_table["Core.datapath.io_control_mem_rd_addr"] = new dat_api<5>(&mod_typed->Core_datapath__io_control_mem_rd_addr, "Core.datapath.io_control_mem_rd_addr", "");
  dat_table["Core.control.io_mem_rd_addr"] = new dat_api<5>(&mod_typed->Core_control__io_mem_rd_addr, "Core.control.io_mem_rd_addr", "");
  dat_table["Core.datapath.io_control_exe_rd_addr"] = new dat_api<5>(&mod_typed->Core_datapath__io_control_exe_rd_addr, "Core.datapath.io_control_exe_rd_addr", "");
  dat_table["Core.control.io_exe_rd_addr"] = new dat_api<5>(&mod_typed->Core_control__io_exe_rd_addr, "Core.control.io_exe_rd_addr", "");
  dat_table["Core.control.dec_rs1_sel"] = new dat_api<2>(&mod_typed->Core_control__dec_rs1_sel, "Core.control.dec_rs1_sel", "");
  dat_table["Core.control.io_dec_rs1_sel"] = new dat_api<2>(&mod_typed->Core_control__io_dec_rs1_sel, "Core.control.io_dec_rs1_sel", "");
  dat_table["Core.datapath.io_control_dec_rs1_sel"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_dec_rs1_sel, "Core.datapath.io_control_dec_rs1_sel", "");
  dat_table["Core.control.io_exe_rd_data_sel"] = new dat_api<2>(&mod_typed->Core_control__io_exe_rd_data_sel, "Core.control.io_exe_rd_data_sel", "");
  dat_table["Core.datapath.io_control_exe_rd_data_sel"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_exe_rd_data_sel, "Core.datapath.io_control_exe_rd_data_sel", "");
  dat_table["Core.datapath.csr.io_rw_data_out"] = new dat_api<32>(&mod_typed->Core_datapath_csr__io_rw_data_out, "Core.datapath.csr.io_rw_data_out", "");
  dat_table["Core.datapath.exe_rd_data"] = new dat_api<32>(&mod_typed->Core_datapath__exe_rd_data, "Core.datapath.exe_rd_data", "");
  dat_table["Core.datapath.dec_rs1_data"] = new dat_api<32>(&mod_typed->Core_datapath__dec_rs1_data, "Core.datapath.dec_rs1_data", "");
  dat_table["Core.datapath.exe_reg_rs1_data"] = new dat_api<32>(&mod_typed->Core_datapath__exe_reg_rs1_data, "Core.datapath.exe_reg_rs1_data", "");
  dat_table["Core.datapath.wb_reg_tid"] = new dat_api<3>(&mod_typed->Core_datapath__wb_reg_tid, "Core.datapath.wb_reg_tid", "");
  dat_table["Core.datapath.wb_reg_rd_addr"] = new dat_api<5>(&mod_typed->Core_datapath__wb_reg_rd_addr, "Core.datapath.wb_reg_rd_addr", "");
  dat_table["Core.datapath.exe_reg_rd_addr"] = new dat_api<5>(&mod_typed->Core_datapath__exe_reg_rd_addr, "Core.datapath.exe_reg_rd_addr", "");
  dat_table["Core.datapath.mem_reg_rd_addr"] = new dat_api<5>(&mod_typed->Core_datapath__mem_reg_rd_addr, "Core.datapath.mem_reg_rd_addr", "");
  dat_table["Core.datapath.regfile.io_rs2_data"] = new dat_api<32>(&mod_typed->Core_datapath_regfile__io_rs2_data, "Core.datapath.regfile.io_rs2_data", "");
  dat_table["Core.control.dec_rs2_sel"] = new dat_api<2>(&mod_typed->Core_control__dec_rs2_sel, "Core.control.dec_rs2_sel", "");
  dat_table["Core.control.io_dec_rs2_sel"] = new dat_api<2>(&mod_typed->Core_control__io_dec_rs2_sel, "Core.control.io_dec_rs2_sel", "");
  dat_table["Core.datapath.io_control_dec_rs2_sel"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_dec_rs2_sel, "Core.datapath.io_control_dec_rs2_sel", "");
  dat_table["Core.datapath.dec_rs2_data"] = new dat_api<32>(&mod_typed->Core_datapath__dec_rs2_data, "Core.datapath.dec_rs2_data", "");
  dat_table["Core.datapath.exe_reg_rs2_data"] = new dat_api<32>(&mod_typed->Core_datapath__exe_reg_rs2_data, "Core.datapath.exe_reg_rs2_data", "");
  dat_table["Core.datapath.exe_reg_csr_addr"] = new dat_api<12>(&mod_typed->Core_datapath__exe_reg_csr_addr, "Core.datapath.exe_reg_csr_addr", "");
  dat_table["Core.datapath.dec_imm_i"] = new dat_api<32>(&mod_typed->Core_datapath__dec_imm_i, "Core.datapath.dec_imm_i", "");
  dat_table["Core.datapath.dec_imm_z"] = new dat_api<32>(&mod_typed->Core_datapath__dec_imm_z, "Core.datapath.dec_imm_z", "");
  dat_table["Core.control.dec_imm_sel"] = new dat_api<3>(&mod_typed->Core_control__dec_imm_sel, "Core.control.dec_imm_sel", "");
  dat_table["Core.control.io_dec_imm_sel"] = new dat_api<3>(&mod_typed->Core_control__io_dec_imm_sel, "Core.control.io_dec_imm_sel", "");
  dat_table["Core.datapath.io_control_dec_imm_sel"] = new dat_api<3>(&mod_typed->Core_datapath__io_control_dec_imm_sel, "Core.datapath.io_control_dec_imm_sel", "");
  dat_table["Core.datapath.dec_imm_j"] = new dat_api<32>(&mod_typed->Core_datapath__dec_imm_j, "Core.datapath.dec_imm_j", "");
  dat_table["Core.datapath.dec_imm_u"] = new dat_api<32>(&mod_typed->Core_datapath__dec_imm_u, "Core.datapath.dec_imm_u", "");
  dat_table["Core.datapath.dec_imm_b"] = new dat_api<32>(&mod_typed->Core_datapath__dec_imm_b, "Core.datapath.dec_imm_b", "");
  dat_table["Core.datapath.dec_imm_s"] = new dat_api<32>(&mod_typed->Core_datapath__dec_imm_s, "Core.datapath.dec_imm_s", "");
  dat_table["Core.datapath.dec_imm"] = new dat_api<32>(&mod_typed->Core_datapath__dec_imm, "Core.datapath.dec_imm", "");
  dat_table["Core.control.dec_op2_sel"] = new dat_api<2>(&mod_typed->Core_control__dec_op2_sel, "Core.control.dec_op2_sel", "");
  dat_table["Core.control.io_dec_op2_sel"] = new dat_api<2>(&mod_typed->Core_control__io_dec_op2_sel, "Core.control.io_dec_op2_sel", "");
  dat_table["Core.datapath.io_control_dec_op2_sel"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_dec_op2_sel, "Core.datapath.io_control_dec_op2_sel", "");
  dat_table["Core.datapath.dec_csr_data"] = new dat_api<32>(&mod_typed->Core_datapath__dec_csr_data, "Core.datapath.dec_csr_data", "");
  dat_table["Core.datapath.exe_csr_data"] = new dat_api<32>(&mod_typed->Core_datapath__exe_csr_data, "Core.datapath.exe_csr_data", "");
  dat_table["Core.datapath.if_reg_pcs_7"] = new dat_api<32>(&mod_typed->Core_datapath__if_reg_pcs_7, "Core.datapath.if_reg_pcs_7", "");
  dat_table["Core.datapath.if_reg_pcs_6"] = new dat_api<32>(&mod_typed->Core_datapath__if_reg_pcs_6, "Core.datapath.if_reg_pcs_6", "");
  dat_table["Core.datapath.if_reg_pcs_5"] = new dat_api<32>(&mod_typed->Core_datapath__if_reg_pcs_5, "Core.datapath.if_reg_pcs_5", "");
  dat_table["Core.datapath.if_reg_pcs_4"] = new dat_api<32>(&mod_typed->Core_datapath__if_reg_pcs_4, "Core.datapath.if_reg_pcs_4", "");
  dat_table["Core.datapath.if_reg_pcs_3"] = new dat_api<32>(&mod_typed->Core_datapath__if_reg_pcs_3, "Core.datapath.if_reg_pcs_3", "");
  dat_table["Core.datapath.if_reg_pcs_2"] = new dat_api<32>(&mod_typed->Core_datapath__if_reg_pcs_2, "Core.datapath.if_reg_pcs_2", "");
  dat_table["Core.datapath.if_reg_pcs_1"] = new dat_api<32>(&mod_typed->Core_datapath__if_reg_pcs_1, "Core.datapath.if_reg_pcs_1", "");
  dat_table["Core.datapath.mem_reg_tid"] = new dat_api<3>(&mod_typed->Core_datapath__mem_reg_tid, "Core.datapath.mem_reg_tid", "");
  dat_table["Core.datapath.exe_reg_tid"] = new dat_api<3>(&mod_typed->Core_datapath__exe_reg_tid, "Core.datapath.exe_reg_tid", "");
  dat_table["Core.control.dec_op1_sel"] = new dat_api<2>(&mod_typed->Core_control__dec_op1_sel, "Core.control.dec_op1_sel", "");
  dat_table["Core.control.io_dec_op1_sel"] = new dat_api<2>(&mod_typed->Core_control__io_dec_op1_sel, "Core.control.io_dec_op1_sel", "");
  dat_table["Core.datapath.io_control_dec_op1_sel"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_dec_op1_sel, "Core.datapath.io_control_dec_op1_sel", "");
  dat_table["Core.datapath.dec_op1"] = new dat_api<32>(&mod_typed->Core_datapath__dec_op1, "Core.datapath.dec_op1", "");
  dat_table["Core.datapath.exe_reg_op1"] = new dat_api<32>(&mod_typed->Core_datapath__exe_reg_op1, "Core.datapath.exe_reg_op1", "");
  dat_table["Core.datapath.dec_reg_pc4"] = new dat_api<32>(&mod_typed->Core_datapath__dec_reg_pc4, "Core.datapath.dec_reg_pc4", "");
  dat_table["Core.datapath.exe_reg_pc4"] = new dat_api<32>(&mod_typed->Core_datapath__exe_reg_pc4, "Core.datapath.exe_reg_pc4", "");
  dat_table["Core.datapath.mem_reg_rd_data"] = new dat_api<32>(&mod_typed->Core_datapath__mem_reg_rd_data, "Core.datapath.mem_reg_rd_data", "");
  dat_table["Core.datapath.wb_reg_rd_data"] = new dat_api<32>(&mod_typed->Core_datapath__wb_reg_rd_data, "Core.datapath.wb_reg_rd_data", "");
  dat_table["Core.datapath.dec_reg_inst"] = new dat_api<32>(&mod_typed->Core_datapath__dec_reg_inst, "Core.datapath.dec_reg_inst", "");
  dat_table["Core.datapath.dec_op2"] = new dat_api<32>(&mod_typed->Core_datapath__dec_op2, "Core.datapath.dec_op2", "");
  dat_table["Core.datapath.exe_reg_op2"] = new dat_api<32>(&mod_typed->Core_datapath__exe_reg_op2, "Core.datapath.exe_reg_op2", "");
  dat_table["Core.datapath.if_reg_pcs_0"] = new dat_api<32>(&mod_typed->Core_datapath__if_reg_pcs_0, "Core.datapath.if_reg_pcs_0", "");
  dat_table["Core.datapath.if_reg_pc"] = new dat_api<32>(&mod_typed->Core_datapath__if_reg_pc, "Core.datapath.if_reg_pc", "");
  dat_table["Core.datapath.dec_reg_pc"] = new dat_api<32>(&mod_typed->Core_datapath__dec_reg_pc, "Core.datapath.dec_reg_pc", "");
  dat_table["Core.datapath.exe_reg_pc"] = new dat_api<32>(&mod_typed->Core_datapath__exe_reg_pc, "Core.datapath.exe_reg_pc", "");
  dat_table["Core.datapath.if_reg_tid"] = new dat_api<3>(&mod_typed->Core_datapath__if_reg_tid, "Core.datapath.if_reg_tid", "");
  dat_table["Core.datapath.dec_reg_tid"] = new dat_api<3>(&mod_typed->Core_datapath__dec_reg_tid, "Core.datapath.dec_reg_tid", "");
  dat_table["Core.datapath.csr.io_tmodes_5"] = new dat_api<2>(&mod_typed->Core_datapath_csr__io_tmodes_5, "Core.datapath.csr.io_tmodes_5", "");
  dat_table["Core.datapath.io_control_csr_tmodes_5"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_csr_tmodes_5, "Core.datapath.io_control_csr_tmodes_5", "");
  dat_table["Core.control.io_csr_tmodes_5"] = new dat_api<2>(&mod_typed->Core_control__io_csr_tmodes_5, "Core.control.io_csr_tmodes_5", "");
  dat_table["Core.control.scheduler.io_thread_modes_5"] = new dat_api<2>(&mod_typed->Core_control_scheduler__io_thread_modes_5, "Core.control.scheduler.io_thread_modes_5", "");
  dat_table["Core.datapath.csr.io_tmodes_4"] = new dat_api<2>(&mod_typed->Core_datapath_csr__io_tmodes_4, "Core.datapath.csr.io_tmodes_4", "");
  dat_table["Core.datapath.io_control_csr_tmodes_4"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_csr_tmodes_4, "Core.datapath.io_control_csr_tmodes_4", "");
  dat_table["Core.control.io_csr_tmodes_4"] = new dat_api<2>(&mod_typed->Core_control__io_csr_tmodes_4, "Core.control.io_csr_tmodes_4", "");
  dat_table["Core.control.scheduler.io_thread_modes_4"] = new dat_api<2>(&mod_typed->Core_control_scheduler__io_thread_modes_4, "Core.control.scheduler.io_thread_modes_4", "");
  dat_table["Core.datapath.csr.io_tmodes_3"] = new dat_api<2>(&mod_typed->Core_datapath_csr__io_tmodes_3, "Core.datapath.csr.io_tmodes_3", "");
  dat_table["Core.datapath.io_control_csr_tmodes_3"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_csr_tmodes_3, "Core.datapath.io_control_csr_tmodes_3", "");
  dat_table["Core.control.io_csr_tmodes_3"] = new dat_api<2>(&mod_typed->Core_control__io_csr_tmodes_3, "Core.control.io_csr_tmodes_3", "");
  dat_table["Core.control.scheduler.io_thread_modes_3"] = new dat_api<2>(&mod_typed->Core_control_scheduler__io_thread_modes_3, "Core.control.scheduler.io_thread_modes_3", "");
  dat_table["Core.datapath.csr.io_tmodes_2"] = new dat_api<2>(&mod_typed->Core_datapath_csr__io_tmodes_2, "Core.datapath.csr.io_tmodes_2", "");
  dat_table["Core.datapath.io_control_csr_tmodes_2"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_csr_tmodes_2, "Core.datapath.io_control_csr_tmodes_2", "");
  dat_table["Core.control.io_csr_tmodes_2"] = new dat_api<2>(&mod_typed->Core_control__io_csr_tmodes_2, "Core.control.io_csr_tmodes_2", "");
  dat_table["Core.control.scheduler.io_thread_modes_2"] = new dat_api<2>(&mod_typed->Core_control_scheduler__io_thread_modes_2, "Core.control.scheduler.io_thread_modes_2", "");
  dat_table["Core.datapath.csr.io_tmodes_1"] = new dat_api<2>(&mod_typed->Core_datapath_csr__io_tmodes_1, "Core.datapath.csr.io_tmodes_1", "");
  dat_table["Core.datapath.io_control_csr_tmodes_1"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_csr_tmodes_1, "Core.datapath.io_control_csr_tmodes_1", "");
  dat_table["Core.control.io_csr_tmodes_1"] = new dat_api<2>(&mod_typed->Core_control__io_csr_tmodes_1, "Core.control.io_csr_tmodes_1", "");
  dat_table["Core.control.scheduler.io_thread_modes_1"] = new dat_api<2>(&mod_typed->Core_control_scheduler__io_thread_modes_1, "Core.control.scheduler.io_thread_modes_1", "");
  dat_table["Core.datapath.csr.io_tmodes_0"] = new dat_api<2>(&mod_typed->Core_datapath_csr__io_tmodes_0, "Core.datapath.csr.io_tmodes_0", "");
  dat_table["Core.datapath.io_control_csr_tmodes_0"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_csr_tmodes_0, "Core.datapath.io_control_csr_tmodes_0", "");
  dat_table["Core.control.io_csr_tmodes_0"] = new dat_api<2>(&mod_typed->Core_control__io_csr_tmodes_0, "Core.control.io_csr_tmodes_0", "");
  dat_table["Core.control.scheduler.io_thread_modes_0"] = new dat_api<2>(&mod_typed->Core_control_scheduler__io_thread_modes_0, "Core.control.scheduler.io_thread_modes_0", "");
  dat_table["Core.datapath.csr.io_tmodes_6"] = new dat_api<2>(&mod_typed->Core_datapath_csr__io_tmodes_6, "Core.datapath.csr.io_tmodes_6", "");
  dat_table["Core.datapath.io_control_csr_tmodes_6"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_csr_tmodes_6, "Core.datapath.io_control_csr_tmodes_6", "");
  dat_table["Core.control.io_csr_tmodes_6"] = new dat_api<2>(&mod_typed->Core_control__io_csr_tmodes_6, "Core.control.io_csr_tmodes_6", "");
  dat_table["Core.control.scheduler.io_thread_modes_6"] = new dat_api<2>(&mod_typed->Core_control_scheduler__io_thread_modes_6, "Core.control.scheduler.io_thread_modes_6", "");
  dat_table["Core.datapath.csr.io_tmodes_7"] = new dat_api<2>(&mod_typed->Core_datapath_csr__io_tmodes_7, "Core.datapath.csr.io_tmodes_7", "");
  dat_table["Core.datapath.io_control_csr_tmodes_7"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_csr_tmodes_7, "Core.datapath.io_control_csr_tmodes_7", "");
  dat_table["Core.control.io_csr_tmodes_7"] = new dat_api<2>(&mod_typed->Core_control__io_csr_tmodes_7, "Core.control.io_csr_tmodes_7", "");
  dat_table["Core.control.scheduler.io_thread_modes_7"] = new dat_api<2>(&mod_typed->Core_control_scheduler__io_thread_modes_7, "Core.control.scheduler.io_thread_modes_7", "");
  dat_table["Core.datapath.csr.io_slots_7"] = new dat_api<4>(&mod_typed->Core_datapath_csr__io_slots_7, "Core.datapath.csr.io_slots_7", "");
  dat_table["Core.datapath.io_control_csr_slots_7"] = new dat_api<4>(&mod_typed->Core_datapath__io_control_csr_slots_7, "Core.datapath.io_control_csr_slots_7", "");
  dat_table["Core.control.io_csr_slots_7"] = new dat_api<4>(&mod_typed->Core_control__io_csr_slots_7, "Core.control.io_csr_slots_7", "");
  dat_table["Core.control.scheduler.io_slots_7"] = new dat_api<4>(&mod_typed->Core_control_scheduler__io_slots_7, "Core.control.scheduler.io_slots_7", "");
  dat_table["Core.datapath.csr.io_slots_6"] = new dat_api<4>(&mod_typed->Core_datapath_csr__io_slots_6, "Core.datapath.csr.io_slots_6", "");
  dat_table["Core.datapath.io_control_csr_slots_6"] = new dat_api<4>(&mod_typed->Core_datapath__io_control_csr_slots_6, "Core.datapath.io_control_csr_slots_6", "");
  dat_table["Core.control.io_csr_slots_6"] = new dat_api<4>(&mod_typed->Core_control__io_csr_slots_6, "Core.control.io_csr_slots_6", "");
  dat_table["Core.control.scheduler.io_slots_6"] = new dat_api<4>(&mod_typed->Core_control_scheduler__io_slots_6, "Core.control.scheduler.io_slots_6", "");
  dat_table["Core.datapath.csr.io_slots_5"] = new dat_api<4>(&mod_typed->Core_datapath_csr__io_slots_5, "Core.datapath.csr.io_slots_5", "");
  dat_table["Core.datapath.io_control_csr_slots_5"] = new dat_api<4>(&mod_typed->Core_datapath__io_control_csr_slots_5, "Core.datapath.io_control_csr_slots_5", "");
  dat_table["Core.control.io_csr_slots_5"] = new dat_api<4>(&mod_typed->Core_control__io_csr_slots_5, "Core.control.io_csr_slots_5", "");
  dat_table["Core.control.scheduler.io_slots_5"] = new dat_api<4>(&mod_typed->Core_control_scheduler__io_slots_5, "Core.control.scheduler.io_slots_5", "");
  dat_table["Core.datapath.csr.io_slots_4"] = new dat_api<4>(&mod_typed->Core_datapath_csr__io_slots_4, "Core.datapath.csr.io_slots_4", "");
  dat_table["Core.datapath.io_control_csr_slots_4"] = new dat_api<4>(&mod_typed->Core_datapath__io_control_csr_slots_4, "Core.datapath.io_control_csr_slots_4", "");
  dat_table["Core.control.io_csr_slots_4"] = new dat_api<4>(&mod_typed->Core_control__io_csr_slots_4, "Core.control.io_csr_slots_4", "");
  dat_table["Core.control.scheduler.io_slots_4"] = new dat_api<4>(&mod_typed->Core_control_scheduler__io_slots_4, "Core.control.scheduler.io_slots_4", "");
  dat_table["Core.datapath.csr.io_slots_3"] = new dat_api<4>(&mod_typed->Core_datapath_csr__io_slots_3, "Core.datapath.csr.io_slots_3", "");
  dat_table["Core.datapath.io_control_csr_slots_3"] = new dat_api<4>(&mod_typed->Core_datapath__io_control_csr_slots_3, "Core.datapath.io_control_csr_slots_3", "");
  dat_table["Core.control.io_csr_slots_3"] = new dat_api<4>(&mod_typed->Core_control__io_csr_slots_3, "Core.control.io_csr_slots_3", "");
  dat_table["Core.control.scheduler.io_slots_3"] = new dat_api<4>(&mod_typed->Core_control_scheduler__io_slots_3, "Core.control.scheduler.io_slots_3", "");
  dat_table["Core.datapath.csr.io_slots_2"] = new dat_api<4>(&mod_typed->Core_datapath_csr__io_slots_2, "Core.datapath.csr.io_slots_2", "");
  dat_table["Core.datapath.io_control_csr_slots_2"] = new dat_api<4>(&mod_typed->Core_datapath__io_control_csr_slots_2, "Core.datapath.io_control_csr_slots_2", "");
  dat_table["Core.control.io_csr_slots_2"] = new dat_api<4>(&mod_typed->Core_control__io_csr_slots_2, "Core.control.io_csr_slots_2", "");
  dat_table["Core.control.scheduler.io_slots_2"] = new dat_api<4>(&mod_typed->Core_control_scheduler__io_slots_2, "Core.control.scheduler.io_slots_2", "");
  dat_table["Core.datapath.csr.io_slots_1"] = new dat_api<4>(&mod_typed->Core_datapath_csr__io_slots_1, "Core.datapath.csr.io_slots_1", "");
  dat_table["Core.datapath.io_control_csr_slots_1"] = new dat_api<4>(&mod_typed->Core_datapath__io_control_csr_slots_1, "Core.datapath.io_control_csr_slots_1", "");
  dat_table["Core.control.io_csr_slots_1"] = new dat_api<4>(&mod_typed->Core_control__io_csr_slots_1, "Core.control.io_csr_slots_1", "");
  dat_table["Core.control.scheduler.io_slots_1"] = new dat_api<4>(&mod_typed->Core_control_scheduler__io_slots_1, "Core.control.scheduler.io_slots_1", "");
  dat_table["Core.datapath.csr.io_slots_0"] = new dat_api<4>(&mod_typed->Core_datapath_csr__io_slots_0, "Core.datapath.csr.io_slots_0", "");
  dat_table["Core.datapath.io_control_csr_slots_0"] = new dat_api<4>(&mod_typed->Core_datapath__io_control_csr_slots_0, "Core.datapath.io_control_csr_slots_0", "");
  dat_table["Core.control.io_csr_slots_0"] = new dat_api<4>(&mod_typed->Core_control__io_csr_slots_0, "Core.control.io_csr_slots_0", "");
  dat_table["Core.control.scheduler.io_slots_0"] = new dat_api<4>(&mod_typed->Core_control_scheduler__io_slots_0, "Core.control.scheduler.io_slots_0", "");
  dat_table["Core.control.scheduler.R273"] = new dat_api<1>(&mod_typed->Core_control_scheduler__R273, "Core.control.scheduler.R273", "");
  dat_table["Core.control.scheduler.R248"] = new dat_api<1>(&mod_typed->Core_control_scheduler__R248, "Core.control.scheduler.R248", "");
  dat_table["Core.control.scheduler.R233"] = new dat_api<1>(&mod_typed->Core_control_scheduler__R233, "Core.control.scheduler.R233", "");
  dat_table["Core.control.scheduler.R227"] = new dat_api<1>(&mod_typed->Core_control_scheduler__R227, "Core.control.scheduler.R227", "");
  dat_table["Core.control.scheduler.R222"] = new dat_api<1>(&mod_typed->Core_control_scheduler__R222, "Core.control.scheduler.R222", "");
  dat_table["Core.control.scheduler.R210"] = new dat_api<1>(&mod_typed->Core_control_scheduler__R210, "Core.control.scheduler.R210", "");
  dat_table["Core.control.scheduler.R196"] = new dat_api<1>(&mod_typed->Core_control_scheduler__R196, "Core.control.scheduler.R196", "");
  dat_table["Core.control.scheduler.R112"] = new dat_api<1>(&mod_typed->Core_control_scheduler__R112, "Core.control.scheduler.R112", "");
  dat_table["Core.control.scheduler.R87"] = new dat_api<1>(&mod_typed->Core_control_scheduler__R87, "Core.control.scheduler.R87", "");
  dat_table["Core.control.scheduler.R72"] = new dat_api<1>(&mod_typed->Core_control_scheduler__R72, "Core.control.scheduler.R72", "");
  dat_table["Core.control.scheduler.R66"] = new dat_api<1>(&mod_typed->Core_control_scheduler__R66, "Core.control.scheduler.R66", "");
  dat_table["Core.control.scheduler.R61"] = new dat_api<1>(&mod_typed->Core_control_scheduler__R61, "Core.control.scheduler.R61", "");
  dat_table["Core.control.scheduler.R49"] = new dat_api<1>(&mod_typed->Core_control_scheduler__R49, "Core.control.scheduler.R49", "");
  dat_table["Core.control.scheduler.R35"] = new dat_api<1>(&mod_typed->Core_control_scheduler__R35, "Core.control.scheduler.R35", "");
  dat_table["Core.control.dec_alu_type"] = new dat_api<4>(&mod_typed->Core_control__dec_alu_type, "Core.control.dec_alu_type", "");
  dat_table["Core.control.exe_reg_alu_type"] = new dat_api<4>(&mod_typed->Core_control__exe_reg_alu_type, "Core.control.exe_reg_alu_type", "");
  dat_table["Core.control.dec_br_type"] = new dat_api<3>(&mod_typed->Core_control__dec_br_type, "Core.control.dec_br_type", "");
  dat_table["Core.control.exe_reg_br_type"] = new dat_api<3>(&mod_typed->Core_control__exe_reg_br_type, "Core.control.exe_reg_br_type", "");
  dat_table["Core.control.dec_csr_type"] = new dat_api<2>(&mod_typed->Core_control__dec_csr_type, "Core.control.dec_csr_type", "");
  dat_table["Core.control.exe_reg_csr_type"] = new dat_api<2>(&mod_typed->Core_control__exe_reg_csr_type, "Core.control.exe_reg_csr_type", "");
  dat_table["Core.control.dec_mul_type"] = new dat_api<2>(&mod_typed->Core_control__dec_mul_type, "Core.control.dec_mul_type", "");
  dat_table["Core.control.exe_reg_mul_type"] = new dat_api<2>(&mod_typed->Core_control__exe_reg_mul_type, "Core.control.exe_reg_mul_type", "");
  dat_table["Core.control.dec_exe_rd_data_sel"] = new dat_api<2>(&mod_typed->Core_control__dec_exe_rd_data_sel, "Core.control.dec_exe_rd_data_sel", "");
  dat_table["Core.control.exe_reg_rd_data_sel"] = new dat_api<2>(&mod_typed->Core_control__exe_reg_rd_data_sel, "Core.control.exe_reg_rd_data_sel", "");
  dat_table["Core.control.dec_mem_type"] = new dat_api<4>(&mod_typed->Core_control__dec_mem_type, "Core.control.dec_mem_type", "");
  dat_table["Core.control.exe_reg_mem_type"] = new dat_api<4>(&mod_typed->Core_control__exe_reg_mem_type, "Core.control.exe_reg_mem_type", "");
  dat_table["Core.control.R364"] = new dat_api<2>(&mod_typed->Core_control__R364, "Core.control.R364", "");
  dat_table["Core.control.mem_reg_rd_data_sel"] = new dat_api<2>(&mod_typed->Core_control__mem_reg_rd_data_sel, "Core.control.mem_reg_rd_data_sel", "");
  dat_table["Core.control.mem_reg_exception"] = new dat_api<1>(&mod_typed->Core_control__mem_reg_exception, "Core.control.mem_reg_exception", "");
  dat_table["Core.control.scheduler.io_thread"] = new dat_api<3>(&mod_typed->Core_control_scheduler__io_thread, "Core.control.scheduler.io_thread", "");
  dat_table["Core.control.R284"] = new dat_api<3>(&mod_typed->Core_control__R284, "Core.control.R284", "");
  dat_table["Core.control.wb_reg_rd_write"] = new dat_api<1>(&mod_typed->Core_control__wb_reg_rd_write, "Core.control.wb_reg_rd_write", "");
  dat_table["Core.control.exe_reg_load"] = new dat_api<1>(&mod_typed->Core_control__exe_reg_load, "Core.control.exe_reg_load", "");
  dat_table["Core.control.dec_store"] = new dat_api<1>(&mod_typed->Core_control__dec_store, "Core.control.dec_store", "");
  dat_table["Core.control.exe_reg_store"] = new dat_api<1>(&mod_typed->Core_control__exe_reg_store, "Core.control.exe_reg_store", "");
  dat_table["Core.control.dec_csr"] = new dat_api<1>(&mod_typed->Core_control__dec_csr, "Core.control.dec_csr", "");
  dat_table["Core.control.exe_reg_csr_write"] = new dat_api<1>(&mod_typed->Core_control__exe_reg_csr_write, "Core.control.exe_reg_csr_write", "");
  dat_table["Core.control.dec_reg_cause"] = new dat_api<1>(&mod_typed->Core_control__dec_reg_cause, "Core.control.dec_reg_cause", "");
  dat_table["Core.control.dec_scall"] = new dat_api<1>(&mod_typed->Core_control__dec_scall, "Core.control.dec_scall", "");
  dat_table["Core.control.dec_ie"] = new dat_api<1>(&mod_typed->Core_control__dec_ie, "Core.control.dec_ie", "");
  dat_table["Core.control.dec_du"] = new dat_api<1>(&mod_typed->Core_control__dec_du, "Core.control.dec_du", "");
  dat_table["Core.control.dec_legal"] = new dat_api<1>(&mod_typed->Core_control__dec_legal, "Core.control.dec_legal", "");
  dat_table["Core.control.dec_cause"] = new dat_api<3>(&mod_typed->Core_control__dec_cause, "Core.control.dec_cause", "");
  dat_table["Core.control.exe_reg_cause"] = new dat_api<3>(&mod_typed->Core_control__exe_reg_cause, "Core.control.exe_reg_cause", "");
  dat_table["Core.control.R238"] = new dat_api<1>(&mod_typed->Core_control__R238, "Core.control.R238", "");
  dat_table["Core.control.R231"] = new dat_api<1>(&mod_typed->Core_control__R231, "Core.control.R231", "");
  dat_table["Core.control.exe_reg_sret"] = new dat_api<1>(&mod_typed->Core_control__exe_reg_sret, "Core.control.exe_reg_sret", "");
  dat_table["Core.control.dec_rd_en"] = new dat_api<1>(&mod_typed->Core_control__dec_rd_en, "Core.control.dec_rd_en", "");
  dat_table["Core.control.dec_rd_write"] = new dat_api<1>(&mod_typed->Core_control__dec_rd_write, "Core.control.dec_rd_write", "");
  dat_table["Core.control.exe_reg_rd_write"] = new dat_api<1>(&mod_typed->Core_control__exe_reg_rd_write, "Core.control.exe_reg_rd_write", "");
  dat_table["Core.control.mem_reg_rd_write"] = new dat_api<1>(&mod_typed->Core_control__mem_reg_rd_write, "Core.control.mem_reg_rd_write", "");
  dat_table["Core.control.mem_reg_valid"] = new dat_api<1>(&mod_typed->Core_control__mem_reg_valid, "Core.control.mem_reg_valid", "");
  dat_table["Core.control.scheduler.io_valid"] = new dat_api<1>(&mod_typed->Core_control_scheduler__io_valid, "Core.control.scheduler.io_valid", "");
  dat_table["Core.control.R206"] = new dat_api<1>(&mod_typed->Core_control__R206, "Core.control.R206", "");
  dat_table["Core.control.if_reg_valid"] = new dat_api<1>(&mod_typed->Core_control__if_reg_valid, "Core.control.if_reg_valid", "");
  dat_table["Core.control.stall_count_7"] = new dat_api<2>(&mod_typed->Core_control__stall_count_7, "Core.control.stall_count_7", "");
  dat_table["Core.control.stall_count_6"] = new dat_api<2>(&mod_typed->Core_control__stall_count_6, "Core.control.stall_count_6", "");
  dat_table["Core.control.stall_count_5"] = new dat_api<2>(&mod_typed->Core_control__stall_count_5, "Core.control.stall_count_5", "");
  dat_table["Core.control.stall_count_4"] = new dat_api<2>(&mod_typed->Core_control__stall_count_4, "Core.control.stall_count_4", "");
  dat_table["Core.control.stall_count_3"] = new dat_api<2>(&mod_typed->Core_control__stall_count_3, "Core.control.stall_count_3", "");
  dat_table["Core.control.stall_count_2"] = new dat_api<2>(&mod_typed->Core_control__stall_count_2, "Core.control.stall_count_2", "");
  dat_table["Core.control.stall_count_1"] = new dat_api<2>(&mod_typed->Core_control__stall_count_1, "Core.control.stall_count_1", "");
  dat_table["Core.control.stall_count_0"] = new dat_api<2>(&mod_typed->Core_control__stall_count_0, "Core.control.stall_count_0", "");
  dat_table["Core.control.exe_flush"] = new dat_api<1>(&mod_typed->Core_control__exe_flush, "Core.control.exe_flush", "");
  dat_table["Core.control.if_valid"] = new dat_api<1>(&mod_typed->Core_control__if_valid, "Core.control.if_valid", "");
  dat_table["Core.control.dec_reg_valid"] = new dat_api<1>(&mod_typed->Core_control__dec_reg_valid, "Core.control.dec_reg_valid", "");
  dat_table["Core.control.R84"] = new dat_api<1>(&mod_typed->Core_control__R84, "Core.control.R84", "");
  dat_table["Core.control.dec_jump"] = new dat_api<1>(&mod_typed->Core_control__dec_jump, "Core.control.dec_jump", "");
  dat_table["Core.control.exe_reg_jump"] = new dat_api<1>(&mod_typed->Core_control__exe_reg_jump, "Core.control.exe_reg_jump", "");
  dat_table["Core.control.dec_branch"] = new dat_api<1>(&mod_typed->Core_control__dec_branch, "Core.control.dec_branch", "");
  dat_table["Core.control.exe_reg_branch"] = new dat_api<1>(&mod_typed->Core_control__exe_reg_branch, "Core.control.exe_reg_branch", "");
  dat_table["Core.control.dec_valid"] = new dat_api<1>(&mod_typed->Core_control__dec_valid, "Core.control.dec_valid", "");
  dat_table["Core.control.exe_reg_valid"] = new dat_api<1>(&mod_typed->Core_control__exe_reg_valid, "Core.control.exe_reg_valid", "");
  dat_table["Core.datapath.io_control_if_exc_misaligned"] = new dat_api<1>(&mod_typed->Core_datapath__io_control_if_exc_misaligned, "Core.datapath.io_control_if_exc_misaligned", "");
  dat_table["Core.control.io_if_exc_misaligned"] = new dat_api<1>(&mod_typed->Core_control__io_if_exc_misaligned, "Core.control.io_if_exc_misaligned", "");
  dat_table["Core.control.dec_reg_exc"] = new dat_api<1>(&mod_typed->Core_control__dec_reg_exc, "Core.control.dec_reg_exc", "");
  dat_table["Core.control.dec_exc"] = new dat_api<1>(&mod_typed->Core_control__dec_exc, "Core.control.dec_exc", "");
  dat_table["Core.control.exe_reg_exc"] = new dat_api<1>(&mod_typed->Core_control__exe_reg_exc, "Core.control.exe_reg_exc", "");
  dat_table["Core.imem.io_bus_data_out"] = new dat_api<32>(&mod_typed->Core_imem__io_bus_data_out, "Core.imem.io_bus_data_out", "");
  dat_table["Core.io_imem_data_out"] = new dat_api<32>(&mod_typed->Core__io_imem_data_out, "Core.io_imem_data_out", "");
  dat_table["Core.imem.io_bus_ready"] = new dat_api<1>(&mod_typed->Core_imem__io_bus_ready, "Core.imem.io_bus_ready", "");
  dat_table["Core.io_imem_ready"] = new dat_api<1>(&mod_typed->Core__io_imem_ready, "Core.io_imem_ready", "");
  dat_table["Core.dmem.io_bus_data_out"] = new dat_api<32>(&mod_typed->Core_dmem__io_bus_data_out, "Core.dmem.io_bus_data_out", "");
  dat_table["Core.io_dmem_data_out"] = new dat_api<32>(&mod_typed->Core__io_dmem_data_out, "Core.io_dmem_data_out", "");
  dat_table["Core.datapath.loadstore.io_bus_addr"] = new dat_api<10>(&mod_typed->Core_datapath_loadstore__io_bus_addr, "Core.datapath.loadstore.io_bus_addr", "");
  dat_table["Core.datapath.io_bus_addr"] = new dat_api<10>(&mod_typed->Core_datapath__io_bus_addr, "Core.datapath.io_bus_addr", "");
  dat_table["Core.io_bus_addr"] = new dat_api<10>(&mod_typed->Core__io_bus_addr, "Core.io_bus_addr", "");
  dat_table["Core.datapath.loadstore.io_bus_enable"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__io_bus_enable, "Core.datapath.loadstore.io_bus_enable", "");
  dat_table["Core.datapath.io_bus_enable"] = new dat_api<1>(&mod_typed->Core_datapath__io_bus_enable, "Core.datapath.io_bus_enable", "");
  dat_table["Core.io_bus_enable"] = new dat_api<1>(&mod_typed->Core__io_bus_enable, "Core.io_bus_enable", "");
  dat_table["Core.datapath.loadstore.io_bus_write"] = new dat_api<1>(&mod_typed->Core_datapath_loadstore__io_bus_write, "Core.datapath.loadstore.io_bus_write", "");
  dat_table["Core.datapath.io_bus_write"] = new dat_api<1>(&mod_typed->Core_datapath__io_bus_write, "Core.datapath.io_bus_write", "");
  dat_table["Core.io_bus_write"] = new dat_api<1>(&mod_typed->Core__io_bus_write, "Core.io_bus_write", "");
  dat_table["Core.datapath.loadstore.io_bus_data_in"] = new dat_api<32>(&mod_typed->Core_datapath_loadstore__io_bus_data_in, "Core.datapath.loadstore.io_bus_data_in", "");
  dat_table["Core.datapath.io_bus_data_in"] = new dat_api<32>(&mod_typed->Core_datapath__io_bus_data_in, "Core.datapath.io_bus_data_in", "");
  dat_table["Core.io_bus_data_in"] = new dat_api<32>(&mod_typed->Core__io_bus_data_in, "Core.io_bus_data_in", "");
  dat_table["Core.datapath.csr.io_host_to_host"] = new dat_api<32>(&mod_typed->Core_datapath_csr__io_host_to_host, "Core.datapath.csr.io_host_to_host", "");
  dat_table["Core.datapath.io_host_to_host"] = new dat_api<32>(&mod_typed->Core_datapath__io_host_to_host, "Core.datapath.io_host_to_host", "");
  dat_table["Core.io_host_to_host"] = new dat_api<32>(&mod_typed->Core__io_host_to_host, "Core.io_host_to_host", "");
  dat_table["Core.datapath.csr.io_gpio_out_3"] = new dat_api<2>(&mod_typed->Core_datapath_csr__io_gpio_out_3, "Core.datapath.csr.io_gpio_out_3", "");
  dat_table["Core.datapath.io_gpio_out_3"] = new dat_api<2>(&mod_typed->Core_datapath__io_gpio_out_3, "Core.datapath.io_gpio_out_3", "");
  dat_table["Core.io_gpio_out_3"] = new dat_api<2>(&mod_typed->Core__io_gpio_out_3, "Core.io_gpio_out_3", "");
  dat_table["Core.datapath.csr.io_gpio_out_2"] = new dat_api<2>(&mod_typed->Core_datapath_csr__io_gpio_out_2, "Core.datapath.csr.io_gpio_out_2", "");
  dat_table["Core.datapath.io_gpio_out_2"] = new dat_api<2>(&mod_typed->Core_datapath__io_gpio_out_2, "Core.datapath.io_gpio_out_2", "");
  dat_table["Core.io_gpio_out_2"] = new dat_api<2>(&mod_typed->Core__io_gpio_out_2, "Core.io_gpio_out_2", "");
  dat_table["Core.datapath.csr.io_gpio_out_1"] = new dat_api<2>(&mod_typed->Core_datapath_csr__io_gpio_out_1, "Core.datapath.csr.io_gpio_out_1", "");
  dat_table["Core.datapath.io_gpio_out_1"] = new dat_api<2>(&mod_typed->Core_datapath__io_gpio_out_1, "Core.datapath.io_gpio_out_1", "");
  dat_table["Core.io_gpio_out_1"] = new dat_api<2>(&mod_typed->Core__io_gpio_out_1, "Core.io_gpio_out_1", "");
  dat_table["Core.datapath.csr.io_gpio_out_0"] = new dat_api<2>(&mod_typed->Core_datapath_csr__io_gpio_out_0, "Core.datapath.csr.io_gpio_out_0", "");
  dat_table["Core.datapath.io_gpio_out_0"] = new dat_api<2>(&mod_typed->Core_datapath__io_gpio_out_0, "Core.datapath.io_gpio_out_0", "");
  dat_table["Core.io_gpio_out_0"] = new dat_api<2>(&mod_typed->Core__io_gpio_out_0, "Core.io_gpio_out_0", "");
  dat_table["Core.io_dmem_data_in"] = new dat_api<32>(&mod_typed->Core__io_dmem_data_in, "Core.io_dmem_data_in", "");
  dat_table["Core.io_dmem_byte_write_0"] = new dat_api<1>(&mod_typed->Core__io_dmem_byte_write_0, "Core.io_dmem_byte_write_0", "");
  dat_table["Core.io_dmem_byte_write_1"] = new dat_api<1>(&mod_typed->Core__io_dmem_byte_write_1, "Core.io_dmem_byte_write_1", "");
  dat_table["Core.io_dmem_byte_write_2"] = new dat_api<1>(&mod_typed->Core__io_dmem_byte_write_2, "Core.io_dmem_byte_write_2", "");
  dat_table["Core.io_dmem_byte_write_3"] = new dat_api<1>(&mod_typed->Core__io_dmem_byte_write_3, "Core.io_dmem_byte_write_3", "");
  dat_table["Core.io_dmem_enable"] = new dat_api<1>(&mod_typed->Core__io_dmem_enable, "Core.io_dmem_enable", "");
  dat_table["Core.io_dmem_addr"] = new dat_api<12>(&mod_typed->Core__io_dmem_addr, "Core.io_dmem_addr", "");
  dat_table["Core.io_imem_data_in"] = new dat_api<32>(&mod_typed->Core__io_imem_data_in, "Core.io_imem_data_in", "");
  dat_table["Core.io_imem_write"] = new dat_api<1>(&mod_typed->Core__io_imem_write, "Core.io_imem_write", "");
  dat_table["Core.io_imem_enable"] = new dat_api<1>(&mod_typed->Core__io_imem_enable, "Core.io_imem_enable", "");
  dat_table["Core.io_imem_addr"] = new dat_api<12>(&mod_typed->Core__io_imem_addr, "Core.io_imem_addr", "");
}

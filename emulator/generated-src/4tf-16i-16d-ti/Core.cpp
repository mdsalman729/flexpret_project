#include "Core.h"

void Core_t::init ( val_t rand_init ) {
  this->__srand(rand_init);
  Core_dmem__dspm.randomize(&__rand_seed);
  Core_dmem__dout.randomize(&__rand_seed);
  Core_imem__dout_r.randomize(&__rand_seed);
  Core_imem__ispm.randomize(&__rand_seed);
  Core_imem__R0.randomize(&__rand_seed);
  Core_datapath_csr__reg_msip_1.randomize(&__rand_seed);
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
  Core_datapath_csr__reg_sup0_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_sup0_2.randomize(&__rand_seed);
  Core_datapath_csr__reg_sup0_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_sup0_0.randomize(&__rand_seed);
  Core_datapath_csr__reg_causes_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_causes_2.randomize(&__rand_seed);
  Core_datapath_csr__reg_causes_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_causes_0.randomize(&__rand_seed);
  Core_datapath_csr__reg_epcs_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_epcs_2.randomize(&__rand_seed);
  Core_datapath_csr__reg_epcs_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_epcs_0.randomize(&__rand_seed);
  Core_datapath_csr__reg_evecs_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_evecs_2.randomize(&__rand_seed);
  Core_datapath_csr__reg_evecs_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_evecs_0.randomize(&__rand_seed);
  Core_datapath_csr__reg_tmodes_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_tmodes_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_timer_3.randomize(&__rand_seed);
  Core_datapath_csr__reg_timer_1.randomize(&__rand_seed);
  Core_datapath_csr__reg_timer_0.randomize(&__rand_seed);
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
  Core_control_scheduler__R191.randomize(&__rand_seed);
  Core_control_scheduler__R185.randomize(&__rand_seed);
  Core_control_scheduler__R180.randomize(&__rand_seed);
  Core_control_scheduler__R111.randomize(&__rand_seed);
  Core_control_scheduler__R86.randomize(&__rand_seed);
  Core_control_scheduler__R71.randomize(&__rand_seed);
  Core_control_scheduler__R65.randomize(&__rand_seed);
  Core_control_scheduler__R60.randomize(&__rand_seed);
  Core_control_scheduler__R48.randomize(&__rand_seed);
  Core_control_scheduler__R34.randomize(&__rand_seed);
  Core_control__exe_reg_alu_type.randomize(&__rand_seed);
  Core_control__exe_reg_br_type.randomize(&__rand_seed);
  Core_control__exe_reg_csr_type.randomize(&__rand_seed);
  Core_control__exe_reg_mul_type.randomize(&__rand_seed);
  Core_control__exe_reg_rd_data_sel.randomize(&__rand_seed);
  Core_control__exe_reg_mem_type.randomize(&__rand_seed);
  Core_control__R269.randomize(&__rand_seed);
  Core_control__mem_reg_rd_data_sel.randomize(&__rand_seed);
  Core_control__mem_reg_exception.randomize(&__rand_seed);
  Core_control__R225.randomize(&__rand_seed);
  Core_control__wb_reg_rd_write.randomize(&__rand_seed);
  Core_control__exe_reg_load.randomize(&__rand_seed);
  Core_control__exe_reg_store.randomize(&__rand_seed);
  Core_control__exe_reg_csr_write.randomize(&__rand_seed);
  Core_control__dec_reg_cause.randomize(&__rand_seed);
  Core_control__exe_reg_cause.randomize(&__rand_seed);
  Core_control__R179.randomize(&__rand_seed);
  Core_control__R172.randomize(&__rand_seed);
  Core_control__exe_reg_sret.randomize(&__rand_seed);
  Core_control__exe_reg_rd_write.randomize(&__rand_seed);
  Core_control__mem_reg_rd_write.randomize(&__rand_seed);
  Core_control__mem_reg_valid.randomize(&__rand_seed);
  Core_control__R148.randomize(&__rand_seed);
  Core_control__if_reg_valid.randomize(&__rand_seed);
  Core_control__stall_count_3.randomize(&__rand_seed);
  Core_control__stall_count_2.randomize(&__rand_seed);
  Core_control__stall_count_1.randomize(&__rand_seed);
  Core_control__stall_count_0.randomize(&__rand_seed);
  Core_control__dec_reg_valid.randomize(&__rand_seed);
  Core_control__R81.randomize(&__rand_seed);
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
  T201 = mod_typed->T201;
  Core_control__exe_load = mod_typed->Core_control__exe_load;
  Core_control__io_exe_load = mod_typed->Core_control__io_exe_load;
  Core_datapath__io_control_exe_load = mod_typed->Core_datapath__io_control_exe_load;
  Core_datapath_loadstore__io_load = mod_typed->Core_datapath_loadstore__io_load;
  Core_datapath_loadstore__io_dmem_enable = mod_typed->Core_datapath_loadstore__io_dmem_enable;
  Core_datapath__io_dmem_enable = mod_typed->Core_datapath__io_dmem_enable;
  Core_dmem__io_core_enable = mod_typed->Core_dmem__io_core_enable;
  Core_dmem__dspm = mod_typed->Core_dmem__dspm;
  T204 = mod_typed->T204;
  Core_dmem__dout = mod_typed->Core_dmem__dout;
  Core_datapath__if_pc_plus4 = mod_typed->Core_datapath__if_pc_plus4;
  Core_datapath__io_control_if_tid = mod_typed->Core_datapath__io_control_if_tid;
  Core_control__io_if_tid = mod_typed->Core_control__io_if_tid;
  Core_datapath__io_control_dec_tid = mod_typed->Core_datapath__io_control_dec_tid;
  Core_control__io_dec_tid = mod_typed->Core_control__io_dec_tid;
  Core_datapath__io_control_dec_inst = mod_typed->Core_datapath__io_control_dec_inst;
  Core_control__io_dec_inst = mod_typed->Core_control__io_dec_inst;
  Core_control__dec_load = mod_typed->Core_control__dec_load;
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
  Core_datapath_csr__io_evecs_0 = mod_typed->Core_datapath_csr__io_evecs_0;
  Core_datapath_csr__io_evecs_1 = mod_typed->Core_datapath_csr__io_evecs_1;
  Core_datapath_csr__io_evecs_2 = mod_typed->Core_datapath_csr__io_evecs_2;
  Core_datapath_csr__io_evecs_3 = mod_typed->Core_datapath_csr__io_evecs_3;
  Core_datapath__mem_evec = mod_typed->Core_datapath__mem_evec;
  Core_datapath__next_pcs_0 = mod_typed->Core_datapath__next_pcs_0;
  Core_datapath__next_pcs_1 = mod_typed->Core_datapath__next_pcs_1;
  Core_control__next_tid = mod_typed->Core_control__next_tid;
  Core_control__io_next_tid = mod_typed->Core_control__io_next_tid;
  Core_datapath__io_control_next_tid = mod_typed->Core_datapath__io_control_next_tid;
  Core_datapath__next_pcs_2 = mod_typed->Core_datapath__next_pcs_2;
  Core_datapath__next_pcs_3 = mod_typed->Core_datapath__next_pcs_3;
  Core_datapath__next_pc = mod_typed->Core_datapath__next_pc;
  Core_datapath__io_imem_r_addr = mod_typed->Core_datapath__io_imem_r_addr;
  Core_imem__io_core_r_addr = mod_typed->Core_imem__io_core_r_addr;
  Core_control__next_valid = mod_typed->Core_control__next_valid;
  Core_control__io_next_valid = mod_typed->Core_control__io_next_valid;
  Core_datapath__io_control_next_valid = mod_typed->Core_datapath__io_control_next_valid;
  Core_datapath__io_imem_r_enable = mod_typed->Core_datapath__io_imem_r_enable;
  Core_imem__io_core_r_enable = mod_typed->Core_imem__io_core_r_enable;
  T367 = mod_typed->T367;
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
  T371 = mod_typed->T371;
  Core_datapath_loadstore__io_imem_rw_addr = mod_typed->Core_datapath_loadstore__io_imem_rw_addr;
  Core_datapath__io_imem_rw_addr = mod_typed->Core_datapath__io_imem_rw_addr;
  Core_imem__io_core_rw_addr = mod_typed->Core_imem__io_core_rw_addr;
  Core_imem__ispm = mod_typed->Core_imem__ispm;
  T375 = mod_typed->T375;
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
  Core_datapath__reset = mod_typed->Core_datapath__reset;
  Core_datapath_csr__reset = mod_typed->Core_datapath_csr__reset;
  T567 = mod_typed->T567;
  Core_datapath_csr__reg_msip_1 = mod_typed->Core_datapath_csr__reg_msip_1;
  T575 = mod_typed->T575;
  Core_datapath_csr__reg_mtie_3 = mod_typed->Core_datapath_csr__reg_mtie_3;
  T576 = mod_typed->T576;
  Core_datapath_csr__reg_prv1_3 = mod_typed->Core_datapath_csr__reg_prv1_3;
  T577 = mod_typed->T577;
  Core_datapath_csr__reg_ie1_3 = mod_typed->Core_datapath_csr__reg_ie1_3;
  T578 = mod_typed->T578;
  Core_datapath_csr__reg_prv_3 = mod_typed->Core_datapath_csr__reg_prv_3;
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
  T601 = mod_typed->T601;
  Core_datapath_csr__reg_ie_3 = mod_typed->Core_datapath_csr__reg_ie_3;
  T613 = mod_typed->T613;
  Core_datapath_csr__reg_msip_3 = mod_typed->Core_datapath_csr__reg_msip_3;
  T619 = mod_typed->T619;
  Core_datapath_csr__reg_mtie_2 = mod_typed->Core_datapath_csr__reg_mtie_2;
  T620 = mod_typed->T620;
  Core_datapath_csr__reg_prv1_2 = mod_typed->Core_datapath_csr__reg_prv1_2;
  T621 = mod_typed->T621;
  Core_datapath_csr__reg_ie1_2 = mod_typed->Core_datapath_csr__reg_ie1_2;
  T622 = mod_typed->T622;
  Core_datapath_csr__reg_prv_2 = mod_typed->Core_datapath_csr__reg_prv_2;
  T627 = mod_typed->T627;
  Core_datapath_csr__reg_ie_2 = mod_typed->Core_datapath_csr__reg_ie_2;
  T639 = mod_typed->T639;
  Core_datapath_csr__reg_msip_2 = mod_typed->Core_datapath_csr__reg_msip_2;
  T645 = mod_typed->T645;
  Core_datapath_csr__reg_mtie_1 = mod_typed->Core_datapath_csr__reg_mtie_1;
  T646 = mod_typed->T646;
  Core_datapath_csr__reg_prv1_1 = mod_typed->Core_datapath_csr__reg_prv1_1;
  T647 = mod_typed->T647;
  Core_datapath_csr__reg_ie1_1 = mod_typed->Core_datapath_csr__reg_ie1_1;
  T648 = mod_typed->T648;
  Core_datapath_csr__reg_prv_1 = mod_typed->Core_datapath_csr__reg_prv_1;
  T653 = mod_typed->T653;
  Core_datapath_csr__reg_ie_1 = mod_typed->Core_datapath_csr__reg_ie_1;
  T659 = mod_typed->T659;
  Core_datapath_csr__reg_mtie_0 = mod_typed->Core_datapath_csr__reg_mtie_0;
  T660 = mod_typed->T660;
  Core_datapath_csr__reg_prv1_0 = mod_typed->Core_datapath_csr__reg_prv1_0;
  T661 = mod_typed->T661;
  Core_datapath_csr__reg_ie1_0 = mod_typed->Core_datapath_csr__reg_ie1_0;
  T662 = mod_typed->T662;
  Core_datapath_csr__reg_prv_0 = mod_typed->Core_datapath_csr__reg_prv_0;
  T667 = mod_typed->T667;
  Core_datapath_csr__reg_ie_0 = mod_typed->Core_datapath_csr__reg_ie_0;
  T672 = mod_typed->T672;
  Core_datapath_csr__reg_dmem_protection_7 = mod_typed->Core_datapath_csr__reg_dmem_protection_7;
  T675 = mod_typed->T675;
  Core_datapath_csr__reg_dmem_protection_6 = mod_typed->Core_datapath_csr__reg_dmem_protection_6;
  T678 = mod_typed->T678;
  Core_datapath_csr__reg_dmem_protection_5 = mod_typed->Core_datapath_csr__reg_dmem_protection_5;
  T681 = mod_typed->T681;
  Core_datapath_csr__reg_dmem_protection_4 = mod_typed->Core_datapath_csr__reg_dmem_protection_4;
  T684 = mod_typed->T684;
  Core_datapath_csr__reg_dmem_protection_3 = mod_typed->Core_datapath_csr__reg_dmem_protection_3;
  T687 = mod_typed->T687;
  Core_datapath_csr__reg_dmem_protection_2 = mod_typed->Core_datapath_csr__reg_dmem_protection_2;
  T690 = mod_typed->T690;
  Core_datapath_csr__reg_dmem_protection_1 = mod_typed->Core_datapath_csr__reg_dmem_protection_1;
  T693 = mod_typed->T693;
  Core_datapath_csr__reg_dmem_protection_0 = mod_typed->Core_datapath_csr__reg_dmem_protection_0;
  T698 = mod_typed->T698;
  Core_datapath_csr__reg_imem_protection_7 = mod_typed->Core_datapath_csr__reg_imem_protection_7;
  T701 = mod_typed->T701;
  Core_datapath_csr__reg_imem_protection_6 = mod_typed->Core_datapath_csr__reg_imem_protection_6;
  T704 = mod_typed->T704;
  Core_datapath_csr__reg_imem_protection_5 = mod_typed->Core_datapath_csr__reg_imem_protection_5;
  T707 = mod_typed->T707;
  Core_datapath_csr__reg_imem_protection_4 = mod_typed->Core_datapath_csr__reg_imem_protection_4;
  T710 = mod_typed->T710;
  Core_datapath_csr__reg_imem_protection_3 = mod_typed->Core_datapath_csr__reg_imem_protection_3;
  T713 = mod_typed->T713;
  Core_datapath_csr__reg_imem_protection_2 = mod_typed->Core_datapath_csr__reg_imem_protection_2;
  T716 = mod_typed->T716;
  Core_datapath_csr__reg_imem_protection_1 = mod_typed->Core_datapath_csr__reg_imem_protection_1;
  T719 = mod_typed->T719;
  Core_datapath_csr__reg_imem_protection_0 = mod_typed->Core_datapath_csr__reg_imem_protection_0;
  T724 = mod_typed->T724;
  Core_datapath_csr__reg_gpo_protection_3 = mod_typed->Core_datapath_csr__reg_gpo_protection_3;
  T736 = mod_typed->T736;
  Core_datapath_csr__reg_gpos_3 = mod_typed->Core_datapath_csr__reg_gpos_3;
  T739 = mod_typed->T739;
  Core_datapath_csr__reg_gpo_protection_2 = mod_typed->Core_datapath_csr__reg_gpo_protection_2;
  T751 = mod_typed->T751;
  Core_datapath_csr__reg_gpos_2 = mod_typed->Core_datapath_csr__reg_gpos_2;
  T754 = mod_typed->T754;
  Core_datapath_csr__reg_gpo_protection_1 = mod_typed->Core_datapath_csr__reg_gpo_protection_1;
  T766 = mod_typed->T766;
  Core_datapath_csr__reg_gpos_1 = mod_typed->Core_datapath_csr__reg_gpos_1;
  T769 = mod_typed->T769;
  Core_datapath_csr__reg_gpo_protection_0 = mod_typed->Core_datapath_csr__reg_gpo_protection_0;
  T781 = mod_typed->T781;
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
  T787 = mod_typed->T787;
  Core_datapath_csr__reg_to_host = mod_typed->Core_datapath_csr__reg_to_host;
  T793 = mod_typed->T793;
  Core_datapath_csr__reg_sup0_3 = mod_typed->Core_datapath_csr__reg_sup0_3;
  T796 = mod_typed->T796;
  Core_datapath_csr__reg_sup0_2 = mod_typed->Core_datapath_csr__reg_sup0_2;
  T799 = mod_typed->T799;
  Core_datapath_csr__reg_sup0_1 = mod_typed->Core_datapath_csr__reg_sup0_1;
  T802 = mod_typed->T802;
  Core_datapath_csr__reg_sup0_0 = mod_typed->Core_datapath_csr__reg_sup0_0;
  Core_control__exe_any_cause = mod_typed->Core_control__exe_any_cause;
  Core_control__exe_inst_cause = mod_typed->Core_control__exe_inst_cause;
  Core_control__exe_exception_cause = mod_typed->Core_control__exe_exception_cause;
  Core_control__io_exe_cause = mod_typed->Core_control__io_exe_cause;
  Core_datapath__io_control_exe_cause = mod_typed->Core_datapath__io_control_exe_cause;
  Core_datapath_csr__io_cause = mod_typed->Core_datapath_csr__io_cause;
  T814 = mod_typed->T814;
  Core_datapath_csr__reg_causes_3 = mod_typed->Core_datapath_csr__reg_causes_3;
  T817 = mod_typed->T817;
  Core_datapath_csr__reg_causes_2 = mod_typed->Core_datapath_csr__reg_causes_2;
  T820 = mod_typed->T820;
  Core_datapath_csr__reg_causes_1 = mod_typed->Core_datapath_csr__reg_causes_1;
  T823 = mod_typed->T823;
  Core_datapath_csr__reg_causes_0 = mod_typed->Core_datapath_csr__reg_causes_0;
  Core_datapath_csr__io_epc = mod_typed->Core_datapath_csr__io_epc;
  T827 = mod_typed->T827;
  Core_datapath_csr__reg_epcs_3 = mod_typed->Core_datapath_csr__reg_epcs_3;
  T830 = mod_typed->T830;
  Core_datapath_csr__reg_epcs_2 = mod_typed->Core_datapath_csr__reg_epcs_2;
  T833 = mod_typed->T833;
  Core_datapath_csr__reg_epcs_1 = mod_typed->Core_datapath_csr__reg_epcs_1;
  T836 = mod_typed->T836;
  Core_datapath_csr__reg_epcs_0 = mod_typed->Core_datapath_csr__reg_epcs_0;
  T842 = mod_typed->T842;
  Core_datapath_csr__reg_evecs_3 = mod_typed->Core_datapath_csr__reg_evecs_3;
  T845 = mod_typed->T845;
  Core_datapath_csr__reg_evecs_2 = mod_typed->Core_datapath_csr__reg_evecs_2;
  T848 = mod_typed->T848;
  Core_datapath_csr__reg_evecs_1 = mod_typed->Core_datapath_csr__reg_evecs_1;
  T851 = mod_typed->T851;
  Core_datapath_csr__reg_evecs_0 = mod_typed->Core_datapath_csr__reg_evecs_0;
  Core_control__exe_valid = mod_typed->Core_control__exe_valid;
  Core_control__exe_sleep = mod_typed->Core_control__exe_sleep;
  Core_control__io_exe_sleep = mod_typed->Core_control__io_exe_sleep;
  Core_datapath__io_control_exe_sleep = mod_typed->Core_datapath__io_control_exe_sleep;
  Core_datapath_csr__io_sleep = mod_typed->Core_datapath_csr__io_sleep;
  Core_datapath_csr__sleep = mod_typed->Core_datapath_csr__sleep;
  Core_datapath_csr__wake_1 = mod_typed->Core_datapath_csr__wake_1;
  T873 = mod_typed->T873;
  Core_datapath_csr__reg_tmodes_1 = mod_typed->Core_datapath_csr__reg_tmodes_1;
  Core_datapath_csr__wake_3 = mod_typed->Core_datapath_csr__wake_3;
  T884 = mod_typed->T884;
  Core_datapath_csr__reg_tmodes_3 = mod_typed->Core_datapath_csr__reg_tmodes_3;
  Core_control__exe_ee = mod_typed->Core_control__exe_ee;
  Core_control__io_exe_ee = mod_typed->Core_control__io_exe_ee;
  Core_datapath__io_control_exe_ee = mod_typed->Core_datapath__io_control_exe_ee;
  Core_datapath_csr__io_ee = mod_typed->Core_datapath_csr__io_ee;
  Core_control__exe_ie = mod_typed->Core_control__exe_ie;
  Core_control__io_exe_ie = mod_typed->Core_control__io_exe_ie;
  Core_datapath__io_control_exe_ie = mod_typed->Core_datapath__io_control_exe_ie;
  Core_datapath_csr__io_ie = mod_typed->Core_datapath_csr__io_ie;
  T904 = mod_typed->T904;
  Core_datapath_csr__reg_timer_3 = mod_typed->Core_datapath_csr__reg_timer_3;
  T919 = mod_typed->T919;
  Core_datapath_csr__reg_timer_1 = mod_typed->Core_datapath_csr__reg_timer_1;
  T936 = mod_typed->T936;
  Core_datapath_csr__reg_timer_0 = mod_typed->Core_datapath_csr__reg_timer_0;
  T941 = mod_typed->T941;
  Core_datapath_csr__reg_compare_3 = mod_typed->Core_datapath_csr__reg_compare_3;
  T944 = mod_typed->T944;
  Core_datapath_csr__reg_compare_1 = mod_typed->Core_datapath_csr__reg_compare_1;
  T947 = mod_typed->T947;
  Core_datapath_csr__reg_compare_0 = mod_typed->Core_datapath_csr__reg_compare_0;
  T964 = mod_typed->T964;
  Core_datapath_csr__reg_timer_2 = mod_typed->Core_datapath_csr__reg_timer_2;
  T966 = mod_typed->T966;
  Core_datapath_csr__reg_time = mod_typed->Core_datapath_csr__reg_time;
  T969 = mod_typed->T969;
  Core_datapath_csr__reg_compare_2 = mod_typed->Core_datapath_csr__reg_compare_2;
  Core_datapath_csr__wake_2 = mod_typed->Core_datapath_csr__wake_2;
  T978 = mod_typed->T978;
  Core_datapath_csr__reg_tmodes_2 = mod_typed->Core_datapath_csr__reg_tmodes_2;
  Core_datapath_csr__wake_0 = mod_typed->Core_datapath_csr__wake_0;
  T987 = mod_typed->T987;
  Core_datapath_csr__reg_tmodes_0 = mod_typed->Core_datapath_csr__reg_tmodes_0;
  T992 = mod_typed->T992;
  Core_datapath_csr__reg_slots_7 = mod_typed->Core_datapath_csr__reg_slots_7;
  T995 = mod_typed->T995;
  Core_datapath_csr__reg_slots_6 = mod_typed->Core_datapath_csr__reg_slots_6;
  T998 = mod_typed->T998;
  Core_datapath_csr__reg_slots_5 = mod_typed->Core_datapath_csr__reg_slots_5;
  T1001 = mod_typed->T1001;
  Core_datapath_csr__reg_slots_4 = mod_typed->Core_datapath_csr__reg_slots_4;
  T1004 = mod_typed->T1004;
  Core_datapath_csr__reg_slots_3 = mod_typed->Core_datapath_csr__reg_slots_3;
  T1007 = mod_typed->T1007;
  Core_datapath_csr__reg_slots_2 = mod_typed->Core_datapath_csr__reg_slots_2;
  T1010 = mod_typed->T1010;
  Core_datapath_csr__reg_slots_1 = mod_typed->Core_datapath_csr__reg_slots_1;
  T1013 = mod_typed->T1013;
  Core_datapath_csr__reg_slots_0 = mod_typed->Core_datapath_csr__reg_slots_0;
  T1025 = mod_typed->T1025;
  Core_datapath_csr__reg_msip_0 = mod_typed->Core_datapath_csr__reg_msip_0;
  Core_datapath_loadstore__io_imem_r_addr = mod_typed->Core_datapath_loadstore__io_imem_r_addr;
  Core_datapath_loadstore__io_imem_r_enable = mod_typed->Core_datapath_loadstore__io_imem_r_enable;
  Core_datapath_loadstore__dmem_op_reg = mod_typed->Core_datapath_loadstore__dmem_op_reg;
  Core_datapath_loadstore__mem_type_reg = mod_typed->Core_datapath_loadstore__mem_type_reg;
  T1026 = mod_typed->T1026;
  Core_datapath_loadstore__addr_byte_reg = mod_typed->Core_datapath_loadstore__addr_byte_reg;
  Core_datapath_loadstore__imem_op_reg = mod_typed->Core_datapath_loadstore__imem_op_reg;
  Core_datapath_regfile__io_rs1_thread = mod_typed->Core_datapath_regfile__io_rs1_thread;
  Core_imem__io_core_r_data_out = mod_typed->Core_imem__io_core_r_data_out;
  Core_datapath__io_imem_r_data_out = mod_typed->Core_datapath__io_imem_r_data_out;
  Core_datapath_regfile__io_rs1_addr = mod_typed->Core_datapath_regfile__io_rs1_addr;
  T1031 = mod_typed->T1031;
  Core_datapath_regfile__dout1 = mod_typed->Core_datapath_regfile__dout1;
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
  T1062 = mod_typed->T1062;
  Core_datapath_regfile__regfile = mod_typed->Core_datapath_regfile__regfile;
  Core_datapath_regfile__io_rs2_thread = mod_typed->Core_datapath_regfile__io_rs2_thread;
  Core_datapath_regfile__io_rs2_addr = mod_typed->Core_datapath_regfile__io_rs2_addr;
  T1067 = mod_typed->T1067;
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
  T1095 = mod_typed->T1095;
  Core_datapath__exe_reg_rd_addr = mod_typed->Core_datapath__exe_reg_rd_addr;
  Core_datapath__mem_reg_rd_addr = mod_typed->Core_datapath__mem_reg_rd_addr;
  Core_datapath_regfile__io_rs2_data = mod_typed->Core_datapath_regfile__io_rs2_data;
  Core_control__dec_rs2_sel = mod_typed->Core_control__dec_rs2_sel;
  Core_control__io_dec_rs2_sel = mod_typed->Core_control__io_dec_rs2_sel;
  Core_datapath__io_control_dec_rs2_sel = mod_typed->Core_datapath__io_control_dec_rs2_sel;
  Core_datapath__dec_rs2_data = mod_typed->Core_datapath__dec_rs2_data;
  Core_datapath__exe_reg_rs2_data = mod_typed->Core_datapath__exe_reg_rs2_data;
  T1112 = mod_typed->T1112;
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
  T1186 = mod_typed->T1186;
  Core_datapath__if_reg_pcs_3 = mod_typed->Core_datapath__if_reg_pcs_3;
  T1187 = mod_typed->T1187;
  Core_datapath__if_reg_pcs_2 = mod_typed->Core_datapath__if_reg_pcs_2;
  T1188 = mod_typed->T1188;
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
  T1206 = mod_typed->T1206;
  Core_datapath__if_reg_pcs_0 = mod_typed->Core_datapath__if_reg_pcs_0;
  Core_datapath__if_reg_pc = mod_typed->Core_datapath__if_reg_pc;
  Core_datapath__dec_reg_pc = mod_typed->Core_datapath__dec_reg_pc;
  Core_datapath__exe_reg_pc = mod_typed->Core_datapath__exe_reg_pc;
  Core_datapath__if_reg_tid = mod_typed->Core_datapath__if_reg_tid;
  Core_datapath__dec_reg_tid = mod_typed->Core_datapath__dec_reg_tid;
  Core_datapath_csr__io_tmodes_1 = mod_typed->Core_datapath_csr__io_tmodes_1;
  Core_datapath__io_control_csr_tmodes_1 = mod_typed->Core_datapath__io_control_csr_tmodes_1;
  Core_control__io_csr_tmodes_1 = mod_typed->Core_control__io_csr_tmodes_1;
  Core_control_scheduler__io_thread_modes_1 = mod_typed->Core_control_scheduler__io_thread_modes_1;
  Core_datapath_csr__io_tmodes_0 = mod_typed->Core_datapath_csr__io_tmodes_0;
  Core_datapath__io_control_csr_tmodes_0 = mod_typed->Core_datapath__io_control_csr_tmodes_0;
  Core_control__io_csr_tmodes_0 = mod_typed->Core_control__io_csr_tmodes_0;
  Core_control_scheduler__io_thread_modes_0 = mod_typed->Core_control_scheduler__io_thread_modes_0;
  Core_datapath_csr__io_tmodes_2 = mod_typed->Core_datapath_csr__io_tmodes_2;
  Core_datapath__io_control_csr_tmodes_2 = mod_typed->Core_datapath__io_control_csr_tmodes_2;
  Core_control__io_csr_tmodes_2 = mod_typed->Core_control__io_csr_tmodes_2;
  Core_control_scheduler__io_thread_modes_2 = mod_typed->Core_control_scheduler__io_thread_modes_2;
  Core_datapath_csr__io_tmodes_3 = mod_typed->Core_datapath_csr__io_tmodes_3;
  Core_datapath__io_control_csr_tmodes_3 = mod_typed->Core_datapath__io_control_csr_tmodes_3;
  Core_control__io_csr_tmodes_3 = mod_typed->Core_control__io_csr_tmodes_3;
  Core_control_scheduler__io_thread_modes_3 = mod_typed->Core_control_scheduler__io_thread_modes_3;
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
  T1390 = mod_typed->T1390;
  Core_control_scheduler__R191 = mod_typed->Core_control_scheduler__R191;
  T1392 = mod_typed->T1392;
  Core_control_scheduler__R185 = mod_typed->Core_control_scheduler__R185;
  T1394 = mod_typed->T1394;
  Core_control_scheduler__R180 = mod_typed->Core_control_scheduler__R180;
  T1396 = mod_typed->T1396;
  Core_control_scheduler__R111 = mod_typed->Core_control_scheduler__R111;
  T1398 = mod_typed->T1398;
  Core_control_scheduler__R86 = mod_typed->Core_control_scheduler__R86;
  T1400 = mod_typed->T1400;
  Core_control_scheduler__R71 = mod_typed->Core_control_scheduler__R71;
  T1402 = mod_typed->T1402;
  Core_control_scheduler__R65 = mod_typed->Core_control_scheduler__R65;
  T1404 = mod_typed->T1404;
  Core_control_scheduler__R60 = mod_typed->Core_control_scheduler__R60;
  T1406 = mod_typed->T1406;
  Core_control_scheduler__R48 = mod_typed->Core_control_scheduler__R48;
  T1408 = mod_typed->T1408;
  Core_control_scheduler__R34 = mod_typed->Core_control_scheduler__R34;
  Core_control__dec_alu_type = mod_typed->Core_control__dec_alu_type;
  Core_control__exe_reg_alu_type = mod_typed->Core_control__exe_reg_alu_type;
  Core_control__dec_br_type = mod_typed->Core_control__dec_br_type;
  Core_control__exe_reg_br_type = mod_typed->Core_control__exe_reg_br_type;
  Core_control__dec_csr_type = mod_typed->Core_control__dec_csr_type;
  Core_control__exe_reg_csr_type = mod_typed->Core_control__exe_reg_csr_type;
  Core_control__exe_reg_mul_type = mod_typed->Core_control__exe_reg_mul_type;
  Core_control__dec_exe_rd_data_sel = mod_typed->Core_control__dec_exe_rd_data_sel;
  Core_control__exe_reg_rd_data_sel = mod_typed->Core_control__exe_reg_rd_data_sel;
  Core_control__dec_mem_type = mod_typed->Core_control__dec_mem_type;
  Core_control__exe_reg_mem_type = mod_typed->Core_control__exe_reg_mem_type;
  Core_control__dec_mem_rd_data_sel = mod_typed->Core_control__dec_mem_rd_data_sel;
  Core_control__R269 = mod_typed->Core_control__R269;
  Core_control__mem_reg_rd_data_sel = mod_typed->Core_control__mem_reg_rd_data_sel;
  Core_control__mem_reg_exception = mod_typed->Core_control__mem_reg_exception;
  Core_control_scheduler__io_thread = mod_typed->Core_control_scheduler__io_thread;
  Core_control__R225 = mod_typed->Core_control__R225;
  Core_control__wb_reg_rd_write = mod_typed->Core_control__wb_reg_rd_write;
  T1454 = mod_typed->T1454;
  Core_control__exe_reg_load = mod_typed->Core_control__exe_reg_load;
  Core_control__dec_store = mod_typed->Core_control__dec_store;
  T1459 = mod_typed->T1459;
  Core_control__exe_reg_store = mod_typed->Core_control__exe_reg_store;
  Core_control__dec_csr = mod_typed->Core_control__dec_csr;
  T1464 = mod_typed->T1464;
  Core_control__exe_reg_csr_write = mod_typed->Core_control__exe_reg_csr_write;
  Core_control__dec_reg_cause = mod_typed->Core_control__dec_reg_cause;
  Core_control__dec_scall = mod_typed->Core_control__dec_scall;
  Core_control__dec_ie = mod_typed->Core_control__dec_ie;
  Core_control__dec_du = mod_typed->Core_control__dec_du;
  Core_control__dec_legal = mod_typed->Core_control__dec_legal;
  Core_control__dec_cause = mod_typed->Core_control__dec_cause;
  T1519 = mod_typed->T1519;
  Core_control__exe_reg_cause = mod_typed->Core_control__exe_reg_cause;
  T1521 = mod_typed->T1521;
  Core_control__R179 = mod_typed->Core_control__R179;
  T1524 = mod_typed->T1524;
  Core_control__R172 = mod_typed->Core_control__R172;
  T1525 = mod_typed->T1525;
  Core_control__exe_reg_sret = mod_typed->Core_control__exe_reg_sret;
  Core_control__dec_rd_en = mod_typed->Core_control__dec_rd_en;
  Core_control__dec_rd_write = mod_typed->Core_control__dec_rd_write;
  T1544 = mod_typed->T1544;
  Core_control__exe_reg_rd_write = mod_typed->Core_control__exe_reg_rd_write;
  T1545 = mod_typed->T1545;
  Core_control__mem_reg_rd_write = mod_typed->Core_control__mem_reg_rd_write;
  T1546 = mod_typed->T1546;
  Core_control__mem_reg_valid = mod_typed->Core_control__mem_reg_valid;
  Core_control_scheduler__io_valid = mod_typed->Core_control_scheduler__io_valid;
  T1548 = mod_typed->T1548;
  Core_control__R148 = mod_typed->Core_control__R148;
  T1549 = mod_typed->T1549;
  Core_control__if_reg_valid = mod_typed->Core_control__if_reg_valid;
  T1561 = mod_typed->T1561;
  Core_control__stall_count_3 = mod_typed->Core_control__stall_count_3;
  T1572 = mod_typed->T1572;
  Core_control__stall_count_2 = mod_typed->Core_control__stall_count_2;
  T1583 = mod_typed->T1583;
  Core_control__stall_count_1 = mod_typed->Core_control__stall_count_1;
  T1594 = mod_typed->T1594;
  Core_control__stall_count_0 = mod_typed->Core_control__stall_count_0;
  Core_control__exe_flush = mod_typed->Core_control__exe_flush;
  Core_control__if_valid = mod_typed->Core_control__if_valid;
  T1600 = mod_typed->T1600;
  Core_control__dec_reg_valid = mod_typed->Core_control__dec_reg_valid;
  T1601 = mod_typed->T1601;
  Core_control__R81 = mod_typed->Core_control__R81;
  Core_control__dec_jump = mod_typed->Core_control__dec_jump;
  T1602 = mod_typed->T1602;
  Core_control__exe_reg_jump = mod_typed->Core_control__exe_reg_jump;
  Core_control__dec_branch = mod_typed->Core_control__dec_branch;
  T1605 = mod_typed->T1605;
  Core_control__exe_reg_branch = mod_typed->Core_control__exe_reg_branch;
  Core_control__dec_valid = mod_typed->Core_control__dec_valid;
  T1609 = mod_typed->T1609;
  Core_control__exe_reg_valid = mod_typed->Core_control__exe_reg_valid;
  Core_datapath__io_control_if_exc_misaligned = mod_typed->Core_datapath__io_control_if_exc_misaligned;
  Core_control__io_if_exc_misaligned = mod_typed->Core_control__io_if_exc_misaligned;
  Core_control__dec_reg_exc = mod_typed->Core_control__dec_reg_exc;
  Core_control__dec_exc = mod_typed->Core_control__dec_exc;
  T1612 = mod_typed->T1612;
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
  Core__io_int_exts_4 = mod_typed->Core__io_int_exts_4;
  Core__io_int_exts_5 = mod_typed->Core__io_int_exts_5;
  Core__io_int_exts_6 = mod_typed->Core__io_int_exts_6;
  Core__io_int_exts_7 = mod_typed->Core__io_int_exts_7;
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
  fputs("$var wire 1 \x78 io_int_exts_0 $end\n", f);
  fputs("$var wire 1 \x7b io_int_exts_1 $end\n", f);
  fputs("$var wire 1 \x7e io_int_exts_2 $end\n", f);
  fputs("$var wire 1 \x23\x22 io_int_exts_3 $end\n", f);
  fputs("$var wire 1 \x46\x22 io_gpio_in_3 $end\n", f);
  fputs("$var wire 1 \x4a\x22 io_gpio_in_2 $end\n", f);
  fputs("$var wire 1 \x4e\x22 io_gpio_in_1 $end\n", f);
  fputs("$var wire 1 \x52\x22 io_gpio_in_0 $end\n", f);
  fputs("$var wire 1 \x45\x23 io_imem_ready $end\n", f);
  fputs("$var wire 1 \x48\x23 io_bus_enable $end\n", f);
  fputs("$var wire 1 \x4b\x23 io_bus_write $end\n", f);
  fputs("$var wire 1 \x4c\x23 io_int_exts_4 $end\n", f);
  fputs("$var wire 1 \x4d\x23 io_int_exts_5 $end\n", f);
  fputs("$var wire 1 \x4e\x23 io_int_exts_6 $end\n", f);
  fputs("$var wire 1 \x4f\x23 io_int_exts_7 $end\n", f);
  fputs("$var wire 1 \x50\x23 io_dmem_byte_write_0 $end\n", f);
  fputs("$var wire 1 \x51\x23 io_dmem_byte_write_1 $end\n", f);
  fputs("$var wire 1 \x52\x23 io_dmem_byte_write_2 $end\n", f);
  fputs("$var wire 1 \x53\x23 io_dmem_byte_write_3 $end\n", f);
  fputs("$var wire 1 \x54\x23 io_dmem_enable $end\n", f);
  fputs("$var wire 1 \x55\x23 io_imem_write $end\n", f);
  fputs("$var wire 1 \x56\x23 io_imem_enable $end\n", f);
  fputs("$var wire 2 \x64\x24 io_gpio_out_3 $end\n", f);
  fputs("$var wire 2 \x67\x24 io_gpio_out_2 $end\n", f);
  fputs("$var wire 2 \x6a\x24 io_gpio_out_1 $end\n", f);
  fputs("$var wire 2 \x6d\x24 io_gpio_out_0 $end\n", f);
  fputs("$var wire 10 \x3a\x26 io_bus_addr $end\n", f);
  fputs("$var wire 12 \x46\x26 io_dmem_addr $end\n", f);
  fputs("$var wire 12 \x47\x26 io_imem_addr $end\n", f);
  fputs("$var wire 32 \x72\x26 io_bus_data_out $end\n", f);
  fputs("$var wire 32 \x44\x27 io_imem_data_out $end\n", f);
  fputs("$var wire 32 \x46\x27 io_dmem_data_out $end\n", f);
  fputs("$var wire 32 \x49\x27 io_bus_data_in $end\n", f);
  fputs("$var wire 32 \x4c\x27 io_host_to_host $end\n", f);
  fputs("$var wire 32 \x4d\x27 io_dmem_data_in $end\n", f);
  fputs("$var wire 32 \x4e\x27 io_imem_data_in $end\n", f);
  fputs("$scope module control $end\n", f);
  fputs("$var wire 1 \x24 io_exe_int_ext $end\n", f);
  fputs("$var wire 1 \x29 io_exe_valid $end\n", f);
  fputs("$var wire 1 \x2f io_exe_int_expire $end\n", f);
  fputs("$var wire 1 \x33 io_exe_exc_expire $end\n", f);
  fputs("$var wire 1 \x34 exe_any_exc $end\n", f);
  fputs("$var wire 1 \x35 exe_kill $end\n", f);
  fputs("$var wire 1 \x36 io_exe_kill $end\n", f);
  fputs("$var wire 1 \x3a exe_store $end\n", f);
  fputs("$var wire 1 \x3b io_exe_store $end\n", f);
  fputs("$var wire 1 \x50 exe_load $end\n", f);
  fputs("$var wire 1 \x51 io_exe_load $end\n", f);
  fputs("$var wire 1 \x57 dec_load $end\n", f);
  fputs("$var wire 1 \x58 dec_fence_i $end\n", f);
  fputs("$var wire 1 \x59 dec_stall $end\n", f);
  fputs("$var wire 1 \x5a if_pre_valid $end\n", f);
  fputs("$var wire 1 \x5d io_exe_expire $end\n", f);
  fputs("$var wire 1 \x5e exe_du $end\n", f);
  fputs("$var wire 1 \x64 io_exe_br_cond $end\n", f);
  fputs("$var wire 1 \x65 exe_brjmp $end\n", f);
  fputs("$var wire 1 \x66 next_valid $end\n", f);
  fputs("$var wire 1 \x67 io_next_valid $end\n", f);
  fputs("$var wire 1 \x73 exe_csr_write $end\n", f);
  fputs("$var wire 1 \x74 io_exe_csr_write $end\n", f);
  fputs("$var wire 1 \x2d\x22 io_exe_exc_store_misaligned $end\n", f);
  fputs("$var wire 1 \x31\x22 io_exe_exc_load_misaligned $end\n", f);
  fputs("$var wire 1 \x34\x22 io_exe_exc_priv_inst $end\n", f);
  fputs("$var wire 1 \x35\x22 exe_inst_exc $end\n", f);
  fputs("$var wire 1 \x36\x22 exe_exception $end\n", f);
  fputs("$var wire 1 \x37\x22 io_exe_exception $end\n", f);
  fputs("$var wire 1 \x56\x22 exe_valid $end\n", f);
  fputs("$var wire 1 \x57\x22 exe_sleep $end\n", f);
  fputs("$var wire 1 \x58\x22 io_exe_sleep $end\n", f);
  fputs("$var wire 1 \x5e\x22 exe_ee $end\n", f);
  fputs("$var wire 1 \x5f\x22 io_exe_ee $end\n", f);
  fputs("$var wire 1 \x62\x22 exe_ie $end\n", f);
  fputs("$var wire 1 \x63\x22 io_exe_ie $end\n", f);
  fputs("$var wire 1 \x6c\x22 mem_rd_write $end\n", f);
  fputs("$var wire 1 \x6d\x22 io_mem_rd_write $end\n", f);
  fputs("$var wire 1 \x70\x22 reset $end\n", f);
  fputs("$var wire 1 \x7c\x22 mem_reg_exception $end\n", f);
  fputs("$var wire 1 \x7d\x22 wb_reg_rd_write $end\n", f);
  fputs("$var wire 1 \x7e\x22 exe_reg_load $end\n", f);
  fputs("$var wire 1 \x21\x23 dec_store $end\n", f);
  fputs("$var wire 1 \x22\x23 exe_reg_store $end\n", f);
  fputs("$var wire 1 \x23\x23 dec_csr $end\n", f);
  fputs("$var wire 1 \x24\x23 exe_reg_csr_write $end\n", f);
  fputs("$var wire 1 \x25\x23 dec_reg_cause $end\n", f);
  fputs("$var wire 1 \x26\x23 dec_scall $end\n", f);
  fputs("$var wire 1 \x27\x23 dec_ie $end\n", f);
  fputs("$var wire 1 \x28\x23 dec_du $end\n", f);
  fputs("$var wire 1 \x29\x23 dec_legal $end\n", f);
  fputs("$var wire 1 \x2a\x23 R179 $end\n", f);
  fputs("$var wire 1 \x2b\x23 R172 $end\n", f);
  fputs("$var wire 1 \x2c\x23 exe_reg_sret $end\n", f);
  fputs("$var wire 1 \x2d\x23 dec_rd_en $end\n", f);
  fputs("$var wire 1 \x2e\x23 dec_rd_write $end\n", f);
  fputs("$var wire 1 \x2f\x23 exe_reg_rd_write $end\n", f);
  fputs("$var wire 1 \x30\x23 mem_reg_rd_write $end\n", f);
  fputs("$var wire 1 \x31\x23 mem_reg_valid $end\n", f);
  fputs("$var wire 1 \x33\x23 R148 $end\n", f);
  fputs("$var wire 1 \x34\x23 if_reg_valid $end\n", f);
  fputs("$var wire 1 \x35\x23 exe_flush $end\n", f);
  fputs("$var wire 1 \x36\x23 if_valid $end\n", f);
  fputs("$var wire 1 \x37\x23 dec_reg_valid $end\n", f);
  fputs("$var wire 1 \x38\x23 R81 $end\n", f);
  fputs("$var wire 1 \x39\x23 dec_jump $end\n", f);
  fputs("$var wire 1 \x3a\x23 exe_reg_jump $end\n", f);
  fputs("$var wire 1 \x3b\x23 dec_branch $end\n", f);
  fputs("$var wire 1 \x3c\x23 exe_reg_branch $end\n", f);
  fputs("$var wire 1 \x3d\x23 dec_valid $end\n", f);
  fputs("$var wire 1 \x3e\x23 exe_reg_valid $end\n", f);
  fputs("$var wire 1 \x40\x23 io_if_exc_misaligned $end\n", f);
  fputs("$var wire 1 \x41\x23 dec_reg_exc $end\n", f);
  fputs("$var wire 1 \x42\x23 dec_exc $end\n", f);
  fputs("$var wire 1 \x43\x23 exe_reg_exc $end\n", f);
  fputs("$var wire 2 \x5a\x23 io_if_tid $end\n", f);
  fputs("$var wire 2 \x5c\x23 io_dec_tid $end\n", f);
  fputs("$var wire 2 \x5e\x23 io_exe_tid $end\n", f);
  fputs("$var wire 2 \x60\x23 io_mem_tid $end\n", f);
  fputs("$var wire 2 \x61\x23 next_pc_sel_0 $end\n", f);
  fputs("$var wire 2 \x62\x23 io_next_pc_sel_0 $end\n", f);
  fputs("$var wire 2 \x64\x23 next_pc_sel_1 $end\n", f);
  fputs("$var wire 2 \x65\x23 io_next_pc_sel_1 $end\n", f);
  fputs("$var wire 2 \x67\x23 next_pc_sel_2 $end\n", f);
  fputs("$var wire 2 \x68\x23 io_next_pc_sel_2 $end\n", f);
  fputs("$var wire 2 \x6a\x23 next_pc_sel_3 $end\n", f);
  fputs("$var wire 2 \x6b\x23 io_next_pc_sel_3 $end\n", f);
  fputs("$var wire 2 \x6d\x23 next_tid $end\n", f);
  fputs("$var wire 2 \x6e\x23 io_next_tid $end\n", f);
  fputs("$var wire 2 \x70\x23 io_exe_csr_type $end\n", f);
  fputs("$var wire 2 \x2b\x24 io_mem_rd_data_sel $end\n", f);
  fputs("$var wire 2 \x30\x24 io_wb_tid $end\n", f);
  fputs("$var wire 2 \x31\x24 dec_rs1_sel $end\n", f);
  fputs("$var wire 2 \x32\x24 io_dec_rs1_sel $end\n", f);
  fputs("$var wire 2 \x34\x24 io_exe_rd_data_sel $end\n", f);
  fputs("$var wire 2 \x37\x24 dec_rs2_sel $end\n", f);
  fputs("$var wire 2 \x38\x24 io_dec_rs2_sel $end\n", f);
  fputs("$var wire 2 \x3a\x24 dec_op2_sel $end\n", f);
  fputs("$var wire 2 \x3b\x24 io_dec_op2_sel $end\n", f);
  fputs("$var wire 2 \x3f\x24 dec_op1_sel $end\n", f);
  fputs("$var wire 2 \x40\x24 io_dec_op1_sel $end\n", f);
  fputs("$var wire 2 \x46\x24 io_csr_tmodes_1 $end\n", f);
  fputs("$var wire 2 \x4a\x24 io_csr_tmodes_0 $end\n", f);
  fputs("$var wire 2 \x4e\x24 io_csr_tmodes_2 $end\n", f);
  fputs("$var wire 2 \x52\x24 io_csr_tmodes_3 $end\n", f);
  fputs("$var wire 2 \x54\x24 dec_csr_type $end\n", f);
  fputs("$var wire 2 \x55\x24 exe_reg_csr_type $end\n", f);
  fputs("$var wire 2 \x56\x24 exe_reg_mul_type $end\n", f);
  fputs("$var wire 2 \x57\x24 dec_exe_rd_data_sel $end\n", f);
  fputs("$var wire 2 \x58\x24 exe_reg_rd_data_sel $end\n", f);
  fputs("$var wire 2 \x59\x24 dec_mem_rd_data_sel $end\n", f);
  fputs("$var wire 2 \x5a\x24 R269 $end\n", f);
  fputs("$var wire 2 \x5b\x24 mem_reg_rd_data_sel $end\n", f);
  fputs("$var wire 2 \x5d\x24 R225 $end\n", f);
  fputs("$var wire 2 \x5e\x24 stall_count_3 $end\n", f);
  fputs("$var wire 2 \x5f\x24 stall_count_2 $end\n", f);
  fputs("$var wire 2 \x60\x24 stall_count_1 $end\n", f);
  fputs("$var wire 2 \x61\x24 stall_count_0 $end\n", f);
  fputs("$var wire 3 \x6e\x24 io_exe_br_type $end\n", f);
  fputs("$var wire 3 \x70\x24 dec_imm_sel $end\n", f);
  fputs("$var wire 3 \x71\x24 io_dec_imm_sel $end\n", f);
  fputs("$var wire 3 \x73\x24 dec_br_type $end\n", f);
  fputs("$var wire 3 \x74\x24 exe_reg_br_type $end\n", f);
  fputs("$var wire 3 \x75\x24 dec_cause $end\n", f);
  fputs("$var wire 3 \x76\x24 exe_reg_cause $end\n", f);
  fputs("$var wire 4 \x77\x24 io_exe_alu_type $end\n", f);
  fputs("$var wire 4 \x79\x24 io_exe_mem_type $end\n", f);
  fputs("$var wire 4 \x52\x25 exe_inst_cause $end\n", f);
  fputs("$var wire 4 \x5e\x25 io_csr_slots_7 $end\n", f);
  fputs("$var wire 4 \x62\x25 io_csr_slots_6 $end\n", f);
  fputs("$var wire 4 \x66\x25 io_csr_slots_5 $end\n", f);
  fputs("$var wire 4 \x6a\x25 io_csr_slots_4 $end\n", f);
  fputs("$var wire 4 \x6e\x25 io_csr_slots_3 $end\n", f);
  fputs("$var wire 4 \x72\x25 io_csr_slots_2 $end\n", f);
  fputs("$var wire 4 \x76\x25 io_csr_slots_1 $end\n", f);
  fputs("$var wire 4 \x7a\x25 io_csr_slots_0 $end\n", f);
  fputs("$var wire 4 \x7c\x25 dec_alu_type $end\n", f);
  fputs("$var wire 4 \x7d\x25 exe_reg_alu_type $end\n", f);
  fputs("$var wire 4 \x7e\x25 dec_mem_type $end\n", f);
  fputs("$var wire 4 \x21\x26 exe_reg_mem_type $end\n", f);
  fputs("$var wire 5 \x23\x26 exe_any_cause $end\n", f);
  fputs("$var wire 5 \x24\x26 exe_exception_cause $end\n", f);
  fputs("$var wire 5 \x25\x26 io_exe_cause $end\n", f);
  fputs("$var wire 5 \x30\x26 io_wb_rd_addr $end\n", f);
  fputs("$var wire 5 \x32\x26 io_mem_rd_addr $end\n", f);
  fputs("$var wire 5 \x34\x26 io_exe_rd_addr $end\n", f);
  fputs("$var wire 32 \x53\x26 io_dec_inst $end\n", f);
  fputs("$scope module scheduler $end\n", f);
  fputs("$var wire 1 \x71\x22 reset $end\n", f);
  fputs("$var wire 1 \x72\x22 R191 $end\n", f);
  fputs("$var wire 1 \x73\x22 R185 $end\n", f);
  fputs("$var wire 1 \x74\x22 R180 $end\n", f);
  fputs("$var wire 1 \x75\x22 R111 $end\n", f);
  fputs("$var wire 1 \x76\x22 R86 $end\n", f);
  fputs("$var wire 1 \x77\x22 R71 $end\n", f);
  fputs("$var wire 1 \x78\x22 R65 $end\n", f);
  fputs("$var wire 1 \x79\x22 R60 $end\n", f);
  fputs("$var wire 1 \x7a\x22 R48 $end\n", f);
  fputs("$var wire 1 \x7b\x22 R34 $end\n", f);
  fputs("$var wire 1 \x32\x23 io_valid $end\n", f);
  fputs("$var wire 2 \x47\x24 io_thread_modes_1 $end\n", f);
  fputs("$var wire 2 \x4b\x24 io_thread_modes_0 $end\n", f);
  fputs("$var wire 2 \x4f\x24 io_thread_modes_2 $end\n", f);
  fputs("$var wire 2 \x53\x24 io_thread_modes_3 $end\n", f);
  fputs("$var wire 2 \x5c\x24 io_thread $end\n", f);
  fputs("$var wire 4 \x5f\x25 io_slots_7 $end\n", f);
  fputs("$var wire 4 \x63\x25 io_slots_6 $end\n", f);
  fputs("$var wire 4 \x67\x25 io_slots_5 $end\n", f);
  fputs("$var wire 4 \x6b\x25 io_slots_4 $end\n", f);
  fputs("$var wire 4 \x6f\x25 io_slots_3 $end\n", f);
  fputs("$var wire 4 \x73\x25 io_slots_2 $end\n", f);
  fputs("$var wire 4 \x77\x25 io_slots_1 $end\n", f);
  fputs("$var wire 4 \x7b\x25 io_slots_0 $end\n", f);
  fputs("$upscope $end\n", f);
  fputs("$upscope $end\n", f);
  fputs("$scope module datapath $end\n", f);
  fputs("$var wire 1 \x23 io_control_exe_int_ext $end\n", f);
  fputs("$var wire 1 \x2a io_control_exe_valid $end\n", f);
  fputs("$var wire 1 \x2e io_control_exe_int_expire $end\n", f);
  fputs("$var wire 1 \x32 io_control_exe_exc_expire $end\n", f);
  fputs("$var wire 1 \x37 io_control_exe_kill $end\n", f);
  fputs("$var wire 1 \x3c io_control_exe_store $end\n", f);
  fputs("$var wire 1 \x45 io_dmem_byte_write_0 $end\n", f);
  fputs("$var wire 1 \x48 io_dmem_byte_write_1 $end\n", f);
  fputs("$var wire 1 \x4b io_dmem_byte_write_2 $end\n", f);
  fputs("$var wire 1 \x4e io_dmem_byte_write_3 $end\n", f);
  fputs("$var wire 1 \x52 io_control_exe_load $end\n", f);
  fputs("$var wire 1 \x55 io_dmem_enable $end\n", f);
  fputs("$var wire 1 \x5c io_control_exe_expire $end\n", f);
  fputs("$var wire 1 \x5f exe_ltu $end\n", f);
  fputs("$var wire 1 \x60 exe_lt $end\n", f);
  fputs("$var wire 1 \x61 exe_eq $end\n", f);
  fputs("$var wire 1 \x62 exe_br_cond $end\n", f);
  fputs("$var wire 1 \x63 io_control_exe_br_cond $end\n", f);
  fputs("$var wire 1 \x68 io_control_next_valid $end\n", f);
  fputs("$var wire 1 \x69 io_imem_r_enable $end\n", f);
  fputs("$var wire 1 \x6c io_imem_rw_write $end\n", f);
  fputs("$var wire 1 \x6f io_imem_rw_enable $end\n", f);
  fputs("$var wire 1 \x75 io_control_exe_csr_write $end\n", f);
  fputs("$var wire 1 \x79 io_int_exts_0 $end\n", f);
  fputs("$var wire 1 \x7c io_int_exts_1 $end\n", f);
  fputs("$var wire 1 \x21\x22 io_int_exts_2 $end\n", f);
  fputs("$var wire 1 \x24\x22 io_int_exts_3 $end\n", f);
  fputs("$var wire 1 \x26\x22 reset $end\n", f);
  fputs("$var wire 1 \x2c\x22 io_control_exe_exc_store_misaligned $end\n", f);
  fputs("$var wire 1 \x30\x22 io_control_exe_exc_load_misaligned $end\n", f);
  fputs("$var wire 1 \x33\x22 io_control_exe_exc_priv_inst $end\n", f);
  fputs("$var wire 1 \x38\x22 io_control_exe_exception $end\n", f);
  fputs("$var wire 1 \x47\x22 io_gpio_in_3 $end\n", f);
  fputs("$var wire 1 \x4b\x22 io_gpio_in_2 $end\n", f);
  fputs("$var wire 1 \x4f\x22 io_gpio_in_1 $end\n", f);
  fputs("$var wire 1 \x53\x22 io_gpio_in_0 $end\n", f);
  fputs("$var wire 1 \x59\x22 io_control_exe_sleep $end\n", f);
  fputs("$var wire 1 \x60\x22 io_control_exe_ee $end\n", f);
  fputs("$var wire 1 \x64\x22 io_control_exe_ie $end\n", f);
  fputs("$var wire 1 \x6e\x22 io_control_mem_rd_write $end\n", f);
  fputs("$var wire 1 \x3f\x23 io_control_if_exc_misaligned $end\n", f);
  fputs("$var wire 1 \x47\x23 io_bus_enable $end\n", f);
  fputs("$var wire 1 \x4a\x23 io_bus_write $end\n", f);
  fputs("$var wire 2 \x59\x23 io_control_if_tid $end\n", f);
  fputs("$var wire 2 \x5b\x23 io_control_dec_tid $end\n", f);
  fputs("$var wire 2 \x5d\x23 io_control_exe_tid $end\n", f);
  fputs("$var wire 2 \x5f\x23 io_control_mem_tid $end\n", f);
  fputs("$var wire 2 \x63\x23 io_control_next_pc_sel_0 $end\n", f);
  fputs("$var wire 2 \x66\x23 io_control_next_pc_sel_1 $end\n", f);
  fputs("$var wire 2 \x69\x23 io_control_next_pc_sel_2 $end\n", f);
  fputs("$var wire 2 \x6c\x23 io_control_next_pc_sel_3 $end\n", f);
  fputs("$var wire 2 \x6f\x23 io_control_next_tid $end\n", f);
  fputs("$var wire 2 \x71\x23 io_control_exe_csr_type $end\n", f);
  fputs("$var wire 2 \x2c\x24 io_control_mem_rd_data_sel $end\n", f);
  fputs("$var wire 2 \x2f\x24 io_control_wb_tid $end\n", f);
  fputs("$var wire 2 \x33\x24 io_control_dec_rs1_sel $end\n", f);
  fputs("$var wire 2 \x35\x24 io_control_exe_rd_data_sel $end\n", f);
  fputs("$var wire 2 \x36\x24 wb_reg_tid $end\n", f);
  fputs("$var wire 2 \x39\x24 io_control_dec_rs2_sel $end\n", f);
  fputs("$var wire 2 \x3c\x24 io_control_dec_op2_sel $end\n", f);
  fputs("$var wire 2 \x3d\x24 mem_reg_tid $end\n", f);
  fputs("$var wire 2 \x3e\x24 exe_reg_tid $end\n", f);
  fputs("$var wire 2 \x41\x24 io_control_dec_op1_sel $end\n", f);
  fputs("$var wire 2 \x42\x24 if_reg_tid $end\n", f);
  fputs("$var wire 2 \x43\x24 dec_reg_tid $end\n", f);
  fputs("$var wire 2 \x45\x24 io_control_csr_tmodes_1 $end\n", f);
  fputs("$var wire 2 \x49\x24 io_control_csr_tmodes_0 $end\n", f);
  fputs("$var wire 2 \x4d\x24 io_control_csr_tmodes_2 $end\n", f);
  fputs("$var wire 2 \x51\x24 io_control_csr_tmodes_3 $end\n", f);
  fputs("$var wire 2 \x63\x24 io_gpio_out_3 $end\n", f);
  fputs("$var wire 2 \x66\x24 io_gpio_out_2 $end\n", f);
  fputs("$var wire 2 \x69\x24 io_gpio_out_1 $end\n", f);
  fputs("$var wire 2 \x6c\x24 io_gpio_out_0 $end\n", f);
  fputs("$var wire 3 \x6f\x24 io_control_exe_br_type $end\n", f);
  fputs("$var wire 3 \x72\x24 io_control_dec_imm_sel $end\n", f);
  fputs("$var wire 4 \x78\x24 io_control_exe_alu_type $end\n", f);
  fputs("$var wire 4 \x7a\x24 io_control_exe_mem_type $end\n", f);
  fputs("$var wire 4 \x5d\x25 io_control_csr_slots_7 $end\n", f);
  fputs("$var wire 4 \x61\x25 io_control_csr_slots_6 $end\n", f);
  fputs("$var wire 4 \x65\x25 io_control_csr_slots_5 $end\n", f);
  fputs("$var wire 4 \x69\x25 io_control_csr_slots_4 $end\n", f);
  fputs("$var wire 4 \x6d\x25 io_control_csr_slots_3 $end\n", f);
  fputs("$var wire 4 \x71\x25 io_control_csr_slots_2 $end\n", f);
  fputs("$var wire 4 \x75\x25 io_control_csr_slots_1 $end\n", f);
  fputs("$var wire 4 \x79\x25 io_control_csr_slots_0 $end\n", f);
  fputs("$var wire 5 \x22\x26 exe_alu_shift $end\n", f);
  fputs("$var wire 5 \x26\x26 io_control_exe_cause $end\n", f);
  fputs("$var wire 5 \x2f\x26 io_control_wb_rd_addr $end\n", f);
  fputs("$var wire 5 \x31\x26 io_control_mem_rd_addr $end\n", f);
  fputs("$var wire 5 \x33\x26 io_control_exe_rd_addr $end\n", f);
  fputs("$var wire 5 \x35\x26 wb_reg_rd_addr $end\n", f);
  fputs("$var wire 5 \x36\x26 exe_reg_rd_addr $end\n", f);
  fputs("$var wire 5 \x37\x26 mem_reg_rd_addr $end\n", f);
  fputs("$var wire 10 \x39\x26 io_bus_addr $end\n", f);
  fputs("$var wire 12 \x3c\x26 io_dmem_addr $end\n", f);
  fputs("$var wire 12 \x3e\x26 io_imem_r_addr $end\n", f);
  fputs("$var wire 12 \x41\x26 io_imem_rw_addr $end\n", f);
  fputs("$var wire 12 \x45\x26 exe_reg_csr_addr $end\n", f);
  fputs("$var wire 32 \x48\x26 def_exe_alu_result $end\n", f);
  fputs("$var wire 32 \x49\x26 exe_alu_result $end\n", f);
  fputs("$var wire 32 \x4a\x26 exe_address $end\n", f);
  fputs("$var wire 32 \x4e\x26 io_dmem_data_in $end\n", f);
  fputs("$var wire 32 \x51\x26 if_pc_plus4 $end\n", f);
  fputs("$var wire 32 \x52\x26 io_control_dec_inst $end\n", f);
  fputs("$var wire 32 \x58\x26 mem_evec $end\n", f);
  fputs("$var wire 32 \x59\x26 next_pcs_0 $end\n", f);
  fputs("$var wire 32 \x5a\x26 next_pcs_1 $end\n", f);
  fputs("$var wire 32 \x5b\x26 next_pcs_2 $end\n", f);
  fputs("$var wire 32 \x5c\x26 next_pcs_3 $end\n", f);
  fputs("$var wire 32 \x5d\x26 next_pc $end\n", f);
  fputs("$var wire 32 \x60\x26 io_imem_rw_data_in $end\n", f);
  fputs("$var wire 32 \x6f\x26 io_imem_r_data_out $end\n", f);
  fputs("$var wire 32 \x71\x26 mem_mul_result $end\n", f);
  fputs("$var wire 32 \x73\x26 io_bus_data_out $end\n", f);
  fputs("$var wire 32 \x76\x26 io_imem_rw_data_out $end\n", f);
  fputs("$var wire 32 \x79\x26 io_dmem_data_out $end\n", f);
  fputs("$var wire 32 \x7c\x26 mem_rd_data $end\n", f);
  fputs("$var wire 32 \x22\x27 wb_rd_data $end\n", f);
  fputs("$var wire 32 \x24\x27 exe_rd_data $end\n", f);
  fputs("$var wire 32 \x25\x27 dec_rs1_data $end\n", f);
  fputs("$var wire 32 \x26\x27 exe_reg_rs1_data $end\n", f);
  fputs("$var wire 32 \x28\x27 dec_rs2_data $end\n", f);
  fputs("$var wire 32 \x29\x27 exe_reg_rs2_data $end\n", f);
  fputs("$var wire 32 \x2a\x27 dec_imm_i $end\n", f);
  fputs("$var wire 32 \x2b\x27 dec_imm_z $end\n", f);
  fputs("$var wire 32 \x2c\x27 dec_imm_j $end\n", f);
  fputs("$var wire 32 \x2d\x27 dec_imm_u $end\n", f);
  fputs("$var wire 32 \x2e\x27 dec_imm_b $end\n", f);
  fputs("$var wire 32 \x2f\x27 dec_imm_s $end\n", f);
  fputs("$var wire 32 \x30\x27 dec_imm $end\n", f);
  fputs("$var wire 32 \x31\x27 dec_csr_data $end\n", f);
  fputs("$var wire 32 \x32\x27 exe_csr_data $end\n", f);
  fputs("$var wire 32 \x33\x27 if_reg_pcs_3 $end\n", f);
  fputs("$var wire 32 \x34\x27 if_reg_pcs_2 $end\n", f);
  fputs("$var wire 32 \x35\x27 if_reg_pcs_1 $end\n", f);
  fputs("$var wire 32 \x36\x27 dec_op1 $end\n", f);
  fputs("$var wire 32 \x37\x27 exe_reg_op1 $end\n", f);
  fputs("$var wire 32 \x38\x27 dec_reg_pc4 $end\n", f);
  fputs("$var wire 32 \x39\x27 exe_reg_pc4 $end\n", f);
  fputs("$var wire 32 \x3a\x27 mem_reg_rd_data $end\n", f);
  fputs("$var wire 32 \x3b\x27 wb_reg_rd_data $end\n", f);
  fputs("$var wire 32 \x3c\x27 dec_reg_inst $end\n", f);
  fputs("$var wire 32 \x3d\x27 dec_op2 $end\n", f);
  fputs("$var wire 32 \x3e\x27 exe_reg_op2 $end\n", f);
  fputs("$var wire 32 \x3f\x27 if_reg_pcs_0 $end\n", f);
  fputs("$var wire 32 \x40\x27 if_reg_pc $end\n", f);
  fputs("$var wire 32 \x41\x27 dec_reg_pc $end\n", f);
  fputs("$var wire 32 \x42\x27 exe_reg_pc $end\n", f);
  fputs("$var wire 32 \x48\x27 io_bus_data_in $end\n", f);
  fputs("$var wire 32 \x4b\x27 io_host_to_host $end\n", f);
  fputs("$scope module regfile $end\n", f);
  fputs("$var wire 1 \x6f\x22 io_rd_enable $end\n", f);
  fputs("$var wire 2 \x2a\x24 io_rs1_thread $end\n", f);
  fputs("$var wire 2 \x2d\x24 io_rd_thread $end\n", f);
  fputs("$var wire 2 \x2e\x24 io_rs2_thread $end\n", f);
  fputs("$var wire 5 \x2c\x26 io_rs1_addr $end\n", f);
  fputs("$var wire 5 \x2d\x26 io_rd_addr $end\n", f);
  fputs("$var wire 5 \x2e\x26 io_rs2_addr $end\n", f);
  fputs("$var wire 32 \x70\x26 dout1 $end\n", f);
  fputs("$var wire 32 \x7d\x26 io_rd_data $end\n", f);
  fputs("$var wire 32 \x7e\x26 dout2 $end\n", f);
  fputs("$var wire 32 \x21\x27 io_rs1_data $end\n", f);
  fputs("$var wire 32 \x27\x27 io_rs2_data $end\n", f);
  fputs("$upscope $end\n", f);
  fputs("$scope module loadstore $end\n", f);
  fputs("$var wire 1 \x38 io_kill $end\n", f);
  fputs("$var wire 1 \x39 store_fault $end\n", f);
  fputs("$var wire 1 \x3d io_store $end\n", f);
  fputs("$var wire 1 \x3e store_misaligned $end\n", f);
  fputs("$var wire 1 \x3f bus_op $end\n", f);
  fputs("$var wire 1 \x40 imem_op $end\n", f);
  fputs("$var wire 1 \x41 dmem_op $end\n", f);
  fputs("$var wire 1 \x42 permission $end\n", f);
  fputs("$var wire 1 \x43 write $end\n", f);
  fputs("$var wire 1 \x44 io_dmem_byte_write_0 $end\n", f);
  fputs("$var wire 1 \x47 io_dmem_byte_write_1 $end\n", f);
  fputs("$var wire 1 \x4a io_dmem_byte_write_2 $end\n", f);
  fputs("$var wire 1 \x4d io_dmem_byte_write_3 $end\n", f);
  fputs("$var wire 1 \x53 io_load $end\n", f);
  fputs("$var wire 1 \x54 io_dmem_enable $end\n", f);
  fputs("$var wire 1 \x6b io_imem_rw_write $end\n", f);
  fputs("$var wire 1 \x6e io_imem_rw_enable $end\n", f);
  fputs("$var wire 1 \x2b\x22 io_store_misaligned $end\n", f);
  fputs("$var wire 1 \x2e\x22 load_misaligned $end\n", f);
  fputs("$var wire 1 \x2f\x22 io_load_misaligned $end\n", f);
  fputs("$var wire 1 \x69\x22 io_imem_r_enable $end\n", f);
  fputs("$var wire 1 \x6a\x22 dmem_op_reg $end\n", f);
  fputs("$var wire 1 \x6b\x22 imem_op_reg $end\n", f);
  fputs("$var wire 1 \x46\x23 io_bus_enable $end\n", f);
  fputs("$var wire 1 \x49\x23 io_bus_write $end\n", f);
  fputs("$var wire 2 \x58\x23 io_thread $end\n", f);
  fputs("$var wire 2 \x29\x24 addr_byte_reg $end\n", f);
  fputs("$var wire 4 \x7b\x24 io_mem_type $end\n", f);
  fputs("$var wire 4 \x7d\x24 io_imem_protection_0 $end\n", f);
  fputs("$var wire 4 \x21\x25 io_imem_protection_1 $end\n", f);
  fputs("$var wire 4 \x23\x25 io_imem_protection_2 $end\n", f);
  fputs("$var wire 4 \x25\x25 io_imem_protection_3 $end\n", f);
  fputs("$var wire 4 \x27\x25 io_imem_protection_4 $end\n", f);
  fputs("$var wire 4 \x29\x25 io_imem_protection_5 $end\n", f);
  fputs("$var wire 4 \x2b\x25 io_imem_protection_6 $end\n", f);
  fputs("$var wire 4 \x2d\x25 io_imem_protection_7 $end\n", f);
  fputs("$var wire 4 \x2f\x25 io_dmem_protection_0 $end\n", f);
  fputs("$var wire 4 \x31\x25 io_dmem_protection_1 $end\n", f);
  fputs("$var wire 4 \x33\x25 io_dmem_protection_2 $end\n", f);
  fputs("$var wire 4 \x35\x25 io_dmem_protection_3 $end\n", f);
  fputs("$var wire 4 \x37\x25 io_dmem_protection_4 $end\n", f);
  fputs("$var wire 4 \x39\x25 io_dmem_protection_5 $end\n", f);
  fputs("$var wire 4 \x3b\x25 io_dmem_protection_6 $end\n", f);
  fputs("$var wire 4 \x3d\x25 io_dmem_protection_7 $end\n", f);
  fputs("$var wire 4 \x5b\x25 mem_type_reg $end\n", f);
  fputs("$var wire 10 \x38\x26 io_bus_addr $end\n", f);
  fputs("$var wire 12 \x3b\x26 io_dmem_addr $end\n", f);
  fputs("$var wire 12 \x40\x26 io_imem_rw_addr $end\n", f);
  fputs("$var wire 12 \x44\x26 io_imem_r_addr $end\n", f);
  fputs("$var wire 32 \x4b\x26 io_addr $end\n", f);
  fputs("$var wire 32 \x4c\x26 io_data_in $end\n", f);
  fputs("$var wire 32 \x4d\x26 io_dmem_data_in $end\n", f);
  fputs("$var wire 32 \x5f\x26 io_imem_rw_data_in $end\n", f);
  fputs("$var wire 32 \x74\x26 io_bus_data_out $end\n", f);
  fputs("$var wire 32 \x77\x26 io_imem_rw_data_out $end\n", f);
  fputs("$var wire 32 \x7a\x26 io_dmem_data_out $end\n", f);
  fputs("$var wire 32 \x7b\x26 io_data_out $end\n", f);
  fputs("$var wire 32 \x47\x27 io_bus_data_in $end\n", f);
  fputs("$upscope $end\n", f);
  fputs("$scope module csr $end\n", f);
  fputs("$var wire 1 \x21 int_ext $end\n", f);
  fputs("$var wire 1 \x22 io_int_ext $end\n", f);
  fputs("$var wire 1 \x25 expired_0 $end\n", f);
  fputs("$var wire 1 \x26 expired_1 $end\n", f);
  fputs("$var wire 1 \x27 expired_2 $end\n", f);
  fputs("$var wire 1 \x28 expired_3 $end\n", f);
  fputs("$var wire 1 \x2b io_rw_valid $end\n", f);
  fputs("$var wire 1 \x2c int_expire $end\n", f);
  fputs("$var wire 1 \x2d io_int_expire $end\n", f);
  fputs("$var wire 1 \x30 exc_expire $end\n", f);
  fputs("$var wire 1 \x31 io_exc_expire $end\n", f);
  fputs("$var wire 1 \x5b io_expire $end\n", f);
  fputs("$var wire 1 \x71 io_kill $end\n", f);
  fputs("$var wire 1 \x72 priv_fault $end\n", f);
  fputs("$var wire 1 \x76 io_rw_write $end\n", f);
  fputs("$var wire 1 \x77 write $end\n", f);
  fputs("$var wire 1 \x7a io_int_exts_0 $end\n", f);
  fputs("$var wire 1 \x7d io_int_exts_1 $end\n", f);
  fputs("$var wire 1 \x22\x22 io_int_exts_2 $end\n", f);
  fputs("$var wire 1 \x25\x22 io_int_exts_3 $end\n", f);
  fputs("$var wire 1 \x27\x22 reset $end\n", f);
  fputs("$var wire 1 \x28\x22 reg_msip_1 $end\n", f);
  fputs("$var wire 1 \x29\x22 reg_mtie_3 $end\n", f);
  fputs("$var wire 1 \x2a\x22 reg_ie1_3 $end\n", f);
  fputs("$var wire 1 \x32\x22 io_priv_fault $end\n", f);
  fputs("$var wire 1 \x39\x22 io_exception $end\n", f);
  fputs("$var wire 1 \x3a\x22 reg_ie_3 $end\n", f);
  fputs("$var wire 1 \x3b\x22 reg_msip_3 $end\n", f);
  fputs("$var wire 1 \x3c\x22 reg_mtie_2 $end\n", f);
  fputs("$var wire 1 \x3d\x22 reg_ie1_2 $end\n", f);
  fputs("$var wire 1 \x3e\x22 reg_ie_2 $end\n", f);
  fputs("$var wire 1 \x3f\x22 reg_msip_2 $end\n", f);
  fputs("$var wire 1 \x40\x22 reg_mtie_1 $end\n", f);
  fputs("$var wire 1 \x41\x22 reg_ie1_1 $end\n", f);
  fputs("$var wire 1 \x42\x22 reg_ie_1 $end\n", f);
  fputs("$var wire 1 \x43\x22 reg_mtie_0 $end\n", f);
  fputs("$var wire 1 \x44\x22 reg_ie1_0 $end\n", f);
  fputs("$var wire 1 \x45\x22 reg_ie_0 $end\n", f);
  fputs("$var wire 1 \x48\x22 io_gpio_in_3 $end\n", f);
  fputs("$var wire 1 \x49\x22 reg_gpis_3 $end\n", f);
  fputs("$var wire 1 \x4c\x22 io_gpio_in_2 $end\n", f);
  fputs("$var wire 1 \x4d\x22 reg_gpis_2 $end\n", f);
  fputs("$var wire 1 \x50\x22 io_gpio_in_1 $end\n", f);
  fputs("$var wire 1 \x51\x22 reg_gpis_1 $end\n", f);
  fputs("$var wire 1 \x54\x22 io_gpio_in_0 $end\n", f);
  fputs("$var wire 1 \x55\x22 reg_gpis_0 $end\n", f);
  fputs("$var wire 1 \x5a\x22 io_sleep $end\n", f);
  fputs("$var wire 1 \x5b\x22 sleep $end\n", f);
  fputs("$var wire 1 \x5c\x22 wake_1 $end\n", f);
  fputs("$var wire 1 \x5d\x22 wake_3 $end\n", f);
  fputs("$var wire 1 \x61\x22 io_ee $end\n", f);
  fputs("$var wire 1 \x65\x22 io_ie $end\n", f);
  fputs("$var wire 1 \x66\x22 wake_2 $end\n", f);
  fputs("$var wire 1 \x67\x22 wake_0 $end\n", f);
  fputs("$var wire 1 \x68\x22 reg_msip_0 $end\n", f);
  fputs("$var wire 2 \x57\x23 io_rw_thread $end\n", f);
  fputs("$var wire 2 \x72\x23 io_rw_csr_type $end\n", f);
  fputs("$var wire 2 \x73\x23 reg_prv1_3 $end\n", f);
  fputs("$var wire 2 \x74\x23 reg_prv_3 $end\n", f);
  fputs("$var wire 2 \x75\x23 reg_prv1_2 $end\n", f);
  fputs("$var wire 2 \x76\x23 reg_prv_2 $end\n", f);
  fputs("$var wire 2 \x77\x23 reg_prv1_1 $end\n", f);
  fputs("$var wire 2 \x78\x23 reg_prv_1 $end\n", f);
  fputs("$var wire 2 \x79\x23 reg_prv1_0 $end\n", f);
  fputs("$var wire 2 \x7a\x23 reg_prv_0 $end\n", f);
  fputs("$var wire 2 \x7b\x23 reg_gpos_3 $end\n", f);
  fputs("$var wire 2 \x7c\x23 reg_gpos_2 $end\n", f);
  fputs("$var wire 2 \x7d\x23 reg_gpos_1 $end\n", f);
  fputs("$var wire 2 \x7e\x23 reg_gpos_0 $end\n", f);
  fputs("$var wire 2 \x21\x24 reg_tmodes_1 $end\n", f);
  fputs("$var wire 2 \x22\x24 reg_tmodes_3 $end\n", f);
  fputs("$var wire 2 \x23\x24 reg_timer_3 $end\n", f);
  fputs("$var wire 2 \x24\x24 reg_timer_1 $end\n", f);
  fputs("$var wire 2 \x25\x24 reg_timer_0 $end\n", f);
  fputs("$var wire 2 \x26\x24 reg_timer_2 $end\n", f);
  fputs("$var wire 2 \x27\x24 reg_tmodes_2 $end\n", f);
  fputs("$var wire 2 \x28\x24 reg_tmodes_0 $end\n", f);
  fputs("$var wire 2 \x44\x24 io_tmodes_1 $end\n", f);
  fputs("$var wire 2 \x48\x24 io_tmodes_0 $end\n", f);
  fputs("$var wire 2 \x4c\x24 io_tmodes_2 $end\n", f);
  fputs("$var wire 2 \x50\x24 io_tmodes_3 $end\n", f);
  fputs("$var wire 2 \x62\x24 io_gpio_out_3 $end\n", f);
  fputs("$var wire 2 \x65\x24 io_gpio_out_2 $end\n", f);
  fputs("$var wire 2 \x68\x24 io_gpio_out_1 $end\n", f);
  fputs("$var wire 2 \x6b\x24 io_gpio_out_0 $end\n", f);
  fputs("$var wire 4 \x7c\x24 io_imem_protection_0 $end\n", f);
  fputs("$var wire 4 \x7e\x24 io_imem_protection_1 $end\n", f);
  fputs("$var wire 4 \x22\x25 io_imem_protection_2 $end\n", f);
  fputs("$var wire 4 \x24\x25 io_imem_protection_3 $end\n", f);
  fputs("$var wire 4 \x26\x25 io_imem_protection_4 $end\n", f);
  fputs("$var wire 4 \x28\x25 io_imem_protection_5 $end\n", f);
  fputs("$var wire 4 \x2a\x25 io_imem_protection_6 $end\n", f);
  fputs("$var wire 4 \x2c\x25 io_imem_protection_7 $end\n", f);
  fputs("$var wire 4 \x2e\x25 io_dmem_protection_0 $end\n", f);
  fputs("$var wire 4 \x30\x25 io_dmem_protection_1 $end\n", f);
  fputs("$var wire 4 \x32\x25 io_dmem_protection_2 $end\n", f);
  fputs("$var wire 4 \x34\x25 io_dmem_protection_3 $end\n", f);
  fputs("$var wire 4 \x36\x25 io_dmem_protection_4 $end\n", f);
  fputs("$var wire 4 \x38\x25 io_dmem_protection_5 $end\n", f);
  fputs("$var wire 4 \x3a\x25 io_dmem_protection_6 $end\n", f);
  fputs("$var wire 4 \x3c\x25 io_dmem_protection_7 $end\n", f);
  fputs("$var wire 4 \x3e\x25 reg_dmem_protection_7 $end\n", f);
  fputs("$var wire 4 \x3f\x25 reg_dmem_protection_6 $end\n", f);
  fputs("$var wire 4 \x40\x25 reg_dmem_protection_5 $end\n", f);
  fputs("$var wire 4 \x41\x25 reg_dmem_protection_4 $end\n", f);
  fputs("$var wire 4 \x42\x25 reg_dmem_protection_3 $end\n", f);
  fputs("$var wire 4 \x43\x25 reg_dmem_protection_2 $end\n", f);
  fputs("$var wire 4 \x44\x25 reg_dmem_protection_1 $end\n", f);
  fputs("$var wire 4 \x45\x25 reg_dmem_protection_0 $end\n", f);
  fputs("$var wire 4 \x46\x25 reg_imem_protection_7 $end\n", f);
  fputs("$var wire 4 \x47\x25 reg_imem_protection_6 $end\n", f);
  fputs("$var wire 4 \x48\x25 reg_imem_protection_5 $end\n", f);
  fputs("$var wire 4 \x49\x25 reg_imem_protection_4 $end\n", f);
  fputs("$var wire 4 \x4a\x25 reg_imem_protection_3 $end\n", f);
  fputs("$var wire 4 \x4b\x25 reg_imem_protection_2 $end\n", f);
  fputs("$var wire 4 \x4c\x25 reg_imem_protection_1 $end\n", f);
  fputs("$var wire 4 \x4d\x25 reg_imem_protection_0 $end\n", f);
  fputs("$var wire 4 \x4e\x25 reg_gpo_protection_3 $end\n", f);
  fputs("$var wire 4 \x4f\x25 reg_gpo_protection_2 $end\n", f);
  fputs("$var wire 4 \x50\x25 reg_gpo_protection_1 $end\n", f);
  fputs("$var wire 4 \x51\x25 reg_gpo_protection_0 $end\n", f);
  fputs("$var wire 4 \x53\x25 reg_slots_7 $end\n", f);
  fputs("$var wire 4 \x54\x25 reg_slots_6 $end\n", f);
  fputs("$var wire 4 \x55\x25 reg_slots_5 $end\n", f);
  fputs("$var wire 4 \x56\x25 reg_slots_4 $end\n", f);
  fputs("$var wire 4 \x57\x25 reg_slots_3 $end\n", f);
  fputs("$var wire 4 \x58\x25 reg_slots_2 $end\n", f);
  fputs("$var wire 4 \x59\x25 reg_slots_1 $end\n", f);
  fputs("$var wire 4 \x5a\x25 reg_slots_0 $end\n", f);
  fputs("$var wire 4 \x5c\x25 io_slots_7 $end\n", f);
  fputs("$var wire 4 \x60\x25 io_slots_6 $end\n", f);
  fputs("$var wire 4 \x64\x25 io_slots_5 $end\n", f);
  fputs("$var wire 4 \x68\x25 io_slots_4 $end\n", f);
  fputs("$var wire 4 \x6c\x25 io_slots_3 $end\n", f);
  fputs("$var wire 4 \x70\x25 io_slots_2 $end\n", f);
  fputs("$var wire 4 \x74\x25 io_slots_1 $end\n", f);
  fputs("$var wire 4 \x78\x25 io_slots_0 $end\n", f);
  fputs("$var wire 5 \x27\x26 io_cause $end\n", f);
  fputs("$var wire 5 \x28\x26 reg_causes_3 $end\n", f);
  fputs("$var wire 5 \x29\x26 reg_causes_2 $end\n", f);
  fputs("$var wire 5 \x2a\x26 reg_causes_1 $end\n", f);
  fputs("$var wire 5 \x2b\x26 reg_causes_0 $end\n", f);
  fputs("$var wire 12 \x43\x26 io_rw_addr $end\n", f);
  fputs("$var wire 32 \x54\x26 io_evecs_0 $end\n", f);
  fputs("$var wire 32 \x55\x26 io_evecs_1 $end\n", f);
  fputs("$var wire 32 \x56\x26 io_evecs_2 $end\n", f);
  fputs("$var wire 32 \x57\x26 io_evecs_3 $end\n", f);
  fputs("$var wire 32 \x63\x26 io_rw_data_in $end\n", f);
  fputs("$var wire 32 \x64\x26 reg_to_host $end\n", f);
  fputs("$var wire 32 \x65\x26 io_epc $end\n", f);
  fputs("$var wire 32 \x66\x26 reg_epcs_3 $end\n", f);
  fputs("$var wire 32 \x67\x26 reg_epcs_2 $end\n", f);
  fputs("$var wire 32 \x68\x26 reg_epcs_1 $end\n", f);
  fputs("$var wire 32 \x69\x26 reg_epcs_0 $end\n", f);
  fputs("$var wire 32 \x6a\x26 reg_compare_3 $end\n", f);
  fputs("$var wire 32 \x6b\x26 reg_compare_1 $end\n", f);
  fputs("$var wire 32 \x6c\x26 reg_compare_0 $end\n", f);
  fputs("$var wire 32 \x6d\x26 reg_compare_2 $end\n", f);
  fputs("$var wire 32 \x23\x27 io_rw_data_out $end\n", f);
  fputs("$var wire 32 \x4a\x27 io_host_to_host $end\n", f);
  fputs("$var wire 36 \x4f\x27 status_0 $end\n", f);
  fputs("$var wire 36 \x50\x27 status_1 $end\n", f);
  fputs("$var wire 36 \x51\x27 status_2 $end\n", f);
  fputs("$var wire 36 \x52\x27 status_3 $end\n", f);
  fputs("$var wire 36 \x53\x27 data_out $end\n", f);
  fputs("$var wire 36 \x54\x27 data_in $end\n", f);
  fputs("$var wire 36 \x55\x27 reg_sup0_3 $end\n", f);
  fputs("$var wire 36 \x56\x27 reg_sup0_2 $end\n", f);
  fputs("$var wire 36 \x57\x27 reg_sup0_1 $end\n", f);
  fputs("$var wire 36 \x58\x27 reg_sup0_0 $end\n", f);
  fputs("$var wire 36 \x59\x27 reg_evecs_3 $end\n", f);
  fputs("$var wire 36 \x5a\x27 reg_evecs_2 $end\n", f);
  fputs("$var wire 36 \x5b\x27 reg_evecs_1 $end\n", f);
  fputs("$var wire 36 \x5c\x27 reg_evecs_0 $end\n", f);
  fputs("$var wire 64 \x5d\x27 reg_time $end\n", f);
  fputs("$upscope $end\n", f);
  fputs("$upscope $end\n", f);
  fputs("$scope module imem $end\n", f);
  fputs("$var wire 1 \x6a io_core_r_enable $end\n", f);
  fputs("$var wire 1 \x6d io_core_rw_write $end\n", f);
  fputs("$var wire 1 \x70 io_core_rw_enable $end\n", f);
  fputs("$var wire 1 \x44\x23 io_bus_ready $end\n", f);
  fputs("$var wire 12 \x3f\x26 io_core_r_addr $end\n", f);
  fputs("$var wire 12 \x42\x26 io_core_rw_addr $end\n", f);
  fputs("$var wire 32 \x5e\x26 dout_r $end\n", f);
  fputs("$var wire 32 \x61\x26 io_core_rw_data_in $end\n", f);
  fputs("$var wire 32 \x62\x26 R0 $end\n", f);
  fputs("$var wire 32 \x6e\x26 io_core_r_data_out $end\n", f);
  fputs("$var wire 32 \x75\x26 io_core_rw_data_out $end\n", f);
  fputs("$var wire 32 \x43\x27 io_bus_data_out $end\n", f);
  fputs("$upscope $end\n", f);
  fputs("$scope module dmem $end\n", f);
  fputs("$var wire 1 \x46 io_core_byte_write_0 $end\n", f);
  fputs("$var wire 1 \x49 io_core_byte_write_1 $end\n", f);
  fputs("$var wire 1 \x4c io_core_byte_write_2 $end\n", f);
  fputs("$var wire 1 \x4f io_core_byte_write_3 $end\n", f);
  fputs("$var wire 1 \x56 io_core_enable $end\n", f);
  fputs("$var wire 12 \x3d\x26 io_core_addr $end\n", f);
  fputs("$var wire 32 \x4f\x26 io_core_data_in $end\n", f);
  fputs("$var wire 32 \x50\x26 dout $end\n", f);
  fputs("$var wire 32 \x78\x26 io_core_data_out $end\n", f);
  fputs("$var wire 32 \x45\x27 io_bus_data_out $end\n", f);
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
  dat_dump<1>(f, Core_control__io_exe_valid, 0x29);
  Core_control__io_exe_valid__prev = Core_control__io_exe_valid;
  dat_dump<1>(f, Core_datapath__io_control_exe_valid, 0x2a);
  Core_datapath__io_control_exe_valid__prev = Core_datapath__io_control_exe_valid;
  dat_dump<1>(f, Core_datapath_csr__io_rw_valid, 0x2b);
  Core_datapath_csr__io_rw_valid__prev = Core_datapath_csr__io_rw_valid;
  dat_dump<1>(f, Core_datapath_csr__int_expire, 0x2c);
  Core_datapath_csr__int_expire__prev = Core_datapath_csr__int_expire;
  dat_dump<1>(f, Core_datapath_csr__io_int_expire, 0x2d);
  Core_datapath_csr__io_int_expire__prev = Core_datapath_csr__io_int_expire;
  dat_dump<1>(f, Core_datapath__io_control_exe_int_expire, 0x2e);
  Core_datapath__io_control_exe_int_expire__prev = Core_datapath__io_control_exe_int_expire;
  dat_dump<1>(f, Core_control__io_exe_int_expire, 0x2f);
  Core_control__io_exe_int_expire__prev = Core_control__io_exe_int_expire;
  dat_dump<1>(f, Core_datapath_csr__exc_expire, 0x30);
  Core_datapath_csr__exc_expire__prev = Core_datapath_csr__exc_expire;
  dat_dump<1>(f, Core_datapath_csr__io_exc_expire, 0x31);
  Core_datapath_csr__io_exc_expire__prev = Core_datapath_csr__io_exc_expire;
  dat_dump<1>(f, Core_datapath__io_control_exe_exc_expire, 0x32);
  Core_datapath__io_control_exe_exc_expire__prev = Core_datapath__io_control_exe_exc_expire;
  dat_dump<1>(f, Core_control__io_exe_exc_expire, 0x33);
  Core_control__io_exe_exc_expire__prev = Core_control__io_exe_exc_expire;
  dat_dump<1>(f, Core_control__exe_any_exc, 0x34);
  Core_control__exe_any_exc__prev = Core_control__exe_any_exc;
  dat_dump<1>(f, Core_control__exe_kill, 0x35);
  Core_control__exe_kill__prev = Core_control__exe_kill;
  dat_dump<1>(f, Core_control__io_exe_kill, 0x36);
  Core_control__io_exe_kill__prev = Core_control__io_exe_kill;
  dat_dump<1>(f, Core_datapath__io_control_exe_kill, 0x37);
  Core_datapath__io_control_exe_kill__prev = Core_datapath__io_control_exe_kill;
  dat_dump<1>(f, Core_datapath_loadstore__io_kill, 0x38);
  Core_datapath_loadstore__io_kill__prev = Core_datapath_loadstore__io_kill;
  dat_dump<1>(f, Core_datapath_loadstore__store_fault, 0x39);
  Core_datapath_loadstore__store_fault__prev = Core_datapath_loadstore__store_fault;
  dat_dump<1>(f, Core_control__exe_store, 0x3a);
  Core_control__exe_store__prev = Core_control__exe_store;
  dat_dump<1>(f, Core_control__io_exe_store, 0x3b);
  Core_control__io_exe_store__prev = Core_control__io_exe_store;
  dat_dump<1>(f, Core_datapath__io_control_exe_store, 0x3c);
  Core_datapath__io_control_exe_store__prev = Core_datapath__io_control_exe_store;
  dat_dump<1>(f, Core_datapath_loadstore__io_store, 0x3d);
  Core_datapath_loadstore__io_store__prev = Core_datapath_loadstore__io_store;
  dat_dump<1>(f, Core_datapath_loadstore__store_misaligned, 0x3e);
  Core_datapath_loadstore__store_misaligned__prev = Core_datapath_loadstore__store_misaligned;
  dat_dump<1>(f, Core_datapath_loadstore__bus_op, 0x3f);
  Core_datapath_loadstore__bus_op__prev = Core_datapath_loadstore__bus_op;
  dat_dump<1>(f, Core_datapath_loadstore__imem_op, 0x40);
  Core_datapath_loadstore__imem_op__prev = Core_datapath_loadstore__imem_op;
  dat_dump<1>(f, Core_datapath_loadstore__dmem_op, 0x41);
  Core_datapath_loadstore__dmem_op__prev = Core_datapath_loadstore__dmem_op;
  dat_dump<1>(f, Core_datapath_loadstore__permission, 0x42);
  Core_datapath_loadstore__permission__prev = Core_datapath_loadstore__permission;
  dat_dump<1>(f, Core_datapath_loadstore__write, 0x43);
  Core_datapath_loadstore__write__prev = Core_datapath_loadstore__write;
  dat_dump<1>(f, Core_datapath_loadstore__io_dmem_byte_write_0, 0x44);
  Core_datapath_loadstore__io_dmem_byte_write_0__prev = Core_datapath_loadstore__io_dmem_byte_write_0;
  dat_dump<1>(f, Core_datapath__io_dmem_byte_write_0, 0x45);
  Core_datapath__io_dmem_byte_write_0__prev = Core_datapath__io_dmem_byte_write_0;
  dat_dump<1>(f, Core_dmem__io_core_byte_write_0, 0x46);
  Core_dmem__io_core_byte_write_0__prev = Core_dmem__io_core_byte_write_0;
  dat_dump<1>(f, Core_datapath_loadstore__io_dmem_byte_write_1, 0x47);
  Core_datapath_loadstore__io_dmem_byte_write_1__prev = Core_datapath_loadstore__io_dmem_byte_write_1;
  dat_dump<1>(f, Core_datapath__io_dmem_byte_write_1, 0x48);
  Core_datapath__io_dmem_byte_write_1__prev = Core_datapath__io_dmem_byte_write_1;
  dat_dump<1>(f, Core_dmem__io_core_byte_write_1, 0x49);
  Core_dmem__io_core_byte_write_1__prev = Core_dmem__io_core_byte_write_1;
  dat_dump<1>(f, Core_datapath_loadstore__io_dmem_byte_write_2, 0x4a);
  Core_datapath_loadstore__io_dmem_byte_write_2__prev = Core_datapath_loadstore__io_dmem_byte_write_2;
  dat_dump<1>(f, Core_datapath__io_dmem_byte_write_2, 0x4b);
  Core_datapath__io_dmem_byte_write_2__prev = Core_datapath__io_dmem_byte_write_2;
  dat_dump<1>(f, Core_dmem__io_core_byte_write_2, 0x4c);
  Core_dmem__io_core_byte_write_2__prev = Core_dmem__io_core_byte_write_2;
  dat_dump<1>(f, Core_datapath_loadstore__io_dmem_byte_write_3, 0x4d);
  Core_datapath_loadstore__io_dmem_byte_write_3__prev = Core_datapath_loadstore__io_dmem_byte_write_3;
  dat_dump<1>(f, Core_datapath__io_dmem_byte_write_3, 0x4e);
  Core_datapath__io_dmem_byte_write_3__prev = Core_datapath__io_dmem_byte_write_3;
  dat_dump<1>(f, Core_dmem__io_core_byte_write_3, 0x4f);
  Core_dmem__io_core_byte_write_3__prev = Core_dmem__io_core_byte_write_3;
  dat_dump<1>(f, Core_control__exe_load, 0x50);
  Core_control__exe_load__prev = Core_control__exe_load;
  dat_dump<1>(f, Core_control__io_exe_load, 0x51);
  Core_control__io_exe_load__prev = Core_control__io_exe_load;
  dat_dump<1>(f, Core_datapath__io_control_exe_load, 0x52);
  Core_datapath__io_control_exe_load__prev = Core_datapath__io_control_exe_load;
  dat_dump<1>(f, Core_datapath_loadstore__io_load, 0x53);
  Core_datapath_loadstore__io_load__prev = Core_datapath_loadstore__io_load;
  dat_dump<1>(f, Core_datapath_loadstore__io_dmem_enable, 0x54);
  Core_datapath_loadstore__io_dmem_enable__prev = Core_datapath_loadstore__io_dmem_enable;
  dat_dump<1>(f, Core_datapath__io_dmem_enable, 0x55);
  Core_datapath__io_dmem_enable__prev = Core_datapath__io_dmem_enable;
  dat_dump<1>(f, Core_dmem__io_core_enable, 0x56);
  Core_dmem__io_core_enable__prev = Core_dmem__io_core_enable;
  dat_dump<1>(f, Core_control__dec_load, 0x57);
  Core_control__dec_load__prev = Core_control__dec_load;
  dat_dump<1>(f, Core_control__dec_fence_i, 0x58);
  Core_control__dec_fence_i__prev = Core_control__dec_fence_i;
  dat_dump<1>(f, Core_control__dec_stall, 0x59);
  Core_control__dec_stall__prev = Core_control__dec_stall;
  dat_dump<1>(f, Core_control__if_pre_valid, 0x5a);
  Core_control__if_pre_valid__prev = Core_control__if_pre_valid;
  dat_dump<1>(f, Core_datapath_csr__io_expire, 0x5b);
  Core_datapath_csr__io_expire__prev = Core_datapath_csr__io_expire;
  dat_dump<1>(f, Core_datapath__io_control_exe_expire, 0x5c);
  Core_datapath__io_control_exe_expire__prev = Core_datapath__io_control_exe_expire;
  dat_dump<1>(f, Core_control__io_exe_expire, 0x5d);
  Core_control__io_exe_expire__prev = Core_control__io_exe_expire;
  dat_dump<1>(f, Core_control__exe_du, 0x5e);
  Core_control__exe_du__prev = Core_control__exe_du;
  dat_dump<1>(f, Core_datapath__exe_ltu, 0x5f);
  Core_datapath__exe_ltu__prev = Core_datapath__exe_ltu;
  dat_dump<1>(f, Core_datapath__exe_lt, 0x60);
  Core_datapath__exe_lt__prev = Core_datapath__exe_lt;
  dat_dump<1>(f, Core_datapath__exe_eq, 0x61);
  Core_datapath__exe_eq__prev = Core_datapath__exe_eq;
  dat_dump<1>(f, Core_datapath__exe_br_cond, 0x62);
  Core_datapath__exe_br_cond__prev = Core_datapath__exe_br_cond;
  dat_dump<1>(f, Core_datapath__io_control_exe_br_cond, 0x63);
  Core_datapath__io_control_exe_br_cond__prev = Core_datapath__io_control_exe_br_cond;
  dat_dump<1>(f, Core_control__io_exe_br_cond, 0x64);
  Core_control__io_exe_br_cond__prev = Core_control__io_exe_br_cond;
  dat_dump<1>(f, Core_control__exe_brjmp, 0x65);
  Core_control__exe_brjmp__prev = Core_control__exe_brjmp;
  dat_dump<1>(f, Core_control__next_valid, 0x66);
  Core_control__next_valid__prev = Core_control__next_valid;
  dat_dump<1>(f, Core_control__io_next_valid, 0x67);
  Core_control__io_next_valid__prev = Core_control__io_next_valid;
  dat_dump<1>(f, Core_datapath__io_control_next_valid, 0x68);
  Core_datapath__io_control_next_valid__prev = Core_datapath__io_control_next_valid;
  dat_dump<1>(f, Core_datapath__io_imem_r_enable, 0x69);
  Core_datapath__io_imem_r_enable__prev = Core_datapath__io_imem_r_enable;
  dat_dump<1>(f, Core_imem__io_core_r_enable, 0x6a);
  Core_imem__io_core_r_enable__prev = Core_imem__io_core_r_enable;
  dat_dump<1>(f, Core_datapath_loadstore__io_imem_rw_write, 0x6b);
  Core_datapath_loadstore__io_imem_rw_write__prev = Core_datapath_loadstore__io_imem_rw_write;
  dat_dump<1>(f, Core_datapath__io_imem_rw_write, 0x6c);
  Core_datapath__io_imem_rw_write__prev = Core_datapath__io_imem_rw_write;
  dat_dump<1>(f, Core_imem__io_core_rw_write, 0x6d);
  Core_imem__io_core_rw_write__prev = Core_imem__io_core_rw_write;
  dat_dump<1>(f, Core_datapath_loadstore__io_imem_rw_enable, 0x6e);
  Core_datapath_loadstore__io_imem_rw_enable__prev = Core_datapath_loadstore__io_imem_rw_enable;
  dat_dump<1>(f, Core_datapath__io_imem_rw_enable, 0x6f);
  Core_datapath__io_imem_rw_enable__prev = Core_datapath__io_imem_rw_enable;
  dat_dump<1>(f, Core_imem__io_core_rw_enable, 0x70);
  Core_imem__io_core_rw_enable__prev = Core_imem__io_core_rw_enable;
  dat_dump<1>(f, Core_datapath_csr__io_kill, 0x71);
  Core_datapath_csr__io_kill__prev = Core_datapath_csr__io_kill;
  dat_dump<1>(f, Core_datapath_csr__priv_fault, 0x72);
  Core_datapath_csr__priv_fault__prev = Core_datapath_csr__priv_fault;
  dat_dump<1>(f, Core_control__exe_csr_write, 0x73);
  Core_control__exe_csr_write__prev = Core_control__exe_csr_write;
  dat_dump<1>(f, Core_control__io_exe_csr_write, 0x74);
  Core_control__io_exe_csr_write__prev = Core_control__io_exe_csr_write;
  dat_dump<1>(f, Core_datapath__io_control_exe_csr_write, 0x75);
  Core_datapath__io_control_exe_csr_write__prev = Core_datapath__io_control_exe_csr_write;
  dat_dump<1>(f, Core_datapath_csr__io_rw_write, 0x76);
  Core_datapath_csr__io_rw_write__prev = Core_datapath_csr__io_rw_write;
  dat_dump<1>(f, Core_datapath_csr__write, 0x77);
  Core_datapath_csr__write__prev = Core_datapath_csr__write;
  dat_dump<1>(f, Core__io_int_exts_0, 0x78);
  Core__io_int_exts_0__prev = Core__io_int_exts_0;
  dat_dump<1>(f, Core_datapath__io_int_exts_0, 0x79);
  Core_datapath__io_int_exts_0__prev = Core_datapath__io_int_exts_0;
  dat_dump<1>(f, Core_datapath_csr__io_int_exts_0, 0x7a);
  Core_datapath_csr__io_int_exts_0__prev = Core_datapath_csr__io_int_exts_0;
  dat_dump<1>(f, Core__io_int_exts_1, 0x7b);
  Core__io_int_exts_1__prev = Core__io_int_exts_1;
  dat_dump<1>(f, Core_datapath__io_int_exts_1, 0x7c);
  Core_datapath__io_int_exts_1__prev = Core_datapath__io_int_exts_1;
  dat_dump<1>(f, Core_datapath_csr__io_int_exts_1, 0x7d);
  Core_datapath_csr__io_int_exts_1__prev = Core_datapath_csr__io_int_exts_1;
  dat_dump<1>(f, Core__io_int_exts_2, 0x7e);
  Core__io_int_exts_2__prev = Core__io_int_exts_2;
  dat_dump<2>(f, Core_datapath__io_int_exts_2, 0x2221);
  Core_datapath__io_int_exts_2__prev = Core_datapath__io_int_exts_2;
  dat_dump<2>(f, Core_datapath_csr__io_int_exts_2, 0x2222);
  Core_datapath_csr__io_int_exts_2__prev = Core_datapath_csr__io_int_exts_2;
  dat_dump<2>(f, Core__io_int_exts_3, 0x2223);
  Core__io_int_exts_3__prev = Core__io_int_exts_3;
  dat_dump<2>(f, Core_datapath__io_int_exts_3, 0x2224);
  Core_datapath__io_int_exts_3__prev = Core_datapath__io_int_exts_3;
  dat_dump<2>(f, Core_datapath_csr__io_int_exts_3, 0x2225);
  Core_datapath_csr__io_int_exts_3__prev = Core_datapath_csr__io_int_exts_3;
  dat_dump<2>(f, Core_datapath__reset, 0x2226);
  Core_datapath__reset__prev = Core_datapath__reset;
  dat_dump<2>(f, Core_datapath_csr__reset, 0x2227);
  Core_datapath_csr__reset__prev = Core_datapath_csr__reset;
  dat_dump<2>(f, Core_datapath_csr__reg_msip_1, 0x2228);
  Core_datapath_csr__reg_msip_1__prev = Core_datapath_csr__reg_msip_1;
  dat_dump<2>(f, Core_datapath_csr__reg_mtie_3, 0x2229);
  Core_datapath_csr__reg_mtie_3__prev = Core_datapath_csr__reg_mtie_3;
  dat_dump<2>(f, Core_datapath_csr__reg_ie1_3, 0x222a);
  Core_datapath_csr__reg_ie1_3__prev = Core_datapath_csr__reg_ie1_3;
  dat_dump<2>(f, Core_datapath_loadstore__io_store_misaligned, 0x222b);
  Core_datapath_loadstore__io_store_misaligned__prev = Core_datapath_loadstore__io_store_misaligned;
  dat_dump<2>(f, Core_datapath__io_control_exe_exc_store_misaligned, 0x222c);
  Core_datapath__io_control_exe_exc_store_misaligned__prev = Core_datapath__io_control_exe_exc_store_misaligned;
  dat_dump<2>(f, Core_control__io_exe_exc_store_misaligned, 0x222d);
  Core_control__io_exe_exc_store_misaligned__prev = Core_control__io_exe_exc_store_misaligned;
  dat_dump<2>(f, Core_datapath_loadstore__load_misaligned, 0x222e);
  Core_datapath_loadstore__load_misaligned__prev = Core_datapath_loadstore__load_misaligned;
  dat_dump<2>(f, Core_datapath_loadstore__io_load_misaligned, 0x222f);
  Core_datapath_loadstore__io_load_misaligned__prev = Core_datapath_loadstore__io_load_misaligned;
  dat_dump<2>(f, Core_datapath__io_control_exe_exc_load_misaligned, 0x2230);
  Core_datapath__io_control_exe_exc_load_misaligned__prev = Core_datapath__io_control_exe_exc_load_misaligned;
  dat_dump<2>(f, Core_control__io_exe_exc_load_misaligned, 0x2231);
  Core_control__io_exe_exc_load_misaligned__prev = Core_control__io_exe_exc_load_misaligned;
  dat_dump<2>(f, Core_datapath_csr__io_priv_fault, 0x2232);
  Core_datapath_csr__io_priv_fault__prev = Core_datapath_csr__io_priv_fault;
  dat_dump<2>(f, Core_datapath__io_control_exe_exc_priv_inst, 0x2233);
  Core_datapath__io_control_exe_exc_priv_inst__prev = Core_datapath__io_control_exe_exc_priv_inst;
  dat_dump<2>(f, Core_control__io_exe_exc_priv_inst, 0x2234);
  Core_control__io_exe_exc_priv_inst__prev = Core_control__io_exe_exc_priv_inst;
  dat_dump<2>(f, Core_control__exe_inst_exc, 0x2235);
  Core_control__exe_inst_exc__prev = Core_control__exe_inst_exc;
  dat_dump<2>(f, Core_control__exe_exception, 0x2236);
  Core_control__exe_exception__prev = Core_control__exe_exception;
  dat_dump<2>(f, Core_control__io_exe_exception, 0x2237);
  Core_control__io_exe_exception__prev = Core_control__io_exe_exception;
  dat_dump<2>(f, Core_datapath__io_control_exe_exception, 0x2238);
  Core_datapath__io_control_exe_exception__prev = Core_datapath__io_control_exe_exception;
  dat_dump<2>(f, Core_datapath_csr__io_exception, 0x2239);
  Core_datapath_csr__io_exception__prev = Core_datapath_csr__io_exception;
  dat_dump<2>(f, Core_datapath_csr__reg_ie_3, 0x223a);
  Core_datapath_csr__reg_ie_3__prev = Core_datapath_csr__reg_ie_3;
  dat_dump<2>(f, Core_datapath_csr__reg_msip_3, 0x223b);
  Core_datapath_csr__reg_msip_3__prev = Core_datapath_csr__reg_msip_3;
  dat_dump<2>(f, Core_datapath_csr__reg_mtie_2, 0x223c);
  Core_datapath_csr__reg_mtie_2__prev = Core_datapath_csr__reg_mtie_2;
  dat_dump<2>(f, Core_datapath_csr__reg_ie1_2, 0x223d);
  Core_datapath_csr__reg_ie1_2__prev = Core_datapath_csr__reg_ie1_2;
  dat_dump<2>(f, Core_datapath_csr__reg_ie_2, 0x223e);
  Core_datapath_csr__reg_ie_2__prev = Core_datapath_csr__reg_ie_2;
  dat_dump<2>(f, Core_datapath_csr__reg_msip_2, 0x223f);
  Core_datapath_csr__reg_msip_2__prev = Core_datapath_csr__reg_msip_2;
  dat_dump<2>(f, Core_datapath_csr__reg_mtie_1, 0x2240);
  Core_datapath_csr__reg_mtie_1__prev = Core_datapath_csr__reg_mtie_1;
  dat_dump<2>(f, Core_datapath_csr__reg_ie1_1, 0x2241);
  Core_datapath_csr__reg_ie1_1__prev = Core_datapath_csr__reg_ie1_1;
  dat_dump<2>(f, Core_datapath_csr__reg_ie_1, 0x2242);
  Core_datapath_csr__reg_ie_1__prev = Core_datapath_csr__reg_ie_1;
  dat_dump<2>(f, Core_datapath_csr__reg_mtie_0, 0x2243);
  Core_datapath_csr__reg_mtie_0__prev = Core_datapath_csr__reg_mtie_0;
  dat_dump<2>(f, Core_datapath_csr__reg_ie1_0, 0x2244);
  Core_datapath_csr__reg_ie1_0__prev = Core_datapath_csr__reg_ie1_0;
  dat_dump<2>(f, Core_datapath_csr__reg_ie_0, 0x2245);
  Core_datapath_csr__reg_ie_0__prev = Core_datapath_csr__reg_ie_0;
  dat_dump<2>(f, Core__io_gpio_in_3, 0x2246);
  Core__io_gpio_in_3__prev = Core__io_gpio_in_3;
  dat_dump<2>(f, Core_datapath__io_gpio_in_3, 0x2247);
  Core_datapath__io_gpio_in_3__prev = Core_datapath__io_gpio_in_3;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_in_3, 0x2248);
  Core_datapath_csr__io_gpio_in_3__prev = Core_datapath_csr__io_gpio_in_3;
  dat_dump<2>(f, Core_datapath_csr__reg_gpis_3, 0x2249);
  Core_datapath_csr__reg_gpis_3__prev = Core_datapath_csr__reg_gpis_3;
  dat_dump<2>(f, Core__io_gpio_in_2, 0x224a);
  Core__io_gpio_in_2__prev = Core__io_gpio_in_2;
  dat_dump<2>(f, Core_datapath__io_gpio_in_2, 0x224b);
  Core_datapath__io_gpio_in_2__prev = Core_datapath__io_gpio_in_2;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_in_2, 0x224c);
  Core_datapath_csr__io_gpio_in_2__prev = Core_datapath_csr__io_gpio_in_2;
  dat_dump<2>(f, Core_datapath_csr__reg_gpis_2, 0x224d);
  Core_datapath_csr__reg_gpis_2__prev = Core_datapath_csr__reg_gpis_2;
  dat_dump<2>(f, Core__io_gpio_in_1, 0x224e);
  Core__io_gpio_in_1__prev = Core__io_gpio_in_1;
  dat_dump<2>(f, Core_datapath__io_gpio_in_1, 0x224f);
  Core_datapath__io_gpio_in_1__prev = Core_datapath__io_gpio_in_1;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_in_1, 0x2250);
  Core_datapath_csr__io_gpio_in_1__prev = Core_datapath_csr__io_gpio_in_1;
  dat_dump<2>(f, Core_datapath_csr__reg_gpis_1, 0x2251);
  Core_datapath_csr__reg_gpis_1__prev = Core_datapath_csr__reg_gpis_1;
  dat_dump<2>(f, Core__io_gpio_in_0, 0x2252);
  Core__io_gpio_in_0__prev = Core__io_gpio_in_0;
  dat_dump<2>(f, Core_datapath__io_gpio_in_0, 0x2253);
  Core_datapath__io_gpio_in_0__prev = Core_datapath__io_gpio_in_0;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_in_0, 0x2254);
  Core_datapath_csr__io_gpio_in_0__prev = Core_datapath_csr__io_gpio_in_0;
  dat_dump<2>(f, Core_datapath_csr__reg_gpis_0, 0x2255);
  Core_datapath_csr__reg_gpis_0__prev = Core_datapath_csr__reg_gpis_0;
  dat_dump<2>(f, Core_control__exe_valid, 0x2256);
  Core_control__exe_valid__prev = Core_control__exe_valid;
  dat_dump<2>(f, Core_control__exe_sleep, 0x2257);
  Core_control__exe_sleep__prev = Core_control__exe_sleep;
  dat_dump<2>(f, Core_control__io_exe_sleep, 0x2258);
  Core_control__io_exe_sleep__prev = Core_control__io_exe_sleep;
  dat_dump<2>(f, Core_datapath__io_control_exe_sleep, 0x2259);
  Core_datapath__io_control_exe_sleep__prev = Core_datapath__io_control_exe_sleep;
  dat_dump<2>(f, Core_datapath_csr__io_sleep, 0x225a);
  Core_datapath_csr__io_sleep__prev = Core_datapath_csr__io_sleep;
  dat_dump<2>(f, Core_datapath_csr__sleep, 0x225b);
  Core_datapath_csr__sleep__prev = Core_datapath_csr__sleep;
  dat_dump<2>(f, Core_datapath_csr__wake_1, 0x225c);
  Core_datapath_csr__wake_1__prev = Core_datapath_csr__wake_1;
  dat_dump<2>(f, Core_datapath_csr__wake_3, 0x225d);
  Core_datapath_csr__wake_3__prev = Core_datapath_csr__wake_3;
  dat_dump<2>(f, Core_control__exe_ee, 0x225e);
  Core_control__exe_ee__prev = Core_control__exe_ee;
  dat_dump<2>(f, Core_control__io_exe_ee, 0x225f);
  Core_control__io_exe_ee__prev = Core_control__io_exe_ee;
  dat_dump<2>(f, Core_datapath__io_control_exe_ee, 0x2260);
  Core_datapath__io_control_exe_ee__prev = Core_datapath__io_control_exe_ee;
  dat_dump<2>(f, Core_datapath_csr__io_ee, 0x2261);
  Core_datapath_csr__io_ee__prev = Core_datapath_csr__io_ee;
  dat_dump<2>(f, Core_control__exe_ie, 0x2262);
  Core_control__exe_ie__prev = Core_control__exe_ie;
  dat_dump<2>(f, Core_control__io_exe_ie, 0x2263);
  Core_control__io_exe_ie__prev = Core_control__io_exe_ie;
  dat_dump<2>(f, Core_datapath__io_control_exe_ie, 0x2264);
  Core_datapath__io_control_exe_ie__prev = Core_datapath__io_control_exe_ie;
  dat_dump<2>(f, Core_datapath_csr__io_ie, 0x2265);
  Core_datapath_csr__io_ie__prev = Core_datapath_csr__io_ie;
  dat_dump<2>(f, Core_datapath_csr__wake_2, 0x2266);
  Core_datapath_csr__wake_2__prev = Core_datapath_csr__wake_2;
  dat_dump<2>(f, Core_datapath_csr__wake_0, 0x2267);
  Core_datapath_csr__wake_0__prev = Core_datapath_csr__wake_0;
  dat_dump<2>(f, Core_datapath_csr__reg_msip_0, 0x2268);
  Core_datapath_csr__reg_msip_0__prev = Core_datapath_csr__reg_msip_0;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_r_enable, 0x2269);
  Core_datapath_loadstore__io_imem_r_enable__prev = Core_datapath_loadstore__io_imem_r_enable;
  dat_dump<2>(f, Core_datapath_loadstore__dmem_op_reg, 0x226a);
  Core_datapath_loadstore__dmem_op_reg__prev = Core_datapath_loadstore__dmem_op_reg;
  dat_dump<2>(f, Core_datapath_loadstore__imem_op_reg, 0x226b);
  Core_datapath_loadstore__imem_op_reg__prev = Core_datapath_loadstore__imem_op_reg;
  dat_dump<2>(f, Core_control__mem_rd_write, 0x226c);
  Core_control__mem_rd_write__prev = Core_control__mem_rd_write;
  dat_dump<2>(f, Core_control__io_mem_rd_write, 0x226d);
  Core_control__io_mem_rd_write__prev = Core_control__io_mem_rd_write;
  dat_dump<2>(f, Core_datapath__io_control_mem_rd_write, 0x226e);
  Core_datapath__io_control_mem_rd_write__prev = Core_datapath__io_control_mem_rd_write;
  dat_dump<2>(f, Core_datapath_regfile__io_rd_enable, 0x226f);
  Core_datapath_regfile__io_rd_enable__prev = Core_datapath_regfile__io_rd_enable;
  dat_dump<2>(f, Core_control__reset, 0x2270);
  Core_control__reset__prev = Core_control__reset;
  dat_dump<2>(f, Core_control_scheduler__reset, 0x2271);
  Core_control_scheduler__reset__prev = Core_control_scheduler__reset;
  dat_dump<2>(f, Core_control_scheduler__R191, 0x2272);
  Core_control_scheduler__R191__prev = Core_control_scheduler__R191;
  dat_dump<2>(f, Core_control_scheduler__R185, 0x2273);
  Core_control_scheduler__R185__prev = Core_control_scheduler__R185;
  dat_dump<2>(f, Core_control_scheduler__R180, 0x2274);
  Core_control_scheduler__R180__prev = Core_control_scheduler__R180;
  dat_dump<2>(f, Core_control_scheduler__R111, 0x2275);
  Core_control_scheduler__R111__prev = Core_control_scheduler__R111;
  dat_dump<2>(f, Core_control_scheduler__R86, 0x2276);
  Core_control_scheduler__R86__prev = Core_control_scheduler__R86;
  dat_dump<2>(f, Core_control_scheduler__R71, 0x2277);
  Core_control_scheduler__R71__prev = Core_control_scheduler__R71;
  dat_dump<2>(f, Core_control_scheduler__R65, 0x2278);
  Core_control_scheduler__R65__prev = Core_control_scheduler__R65;
  dat_dump<2>(f, Core_control_scheduler__R60, 0x2279);
  Core_control_scheduler__R60__prev = Core_control_scheduler__R60;
  dat_dump<2>(f, Core_control_scheduler__R48, 0x227a);
  Core_control_scheduler__R48__prev = Core_control_scheduler__R48;
  dat_dump<2>(f, Core_control_scheduler__R34, 0x227b);
  Core_control_scheduler__R34__prev = Core_control_scheduler__R34;
  dat_dump<2>(f, Core_control__mem_reg_exception, 0x227c);
  Core_control__mem_reg_exception__prev = Core_control__mem_reg_exception;
  dat_dump<2>(f, Core_control__wb_reg_rd_write, 0x227d);
  Core_control__wb_reg_rd_write__prev = Core_control__wb_reg_rd_write;
  dat_dump<2>(f, Core_control__exe_reg_load, 0x227e);
  Core_control__exe_reg_load__prev = Core_control__exe_reg_load;
  dat_dump<2>(f, Core_control__dec_store, 0x2321);
  Core_control__dec_store__prev = Core_control__dec_store;
  dat_dump<2>(f, Core_control__exe_reg_store, 0x2322);
  Core_control__exe_reg_store__prev = Core_control__exe_reg_store;
  dat_dump<2>(f, Core_control__dec_csr, 0x2323);
  Core_control__dec_csr__prev = Core_control__dec_csr;
  dat_dump<2>(f, Core_control__exe_reg_csr_write, 0x2324);
  Core_control__exe_reg_csr_write__prev = Core_control__exe_reg_csr_write;
  dat_dump<2>(f, Core_control__dec_reg_cause, 0x2325);
  Core_control__dec_reg_cause__prev = Core_control__dec_reg_cause;
  dat_dump<2>(f, Core_control__dec_scall, 0x2326);
  Core_control__dec_scall__prev = Core_control__dec_scall;
  dat_dump<2>(f, Core_control__dec_ie, 0x2327);
  Core_control__dec_ie__prev = Core_control__dec_ie;
  dat_dump<2>(f, Core_control__dec_du, 0x2328);
  Core_control__dec_du__prev = Core_control__dec_du;
  dat_dump<2>(f, Core_control__dec_legal, 0x2329);
  Core_control__dec_legal__prev = Core_control__dec_legal;
  dat_dump<2>(f, Core_control__R179, 0x232a);
  Core_control__R179__prev = Core_control__R179;
  dat_dump<2>(f, Core_control__R172, 0x232b);
  Core_control__R172__prev = Core_control__R172;
  dat_dump<2>(f, Core_control__exe_reg_sret, 0x232c);
  Core_control__exe_reg_sret__prev = Core_control__exe_reg_sret;
  dat_dump<2>(f, Core_control__dec_rd_en, 0x232d);
  Core_control__dec_rd_en__prev = Core_control__dec_rd_en;
  dat_dump<2>(f, Core_control__dec_rd_write, 0x232e);
  Core_control__dec_rd_write__prev = Core_control__dec_rd_write;
  dat_dump<2>(f, Core_control__exe_reg_rd_write, 0x232f);
  Core_control__exe_reg_rd_write__prev = Core_control__exe_reg_rd_write;
  dat_dump<2>(f, Core_control__mem_reg_rd_write, 0x2330);
  Core_control__mem_reg_rd_write__prev = Core_control__mem_reg_rd_write;
  dat_dump<2>(f, Core_control__mem_reg_valid, 0x2331);
  Core_control__mem_reg_valid__prev = Core_control__mem_reg_valid;
  dat_dump<2>(f, Core_control_scheduler__io_valid, 0x2332);
  Core_control_scheduler__io_valid__prev = Core_control_scheduler__io_valid;
  dat_dump<2>(f, Core_control__R148, 0x2333);
  Core_control__R148__prev = Core_control__R148;
  dat_dump<2>(f, Core_control__if_reg_valid, 0x2334);
  Core_control__if_reg_valid__prev = Core_control__if_reg_valid;
  dat_dump<2>(f, Core_control__exe_flush, 0x2335);
  Core_control__exe_flush__prev = Core_control__exe_flush;
  dat_dump<2>(f, Core_control__if_valid, 0x2336);
  Core_control__if_valid__prev = Core_control__if_valid;
  dat_dump<2>(f, Core_control__dec_reg_valid, 0x2337);
  Core_control__dec_reg_valid__prev = Core_control__dec_reg_valid;
  dat_dump<2>(f, Core_control__R81, 0x2338);
  Core_control__R81__prev = Core_control__R81;
  dat_dump<2>(f, Core_control__dec_jump, 0x2339);
  Core_control__dec_jump__prev = Core_control__dec_jump;
  dat_dump<2>(f, Core_control__exe_reg_jump, 0x233a);
  Core_control__exe_reg_jump__prev = Core_control__exe_reg_jump;
  dat_dump<2>(f, Core_control__dec_branch, 0x233b);
  Core_control__dec_branch__prev = Core_control__dec_branch;
  dat_dump<2>(f, Core_control__exe_reg_branch, 0x233c);
  Core_control__exe_reg_branch__prev = Core_control__exe_reg_branch;
  dat_dump<2>(f, Core_control__dec_valid, 0x233d);
  Core_control__dec_valid__prev = Core_control__dec_valid;
  dat_dump<2>(f, Core_control__exe_reg_valid, 0x233e);
  Core_control__exe_reg_valid__prev = Core_control__exe_reg_valid;
  dat_dump<2>(f, Core_datapath__io_control_if_exc_misaligned, 0x233f);
  Core_datapath__io_control_if_exc_misaligned__prev = Core_datapath__io_control_if_exc_misaligned;
  dat_dump<2>(f, Core_control__io_if_exc_misaligned, 0x2340);
  Core_control__io_if_exc_misaligned__prev = Core_control__io_if_exc_misaligned;
  dat_dump<2>(f, Core_control__dec_reg_exc, 0x2341);
  Core_control__dec_reg_exc__prev = Core_control__dec_reg_exc;
  dat_dump<2>(f, Core_control__dec_exc, 0x2342);
  Core_control__dec_exc__prev = Core_control__dec_exc;
  dat_dump<2>(f, Core_control__exe_reg_exc, 0x2343);
  Core_control__exe_reg_exc__prev = Core_control__exe_reg_exc;
  dat_dump<2>(f, Core_imem__io_bus_ready, 0x2344);
  Core_imem__io_bus_ready__prev = Core_imem__io_bus_ready;
  dat_dump<2>(f, Core__io_imem_ready, 0x2345);
  Core__io_imem_ready__prev = Core__io_imem_ready;
  dat_dump<2>(f, Core_datapath_loadstore__io_bus_enable, 0x2346);
  Core_datapath_loadstore__io_bus_enable__prev = Core_datapath_loadstore__io_bus_enable;
  dat_dump<2>(f, Core_datapath__io_bus_enable, 0x2347);
  Core_datapath__io_bus_enable__prev = Core_datapath__io_bus_enable;
  dat_dump<2>(f, Core__io_bus_enable, 0x2348);
  Core__io_bus_enable__prev = Core__io_bus_enable;
  dat_dump<2>(f, Core_datapath_loadstore__io_bus_write, 0x2349);
  Core_datapath_loadstore__io_bus_write__prev = Core_datapath_loadstore__io_bus_write;
  dat_dump<2>(f, Core_datapath__io_bus_write, 0x234a);
  Core_datapath__io_bus_write__prev = Core_datapath__io_bus_write;
  dat_dump<2>(f, Core__io_bus_write, 0x234b);
  Core__io_bus_write__prev = Core__io_bus_write;
  dat_dump<2>(f, Core__io_int_exts_4, 0x234c);
  Core__io_int_exts_4__prev = Core__io_int_exts_4;
  dat_dump<2>(f, Core__io_int_exts_5, 0x234d);
  Core__io_int_exts_5__prev = Core__io_int_exts_5;
  dat_dump<2>(f, Core__io_int_exts_6, 0x234e);
  Core__io_int_exts_6__prev = Core__io_int_exts_6;
  dat_dump<2>(f, Core__io_int_exts_7, 0x234f);
  Core__io_int_exts_7__prev = Core__io_int_exts_7;
  dat_dump<2>(f, Core__io_dmem_byte_write_0, 0x2350);
  Core__io_dmem_byte_write_0__prev = Core__io_dmem_byte_write_0;
  dat_dump<2>(f, Core__io_dmem_byte_write_1, 0x2351);
  Core__io_dmem_byte_write_1__prev = Core__io_dmem_byte_write_1;
  dat_dump<2>(f, Core__io_dmem_byte_write_2, 0x2352);
  Core__io_dmem_byte_write_2__prev = Core__io_dmem_byte_write_2;
  dat_dump<2>(f, Core__io_dmem_byte_write_3, 0x2353);
  Core__io_dmem_byte_write_3__prev = Core__io_dmem_byte_write_3;
  dat_dump<2>(f, Core__io_dmem_enable, 0x2354);
  Core__io_dmem_enable__prev = Core__io_dmem_enable;
  dat_dump<2>(f, Core__io_imem_write, 0x2355);
  Core__io_imem_write__prev = Core__io_imem_write;
  dat_dump<2>(f, Core__io_imem_enable, 0x2356);
  Core__io_imem_enable__prev = Core__io_imem_enable;
  dat_dump<2>(f, Core_datapath_csr__io_rw_thread, 0x2357);
  Core_datapath_csr__io_rw_thread__prev = Core_datapath_csr__io_rw_thread;
  dat_dump<2>(f, Core_datapath_loadstore__io_thread, 0x2358);
  Core_datapath_loadstore__io_thread__prev = Core_datapath_loadstore__io_thread;
  dat_dump<2>(f, Core_datapath__io_control_if_tid, 0x2359);
  Core_datapath__io_control_if_tid__prev = Core_datapath__io_control_if_tid;
  dat_dump<2>(f, Core_control__io_if_tid, 0x235a);
  Core_control__io_if_tid__prev = Core_control__io_if_tid;
  dat_dump<2>(f, Core_datapath__io_control_dec_tid, 0x235b);
  Core_datapath__io_control_dec_tid__prev = Core_datapath__io_control_dec_tid;
  dat_dump<2>(f, Core_control__io_dec_tid, 0x235c);
  Core_control__io_dec_tid__prev = Core_control__io_dec_tid;
  dat_dump<2>(f, Core_datapath__io_control_exe_tid, 0x235d);
  Core_datapath__io_control_exe_tid__prev = Core_datapath__io_control_exe_tid;
  dat_dump<2>(f, Core_control__io_exe_tid, 0x235e);
  Core_control__io_exe_tid__prev = Core_control__io_exe_tid;
  dat_dump<2>(f, Core_datapath__io_control_mem_tid, 0x235f);
  Core_datapath__io_control_mem_tid__prev = Core_datapath__io_control_mem_tid;
  dat_dump<2>(f, Core_control__io_mem_tid, 0x2360);
  Core_control__io_mem_tid__prev = Core_control__io_mem_tid;
  dat_dump<2>(f, Core_control__next_pc_sel_0, 0x2361);
  Core_control__next_pc_sel_0__prev = Core_control__next_pc_sel_0;
  dat_dump<2>(f, Core_control__io_next_pc_sel_0, 0x2362);
  Core_control__io_next_pc_sel_0__prev = Core_control__io_next_pc_sel_0;
  dat_dump<2>(f, Core_datapath__io_control_next_pc_sel_0, 0x2363);
  Core_datapath__io_control_next_pc_sel_0__prev = Core_datapath__io_control_next_pc_sel_0;
  dat_dump<2>(f, Core_control__next_pc_sel_1, 0x2364);
  Core_control__next_pc_sel_1__prev = Core_control__next_pc_sel_1;
  dat_dump<2>(f, Core_control__io_next_pc_sel_1, 0x2365);
  Core_control__io_next_pc_sel_1__prev = Core_control__io_next_pc_sel_1;
  dat_dump<2>(f, Core_datapath__io_control_next_pc_sel_1, 0x2366);
  Core_datapath__io_control_next_pc_sel_1__prev = Core_datapath__io_control_next_pc_sel_1;
  dat_dump<2>(f, Core_control__next_pc_sel_2, 0x2367);
  Core_control__next_pc_sel_2__prev = Core_control__next_pc_sel_2;
  dat_dump<2>(f, Core_control__io_next_pc_sel_2, 0x2368);
  Core_control__io_next_pc_sel_2__prev = Core_control__io_next_pc_sel_2;
  dat_dump<2>(f, Core_datapath__io_control_next_pc_sel_2, 0x2369);
  Core_datapath__io_control_next_pc_sel_2__prev = Core_datapath__io_control_next_pc_sel_2;
  dat_dump<2>(f, Core_control__next_pc_sel_3, 0x236a);
  Core_control__next_pc_sel_3__prev = Core_control__next_pc_sel_3;
  dat_dump<2>(f, Core_control__io_next_pc_sel_3, 0x236b);
  Core_control__io_next_pc_sel_3__prev = Core_control__io_next_pc_sel_3;
  dat_dump<2>(f, Core_datapath__io_control_next_pc_sel_3, 0x236c);
  Core_datapath__io_control_next_pc_sel_3__prev = Core_datapath__io_control_next_pc_sel_3;
  dat_dump<2>(f, Core_control__next_tid, 0x236d);
  Core_control__next_tid__prev = Core_control__next_tid;
  dat_dump<2>(f, Core_control__io_next_tid, 0x236e);
  Core_control__io_next_tid__prev = Core_control__io_next_tid;
  dat_dump<2>(f, Core_datapath__io_control_next_tid, 0x236f);
  Core_datapath__io_control_next_tid__prev = Core_datapath__io_control_next_tid;
  dat_dump<2>(f, Core_control__io_exe_csr_type, 0x2370);
  Core_control__io_exe_csr_type__prev = Core_control__io_exe_csr_type;
  dat_dump<2>(f, Core_datapath__io_control_exe_csr_type, 0x2371);
  Core_datapath__io_control_exe_csr_type__prev = Core_datapath__io_control_exe_csr_type;
  dat_dump<2>(f, Core_datapath_csr__io_rw_csr_type, 0x2372);
  Core_datapath_csr__io_rw_csr_type__prev = Core_datapath_csr__io_rw_csr_type;
  dat_dump<2>(f, Core_datapath_csr__reg_prv1_3, 0x2373);
  Core_datapath_csr__reg_prv1_3__prev = Core_datapath_csr__reg_prv1_3;
  dat_dump<2>(f, Core_datapath_csr__reg_prv_3, 0x2374);
  Core_datapath_csr__reg_prv_3__prev = Core_datapath_csr__reg_prv_3;
  dat_dump<2>(f, Core_datapath_csr__reg_prv1_2, 0x2375);
  Core_datapath_csr__reg_prv1_2__prev = Core_datapath_csr__reg_prv1_2;
  dat_dump<2>(f, Core_datapath_csr__reg_prv_2, 0x2376);
  Core_datapath_csr__reg_prv_2__prev = Core_datapath_csr__reg_prv_2;
  dat_dump<2>(f, Core_datapath_csr__reg_prv1_1, 0x2377);
  Core_datapath_csr__reg_prv1_1__prev = Core_datapath_csr__reg_prv1_1;
  dat_dump<2>(f, Core_datapath_csr__reg_prv_1, 0x2378);
  Core_datapath_csr__reg_prv_1__prev = Core_datapath_csr__reg_prv_1;
  dat_dump<2>(f, Core_datapath_csr__reg_prv1_0, 0x2379);
  Core_datapath_csr__reg_prv1_0__prev = Core_datapath_csr__reg_prv1_0;
  dat_dump<2>(f, Core_datapath_csr__reg_prv_0, 0x237a);
  Core_datapath_csr__reg_prv_0__prev = Core_datapath_csr__reg_prv_0;
  dat_dump<2>(f, Core_datapath_csr__reg_gpos_3, 0x237b);
  Core_datapath_csr__reg_gpos_3__prev = Core_datapath_csr__reg_gpos_3;
  dat_dump<2>(f, Core_datapath_csr__reg_gpos_2, 0x237c);
  Core_datapath_csr__reg_gpos_2__prev = Core_datapath_csr__reg_gpos_2;
  dat_dump<2>(f, Core_datapath_csr__reg_gpos_1, 0x237d);
  Core_datapath_csr__reg_gpos_1__prev = Core_datapath_csr__reg_gpos_1;
  dat_dump<2>(f, Core_datapath_csr__reg_gpos_0, 0x237e);
  Core_datapath_csr__reg_gpos_0__prev = Core_datapath_csr__reg_gpos_0;
  dat_dump<2>(f, Core_datapath_csr__reg_tmodes_1, 0x2421);
  Core_datapath_csr__reg_tmodes_1__prev = Core_datapath_csr__reg_tmodes_1;
  dat_dump<2>(f, Core_datapath_csr__reg_tmodes_3, 0x2422);
  Core_datapath_csr__reg_tmodes_3__prev = Core_datapath_csr__reg_tmodes_3;
  dat_dump<2>(f, Core_datapath_csr__reg_timer_3, 0x2423);
  Core_datapath_csr__reg_timer_3__prev = Core_datapath_csr__reg_timer_3;
  dat_dump<2>(f, Core_datapath_csr__reg_timer_1, 0x2424);
  Core_datapath_csr__reg_timer_1__prev = Core_datapath_csr__reg_timer_1;
  dat_dump<2>(f, Core_datapath_csr__reg_timer_0, 0x2425);
  Core_datapath_csr__reg_timer_0__prev = Core_datapath_csr__reg_timer_0;
  dat_dump<2>(f, Core_datapath_csr__reg_timer_2, 0x2426);
  Core_datapath_csr__reg_timer_2__prev = Core_datapath_csr__reg_timer_2;
  dat_dump<2>(f, Core_datapath_csr__reg_tmodes_2, 0x2427);
  Core_datapath_csr__reg_tmodes_2__prev = Core_datapath_csr__reg_tmodes_2;
  dat_dump<2>(f, Core_datapath_csr__reg_tmodes_0, 0x2428);
  Core_datapath_csr__reg_tmodes_0__prev = Core_datapath_csr__reg_tmodes_0;
  dat_dump<2>(f, Core_datapath_loadstore__addr_byte_reg, 0x2429);
  Core_datapath_loadstore__addr_byte_reg__prev = Core_datapath_loadstore__addr_byte_reg;
  dat_dump<2>(f, Core_datapath_regfile__io_rs1_thread, 0x242a);
  Core_datapath_regfile__io_rs1_thread__prev = Core_datapath_regfile__io_rs1_thread;
  dat_dump<2>(f, Core_control__io_mem_rd_data_sel, 0x242b);
  Core_control__io_mem_rd_data_sel__prev = Core_control__io_mem_rd_data_sel;
  dat_dump<2>(f, Core_datapath__io_control_mem_rd_data_sel, 0x242c);
  Core_datapath__io_control_mem_rd_data_sel__prev = Core_datapath__io_control_mem_rd_data_sel;
  dat_dump<2>(f, Core_datapath_regfile__io_rd_thread, 0x242d);
  Core_datapath_regfile__io_rd_thread__prev = Core_datapath_regfile__io_rd_thread;
  dat_dump<2>(f, Core_datapath_regfile__io_rs2_thread, 0x242e);
  Core_datapath_regfile__io_rs2_thread__prev = Core_datapath_regfile__io_rs2_thread;
  dat_dump<2>(f, Core_datapath__io_control_wb_tid, 0x242f);
  Core_datapath__io_control_wb_tid__prev = Core_datapath__io_control_wb_tid;
  dat_dump<2>(f, Core_control__io_wb_tid, 0x2430);
  Core_control__io_wb_tid__prev = Core_control__io_wb_tid;
  dat_dump<2>(f, Core_control__dec_rs1_sel, 0x2431);
  Core_control__dec_rs1_sel__prev = Core_control__dec_rs1_sel;
  dat_dump<2>(f, Core_control__io_dec_rs1_sel, 0x2432);
  Core_control__io_dec_rs1_sel__prev = Core_control__io_dec_rs1_sel;
  dat_dump<2>(f, Core_datapath__io_control_dec_rs1_sel, 0x2433);
  Core_datapath__io_control_dec_rs1_sel__prev = Core_datapath__io_control_dec_rs1_sel;
  dat_dump<2>(f, Core_control__io_exe_rd_data_sel, 0x2434);
  Core_control__io_exe_rd_data_sel__prev = Core_control__io_exe_rd_data_sel;
  dat_dump<2>(f, Core_datapath__io_control_exe_rd_data_sel, 0x2435);
  Core_datapath__io_control_exe_rd_data_sel__prev = Core_datapath__io_control_exe_rd_data_sel;
  dat_dump<2>(f, Core_datapath__wb_reg_tid, 0x2436);
  Core_datapath__wb_reg_tid__prev = Core_datapath__wb_reg_tid;
  dat_dump<2>(f, Core_control__dec_rs2_sel, 0x2437);
  Core_control__dec_rs2_sel__prev = Core_control__dec_rs2_sel;
  dat_dump<2>(f, Core_control__io_dec_rs2_sel, 0x2438);
  Core_control__io_dec_rs2_sel__prev = Core_control__io_dec_rs2_sel;
  dat_dump<2>(f, Core_datapath__io_control_dec_rs2_sel, 0x2439);
  Core_datapath__io_control_dec_rs2_sel__prev = Core_datapath__io_control_dec_rs2_sel;
  dat_dump<2>(f, Core_control__dec_op2_sel, 0x243a);
  Core_control__dec_op2_sel__prev = Core_control__dec_op2_sel;
  dat_dump<2>(f, Core_control__io_dec_op2_sel, 0x243b);
  Core_control__io_dec_op2_sel__prev = Core_control__io_dec_op2_sel;
  dat_dump<2>(f, Core_datapath__io_control_dec_op2_sel, 0x243c);
  Core_datapath__io_control_dec_op2_sel__prev = Core_datapath__io_control_dec_op2_sel;
  dat_dump<2>(f, Core_datapath__mem_reg_tid, 0x243d);
  Core_datapath__mem_reg_tid__prev = Core_datapath__mem_reg_tid;
  dat_dump<2>(f, Core_datapath__exe_reg_tid, 0x243e);
  Core_datapath__exe_reg_tid__prev = Core_datapath__exe_reg_tid;
  dat_dump<2>(f, Core_control__dec_op1_sel, 0x243f);
  Core_control__dec_op1_sel__prev = Core_control__dec_op1_sel;
  dat_dump<2>(f, Core_control__io_dec_op1_sel, 0x2440);
  Core_control__io_dec_op1_sel__prev = Core_control__io_dec_op1_sel;
  dat_dump<2>(f, Core_datapath__io_control_dec_op1_sel, 0x2441);
  Core_datapath__io_control_dec_op1_sel__prev = Core_datapath__io_control_dec_op1_sel;
  dat_dump<2>(f, Core_datapath__if_reg_tid, 0x2442);
  Core_datapath__if_reg_tid__prev = Core_datapath__if_reg_tid;
  dat_dump<2>(f, Core_datapath__dec_reg_tid, 0x2443);
  Core_datapath__dec_reg_tid__prev = Core_datapath__dec_reg_tid;
  dat_dump<2>(f, Core_datapath_csr__io_tmodes_1, 0x2444);
  Core_datapath_csr__io_tmodes_1__prev = Core_datapath_csr__io_tmodes_1;
  dat_dump<2>(f, Core_datapath__io_control_csr_tmodes_1, 0x2445);
  Core_datapath__io_control_csr_tmodes_1__prev = Core_datapath__io_control_csr_tmodes_1;
  dat_dump<2>(f, Core_control__io_csr_tmodes_1, 0x2446);
  Core_control__io_csr_tmodes_1__prev = Core_control__io_csr_tmodes_1;
  dat_dump<2>(f, Core_control_scheduler__io_thread_modes_1, 0x2447);
  Core_control_scheduler__io_thread_modes_1__prev = Core_control_scheduler__io_thread_modes_1;
  dat_dump<2>(f, Core_datapath_csr__io_tmodes_0, 0x2448);
  Core_datapath_csr__io_tmodes_0__prev = Core_datapath_csr__io_tmodes_0;
  dat_dump<2>(f, Core_datapath__io_control_csr_tmodes_0, 0x2449);
  Core_datapath__io_control_csr_tmodes_0__prev = Core_datapath__io_control_csr_tmodes_0;
  dat_dump<2>(f, Core_control__io_csr_tmodes_0, 0x244a);
  Core_control__io_csr_tmodes_0__prev = Core_control__io_csr_tmodes_0;
  dat_dump<2>(f, Core_control_scheduler__io_thread_modes_0, 0x244b);
  Core_control_scheduler__io_thread_modes_0__prev = Core_control_scheduler__io_thread_modes_0;
  dat_dump<2>(f, Core_datapath_csr__io_tmodes_2, 0x244c);
  Core_datapath_csr__io_tmodes_2__prev = Core_datapath_csr__io_tmodes_2;
  dat_dump<2>(f, Core_datapath__io_control_csr_tmodes_2, 0x244d);
  Core_datapath__io_control_csr_tmodes_2__prev = Core_datapath__io_control_csr_tmodes_2;
  dat_dump<2>(f, Core_control__io_csr_tmodes_2, 0x244e);
  Core_control__io_csr_tmodes_2__prev = Core_control__io_csr_tmodes_2;
  dat_dump<2>(f, Core_control_scheduler__io_thread_modes_2, 0x244f);
  Core_control_scheduler__io_thread_modes_2__prev = Core_control_scheduler__io_thread_modes_2;
  dat_dump<2>(f, Core_datapath_csr__io_tmodes_3, 0x2450);
  Core_datapath_csr__io_tmodes_3__prev = Core_datapath_csr__io_tmodes_3;
  dat_dump<2>(f, Core_datapath__io_control_csr_tmodes_3, 0x2451);
  Core_datapath__io_control_csr_tmodes_3__prev = Core_datapath__io_control_csr_tmodes_3;
  dat_dump<2>(f, Core_control__io_csr_tmodes_3, 0x2452);
  Core_control__io_csr_tmodes_3__prev = Core_control__io_csr_tmodes_3;
  dat_dump<2>(f, Core_control_scheduler__io_thread_modes_3, 0x2453);
  Core_control_scheduler__io_thread_modes_3__prev = Core_control_scheduler__io_thread_modes_3;
  dat_dump<2>(f, Core_control__dec_csr_type, 0x2454);
  Core_control__dec_csr_type__prev = Core_control__dec_csr_type;
  dat_dump<2>(f, Core_control__exe_reg_csr_type, 0x2455);
  Core_control__exe_reg_csr_type__prev = Core_control__exe_reg_csr_type;
  dat_dump<2>(f, Core_control__exe_reg_mul_type, 0x2456);
  Core_control__exe_reg_mul_type__prev = Core_control__exe_reg_mul_type;
  dat_dump<2>(f, Core_control__dec_exe_rd_data_sel, 0x2457);
  Core_control__dec_exe_rd_data_sel__prev = Core_control__dec_exe_rd_data_sel;
  dat_dump<2>(f, Core_control__exe_reg_rd_data_sel, 0x2458);
  Core_control__exe_reg_rd_data_sel__prev = Core_control__exe_reg_rd_data_sel;
  dat_dump<2>(f, Core_control__dec_mem_rd_data_sel, 0x2459);
  Core_control__dec_mem_rd_data_sel__prev = Core_control__dec_mem_rd_data_sel;
  dat_dump<2>(f, Core_control__R269, 0x245a);
  Core_control__R269__prev = Core_control__R269;
  dat_dump<2>(f, Core_control__mem_reg_rd_data_sel, 0x245b);
  Core_control__mem_reg_rd_data_sel__prev = Core_control__mem_reg_rd_data_sel;
  dat_dump<2>(f, Core_control_scheduler__io_thread, 0x245c);
  Core_control_scheduler__io_thread__prev = Core_control_scheduler__io_thread;
  dat_dump<2>(f, Core_control__R225, 0x245d);
  Core_control__R225__prev = Core_control__R225;
  dat_dump<2>(f, Core_control__stall_count_3, 0x245e);
  Core_control__stall_count_3__prev = Core_control__stall_count_3;
  dat_dump<2>(f, Core_control__stall_count_2, 0x245f);
  Core_control__stall_count_2__prev = Core_control__stall_count_2;
  dat_dump<2>(f, Core_control__stall_count_1, 0x2460);
  Core_control__stall_count_1__prev = Core_control__stall_count_1;
  dat_dump<2>(f, Core_control__stall_count_0, 0x2461);
  Core_control__stall_count_0__prev = Core_control__stall_count_0;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_out_3, 0x2462);
  Core_datapath_csr__io_gpio_out_3__prev = Core_datapath_csr__io_gpio_out_3;
  dat_dump<2>(f, Core_datapath__io_gpio_out_3, 0x2463);
  Core_datapath__io_gpio_out_3__prev = Core_datapath__io_gpio_out_3;
  dat_dump<2>(f, Core__io_gpio_out_3, 0x2464);
  Core__io_gpio_out_3__prev = Core__io_gpio_out_3;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_out_2, 0x2465);
  Core_datapath_csr__io_gpio_out_2__prev = Core_datapath_csr__io_gpio_out_2;
  dat_dump<2>(f, Core_datapath__io_gpio_out_2, 0x2466);
  Core_datapath__io_gpio_out_2__prev = Core_datapath__io_gpio_out_2;
  dat_dump<2>(f, Core__io_gpio_out_2, 0x2467);
  Core__io_gpio_out_2__prev = Core__io_gpio_out_2;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_out_1, 0x2468);
  Core_datapath_csr__io_gpio_out_1__prev = Core_datapath_csr__io_gpio_out_1;
  dat_dump<2>(f, Core_datapath__io_gpio_out_1, 0x2469);
  Core_datapath__io_gpio_out_1__prev = Core_datapath__io_gpio_out_1;
  dat_dump<2>(f, Core__io_gpio_out_1, 0x246a);
  Core__io_gpio_out_1__prev = Core__io_gpio_out_1;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_out_0, 0x246b);
  Core_datapath_csr__io_gpio_out_0__prev = Core_datapath_csr__io_gpio_out_0;
  dat_dump<2>(f, Core_datapath__io_gpio_out_0, 0x246c);
  Core_datapath__io_gpio_out_0__prev = Core_datapath__io_gpio_out_0;
  dat_dump<2>(f, Core__io_gpio_out_0, 0x246d);
  Core__io_gpio_out_0__prev = Core__io_gpio_out_0;
  dat_dump<2>(f, Core_control__io_exe_br_type, 0x246e);
  Core_control__io_exe_br_type__prev = Core_control__io_exe_br_type;
  dat_dump<2>(f, Core_datapath__io_control_exe_br_type, 0x246f);
  Core_datapath__io_control_exe_br_type__prev = Core_datapath__io_control_exe_br_type;
  dat_dump<2>(f, Core_control__dec_imm_sel, 0x2470);
  Core_control__dec_imm_sel__prev = Core_control__dec_imm_sel;
  dat_dump<2>(f, Core_control__io_dec_imm_sel, 0x2471);
  Core_control__io_dec_imm_sel__prev = Core_control__io_dec_imm_sel;
  dat_dump<2>(f, Core_datapath__io_control_dec_imm_sel, 0x2472);
  Core_datapath__io_control_dec_imm_sel__prev = Core_datapath__io_control_dec_imm_sel;
  dat_dump<2>(f, Core_control__dec_br_type, 0x2473);
  Core_control__dec_br_type__prev = Core_control__dec_br_type;
  dat_dump<2>(f, Core_control__exe_reg_br_type, 0x2474);
  Core_control__exe_reg_br_type__prev = Core_control__exe_reg_br_type;
  dat_dump<2>(f, Core_control__dec_cause, 0x2475);
  Core_control__dec_cause__prev = Core_control__dec_cause;
  dat_dump<2>(f, Core_control__exe_reg_cause, 0x2476);
  Core_control__exe_reg_cause__prev = Core_control__exe_reg_cause;
  dat_dump<2>(f, Core_control__io_exe_alu_type, 0x2477);
  Core_control__io_exe_alu_type__prev = Core_control__io_exe_alu_type;
  dat_dump<2>(f, Core_datapath__io_control_exe_alu_type, 0x2478);
  Core_datapath__io_control_exe_alu_type__prev = Core_datapath__io_control_exe_alu_type;
  dat_dump<2>(f, Core_control__io_exe_mem_type, 0x2479);
  Core_control__io_exe_mem_type__prev = Core_control__io_exe_mem_type;
  dat_dump<2>(f, Core_datapath__io_control_exe_mem_type, 0x247a);
  Core_datapath__io_control_exe_mem_type__prev = Core_datapath__io_control_exe_mem_type;
  dat_dump<2>(f, Core_datapath_loadstore__io_mem_type, 0x247b);
  Core_datapath_loadstore__io_mem_type__prev = Core_datapath_loadstore__io_mem_type;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_0, 0x247c);
  Core_datapath_csr__io_imem_protection_0__prev = Core_datapath_csr__io_imem_protection_0;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_0, 0x247d);
  Core_datapath_loadstore__io_imem_protection_0__prev = Core_datapath_loadstore__io_imem_protection_0;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_1, 0x247e);
  Core_datapath_csr__io_imem_protection_1__prev = Core_datapath_csr__io_imem_protection_1;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_1, 0x2521);
  Core_datapath_loadstore__io_imem_protection_1__prev = Core_datapath_loadstore__io_imem_protection_1;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_2, 0x2522);
  Core_datapath_csr__io_imem_protection_2__prev = Core_datapath_csr__io_imem_protection_2;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_2, 0x2523);
  Core_datapath_loadstore__io_imem_protection_2__prev = Core_datapath_loadstore__io_imem_protection_2;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_3, 0x2524);
  Core_datapath_csr__io_imem_protection_3__prev = Core_datapath_csr__io_imem_protection_3;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_3, 0x2525);
  Core_datapath_loadstore__io_imem_protection_3__prev = Core_datapath_loadstore__io_imem_protection_3;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_4, 0x2526);
  Core_datapath_csr__io_imem_protection_4__prev = Core_datapath_csr__io_imem_protection_4;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_4, 0x2527);
  Core_datapath_loadstore__io_imem_protection_4__prev = Core_datapath_loadstore__io_imem_protection_4;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_5, 0x2528);
  Core_datapath_csr__io_imem_protection_5__prev = Core_datapath_csr__io_imem_protection_5;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_5, 0x2529);
  Core_datapath_loadstore__io_imem_protection_5__prev = Core_datapath_loadstore__io_imem_protection_5;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_6, 0x252a);
  Core_datapath_csr__io_imem_protection_6__prev = Core_datapath_csr__io_imem_protection_6;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_6, 0x252b);
  Core_datapath_loadstore__io_imem_protection_6__prev = Core_datapath_loadstore__io_imem_protection_6;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_7, 0x252c);
  Core_datapath_csr__io_imem_protection_7__prev = Core_datapath_csr__io_imem_protection_7;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_7, 0x252d);
  Core_datapath_loadstore__io_imem_protection_7__prev = Core_datapath_loadstore__io_imem_protection_7;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_0, 0x252e);
  Core_datapath_csr__io_dmem_protection_0__prev = Core_datapath_csr__io_dmem_protection_0;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_0, 0x252f);
  Core_datapath_loadstore__io_dmem_protection_0__prev = Core_datapath_loadstore__io_dmem_protection_0;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_1, 0x2530);
  Core_datapath_csr__io_dmem_protection_1__prev = Core_datapath_csr__io_dmem_protection_1;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_1, 0x2531);
  Core_datapath_loadstore__io_dmem_protection_1__prev = Core_datapath_loadstore__io_dmem_protection_1;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_2, 0x2532);
  Core_datapath_csr__io_dmem_protection_2__prev = Core_datapath_csr__io_dmem_protection_2;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_2, 0x2533);
  Core_datapath_loadstore__io_dmem_protection_2__prev = Core_datapath_loadstore__io_dmem_protection_2;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_3, 0x2534);
  Core_datapath_csr__io_dmem_protection_3__prev = Core_datapath_csr__io_dmem_protection_3;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_3, 0x2535);
  Core_datapath_loadstore__io_dmem_protection_3__prev = Core_datapath_loadstore__io_dmem_protection_3;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_4, 0x2536);
  Core_datapath_csr__io_dmem_protection_4__prev = Core_datapath_csr__io_dmem_protection_4;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_4, 0x2537);
  Core_datapath_loadstore__io_dmem_protection_4__prev = Core_datapath_loadstore__io_dmem_protection_4;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_5, 0x2538);
  Core_datapath_csr__io_dmem_protection_5__prev = Core_datapath_csr__io_dmem_protection_5;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_5, 0x2539);
  Core_datapath_loadstore__io_dmem_protection_5__prev = Core_datapath_loadstore__io_dmem_protection_5;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_6, 0x253a);
  Core_datapath_csr__io_dmem_protection_6__prev = Core_datapath_csr__io_dmem_protection_6;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_6, 0x253b);
  Core_datapath_loadstore__io_dmem_protection_6__prev = Core_datapath_loadstore__io_dmem_protection_6;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_7, 0x253c);
  Core_datapath_csr__io_dmem_protection_7__prev = Core_datapath_csr__io_dmem_protection_7;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_7, 0x253d);
  Core_datapath_loadstore__io_dmem_protection_7__prev = Core_datapath_loadstore__io_dmem_protection_7;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_7, 0x253e);
  Core_datapath_csr__reg_dmem_protection_7__prev = Core_datapath_csr__reg_dmem_protection_7;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_6, 0x253f);
  Core_datapath_csr__reg_dmem_protection_6__prev = Core_datapath_csr__reg_dmem_protection_6;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_5, 0x2540);
  Core_datapath_csr__reg_dmem_protection_5__prev = Core_datapath_csr__reg_dmem_protection_5;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_4, 0x2541);
  Core_datapath_csr__reg_dmem_protection_4__prev = Core_datapath_csr__reg_dmem_protection_4;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_3, 0x2542);
  Core_datapath_csr__reg_dmem_protection_3__prev = Core_datapath_csr__reg_dmem_protection_3;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_2, 0x2543);
  Core_datapath_csr__reg_dmem_protection_2__prev = Core_datapath_csr__reg_dmem_protection_2;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_1, 0x2544);
  Core_datapath_csr__reg_dmem_protection_1__prev = Core_datapath_csr__reg_dmem_protection_1;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_0, 0x2545);
  Core_datapath_csr__reg_dmem_protection_0__prev = Core_datapath_csr__reg_dmem_protection_0;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_7, 0x2546);
  Core_datapath_csr__reg_imem_protection_7__prev = Core_datapath_csr__reg_imem_protection_7;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_6, 0x2547);
  Core_datapath_csr__reg_imem_protection_6__prev = Core_datapath_csr__reg_imem_protection_6;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_5, 0x2548);
  Core_datapath_csr__reg_imem_protection_5__prev = Core_datapath_csr__reg_imem_protection_5;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_4, 0x2549);
  Core_datapath_csr__reg_imem_protection_4__prev = Core_datapath_csr__reg_imem_protection_4;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_3, 0x254a);
  Core_datapath_csr__reg_imem_protection_3__prev = Core_datapath_csr__reg_imem_protection_3;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_2, 0x254b);
  Core_datapath_csr__reg_imem_protection_2__prev = Core_datapath_csr__reg_imem_protection_2;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_1, 0x254c);
  Core_datapath_csr__reg_imem_protection_1__prev = Core_datapath_csr__reg_imem_protection_1;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_0, 0x254d);
  Core_datapath_csr__reg_imem_protection_0__prev = Core_datapath_csr__reg_imem_protection_0;
  dat_dump<2>(f, Core_datapath_csr__reg_gpo_protection_3, 0x254e);
  Core_datapath_csr__reg_gpo_protection_3__prev = Core_datapath_csr__reg_gpo_protection_3;
  dat_dump<2>(f, Core_datapath_csr__reg_gpo_protection_2, 0x254f);
  Core_datapath_csr__reg_gpo_protection_2__prev = Core_datapath_csr__reg_gpo_protection_2;
  dat_dump<2>(f, Core_datapath_csr__reg_gpo_protection_1, 0x2550);
  Core_datapath_csr__reg_gpo_protection_1__prev = Core_datapath_csr__reg_gpo_protection_1;
  dat_dump<2>(f, Core_datapath_csr__reg_gpo_protection_0, 0x2551);
  Core_datapath_csr__reg_gpo_protection_0__prev = Core_datapath_csr__reg_gpo_protection_0;
  dat_dump<2>(f, Core_control__exe_inst_cause, 0x2552);
  Core_control__exe_inst_cause__prev = Core_control__exe_inst_cause;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_7, 0x2553);
  Core_datapath_csr__reg_slots_7__prev = Core_datapath_csr__reg_slots_7;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_6, 0x2554);
  Core_datapath_csr__reg_slots_6__prev = Core_datapath_csr__reg_slots_6;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_5, 0x2555);
  Core_datapath_csr__reg_slots_5__prev = Core_datapath_csr__reg_slots_5;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_4, 0x2556);
  Core_datapath_csr__reg_slots_4__prev = Core_datapath_csr__reg_slots_4;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_3, 0x2557);
  Core_datapath_csr__reg_slots_3__prev = Core_datapath_csr__reg_slots_3;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_2, 0x2558);
  Core_datapath_csr__reg_slots_2__prev = Core_datapath_csr__reg_slots_2;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_1, 0x2559);
  Core_datapath_csr__reg_slots_1__prev = Core_datapath_csr__reg_slots_1;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_0, 0x255a);
  Core_datapath_csr__reg_slots_0__prev = Core_datapath_csr__reg_slots_0;
  dat_dump<2>(f, Core_datapath_loadstore__mem_type_reg, 0x255b);
  Core_datapath_loadstore__mem_type_reg__prev = Core_datapath_loadstore__mem_type_reg;
  dat_dump<2>(f, Core_datapath_csr__io_slots_7, 0x255c);
  Core_datapath_csr__io_slots_7__prev = Core_datapath_csr__io_slots_7;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_7, 0x255d);
  Core_datapath__io_control_csr_slots_7__prev = Core_datapath__io_control_csr_slots_7;
  dat_dump<2>(f, Core_control__io_csr_slots_7, 0x255e);
  Core_control__io_csr_slots_7__prev = Core_control__io_csr_slots_7;
  dat_dump<2>(f, Core_control_scheduler__io_slots_7, 0x255f);
  Core_control_scheduler__io_slots_7__prev = Core_control_scheduler__io_slots_7;
  dat_dump<2>(f, Core_datapath_csr__io_slots_6, 0x2560);
  Core_datapath_csr__io_slots_6__prev = Core_datapath_csr__io_slots_6;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_6, 0x2561);
  Core_datapath__io_control_csr_slots_6__prev = Core_datapath__io_control_csr_slots_6;
  dat_dump<2>(f, Core_control__io_csr_slots_6, 0x2562);
  Core_control__io_csr_slots_6__prev = Core_control__io_csr_slots_6;
  dat_dump<2>(f, Core_control_scheduler__io_slots_6, 0x2563);
  Core_control_scheduler__io_slots_6__prev = Core_control_scheduler__io_slots_6;
  dat_dump<2>(f, Core_datapath_csr__io_slots_5, 0x2564);
  Core_datapath_csr__io_slots_5__prev = Core_datapath_csr__io_slots_5;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_5, 0x2565);
  Core_datapath__io_control_csr_slots_5__prev = Core_datapath__io_control_csr_slots_5;
  dat_dump<2>(f, Core_control__io_csr_slots_5, 0x2566);
  Core_control__io_csr_slots_5__prev = Core_control__io_csr_slots_5;
  dat_dump<2>(f, Core_control_scheduler__io_slots_5, 0x2567);
  Core_control_scheduler__io_slots_5__prev = Core_control_scheduler__io_slots_5;
  dat_dump<2>(f, Core_datapath_csr__io_slots_4, 0x2568);
  Core_datapath_csr__io_slots_4__prev = Core_datapath_csr__io_slots_4;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_4, 0x2569);
  Core_datapath__io_control_csr_slots_4__prev = Core_datapath__io_control_csr_slots_4;
  dat_dump<2>(f, Core_control__io_csr_slots_4, 0x256a);
  Core_control__io_csr_slots_4__prev = Core_control__io_csr_slots_4;
  dat_dump<2>(f, Core_control_scheduler__io_slots_4, 0x256b);
  Core_control_scheduler__io_slots_4__prev = Core_control_scheduler__io_slots_4;
  dat_dump<2>(f, Core_datapath_csr__io_slots_3, 0x256c);
  Core_datapath_csr__io_slots_3__prev = Core_datapath_csr__io_slots_3;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_3, 0x256d);
  Core_datapath__io_control_csr_slots_3__prev = Core_datapath__io_control_csr_slots_3;
  dat_dump<2>(f, Core_control__io_csr_slots_3, 0x256e);
  Core_control__io_csr_slots_3__prev = Core_control__io_csr_slots_3;
  dat_dump<2>(f, Core_control_scheduler__io_slots_3, 0x256f);
  Core_control_scheduler__io_slots_3__prev = Core_control_scheduler__io_slots_3;
  dat_dump<2>(f, Core_datapath_csr__io_slots_2, 0x2570);
  Core_datapath_csr__io_slots_2__prev = Core_datapath_csr__io_slots_2;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_2, 0x2571);
  Core_datapath__io_control_csr_slots_2__prev = Core_datapath__io_control_csr_slots_2;
  dat_dump<2>(f, Core_control__io_csr_slots_2, 0x2572);
  Core_control__io_csr_slots_2__prev = Core_control__io_csr_slots_2;
  dat_dump<2>(f, Core_control_scheduler__io_slots_2, 0x2573);
  Core_control_scheduler__io_slots_2__prev = Core_control_scheduler__io_slots_2;
  dat_dump<2>(f, Core_datapath_csr__io_slots_1, 0x2574);
  Core_datapath_csr__io_slots_1__prev = Core_datapath_csr__io_slots_1;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_1, 0x2575);
  Core_datapath__io_control_csr_slots_1__prev = Core_datapath__io_control_csr_slots_1;
  dat_dump<2>(f, Core_control__io_csr_slots_1, 0x2576);
  Core_control__io_csr_slots_1__prev = Core_control__io_csr_slots_1;
  dat_dump<2>(f, Core_control_scheduler__io_slots_1, 0x2577);
  Core_control_scheduler__io_slots_1__prev = Core_control_scheduler__io_slots_1;
  dat_dump<2>(f, Core_datapath_csr__io_slots_0, 0x2578);
  Core_datapath_csr__io_slots_0__prev = Core_datapath_csr__io_slots_0;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_0, 0x2579);
  Core_datapath__io_control_csr_slots_0__prev = Core_datapath__io_control_csr_slots_0;
  dat_dump<2>(f, Core_control__io_csr_slots_0, 0x257a);
  Core_control__io_csr_slots_0__prev = Core_control__io_csr_slots_0;
  dat_dump<2>(f, Core_control_scheduler__io_slots_0, 0x257b);
  Core_control_scheduler__io_slots_0__prev = Core_control_scheduler__io_slots_0;
  dat_dump<2>(f, Core_control__dec_alu_type, 0x257c);
  Core_control__dec_alu_type__prev = Core_control__dec_alu_type;
  dat_dump<2>(f, Core_control__exe_reg_alu_type, 0x257d);
  Core_control__exe_reg_alu_type__prev = Core_control__exe_reg_alu_type;
  dat_dump<2>(f, Core_control__dec_mem_type, 0x257e);
  Core_control__dec_mem_type__prev = Core_control__dec_mem_type;
  dat_dump<2>(f, Core_control__exe_reg_mem_type, 0x2621);
  Core_control__exe_reg_mem_type__prev = Core_control__exe_reg_mem_type;
  dat_dump<2>(f, Core_datapath__exe_alu_shift, 0x2622);
  Core_datapath__exe_alu_shift__prev = Core_datapath__exe_alu_shift;
  dat_dump<2>(f, Core_control__exe_any_cause, 0x2623);
  Core_control__exe_any_cause__prev = Core_control__exe_any_cause;
  dat_dump<2>(f, Core_control__exe_exception_cause, 0x2624);
  Core_control__exe_exception_cause__prev = Core_control__exe_exception_cause;
  dat_dump<2>(f, Core_control__io_exe_cause, 0x2625);
  Core_control__io_exe_cause__prev = Core_control__io_exe_cause;
  dat_dump<2>(f, Core_datapath__io_control_exe_cause, 0x2626);
  Core_datapath__io_control_exe_cause__prev = Core_datapath__io_control_exe_cause;
  dat_dump<2>(f, Core_datapath_csr__io_cause, 0x2627);
  Core_datapath_csr__io_cause__prev = Core_datapath_csr__io_cause;
  dat_dump<2>(f, Core_datapath_csr__reg_causes_3, 0x2628);
  Core_datapath_csr__reg_causes_3__prev = Core_datapath_csr__reg_causes_3;
  dat_dump<2>(f, Core_datapath_csr__reg_causes_2, 0x2629);
  Core_datapath_csr__reg_causes_2__prev = Core_datapath_csr__reg_causes_2;
  dat_dump<2>(f, Core_datapath_csr__reg_causes_1, 0x262a);
  Core_datapath_csr__reg_causes_1__prev = Core_datapath_csr__reg_causes_1;
  dat_dump<2>(f, Core_datapath_csr__reg_causes_0, 0x262b);
  Core_datapath_csr__reg_causes_0__prev = Core_datapath_csr__reg_causes_0;
  dat_dump<2>(f, Core_datapath_regfile__io_rs1_addr, 0x262c);
  Core_datapath_regfile__io_rs1_addr__prev = Core_datapath_regfile__io_rs1_addr;
  dat_dump<2>(f, Core_datapath_regfile__io_rd_addr, 0x262d);
  Core_datapath_regfile__io_rd_addr__prev = Core_datapath_regfile__io_rd_addr;
  dat_dump<2>(f, Core_datapath_regfile__io_rs2_addr, 0x262e);
  Core_datapath_regfile__io_rs2_addr__prev = Core_datapath_regfile__io_rs2_addr;
  dat_dump<2>(f, Core_datapath__io_control_wb_rd_addr, 0x262f);
  Core_datapath__io_control_wb_rd_addr__prev = Core_datapath__io_control_wb_rd_addr;
  dat_dump<2>(f, Core_control__io_wb_rd_addr, 0x2630);
  Core_control__io_wb_rd_addr__prev = Core_control__io_wb_rd_addr;
  dat_dump<2>(f, Core_datapath__io_control_mem_rd_addr, 0x2631);
  Core_datapath__io_control_mem_rd_addr__prev = Core_datapath__io_control_mem_rd_addr;
  dat_dump<2>(f, Core_control__io_mem_rd_addr, 0x2632);
  Core_control__io_mem_rd_addr__prev = Core_control__io_mem_rd_addr;
  dat_dump<2>(f, Core_datapath__io_control_exe_rd_addr, 0x2633);
  Core_datapath__io_control_exe_rd_addr__prev = Core_datapath__io_control_exe_rd_addr;
  dat_dump<2>(f, Core_control__io_exe_rd_addr, 0x2634);
  Core_control__io_exe_rd_addr__prev = Core_control__io_exe_rd_addr;
  dat_dump<2>(f, Core_datapath__wb_reg_rd_addr, 0x2635);
  Core_datapath__wb_reg_rd_addr__prev = Core_datapath__wb_reg_rd_addr;
  dat_dump<2>(f, Core_datapath__exe_reg_rd_addr, 0x2636);
  Core_datapath__exe_reg_rd_addr__prev = Core_datapath__exe_reg_rd_addr;
  dat_dump<2>(f, Core_datapath__mem_reg_rd_addr, 0x2637);
  Core_datapath__mem_reg_rd_addr__prev = Core_datapath__mem_reg_rd_addr;
  dat_dump<2>(f, Core_datapath_loadstore__io_bus_addr, 0x2638);
  Core_datapath_loadstore__io_bus_addr__prev = Core_datapath_loadstore__io_bus_addr;
  dat_dump<2>(f, Core_datapath__io_bus_addr, 0x2639);
  Core_datapath__io_bus_addr__prev = Core_datapath__io_bus_addr;
  dat_dump<2>(f, Core__io_bus_addr, 0x263a);
  Core__io_bus_addr__prev = Core__io_bus_addr;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_addr, 0x263b);
  Core_datapath_loadstore__io_dmem_addr__prev = Core_datapath_loadstore__io_dmem_addr;
  dat_dump<2>(f, Core_datapath__io_dmem_addr, 0x263c);
  Core_datapath__io_dmem_addr__prev = Core_datapath__io_dmem_addr;
  dat_dump<2>(f, Core_dmem__io_core_addr, 0x263d);
  Core_dmem__io_core_addr__prev = Core_dmem__io_core_addr;
  dat_dump<2>(f, Core_datapath__io_imem_r_addr, 0x263e);
  Core_datapath__io_imem_r_addr__prev = Core_datapath__io_imem_r_addr;
  dat_dump<2>(f, Core_imem__io_core_r_addr, 0x263f);
  Core_imem__io_core_r_addr__prev = Core_imem__io_core_r_addr;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_rw_addr, 0x2640);
  Core_datapath_loadstore__io_imem_rw_addr__prev = Core_datapath_loadstore__io_imem_rw_addr;
  dat_dump<2>(f, Core_datapath__io_imem_rw_addr, 0x2641);
  Core_datapath__io_imem_rw_addr__prev = Core_datapath__io_imem_rw_addr;
  dat_dump<2>(f, Core_imem__io_core_rw_addr, 0x2642);
  Core_imem__io_core_rw_addr__prev = Core_imem__io_core_rw_addr;
  dat_dump<2>(f, Core_datapath_csr__io_rw_addr, 0x2643);
  Core_datapath_csr__io_rw_addr__prev = Core_datapath_csr__io_rw_addr;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_r_addr, 0x2644);
  Core_datapath_loadstore__io_imem_r_addr__prev = Core_datapath_loadstore__io_imem_r_addr;
  dat_dump<2>(f, Core_datapath__exe_reg_csr_addr, 0x2645);
  Core_datapath__exe_reg_csr_addr__prev = Core_datapath__exe_reg_csr_addr;
  dat_dump<2>(f, Core__io_dmem_addr, 0x2646);
  Core__io_dmem_addr__prev = Core__io_dmem_addr;
  dat_dump<2>(f, Core__io_imem_addr, 0x2647);
  Core__io_imem_addr__prev = Core__io_imem_addr;
  dat_dump<2>(f, Core_datapath__def_exe_alu_result, 0x2648);
  Core_datapath__def_exe_alu_result__prev = Core_datapath__def_exe_alu_result;
  dat_dump<2>(f, Core_datapath__exe_alu_result, 0x2649);
  Core_datapath__exe_alu_result__prev = Core_datapath__exe_alu_result;
  dat_dump<2>(f, Core_datapath__exe_address, 0x264a);
  Core_datapath__exe_address__prev = Core_datapath__exe_address;
  dat_dump<2>(f, Core_datapath_loadstore__io_addr, 0x264b);
  Core_datapath_loadstore__io_addr__prev = Core_datapath_loadstore__io_addr;
  dat_dump<2>(f, Core_datapath_loadstore__io_data_in, 0x264c);
  Core_datapath_loadstore__io_data_in__prev = Core_datapath_loadstore__io_data_in;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_data_in, 0x264d);
  Core_datapath_loadstore__io_dmem_data_in__prev = Core_datapath_loadstore__io_dmem_data_in;
  dat_dump<2>(f, Core_datapath__io_dmem_data_in, 0x264e);
  Core_datapath__io_dmem_data_in__prev = Core_datapath__io_dmem_data_in;
  dat_dump<2>(f, Core_dmem__io_core_data_in, 0x264f);
  Core_dmem__io_core_data_in__prev = Core_dmem__io_core_data_in;
  dat_dump<2>(f, Core_dmem__dout, 0x2650);
  Core_dmem__dout__prev = Core_dmem__dout;
  dat_dump<2>(f, Core_datapath__if_pc_plus4, 0x2651);
  Core_datapath__if_pc_plus4__prev = Core_datapath__if_pc_plus4;
  dat_dump<2>(f, Core_datapath__io_control_dec_inst, 0x2652);
  Core_datapath__io_control_dec_inst__prev = Core_datapath__io_control_dec_inst;
  dat_dump<2>(f, Core_control__io_dec_inst, 0x2653);
  Core_control__io_dec_inst__prev = Core_control__io_dec_inst;
  dat_dump<2>(f, Core_datapath_csr__io_evecs_0, 0x2654);
  Core_datapath_csr__io_evecs_0__prev = Core_datapath_csr__io_evecs_0;
  dat_dump<2>(f, Core_datapath_csr__io_evecs_1, 0x2655);
  Core_datapath_csr__io_evecs_1__prev = Core_datapath_csr__io_evecs_1;
  dat_dump<2>(f, Core_datapath_csr__io_evecs_2, 0x2656);
  Core_datapath_csr__io_evecs_2__prev = Core_datapath_csr__io_evecs_2;
  dat_dump<2>(f, Core_datapath_csr__io_evecs_3, 0x2657);
  Core_datapath_csr__io_evecs_3__prev = Core_datapath_csr__io_evecs_3;
  dat_dump<2>(f, Core_datapath__mem_evec, 0x2658);
  Core_datapath__mem_evec__prev = Core_datapath__mem_evec;
  dat_dump<2>(f, Core_datapath__next_pcs_0, 0x2659);
  Core_datapath__next_pcs_0__prev = Core_datapath__next_pcs_0;
  dat_dump<2>(f, Core_datapath__next_pcs_1, 0x265a);
  Core_datapath__next_pcs_1__prev = Core_datapath__next_pcs_1;
  dat_dump<2>(f, Core_datapath__next_pcs_2, 0x265b);
  Core_datapath__next_pcs_2__prev = Core_datapath__next_pcs_2;
  dat_dump<2>(f, Core_datapath__next_pcs_3, 0x265c);
  Core_datapath__next_pcs_3__prev = Core_datapath__next_pcs_3;
  dat_dump<2>(f, Core_datapath__next_pc, 0x265d);
  Core_datapath__next_pc__prev = Core_datapath__next_pc;
  dat_dump<2>(f, Core_imem__dout_r, 0x265e);
  Core_imem__dout_r__prev = Core_imem__dout_r;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_rw_data_in, 0x265f);
  Core_datapath_loadstore__io_imem_rw_data_in__prev = Core_datapath_loadstore__io_imem_rw_data_in;
  dat_dump<2>(f, Core_datapath__io_imem_rw_data_in, 0x2660);
  Core_datapath__io_imem_rw_data_in__prev = Core_datapath__io_imem_rw_data_in;
  dat_dump<2>(f, Core_imem__io_core_rw_data_in, 0x2661);
  Core_imem__io_core_rw_data_in__prev = Core_imem__io_core_rw_data_in;
  dat_dump<2>(f, Core_imem__R0, 0x2662);
  Core_imem__R0__prev = Core_imem__R0;
  dat_dump<2>(f, Core_datapath_csr__io_rw_data_in, 0x2663);
  Core_datapath_csr__io_rw_data_in__prev = Core_datapath_csr__io_rw_data_in;
  dat_dump<2>(f, Core_datapath_csr__reg_to_host, 0x2664);
  Core_datapath_csr__reg_to_host__prev = Core_datapath_csr__reg_to_host;
  dat_dump<2>(f, Core_datapath_csr__io_epc, 0x2665);
  Core_datapath_csr__io_epc__prev = Core_datapath_csr__io_epc;
  dat_dump<2>(f, Core_datapath_csr__reg_epcs_3, 0x2666);
  Core_datapath_csr__reg_epcs_3__prev = Core_datapath_csr__reg_epcs_3;
  dat_dump<2>(f, Core_datapath_csr__reg_epcs_2, 0x2667);
  Core_datapath_csr__reg_epcs_2__prev = Core_datapath_csr__reg_epcs_2;
  dat_dump<2>(f, Core_datapath_csr__reg_epcs_1, 0x2668);
  Core_datapath_csr__reg_epcs_1__prev = Core_datapath_csr__reg_epcs_1;
  dat_dump<2>(f, Core_datapath_csr__reg_epcs_0, 0x2669);
  Core_datapath_csr__reg_epcs_0__prev = Core_datapath_csr__reg_epcs_0;
  dat_dump<2>(f, Core_datapath_csr__reg_compare_3, 0x266a);
  Core_datapath_csr__reg_compare_3__prev = Core_datapath_csr__reg_compare_3;
  dat_dump<2>(f, Core_datapath_csr__reg_compare_1, 0x266b);
  Core_datapath_csr__reg_compare_1__prev = Core_datapath_csr__reg_compare_1;
  dat_dump<2>(f, Core_datapath_csr__reg_compare_0, 0x266c);
  Core_datapath_csr__reg_compare_0__prev = Core_datapath_csr__reg_compare_0;
  dat_dump<2>(f, Core_datapath_csr__reg_compare_2, 0x266d);
  Core_datapath_csr__reg_compare_2__prev = Core_datapath_csr__reg_compare_2;
  dat_dump<2>(f, Core_imem__io_core_r_data_out, 0x266e);
  Core_imem__io_core_r_data_out__prev = Core_imem__io_core_r_data_out;
  dat_dump<2>(f, Core_datapath__io_imem_r_data_out, 0x266f);
  Core_datapath__io_imem_r_data_out__prev = Core_datapath__io_imem_r_data_out;
  dat_dump<2>(f, Core_datapath_regfile__dout1, 0x2670);
  Core_datapath_regfile__dout1__prev = Core_datapath_regfile__dout1;
  dat_dump<2>(f, Core_datapath__mem_mul_result, 0x2671);
  Core_datapath__mem_mul_result__prev = Core_datapath__mem_mul_result;
  dat_dump<2>(f, Core__io_bus_data_out, 0x2672);
  Core__io_bus_data_out__prev = Core__io_bus_data_out;
  dat_dump<2>(f, Core_datapath__io_bus_data_out, 0x2673);
  Core_datapath__io_bus_data_out__prev = Core_datapath__io_bus_data_out;
  dat_dump<2>(f, Core_datapath_loadstore__io_bus_data_out, 0x2674);
  Core_datapath_loadstore__io_bus_data_out__prev = Core_datapath_loadstore__io_bus_data_out;
  dat_dump<2>(f, Core_imem__io_core_rw_data_out, 0x2675);
  Core_imem__io_core_rw_data_out__prev = Core_imem__io_core_rw_data_out;
  dat_dump<2>(f, Core_datapath__io_imem_rw_data_out, 0x2676);
  Core_datapath__io_imem_rw_data_out__prev = Core_datapath__io_imem_rw_data_out;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_rw_data_out, 0x2677);
  Core_datapath_loadstore__io_imem_rw_data_out__prev = Core_datapath_loadstore__io_imem_rw_data_out;
  dat_dump<2>(f, Core_dmem__io_core_data_out, 0x2678);
  Core_dmem__io_core_data_out__prev = Core_dmem__io_core_data_out;
  dat_dump<2>(f, Core_datapath__io_dmem_data_out, 0x2679);
  Core_datapath__io_dmem_data_out__prev = Core_datapath__io_dmem_data_out;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_data_out, 0x267a);
  Core_datapath_loadstore__io_dmem_data_out__prev = Core_datapath_loadstore__io_dmem_data_out;
  dat_dump<2>(f, Core_datapath_loadstore__io_data_out, 0x267b);
  Core_datapath_loadstore__io_data_out__prev = Core_datapath_loadstore__io_data_out;
  dat_dump<2>(f, Core_datapath__mem_rd_data, 0x267c);
  Core_datapath__mem_rd_data__prev = Core_datapath__mem_rd_data;
  dat_dump<2>(f, Core_datapath_regfile__io_rd_data, 0x267d);
  Core_datapath_regfile__io_rd_data__prev = Core_datapath_regfile__io_rd_data;
  dat_dump<2>(f, Core_datapath_regfile__dout2, 0x267e);
  Core_datapath_regfile__dout2__prev = Core_datapath_regfile__dout2;
  dat_dump<2>(f, Core_datapath_regfile__io_rs1_data, 0x2721);
  Core_datapath_regfile__io_rs1_data__prev = Core_datapath_regfile__io_rs1_data;
  dat_dump<2>(f, Core_datapath__wb_rd_data, 0x2722);
  Core_datapath__wb_rd_data__prev = Core_datapath__wb_rd_data;
  dat_dump<2>(f, Core_datapath_csr__io_rw_data_out, 0x2723);
  Core_datapath_csr__io_rw_data_out__prev = Core_datapath_csr__io_rw_data_out;
  dat_dump<2>(f, Core_datapath__exe_rd_data, 0x2724);
  Core_datapath__exe_rd_data__prev = Core_datapath__exe_rd_data;
  dat_dump<2>(f, Core_datapath__dec_rs1_data, 0x2725);
  Core_datapath__dec_rs1_data__prev = Core_datapath__dec_rs1_data;
  dat_dump<2>(f, Core_datapath__exe_reg_rs1_data, 0x2726);
  Core_datapath__exe_reg_rs1_data__prev = Core_datapath__exe_reg_rs1_data;
  dat_dump<2>(f, Core_datapath_regfile__io_rs2_data, 0x2727);
  Core_datapath_regfile__io_rs2_data__prev = Core_datapath_regfile__io_rs2_data;
  dat_dump<2>(f, Core_datapath__dec_rs2_data, 0x2728);
  Core_datapath__dec_rs2_data__prev = Core_datapath__dec_rs2_data;
  dat_dump<2>(f, Core_datapath__exe_reg_rs2_data, 0x2729);
  Core_datapath__exe_reg_rs2_data__prev = Core_datapath__exe_reg_rs2_data;
  dat_dump<2>(f, Core_datapath__dec_imm_i, 0x272a);
  Core_datapath__dec_imm_i__prev = Core_datapath__dec_imm_i;
  dat_dump<2>(f, Core_datapath__dec_imm_z, 0x272b);
  Core_datapath__dec_imm_z__prev = Core_datapath__dec_imm_z;
  dat_dump<2>(f, Core_datapath__dec_imm_j, 0x272c);
  Core_datapath__dec_imm_j__prev = Core_datapath__dec_imm_j;
  dat_dump<2>(f, Core_datapath__dec_imm_u, 0x272d);
  Core_datapath__dec_imm_u__prev = Core_datapath__dec_imm_u;
  dat_dump<2>(f, Core_datapath__dec_imm_b, 0x272e);
  Core_datapath__dec_imm_b__prev = Core_datapath__dec_imm_b;
  dat_dump<2>(f, Core_datapath__dec_imm_s, 0x272f);
  Core_datapath__dec_imm_s__prev = Core_datapath__dec_imm_s;
  dat_dump<2>(f, Core_datapath__dec_imm, 0x2730);
  Core_datapath__dec_imm__prev = Core_datapath__dec_imm;
  dat_dump<2>(f, Core_datapath__dec_csr_data, 0x2731);
  Core_datapath__dec_csr_data__prev = Core_datapath__dec_csr_data;
  dat_dump<2>(f, Core_datapath__exe_csr_data, 0x2732);
  Core_datapath__exe_csr_data__prev = Core_datapath__exe_csr_data;
  dat_dump<2>(f, Core_datapath__if_reg_pcs_3, 0x2733);
  Core_datapath__if_reg_pcs_3__prev = Core_datapath__if_reg_pcs_3;
  dat_dump<2>(f, Core_datapath__if_reg_pcs_2, 0x2734);
  Core_datapath__if_reg_pcs_2__prev = Core_datapath__if_reg_pcs_2;
  dat_dump<2>(f, Core_datapath__if_reg_pcs_1, 0x2735);
  Core_datapath__if_reg_pcs_1__prev = Core_datapath__if_reg_pcs_1;
  dat_dump<2>(f, Core_datapath__dec_op1, 0x2736);
  Core_datapath__dec_op1__prev = Core_datapath__dec_op1;
  dat_dump<2>(f, Core_datapath__exe_reg_op1, 0x2737);
  Core_datapath__exe_reg_op1__prev = Core_datapath__exe_reg_op1;
  dat_dump<2>(f, Core_datapath__dec_reg_pc4, 0x2738);
  Core_datapath__dec_reg_pc4__prev = Core_datapath__dec_reg_pc4;
  dat_dump<2>(f, Core_datapath__exe_reg_pc4, 0x2739);
  Core_datapath__exe_reg_pc4__prev = Core_datapath__exe_reg_pc4;
  dat_dump<2>(f, Core_datapath__mem_reg_rd_data, 0x273a);
  Core_datapath__mem_reg_rd_data__prev = Core_datapath__mem_reg_rd_data;
  dat_dump<2>(f, Core_datapath__wb_reg_rd_data, 0x273b);
  Core_datapath__wb_reg_rd_data__prev = Core_datapath__wb_reg_rd_data;
  dat_dump<2>(f, Core_datapath__dec_reg_inst, 0x273c);
  Core_datapath__dec_reg_inst__prev = Core_datapath__dec_reg_inst;
  dat_dump<2>(f, Core_datapath__dec_op2, 0x273d);
  Core_datapath__dec_op2__prev = Core_datapath__dec_op2;
  dat_dump<2>(f, Core_datapath__exe_reg_op2, 0x273e);
  Core_datapath__exe_reg_op2__prev = Core_datapath__exe_reg_op2;
  dat_dump<2>(f, Core_datapath__if_reg_pcs_0, 0x273f);
  Core_datapath__if_reg_pcs_0__prev = Core_datapath__if_reg_pcs_0;
  dat_dump<2>(f, Core_datapath__if_reg_pc, 0x2740);
  Core_datapath__if_reg_pc__prev = Core_datapath__if_reg_pc;
  dat_dump<2>(f, Core_datapath__dec_reg_pc, 0x2741);
  Core_datapath__dec_reg_pc__prev = Core_datapath__dec_reg_pc;
  dat_dump<2>(f, Core_datapath__exe_reg_pc, 0x2742);
  Core_datapath__exe_reg_pc__prev = Core_datapath__exe_reg_pc;
  dat_dump<2>(f, Core_imem__io_bus_data_out, 0x2743);
  Core_imem__io_bus_data_out__prev = Core_imem__io_bus_data_out;
  dat_dump<2>(f, Core__io_imem_data_out, 0x2744);
  Core__io_imem_data_out__prev = Core__io_imem_data_out;
  dat_dump<2>(f, Core_dmem__io_bus_data_out, 0x2745);
  Core_dmem__io_bus_data_out__prev = Core_dmem__io_bus_data_out;
  dat_dump<2>(f, Core__io_dmem_data_out, 0x2746);
  Core__io_dmem_data_out__prev = Core__io_dmem_data_out;
  dat_dump<2>(f, Core_datapath_loadstore__io_bus_data_in, 0x2747);
  Core_datapath_loadstore__io_bus_data_in__prev = Core_datapath_loadstore__io_bus_data_in;
  dat_dump<2>(f, Core_datapath__io_bus_data_in, 0x2748);
  Core_datapath__io_bus_data_in__prev = Core_datapath__io_bus_data_in;
  dat_dump<2>(f, Core__io_bus_data_in, 0x2749);
  Core__io_bus_data_in__prev = Core__io_bus_data_in;
  dat_dump<2>(f, Core_datapath_csr__io_host_to_host, 0x274a);
  Core_datapath_csr__io_host_to_host__prev = Core_datapath_csr__io_host_to_host;
  dat_dump<2>(f, Core_datapath__io_host_to_host, 0x274b);
  Core_datapath__io_host_to_host__prev = Core_datapath__io_host_to_host;
  dat_dump<2>(f, Core__io_host_to_host, 0x274c);
  Core__io_host_to_host__prev = Core__io_host_to_host;
  dat_dump<2>(f, Core__io_dmem_data_in, 0x274d);
  Core__io_dmem_data_in__prev = Core__io_dmem_data_in;
  dat_dump<2>(f, Core__io_imem_data_in, 0x274e);
  Core__io_imem_data_in__prev = Core__io_imem_data_in;
  dat_dump<2>(f, Core_datapath_csr__status_0, 0x274f);
  Core_datapath_csr__status_0__prev = Core_datapath_csr__status_0;
  dat_dump<2>(f, Core_datapath_csr__status_1, 0x2750);
  Core_datapath_csr__status_1__prev = Core_datapath_csr__status_1;
  dat_dump<2>(f, Core_datapath_csr__status_2, 0x2751);
  Core_datapath_csr__status_2__prev = Core_datapath_csr__status_2;
  dat_dump<2>(f, Core_datapath_csr__status_3, 0x2752);
  Core_datapath_csr__status_3__prev = Core_datapath_csr__status_3;
  dat_dump<2>(f, Core_datapath_csr__data_out, 0x2753);
  Core_datapath_csr__data_out__prev = Core_datapath_csr__data_out;
  dat_dump<2>(f, Core_datapath_csr__data_in, 0x2754);
  Core_datapath_csr__data_in__prev = Core_datapath_csr__data_in;
  dat_dump<2>(f, Core_datapath_csr__reg_sup0_3, 0x2755);
  Core_datapath_csr__reg_sup0_3__prev = Core_datapath_csr__reg_sup0_3;
  dat_dump<2>(f, Core_datapath_csr__reg_sup0_2, 0x2756);
  Core_datapath_csr__reg_sup0_2__prev = Core_datapath_csr__reg_sup0_2;
  dat_dump<2>(f, Core_datapath_csr__reg_sup0_1, 0x2757);
  Core_datapath_csr__reg_sup0_1__prev = Core_datapath_csr__reg_sup0_1;
  dat_dump<2>(f, Core_datapath_csr__reg_sup0_0, 0x2758);
  Core_datapath_csr__reg_sup0_0__prev = Core_datapath_csr__reg_sup0_0;
  dat_dump<2>(f, Core_datapath_csr__reg_evecs_3, 0x2759);
  Core_datapath_csr__reg_evecs_3__prev = Core_datapath_csr__reg_evecs_3;
  dat_dump<2>(f, Core_datapath_csr__reg_evecs_2, 0x275a);
  Core_datapath_csr__reg_evecs_2__prev = Core_datapath_csr__reg_evecs_2;
  dat_dump<2>(f, Core_datapath_csr__reg_evecs_1, 0x275b);
  Core_datapath_csr__reg_evecs_1__prev = Core_datapath_csr__reg_evecs_1;
  dat_dump<2>(f, Core_datapath_csr__reg_evecs_0, 0x275c);
  Core_datapath_csr__reg_evecs_0__prev = Core_datapath_csr__reg_evecs_0;
  dat_dump<2>(f, Core_datapath_csr__reg_time, 0x275d);
  Core_datapath_csr__reg_time__prev = Core_datapath_csr__reg_time;
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
  if (Core_control__io_exe_valid != Core_control__io_exe_valid__prev)
    goto L8;
K8:
  if (Core_datapath__io_control_exe_valid != Core_datapath__io_control_exe_valid__prev)
    goto L9;
K9:
  if (Core_datapath_csr__io_rw_valid != Core_datapath_csr__io_rw_valid__prev)
    goto L10;
K10:
  if (Core_datapath_csr__int_expire != Core_datapath_csr__int_expire__prev)
    goto L11;
K11:
  if (Core_datapath_csr__io_int_expire != Core_datapath_csr__io_int_expire__prev)
    goto L12;
K12:
  if (Core_datapath__io_control_exe_int_expire != Core_datapath__io_control_exe_int_expire__prev)
    goto L13;
K13:
  if (Core_control__io_exe_int_expire != Core_control__io_exe_int_expire__prev)
    goto L14;
K14:
  if (Core_datapath_csr__exc_expire != Core_datapath_csr__exc_expire__prev)
    goto L15;
K15:
  if (Core_datapath_csr__io_exc_expire != Core_datapath_csr__io_exc_expire__prev)
    goto L16;
K16:
  if (Core_datapath__io_control_exe_exc_expire != Core_datapath__io_control_exe_exc_expire__prev)
    goto L17;
K17:
  if (Core_control__io_exe_exc_expire != Core_control__io_exe_exc_expire__prev)
    goto L18;
K18:
  if (Core_control__exe_any_exc != Core_control__exe_any_exc__prev)
    goto L19;
K19:
  if (Core_control__exe_kill != Core_control__exe_kill__prev)
    goto L20;
K20:
  if (Core_control__io_exe_kill != Core_control__io_exe_kill__prev)
    goto L21;
K21:
  if (Core_datapath__io_control_exe_kill != Core_datapath__io_control_exe_kill__prev)
    goto L22;
K22:
  if (Core_datapath_loadstore__io_kill != Core_datapath_loadstore__io_kill__prev)
    goto L23;
K23:
  if (Core_datapath_loadstore__store_fault != Core_datapath_loadstore__store_fault__prev)
    goto L24;
K24:
  if (Core_control__exe_store != Core_control__exe_store__prev)
    goto L25;
K25:
  if (Core_control__io_exe_store != Core_control__io_exe_store__prev)
    goto L26;
K26:
  if (Core_datapath__io_control_exe_store != Core_datapath__io_control_exe_store__prev)
    goto L27;
K27:
  if (Core_datapath_loadstore__io_store != Core_datapath_loadstore__io_store__prev)
    goto L28;
K28:
  if (Core_datapath_loadstore__store_misaligned != Core_datapath_loadstore__store_misaligned__prev)
    goto L29;
K29:
  if (Core_datapath_loadstore__bus_op != Core_datapath_loadstore__bus_op__prev)
    goto L30;
K30:
  if (Core_datapath_loadstore__imem_op != Core_datapath_loadstore__imem_op__prev)
    goto L31;
K31:
  if (Core_datapath_loadstore__dmem_op != Core_datapath_loadstore__dmem_op__prev)
    goto L32;
K32:
  if (Core_datapath_loadstore__permission != Core_datapath_loadstore__permission__prev)
    goto L33;
K33:
  if (Core_datapath_loadstore__write != Core_datapath_loadstore__write__prev)
    goto L34;
K34:
  if (Core_datapath_loadstore__io_dmem_byte_write_0 != Core_datapath_loadstore__io_dmem_byte_write_0__prev)
    goto L35;
K35:
  if (Core_datapath__io_dmem_byte_write_0 != Core_datapath__io_dmem_byte_write_0__prev)
    goto L36;
K36:
  if (Core_dmem__io_core_byte_write_0 != Core_dmem__io_core_byte_write_0__prev)
    goto L37;
K37:
  if (Core_datapath_loadstore__io_dmem_byte_write_1 != Core_datapath_loadstore__io_dmem_byte_write_1__prev)
    goto L38;
K38:
  if (Core_datapath__io_dmem_byte_write_1 != Core_datapath__io_dmem_byte_write_1__prev)
    goto L39;
K39:
  if (Core_dmem__io_core_byte_write_1 != Core_dmem__io_core_byte_write_1__prev)
    goto L40;
K40:
  if (Core_datapath_loadstore__io_dmem_byte_write_2 != Core_datapath_loadstore__io_dmem_byte_write_2__prev)
    goto L41;
K41:
  if (Core_datapath__io_dmem_byte_write_2 != Core_datapath__io_dmem_byte_write_2__prev)
    goto L42;
K42:
  if (Core_dmem__io_core_byte_write_2 != Core_dmem__io_core_byte_write_2__prev)
    goto L43;
K43:
  if (Core_datapath_loadstore__io_dmem_byte_write_3 != Core_datapath_loadstore__io_dmem_byte_write_3__prev)
    goto L44;
K44:
  if (Core_datapath__io_dmem_byte_write_3 != Core_datapath__io_dmem_byte_write_3__prev)
    goto L45;
K45:
  if (Core_dmem__io_core_byte_write_3 != Core_dmem__io_core_byte_write_3__prev)
    goto L46;
K46:
  if (Core_control__exe_load != Core_control__exe_load__prev)
    goto L47;
K47:
  if (Core_control__io_exe_load != Core_control__io_exe_load__prev)
    goto L48;
K48:
  if (Core_datapath__io_control_exe_load != Core_datapath__io_control_exe_load__prev)
    goto L49;
K49:
  if (Core_datapath_loadstore__io_load != Core_datapath_loadstore__io_load__prev)
    goto L50;
K50:
  if (Core_datapath_loadstore__io_dmem_enable != Core_datapath_loadstore__io_dmem_enable__prev)
    goto L51;
K51:
  if (Core_datapath__io_dmem_enable != Core_datapath__io_dmem_enable__prev)
    goto L52;
K52:
  if (Core_dmem__io_core_enable != Core_dmem__io_core_enable__prev)
    goto L53;
K53:
  if (Core_control__dec_load != Core_control__dec_load__prev)
    goto L54;
K54:
  if (Core_control__dec_fence_i != Core_control__dec_fence_i__prev)
    goto L55;
K55:
  if (Core_control__dec_stall != Core_control__dec_stall__prev)
    goto L56;
K56:
  if (Core_control__if_pre_valid != Core_control__if_pre_valid__prev)
    goto L57;
K57:
  if (Core_datapath_csr__io_expire != Core_datapath_csr__io_expire__prev)
    goto L58;
K58:
  if (Core_datapath__io_control_exe_expire != Core_datapath__io_control_exe_expire__prev)
    goto L59;
K59:
  if (Core_control__io_exe_expire != Core_control__io_exe_expire__prev)
    goto L60;
K60:
  if (Core_control__exe_du != Core_control__exe_du__prev)
    goto L61;
K61:
  if (Core_datapath__exe_ltu != Core_datapath__exe_ltu__prev)
    goto L62;
K62:
  if (Core_datapath__exe_lt != Core_datapath__exe_lt__prev)
    goto L63;
K63:
  if (Core_datapath__exe_eq != Core_datapath__exe_eq__prev)
    goto L64;
K64:
  if (Core_datapath__exe_br_cond != Core_datapath__exe_br_cond__prev)
    goto L65;
K65:
  if (Core_datapath__io_control_exe_br_cond != Core_datapath__io_control_exe_br_cond__prev)
    goto L66;
K66:
  if (Core_control__io_exe_br_cond != Core_control__io_exe_br_cond__prev)
    goto L67;
K67:
  if (Core_control__exe_brjmp != Core_control__exe_brjmp__prev)
    goto L68;
K68:
  if (Core_control__next_valid != Core_control__next_valid__prev)
    goto L69;
K69:
  if (Core_control__io_next_valid != Core_control__io_next_valid__prev)
    goto L70;
K70:
  if (Core_datapath__io_control_next_valid != Core_datapath__io_control_next_valid__prev)
    goto L71;
K71:
  if (Core_datapath__io_imem_r_enable != Core_datapath__io_imem_r_enable__prev)
    goto L72;
K72:
  if (Core_imem__io_core_r_enable != Core_imem__io_core_r_enable__prev)
    goto L73;
K73:
  if (Core_datapath_loadstore__io_imem_rw_write != Core_datapath_loadstore__io_imem_rw_write__prev)
    goto L74;
K74:
  if (Core_datapath__io_imem_rw_write != Core_datapath__io_imem_rw_write__prev)
    goto L75;
K75:
  if (Core_imem__io_core_rw_write != Core_imem__io_core_rw_write__prev)
    goto L76;
K76:
  if (Core_datapath_loadstore__io_imem_rw_enable != Core_datapath_loadstore__io_imem_rw_enable__prev)
    goto L77;
K77:
  if (Core_datapath__io_imem_rw_enable != Core_datapath__io_imem_rw_enable__prev)
    goto L78;
K78:
  if (Core_imem__io_core_rw_enable != Core_imem__io_core_rw_enable__prev)
    goto L79;
K79:
  if (Core_datapath_csr__io_kill != Core_datapath_csr__io_kill__prev)
    goto L80;
K80:
  if (Core_datapath_csr__priv_fault != Core_datapath_csr__priv_fault__prev)
    goto L81;
K81:
  if (Core_control__exe_csr_write != Core_control__exe_csr_write__prev)
    goto L82;
K82:
  if (Core_control__io_exe_csr_write != Core_control__io_exe_csr_write__prev)
    goto L83;
K83:
  if (Core_datapath__io_control_exe_csr_write != Core_datapath__io_control_exe_csr_write__prev)
    goto L84;
K84:
  if (Core_datapath_csr__io_rw_write != Core_datapath_csr__io_rw_write__prev)
    goto L85;
K85:
  if (Core_datapath_csr__write != Core_datapath_csr__write__prev)
    goto L86;
K86:
  if (Core__io_int_exts_0 != Core__io_int_exts_0__prev)
    goto L87;
K87:
  if (Core_datapath__io_int_exts_0 != Core_datapath__io_int_exts_0__prev)
    goto L88;
K88:
  if (Core_datapath_csr__io_int_exts_0 != Core_datapath_csr__io_int_exts_0__prev)
    goto L89;
K89:
  if (Core__io_int_exts_1 != Core__io_int_exts_1__prev)
    goto L90;
K90:
  if (Core_datapath__io_int_exts_1 != Core_datapath__io_int_exts_1__prev)
    goto L91;
K91:
  if (Core_datapath_csr__io_int_exts_1 != Core_datapath_csr__io_int_exts_1__prev)
    goto L92;
K92:
  if (Core__io_int_exts_2 != Core__io_int_exts_2__prev)
    goto L93;
K93:
  if (Core_datapath__io_int_exts_2 != Core_datapath__io_int_exts_2__prev)
    goto L94;
K94:
  if (Core_datapath_csr__io_int_exts_2 != Core_datapath_csr__io_int_exts_2__prev)
    goto L95;
K95:
  if (Core__io_int_exts_3 != Core__io_int_exts_3__prev)
    goto L96;
K96:
  if (Core_datapath__io_int_exts_3 != Core_datapath__io_int_exts_3__prev)
    goto L97;
K97:
  if (Core_datapath_csr__io_int_exts_3 != Core_datapath_csr__io_int_exts_3__prev)
    goto L98;
K98:
  if (Core_datapath__reset != Core_datapath__reset__prev)
    goto L99;
K99:
  if (Core_datapath_csr__reset != Core_datapath_csr__reset__prev)
    goto L100;
K100:
  if (Core_datapath_csr__reg_msip_1 != Core_datapath_csr__reg_msip_1__prev)
    goto L101;
K101:
  if (Core_datapath_csr__reg_mtie_3 != Core_datapath_csr__reg_mtie_3__prev)
    goto L102;
K102:
  if (Core_datapath_csr__reg_ie1_3 != Core_datapath_csr__reg_ie1_3__prev)
    goto L103;
K103:
  if (Core_datapath_loadstore__io_store_misaligned != Core_datapath_loadstore__io_store_misaligned__prev)
    goto L104;
K104:
  if (Core_datapath__io_control_exe_exc_store_misaligned != Core_datapath__io_control_exe_exc_store_misaligned__prev)
    goto L105;
K105:
  if (Core_control__io_exe_exc_store_misaligned != Core_control__io_exe_exc_store_misaligned__prev)
    goto L106;
K106:
  if (Core_datapath_loadstore__load_misaligned != Core_datapath_loadstore__load_misaligned__prev)
    goto L107;
K107:
  if (Core_datapath_loadstore__io_load_misaligned != Core_datapath_loadstore__io_load_misaligned__prev)
    goto L108;
K108:
  if (Core_datapath__io_control_exe_exc_load_misaligned != Core_datapath__io_control_exe_exc_load_misaligned__prev)
    goto L109;
K109:
  if (Core_control__io_exe_exc_load_misaligned != Core_control__io_exe_exc_load_misaligned__prev)
    goto L110;
K110:
  if (Core_datapath_csr__io_priv_fault != Core_datapath_csr__io_priv_fault__prev)
    goto L111;
K111:
  if (Core_datapath__io_control_exe_exc_priv_inst != Core_datapath__io_control_exe_exc_priv_inst__prev)
    goto L112;
K112:
  if (Core_control__io_exe_exc_priv_inst != Core_control__io_exe_exc_priv_inst__prev)
    goto L113;
K113:
  if (Core_control__exe_inst_exc != Core_control__exe_inst_exc__prev)
    goto L114;
K114:
  if (Core_control__exe_exception != Core_control__exe_exception__prev)
    goto L115;
K115:
  if (Core_control__io_exe_exception != Core_control__io_exe_exception__prev)
    goto L116;
K116:
  if (Core_datapath__io_control_exe_exception != Core_datapath__io_control_exe_exception__prev)
    goto L117;
K117:
  if (Core_datapath_csr__io_exception != Core_datapath_csr__io_exception__prev)
    goto L118;
K118:
  if (Core_datapath_csr__reg_ie_3 != Core_datapath_csr__reg_ie_3__prev)
    goto L119;
K119:
  if (Core_datapath_csr__reg_msip_3 != Core_datapath_csr__reg_msip_3__prev)
    goto L120;
K120:
  if (Core_datapath_csr__reg_mtie_2 != Core_datapath_csr__reg_mtie_2__prev)
    goto L121;
K121:
  if (Core_datapath_csr__reg_ie1_2 != Core_datapath_csr__reg_ie1_2__prev)
    goto L122;
K122:
  if (Core_datapath_csr__reg_ie_2 != Core_datapath_csr__reg_ie_2__prev)
    goto L123;
K123:
  if (Core_datapath_csr__reg_msip_2 != Core_datapath_csr__reg_msip_2__prev)
    goto L124;
K124:
  if (Core_datapath_csr__reg_mtie_1 != Core_datapath_csr__reg_mtie_1__prev)
    goto L125;
K125:
  if (Core_datapath_csr__reg_ie1_1 != Core_datapath_csr__reg_ie1_1__prev)
    goto L126;
K126:
  if (Core_datapath_csr__reg_ie_1 != Core_datapath_csr__reg_ie_1__prev)
    goto L127;
K127:
  if (Core_datapath_csr__reg_mtie_0 != Core_datapath_csr__reg_mtie_0__prev)
    goto L128;
K128:
  if (Core_datapath_csr__reg_ie1_0 != Core_datapath_csr__reg_ie1_0__prev)
    goto L129;
K129:
  if (Core_datapath_csr__reg_ie_0 != Core_datapath_csr__reg_ie_0__prev)
    goto L130;
K130:
  if (Core__io_gpio_in_3 != Core__io_gpio_in_3__prev)
    goto L131;
K131:
  if (Core_datapath__io_gpio_in_3 != Core_datapath__io_gpio_in_3__prev)
    goto L132;
K132:
  if (Core_datapath_csr__io_gpio_in_3 != Core_datapath_csr__io_gpio_in_3__prev)
    goto L133;
K133:
  if (Core_datapath_csr__reg_gpis_3 != Core_datapath_csr__reg_gpis_3__prev)
    goto L134;
K134:
  if (Core__io_gpio_in_2 != Core__io_gpio_in_2__prev)
    goto L135;
K135:
  if (Core_datapath__io_gpio_in_2 != Core_datapath__io_gpio_in_2__prev)
    goto L136;
K136:
  if (Core_datapath_csr__io_gpio_in_2 != Core_datapath_csr__io_gpio_in_2__prev)
    goto L137;
K137:
  if (Core_datapath_csr__reg_gpis_2 != Core_datapath_csr__reg_gpis_2__prev)
    goto L138;
K138:
  if (Core__io_gpio_in_1 != Core__io_gpio_in_1__prev)
    goto L139;
K139:
  if (Core_datapath__io_gpio_in_1 != Core_datapath__io_gpio_in_1__prev)
    goto L140;
K140:
  if (Core_datapath_csr__io_gpio_in_1 != Core_datapath_csr__io_gpio_in_1__prev)
    goto L141;
K141:
  if (Core_datapath_csr__reg_gpis_1 != Core_datapath_csr__reg_gpis_1__prev)
    goto L142;
K142:
  if (Core__io_gpio_in_0 != Core__io_gpio_in_0__prev)
    goto L143;
K143:
  if (Core_datapath__io_gpio_in_0 != Core_datapath__io_gpio_in_0__prev)
    goto L144;
K144:
  if (Core_datapath_csr__io_gpio_in_0 != Core_datapath_csr__io_gpio_in_0__prev)
    goto L145;
K145:
  if (Core_datapath_csr__reg_gpis_0 != Core_datapath_csr__reg_gpis_0__prev)
    goto L146;
K146:
  if (Core_control__exe_valid != Core_control__exe_valid__prev)
    goto L147;
K147:
  if (Core_control__exe_sleep != Core_control__exe_sleep__prev)
    goto L148;
K148:
  if (Core_control__io_exe_sleep != Core_control__io_exe_sleep__prev)
    goto L149;
K149:
  if (Core_datapath__io_control_exe_sleep != Core_datapath__io_control_exe_sleep__prev)
    goto L150;
K150:
  if (Core_datapath_csr__io_sleep != Core_datapath_csr__io_sleep__prev)
    goto L151;
K151:
  if (Core_datapath_csr__sleep != Core_datapath_csr__sleep__prev)
    goto L152;
K152:
  if (Core_datapath_csr__wake_1 != Core_datapath_csr__wake_1__prev)
    goto L153;
K153:
  if (Core_datapath_csr__wake_3 != Core_datapath_csr__wake_3__prev)
    goto L154;
K154:
  if (Core_control__exe_ee != Core_control__exe_ee__prev)
    goto L155;
K155:
  if (Core_control__io_exe_ee != Core_control__io_exe_ee__prev)
    goto L156;
K156:
  if (Core_datapath__io_control_exe_ee != Core_datapath__io_control_exe_ee__prev)
    goto L157;
K157:
  if (Core_datapath_csr__io_ee != Core_datapath_csr__io_ee__prev)
    goto L158;
K158:
  if (Core_control__exe_ie != Core_control__exe_ie__prev)
    goto L159;
K159:
  if (Core_control__io_exe_ie != Core_control__io_exe_ie__prev)
    goto L160;
K160:
  if (Core_datapath__io_control_exe_ie != Core_datapath__io_control_exe_ie__prev)
    goto L161;
K161:
  if (Core_datapath_csr__io_ie != Core_datapath_csr__io_ie__prev)
    goto L162;
K162:
  if (Core_datapath_csr__wake_2 != Core_datapath_csr__wake_2__prev)
    goto L163;
K163:
  if (Core_datapath_csr__wake_0 != Core_datapath_csr__wake_0__prev)
    goto L164;
K164:
  if (Core_datapath_csr__reg_msip_0 != Core_datapath_csr__reg_msip_0__prev)
    goto L165;
K165:
  if (Core_datapath_loadstore__io_imem_r_enable != Core_datapath_loadstore__io_imem_r_enable__prev)
    goto L166;
K166:
  if (Core_datapath_loadstore__dmem_op_reg != Core_datapath_loadstore__dmem_op_reg__prev)
    goto L167;
K167:
  if (Core_datapath_loadstore__imem_op_reg != Core_datapath_loadstore__imem_op_reg__prev)
    goto L168;
K168:
  if (Core_control__mem_rd_write != Core_control__mem_rd_write__prev)
    goto L169;
K169:
  if (Core_control__io_mem_rd_write != Core_control__io_mem_rd_write__prev)
    goto L170;
K170:
  if (Core_datapath__io_control_mem_rd_write != Core_datapath__io_control_mem_rd_write__prev)
    goto L171;
K171:
  if (Core_datapath_regfile__io_rd_enable != Core_datapath_regfile__io_rd_enable__prev)
    goto L172;
K172:
  if (Core_control__reset != Core_control__reset__prev)
    goto L173;
K173:
  if (Core_control_scheduler__reset != Core_control_scheduler__reset__prev)
    goto L174;
K174:
  if (Core_control_scheduler__R191 != Core_control_scheduler__R191__prev)
    goto L175;
K175:
  if (Core_control_scheduler__R185 != Core_control_scheduler__R185__prev)
    goto L176;
K176:
  if (Core_control_scheduler__R180 != Core_control_scheduler__R180__prev)
    goto L177;
K177:
  if (Core_control_scheduler__R111 != Core_control_scheduler__R111__prev)
    goto L178;
K178:
  if (Core_control_scheduler__R86 != Core_control_scheduler__R86__prev)
    goto L179;
K179:
  if (Core_control_scheduler__R71 != Core_control_scheduler__R71__prev)
    goto L180;
K180:
  if (Core_control_scheduler__R65 != Core_control_scheduler__R65__prev)
    goto L181;
K181:
  if (Core_control_scheduler__R60 != Core_control_scheduler__R60__prev)
    goto L182;
K182:
  if (Core_control_scheduler__R48 != Core_control_scheduler__R48__prev)
    goto L183;
K183:
  if (Core_control_scheduler__R34 != Core_control_scheduler__R34__prev)
    goto L184;
K184:
  if (Core_control__mem_reg_exception != Core_control__mem_reg_exception__prev)
    goto L185;
K185:
  if (Core_control__wb_reg_rd_write != Core_control__wb_reg_rd_write__prev)
    goto L186;
K186:
  if (Core_control__exe_reg_load != Core_control__exe_reg_load__prev)
    goto L187;
K187:
  if (Core_control__dec_store != Core_control__dec_store__prev)
    goto L188;
K188:
  if (Core_control__exe_reg_store != Core_control__exe_reg_store__prev)
    goto L189;
K189:
  if (Core_control__dec_csr != Core_control__dec_csr__prev)
    goto L190;
K190:
  if (Core_control__exe_reg_csr_write != Core_control__exe_reg_csr_write__prev)
    goto L191;
K191:
  if (Core_control__dec_reg_cause != Core_control__dec_reg_cause__prev)
    goto L192;
K192:
  if (Core_control__dec_scall != Core_control__dec_scall__prev)
    goto L193;
K193:
  if (Core_control__dec_ie != Core_control__dec_ie__prev)
    goto L194;
K194:
  if (Core_control__dec_du != Core_control__dec_du__prev)
    goto L195;
K195:
  if (Core_control__dec_legal != Core_control__dec_legal__prev)
    goto L196;
K196:
  if (Core_control__R179 != Core_control__R179__prev)
    goto L197;
K197:
  if (Core_control__R172 != Core_control__R172__prev)
    goto L198;
K198:
  if (Core_control__exe_reg_sret != Core_control__exe_reg_sret__prev)
    goto L199;
K199:
  if (Core_control__dec_rd_en != Core_control__dec_rd_en__prev)
    goto L200;
K200:
  if (Core_control__dec_rd_write != Core_control__dec_rd_write__prev)
    goto L201;
K201:
  if (Core_control__exe_reg_rd_write != Core_control__exe_reg_rd_write__prev)
    goto L202;
K202:
  if (Core_control__mem_reg_rd_write != Core_control__mem_reg_rd_write__prev)
    goto L203;
K203:
  if (Core_control__mem_reg_valid != Core_control__mem_reg_valid__prev)
    goto L204;
K204:
  if (Core_control_scheduler__io_valid != Core_control_scheduler__io_valid__prev)
    goto L205;
K205:
  if (Core_control__R148 != Core_control__R148__prev)
    goto L206;
K206:
  if (Core_control__if_reg_valid != Core_control__if_reg_valid__prev)
    goto L207;
K207:
  if (Core_control__exe_flush != Core_control__exe_flush__prev)
    goto L208;
K208:
  if (Core_control__if_valid != Core_control__if_valid__prev)
    goto L209;
K209:
  if (Core_control__dec_reg_valid != Core_control__dec_reg_valid__prev)
    goto L210;
K210:
  if (Core_control__R81 != Core_control__R81__prev)
    goto L211;
K211:
  if (Core_control__dec_jump != Core_control__dec_jump__prev)
    goto L212;
K212:
  if (Core_control__exe_reg_jump != Core_control__exe_reg_jump__prev)
    goto L213;
K213:
  if (Core_control__dec_branch != Core_control__dec_branch__prev)
    goto L214;
K214:
  if (Core_control__exe_reg_branch != Core_control__exe_reg_branch__prev)
    goto L215;
K215:
  if (Core_control__dec_valid != Core_control__dec_valid__prev)
    goto L216;
K216:
  if (Core_control__exe_reg_valid != Core_control__exe_reg_valid__prev)
    goto L217;
K217:
  if (Core_datapath__io_control_if_exc_misaligned != Core_datapath__io_control_if_exc_misaligned__prev)
    goto L218;
K218:
  if (Core_control__io_if_exc_misaligned != Core_control__io_if_exc_misaligned__prev)
    goto L219;
K219:
  if (Core_control__dec_reg_exc != Core_control__dec_reg_exc__prev)
    goto L220;
K220:
  if (Core_control__dec_exc != Core_control__dec_exc__prev)
    goto L221;
K221:
  if (Core_control__exe_reg_exc != Core_control__exe_reg_exc__prev)
    goto L222;
K222:
  if (Core_imem__io_bus_ready != Core_imem__io_bus_ready__prev)
    goto L223;
K223:
  if (Core__io_imem_ready != Core__io_imem_ready__prev)
    goto L224;
K224:
  if (Core_datapath_loadstore__io_bus_enable != Core_datapath_loadstore__io_bus_enable__prev)
    goto L225;
K225:
  if (Core_datapath__io_bus_enable != Core_datapath__io_bus_enable__prev)
    goto L226;
K226:
  if (Core__io_bus_enable != Core__io_bus_enable__prev)
    goto L227;
K227:
  if (Core_datapath_loadstore__io_bus_write != Core_datapath_loadstore__io_bus_write__prev)
    goto L228;
K228:
  if (Core_datapath__io_bus_write != Core_datapath__io_bus_write__prev)
    goto L229;
K229:
  if (Core__io_bus_write != Core__io_bus_write__prev)
    goto L230;
K230:
  if (Core__io_int_exts_4 != Core__io_int_exts_4__prev)
    goto L231;
K231:
  if (Core__io_int_exts_5 != Core__io_int_exts_5__prev)
    goto L232;
K232:
  if (Core__io_int_exts_6 != Core__io_int_exts_6__prev)
    goto L233;
K233:
  if (Core__io_int_exts_7 != Core__io_int_exts_7__prev)
    goto L234;
K234:
  if (Core__io_dmem_byte_write_0 != Core__io_dmem_byte_write_0__prev)
    goto L235;
K235:
  if (Core__io_dmem_byte_write_1 != Core__io_dmem_byte_write_1__prev)
    goto L236;
K236:
  if (Core__io_dmem_byte_write_2 != Core__io_dmem_byte_write_2__prev)
    goto L237;
K237:
  if (Core__io_dmem_byte_write_3 != Core__io_dmem_byte_write_3__prev)
    goto L238;
K238:
  if (Core__io_dmem_enable != Core__io_dmem_enable__prev)
    goto L239;
K239:
  if (Core__io_imem_write != Core__io_imem_write__prev)
    goto L240;
K240:
  if (Core__io_imem_enable != Core__io_imem_enable__prev)
    goto L241;
K241:
  if (Core_datapath_csr__io_rw_thread != Core_datapath_csr__io_rw_thread__prev)
    goto L242;
K242:
  if (Core_datapath_loadstore__io_thread != Core_datapath_loadstore__io_thread__prev)
    goto L243;
K243:
  if (Core_datapath__io_control_if_tid != Core_datapath__io_control_if_tid__prev)
    goto L244;
K244:
  if (Core_control__io_if_tid != Core_control__io_if_tid__prev)
    goto L245;
K245:
  if (Core_datapath__io_control_dec_tid != Core_datapath__io_control_dec_tid__prev)
    goto L246;
K246:
  if (Core_control__io_dec_tid != Core_control__io_dec_tid__prev)
    goto L247;
K247:
  if (Core_datapath__io_control_exe_tid != Core_datapath__io_control_exe_tid__prev)
    goto L248;
K248:
  if (Core_control__io_exe_tid != Core_control__io_exe_tid__prev)
    goto L249;
K249:
  if (Core_datapath__io_control_mem_tid != Core_datapath__io_control_mem_tid__prev)
    goto L250;
K250:
  if (Core_control__io_mem_tid != Core_control__io_mem_tid__prev)
    goto L251;
K251:
  if (Core_control__next_pc_sel_0 != Core_control__next_pc_sel_0__prev)
    goto L252;
K252:
  if (Core_control__io_next_pc_sel_0 != Core_control__io_next_pc_sel_0__prev)
    goto L253;
K253:
  if (Core_datapath__io_control_next_pc_sel_0 != Core_datapath__io_control_next_pc_sel_0__prev)
    goto L254;
K254:
  if (Core_control__next_pc_sel_1 != Core_control__next_pc_sel_1__prev)
    goto L255;
K255:
  if (Core_control__io_next_pc_sel_1 != Core_control__io_next_pc_sel_1__prev)
    goto L256;
K256:
  if (Core_datapath__io_control_next_pc_sel_1 != Core_datapath__io_control_next_pc_sel_1__prev)
    goto L257;
K257:
  if (Core_control__next_pc_sel_2 != Core_control__next_pc_sel_2__prev)
    goto L258;
K258:
  if (Core_control__io_next_pc_sel_2 != Core_control__io_next_pc_sel_2__prev)
    goto L259;
K259:
  if (Core_datapath__io_control_next_pc_sel_2 != Core_datapath__io_control_next_pc_sel_2__prev)
    goto L260;
K260:
  if (Core_control__next_pc_sel_3 != Core_control__next_pc_sel_3__prev)
    goto L261;
K261:
  if (Core_control__io_next_pc_sel_3 != Core_control__io_next_pc_sel_3__prev)
    goto L262;
K262:
  if (Core_datapath__io_control_next_pc_sel_3 != Core_datapath__io_control_next_pc_sel_3__prev)
    goto L263;
K263:
  if (Core_control__next_tid != Core_control__next_tid__prev)
    goto L264;
K264:
  if (Core_control__io_next_tid != Core_control__io_next_tid__prev)
    goto L265;
K265:
  if (Core_datapath__io_control_next_tid != Core_datapath__io_control_next_tid__prev)
    goto L266;
K266:
  if (Core_control__io_exe_csr_type != Core_control__io_exe_csr_type__prev)
    goto L267;
K267:
  if (Core_datapath__io_control_exe_csr_type != Core_datapath__io_control_exe_csr_type__prev)
    goto L268;
K268:
  if (Core_datapath_csr__io_rw_csr_type != Core_datapath_csr__io_rw_csr_type__prev)
    goto L269;
K269:
  if (Core_datapath_csr__reg_prv1_3 != Core_datapath_csr__reg_prv1_3__prev)
    goto L270;
K270:
  if (Core_datapath_csr__reg_prv_3 != Core_datapath_csr__reg_prv_3__prev)
    goto L271;
K271:
  if (Core_datapath_csr__reg_prv1_2 != Core_datapath_csr__reg_prv1_2__prev)
    goto L272;
K272:
  if (Core_datapath_csr__reg_prv_2 != Core_datapath_csr__reg_prv_2__prev)
    goto L273;
K273:
  if (Core_datapath_csr__reg_prv1_1 != Core_datapath_csr__reg_prv1_1__prev)
    goto L274;
K274:
  if (Core_datapath_csr__reg_prv_1 != Core_datapath_csr__reg_prv_1__prev)
    goto L275;
K275:
  if (Core_datapath_csr__reg_prv1_0 != Core_datapath_csr__reg_prv1_0__prev)
    goto L276;
K276:
  if (Core_datapath_csr__reg_prv_0 != Core_datapath_csr__reg_prv_0__prev)
    goto L277;
K277:
  if (Core_datapath_csr__reg_gpos_3 != Core_datapath_csr__reg_gpos_3__prev)
    goto L278;
K278:
  if (Core_datapath_csr__reg_gpos_2 != Core_datapath_csr__reg_gpos_2__prev)
    goto L279;
K279:
  if (Core_datapath_csr__reg_gpos_1 != Core_datapath_csr__reg_gpos_1__prev)
    goto L280;
K280:
  if (Core_datapath_csr__reg_gpos_0 != Core_datapath_csr__reg_gpos_0__prev)
    goto L281;
K281:
  if (Core_datapath_csr__reg_tmodes_1 != Core_datapath_csr__reg_tmodes_1__prev)
    goto L282;
K282:
  if (Core_datapath_csr__reg_tmodes_3 != Core_datapath_csr__reg_tmodes_3__prev)
    goto L283;
K283:
  if (Core_datapath_csr__reg_timer_3 != Core_datapath_csr__reg_timer_3__prev)
    goto L284;
K284:
  if (Core_datapath_csr__reg_timer_1 != Core_datapath_csr__reg_timer_1__prev)
    goto L285;
K285:
  if (Core_datapath_csr__reg_timer_0 != Core_datapath_csr__reg_timer_0__prev)
    goto L286;
K286:
  if (Core_datapath_csr__reg_timer_2 != Core_datapath_csr__reg_timer_2__prev)
    goto L287;
K287:
  if (Core_datapath_csr__reg_tmodes_2 != Core_datapath_csr__reg_tmodes_2__prev)
    goto L288;
K288:
  if (Core_datapath_csr__reg_tmodes_0 != Core_datapath_csr__reg_tmodes_0__prev)
    goto L289;
K289:
  if (Core_datapath_loadstore__addr_byte_reg != Core_datapath_loadstore__addr_byte_reg__prev)
    goto L290;
K290:
  if (Core_datapath_regfile__io_rs1_thread != Core_datapath_regfile__io_rs1_thread__prev)
    goto L291;
K291:
  if (Core_control__io_mem_rd_data_sel != Core_control__io_mem_rd_data_sel__prev)
    goto L292;
K292:
  if (Core_datapath__io_control_mem_rd_data_sel != Core_datapath__io_control_mem_rd_data_sel__prev)
    goto L293;
K293:
  if (Core_datapath_regfile__io_rd_thread != Core_datapath_regfile__io_rd_thread__prev)
    goto L294;
K294:
  if (Core_datapath_regfile__io_rs2_thread != Core_datapath_regfile__io_rs2_thread__prev)
    goto L295;
K295:
  if (Core_datapath__io_control_wb_tid != Core_datapath__io_control_wb_tid__prev)
    goto L296;
K296:
  if (Core_control__io_wb_tid != Core_control__io_wb_tid__prev)
    goto L297;
K297:
  if (Core_control__dec_rs1_sel != Core_control__dec_rs1_sel__prev)
    goto L298;
K298:
  if (Core_control__io_dec_rs1_sel != Core_control__io_dec_rs1_sel__prev)
    goto L299;
K299:
  if (Core_datapath__io_control_dec_rs1_sel != Core_datapath__io_control_dec_rs1_sel__prev)
    goto L300;
K300:
  if (Core_control__io_exe_rd_data_sel != Core_control__io_exe_rd_data_sel__prev)
    goto L301;
K301:
  if (Core_datapath__io_control_exe_rd_data_sel != Core_datapath__io_control_exe_rd_data_sel__prev)
    goto L302;
K302:
  if (Core_datapath__wb_reg_tid != Core_datapath__wb_reg_tid__prev)
    goto L303;
K303:
  if (Core_control__dec_rs2_sel != Core_control__dec_rs2_sel__prev)
    goto L304;
K304:
  if (Core_control__io_dec_rs2_sel != Core_control__io_dec_rs2_sel__prev)
    goto L305;
K305:
  if (Core_datapath__io_control_dec_rs2_sel != Core_datapath__io_control_dec_rs2_sel__prev)
    goto L306;
K306:
  if (Core_control__dec_op2_sel != Core_control__dec_op2_sel__prev)
    goto L307;
K307:
  if (Core_control__io_dec_op2_sel != Core_control__io_dec_op2_sel__prev)
    goto L308;
K308:
  if (Core_datapath__io_control_dec_op2_sel != Core_datapath__io_control_dec_op2_sel__prev)
    goto L309;
K309:
  if (Core_datapath__mem_reg_tid != Core_datapath__mem_reg_tid__prev)
    goto L310;
K310:
  if (Core_datapath__exe_reg_tid != Core_datapath__exe_reg_tid__prev)
    goto L311;
K311:
  if (Core_control__dec_op1_sel != Core_control__dec_op1_sel__prev)
    goto L312;
K312:
  if (Core_control__io_dec_op1_sel != Core_control__io_dec_op1_sel__prev)
    goto L313;
K313:
  if (Core_datapath__io_control_dec_op1_sel != Core_datapath__io_control_dec_op1_sel__prev)
    goto L314;
K314:
  if (Core_datapath__if_reg_tid != Core_datapath__if_reg_tid__prev)
    goto L315;
K315:
  if (Core_datapath__dec_reg_tid != Core_datapath__dec_reg_tid__prev)
    goto L316;
K316:
  if (Core_datapath_csr__io_tmodes_1 != Core_datapath_csr__io_tmodes_1__prev)
    goto L317;
K317:
  if (Core_datapath__io_control_csr_tmodes_1 != Core_datapath__io_control_csr_tmodes_1__prev)
    goto L318;
K318:
  if (Core_control__io_csr_tmodes_1 != Core_control__io_csr_tmodes_1__prev)
    goto L319;
K319:
  if (Core_control_scheduler__io_thread_modes_1 != Core_control_scheduler__io_thread_modes_1__prev)
    goto L320;
K320:
  if (Core_datapath_csr__io_tmodes_0 != Core_datapath_csr__io_tmodes_0__prev)
    goto L321;
K321:
  if (Core_datapath__io_control_csr_tmodes_0 != Core_datapath__io_control_csr_tmodes_0__prev)
    goto L322;
K322:
  if (Core_control__io_csr_tmodes_0 != Core_control__io_csr_tmodes_0__prev)
    goto L323;
K323:
  if (Core_control_scheduler__io_thread_modes_0 != Core_control_scheduler__io_thread_modes_0__prev)
    goto L324;
K324:
  if (Core_datapath_csr__io_tmodes_2 != Core_datapath_csr__io_tmodes_2__prev)
    goto L325;
K325:
  if (Core_datapath__io_control_csr_tmodes_2 != Core_datapath__io_control_csr_tmodes_2__prev)
    goto L326;
K326:
  if (Core_control__io_csr_tmodes_2 != Core_control__io_csr_tmodes_2__prev)
    goto L327;
K327:
  if (Core_control_scheduler__io_thread_modes_2 != Core_control_scheduler__io_thread_modes_2__prev)
    goto L328;
K328:
  if (Core_datapath_csr__io_tmodes_3 != Core_datapath_csr__io_tmodes_3__prev)
    goto L329;
K329:
  if (Core_datapath__io_control_csr_tmodes_3 != Core_datapath__io_control_csr_tmodes_3__prev)
    goto L330;
K330:
  if (Core_control__io_csr_tmodes_3 != Core_control__io_csr_tmodes_3__prev)
    goto L331;
K331:
  if (Core_control_scheduler__io_thread_modes_3 != Core_control_scheduler__io_thread_modes_3__prev)
    goto L332;
K332:
  if (Core_control__dec_csr_type != Core_control__dec_csr_type__prev)
    goto L333;
K333:
  if (Core_control__exe_reg_csr_type != Core_control__exe_reg_csr_type__prev)
    goto L334;
K334:
  if (Core_control__exe_reg_mul_type != Core_control__exe_reg_mul_type__prev)
    goto L335;
K335:
  if (Core_control__dec_exe_rd_data_sel != Core_control__dec_exe_rd_data_sel__prev)
    goto L336;
K336:
  if (Core_control__exe_reg_rd_data_sel != Core_control__exe_reg_rd_data_sel__prev)
    goto L337;
K337:
  if (Core_control__dec_mem_rd_data_sel != Core_control__dec_mem_rd_data_sel__prev)
    goto L338;
K338:
  if (Core_control__R269 != Core_control__R269__prev)
    goto L339;
K339:
  if (Core_control__mem_reg_rd_data_sel != Core_control__mem_reg_rd_data_sel__prev)
    goto L340;
K340:
  if (Core_control_scheduler__io_thread != Core_control_scheduler__io_thread__prev)
    goto L341;
K341:
  if (Core_control__R225 != Core_control__R225__prev)
    goto L342;
K342:
  if (Core_control__stall_count_3 != Core_control__stall_count_3__prev)
    goto L343;
K343:
  if (Core_control__stall_count_2 != Core_control__stall_count_2__prev)
    goto L344;
K344:
  if (Core_control__stall_count_1 != Core_control__stall_count_1__prev)
    goto L345;
K345:
  if (Core_control__stall_count_0 != Core_control__stall_count_0__prev)
    goto L346;
K346:
  if (Core_datapath_csr__io_gpio_out_3 != Core_datapath_csr__io_gpio_out_3__prev)
    goto L347;
K347:
  if (Core_datapath__io_gpio_out_3 != Core_datapath__io_gpio_out_3__prev)
    goto L348;
K348:
  if (Core__io_gpio_out_3 != Core__io_gpio_out_3__prev)
    goto L349;
K349:
  if (Core_datapath_csr__io_gpio_out_2 != Core_datapath_csr__io_gpio_out_2__prev)
    goto L350;
K350:
  if (Core_datapath__io_gpio_out_2 != Core_datapath__io_gpio_out_2__prev)
    goto L351;
K351:
  if (Core__io_gpio_out_2 != Core__io_gpio_out_2__prev)
    goto L352;
K352:
  if (Core_datapath_csr__io_gpio_out_1 != Core_datapath_csr__io_gpio_out_1__prev)
    goto L353;
K353:
  if (Core_datapath__io_gpio_out_1 != Core_datapath__io_gpio_out_1__prev)
    goto L354;
K354:
  if (Core__io_gpio_out_1 != Core__io_gpio_out_1__prev)
    goto L355;
K355:
  if (Core_datapath_csr__io_gpio_out_0 != Core_datapath_csr__io_gpio_out_0__prev)
    goto L356;
K356:
  if (Core_datapath__io_gpio_out_0 != Core_datapath__io_gpio_out_0__prev)
    goto L357;
K357:
  if (Core__io_gpio_out_0 != Core__io_gpio_out_0__prev)
    goto L358;
K358:
  if (Core_control__io_exe_br_type != Core_control__io_exe_br_type__prev)
    goto L359;
K359:
  if (Core_datapath__io_control_exe_br_type != Core_datapath__io_control_exe_br_type__prev)
    goto L360;
K360:
  if (Core_control__dec_imm_sel != Core_control__dec_imm_sel__prev)
    goto L361;
K361:
  if (Core_control__io_dec_imm_sel != Core_control__io_dec_imm_sel__prev)
    goto L362;
K362:
  if (Core_datapath__io_control_dec_imm_sel != Core_datapath__io_control_dec_imm_sel__prev)
    goto L363;
K363:
  if (Core_control__dec_br_type != Core_control__dec_br_type__prev)
    goto L364;
K364:
  if (Core_control__exe_reg_br_type != Core_control__exe_reg_br_type__prev)
    goto L365;
K365:
  if (Core_control__dec_cause != Core_control__dec_cause__prev)
    goto L366;
K366:
  if (Core_control__exe_reg_cause != Core_control__exe_reg_cause__prev)
    goto L367;
K367:
  if (Core_control__io_exe_alu_type != Core_control__io_exe_alu_type__prev)
    goto L368;
K368:
  if (Core_datapath__io_control_exe_alu_type != Core_datapath__io_control_exe_alu_type__prev)
    goto L369;
K369:
  if (Core_control__io_exe_mem_type != Core_control__io_exe_mem_type__prev)
    goto L370;
K370:
  if (Core_datapath__io_control_exe_mem_type != Core_datapath__io_control_exe_mem_type__prev)
    goto L371;
K371:
  if (Core_datapath_loadstore__io_mem_type != Core_datapath_loadstore__io_mem_type__prev)
    goto L372;
K372:
  if (Core_datapath_csr__io_imem_protection_0 != Core_datapath_csr__io_imem_protection_0__prev)
    goto L373;
K373:
  if (Core_datapath_loadstore__io_imem_protection_0 != Core_datapath_loadstore__io_imem_protection_0__prev)
    goto L374;
K374:
  if (Core_datapath_csr__io_imem_protection_1 != Core_datapath_csr__io_imem_protection_1__prev)
    goto L375;
K375:
  if (Core_datapath_loadstore__io_imem_protection_1 != Core_datapath_loadstore__io_imem_protection_1__prev)
    goto L376;
K376:
  if (Core_datapath_csr__io_imem_protection_2 != Core_datapath_csr__io_imem_protection_2__prev)
    goto L377;
K377:
  if (Core_datapath_loadstore__io_imem_protection_2 != Core_datapath_loadstore__io_imem_protection_2__prev)
    goto L378;
K378:
  if (Core_datapath_csr__io_imem_protection_3 != Core_datapath_csr__io_imem_protection_3__prev)
    goto L379;
K379:
  if (Core_datapath_loadstore__io_imem_protection_3 != Core_datapath_loadstore__io_imem_protection_3__prev)
    goto L380;
K380:
  if (Core_datapath_csr__io_imem_protection_4 != Core_datapath_csr__io_imem_protection_4__prev)
    goto L381;
K381:
  if (Core_datapath_loadstore__io_imem_protection_4 != Core_datapath_loadstore__io_imem_protection_4__prev)
    goto L382;
K382:
  if (Core_datapath_csr__io_imem_protection_5 != Core_datapath_csr__io_imem_protection_5__prev)
    goto L383;
K383:
  if (Core_datapath_loadstore__io_imem_protection_5 != Core_datapath_loadstore__io_imem_protection_5__prev)
    goto L384;
K384:
  if (Core_datapath_csr__io_imem_protection_6 != Core_datapath_csr__io_imem_protection_6__prev)
    goto L385;
K385:
  if (Core_datapath_loadstore__io_imem_protection_6 != Core_datapath_loadstore__io_imem_protection_6__prev)
    goto L386;
K386:
  if (Core_datapath_csr__io_imem_protection_7 != Core_datapath_csr__io_imem_protection_7__prev)
    goto L387;
K387:
  if (Core_datapath_loadstore__io_imem_protection_7 != Core_datapath_loadstore__io_imem_protection_7__prev)
    goto L388;
K388:
  if (Core_datapath_csr__io_dmem_protection_0 != Core_datapath_csr__io_dmem_protection_0__prev)
    goto L389;
K389:
  if (Core_datapath_loadstore__io_dmem_protection_0 != Core_datapath_loadstore__io_dmem_protection_0__prev)
    goto L390;
K390:
  if (Core_datapath_csr__io_dmem_protection_1 != Core_datapath_csr__io_dmem_protection_1__prev)
    goto L391;
K391:
  if (Core_datapath_loadstore__io_dmem_protection_1 != Core_datapath_loadstore__io_dmem_protection_1__prev)
    goto L392;
K392:
  if (Core_datapath_csr__io_dmem_protection_2 != Core_datapath_csr__io_dmem_protection_2__prev)
    goto L393;
K393:
  if (Core_datapath_loadstore__io_dmem_protection_2 != Core_datapath_loadstore__io_dmem_protection_2__prev)
    goto L394;
K394:
  if (Core_datapath_csr__io_dmem_protection_3 != Core_datapath_csr__io_dmem_protection_3__prev)
    goto L395;
K395:
  if (Core_datapath_loadstore__io_dmem_protection_3 != Core_datapath_loadstore__io_dmem_protection_3__prev)
    goto L396;
K396:
  if (Core_datapath_csr__io_dmem_protection_4 != Core_datapath_csr__io_dmem_protection_4__prev)
    goto L397;
K397:
  if (Core_datapath_loadstore__io_dmem_protection_4 != Core_datapath_loadstore__io_dmem_protection_4__prev)
    goto L398;
K398:
  if (Core_datapath_csr__io_dmem_protection_5 != Core_datapath_csr__io_dmem_protection_5__prev)
    goto L399;
K399:
  if (Core_datapath_loadstore__io_dmem_protection_5 != Core_datapath_loadstore__io_dmem_protection_5__prev)
    goto L400;
K400:
  if (Core_datapath_csr__io_dmem_protection_6 != Core_datapath_csr__io_dmem_protection_6__prev)
    goto L401;
K401:
  if (Core_datapath_loadstore__io_dmem_protection_6 != Core_datapath_loadstore__io_dmem_protection_6__prev)
    goto L402;
K402:
  if (Core_datapath_csr__io_dmem_protection_7 != Core_datapath_csr__io_dmem_protection_7__prev)
    goto L403;
K403:
  if (Core_datapath_loadstore__io_dmem_protection_7 != Core_datapath_loadstore__io_dmem_protection_7__prev)
    goto L404;
K404:
  if (Core_datapath_csr__reg_dmem_protection_7 != Core_datapath_csr__reg_dmem_protection_7__prev)
    goto L405;
K405:
  if (Core_datapath_csr__reg_dmem_protection_6 != Core_datapath_csr__reg_dmem_protection_6__prev)
    goto L406;
K406:
  if (Core_datapath_csr__reg_dmem_protection_5 != Core_datapath_csr__reg_dmem_protection_5__prev)
    goto L407;
K407:
  if (Core_datapath_csr__reg_dmem_protection_4 != Core_datapath_csr__reg_dmem_protection_4__prev)
    goto L408;
K408:
  if (Core_datapath_csr__reg_dmem_protection_3 != Core_datapath_csr__reg_dmem_protection_3__prev)
    goto L409;
K409:
  if (Core_datapath_csr__reg_dmem_protection_2 != Core_datapath_csr__reg_dmem_protection_2__prev)
    goto L410;
K410:
  if (Core_datapath_csr__reg_dmem_protection_1 != Core_datapath_csr__reg_dmem_protection_1__prev)
    goto L411;
K411:
  if (Core_datapath_csr__reg_dmem_protection_0 != Core_datapath_csr__reg_dmem_protection_0__prev)
    goto L412;
K412:
  if (Core_datapath_csr__reg_imem_protection_7 != Core_datapath_csr__reg_imem_protection_7__prev)
    goto L413;
K413:
  if (Core_datapath_csr__reg_imem_protection_6 != Core_datapath_csr__reg_imem_protection_6__prev)
    goto L414;
K414:
  if (Core_datapath_csr__reg_imem_protection_5 != Core_datapath_csr__reg_imem_protection_5__prev)
    goto L415;
K415:
  if (Core_datapath_csr__reg_imem_protection_4 != Core_datapath_csr__reg_imem_protection_4__prev)
    goto L416;
K416:
  if (Core_datapath_csr__reg_imem_protection_3 != Core_datapath_csr__reg_imem_protection_3__prev)
    goto L417;
K417:
  if (Core_datapath_csr__reg_imem_protection_2 != Core_datapath_csr__reg_imem_protection_2__prev)
    goto L418;
K418:
  if (Core_datapath_csr__reg_imem_protection_1 != Core_datapath_csr__reg_imem_protection_1__prev)
    goto L419;
K419:
  if (Core_datapath_csr__reg_imem_protection_0 != Core_datapath_csr__reg_imem_protection_0__prev)
    goto L420;
K420:
  if (Core_datapath_csr__reg_gpo_protection_3 != Core_datapath_csr__reg_gpo_protection_3__prev)
    goto L421;
K421:
  if (Core_datapath_csr__reg_gpo_protection_2 != Core_datapath_csr__reg_gpo_protection_2__prev)
    goto L422;
K422:
  if (Core_datapath_csr__reg_gpo_protection_1 != Core_datapath_csr__reg_gpo_protection_1__prev)
    goto L423;
K423:
  if (Core_datapath_csr__reg_gpo_protection_0 != Core_datapath_csr__reg_gpo_protection_0__prev)
    goto L424;
K424:
  if (Core_control__exe_inst_cause != Core_control__exe_inst_cause__prev)
    goto L425;
K425:
  if (Core_datapath_csr__reg_slots_7 != Core_datapath_csr__reg_slots_7__prev)
    goto L426;
K426:
  if (Core_datapath_csr__reg_slots_6 != Core_datapath_csr__reg_slots_6__prev)
    goto L427;
K427:
  if (Core_datapath_csr__reg_slots_5 != Core_datapath_csr__reg_slots_5__prev)
    goto L428;
K428:
  if (Core_datapath_csr__reg_slots_4 != Core_datapath_csr__reg_slots_4__prev)
    goto L429;
K429:
  if (Core_datapath_csr__reg_slots_3 != Core_datapath_csr__reg_slots_3__prev)
    goto L430;
K430:
  if (Core_datapath_csr__reg_slots_2 != Core_datapath_csr__reg_slots_2__prev)
    goto L431;
K431:
  if (Core_datapath_csr__reg_slots_1 != Core_datapath_csr__reg_slots_1__prev)
    goto L432;
K432:
  if (Core_datapath_csr__reg_slots_0 != Core_datapath_csr__reg_slots_0__prev)
    goto L433;
K433:
  if (Core_datapath_loadstore__mem_type_reg != Core_datapath_loadstore__mem_type_reg__prev)
    goto L434;
K434:
  if (Core_datapath_csr__io_slots_7 != Core_datapath_csr__io_slots_7__prev)
    goto L435;
K435:
  if (Core_datapath__io_control_csr_slots_7 != Core_datapath__io_control_csr_slots_7__prev)
    goto L436;
K436:
  if (Core_control__io_csr_slots_7 != Core_control__io_csr_slots_7__prev)
    goto L437;
K437:
  if (Core_control_scheduler__io_slots_7 != Core_control_scheduler__io_slots_7__prev)
    goto L438;
K438:
  if (Core_datapath_csr__io_slots_6 != Core_datapath_csr__io_slots_6__prev)
    goto L439;
K439:
  if (Core_datapath__io_control_csr_slots_6 != Core_datapath__io_control_csr_slots_6__prev)
    goto L440;
K440:
  if (Core_control__io_csr_slots_6 != Core_control__io_csr_slots_6__prev)
    goto L441;
K441:
  if (Core_control_scheduler__io_slots_6 != Core_control_scheduler__io_slots_6__prev)
    goto L442;
K442:
  if (Core_datapath_csr__io_slots_5 != Core_datapath_csr__io_slots_5__prev)
    goto L443;
K443:
  if (Core_datapath__io_control_csr_slots_5 != Core_datapath__io_control_csr_slots_5__prev)
    goto L444;
K444:
  if (Core_control__io_csr_slots_5 != Core_control__io_csr_slots_5__prev)
    goto L445;
K445:
  if (Core_control_scheduler__io_slots_5 != Core_control_scheduler__io_slots_5__prev)
    goto L446;
K446:
  if (Core_datapath_csr__io_slots_4 != Core_datapath_csr__io_slots_4__prev)
    goto L447;
K447:
  if (Core_datapath__io_control_csr_slots_4 != Core_datapath__io_control_csr_slots_4__prev)
    goto L448;
K448:
  if (Core_control__io_csr_slots_4 != Core_control__io_csr_slots_4__prev)
    goto L449;
K449:
  if (Core_control_scheduler__io_slots_4 != Core_control_scheduler__io_slots_4__prev)
    goto L450;
K450:
  if (Core_datapath_csr__io_slots_3 != Core_datapath_csr__io_slots_3__prev)
    goto L451;
K451:
  if (Core_datapath__io_control_csr_slots_3 != Core_datapath__io_control_csr_slots_3__prev)
    goto L452;
K452:
  if (Core_control__io_csr_slots_3 != Core_control__io_csr_slots_3__prev)
    goto L453;
K453:
  if (Core_control_scheduler__io_slots_3 != Core_control_scheduler__io_slots_3__prev)
    goto L454;
K454:
  if (Core_datapath_csr__io_slots_2 != Core_datapath_csr__io_slots_2__prev)
    goto L455;
K455:
  if (Core_datapath__io_control_csr_slots_2 != Core_datapath__io_control_csr_slots_2__prev)
    goto L456;
K456:
  if (Core_control__io_csr_slots_2 != Core_control__io_csr_slots_2__prev)
    goto L457;
K457:
  if (Core_control_scheduler__io_slots_2 != Core_control_scheduler__io_slots_2__prev)
    goto L458;
K458:
  if (Core_datapath_csr__io_slots_1 != Core_datapath_csr__io_slots_1__prev)
    goto L459;
K459:
  if (Core_datapath__io_control_csr_slots_1 != Core_datapath__io_control_csr_slots_1__prev)
    goto L460;
K460:
  if (Core_control__io_csr_slots_1 != Core_control__io_csr_slots_1__prev)
    goto L461;
K461:
  if (Core_control_scheduler__io_slots_1 != Core_control_scheduler__io_slots_1__prev)
    goto L462;
K462:
  if (Core_datapath_csr__io_slots_0 != Core_datapath_csr__io_slots_0__prev)
    goto L463;
K463:
  if (Core_datapath__io_control_csr_slots_0 != Core_datapath__io_control_csr_slots_0__prev)
    goto L464;
K464:
  if (Core_control__io_csr_slots_0 != Core_control__io_csr_slots_0__prev)
    goto L465;
K465:
  if (Core_control_scheduler__io_slots_0 != Core_control_scheduler__io_slots_0__prev)
    goto L466;
K466:
  if (Core_control__dec_alu_type != Core_control__dec_alu_type__prev)
    goto L467;
K467:
  if (Core_control__exe_reg_alu_type != Core_control__exe_reg_alu_type__prev)
    goto L468;
K468:
  if (Core_control__dec_mem_type != Core_control__dec_mem_type__prev)
    goto L469;
K469:
  if (Core_control__exe_reg_mem_type != Core_control__exe_reg_mem_type__prev)
    goto L470;
K470:
  if (Core_datapath__exe_alu_shift != Core_datapath__exe_alu_shift__prev)
    goto L471;
K471:
  if (Core_control__exe_any_cause != Core_control__exe_any_cause__prev)
    goto L472;
K472:
  if (Core_control__exe_exception_cause != Core_control__exe_exception_cause__prev)
    goto L473;
K473:
  if (Core_control__io_exe_cause != Core_control__io_exe_cause__prev)
    goto L474;
K474:
  if (Core_datapath__io_control_exe_cause != Core_datapath__io_control_exe_cause__prev)
    goto L475;
K475:
  if (Core_datapath_csr__io_cause != Core_datapath_csr__io_cause__prev)
    goto L476;
K476:
  if (Core_datapath_csr__reg_causes_3 != Core_datapath_csr__reg_causes_3__prev)
    goto L477;
K477:
  if (Core_datapath_csr__reg_causes_2 != Core_datapath_csr__reg_causes_2__prev)
    goto L478;
K478:
  if (Core_datapath_csr__reg_causes_1 != Core_datapath_csr__reg_causes_1__prev)
    goto L479;
K479:
  if (Core_datapath_csr__reg_causes_0 != Core_datapath_csr__reg_causes_0__prev)
    goto L480;
K480:
  if (Core_datapath_regfile__io_rs1_addr != Core_datapath_regfile__io_rs1_addr__prev)
    goto L481;
K481:
  if (Core_datapath_regfile__io_rd_addr != Core_datapath_regfile__io_rd_addr__prev)
    goto L482;
K482:
  if (Core_datapath_regfile__io_rs2_addr != Core_datapath_regfile__io_rs2_addr__prev)
    goto L483;
K483:
  if (Core_datapath__io_control_wb_rd_addr != Core_datapath__io_control_wb_rd_addr__prev)
    goto L484;
K484:
  if (Core_control__io_wb_rd_addr != Core_control__io_wb_rd_addr__prev)
    goto L485;
K485:
  if (Core_datapath__io_control_mem_rd_addr != Core_datapath__io_control_mem_rd_addr__prev)
    goto L486;
K486:
  if (Core_control__io_mem_rd_addr != Core_control__io_mem_rd_addr__prev)
    goto L487;
K487:
  if (Core_datapath__io_control_exe_rd_addr != Core_datapath__io_control_exe_rd_addr__prev)
    goto L488;
K488:
  if (Core_control__io_exe_rd_addr != Core_control__io_exe_rd_addr__prev)
    goto L489;
K489:
  if (Core_datapath__wb_reg_rd_addr != Core_datapath__wb_reg_rd_addr__prev)
    goto L490;
K490:
  if (Core_datapath__exe_reg_rd_addr != Core_datapath__exe_reg_rd_addr__prev)
    goto L491;
K491:
  if (Core_datapath__mem_reg_rd_addr != Core_datapath__mem_reg_rd_addr__prev)
    goto L492;
K492:
  if (Core_datapath_loadstore__io_bus_addr != Core_datapath_loadstore__io_bus_addr__prev)
    goto L493;
K493:
  if (Core_datapath__io_bus_addr != Core_datapath__io_bus_addr__prev)
    goto L494;
K494:
  if (Core__io_bus_addr != Core__io_bus_addr__prev)
    goto L495;
K495:
  if (Core_datapath_loadstore__io_dmem_addr != Core_datapath_loadstore__io_dmem_addr__prev)
    goto L496;
K496:
  if (Core_datapath__io_dmem_addr != Core_datapath__io_dmem_addr__prev)
    goto L497;
K497:
  if (Core_dmem__io_core_addr != Core_dmem__io_core_addr__prev)
    goto L498;
K498:
  if (Core_datapath__io_imem_r_addr != Core_datapath__io_imem_r_addr__prev)
    goto L499;
K499:
  if (Core_imem__io_core_r_addr != Core_imem__io_core_r_addr__prev)
    goto L500;
K500:
  if (Core_datapath_loadstore__io_imem_rw_addr != Core_datapath_loadstore__io_imem_rw_addr__prev)
    goto L501;
K501:
  if (Core_datapath__io_imem_rw_addr != Core_datapath__io_imem_rw_addr__prev)
    goto L502;
K502:
  if (Core_imem__io_core_rw_addr != Core_imem__io_core_rw_addr__prev)
    goto L503;
K503:
  if (Core_datapath_csr__io_rw_addr != Core_datapath_csr__io_rw_addr__prev)
    goto L504;
K504:
  if (Core_datapath_loadstore__io_imem_r_addr != Core_datapath_loadstore__io_imem_r_addr__prev)
    goto L505;
K505:
  if (Core_datapath__exe_reg_csr_addr != Core_datapath__exe_reg_csr_addr__prev)
    goto L506;
K506:
  if (Core__io_dmem_addr != Core__io_dmem_addr__prev)
    goto L507;
K507:
  if (Core__io_imem_addr != Core__io_imem_addr__prev)
    goto L508;
K508:
  if (Core_datapath__def_exe_alu_result != Core_datapath__def_exe_alu_result__prev)
    goto L509;
K509:
  if (Core_datapath__exe_alu_result != Core_datapath__exe_alu_result__prev)
    goto L510;
K510:
  if (Core_datapath__exe_address != Core_datapath__exe_address__prev)
    goto L511;
K511:
  if (Core_datapath_loadstore__io_addr != Core_datapath_loadstore__io_addr__prev)
    goto L512;
K512:
  if (Core_datapath_loadstore__io_data_in != Core_datapath_loadstore__io_data_in__prev)
    goto L513;
K513:
  if (Core_datapath_loadstore__io_dmem_data_in != Core_datapath_loadstore__io_dmem_data_in__prev)
    goto L514;
K514:
  if (Core_datapath__io_dmem_data_in != Core_datapath__io_dmem_data_in__prev)
    goto L515;
K515:
  if (Core_dmem__io_core_data_in != Core_dmem__io_core_data_in__prev)
    goto L516;
K516:
  if (Core_dmem__dout != Core_dmem__dout__prev)
    goto L517;
K517:
  if (Core_datapath__if_pc_plus4 != Core_datapath__if_pc_plus4__prev)
    goto L518;
K518:
  if (Core_datapath__io_control_dec_inst != Core_datapath__io_control_dec_inst__prev)
    goto L519;
K519:
  if (Core_control__io_dec_inst != Core_control__io_dec_inst__prev)
    goto L520;
K520:
  if (Core_datapath_csr__io_evecs_0 != Core_datapath_csr__io_evecs_0__prev)
    goto L521;
K521:
  if (Core_datapath_csr__io_evecs_1 != Core_datapath_csr__io_evecs_1__prev)
    goto L522;
K522:
  if (Core_datapath_csr__io_evecs_2 != Core_datapath_csr__io_evecs_2__prev)
    goto L523;
K523:
  if (Core_datapath_csr__io_evecs_3 != Core_datapath_csr__io_evecs_3__prev)
    goto L524;
K524:
  if (Core_datapath__mem_evec != Core_datapath__mem_evec__prev)
    goto L525;
K525:
  if (Core_datapath__next_pcs_0 != Core_datapath__next_pcs_0__prev)
    goto L526;
K526:
  if (Core_datapath__next_pcs_1 != Core_datapath__next_pcs_1__prev)
    goto L527;
K527:
  if (Core_datapath__next_pcs_2 != Core_datapath__next_pcs_2__prev)
    goto L528;
K528:
  if (Core_datapath__next_pcs_3 != Core_datapath__next_pcs_3__prev)
    goto L529;
K529:
  if (Core_datapath__next_pc != Core_datapath__next_pc__prev)
    goto L530;
K530:
  if (Core_imem__dout_r != Core_imem__dout_r__prev)
    goto L531;
K531:
  if (Core_datapath_loadstore__io_imem_rw_data_in != Core_datapath_loadstore__io_imem_rw_data_in__prev)
    goto L532;
K532:
  if (Core_datapath__io_imem_rw_data_in != Core_datapath__io_imem_rw_data_in__prev)
    goto L533;
K533:
  if (Core_imem__io_core_rw_data_in != Core_imem__io_core_rw_data_in__prev)
    goto L534;
K534:
  if (Core_imem__R0 != Core_imem__R0__prev)
    goto L535;
K535:
  if (Core_datapath_csr__io_rw_data_in != Core_datapath_csr__io_rw_data_in__prev)
    goto L536;
K536:
  if (Core_datapath_csr__reg_to_host != Core_datapath_csr__reg_to_host__prev)
    goto L537;
K537:
  if (Core_datapath_csr__io_epc != Core_datapath_csr__io_epc__prev)
    goto L538;
K538:
  if (Core_datapath_csr__reg_epcs_3 != Core_datapath_csr__reg_epcs_3__prev)
    goto L539;
K539:
  if (Core_datapath_csr__reg_epcs_2 != Core_datapath_csr__reg_epcs_2__prev)
    goto L540;
K540:
  if (Core_datapath_csr__reg_epcs_1 != Core_datapath_csr__reg_epcs_1__prev)
    goto L541;
K541:
  if (Core_datapath_csr__reg_epcs_0 != Core_datapath_csr__reg_epcs_0__prev)
    goto L542;
K542:
  if (Core_datapath_csr__reg_compare_3 != Core_datapath_csr__reg_compare_3__prev)
    goto L543;
K543:
  if (Core_datapath_csr__reg_compare_1 != Core_datapath_csr__reg_compare_1__prev)
    goto L544;
K544:
  if (Core_datapath_csr__reg_compare_0 != Core_datapath_csr__reg_compare_0__prev)
    goto L545;
K545:
  if (Core_datapath_csr__reg_compare_2 != Core_datapath_csr__reg_compare_2__prev)
    goto L546;
K546:
  if (Core_imem__io_core_r_data_out != Core_imem__io_core_r_data_out__prev)
    goto L547;
K547:
  if (Core_datapath__io_imem_r_data_out != Core_datapath__io_imem_r_data_out__prev)
    goto L548;
K548:
  if (Core_datapath_regfile__dout1 != Core_datapath_regfile__dout1__prev)
    goto L549;
K549:
  if (Core_datapath__mem_mul_result != Core_datapath__mem_mul_result__prev)
    goto L550;
K550:
  if (Core__io_bus_data_out != Core__io_bus_data_out__prev)
    goto L551;
K551:
  if (Core_datapath__io_bus_data_out != Core_datapath__io_bus_data_out__prev)
    goto L552;
K552:
  if (Core_datapath_loadstore__io_bus_data_out != Core_datapath_loadstore__io_bus_data_out__prev)
    goto L553;
K553:
  if (Core_imem__io_core_rw_data_out != Core_imem__io_core_rw_data_out__prev)
    goto L554;
K554:
  if (Core_datapath__io_imem_rw_data_out != Core_datapath__io_imem_rw_data_out__prev)
    goto L555;
K555:
  if (Core_datapath_loadstore__io_imem_rw_data_out != Core_datapath_loadstore__io_imem_rw_data_out__prev)
    goto L556;
K556:
  if (Core_dmem__io_core_data_out != Core_dmem__io_core_data_out__prev)
    goto L557;
K557:
  if (Core_datapath__io_dmem_data_out != Core_datapath__io_dmem_data_out__prev)
    goto L558;
K558:
  if (Core_datapath_loadstore__io_dmem_data_out != Core_datapath_loadstore__io_dmem_data_out__prev)
    goto L559;
K559:
  if (Core_datapath_loadstore__io_data_out != Core_datapath_loadstore__io_data_out__prev)
    goto L560;
K560:
  if (Core_datapath__mem_rd_data != Core_datapath__mem_rd_data__prev)
    goto L561;
K561:
  if (Core_datapath_regfile__io_rd_data != Core_datapath_regfile__io_rd_data__prev)
    goto L562;
K562:
  if (Core_datapath_regfile__dout2 != Core_datapath_regfile__dout2__prev)
    goto L563;
K563:
  if (Core_datapath_regfile__io_rs1_data != Core_datapath_regfile__io_rs1_data__prev)
    goto L564;
K564:
  if (Core_datapath__wb_rd_data != Core_datapath__wb_rd_data__prev)
    goto L565;
K565:
  if (Core_datapath_csr__io_rw_data_out != Core_datapath_csr__io_rw_data_out__prev)
    goto L566;
K566:
  if (Core_datapath__exe_rd_data != Core_datapath__exe_rd_data__prev)
    goto L567;
K567:
  if (Core_datapath__dec_rs1_data != Core_datapath__dec_rs1_data__prev)
    goto L568;
K568:
  if (Core_datapath__exe_reg_rs1_data != Core_datapath__exe_reg_rs1_data__prev)
    goto L569;
K569:
  if (Core_datapath_regfile__io_rs2_data != Core_datapath_regfile__io_rs2_data__prev)
    goto L570;
K570:
  if (Core_datapath__dec_rs2_data != Core_datapath__dec_rs2_data__prev)
    goto L571;
K571:
  if (Core_datapath__exe_reg_rs2_data != Core_datapath__exe_reg_rs2_data__prev)
    goto L572;
K572:
  if (Core_datapath__dec_imm_i != Core_datapath__dec_imm_i__prev)
    goto L573;
K573:
  if (Core_datapath__dec_imm_z != Core_datapath__dec_imm_z__prev)
    goto L574;
K574:
  if (Core_datapath__dec_imm_j != Core_datapath__dec_imm_j__prev)
    goto L575;
K575:
  if (Core_datapath__dec_imm_u != Core_datapath__dec_imm_u__prev)
    goto L576;
K576:
  if (Core_datapath__dec_imm_b != Core_datapath__dec_imm_b__prev)
    goto L577;
K577:
  if (Core_datapath__dec_imm_s != Core_datapath__dec_imm_s__prev)
    goto L578;
K578:
  if (Core_datapath__dec_imm != Core_datapath__dec_imm__prev)
    goto L579;
K579:
  if (Core_datapath__dec_csr_data != Core_datapath__dec_csr_data__prev)
    goto L580;
K580:
  if (Core_datapath__exe_csr_data != Core_datapath__exe_csr_data__prev)
    goto L581;
K581:
  if (Core_datapath__if_reg_pcs_3 != Core_datapath__if_reg_pcs_3__prev)
    goto L582;
K582:
  if (Core_datapath__if_reg_pcs_2 != Core_datapath__if_reg_pcs_2__prev)
    goto L583;
K583:
  if (Core_datapath__if_reg_pcs_1 != Core_datapath__if_reg_pcs_1__prev)
    goto L584;
K584:
  if (Core_datapath__dec_op1 != Core_datapath__dec_op1__prev)
    goto L585;
K585:
  if (Core_datapath__exe_reg_op1 != Core_datapath__exe_reg_op1__prev)
    goto L586;
K586:
  if (Core_datapath__dec_reg_pc4 != Core_datapath__dec_reg_pc4__prev)
    goto L587;
K587:
  if (Core_datapath__exe_reg_pc4 != Core_datapath__exe_reg_pc4__prev)
    goto L588;
K588:
  if (Core_datapath__mem_reg_rd_data != Core_datapath__mem_reg_rd_data__prev)
    goto L589;
K589:
  if (Core_datapath__wb_reg_rd_data != Core_datapath__wb_reg_rd_data__prev)
    goto L590;
K590:
  if (Core_datapath__dec_reg_inst != Core_datapath__dec_reg_inst__prev)
    goto L591;
K591:
  if (Core_datapath__dec_op2 != Core_datapath__dec_op2__prev)
    goto L592;
K592:
  if (Core_datapath__exe_reg_op2 != Core_datapath__exe_reg_op2__prev)
    goto L593;
K593:
  if (Core_datapath__if_reg_pcs_0 != Core_datapath__if_reg_pcs_0__prev)
    goto L594;
K594:
  if (Core_datapath__if_reg_pc != Core_datapath__if_reg_pc__prev)
    goto L595;
K595:
  if (Core_datapath__dec_reg_pc != Core_datapath__dec_reg_pc__prev)
    goto L596;
K596:
  if (Core_datapath__exe_reg_pc != Core_datapath__exe_reg_pc__prev)
    goto L597;
K597:
  if (Core_imem__io_bus_data_out != Core_imem__io_bus_data_out__prev)
    goto L598;
K598:
  if (Core__io_imem_data_out != Core__io_imem_data_out__prev)
    goto L599;
K599:
  if (Core_dmem__io_bus_data_out != Core_dmem__io_bus_data_out__prev)
    goto L600;
K600:
  if (Core__io_dmem_data_out != Core__io_dmem_data_out__prev)
    goto L601;
K601:
  if (Core_datapath_loadstore__io_bus_data_in != Core_datapath_loadstore__io_bus_data_in__prev)
    goto L602;
K602:
  if (Core_datapath__io_bus_data_in != Core_datapath__io_bus_data_in__prev)
    goto L603;
K603:
  if (Core__io_bus_data_in != Core__io_bus_data_in__prev)
    goto L604;
K604:
  if (Core_datapath_csr__io_host_to_host != Core_datapath_csr__io_host_to_host__prev)
    goto L605;
K605:
  if (Core_datapath__io_host_to_host != Core_datapath__io_host_to_host__prev)
    goto L606;
K606:
  if (Core__io_host_to_host != Core__io_host_to_host__prev)
    goto L607;
K607:
  if (Core__io_dmem_data_in != Core__io_dmem_data_in__prev)
    goto L608;
K608:
  if (Core__io_imem_data_in != Core__io_imem_data_in__prev)
    goto L609;
K609:
  if (Core_datapath_csr__status_0 != Core_datapath_csr__status_0__prev)
    goto L610;
K610:
  if (Core_datapath_csr__status_1 != Core_datapath_csr__status_1__prev)
    goto L611;
K611:
  if (Core_datapath_csr__status_2 != Core_datapath_csr__status_2__prev)
    goto L612;
K612:
  if (Core_datapath_csr__status_3 != Core_datapath_csr__status_3__prev)
    goto L613;
K613:
  if (Core_datapath_csr__data_out != Core_datapath_csr__data_out__prev)
    goto L614;
K614:
  if (Core_datapath_csr__data_in != Core_datapath_csr__data_in__prev)
    goto L615;
K615:
  if (Core_datapath_csr__reg_sup0_3 != Core_datapath_csr__reg_sup0_3__prev)
    goto L616;
K616:
  if (Core_datapath_csr__reg_sup0_2 != Core_datapath_csr__reg_sup0_2__prev)
    goto L617;
K617:
  if (Core_datapath_csr__reg_sup0_1 != Core_datapath_csr__reg_sup0_1__prev)
    goto L618;
K618:
  if (Core_datapath_csr__reg_sup0_0 != Core_datapath_csr__reg_sup0_0__prev)
    goto L619;
K619:
  if (Core_datapath_csr__reg_evecs_3 != Core_datapath_csr__reg_evecs_3__prev)
    goto L620;
K620:
  if (Core_datapath_csr__reg_evecs_2 != Core_datapath_csr__reg_evecs_2__prev)
    goto L621;
K621:
  if (Core_datapath_csr__reg_evecs_1 != Core_datapath_csr__reg_evecs_1__prev)
    goto L622;
K622:
  if (Core_datapath_csr__reg_evecs_0 != Core_datapath_csr__reg_evecs_0__prev)
    goto L623;
K623:
  if (Core_datapath_csr__reg_time != Core_datapath_csr__reg_time__prev)
    goto L624;
K624:
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
  Core_control__io_exe_valid__prev = Core_control__io_exe_valid;
  dat_dump<1>(f, Core_control__io_exe_valid, 0x29);
  goto K8;
L9:
  Core_datapath__io_control_exe_valid__prev = Core_datapath__io_control_exe_valid;
  dat_dump<1>(f, Core_datapath__io_control_exe_valid, 0x2a);
  goto K9;
L10:
  Core_datapath_csr__io_rw_valid__prev = Core_datapath_csr__io_rw_valid;
  dat_dump<1>(f, Core_datapath_csr__io_rw_valid, 0x2b);
  goto K10;
L11:
  Core_datapath_csr__int_expire__prev = Core_datapath_csr__int_expire;
  dat_dump<1>(f, Core_datapath_csr__int_expire, 0x2c);
  goto K11;
L12:
  Core_datapath_csr__io_int_expire__prev = Core_datapath_csr__io_int_expire;
  dat_dump<1>(f, Core_datapath_csr__io_int_expire, 0x2d);
  goto K12;
L13:
  Core_datapath__io_control_exe_int_expire__prev = Core_datapath__io_control_exe_int_expire;
  dat_dump<1>(f, Core_datapath__io_control_exe_int_expire, 0x2e);
  goto K13;
L14:
  Core_control__io_exe_int_expire__prev = Core_control__io_exe_int_expire;
  dat_dump<1>(f, Core_control__io_exe_int_expire, 0x2f);
  goto K14;
L15:
  Core_datapath_csr__exc_expire__prev = Core_datapath_csr__exc_expire;
  dat_dump<1>(f, Core_datapath_csr__exc_expire, 0x30);
  goto K15;
L16:
  Core_datapath_csr__io_exc_expire__prev = Core_datapath_csr__io_exc_expire;
  dat_dump<1>(f, Core_datapath_csr__io_exc_expire, 0x31);
  goto K16;
L17:
  Core_datapath__io_control_exe_exc_expire__prev = Core_datapath__io_control_exe_exc_expire;
  dat_dump<1>(f, Core_datapath__io_control_exe_exc_expire, 0x32);
  goto K17;
L18:
  Core_control__io_exe_exc_expire__prev = Core_control__io_exe_exc_expire;
  dat_dump<1>(f, Core_control__io_exe_exc_expire, 0x33);
  goto K18;
L19:
  Core_control__exe_any_exc__prev = Core_control__exe_any_exc;
  dat_dump<1>(f, Core_control__exe_any_exc, 0x34);
  goto K19;
L20:
  Core_control__exe_kill__prev = Core_control__exe_kill;
  dat_dump<1>(f, Core_control__exe_kill, 0x35);
  goto K20;
L21:
  Core_control__io_exe_kill__prev = Core_control__io_exe_kill;
  dat_dump<1>(f, Core_control__io_exe_kill, 0x36);
  goto K21;
L22:
  Core_datapath__io_control_exe_kill__prev = Core_datapath__io_control_exe_kill;
  dat_dump<1>(f, Core_datapath__io_control_exe_kill, 0x37);
  goto K22;
L23:
  Core_datapath_loadstore__io_kill__prev = Core_datapath_loadstore__io_kill;
  dat_dump<1>(f, Core_datapath_loadstore__io_kill, 0x38);
  goto K23;
L24:
  Core_datapath_loadstore__store_fault__prev = Core_datapath_loadstore__store_fault;
  dat_dump<1>(f, Core_datapath_loadstore__store_fault, 0x39);
  goto K24;
L25:
  Core_control__exe_store__prev = Core_control__exe_store;
  dat_dump<1>(f, Core_control__exe_store, 0x3a);
  goto K25;
L26:
  Core_control__io_exe_store__prev = Core_control__io_exe_store;
  dat_dump<1>(f, Core_control__io_exe_store, 0x3b);
  goto K26;
L27:
  Core_datapath__io_control_exe_store__prev = Core_datapath__io_control_exe_store;
  dat_dump<1>(f, Core_datapath__io_control_exe_store, 0x3c);
  goto K27;
L28:
  Core_datapath_loadstore__io_store__prev = Core_datapath_loadstore__io_store;
  dat_dump<1>(f, Core_datapath_loadstore__io_store, 0x3d);
  goto K28;
L29:
  Core_datapath_loadstore__store_misaligned__prev = Core_datapath_loadstore__store_misaligned;
  dat_dump<1>(f, Core_datapath_loadstore__store_misaligned, 0x3e);
  goto K29;
L30:
  Core_datapath_loadstore__bus_op__prev = Core_datapath_loadstore__bus_op;
  dat_dump<1>(f, Core_datapath_loadstore__bus_op, 0x3f);
  goto K30;
L31:
  Core_datapath_loadstore__imem_op__prev = Core_datapath_loadstore__imem_op;
  dat_dump<1>(f, Core_datapath_loadstore__imem_op, 0x40);
  goto K31;
L32:
  Core_datapath_loadstore__dmem_op__prev = Core_datapath_loadstore__dmem_op;
  dat_dump<1>(f, Core_datapath_loadstore__dmem_op, 0x41);
  goto K32;
L33:
  Core_datapath_loadstore__permission__prev = Core_datapath_loadstore__permission;
  dat_dump<1>(f, Core_datapath_loadstore__permission, 0x42);
  goto K33;
L34:
  Core_datapath_loadstore__write__prev = Core_datapath_loadstore__write;
  dat_dump<1>(f, Core_datapath_loadstore__write, 0x43);
  goto K34;
L35:
  Core_datapath_loadstore__io_dmem_byte_write_0__prev = Core_datapath_loadstore__io_dmem_byte_write_0;
  dat_dump<1>(f, Core_datapath_loadstore__io_dmem_byte_write_0, 0x44);
  goto K35;
L36:
  Core_datapath__io_dmem_byte_write_0__prev = Core_datapath__io_dmem_byte_write_0;
  dat_dump<1>(f, Core_datapath__io_dmem_byte_write_0, 0x45);
  goto K36;
L37:
  Core_dmem__io_core_byte_write_0__prev = Core_dmem__io_core_byte_write_0;
  dat_dump<1>(f, Core_dmem__io_core_byte_write_0, 0x46);
  goto K37;
L38:
  Core_datapath_loadstore__io_dmem_byte_write_1__prev = Core_datapath_loadstore__io_dmem_byte_write_1;
  dat_dump<1>(f, Core_datapath_loadstore__io_dmem_byte_write_1, 0x47);
  goto K38;
L39:
  Core_datapath__io_dmem_byte_write_1__prev = Core_datapath__io_dmem_byte_write_1;
  dat_dump<1>(f, Core_datapath__io_dmem_byte_write_1, 0x48);
  goto K39;
L40:
  Core_dmem__io_core_byte_write_1__prev = Core_dmem__io_core_byte_write_1;
  dat_dump<1>(f, Core_dmem__io_core_byte_write_1, 0x49);
  goto K40;
L41:
  Core_datapath_loadstore__io_dmem_byte_write_2__prev = Core_datapath_loadstore__io_dmem_byte_write_2;
  dat_dump<1>(f, Core_datapath_loadstore__io_dmem_byte_write_2, 0x4a);
  goto K41;
L42:
  Core_datapath__io_dmem_byte_write_2__prev = Core_datapath__io_dmem_byte_write_2;
  dat_dump<1>(f, Core_datapath__io_dmem_byte_write_2, 0x4b);
  goto K42;
L43:
  Core_dmem__io_core_byte_write_2__prev = Core_dmem__io_core_byte_write_2;
  dat_dump<1>(f, Core_dmem__io_core_byte_write_2, 0x4c);
  goto K43;
L44:
  Core_datapath_loadstore__io_dmem_byte_write_3__prev = Core_datapath_loadstore__io_dmem_byte_write_3;
  dat_dump<1>(f, Core_datapath_loadstore__io_dmem_byte_write_3, 0x4d);
  goto K44;
L45:
  Core_datapath__io_dmem_byte_write_3__prev = Core_datapath__io_dmem_byte_write_3;
  dat_dump<1>(f, Core_datapath__io_dmem_byte_write_3, 0x4e);
  goto K45;
L46:
  Core_dmem__io_core_byte_write_3__prev = Core_dmem__io_core_byte_write_3;
  dat_dump<1>(f, Core_dmem__io_core_byte_write_3, 0x4f);
  goto K46;
L47:
  Core_control__exe_load__prev = Core_control__exe_load;
  dat_dump<1>(f, Core_control__exe_load, 0x50);
  goto K47;
L48:
  Core_control__io_exe_load__prev = Core_control__io_exe_load;
  dat_dump<1>(f, Core_control__io_exe_load, 0x51);
  goto K48;
L49:
  Core_datapath__io_control_exe_load__prev = Core_datapath__io_control_exe_load;
  dat_dump<1>(f, Core_datapath__io_control_exe_load, 0x52);
  goto K49;
L50:
  Core_datapath_loadstore__io_load__prev = Core_datapath_loadstore__io_load;
  dat_dump<1>(f, Core_datapath_loadstore__io_load, 0x53);
  goto K50;
L51:
  Core_datapath_loadstore__io_dmem_enable__prev = Core_datapath_loadstore__io_dmem_enable;
  dat_dump<1>(f, Core_datapath_loadstore__io_dmem_enable, 0x54);
  goto K51;
L52:
  Core_datapath__io_dmem_enable__prev = Core_datapath__io_dmem_enable;
  dat_dump<1>(f, Core_datapath__io_dmem_enable, 0x55);
  goto K52;
L53:
  Core_dmem__io_core_enable__prev = Core_dmem__io_core_enable;
  dat_dump<1>(f, Core_dmem__io_core_enable, 0x56);
  goto K53;
L54:
  Core_control__dec_load__prev = Core_control__dec_load;
  dat_dump<1>(f, Core_control__dec_load, 0x57);
  goto K54;
L55:
  Core_control__dec_fence_i__prev = Core_control__dec_fence_i;
  dat_dump<1>(f, Core_control__dec_fence_i, 0x58);
  goto K55;
L56:
  Core_control__dec_stall__prev = Core_control__dec_stall;
  dat_dump<1>(f, Core_control__dec_stall, 0x59);
  goto K56;
L57:
  Core_control__if_pre_valid__prev = Core_control__if_pre_valid;
  dat_dump<1>(f, Core_control__if_pre_valid, 0x5a);
  goto K57;
L58:
  Core_datapath_csr__io_expire__prev = Core_datapath_csr__io_expire;
  dat_dump<1>(f, Core_datapath_csr__io_expire, 0x5b);
  goto K58;
L59:
  Core_datapath__io_control_exe_expire__prev = Core_datapath__io_control_exe_expire;
  dat_dump<1>(f, Core_datapath__io_control_exe_expire, 0x5c);
  goto K59;
L60:
  Core_control__io_exe_expire__prev = Core_control__io_exe_expire;
  dat_dump<1>(f, Core_control__io_exe_expire, 0x5d);
  goto K60;
L61:
  Core_control__exe_du__prev = Core_control__exe_du;
  dat_dump<1>(f, Core_control__exe_du, 0x5e);
  goto K61;
L62:
  Core_datapath__exe_ltu__prev = Core_datapath__exe_ltu;
  dat_dump<1>(f, Core_datapath__exe_ltu, 0x5f);
  goto K62;
L63:
  Core_datapath__exe_lt__prev = Core_datapath__exe_lt;
  dat_dump<1>(f, Core_datapath__exe_lt, 0x60);
  goto K63;
L64:
  Core_datapath__exe_eq__prev = Core_datapath__exe_eq;
  dat_dump<1>(f, Core_datapath__exe_eq, 0x61);
  goto K64;
L65:
  Core_datapath__exe_br_cond__prev = Core_datapath__exe_br_cond;
  dat_dump<1>(f, Core_datapath__exe_br_cond, 0x62);
  goto K65;
L66:
  Core_datapath__io_control_exe_br_cond__prev = Core_datapath__io_control_exe_br_cond;
  dat_dump<1>(f, Core_datapath__io_control_exe_br_cond, 0x63);
  goto K66;
L67:
  Core_control__io_exe_br_cond__prev = Core_control__io_exe_br_cond;
  dat_dump<1>(f, Core_control__io_exe_br_cond, 0x64);
  goto K67;
L68:
  Core_control__exe_brjmp__prev = Core_control__exe_brjmp;
  dat_dump<1>(f, Core_control__exe_brjmp, 0x65);
  goto K68;
L69:
  Core_control__next_valid__prev = Core_control__next_valid;
  dat_dump<1>(f, Core_control__next_valid, 0x66);
  goto K69;
L70:
  Core_control__io_next_valid__prev = Core_control__io_next_valid;
  dat_dump<1>(f, Core_control__io_next_valid, 0x67);
  goto K70;
L71:
  Core_datapath__io_control_next_valid__prev = Core_datapath__io_control_next_valid;
  dat_dump<1>(f, Core_datapath__io_control_next_valid, 0x68);
  goto K71;
L72:
  Core_datapath__io_imem_r_enable__prev = Core_datapath__io_imem_r_enable;
  dat_dump<1>(f, Core_datapath__io_imem_r_enable, 0x69);
  goto K72;
L73:
  Core_imem__io_core_r_enable__prev = Core_imem__io_core_r_enable;
  dat_dump<1>(f, Core_imem__io_core_r_enable, 0x6a);
  goto K73;
L74:
  Core_datapath_loadstore__io_imem_rw_write__prev = Core_datapath_loadstore__io_imem_rw_write;
  dat_dump<1>(f, Core_datapath_loadstore__io_imem_rw_write, 0x6b);
  goto K74;
L75:
  Core_datapath__io_imem_rw_write__prev = Core_datapath__io_imem_rw_write;
  dat_dump<1>(f, Core_datapath__io_imem_rw_write, 0x6c);
  goto K75;
L76:
  Core_imem__io_core_rw_write__prev = Core_imem__io_core_rw_write;
  dat_dump<1>(f, Core_imem__io_core_rw_write, 0x6d);
  goto K76;
L77:
  Core_datapath_loadstore__io_imem_rw_enable__prev = Core_datapath_loadstore__io_imem_rw_enable;
  dat_dump<1>(f, Core_datapath_loadstore__io_imem_rw_enable, 0x6e);
  goto K77;
L78:
  Core_datapath__io_imem_rw_enable__prev = Core_datapath__io_imem_rw_enable;
  dat_dump<1>(f, Core_datapath__io_imem_rw_enable, 0x6f);
  goto K78;
L79:
  Core_imem__io_core_rw_enable__prev = Core_imem__io_core_rw_enable;
  dat_dump<1>(f, Core_imem__io_core_rw_enable, 0x70);
  goto K79;
L80:
  Core_datapath_csr__io_kill__prev = Core_datapath_csr__io_kill;
  dat_dump<1>(f, Core_datapath_csr__io_kill, 0x71);
  goto K80;
L81:
  Core_datapath_csr__priv_fault__prev = Core_datapath_csr__priv_fault;
  dat_dump<1>(f, Core_datapath_csr__priv_fault, 0x72);
  goto K81;
L82:
  Core_control__exe_csr_write__prev = Core_control__exe_csr_write;
  dat_dump<1>(f, Core_control__exe_csr_write, 0x73);
  goto K82;
L83:
  Core_control__io_exe_csr_write__prev = Core_control__io_exe_csr_write;
  dat_dump<1>(f, Core_control__io_exe_csr_write, 0x74);
  goto K83;
L84:
  Core_datapath__io_control_exe_csr_write__prev = Core_datapath__io_control_exe_csr_write;
  dat_dump<1>(f, Core_datapath__io_control_exe_csr_write, 0x75);
  goto K84;
L85:
  Core_datapath_csr__io_rw_write__prev = Core_datapath_csr__io_rw_write;
  dat_dump<1>(f, Core_datapath_csr__io_rw_write, 0x76);
  goto K85;
L86:
  Core_datapath_csr__write__prev = Core_datapath_csr__write;
  dat_dump<1>(f, Core_datapath_csr__write, 0x77);
  goto K86;
L87:
  Core__io_int_exts_0__prev = Core__io_int_exts_0;
  dat_dump<1>(f, Core__io_int_exts_0, 0x78);
  goto K87;
L88:
  Core_datapath__io_int_exts_0__prev = Core_datapath__io_int_exts_0;
  dat_dump<1>(f, Core_datapath__io_int_exts_0, 0x79);
  goto K88;
L89:
  Core_datapath_csr__io_int_exts_0__prev = Core_datapath_csr__io_int_exts_0;
  dat_dump<1>(f, Core_datapath_csr__io_int_exts_0, 0x7a);
  goto K89;
L90:
  Core__io_int_exts_1__prev = Core__io_int_exts_1;
  dat_dump<1>(f, Core__io_int_exts_1, 0x7b);
  goto K90;
L91:
  Core_datapath__io_int_exts_1__prev = Core_datapath__io_int_exts_1;
  dat_dump<1>(f, Core_datapath__io_int_exts_1, 0x7c);
  goto K91;
L92:
  Core_datapath_csr__io_int_exts_1__prev = Core_datapath_csr__io_int_exts_1;
  dat_dump<1>(f, Core_datapath_csr__io_int_exts_1, 0x7d);
  goto K92;
L93:
  Core__io_int_exts_2__prev = Core__io_int_exts_2;
  dat_dump<1>(f, Core__io_int_exts_2, 0x7e);
  goto K93;
L94:
  Core_datapath__io_int_exts_2__prev = Core_datapath__io_int_exts_2;
  dat_dump<2>(f, Core_datapath__io_int_exts_2, 0x2221);
  goto K94;
L95:
  Core_datapath_csr__io_int_exts_2__prev = Core_datapath_csr__io_int_exts_2;
  dat_dump<2>(f, Core_datapath_csr__io_int_exts_2, 0x2222);
  goto K95;
L96:
  Core__io_int_exts_3__prev = Core__io_int_exts_3;
  dat_dump<2>(f, Core__io_int_exts_3, 0x2223);
  goto K96;
L97:
  Core_datapath__io_int_exts_3__prev = Core_datapath__io_int_exts_3;
  dat_dump<2>(f, Core_datapath__io_int_exts_3, 0x2224);
  goto K97;
L98:
  Core_datapath_csr__io_int_exts_3__prev = Core_datapath_csr__io_int_exts_3;
  dat_dump<2>(f, Core_datapath_csr__io_int_exts_3, 0x2225);
  goto K98;
L99:
  Core_datapath__reset__prev = Core_datapath__reset;
  dat_dump<2>(f, Core_datapath__reset, 0x2226);
  goto K99;
L100:
  Core_datapath_csr__reset__prev = Core_datapath_csr__reset;
  dat_dump<2>(f, Core_datapath_csr__reset, 0x2227);
  goto K100;
L101:
  Core_datapath_csr__reg_msip_1__prev = Core_datapath_csr__reg_msip_1;
  dat_dump<2>(f, Core_datapath_csr__reg_msip_1, 0x2228);
  goto K101;
L102:
  Core_datapath_csr__reg_mtie_3__prev = Core_datapath_csr__reg_mtie_3;
  dat_dump<2>(f, Core_datapath_csr__reg_mtie_3, 0x2229);
  goto K102;
L103:
  Core_datapath_csr__reg_ie1_3__prev = Core_datapath_csr__reg_ie1_3;
  dat_dump<2>(f, Core_datapath_csr__reg_ie1_3, 0x222a);
  goto K103;
L104:
  Core_datapath_loadstore__io_store_misaligned__prev = Core_datapath_loadstore__io_store_misaligned;
  dat_dump<2>(f, Core_datapath_loadstore__io_store_misaligned, 0x222b);
  goto K104;
L105:
  Core_datapath__io_control_exe_exc_store_misaligned__prev = Core_datapath__io_control_exe_exc_store_misaligned;
  dat_dump<2>(f, Core_datapath__io_control_exe_exc_store_misaligned, 0x222c);
  goto K105;
L106:
  Core_control__io_exe_exc_store_misaligned__prev = Core_control__io_exe_exc_store_misaligned;
  dat_dump<2>(f, Core_control__io_exe_exc_store_misaligned, 0x222d);
  goto K106;
L107:
  Core_datapath_loadstore__load_misaligned__prev = Core_datapath_loadstore__load_misaligned;
  dat_dump<2>(f, Core_datapath_loadstore__load_misaligned, 0x222e);
  goto K107;
L108:
  Core_datapath_loadstore__io_load_misaligned__prev = Core_datapath_loadstore__io_load_misaligned;
  dat_dump<2>(f, Core_datapath_loadstore__io_load_misaligned, 0x222f);
  goto K108;
L109:
  Core_datapath__io_control_exe_exc_load_misaligned__prev = Core_datapath__io_control_exe_exc_load_misaligned;
  dat_dump<2>(f, Core_datapath__io_control_exe_exc_load_misaligned, 0x2230);
  goto K109;
L110:
  Core_control__io_exe_exc_load_misaligned__prev = Core_control__io_exe_exc_load_misaligned;
  dat_dump<2>(f, Core_control__io_exe_exc_load_misaligned, 0x2231);
  goto K110;
L111:
  Core_datapath_csr__io_priv_fault__prev = Core_datapath_csr__io_priv_fault;
  dat_dump<2>(f, Core_datapath_csr__io_priv_fault, 0x2232);
  goto K111;
L112:
  Core_datapath__io_control_exe_exc_priv_inst__prev = Core_datapath__io_control_exe_exc_priv_inst;
  dat_dump<2>(f, Core_datapath__io_control_exe_exc_priv_inst, 0x2233);
  goto K112;
L113:
  Core_control__io_exe_exc_priv_inst__prev = Core_control__io_exe_exc_priv_inst;
  dat_dump<2>(f, Core_control__io_exe_exc_priv_inst, 0x2234);
  goto K113;
L114:
  Core_control__exe_inst_exc__prev = Core_control__exe_inst_exc;
  dat_dump<2>(f, Core_control__exe_inst_exc, 0x2235);
  goto K114;
L115:
  Core_control__exe_exception__prev = Core_control__exe_exception;
  dat_dump<2>(f, Core_control__exe_exception, 0x2236);
  goto K115;
L116:
  Core_control__io_exe_exception__prev = Core_control__io_exe_exception;
  dat_dump<2>(f, Core_control__io_exe_exception, 0x2237);
  goto K116;
L117:
  Core_datapath__io_control_exe_exception__prev = Core_datapath__io_control_exe_exception;
  dat_dump<2>(f, Core_datapath__io_control_exe_exception, 0x2238);
  goto K117;
L118:
  Core_datapath_csr__io_exception__prev = Core_datapath_csr__io_exception;
  dat_dump<2>(f, Core_datapath_csr__io_exception, 0x2239);
  goto K118;
L119:
  Core_datapath_csr__reg_ie_3__prev = Core_datapath_csr__reg_ie_3;
  dat_dump<2>(f, Core_datapath_csr__reg_ie_3, 0x223a);
  goto K119;
L120:
  Core_datapath_csr__reg_msip_3__prev = Core_datapath_csr__reg_msip_3;
  dat_dump<2>(f, Core_datapath_csr__reg_msip_3, 0x223b);
  goto K120;
L121:
  Core_datapath_csr__reg_mtie_2__prev = Core_datapath_csr__reg_mtie_2;
  dat_dump<2>(f, Core_datapath_csr__reg_mtie_2, 0x223c);
  goto K121;
L122:
  Core_datapath_csr__reg_ie1_2__prev = Core_datapath_csr__reg_ie1_2;
  dat_dump<2>(f, Core_datapath_csr__reg_ie1_2, 0x223d);
  goto K122;
L123:
  Core_datapath_csr__reg_ie_2__prev = Core_datapath_csr__reg_ie_2;
  dat_dump<2>(f, Core_datapath_csr__reg_ie_2, 0x223e);
  goto K123;
L124:
  Core_datapath_csr__reg_msip_2__prev = Core_datapath_csr__reg_msip_2;
  dat_dump<2>(f, Core_datapath_csr__reg_msip_2, 0x223f);
  goto K124;
L125:
  Core_datapath_csr__reg_mtie_1__prev = Core_datapath_csr__reg_mtie_1;
  dat_dump<2>(f, Core_datapath_csr__reg_mtie_1, 0x2240);
  goto K125;
L126:
  Core_datapath_csr__reg_ie1_1__prev = Core_datapath_csr__reg_ie1_1;
  dat_dump<2>(f, Core_datapath_csr__reg_ie1_1, 0x2241);
  goto K126;
L127:
  Core_datapath_csr__reg_ie_1__prev = Core_datapath_csr__reg_ie_1;
  dat_dump<2>(f, Core_datapath_csr__reg_ie_1, 0x2242);
  goto K127;
L128:
  Core_datapath_csr__reg_mtie_0__prev = Core_datapath_csr__reg_mtie_0;
  dat_dump<2>(f, Core_datapath_csr__reg_mtie_0, 0x2243);
  goto K128;
L129:
  Core_datapath_csr__reg_ie1_0__prev = Core_datapath_csr__reg_ie1_0;
  dat_dump<2>(f, Core_datapath_csr__reg_ie1_0, 0x2244);
  goto K129;
L130:
  Core_datapath_csr__reg_ie_0__prev = Core_datapath_csr__reg_ie_0;
  dat_dump<2>(f, Core_datapath_csr__reg_ie_0, 0x2245);
  goto K130;
L131:
  Core__io_gpio_in_3__prev = Core__io_gpio_in_3;
  dat_dump<2>(f, Core__io_gpio_in_3, 0x2246);
  goto K131;
L132:
  Core_datapath__io_gpio_in_3__prev = Core_datapath__io_gpio_in_3;
  dat_dump<2>(f, Core_datapath__io_gpio_in_3, 0x2247);
  goto K132;
L133:
  Core_datapath_csr__io_gpio_in_3__prev = Core_datapath_csr__io_gpio_in_3;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_in_3, 0x2248);
  goto K133;
L134:
  Core_datapath_csr__reg_gpis_3__prev = Core_datapath_csr__reg_gpis_3;
  dat_dump<2>(f, Core_datapath_csr__reg_gpis_3, 0x2249);
  goto K134;
L135:
  Core__io_gpio_in_2__prev = Core__io_gpio_in_2;
  dat_dump<2>(f, Core__io_gpio_in_2, 0x224a);
  goto K135;
L136:
  Core_datapath__io_gpio_in_2__prev = Core_datapath__io_gpio_in_2;
  dat_dump<2>(f, Core_datapath__io_gpio_in_2, 0x224b);
  goto K136;
L137:
  Core_datapath_csr__io_gpio_in_2__prev = Core_datapath_csr__io_gpio_in_2;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_in_2, 0x224c);
  goto K137;
L138:
  Core_datapath_csr__reg_gpis_2__prev = Core_datapath_csr__reg_gpis_2;
  dat_dump<2>(f, Core_datapath_csr__reg_gpis_2, 0x224d);
  goto K138;
L139:
  Core__io_gpio_in_1__prev = Core__io_gpio_in_1;
  dat_dump<2>(f, Core__io_gpio_in_1, 0x224e);
  goto K139;
L140:
  Core_datapath__io_gpio_in_1__prev = Core_datapath__io_gpio_in_1;
  dat_dump<2>(f, Core_datapath__io_gpio_in_1, 0x224f);
  goto K140;
L141:
  Core_datapath_csr__io_gpio_in_1__prev = Core_datapath_csr__io_gpio_in_1;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_in_1, 0x2250);
  goto K141;
L142:
  Core_datapath_csr__reg_gpis_1__prev = Core_datapath_csr__reg_gpis_1;
  dat_dump<2>(f, Core_datapath_csr__reg_gpis_1, 0x2251);
  goto K142;
L143:
  Core__io_gpio_in_0__prev = Core__io_gpio_in_0;
  dat_dump<2>(f, Core__io_gpio_in_0, 0x2252);
  goto K143;
L144:
  Core_datapath__io_gpio_in_0__prev = Core_datapath__io_gpio_in_0;
  dat_dump<2>(f, Core_datapath__io_gpio_in_0, 0x2253);
  goto K144;
L145:
  Core_datapath_csr__io_gpio_in_0__prev = Core_datapath_csr__io_gpio_in_0;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_in_0, 0x2254);
  goto K145;
L146:
  Core_datapath_csr__reg_gpis_0__prev = Core_datapath_csr__reg_gpis_0;
  dat_dump<2>(f, Core_datapath_csr__reg_gpis_0, 0x2255);
  goto K146;
L147:
  Core_control__exe_valid__prev = Core_control__exe_valid;
  dat_dump<2>(f, Core_control__exe_valid, 0x2256);
  goto K147;
L148:
  Core_control__exe_sleep__prev = Core_control__exe_sleep;
  dat_dump<2>(f, Core_control__exe_sleep, 0x2257);
  goto K148;
L149:
  Core_control__io_exe_sleep__prev = Core_control__io_exe_sleep;
  dat_dump<2>(f, Core_control__io_exe_sleep, 0x2258);
  goto K149;
L150:
  Core_datapath__io_control_exe_sleep__prev = Core_datapath__io_control_exe_sleep;
  dat_dump<2>(f, Core_datapath__io_control_exe_sleep, 0x2259);
  goto K150;
L151:
  Core_datapath_csr__io_sleep__prev = Core_datapath_csr__io_sleep;
  dat_dump<2>(f, Core_datapath_csr__io_sleep, 0x225a);
  goto K151;
L152:
  Core_datapath_csr__sleep__prev = Core_datapath_csr__sleep;
  dat_dump<2>(f, Core_datapath_csr__sleep, 0x225b);
  goto K152;
L153:
  Core_datapath_csr__wake_1__prev = Core_datapath_csr__wake_1;
  dat_dump<2>(f, Core_datapath_csr__wake_1, 0x225c);
  goto K153;
L154:
  Core_datapath_csr__wake_3__prev = Core_datapath_csr__wake_3;
  dat_dump<2>(f, Core_datapath_csr__wake_3, 0x225d);
  goto K154;
L155:
  Core_control__exe_ee__prev = Core_control__exe_ee;
  dat_dump<2>(f, Core_control__exe_ee, 0x225e);
  goto K155;
L156:
  Core_control__io_exe_ee__prev = Core_control__io_exe_ee;
  dat_dump<2>(f, Core_control__io_exe_ee, 0x225f);
  goto K156;
L157:
  Core_datapath__io_control_exe_ee__prev = Core_datapath__io_control_exe_ee;
  dat_dump<2>(f, Core_datapath__io_control_exe_ee, 0x2260);
  goto K157;
L158:
  Core_datapath_csr__io_ee__prev = Core_datapath_csr__io_ee;
  dat_dump<2>(f, Core_datapath_csr__io_ee, 0x2261);
  goto K158;
L159:
  Core_control__exe_ie__prev = Core_control__exe_ie;
  dat_dump<2>(f, Core_control__exe_ie, 0x2262);
  goto K159;
L160:
  Core_control__io_exe_ie__prev = Core_control__io_exe_ie;
  dat_dump<2>(f, Core_control__io_exe_ie, 0x2263);
  goto K160;
L161:
  Core_datapath__io_control_exe_ie__prev = Core_datapath__io_control_exe_ie;
  dat_dump<2>(f, Core_datapath__io_control_exe_ie, 0x2264);
  goto K161;
L162:
  Core_datapath_csr__io_ie__prev = Core_datapath_csr__io_ie;
  dat_dump<2>(f, Core_datapath_csr__io_ie, 0x2265);
  goto K162;
L163:
  Core_datapath_csr__wake_2__prev = Core_datapath_csr__wake_2;
  dat_dump<2>(f, Core_datapath_csr__wake_2, 0x2266);
  goto K163;
L164:
  Core_datapath_csr__wake_0__prev = Core_datapath_csr__wake_0;
  dat_dump<2>(f, Core_datapath_csr__wake_0, 0x2267);
  goto K164;
L165:
  Core_datapath_csr__reg_msip_0__prev = Core_datapath_csr__reg_msip_0;
  dat_dump<2>(f, Core_datapath_csr__reg_msip_0, 0x2268);
  goto K165;
L166:
  Core_datapath_loadstore__io_imem_r_enable__prev = Core_datapath_loadstore__io_imem_r_enable;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_r_enable, 0x2269);
  goto K166;
L167:
  Core_datapath_loadstore__dmem_op_reg__prev = Core_datapath_loadstore__dmem_op_reg;
  dat_dump<2>(f, Core_datapath_loadstore__dmem_op_reg, 0x226a);
  goto K167;
L168:
  Core_datapath_loadstore__imem_op_reg__prev = Core_datapath_loadstore__imem_op_reg;
  dat_dump<2>(f, Core_datapath_loadstore__imem_op_reg, 0x226b);
  goto K168;
L169:
  Core_control__mem_rd_write__prev = Core_control__mem_rd_write;
  dat_dump<2>(f, Core_control__mem_rd_write, 0x226c);
  goto K169;
L170:
  Core_control__io_mem_rd_write__prev = Core_control__io_mem_rd_write;
  dat_dump<2>(f, Core_control__io_mem_rd_write, 0x226d);
  goto K170;
L171:
  Core_datapath__io_control_mem_rd_write__prev = Core_datapath__io_control_mem_rd_write;
  dat_dump<2>(f, Core_datapath__io_control_mem_rd_write, 0x226e);
  goto K171;
L172:
  Core_datapath_regfile__io_rd_enable__prev = Core_datapath_regfile__io_rd_enable;
  dat_dump<2>(f, Core_datapath_regfile__io_rd_enable, 0x226f);
  goto K172;
L173:
  Core_control__reset__prev = Core_control__reset;
  dat_dump<2>(f, Core_control__reset, 0x2270);
  goto K173;
L174:
  Core_control_scheduler__reset__prev = Core_control_scheduler__reset;
  dat_dump<2>(f, Core_control_scheduler__reset, 0x2271);
  goto K174;
L175:
  Core_control_scheduler__R191__prev = Core_control_scheduler__R191;
  dat_dump<2>(f, Core_control_scheduler__R191, 0x2272);
  goto K175;
L176:
  Core_control_scheduler__R185__prev = Core_control_scheduler__R185;
  dat_dump<2>(f, Core_control_scheduler__R185, 0x2273);
  goto K176;
L177:
  Core_control_scheduler__R180__prev = Core_control_scheduler__R180;
  dat_dump<2>(f, Core_control_scheduler__R180, 0x2274);
  goto K177;
L178:
  Core_control_scheduler__R111__prev = Core_control_scheduler__R111;
  dat_dump<2>(f, Core_control_scheduler__R111, 0x2275);
  goto K178;
L179:
  Core_control_scheduler__R86__prev = Core_control_scheduler__R86;
  dat_dump<2>(f, Core_control_scheduler__R86, 0x2276);
  goto K179;
L180:
  Core_control_scheduler__R71__prev = Core_control_scheduler__R71;
  dat_dump<2>(f, Core_control_scheduler__R71, 0x2277);
  goto K180;
L181:
  Core_control_scheduler__R65__prev = Core_control_scheduler__R65;
  dat_dump<2>(f, Core_control_scheduler__R65, 0x2278);
  goto K181;
L182:
  Core_control_scheduler__R60__prev = Core_control_scheduler__R60;
  dat_dump<2>(f, Core_control_scheduler__R60, 0x2279);
  goto K182;
L183:
  Core_control_scheduler__R48__prev = Core_control_scheduler__R48;
  dat_dump<2>(f, Core_control_scheduler__R48, 0x227a);
  goto K183;
L184:
  Core_control_scheduler__R34__prev = Core_control_scheduler__R34;
  dat_dump<2>(f, Core_control_scheduler__R34, 0x227b);
  goto K184;
L185:
  Core_control__mem_reg_exception__prev = Core_control__mem_reg_exception;
  dat_dump<2>(f, Core_control__mem_reg_exception, 0x227c);
  goto K185;
L186:
  Core_control__wb_reg_rd_write__prev = Core_control__wb_reg_rd_write;
  dat_dump<2>(f, Core_control__wb_reg_rd_write, 0x227d);
  goto K186;
L187:
  Core_control__exe_reg_load__prev = Core_control__exe_reg_load;
  dat_dump<2>(f, Core_control__exe_reg_load, 0x227e);
  goto K187;
L188:
  Core_control__dec_store__prev = Core_control__dec_store;
  dat_dump<2>(f, Core_control__dec_store, 0x2321);
  goto K188;
L189:
  Core_control__exe_reg_store__prev = Core_control__exe_reg_store;
  dat_dump<2>(f, Core_control__exe_reg_store, 0x2322);
  goto K189;
L190:
  Core_control__dec_csr__prev = Core_control__dec_csr;
  dat_dump<2>(f, Core_control__dec_csr, 0x2323);
  goto K190;
L191:
  Core_control__exe_reg_csr_write__prev = Core_control__exe_reg_csr_write;
  dat_dump<2>(f, Core_control__exe_reg_csr_write, 0x2324);
  goto K191;
L192:
  Core_control__dec_reg_cause__prev = Core_control__dec_reg_cause;
  dat_dump<2>(f, Core_control__dec_reg_cause, 0x2325);
  goto K192;
L193:
  Core_control__dec_scall__prev = Core_control__dec_scall;
  dat_dump<2>(f, Core_control__dec_scall, 0x2326);
  goto K193;
L194:
  Core_control__dec_ie__prev = Core_control__dec_ie;
  dat_dump<2>(f, Core_control__dec_ie, 0x2327);
  goto K194;
L195:
  Core_control__dec_du__prev = Core_control__dec_du;
  dat_dump<2>(f, Core_control__dec_du, 0x2328);
  goto K195;
L196:
  Core_control__dec_legal__prev = Core_control__dec_legal;
  dat_dump<2>(f, Core_control__dec_legal, 0x2329);
  goto K196;
L197:
  Core_control__R179__prev = Core_control__R179;
  dat_dump<2>(f, Core_control__R179, 0x232a);
  goto K197;
L198:
  Core_control__R172__prev = Core_control__R172;
  dat_dump<2>(f, Core_control__R172, 0x232b);
  goto K198;
L199:
  Core_control__exe_reg_sret__prev = Core_control__exe_reg_sret;
  dat_dump<2>(f, Core_control__exe_reg_sret, 0x232c);
  goto K199;
L200:
  Core_control__dec_rd_en__prev = Core_control__dec_rd_en;
  dat_dump<2>(f, Core_control__dec_rd_en, 0x232d);
  goto K200;
L201:
  Core_control__dec_rd_write__prev = Core_control__dec_rd_write;
  dat_dump<2>(f, Core_control__dec_rd_write, 0x232e);
  goto K201;
L202:
  Core_control__exe_reg_rd_write__prev = Core_control__exe_reg_rd_write;
  dat_dump<2>(f, Core_control__exe_reg_rd_write, 0x232f);
  goto K202;
L203:
  Core_control__mem_reg_rd_write__prev = Core_control__mem_reg_rd_write;
  dat_dump<2>(f, Core_control__mem_reg_rd_write, 0x2330);
  goto K203;
L204:
  Core_control__mem_reg_valid__prev = Core_control__mem_reg_valid;
  dat_dump<2>(f, Core_control__mem_reg_valid, 0x2331);
  goto K204;
L205:
  Core_control_scheduler__io_valid__prev = Core_control_scheduler__io_valid;
  dat_dump<2>(f, Core_control_scheduler__io_valid, 0x2332);
  goto K205;
L206:
  Core_control__R148__prev = Core_control__R148;
  dat_dump<2>(f, Core_control__R148, 0x2333);
  goto K206;
L207:
  Core_control__if_reg_valid__prev = Core_control__if_reg_valid;
  dat_dump<2>(f, Core_control__if_reg_valid, 0x2334);
  goto K207;
L208:
  Core_control__exe_flush__prev = Core_control__exe_flush;
  dat_dump<2>(f, Core_control__exe_flush, 0x2335);
  goto K208;
L209:
  Core_control__if_valid__prev = Core_control__if_valid;
  dat_dump<2>(f, Core_control__if_valid, 0x2336);
  goto K209;
L210:
  Core_control__dec_reg_valid__prev = Core_control__dec_reg_valid;
  dat_dump<2>(f, Core_control__dec_reg_valid, 0x2337);
  goto K210;
L211:
  Core_control__R81__prev = Core_control__R81;
  dat_dump<2>(f, Core_control__R81, 0x2338);
  goto K211;
L212:
  Core_control__dec_jump__prev = Core_control__dec_jump;
  dat_dump<2>(f, Core_control__dec_jump, 0x2339);
  goto K212;
L213:
  Core_control__exe_reg_jump__prev = Core_control__exe_reg_jump;
  dat_dump<2>(f, Core_control__exe_reg_jump, 0x233a);
  goto K213;
L214:
  Core_control__dec_branch__prev = Core_control__dec_branch;
  dat_dump<2>(f, Core_control__dec_branch, 0x233b);
  goto K214;
L215:
  Core_control__exe_reg_branch__prev = Core_control__exe_reg_branch;
  dat_dump<2>(f, Core_control__exe_reg_branch, 0x233c);
  goto K215;
L216:
  Core_control__dec_valid__prev = Core_control__dec_valid;
  dat_dump<2>(f, Core_control__dec_valid, 0x233d);
  goto K216;
L217:
  Core_control__exe_reg_valid__prev = Core_control__exe_reg_valid;
  dat_dump<2>(f, Core_control__exe_reg_valid, 0x233e);
  goto K217;
L218:
  Core_datapath__io_control_if_exc_misaligned__prev = Core_datapath__io_control_if_exc_misaligned;
  dat_dump<2>(f, Core_datapath__io_control_if_exc_misaligned, 0x233f);
  goto K218;
L219:
  Core_control__io_if_exc_misaligned__prev = Core_control__io_if_exc_misaligned;
  dat_dump<2>(f, Core_control__io_if_exc_misaligned, 0x2340);
  goto K219;
L220:
  Core_control__dec_reg_exc__prev = Core_control__dec_reg_exc;
  dat_dump<2>(f, Core_control__dec_reg_exc, 0x2341);
  goto K220;
L221:
  Core_control__dec_exc__prev = Core_control__dec_exc;
  dat_dump<2>(f, Core_control__dec_exc, 0x2342);
  goto K221;
L222:
  Core_control__exe_reg_exc__prev = Core_control__exe_reg_exc;
  dat_dump<2>(f, Core_control__exe_reg_exc, 0x2343);
  goto K222;
L223:
  Core_imem__io_bus_ready__prev = Core_imem__io_bus_ready;
  dat_dump<2>(f, Core_imem__io_bus_ready, 0x2344);
  goto K223;
L224:
  Core__io_imem_ready__prev = Core__io_imem_ready;
  dat_dump<2>(f, Core__io_imem_ready, 0x2345);
  goto K224;
L225:
  Core_datapath_loadstore__io_bus_enable__prev = Core_datapath_loadstore__io_bus_enable;
  dat_dump<2>(f, Core_datapath_loadstore__io_bus_enable, 0x2346);
  goto K225;
L226:
  Core_datapath__io_bus_enable__prev = Core_datapath__io_bus_enable;
  dat_dump<2>(f, Core_datapath__io_bus_enable, 0x2347);
  goto K226;
L227:
  Core__io_bus_enable__prev = Core__io_bus_enable;
  dat_dump<2>(f, Core__io_bus_enable, 0x2348);
  goto K227;
L228:
  Core_datapath_loadstore__io_bus_write__prev = Core_datapath_loadstore__io_bus_write;
  dat_dump<2>(f, Core_datapath_loadstore__io_bus_write, 0x2349);
  goto K228;
L229:
  Core_datapath__io_bus_write__prev = Core_datapath__io_bus_write;
  dat_dump<2>(f, Core_datapath__io_bus_write, 0x234a);
  goto K229;
L230:
  Core__io_bus_write__prev = Core__io_bus_write;
  dat_dump<2>(f, Core__io_bus_write, 0x234b);
  goto K230;
L231:
  Core__io_int_exts_4__prev = Core__io_int_exts_4;
  dat_dump<2>(f, Core__io_int_exts_4, 0x234c);
  goto K231;
L232:
  Core__io_int_exts_5__prev = Core__io_int_exts_5;
  dat_dump<2>(f, Core__io_int_exts_5, 0x234d);
  goto K232;
L233:
  Core__io_int_exts_6__prev = Core__io_int_exts_6;
  dat_dump<2>(f, Core__io_int_exts_6, 0x234e);
  goto K233;
L234:
  Core__io_int_exts_7__prev = Core__io_int_exts_7;
  dat_dump<2>(f, Core__io_int_exts_7, 0x234f);
  goto K234;
L235:
  Core__io_dmem_byte_write_0__prev = Core__io_dmem_byte_write_0;
  dat_dump<2>(f, Core__io_dmem_byte_write_0, 0x2350);
  goto K235;
L236:
  Core__io_dmem_byte_write_1__prev = Core__io_dmem_byte_write_1;
  dat_dump<2>(f, Core__io_dmem_byte_write_1, 0x2351);
  goto K236;
L237:
  Core__io_dmem_byte_write_2__prev = Core__io_dmem_byte_write_2;
  dat_dump<2>(f, Core__io_dmem_byte_write_2, 0x2352);
  goto K237;
L238:
  Core__io_dmem_byte_write_3__prev = Core__io_dmem_byte_write_3;
  dat_dump<2>(f, Core__io_dmem_byte_write_3, 0x2353);
  goto K238;
L239:
  Core__io_dmem_enable__prev = Core__io_dmem_enable;
  dat_dump<2>(f, Core__io_dmem_enable, 0x2354);
  goto K239;
L240:
  Core__io_imem_write__prev = Core__io_imem_write;
  dat_dump<2>(f, Core__io_imem_write, 0x2355);
  goto K240;
L241:
  Core__io_imem_enable__prev = Core__io_imem_enable;
  dat_dump<2>(f, Core__io_imem_enable, 0x2356);
  goto K241;
L242:
  Core_datapath_csr__io_rw_thread__prev = Core_datapath_csr__io_rw_thread;
  dat_dump<2>(f, Core_datapath_csr__io_rw_thread, 0x2357);
  goto K242;
L243:
  Core_datapath_loadstore__io_thread__prev = Core_datapath_loadstore__io_thread;
  dat_dump<2>(f, Core_datapath_loadstore__io_thread, 0x2358);
  goto K243;
L244:
  Core_datapath__io_control_if_tid__prev = Core_datapath__io_control_if_tid;
  dat_dump<2>(f, Core_datapath__io_control_if_tid, 0x2359);
  goto K244;
L245:
  Core_control__io_if_tid__prev = Core_control__io_if_tid;
  dat_dump<2>(f, Core_control__io_if_tid, 0x235a);
  goto K245;
L246:
  Core_datapath__io_control_dec_tid__prev = Core_datapath__io_control_dec_tid;
  dat_dump<2>(f, Core_datapath__io_control_dec_tid, 0x235b);
  goto K246;
L247:
  Core_control__io_dec_tid__prev = Core_control__io_dec_tid;
  dat_dump<2>(f, Core_control__io_dec_tid, 0x235c);
  goto K247;
L248:
  Core_datapath__io_control_exe_tid__prev = Core_datapath__io_control_exe_tid;
  dat_dump<2>(f, Core_datapath__io_control_exe_tid, 0x235d);
  goto K248;
L249:
  Core_control__io_exe_tid__prev = Core_control__io_exe_tid;
  dat_dump<2>(f, Core_control__io_exe_tid, 0x235e);
  goto K249;
L250:
  Core_datapath__io_control_mem_tid__prev = Core_datapath__io_control_mem_tid;
  dat_dump<2>(f, Core_datapath__io_control_mem_tid, 0x235f);
  goto K250;
L251:
  Core_control__io_mem_tid__prev = Core_control__io_mem_tid;
  dat_dump<2>(f, Core_control__io_mem_tid, 0x2360);
  goto K251;
L252:
  Core_control__next_pc_sel_0__prev = Core_control__next_pc_sel_0;
  dat_dump<2>(f, Core_control__next_pc_sel_0, 0x2361);
  goto K252;
L253:
  Core_control__io_next_pc_sel_0__prev = Core_control__io_next_pc_sel_0;
  dat_dump<2>(f, Core_control__io_next_pc_sel_0, 0x2362);
  goto K253;
L254:
  Core_datapath__io_control_next_pc_sel_0__prev = Core_datapath__io_control_next_pc_sel_0;
  dat_dump<2>(f, Core_datapath__io_control_next_pc_sel_0, 0x2363);
  goto K254;
L255:
  Core_control__next_pc_sel_1__prev = Core_control__next_pc_sel_1;
  dat_dump<2>(f, Core_control__next_pc_sel_1, 0x2364);
  goto K255;
L256:
  Core_control__io_next_pc_sel_1__prev = Core_control__io_next_pc_sel_1;
  dat_dump<2>(f, Core_control__io_next_pc_sel_1, 0x2365);
  goto K256;
L257:
  Core_datapath__io_control_next_pc_sel_1__prev = Core_datapath__io_control_next_pc_sel_1;
  dat_dump<2>(f, Core_datapath__io_control_next_pc_sel_1, 0x2366);
  goto K257;
L258:
  Core_control__next_pc_sel_2__prev = Core_control__next_pc_sel_2;
  dat_dump<2>(f, Core_control__next_pc_sel_2, 0x2367);
  goto K258;
L259:
  Core_control__io_next_pc_sel_2__prev = Core_control__io_next_pc_sel_2;
  dat_dump<2>(f, Core_control__io_next_pc_sel_2, 0x2368);
  goto K259;
L260:
  Core_datapath__io_control_next_pc_sel_2__prev = Core_datapath__io_control_next_pc_sel_2;
  dat_dump<2>(f, Core_datapath__io_control_next_pc_sel_2, 0x2369);
  goto K260;
L261:
  Core_control__next_pc_sel_3__prev = Core_control__next_pc_sel_3;
  dat_dump<2>(f, Core_control__next_pc_sel_3, 0x236a);
  goto K261;
L262:
  Core_control__io_next_pc_sel_3__prev = Core_control__io_next_pc_sel_3;
  dat_dump<2>(f, Core_control__io_next_pc_sel_3, 0x236b);
  goto K262;
L263:
  Core_datapath__io_control_next_pc_sel_3__prev = Core_datapath__io_control_next_pc_sel_3;
  dat_dump<2>(f, Core_datapath__io_control_next_pc_sel_3, 0x236c);
  goto K263;
L264:
  Core_control__next_tid__prev = Core_control__next_tid;
  dat_dump<2>(f, Core_control__next_tid, 0x236d);
  goto K264;
L265:
  Core_control__io_next_tid__prev = Core_control__io_next_tid;
  dat_dump<2>(f, Core_control__io_next_tid, 0x236e);
  goto K265;
L266:
  Core_datapath__io_control_next_tid__prev = Core_datapath__io_control_next_tid;
  dat_dump<2>(f, Core_datapath__io_control_next_tid, 0x236f);
  goto K266;
L267:
  Core_control__io_exe_csr_type__prev = Core_control__io_exe_csr_type;
  dat_dump<2>(f, Core_control__io_exe_csr_type, 0x2370);
  goto K267;
L268:
  Core_datapath__io_control_exe_csr_type__prev = Core_datapath__io_control_exe_csr_type;
  dat_dump<2>(f, Core_datapath__io_control_exe_csr_type, 0x2371);
  goto K268;
L269:
  Core_datapath_csr__io_rw_csr_type__prev = Core_datapath_csr__io_rw_csr_type;
  dat_dump<2>(f, Core_datapath_csr__io_rw_csr_type, 0x2372);
  goto K269;
L270:
  Core_datapath_csr__reg_prv1_3__prev = Core_datapath_csr__reg_prv1_3;
  dat_dump<2>(f, Core_datapath_csr__reg_prv1_3, 0x2373);
  goto K270;
L271:
  Core_datapath_csr__reg_prv_3__prev = Core_datapath_csr__reg_prv_3;
  dat_dump<2>(f, Core_datapath_csr__reg_prv_3, 0x2374);
  goto K271;
L272:
  Core_datapath_csr__reg_prv1_2__prev = Core_datapath_csr__reg_prv1_2;
  dat_dump<2>(f, Core_datapath_csr__reg_prv1_2, 0x2375);
  goto K272;
L273:
  Core_datapath_csr__reg_prv_2__prev = Core_datapath_csr__reg_prv_2;
  dat_dump<2>(f, Core_datapath_csr__reg_prv_2, 0x2376);
  goto K273;
L274:
  Core_datapath_csr__reg_prv1_1__prev = Core_datapath_csr__reg_prv1_1;
  dat_dump<2>(f, Core_datapath_csr__reg_prv1_1, 0x2377);
  goto K274;
L275:
  Core_datapath_csr__reg_prv_1__prev = Core_datapath_csr__reg_prv_1;
  dat_dump<2>(f, Core_datapath_csr__reg_prv_1, 0x2378);
  goto K275;
L276:
  Core_datapath_csr__reg_prv1_0__prev = Core_datapath_csr__reg_prv1_0;
  dat_dump<2>(f, Core_datapath_csr__reg_prv1_0, 0x2379);
  goto K276;
L277:
  Core_datapath_csr__reg_prv_0__prev = Core_datapath_csr__reg_prv_0;
  dat_dump<2>(f, Core_datapath_csr__reg_prv_0, 0x237a);
  goto K277;
L278:
  Core_datapath_csr__reg_gpos_3__prev = Core_datapath_csr__reg_gpos_3;
  dat_dump<2>(f, Core_datapath_csr__reg_gpos_3, 0x237b);
  goto K278;
L279:
  Core_datapath_csr__reg_gpos_2__prev = Core_datapath_csr__reg_gpos_2;
  dat_dump<2>(f, Core_datapath_csr__reg_gpos_2, 0x237c);
  goto K279;
L280:
  Core_datapath_csr__reg_gpos_1__prev = Core_datapath_csr__reg_gpos_1;
  dat_dump<2>(f, Core_datapath_csr__reg_gpos_1, 0x237d);
  goto K280;
L281:
  Core_datapath_csr__reg_gpos_0__prev = Core_datapath_csr__reg_gpos_0;
  dat_dump<2>(f, Core_datapath_csr__reg_gpos_0, 0x237e);
  goto K281;
L282:
  Core_datapath_csr__reg_tmodes_1__prev = Core_datapath_csr__reg_tmodes_1;
  dat_dump<2>(f, Core_datapath_csr__reg_tmodes_1, 0x2421);
  goto K282;
L283:
  Core_datapath_csr__reg_tmodes_3__prev = Core_datapath_csr__reg_tmodes_3;
  dat_dump<2>(f, Core_datapath_csr__reg_tmodes_3, 0x2422);
  goto K283;
L284:
  Core_datapath_csr__reg_timer_3__prev = Core_datapath_csr__reg_timer_3;
  dat_dump<2>(f, Core_datapath_csr__reg_timer_3, 0x2423);
  goto K284;
L285:
  Core_datapath_csr__reg_timer_1__prev = Core_datapath_csr__reg_timer_1;
  dat_dump<2>(f, Core_datapath_csr__reg_timer_1, 0x2424);
  goto K285;
L286:
  Core_datapath_csr__reg_timer_0__prev = Core_datapath_csr__reg_timer_0;
  dat_dump<2>(f, Core_datapath_csr__reg_timer_0, 0x2425);
  goto K286;
L287:
  Core_datapath_csr__reg_timer_2__prev = Core_datapath_csr__reg_timer_2;
  dat_dump<2>(f, Core_datapath_csr__reg_timer_2, 0x2426);
  goto K287;
L288:
  Core_datapath_csr__reg_tmodes_2__prev = Core_datapath_csr__reg_tmodes_2;
  dat_dump<2>(f, Core_datapath_csr__reg_tmodes_2, 0x2427);
  goto K288;
L289:
  Core_datapath_csr__reg_tmodes_0__prev = Core_datapath_csr__reg_tmodes_0;
  dat_dump<2>(f, Core_datapath_csr__reg_tmodes_0, 0x2428);
  goto K289;
L290:
  Core_datapath_loadstore__addr_byte_reg__prev = Core_datapath_loadstore__addr_byte_reg;
  dat_dump<2>(f, Core_datapath_loadstore__addr_byte_reg, 0x2429);
  goto K290;
L291:
  Core_datapath_regfile__io_rs1_thread__prev = Core_datapath_regfile__io_rs1_thread;
  dat_dump<2>(f, Core_datapath_regfile__io_rs1_thread, 0x242a);
  goto K291;
L292:
  Core_control__io_mem_rd_data_sel__prev = Core_control__io_mem_rd_data_sel;
  dat_dump<2>(f, Core_control__io_mem_rd_data_sel, 0x242b);
  goto K292;
L293:
  Core_datapath__io_control_mem_rd_data_sel__prev = Core_datapath__io_control_mem_rd_data_sel;
  dat_dump<2>(f, Core_datapath__io_control_mem_rd_data_sel, 0x242c);
  goto K293;
L294:
  Core_datapath_regfile__io_rd_thread__prev = Core_datapath_regfile__io_rd_thread;
  dat_dump<2>(f, Core_datapath_regfile__io_rd_thread, 0x242d);
  goto K294;
L295:
  Core_datapath_regfile__io_rs2_thread__prev = Core_datapath_regfile__io_rs2_thread;
  dat_dump<2>(f, Core_datapath_regfile__io_rs2_thread, 0x242e);
  goto K295;
L296:
  Core_datapath__io_control_wb_tid__prev = Core_datapath__io_control_wb_tid;
  dat_dump<2>(f, Core_datapath__io_control_wb_tid, 0x242f);
  goto K296;
L297:
  Core_control__io_wb_tid__prev = Core_control__io_wb_tid;
  dat_dump<2>(f, Core_control__io_wb_tid, 0x2430);
  goto K297;
L298:
  Core_control__dec_rs1_sel__prev = Core_control__dec_rs1_sel;
  dat_dump<2>(f, Core_control__dec_rs1_sel, 0x2431);
  goto K298;
L299:
  Core_control__io_dec_rs1_sel__prev = Core_control__io_dec_rs1_sel;
  dat_dump<2>(f, Core_control__io_dec_rs1_sel, 0x2432);
  goto K299;
L300:
  Core_datapath__io_control_dec_rs1_sel__prev = Core_datapath__io_control_dec_rs1_sel;
  dat_dump<2>(f, Core_datapath__io_control_dec_rs1_sel, 0x2433);
  goto K300;
L301:
  Core_control__io_exe_rd_data_sel__prev = Core_control__io_exe_rd_data_sel;
  dat_dump<2>(f, Core_control__io_exe_rd_data_sel, 0x2434);
  goto K301;
L302:
  Core_datapath__io_control_exe_rd_data_sel__prev = Core_datapath__io_control_exe_rd_data_sel;
  dat_dump<2>(f, Core_datapath__io_control_exe_rd_data_sel, 0x2435);
  goto K302;
L303:
  Core_datapath__wb_reg_tid__prev = Core_datapath__wb_reg_tid;
  dat_dump<2>(f, Core_datapath__wb_reg_tid, 0x2436);
  goto K303;
L304:
  Core_control__dec_rs2_sel__prev = Core_control__dec_rs2_sel;
  dat_dump<2>(f, Core_control__dec_rs2_sel, 0x2437);
  goto K304;
L305:
  Core_control__io_dec_rs2_sel__prev = Core_control__io_dec_rs2_sel;
  dat_dump<2>(f, Core_control__io_dec_rs2_sel, 0x2438);
  goto K305;
L306:
  Core_datapath__io_control_dec_rs2_sel__prev = Core_datapath__io_control_dec_rs2_sel;
  dat_dump<2>(f, Core_datapath__io_control_dec_rs2_sel, 0x2439);
  goto K306;
L307:
  Core_control__dec_op2_sel__prev = Core_control__dec_op2_sel;
  dat_dump<2>(f, Core_control__dec_op2_sel, 0x243a);
  goto K307;
L308:
  Core_control__io_dec_op2_sel__prev = Core_control__io_dec_op2_sel;
  dat_dump<2>(f, Core_control__io_dec_op2_sel, 0x243b);
  goto K308;
L309:
  Core_datapath__io_control_dec_op2_sel__prev = Core_datapath__io_control_dec_op2_sel;
  dat_dump<2>(f, Core_datapath__io_control_dec_op2_sel, 0x243c);
  goto K309;
L310:
  Core_datapath__mem_reg_tid__prev = Core_datapath__mem_reg_tid;
  dat_dump<2>(f, Core_datapath__mem_reg_tid, 0x243d);
  goto K310;
L311:
  Core_datapath__exe_reg_tid__prev = Core_datapath__exe_reg_tid;
  dat_dump<2>(f, Core_datapath__exe_reg_tid, 0x243e);
  goto K311;
L312:
  Core_control__dec_op1_sel__prev = Core_control__dec_op1_sel;
  dat_dump<2>(f, Core_control__dec_op1_sel, 0x243f);
  goto K312;
L313:
  Core_control__io_dec_op1_sel__prev = Core_control__io_dec_op1_sel;
  dat_dump<2>(f, Core_control__io_dec_op1_sel, 0x2440);
  goto K313;
L314:
  Core_datapath__io_control_dec_op1_sel__prev = Core_datapath__io_control_dec_op1_sel;
  dat_dump<2>(f, Core_datapath__io_control_dec_op1_sel, 0x2441);
  goto K314;
L315:
  Core_datapath__if_reg_tid__prev = Core_datapath__if_reg_tid;
  dat_dump<2>(f, Core_datapath__if_reg_tid, 0x2442);
  goto K315;
L316:
  Core_datapath__dec_reg_tid__prev = Core_datapath__dec_reg_tid;
  dat_dump<2>(f, Core_datapath__dec_reg_tid, 0x2443);
  goto K316;
L317:
  Core_datapath_csr__io_tmodes_1__prev = Core_datapath_csr__io_tmodes_1;
  dat_dump<2>(f, Core_datapath_csr__io_tmodes_1, 0x2444);
  goto K317;
L318:
  Core_datapath__io_control_csr_tmodes_1__prev = Core_datapath__io_control_csr_tmodes_1;
  dat_dump<2>(f, Core_datapath__io_control_csr_tmodes_1, 0x2445);
  goto K318;
L319:
  Core_control__io_csr_tmodes_1__prev = Core_control__io_csr_tmodes_1;
  dat_dump<2>(f, Core_control__io_csr_tmodes_1, 0x2446);
  goto K319;
L320:
  Core_control_scheduler__io_thread_modes_1__prev = Core_control_scheduler__io_thread_modes_1;
  dat_dump<2>(f, Core_control_scheduler__io_thread_modes_1, 0x2447);
  goto K320;
L321:
  Core_datapath_csr__io_tmodes_0__prev = Core_datapath_csr__io_tmodes_0;
  dat_dump<2>(f, Core_datapath_csr__io_tmodes_0, 0x2448);
  goto K321;
L322:
  Core_datapath__io_control_csr_tmodes_0__prev = Core_datapath__io_control_csr_tmodes_0;
  dat_dump<2>(f, Core_datapath__io_control_csr_tmodes_0, 0x2449);
  goto K322;
L323:
  Core_control__io_csr_tmodes_0__prev = Core_control__io_csr_tmodes_0;
  dat_dump<2>(f, Core_control__io_csr_tmodes_0, 0x244a);
  goto K323;
L324:
  Core_control_scheduler__io_thread_modes_0__prev = Core_control_scheduler__io_thread_modes_0;
  dat_dump<2>(f, Core_control_scheduler__io_thread_modes_0, 0x244b);
  goto K324;
L325:
  Core_datapath_csr__io_tmodes_2__prev = Core_datapath_csr__io_tmodes_2;
  dat_dump<2>(f, Core_datapath_csr__io_tmodes_2, 0x244c);
  goto K325;
L326:
  Core_datapath__io_control_csr_tmodes_2__prev = Core_datapath__io_control_csr_tmodes_2;
  dat_dump<2>(f, Core_datapath__io_control_csr_tmodes_2, 0x244d);
  goto K326;
L327:
  Core_control__io_csr_tmodes_2__prev = Core_control__io_csr_tmodes_2;
  dat_dump<2>(f, Core_control__io_csr_tmodes_2, 0x244e);
  goto K327;
L328:
  Core_control_scheduler__io_thread_modes_2__prev = Core_control_scheduler__io_thread_modes_2;
  dat_dump<2>(f, Core_control_scheduler__io_thread_modes_2, 0x244f);
  goto K328;
L329:
  Core_datapath_csr__io_tmodes_3__prev = Core_datapath_csr__io_tmodes_3;
  dat_dump<2>(f, Core_datapath_csr__io_tmodes_3, 0x2450);
  goto K329;
L330:
  Core_datapath__io_control_csr_tmodes_3__prev = Core_datapath__io_control_csr_tmodes_3;
  dat_dump<2>(f, Core_datapath__io_control_csr_tmodes_3, 0x2451);
  goto K330;
L331:
  Core_control__io_csr_tmodes_3__prev = Core_control__io_csr_tmodes_3;
  dat_dump<2>(f, Core_control__io_csr_tmodes_3, 0x2452);
  goto K331;
L332:
  Core_control_scheduler__io_thread_modes_3__prev = Core_control_scheduler__io_thread_modes_3;
  dat_dump<2>(f, Core_control_scheduler__io_thread_modes_3, 0x2453);
  goto K332;
L333:
  Core_control__dec_csr_type__prev = Core_control__dec_csr_type;
  dat_dump<2>(f, Core_control__dec_csr_type, 0x2454);
  goto K333;
L334:
  Core_control__exe_reg_csr_type__prev = Core_control__exe_reg_csr_type;
  dat_dump<2>(f, Core_control__exe_reg_csr_type, 0x2455);
  goto K334;
L335:
  Core_control__exe_reg_mul_type__prev = Core_control__exe_reg_mul_type;
  dat_dump<2>(f, Core_control__exe_reg_mul_type, 0x2456);
  goto K335;
L336:
  Core_control__dec_exe_rd_data_sel__prev = Core_control__dec_exe_rd_data_sel;
  dat_dump<2>(f, Core_control__dec_exe_rd_data_sel, 0x2457);
  goto K336;
L337:
  Core_control__exe_reg_rd_data_sel__prev = Core_control__exe_reg_rd_data_sel;
  dat_dump<2>(f, Core_control__exe_reg_rd_data_sel, 0x2458);
  goto K337;
L338:
  Core_control__dec_mem_rd_data_sel__prev = Core_control__dec_mem_rd_data_sel;
  dat_dump<2>(f, Core_control__dec_mem_rd_data_sel, 0x2459);
  goto K338;
L339:
  Core_control__R269__prev = Core_control__R269;
  dat_dump<2>(f, Core_control__R269, 0x245a);
  goto K339;
L340:
  Core_control__mem_reg_rd_data_sel__prev = Core_control__mem_reg_rd_data_sel;
  dat_dump<2>(f, Core_control__mem_reg_rd_data_sel, 0x245b);
  goto K340;
L341:
  Core_control_scheduler__io_thread__prev = Core_control_scheduler__io_thread;
  dat_dump<2>(f, Core_control_scheduler__io_thread, 0x245c);
  goto K341;
L342:
  Core_control__R225__prev = Core_control__R225;
  dat_dump<2>(f, Core_control__R225, 0x245d);
  goto K342;
L343:
  Core_control__stall_count_3__prev = Core_control__stall_count_3;
  dat_dump<2>(f, Core_control__stall_count_3, 0x245e);
  goto K343;
L344:
  Core_control__stall_count_2__prev = Core_control__stall_count_2;
  dat_dump<2>(f, Core_control__stall_count_2, 0x245f);
  goto K344;
L345:
  Core_control__stall_count_1__prev = Core_control__stall_count_1;
  dat_dump<2>(f, Core_control__stall_count_1, 0x2460);
  goto K345;
L346:
  Core_control__stall_count_0__prev = Core_control__stall_count_0;
  dat_dump<2>(f, Core_control__stall_count_0, 0x2461);
  goto K346;
L347:
  Core_datapath_csr__io_gpio_out_3__prev = Core_datapath_csr__io_gpio_out_3;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_out_3, 0x2462);
  goto K347;
L348:
  Core_datapath__io_gpio_out_3__prev = Core_datapath__io_gpio_out_3;
  dat_dump<2>(f, Core_datapath__io_gpio_out_3, 0x2463);
  goto K348;
L349:
  Core__io_gpio_out_3__prev = Core__io_gpio_out_3;
  dat_dump<2>(f, Core__io_gpio_out_3, 0x2464);
  goto K349;
L350:
  Core_datapath_csr__io_gpio_out_2__prev = Core_datapath_csr__io_gpio_out_2;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_out_2, 0x2465);
  goto K350;
L351:
  Core_datapath__io_gpio_out_2__prev = Core_datapath__io_gpio_out_2;
  dat_dump<2>(f, Core_datapath__io_gpio_out_2, 0x2466);
  goto K351;
L352:
  Core__io_gpio_out_2__prev = Core__io_gpio_out_2;
  dat_dump<2>(f, Core__io_gpio_out_2, 0x2467);
  goto K352;
L353:
  Core_datapath_csr__io_gpio_out_1__prev = Core_datapath_csr__io_gpio_out_1;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_out_1, 0x2468);
  goto K353;
L354:
  Core_datapath__io_gpio_out_1__prev = Core_datapath__io_gpio_out_1;
  dat_dump<2>(f, Core_datapath__io_gpio_out_1, 0x2469);
  goto K354;
L355:
  Core__io_gpio_out_1__prev = Core__io_gpio_out_1;
  dat_dump<2>(f, Core__io_gpio_out_1, 0x246a);
  goto K355;
L356:
  Core_datapath_csr__io_gpio_out_0__prev = Core_datapath_csr__io_gpio_out_0;
  dat_dump<2>(f, Core_datapath_csr__io_gpio_out_0, 0x246b);
  goto K356;
L357:
  Core_datapath__io_gpio_out_0__prev = Core_datapath__io_gpio_out_0;
  dat_dump<2>(f, Core_datapath__io_gpio_out_0, 0x246c);
  goto K357;
L358:
  Core__io_gpio_out_0__prev = Core__io_gpio_out_0;
  dat_dump<2>(f, Core__io_gpio_out_0, 0x246d);
  goto K358;
L359:
  Core_control__io_exe_br_type__prev = Core_control__io_exe_br_type;
  dat_dump<2>(f, Core_control__io_exe_br_type, 0x246e);
  goto K359;
L360:
  Core_datapath__io_control_exe_br_type__prev = Core_datapath__io_control_exe_br_type;
  dat_dump<2>(f, Core_datapath__io_control_exe_br_type, 0x246f);
  goto K360;
L361:
  Core_control__dec_imm_sel__prev = Core_control__dec_imm_sel;
  dat_dump<2>(f, Core_control__dec_imm_sel, 0x2470);
  goto K361;
L362:
  Core_control__io_dec_imm_sel__prev = Core_control__io_dec_imm_sel;
  dat_dump<2>(f, Core_control__io_dec_imm_sel, 0x2471);
  goto K362;
L363:
  Core_datapath__io_control_dec_imm_sel__prev = Core_datapath__io_control_dec_imm_sel;
  dat_dump<2>(f, Core_datapath__io_control_dec_imm_sel, 0x2472);
  goto K363;
L364:
  Core_control__dec_br_type__prev = Core_control__dec_br_type;
  dat_dump<2>(f, Core_control__dec_br_type, 0x2473);
  goto K364;
L365:
  Core_control__exe_reg_br_type__prev = Core_control__exe_reg_br_type;
  dat_dump<2>(f, Core_control__exe_reg_br_type, 0x2474);
  goto K365;
L366:
  Core_control__dec_cause__prev = Core_control__dec_cause;
  dat_dump<2>(f, Core_control__dec_cause, 0x2475);
  goto K366;
L367:
  Core_control__exe_reg_cause__prev = Core_control__exe_reg_cause;
  dat_dump<2>(f, Core_control__exe_reg_cause, 0x2476);
  goto K367;
L368:
  Core_control__io_exe_alu_type__prev = Core_control__io_exe_alu_type;
  dat_dump<2>(f, Core_control__io_exe_alu_type, 0x2477);
  goto K368;
L369:
  Core_datapath__io_control_exe_alu_type__prev = Core_datapath__io_control_exe_alu_type;
  dat_dump<2>(f, Core_datapath__io_control_exe_alu_type, 0x2478);
  goto K369;
L370:
  Core_control__io_exe_mem_type__prev = Core_control__io_exe_mem_type;
  dat_dump<2>(f, Core_control__io_exe_mem_type, 0x2479);
  goto K370;
L371:
  Core_datapath__io_control_exe_mem_type__prev = Core_datapath__io_control_exe_mem_type;
  dat_dump<2>(f, Core_datapath__io_control_exe_mem_type, 0x247a);
  goto K371;
L372:
  Core_datapath_loadstore__io_mem_type__prev = Core_datapath_loadstore__io_mem_type;
  dat_dump<2>(f, Core_datapath_loadstore__io_mem_type, 0x247b);
  goto K372;
L373:
  Core_datapath_csr__io_imem_protection_0__prev = Core_datapath_csr__io_imem_protection_0;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_0, 0x247c);
  goto K373;
L374:
  Core_datapath_loadstore__io_imem_protection_0__prev = Core_datapath_loadstore__io_imem_protection_0;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_0, 0x247d);
  goto K374;
L375:
  Core_datapath_csr__io_imem_protection_1__prev = Core_datapath_csr__io_imem_protection_1;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_1, 0x247e);
  goto K375;
L376:
  Core_datapath_loadstore__io_imem_protection_1__prev = Core_datapath_loadstore__io_imem_protection_1;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_1, 0x2521);
  goto K376;
L377:
  Core_datapath_csr__io_imem_protection_2__prev = Core_datapath_csr__io_imem_protection_2;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_2, 0x2522);
  goto K377;
L378:
  Core_datapath_loadstore__io_imem_protection_2__prev = Core_datapath_loadstore__io_imem_protection_2;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_2, 0x2523);
  goto K378;
L379:
  Core_datapath_csr__io_imem_protection_3__prev = Core_datapath_csr__io_imem_protection_3;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_3, 0x2524);
  goto K379;
L380:
  Core_datapath_loadstore__io_imem_protection_3__prev = Core_datapath_loadstore__io_imem_protection_3;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_3, 0x2525);
  goto K380;
L381:
  Core_datapath_csr__io_imem_protection_4__prev = Core_datapath_csr__io_imem_protection_4;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_4, 0x2526);
  goto K381;
L382:
  Core_datapath_loadstore__io_imem_protection_4__prev = Core_datapath_loadstore__io_imem_protection_4;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_4, 0x2527);
  goto K382;
L383:
  Core_datapath_csr__io_imem_protection_5__prev = Core_datapath_csr__io_imem_protection_5;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_5, 0x2528);
  goto K383;
L384:
  Core_datapath_loadstore__io_imem_protection_5__prev = Core_datapath_loadstore__io_imem_protection_5;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_5, 0x2529);
  goto K384;
L385:
  Core_datapath_csr__io_imem_protection_6__prev = Core_datapath_csr__io_imem_protection_6;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_6, 0x252a);
  goto K385;
L386:
  Core_datapath_loadstore__io_imem_protection_6__prev = Core_datapath_loadstore__io_imem_protection_6;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_6, 0x252b);
  goto K386;
L387:
  Core_datapath_csr__io_imem_protection_7__prev = Core_datapath_csr__io_imem_protection_7;
  dat_dump<2>(f, Core_datapath_csr__io_imem_protection_7, 0x252c);
  goto K387;
L388:
  Core_datapath_loadstore__io_imem_protection_7__prev = Core_datapath_loadstore__io_imem_protection_7;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_protection_7, 0x252d);
  goto K388;
L389:
  Core_datapath_csr__io_dmem_protection_0__prev = Core_datapath_csr__io_dmem_protection_0;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_0, 0x252e);
  goto K389;
L390:
  Core_datapath_loadstore__io_dmem_protection_0__prev = Core_datapath_loadstore__io_dmem_protection_0;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_0, 0x252f);
  goto K390;
L391:
  Core_datapath_csr__io_dmem_protection_1__prev = Core_datapath_csr__io_dmem_protection_1;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_1, 0x2530);
  goto K391;
L392:
  Core_datapath_loadstore__io_dmem_protection_1__prev = Core_datapath_loadstore__io_dmem_protection_1;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_1, 0x2531);
  goto K392;
L393:
  Core_datapath_csr__io_dmem_protection_2__prev = Core_datapath_csr__io_dmem_protection_2;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_2, 0x2532);
  goto K393;
L394:
  Core_datapath_loadstore__io_dmem_protection_2__prev = Core_datapath_loadstore__io_dmem_protection_2;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_2, 0x2533);
  goto K394;
L395:
  Core_datapath_csr__io_dmem_protection_3__prev = Core_datapath_csr__io_dmem_protection_3;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_3, 0x2534);
  goto K395;
L396:
  Core_datapath_loadstore__io_dmem_protection_3__prev = Core_datapath_loadstore__io_dmem_protection_3;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_3, 0x2535);
  goto K396;
L397:
  Core_datapath_csr__io_dmem_protection_4__prev = Core_datapath_csr__io_dmem_protection_4;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_4, 0x2536);
  goto K397;
L398:
  Core_datapath_loadstore__io_dmem_protection_4__prev = Core_datapath_loadstore__io_dmem_protection_4;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_4, 0x2537);
  goto K398;
L399:
  Core_datapath_csr__io_dmem_protection_5__prev = Core_datapath_csr__io_dmem_protection_5;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_5, 0x2538);
  goto K399;
L400:
  Core_datapath_loadstore__io_dmem_protection_5__prev = Core_datapath_loadstore__io_dmem_protection_5;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_5, 0x2539);
  goto K400;
L401:
  Core_datapath_csr__io_dmem_protection_6__prev = Core_datapath_csr__io_dmem_protection_6;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_6, 0x253a);
  goto K401;
L402:
  Core_datapath_loadstore__io_dmem_protection_6__prev = Core_datapath_loadstore__io_dmem_protection_6;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_6, 0x253b);
  goto K402;
L403:
  Core_datapath_csr__io_dmem_protection_7__prev = Core_datapath_csr__io_dmem_protection_7;
  dat_dump<2>(f, Core_datapath_csr__io_dmem_protection_7, 0x253c);
  goto K403;
L404:
  Core_datapath_loadstore__io_dmem_protection_7__prev = Core_datapath_loadstore__io_dmem_protection_7;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_protection_7, 0x253d);
  goto K404;
L405:
  Core_datapath_csr__reg_dmem_protection_7__prev = Core_datapath_csr__reg_dmem_protection_7;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_7, 0x253e);
  goto K405;
L406:
  Core_datapath_csr__reg_dmem_protection_6__prev = Core_datapath_csr__reg_dmem_protection_6;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_6, 0x253f);
  goto K406;
L407:
  Core_datapath_csr__reg_dmem_protection_5__prev = Core_datapath_csr__reg_dmem_protection_5;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_5, 0x2540);
  goto K407;
L408:
  Core_datapath_csr__reg_dmem_protection_4__prev = Core_datapath_csr__reg_dmem_protection_4;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_4, 0x2541);
  goto K408;
L409:
  Core_datapath_csr__reg_dmem_protection_3__prev = Core_datapath_csr__reg_dmem_protection_3;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_3, 0x2542);
  goto K409;
L410:
  Core_datapath_csr__reg_dmem_protection_2__prev = Core_datapath_csr__reg_dmem_protection_2;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_2, 0x2543);
  goto K410;
L411:
  Core_datapath_csr__reg_dmem_protection_1__prev = Core_datapath_csr__reg_dmem_protection_1;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_1, 0x2544);
  goto K411;
L412:
  Core_datapath_csr__reg_dmem_protection_0__prev = Core_datapath_csr__reg_dmem_protection_0;
  dat_dump<2>(f, Core_datapath_csr__reg_dmem_protection_0, 0x2545);
  goto K412;
L413:
  Core_datapath_csr__reg_imem_protection_7__prev = Core_datapath_csr__reg_imem_protection_7;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_7, 0x2546);
  goto K413;
L414:
  Core_datapath_csr__reg_imem_protection_6__prev = Core_datapath_csr__reg_imem_protection_6;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_6, 0x2547);
  goto K414;
L415:
  Core_datapath_csr__reg_imem_protection_5__prev = Core_datapath_csr__reg_imem_protection_5;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_5, 0x2548);
  goto K415;
L416:
  Core_datapath_csr__reg_imem_protection_4__prev = Core_datapath_csr__reg_imem_protection_4;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_4, 0x2549);
  goto K416;
L417:
  Core_datapath_csr__reg_imem_protection_3__prev = Core_datapath_csr__reg_imem_protection_3;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_3, 0x254a);
  goto K417;
L418:
  Core_datapath_csr__reg_imem_protection_2__prev = Core_datapath_csr__reg_imem_protection_2;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_2, 0x254b);
  goto K418;
L419:
  Core_datapath_csr__reg_imem_protection_1__prev = Core_datapath_csr__reg_imem_protection_1;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_1, 0x254c);
  goto K419;
L420:
  Core_datapath_csr__reg_imem_protection_0__prev = Core_datapath_csr__reg_imem_protection_0;
  dat_dump<2>(f, Core_datapath_csr__reg_imem_protection_0, 0x254d);
  goto K420;
L421:
  Core_datapath_csr__reg_gpo_protection_3__prev = Core_datapath_csr__reg_gpo_protection_3;
  dat_dump<2>(f, Core_datapath_csr__reg_gpo_protection_3, 0x254e);
  goto K421;
L422:
  Core_datapath_csr__reg_gpo_protection_2__prev = Core_datapath_csr__reg_gpo_protection_2;
  dat_dump<2>(f, Core_datapath_csr__reg_gpo_protection_2, 0x254f);
  goto K422;
L423:
  Core_datapath_csr__reg_gpo_protection_1__prev = Core_datapath_csr__reg_gpo_protection_1;
  dat_dump<2>(f, Core_datapath_csr__reg_gpo_protection_1, 0x2550);
  goto K423;
L424:
  Core_datapath_csr__reg_gpo_protection_0__prev = Core_datapath_csr__reg_gpo_protection_0;
  dat_dump<2>(f, Core_datapath_csr__reg_gpo_protection_0, 0x2551);
  goto K424;
L425:
  Core_control__exe_inst_cause__prev = Core_control__exe_inst_cause;
  dat_dump<2>(f, Core_control__exe_inst_cause, 0x2552);
  goto K425;
L426:
  Core_datapath_csr__reg_slots_7__prev = Core_datapath_csr__reg_slots_7;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_7, 0x2553);
  goto K426;
L427:
  Core_datapath_csr__reg_slots_6__prev = Core_datapath_csr__reg_slots_6;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_6, 0x2554);
  goto K427;
L428:
  Core_datapath_csr__reg_slots_5__prev = Core_datapath_csr__reg_slots_5;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_5, 0x2555);
  goto K428;
L429:
  Core_datapath_csr__reg_slots_4__prev = Core_datapath_csr__reg_slots_4;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_4, 0x2556);
  goto K429;
L430:
  Core_datapath_csr__reg_slots_3__prev = Core_datapath_csr__reg_slots_3;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_3, 0x2557);
  goto K430;
L431:
  Core_datapath_csr__reg_slots_2__prev = Core_datapath_csr__reg_slots_2;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_2, 0x2558);
  goto K431;
L432:
  Core_datapath_csr__reg_slots_1__prev = Core_datapath_csr__reg_slots_1;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_1, 0x2559);
  goto K432;
L433:
  Core_datapath_csr__reg_slots_0__prev = Core_datapath_csr__reg_slots_0;
  dat_dump<2>(f, Core_datapath_csr__reg_slots_0, 0x255a);
  goto K433;
L434:
  Core_datapath_loadstore__mem_type_reg__prev = Core_datapath_loadstore__mem_type_reg;
  dat_dump<2>(f, Core_datapath_loadstore__mem_type_reg, 0x255b);
  goto K434;
L435:
  Core_datapath_csr__io_slots_7__prev = Core_datapath_csr__io_slots_7;
  dat_dump<2>(f, Core_datapath_csr__io_slots_7, 0x255c);
  goto K435;
L436:
  Core_datapath__io_control_csr_slots_7__prev = Core_datapath__io_control_csr_slots_7;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_7, 0x255d);
  goto K436;
L437:
  Core_control__io_csr_slots_7__prev = Core_control__io_csr_slots_7;
  dat_dump<2>(f, Core_control__io_csr_slots_7, 0x255e);
  goto K437;
L438:
  Core_control_scheduler__io_slots_7__prev = Core_control_scheduler__io_slots_7;
  dat_dump<2>(f, Core_control_scheduler__io_slots_7, 0x255f);
  goto K438;
L439:
  Core_datapath_csr__io_slots_6__prev = Core_datapath_csr__io_slots_6;
  dat_dump<2>(f, Core_datapath_csr__io_slots_6, 0x2560);
  goto K439;
L440:
  Core_datapath__io_control_csr_slots_6__prev = Core_datapath__io_control_csr_slots_6;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_6, 0x2561);
  goto K440;
L441:
  Core_control__io_csr_slots_6__prev = Core_control__io_csr_slots_6;
  dat_dump<2>(f, Core_control__io_csr_slots_6, 0x2562);
  goto K441;
L442:
  Core_control_scheduler__io_slots_6__prev = Core_control_scheduler__io_slots_6;
  dat_dump<2>(f, Core_control_scheduler__io_slots_6, 0x2563);
  goto K442;
L443:
  Core_datapath_csr__io_slots_5__prev = Core_datapath_csr__io_slots_5;
  dat_dump<2>(f, Core_datapath_csr__io_slots_5, 0x2564);
  goto K443;
L444:
  Core_datapath__io_control_csr_slots_5__prev = Core_datapath__io_control_csr_slots_5;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_5, 0x2565);
  goto K444;
L445:
  Core_control__io_csr_slots_5__prev = Core_control__io_csr_slots_5;
  dat_dump<2>(f, Core_control__io_csr_slots_5, 0x2566);
  goto K445;
L446:
  Core_control_scheduler__io_slots_5__prev = Core_control_scheduler__io_slots_5;
  dat_dump<2>(f, Core_control_scheduler__io_slots_5, 0x2567);
  goto K446;
L447:
  Core_datapath_csr__io_slots_4__prev = Core_datapath_csr__io_slots_4;
  dat_dump<2>(f, Core_datapath_csr__io_slots_4, 0x2568);
  goto K447;
L448:
  Core_datapath__io_control_csr_slots_4__prev = Core_datapath__io_control_csr_slots_4;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_4, 0x2569);
  goto K448;
L449:
  Core_control__io_csr_slots_4__prev = Core_control__io_csr_slots_4;
  dat_dump<2>(f, Core_control__io_csr_slots_4, 0x256a);
  goto K449;
L450:
  Core_control_scheduler__io_slots_4__prev = Core_control_scheduler__io_slots_4;
  dat_dump<2>(f, Core_control_scheduler__io_slots_4, 0x256b);
  goto K450;
L451:
  Core_datapath_csr__io_slots_3__prev = Core_datapath_csr__io_slots_3;
  dat_dump<2>(f, Core_datapath_csr__io_slots_3, 0x256c);
  goto K451;
L452:
  Core_datapath__io_control_csr_slots_3__prev = Core_datapath__io_control_csr_slots_3;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_3, 0x256d);
  goto K452;
L453:
  Core_control__io_csr_slots_3__prev = Core_control__io_csr_slots_3;
  dat_dump<2>(f, Core_control__io_csr_slots_3, 0x256e);
  goto K453;
L454:
  Core_control_scheduler__io_slots_3__prev = Core_control_scheduler__io_slots_3;
  dat_dump<2>(f, Core_control_scheduler__io_slots_3, 0x256f);
  goto K454;
L455:
  Core_datapath_csr__io_slots_2__prev = Core_datapath_csr__io_slots_2;
  dat_dump<2>(f, Core_datapath_csr__io_slots_2, 0x2570);
  goto K455;
L456:
  Core_datapath__io_control_csr_slots_2__prev = Core_datapath__io_control_csr_slots_2;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_2, 0x2571);
  goto K456;
L457:
  Core_control__io_csr_slots_2__prev = Core_control__io_csr_slots_2;
  dat_dump<2>(f, Core_control__io_csr_slots_2, 0x2572);
  goto K457;
L458:
  Core_control_scheduler__io_slots_2__prev = Core_control_scheduler__io_slots_2;
  dat_dump<2>(f, Core_control_scheduler__io_slots_2, 0x2573);
  goto K458;
L459:
  Core_datapath_csr__io_slots_1__prev = Core_datapath_csr__io_slots_1;
  dat_dump<2>(f, Core_datapath_csr__io_slots_1, 0x2574);
  goto K459;
L460:
  Core_datapath__io_control_csr_slots_1__prev = Core_datapath__io_control_csr_slots_1;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_1, 0x2575);
  goto K460;
L461:
  Core_control__io_csr_slots_1__prev = Core_control__io_csr_slots_1;
  dat_dump<2>(f, Core_control__io_csr_slots_1, 0x2576);
  goto K461;
L462:
  Core_control_scheduler__io_slots_1__prev = Core_control_scheduler__io_slots_1;
  dat_dump<2>(f, Core_control_scheduler__io_slots_1, 0x2577);
  goto K462;
L463:
  Core_datapath_csr__io_slots_0__prev = Core_datapath_csr__io_slots_0;
  dat_dump<2>(f, Core_datapath_csr__io_slots_0, 0x2578);
  goto K463;
L464:
  Core_datapath__io_control_csr_slots_0__prev = Core_datapath__io_control_csr_slots_0;
  dat_dump<2>(f, Core_datapath__io_control_csr_slots_0, 0x2579);
  goto K464;
L465:
  Core_control__io_csr_slots_0__prev = Core_control__io_csr_slots_0;
  dat_dump<2>(f, Core_control__io_csr_slots_0, 0x257a);
  goto K465;
L466:
  Core_control_scheduler__io_slots_0__prev = Core_control_scheduler__io_slots_0;
  dat_dump<2>(f, Core_control_scheduler__io_slots_0, 0x257b);
  goto K466;
L467:
  Core_control__dec_alu_type__prev = Core_control__dec_alu_type;
  dat_dump<2>(f, Core_control__dec_alu_type, 0x257c);
  goto K467;
L468:
  Core_control__exe_reg_alu_type__prev = Core_control__exe_reg_alu_type;
  dat_dump<2>(f, Core_control__exe_reg_alu_type, 0x257d);
  goto K468;
L469:
  Core_control__dec_mem_type__prev = Core_control__dec_mem_type;
  dat_dump<2>(f, Core_control__dec_mem_type, 0x257e);
  goto K469;
L470:
  Core_control__exe_reg_mem_type__prev = Core_control__exe_reg_mem_type;
  dat_dump<2>(f, Core_control__exe_reg_mem_type, 0x2621);
  goto K470;
L471:
  Core_datapath__exe_alu_shift__prev = Core_datapath__exe_alu_shift;
  dat_dump<2>(f, Core_datapath__exe_alu_shift, 0x2622);
  goto K471;
L472:
  Core_control__exe_any_cause__prev = Core_control__exe_any_cause;
  dat_dump<2>(f, Core_control__exe_any_cause, 0x2623);
  goto K472;
L473:
  Core_control__exe_exception_cause__prev = Core_control__exe_exception_cause;
  dat_dump<2>(f, Core_control__exe_exception_cause, 0x2624);
  goto K473;
L474:
  Core_control__io_exe_cause__prev = Core_control__io_exe_cause;
  dat_dump<2>(f, Core_control__io_exe_cause, 0x2625);
  goto K474;
L475:
  Core_datapath__io_control_exe_cause__prev = Core_datapath__io_control_exe_cause;
  dat_dump<2>(f, Core_datapath__io_control_exe_cause, 0x2626);
  goto K475;
L476:
  Core_datapath_csr__io_cause__prev = Core_datapath_csr__io_cause;
  dat_dump<2>(f, Core_datapath_csr__io_cause, 0x2627);
  goto K476;
L477:
  Core_datapath_csr__reg_causes_3__prev = Core_datapath_csr__reg_causes_3;
  dat_dump<2>(f, Core_datapath_csr__reg_causes_3, 0x2628);
  goto K477;
L478:
  Core_datapath_csr__reg_causes_2__prev = Core_datapath_csr__reg_causes_2;
  dat_dump<2>(f, Core_datapath_csr__reg_causes_2, 0x2629);
  goto K478;
L479:
  Core_datapath_csr__reg_causes_1__prev = Core_datapath_csr__reg_causes_1;
  dat_dump<2>(f, Core_datapath_csr__reg_causes_1, 0x262a);
  goto K479;
L480:
  Core_datapath_csr__reg_causes_0__prev = Core_datapath_csr__reg_causes_0;
  dat_dump<2>(f, Core_datapath_csr__reg_causes_0, 0x262b);
  goto K480;
L481:
  Core_datapath_regfile__io_rs1_addr__prev = Core_datapath_regfile__io_rs1_addr;
  dat_dump<2>(f, Core_datapath_regfile__io_rs1_addr, 0x262c);
  goto K481;
L482:
  Core_datapath_regfile__io_rd_addr__prev = Core_datapath_regfile__io_rd_addr;
  dat_dump<2>(f, Core_datapath_regfile__io_rd_addr, 0x262d);
  goto K482;
L483:
  Core_datapath_regfile__io_rs2_addr__prev = Core_datapath_regfile__io_rs2_addr;
  dat_dump<2>(f, Core_datapath_regfile__io_rs2_addr, 0x262e);
  goto K483;
L484:
  Core_datapath__io_control_wb_rd_addr__prev = Core_datapath__io_control_wb_rd_addr;
  dat_dump<2>(f, Core_datapath__io_control_wb_rd_addr, 0x262f);
  goto K484;
L485:
  Core_control__io_wb_rd_addr__prev = Core_control__io_wb_rd_addr;
  dat_dump<2>(f, Core_control__io_wb_rd_addr, 0x2630);
  goto K485;
L486:
  Core_datapath__io_control_mem_rd_addr__prev = Core_datapath__io_control_mem_rd_addr;
  dat_dump<2>(f, Core_datapath__io_control_mem_rd_addr, 0x2631);
  goto K486;
L487:
  Core_control__io_mem_rd_addr__prev = Core_control__io_mem_rd_addr;
  dat_dump<2>(f, Core_control__io_mem_rd_addr, 0x2632);
  goto K487;
L488:
  Core_datapath__io_control_exe_rd_addr__prev = Core_datapath__io_control_exe_rd_addr;
  dat_dump<2>(f, Core_datapath__io_control_exe_rd_addr, 0x2633);
  goto K488;
L489:
  Core_control__io_exe_rd_addr__prev = Core_control__io_exe_rd_addr;
  dat_dump<2>(f, Core_control__io_exe_rd_addr, 0x2634);
  goto K489;
L490:
  Core_datapath__wb_reg_rd_addr__prev = Core_datapath__wb_reg_rd_addr;
  dat_dump<2>(f, Core_datapath__wb_reg_rd_addr, 0x2635);
  goto K490;
L491:
  Core_datapath__exe_reg_rd_addr__prev = Core_datapath__exe_reg_rd_addr;
  dat_dump<2>(f, Core_datapath__exe_reg_rd_addr, 0x2636);
  goto K491;
L492:
  Core_datapath__mem_reg_rd_addr__prev = Core_datapath__mem_reg_rd_addr;
  dat_dump<2>(f, Core_datapath__mem_reg_rd_addr, 0x2637);
  goto K492;
L493:
  Core_datapath_loadstore__io_bus_addr__prev = Core_datapath_loadstore__io_bus_addr;
  dat_dump<2>(f, Core_datapath_loadstore__io_bus_addr, 0x2638);
  goto K493;
L494:
  Core_datapath__io_bus_addr__prev = Core_datapath__io_bus_addr;
  dat_dump<2>(f, Core_datapath__io_bus_addr, 0x2639);
  goto K494;
L495:
  Core__io_bus_addr__prev = Core__io_bus_addr;
  dat_dump<2>(f, Core__io_bus_addr, 0x263a);
  goto K495;
L496:
  Core_datapath_loadstore__io_dmem_addr__prev = Core_datapath_loadstore__io_dmem_addr;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_addr, 0x263b);
  goto K496;
L497:
  Core_datapath__io_dmem_addr__prev = Core_datapath__io_dmem_addr;
  dat_dump<2>(f, Core_datapath__io_dmem_addr, 0x263c);
  goto K497;
L498:
  Core_dmem__io_core_addr__prev = Core_dmem__io_core_addr;
  dat_dump<2>(f, Core_dmem__io_core_addr, 0x263d);
  goto K498;
L499:
  Core_datapath__io_imem_r_addr__prev = Core_datapath__io_imem_r_addr;
  dat_dump<2>(f, Core_datapath__io_imem_r_addr, 0x263e);
  goto K499;
L500:
  Core_imem__io_core_r_addr__prev = Core_imem__io_core_r_addr;
  dat_dump<2>(f, Core_imem__io_core_r_addr, 0x263f);
  goto K500;
L501:
  Core_datapath_loadstore__io_imem_rw_addr__prev = Core_datapath_loadstore__io_imem_rw_addr;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_rw_addr, 0x2640);
  goto K501;
L502:
  Core_datapath__io_imem_rw_addr__prev = Core_datapath__io_imem_rw_addr;
  dat_dump<2>(f, Core_datapath__io_imem_rw_addr, 0x2641);
  goto K502;
L503:
  Core_imem__io_core_rw_addr__prev = Core_imem__io_core_rw_addr;
  dat_dump<2>(f, Core_imem__io_core_rw_addr, 0x2642);
  goto K503;
L504:
  Core_datapath_csr__io_rw_addr__prev = Core_datapath_csr__io_rw_addr;
  dat_dump<2>(f, Core_datapath_csr__io_rw_addr, 0x2643);
  goto K504;
L505:
  Core_datapath_loadstore__io_imem_r_addr__prev = Core_datapath_loadstore__io_imem_r_addr;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_r_addr, 0x2644);
  goto K505;
L506:
  Core_datapath__exe_reg_csr_addr__prev = Core_datapath__exe_reg_csr_addr;
  dat_dump<2>(f, Core_datapath__exe_reg_csr_addr, 0x2645);
  goto K506;
L507:
  Core__io_dmem_addr__prev = Core__io_dmem_addr;
  dat_dump<2>(f, Core__io_dmem_addr, 0x2646);
  goto K507;
L508:
  Core__io_imem_addr__prev = Core__io_imem_addr;
  dat_dump<2>(f, Core__io_imem_addr, 0x2647);
  goto K508;
L509:
  Core_datapath__def_exe_alu_result__prev = Core_datapath__def_exe_alu_result;
  dat_dump<2>(f, Core_datapath__def_exe_alu_result, 0x2648);
  goto K509;
L510:
  Core_datapath__exe_alu_result__prev = Core_datapath__exe_alu_result;
  dat_dump<2>(f, Core_datapath__exe_alu_result, 0x2649);
  goto K510;
L511:
  Core_datapath__exe_address__prev = Core_datapath__exe_address;
  dat_dump<2>(f, Core_datapath__exe_address, 0x264a);
  goto K511;
L512:
  Core_datapath_loadstore__io_addr__prev = Core_datapath_loadstore__io_addr;
  dat_dump<2>(f, Core_datapath_loadstore__io_addr, 0x264b);
  goto K512;
L513:
  Core_datapath_loadstore__io_data_in__prev = Core_datapath_loadstore__io_data_in;
  dat_dump<2>(f, Core_datapath_loadstore__io_data_in, 0x264c);
  goto K513;
L514:
  Core_datapath_loadstore__io_dmem_data_in__prev = Core_datapath_loadstore__io_dmem_data_in;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_data_in, 0x264d);
  goto K514;
L515:
  Core_datapath__io_dmem_data_in__prev = Core_datapath__io_dmem_data_in;
  dat_dump<2>(f, Core_datapath__io_dmem_data_in, 0x264e);
  goto K515;
L516:
  Core_dmem__io_core_data_in__prev = Core_dmem__io_core_data_in;
  dat_dump<2>(f, Core_dmem__io_core_data_in, 0x264f);
  goto K516;
L517:
  Core_dmem__dout__prev = Core_dmem__dout;
  dat_dump<2>(f, Core_dmem__dout, 0x2650);
  goto K517;
L518:
  Core_datapath__if_pc_plus4__prev = Core_datapath__if_pc_plus4;
  dat_dump<2>(f, Core_datapath__if_pc_plus4, 0x2651);
  goto K518;
L519:
  Core_datapath__io_control_dec_inst__prev = Core_datapath__io_control_dec_inst;
  dat_dump<2>(f, Core_datapath__io_control_dec_inst, 0x2652);
  goto K519;
L520:
  Core_control__io_dec_inst__prev = Core_control__io_dec_inst;
  dat_dump<2>(f, Core_control__io_dec_inst, 0x2653);
  goto K520;
L521:
  Core_datapath_csr__io_evecs_0__prev = Core_datapath_csr__io_evecs_0;
  dat_dump<2>(f, Core_datapath_csr__io_evecs_0, 0x2654);
  goto K521;
L522:
  Core_datapath_csr__io_evecs_1__prev = Core_datapath_csr__io_evecs_1;
  dat_dump<2>(f, Core_datapath_csr__io_evecs_1, 0x2655);
  goto K522;
L523:
  Core_datapath_csr__io_evecs_2__prev = Core_datapath_csr__io_evecs_2;
  dat_dump<2>(f, Core_datapath_csr__io_evecs_2, 0x2656);
  goto K523;
L524:
  Core_datapath_csr__io_evecs_3__prev = Core_datapath_csr__io_evecs_3;
  dat_dump<2>(f, Core_datapath_csr__io_evecs_3, 0x2657);
  goto K524;
L525:
  Core_datapath__mem_evec__prev = Core_datapath__mem_evec;
  dat_dump<2>(f, Core_datapath__mem_evec, 0x2658);
  goto K525;
L526:
  Core_datapath__next_pcs_0__prev = Core_datapath__next_pcs_0;
  dat_dump<2>(f, Core_datapath__next_pcs_0, 0x2659);
  goto K526;
L527:
  Core_datapath__next_pcs_1__prev = Core_datapath__next_pcs_1;
  dat_dump<2>(f, Core_datapath__next_pcs_1, 0x265a);
  goto K527;
L528:
  Core_datapath__next_pcs_2__prev = Core_datapath__next_pcs_2;
  dat_dump<2>(f, Core_datapath__next_pcs_2, 0x265b);
  goto K528;
L529:
  Core_datapath__next_pcs_3__prev = Core_datapath__next_pcs_3;
  dat_dump<2>(f, Core_datapath__next_pcs_3, 0x265c);
  goto K529;
L530:
  Core_datapath__next_pc__prev = Core_datapath__next_pc;
  dat_dump<2>(f, Core_datapath__next_pc, 0x265d);
  goto K530;
L531:
  Core_imem__dout_r__prev = Core_imem__dout_r;
  dat_dump<2>(f, Core_imem__dout_r, 0x265e);
  goto K531;
L532:
  Core_datapath_loadstore__io_imem_rw_data_in__prev = Core_datapath_loadstore__io_imem_rw_data_in;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_rw_data_in, 0x265f);
  goto K532;
L533:
  Core_datapath__io_imem_rw_data_in__prev = Core_datapath__io_imem_rw_data_in;
  dat_dump<2>(f, Core_datapath__io_imem_rw_data_in, 0x2660);
  goto K533;
L534:
  Core_imem__io_core_rw_data_in__prev = Core_imem__io_core_rw_data_in;
  dat_dump<2>(f, Core_imem__io_core_rw_data_in, 0x2661);
  goto K534;
L535:
  Core_imem__R0__prev = Core_imem__R0;
  dat_dump<2>(f, Core_imem__R0, 0x2662);
  goto K535;
L536:
  Core_datapath_csr__io_rw_data_in__prev = Core_datapath_csr__io_rw_data_in;
  dat_dump<2>(f, Core_datapath_csr__io_rw_data_in, 0x2663);
  goto K536;
L537:
  Core_datapath_csr__reg_to_host__prev = Core_datapath_csr__reg_to_host;
  dat_dump<2>(f, Core_datapath_csr__reg_to_host, 0x2664);
  goto K537;
L538:
  Core_datapath_csr__io_epc__prev = Core_datapath_csr__io_epc;
  dat_dump<2>(f, Core_datapath_csr__io_epc, 0x2665);
  goto K538;
L539:
  Core_datapath_csr__reg_epcs_3__prev = Core_datapath_csr__reg_epcs_3;
  dat_dump<2>(f, Core_datapath_csr__reg_epcs_3, 0x2666);
  goto K539;
L540:
  Core_datapath_csr__reg_epcs_2__prev = Core_datapath_csr__reg_epcs_2;
  dat_dump<2>(f, Core_datapath_csr__reg_epcs_2, 0x2667);
  goto K540;
L541:
  Core_datapath_csr__reg_epcs_1__prev = Core_datapath_csr__reg_epcs_1;
  dat_dump<2>(f, Core_datapath_csr__reg_epcs_1, 0x2668);
  goto K541;
L542:
  Core_datapath_csr__reg_epcs_0__prev = Core_datapath_csr__reg_epcs_0;
  dat_dump<2>(f, Core_datapath_csr__reg_epcs_0, 0x2669);
  goto K542;
L543:
  Core_datapath_csr__reg_compare_3__prev = Core_datapath_csr__reg_compare_3;
  dat_dump<2>(f, Core_datapath_csr__reg_compare_3, 0x266a);
  goto K543;
L544:
  Core_datapath_csr__reg_compare_1__prev = Core_datapath_csr__reg_compare_1;
  dat_dump<2>(f, Core_datapath_csr__reg_compare_1, 0x266b);
  goto K544;
L545:
  Core_datapath_csr__reg_compare_0__prev = Core_datapath_csr__reg_compare_0;
  dat_dump<2>(f, Core_datapath_csr__reg_compare_0, 0x266c);
  goto K545;
L546:
  Core_datapath_csr__reg_compare_2__prev = Core_datapath_csr__reg_compare_2;
  dat_dump<2>(f, Core_datapath_csr__reg_compare_2, 0x266d);
  goto K546;
L547:
  Core_imem__io_core_r_data_out__prev = Core_imem__io_core_r_data_out;
  dat_dump<2>(f, Core_imem__io_core_r_data_out, 0x266e);
  goto K547;
L548:
  Core_datapath__io_imem_r_data_out__prev = Core_datapath__io_imem_r_data_out;
  dat_dump<2>(f, Core_datapath__io_imem_r_data_out, 0x266f);
  goto K548;
L549:
  Core_datapath_regfile__dout1__prev = Core_datapath_regfile__dout1;
  dat_dump<2>(f, Core_datapath_regfile__dout1, 0x2670);
  goto K549;
L550:
  Core_datapath__mem_mul_result__prev = Core_datapath__mem_mul_result;
  dat_dump<2>(f, Core_datapath__mem_mul_result, 0x2671);
  goto K550;
L551:
  Core__io_bus_data_out__prev = Core__io_bus_data_out;
  dat_dump<2>(f, Core__io_bus_data_out, 0x2672);
  goto K551;
L552:
  Core_datapath__io_bus_data_out__prev = Core_datapath__io_bus_data_out;
  dat_dump<2>(f, Core_datapath__io_bus_data_out, 0x2673);
  goto K552;
L553:
  Core_datapath_loadstore__io_bus_data_out__prev = Core_datapath_loadstore__io_bus_data_out;
  dat_dump<2>(f, Core_datapath_loadstore__io_bus_data_out, 0x2674);
  goto K553;
L554:
  Core_imem__io_core_rw_data_out__prev = Core_imem__io_core_rw_data_out;
  dat_dump<2>(f, Core_imem__io_core_rw_data_out, 0x2675);
  goto K554;
L555:
  Core_datapath__io_imem_rw_data_out__prev = Core_datapath__io_imem_rw_data_out;
  dat_dump<2>(f, Core_datapath__io_imem_rw_data_out, 0x2676);
  goto K555;
L556:
  Core_datapath_loadstore__io_imem_rw_data_out__prev = Core_datapath_loadstore__io_imem_rw_data_out;
  dat_dump<2>(f, Core_datapath_loadstore__io_imem_rw_data_out, 0x2677);
  goto K556;
L557:
  Core_dmem__io_core_data_out__prev = Core_dmem__io_core_data_out;
  dat_dump<2>(f, Core_dmem__io_core_data_out, 0x2678);
  goto K557;
L558:
  Core_datapath__io_dmem_data_out__prev = Core_datapath__io_dmem_data_out;
  dat_dump<2>(f, Core_datapath__io_dmem_data_out, 0x2679);
  goto K558;
L559:
  Core_datapath_loadstore__io_dmem_data_out__prev = Core_datapath_loadstore__io_dmem_data_out;
  dat_dump<2>(f, Core_datapath_loadstore__io_dmem_data_out, 0x267a);
  goto K559;
L560:
  Core_datapath_loadstore__io_data_out__prev = Core_datapath_loadstore__io_data_out;
  dat_dump<2>(f, Core_datapath_loadstore__io_data_out, 0x267b);
  goto K560;
L561:
  Core_datapath__mem_rd_data__prev = Core_datapath__mem_rd_data;
  dat_dump<2>(f, Core_datapath__mem_rd_data, 0x267c);
  goto K561;
L562:
  Core_datapath_regfile__io_rd_data__prev = Core_datapath_regfile__io_rd_data;
  dat_dump<2>(f, Core_datapath_regfile__io_rd_data, 0x267d);
  goto K562;
L563:
  Core_datapath_regfile__dout2__prev = Core_datapath_regfile__dout2;
  dat_dump<2>(f, Core_datapath_regfile__dout2, 0x267e);
  goto K563;
L564:
  Core_datapath_regfile__io_rs1_data__prev = Core_datapath_regfile__io_rs1_data;
  dat_dump<2>(f, Core_datapath_regfile__io_rs1_data, 0x2721);
  goto K564;
L565:
  Core_datapath__wb_rd_data__prev = Core_datapath__wb_rd_data;
  dat_dump<2>(f, Core_datapath__wb_rd_data, 0x2722);
  goto K565;
L566:
  Core_datapath_csr__io_rw_data_out__prev = Core_datapath_csr__io_rw_data_out;
  dat_dump<2>(f, Core_datapath_csr__io_rw_data_out, 0x2723);
  goto K566;
L567:
  Core_datapath__exe_rd_data__prev = Core_datapath__exe_rd_data;
  dat_dump<2>(f, Core_datapath__exe_rd_data, 0x2724);
  goto K567;
L568:
  Core_datapath__dec_rs1_data__prev = Core_datapath__dec_rs1_data;
  dat_dump<2>(f, Core_datapath__dec_rs1_data, 0x2725);
  goto K568;
L569:
  Core_datapath__exe_reg_rs1_data__prev = Core_datapath__exe_reg_rs1_data;
  dat_dump<2>(f, Core_datapath__exe_reg_rs1_data, 0x2726);
  goto K569;
L570:
  Core_datapath_regfile__io_rs2_data__prev = Core_datapath_regfile__io_rs2_data;
  dat_dump<2>(f, Core_datapath_regfile__io_rs2_data, 0x2727);
  goto K570;
L571:
  Core_datapath__dec_rs2_data__prev = Core_datapath__dec_rs2_data;
  dat_dump<2>(f, Core_datapath__dec_rs2_data, 0x2728);
  goto K571;
L572:
  Core_datapath__exe_reg_rs2_data__prev = Core_datapath__exe_reg_rs2_data;
  dat_dump<2>(f, Core_datapath__exe_reg_rs2_data, 0x2729);
  goto K572;
L573:
  Core_datapath__dec_imm_i__prev = Core_datapath__dec_imm_i;
  dat_dump<2>(f, Core_datapath__dec_imm_i, 0x272a);
  goto K573;
L574:
  Core_datapath__dec_imm_z__prev = Core_datapath__dec_imm_z;
  dat_dump<2>(f, Core_datapath__dec_imm_z, 0x272b);
  goto K574;
L575:
  Core_datapath__dec_imm_j__prev = Core_datapath__dec_imm_j;
  dat_dump<2>(f, Core_datapath__dec_imm_j, 0x272c);
  goto K575;
L576:
  Core_datapath__dec_imm_u__prev = Core_datapath__dec_imm_u;
  dat_dump<2>(f, Core_datapath__dec_imm_u, 0x272d);
  goto K576;
L577:
  Core_datapath__dec_imm_b__prev = Core_datapath__dec_imm_b;
  dat_dump<2>(f, Core_datapath__dec_imm_b, 0x272e);
  goto K577;
L578:
  Core_datapath__dec_imm_s__prev = Core_datapath__dec_imm_s;
  dat_dump<2>(f, Core_datapath__dec_imm_s, 0x272f);
  goto K578;
L579:
  Core_datapath__dec_imm__prev = Core_datapath__dec_imm;
  dat_dump<2>(f, Core_datapath__dec_imm, 0x2730);
  goto K579;
L580:
  Core_datapath__dec_csr_data__prev = Core_datapath__dec_csr_data;
  dat_dump<2>(f, Core_datapath__dec_csr_data, 0x2731);
  goto K580;
L581:
  Core_datapath__exe_csr_data__prev = Core_datapath__exe_csr_data;
  dat_dump<2>(f, Core_datapath__exe_csr_data, 0x2732);
  goto K581;
L582:
  Core_datapath__if_reg_pcs_3__prev = Core_datapath__if_reg_pcs_3;
  dat_dump<2>(f, Core_datapath__if_reg_pcs_3, 0x2733);
  goto K582;
L583:
  Core_datapath__if_reg_pcs_2__prev = Core_datapath__if_reg_pcs_2;
  dat_dump<2>(f, Core_datapath__if_reg_pcs_2, 0x2734);
  goto K583;
L584:
  Core_datapath__if_reg_pcs_1__prev = Core_datapath__if_reg_pcs_1;
  dat_dump<2>(f, Core_datapath__if_reg_pcs_1, 0x2735);
  goto K584;
L585:
  Core_datapath__dec_op1__prev = Core_datapath__dec_op1;
  dat_dump<2>(f, Core_datapath__dec_op1, 0x2736);
  goto K585;
L586:
  Core_datapath__exe_reg_op1__prev = Core_datapath__exe_reg_op1;
  dat_dump<2>(f, Core_datapath__exe_reg_op1, 0x2737);
  goto K586;
L587:
  Core_datapath__dec_reg_pc4__prev = Core_datapath__dec_reg_pc4;
  dat_dump<2>(f, Core_datapath__dec_reg_pc4, 0x2738);
  goto K587;
L588:
  Core_datapath__exe_reg_pc4__prev = Core_datapath__exe_reg_pc4;
  dat_dump<2>(f, Core_datapath__exe_reg_pc4, 0x2739);
  goto K588;
L589:
  Core_datapath__mem_reg_rd_data__prev = Core_datapath__mem_reg_rd_data;
  dat_dump<2>(f, Core_datapath__mem_reg_rd_data, 0x273a);
  goto K589;
L590:
  Core_datapath__wb_reg_rd_data__prev = Core_datapath__wb_reg_rd_data;
  dat_dump<2>(f, Core_datapath__wb_reg_rd_data, 0x273b);
  goto K590;
L591:
  Core_datapath__dec_reg_inst__prev = Core_datapath__dec_reg_inst;
  dat_dump<2>(f, Core_datapath__dec_reg_inst, 0x273c);
  goto K591;
L592:
  Core_datapath__dec_op2__prev = Core_datapath__dec_op2;
  dat_dump<2>(f, Core_datapath__dec_op2, 0x273d);
  goto K592;
L593:
  Core_datapath__exe_reg_op2__prev = Core_datapath__exe_reg_op2;
  dat_dump<2>(f, Core_datapath__exe_reg_op2, 0x273e);
  goto K593;
L594:
  Core_datapath__if_reg_pcs_0__prev = Core_datapath__if_reg_pcs_0;
  dat_dump<2>(f, Core_datapath__if_reg_pcs_0, 0x273f);
  goto K594;
L595:
  Core_datapath__if_reg_pc__prev = Core_datapath__if_reg_pc;
  dat_dump<2>(f, Core_datapath__if_reg_pc, 0x2740);
  goto K595;
L596:
  Core_datapath__dec_reg_pc__prev = Core_datapath__dec_reg_pc;
  dat_dump<2>(f, Core_datapath__dec_reg_pc, 0x2741);
  goto K596;
L597:
  Core_datapath__exe_reg_pc__prev = Core_datapath__exe_reg_pc;
  dat_dump<2>(f, Core_datapath__exe_reg_pc, 0x2742);
  goto K597;
L598:
  Core_imem__io_bus_data_out__prev = Core_imem__io_bus_data_out;
  dat_dump<2>(f, Core_imem__io_bus_data_out, 0x2743);
  goto K598;
L599:
  Core__io_imem_data_out__prev = Core__io_imem_data_out;
  dat_dump<2>(f, Core__io_imem_data_out, 0x2744);
  goto K599;
L600:
  Core_dmem__io_bus_data_out__prev = Core_dmem__io_bus_data_out;
  dat_dump<2>(f, Core_dmem__io_bus_data_out, 0x2745);
  goto K600;
L601:
  Core__io_dmem_data_out__prev = Core__io_dmem_data_out;
  dat_dump<2>(f, Core__io_dmem_data_out, 0x2746);
  goto K601;
L602:
  Core_datapath_loadstore__io_bus_data_in__prev = Core_datapath_loadstore__io_bus_data_in;
  dat_dump<2>(f, Core_datapath_loadstore__io_bus_data_in, 0x2747);
  goto K602;
L603:
  Core_datapath__io_bus_data_in__prev = Core_datapath__io_bus_data_in;
  dat_dump<2>(f, Core_datapath__io_bus_data_in, 0x2748);
  goto K603;
L604:
  Core__io_bus_data_in__prev = Core__io_bus_data_in;
  dat_dump<2>(f, Core__io_bus_data_in, 0x2749);
  goto K604;
L605:
  Core_datapath_csr__io_host_to_host__prev = Core_datapath_csr__io_host_to_host;
  dat_dump<2>(f, Core_datapath_csr__io_host_to_host, 0x274a);
  goto K605;
L606:
  Core_datapath__io_host_to_host__prev = Core_datapath__io_host_to_host;
  dat_dump<2>(f, Core_datapath__io_host_to_host, 0x274b);
  goto K606;
L607:
  Core__io_host_to_host__prev = Core__io_host_to_host;
  dat_dump<2>(f, Core__io_host_to_host, 0x274c);
  goto K607;
L608:
  Core__io_dmem_data_in__prev = Core__io_dmem_data_in;
  dat_dump<2>(f, Core__io_dmem_data_in, 0x274d);
  goto K608;
L609:
  Core__io_imem_data_in__prev = Core__io_imem_data_in;
  dat_dump<2>(f, Core__io_imem_data_in, 0x274e);
  goto K609;
L610:
  Core_datapath_csr__status_0__prev = Core_datapath_csr__status_0;
  dat_dump<2>(f, Core_datapath_csr__status_0, 0x274f);
  goto K610;
L611:
  Core_datapath_csr__status_1__prev = Core_datapath_csr__status_1;
  dat_dump<2>(f, Core_datapath_csr__status_1, 0x2750);
  goto K611;
L612:
  Core_datapath_csr__status_2__prev = Core_datapath_csr__status_2;
  dat_dump<2>(f, Core_datapath_csr__status_2, 0x2751);
  goto K612;
L613:
  Core_datapath_csr__status_3__prev = Core_datapath_csr__status_3;
  dat_dump<2>(f, Core_datapath_csr__status_3, 0x2752);
  goto K613;
L614:
  Core_datapath_csr__data_out__prev = Core_datapath_csr__data_out;
  dat_dump<2>(f, Core_datapath_csr__data_out, 0x2753);
  goto K614;
L615:
  Core_datapath_csr__data_in__prev = Core_datapath_csr__data_in;
  dat_dump<2>(f, Core_datapath_csr__data_in, 0x2754);
  goto K615;
L616:
  Core_datapath_csr__reg_sup0_3__prev = Core_datapath_csr__reg_sup0_3;
  dat_dump<2>(f, Core_datapath_csr__reg_sup0_3, 0x2755);
  goto K616;
L617:
  Core_datapath_csr__reg_sup0_2__prev = Core_datapath_csr__reg_sup0_2;
  dat_dump<2>(f, Core_datapath_csr__reg_sup0_2, 0x2756);
  goto K617;
L618:
  Core_datapath_csr__reg_sup0_1__prev = Core_datapath_csr__reg_sup0_1;
  dat_dump<2>(f, Core_datapath_csr__reg_sup0_1, 0x2757);
  goto K618;
L619:
  Core_datapath_csr__reg_sup0_0__prev = Core_datapath_csr__reg_sup0_0;
  dat_dump<2>(f, Core_datapath_csr__reg_sup0_0, 0x2758);
  goto K619;
L620:
  Core_datapath_csr__reg_evecs_3__prev = Core_datapath_csr__reg_evecs_3;
  dat_dump<2>(f, Core_datapath_csr__reg_evecs_3, 0x2759);
  goto K620;
L621:
  Core_datapath_csr__reg_evecs_2__prev = Core_datapath_csr__reg_evecs_2;
  dat_dump<2>(f, Core_datapath_csr__reg_evecs_2, 0x275a);
  goto K621;
L622:
  Core_datapath_csr__reg_evecs_1__prev = Core_datapath_csr__reg_evecs_1;
  dat_dump<2>(f, Core_datapath_csr__reg_evecs_1, 0x275b);
  goto K622;
L623:
  Core_datapath_csr__reg_evecs_0__prev = Core_datapath_csr__reg_evecs_0;
  dat_dump<2>(f, Core_datapath_csr__reg_evecs_0, 0x275c);
  goto K623;
L624:
  Core_datapath_csr__reg_time__prev = Core_datapath_csr__reg_time;
  dat_dump<2>(f, Core_datapath_csr__reg_time, 0x275d);
  goto K624;
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
  { T57 = TERNARY_1(T56, Core_datapath_csr__reg_ie_1.values[0], Core_datapath_csr__reg_ie_0.values[0]);}
  val_t T58;
  T58 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T59;
  { T59 = TERNARY_1(T58, Core_datapath_csr__reg_ie_3.values[0], Core_datapath_csr__reg_ie_2.values[0]);}
  val_t T60;
  T60 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T61;
  { T61 = TERNARY_1(T60, T59, T57);}
  val_t T62;
  { T62 = T61 & T55;}
  { Core_datapath_csr__int_ext.values[0] = T62;}
  { Core_datapath_csr__io_int_ext.values[0] = Core_datapath_csr__int_ext.values[0];}
  { Core_datapath__io_control_exe_int_ext.values[0] = Core_datapath_csr__io_int_ext.values[0];}
  { Core_control__io_exe_int_ext.values[0] = Core_datapath__io_control_exe_int_ext.values[0];}
  val_t T63;
  { T63 = Core_datapath_csr__reg_time.values[0];}
  T63 = T63 & 0xffffffffL;
  val_t T64;
  { T64 = T63-Core_datapath_csr__reg_compare_0.values[0];}
  T64 = T64 & 0xffffffffL;
  val_t T65;
  T65 = (T64 >> 31) & 1;
  val_t T66;
  T66 = T65 == 0x0L;
  { Core_datapath_csr__expired_0.values[0] = T66;}
  val_t T67;
  { T67 = Core_datapath_csr__reg_time.values[0];}
  T67 = T67 & 0xffffffffL;
  val_t T68;
  { T68 = T67-Core_datapath_csr__reg_compare_1.values[0];}
  T68 = T68 & 0xffffffffL;
  val_t T69;
  T69 = (T68 >> 31) & 1;
  val_t T70;
  T70 = T69 == 0x0L;
  { Core_datapath_csr__expired_1.values[0] = T70;}
  val_t T71;
  T71 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T72;
  { T72 = TERNARY_1(T71, Core_datapath_csr__expired_1.values[0], Core_datapath_csr__expired_0.values[0]);}
  val_t T73;
  { T73 = Core_datapath_csr__reg_time.values[0];}
  T73 = T73 & 0xffffffffL;
  val_t T74;
  { T74 = T73-Core_datapath_csr__reg_compare_2.values[0];}
  T74 = T74 & 0xffffffffL;
  val_t T75;
  T75 = (T74 >> 31) & 1;
  val_t T76;
  T76 = T75 == 0x0L;
  { Core_datapath_csr__expired_2.values[0] = T76;}
  val_t T77;
  { T77 = Core_datapath_csr__reg_time.values[0];}
  T77 = T77 & 0xffffffffL;
  val_t T78;
  { T78 = T77-Core_datapath_csr__reg_compare_3.values[0];}
  T78 = T78 & 0xffffffffL;
  val_t T79;
  T79 = (T78 >> 31) & 1;
  val_t T80;
  T80 = T79 == 0x0L;
  { Core_datapath_csr__expired_3.values[0] = T80;}
  val_t T81;
  T81 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T82;
  { T82 = TERNARY_1(T81, Core_datapath_csr__expired_3.values[0], Core_datapath_csr__expired_2.values[0]);}
  val_t T83;
  T83 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T84;
  { T84 = TERNARY_1(T83, T82, T72);}
  val_t T85;
  T85 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T86;
  { T86 = TERNARY_1(T85, Core_datapath_csr__reg_timer_1.values[0], Core_datapath_csr__reg_timer_0.values[0]);}
  val_t T87;
  T87 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T88;
  { T88 = TERNARY_1(T87, Core_datapath_csr__reg_timer_3.values[0], Core_datapath_csr__reg_timer_2.values[0]);}
  val_t T89;
  T89 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T90;
  { T90 = TERNARY_1(T89, T88, T86);}
  val_t T91;
  T91 = T90 == 0x2L;
  { Core_control__io_exe_valid.values[0] = Core_control__exe_reg_valid.values[0];}
  { Core_datapath__io_control_exe_valid.values[0] = Core_control__io_exe_valid.values[0];}
  { Core_datapath_csr__io_rw_valid.values[0] = Core_datapath__io_control_exe_valid.values[0];}
  val_t T92;
  { T92 = Core_datapath_csr__io_rw_valid.values[0] & T91;}
  val_t T93;
  { T93 = T92 & T84;}
  val_t T94;
  T94 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T95;
  { T95 = TERNARY_1(T94, Core_datapath_csr__reg_mtie_1.values[0], Core_datapath_csr__reg_mtie_0.values[0]);}
  val_t T96;
  T96 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T97;
  { T97 = TERNARY_1(T96, Core_datapath_csr__reg_mtie_3.values[0], Core_datapath_csr__reg_mtie_2.values[0]);}
  val_t T98;
  T98 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T99;
  { T99 = TERNARY_1(T98, T97, T95);}
  val_t T100;
  { T100 = T99 | T93;}
  val_t T101;
  { T101 = T61 & T100;}
  { Core_datapath_csr__int_expire.values[0] = T101;}
  { Core_datapath_csr__io_int_expire.values[0] = Core_datapath_csr__int_expire.values[0];}
  { Core_datapath__io_control_exe_int_expire.values[0] = Core_datapath_csr__io_int_expire.values[0];}
  { Core_control__io_exe_int_expire.values[0] = Core_datapath__io_control_exe_int_expire.values[0];}
  val_t T102;
  T102 = T90 == 0x3L;
  val_t T103;
  { T103 = Core_datapath_csr__io_rw_valid.values[0] & T102;}
  val_t T104;
  { T104 = T103 & T84;}
  { Core_datapath_csr__exc_expire.values[0] = T104;}
  { Core_datapath_csr__io_exc_expire.values[0] = Core_datapath_csr__exc_expire.values[0];}
  { Core_datapath__io_control_exe_exc_expire.values[0] = Core_datapath_csr__io_exc_expire.values[0];}
  { Core_control__io_exe_exc_expire.values[0] = Core_datapath__io_control_exe_exc_expire.values[0];}
  val_t T105;
  { T105 = Core_control__io_exe_exc_expire.values[0] | Core_control__io_exe_int_expire.values[0];}
  { Core_control__exe_any_exc.values[0] = T105 | Core_control__io_exe_int_ext.values[0];}
  { Core_control__exe_kill.values[0] = Core_control__exe_reg_exc.values[0] | Core_control__exe_any_exc.values[0];}
  { Core_control__io_exe_kill.values[0] = Core_control__exe_kill.values[0];}
  { Core_datapath__io_control_exe_kill.values[0] = Core_control__io_exe_kill.values[0];}
  { Core_datapath_loadstore__io_kill.values[0] = Core_datapath__io_control_exe_kill.values[0];}
  val_t T106;
  { T106 = Core_datapath_loadstore__io_kill.values[0] ^ 0x1L;}
  { Core_datapath_loadstore__store_fault.values[0] = 0x0L;}
  val_t T107;
  { T107 = Core_datapath_loadstore__store_fault.values[0] ^ 0x1L;}
  val_t T108;
  { T108 = Core_datapath_loadstore__io_addr.values[0];}
  T108 = T108 & 0x3L;
  val_t T109;
  T109 = T108 != 0x0L;
  val_t T110;
  T110 = Core_datapath_loadstore__io_mem_type.values[0] == 0xaL;
  val_t T111;
  { T111 = T110 & T109;}
  val_t T112;
  T112 = (Core_datapath_loadstore__io_addr.values[0] >> 0) & 1;
  val_t T113;
  T113 = T112 != 0x0L;
  val_t T114;
  T114 = Core_datapath_loadstore__io_mem_type.values[0] == 0x9L;
  val_t T115;
  { T115 = T114 & T113;}
  val_t T116;
  { T116 = T115 | T111;}
  { Core_control__exe_store.values[0] = Core_control__exe_reg_store.values[0] & Core_control__exe_reg_valid.values[0];}
  { Core_control__io_exe_store.values[0] = Core_control__exe_store.values[0];}
  { Core_datapath__io_control_exe_store.values[0] = Core_control__io_exe_store.values[0];}
  { Core_datapath_loadstore__io_store.values[0] = Core_datapath__io_control_exe_store.values[0];}
  val_t T117;
  { T117 = Core_datapath_loadstore__io_store.values[0] & T116;}
  { Core_datapath_loadstore__store_misaligned.values[0] = T117;}
  val_t T118;
  { T118 = Core_datapath_loadstore__store_misaligned.values[0] ^ 0x1L;}
  val_t T119;
  { T119 = Core_datapath_loadstore__io_addr.values[0] >> 30;}
  T119 = T119 & 0x3L;
  Core_datapath_loadstore__bus_op.values[0] = T119 == 0x1L;
  { Core_datapath_csr__io_imem_protection_0.values[0] = Core_datapath_csr__reg_imem_protection_0.values[0];}
  { Core_datapath_loadstore__io_imem_protection_0.values[0] = Core_datapath_csr__io_imem_protection_0.values[0];}
  { Core_datapath_csr__io_imem_protection_1.values[0] = Core_datapath_csr__reg_imem_protection_1.values[0];}
  { Core_datapath_loadstore__io_imem_protection_1.values[0] = Core_datapath_csr__io_imem_protection_1.values[0];}
  val_t T120;
  { T120 = Core_datapath_loadstore__io_addr.values[0] >> 11;}
  T120 = T120 & 0x7L;
  val_t T121;
  T121 = (T120 >> 0) & 1;
  val_t T122;
  { T122 = TERNARY_1(T121, Core_datapath_loadstore__io_imem_protection_1.values[0], Core_datapath_loadstore__io_imem_protection_0.values[0]);}
  { Core_datapath_csr__io_imem_protection_2.values[0] = Core_datapath_csr__reg_imem_protection_2.values[0];}
  { Core_datapath_loadstore__io_imem_protection_2.values[0] = Core_datapath_csr__io_imem_protection_2.values[0];}
  { Core_datapath_csr__io_imem_protection_3.values[0] = Core_datapath_csr__reg_imem_protection_3.values[0];}
  { Core_datapath_loadstore__io_imem_protection_3.values[0] = Core_datapath_csr__io_imem_protection_3.values[0];}
  val_t T123;
  T123 = (T120 >> 0) & 1;
  val_t T124;
  { T124 = TERNARY_1(T123, Core_datapath_loadstore__io_imem_protection_3.values[0], Core_datapath_loadstore__io_imem_protection_2.values[0]);}
  val_t T125;
  T125 = (T120 >> 1) & 1;
  val_t T126;
  { T126 = TERNARY_1(T125, T124, T122);}
  { Core_datapath_csr__io_imem_protection_4.values[0] = Core_datapath_csr__reg_imem_protection_4.values[0];}
  { Core_datapath_loadstore__io_imem_protection_4.values[0] = Core_datapath_csr__io_imem_protection_4.values[0];}
  { Core_datapath_csr__io_imem_protection_5.values[0] = Core_datapath_csr__reg_imem_protection_5.values[0];}
  { Core_datapath_loadstore__io_imem_protection_5.values[0] = Core_datapath_csr__io_imem_protection_5.values[0];}
  val_t T127;
  T127 = (T120 >> 0) & 1;
  val_t T128;
  { T128 = TERNARY_1(T127, Core_datapath_loadstore__io_imem_protection_5.values[0], Core_datapath_loadstore__io_imem_protection_4.values[0]);}
  { Core_datapath_csr__io_imem_protection_6.values[0] = Core_datapath_csr__reg_imem_protection_6.values[0];}
  { Core_datapath_loadstore__io_imem_protection_6.values[0] = Core_datapath_csr__io_imem_protection_6.values[0];}
  { Core_datapath_csr__io_imem_protection_7.values[0] = Core_datapath_csr__reg_imem_protection_7.values[0];}
  { Core_datapath_loadstore__io_imem_protection_7.values[0] = Core_datapath_csr__io_imem_protection_7.values[0];}
  val_t T129;
  T129 = (T120 >> 0) & 1;
  val_t T130;
  { T130 = TERNARY_1(T129, Core_datapath_loadstore__io_imem_protection_7.values[0], Core_datapath_loadstore__io_imem_protection_6.values[0]);}
  val_t T131;
  T131 = (T120 >> 1) & 1;
  val_t T132;
  { T132 = TERNARY_1(T131, T130, T128);}
  val_t T133;
  T133 = (T120 >> 2) & 1;
  val_t T134;
  { T134 = TERNARY_1(T133, T132, T126);}
  val_t T135;
  T135 = T134 != 0xcL;
  { Core_datapath_loadstore__io_thread.values[0] = Core_datapath__exe_reg_tid.values[0];}
  val_t T136;
  { T136 = T134;}
  T136 = T136 & 0x3L;
  val_t T137;
  T137 = T136 == Core_datapath_loadstore__io_thread.values[0];
  val_t T138;
  T138 = T134 == 0x8L;
  val_t T139;
  { T139 = T138 | T137;}
  val_t T140;
  { T140 = T139 & T135;}
  val_t T141;
  { T141 = Core_datapath_loadstore__io_addr.values[0] >> 29;}
  T141 = T141 & 0x7L;
  Core_datapath_loadstore__imem_op.values[0] = T141 == 0x0L;
  val_t T142;
  { T142 = Core_datapath_loadstore__imem_op.values[0] & T140;}
  { Core_datapath_csr__io_dmem_protection_0.values[0] = Core_datapath_csr__reg_dmem_protection_0.values[0];}
  { Core_datapath_loadstore__io_dmem_protection_0.values[0] = Core_datapath_csr__io_dmem_protection_0.values[0];}
  { Core_datapath_csr__io_dmem_protection_1.values[0] = Core_datapath_csr__reg_dmem_protection_1.values[0];}
  { Core_datapath_loadstore__io_dmem_protection_1.values[0] = Core_datapath_csr__io_dmem_protection_1.values[0];}
  val_t T143;
  { T143 = Core_datapath_loadstore__io_addr.values[0] >> 11;}
  T143 = T143 & 0x7L;
  val_t T144;
  T144 = (T143 >> 0) & 1;
  val_t T145;
  { T145 = TERNARY_1(T144, Core_datapath_loadstore__io_dmem_protection_1.values[0], Core_datapath_loadstore__io_dmem_protection_0.values[0]);}
  { Core_datapath_csr__io_dmem_protection_2.values[0] = Core_datapath_csr__reg_dmem_protection_2.values[0];}
  { Core_datapath_loadstore__io_dmem_protection_2.values[0] = Core_datapath_csr__io_dmem_protection_2.values[0];}
  { Core_datapath_csr__io_dmem_protection_3.values[0] = Core_datapath_csr__reg_dmem_protection_3.values[0];}
  { Core_datapath_loadstore__io_dmem_protection_3.values[0] = Core_datapath_csr__io_dmem_protection_3.values[0];}
  val_t T146;
  T146 = (T143 >> 0) & 1;
  val_t T147;
  { T147 = TERNARY_1(T146, Core_datapath_loadstore__io_dmem_protection_3.values[0], Core_datapath_loadstore__io_dmem_protection_2.values[0]);}
  val_t T148;
  T148 = (T143 >> 1) & 1;
  val_t T149;
  { T149 = TERNARY_1(T148, T147, T145);}
  { Core_datapath_csr__io_dmem_protection_4.values[0] = Core_datapath_csr__reg_dmem_protection_4.values[0];}
  { Core_datapath_loadstore__io_dmem_protection_4.values[0] = Core_datapath_csr__io_dmem_protection_4.values[0];}
  { Core_datapath_csr__io_dmem_protection_5.values[0] = Core_datapath_csr__reg_dmem_protection_5.values[0];}
  { Core_datapath_loadstore__io_dmem_protection_5.values[0] = Core_datapath_csr__io_dmem_protection_5.values[0];}
  val_t T150;
  T150 = (T143 >> 0) & 1;
  val_t T151;
  { T151 = TERNARY_1(T150, Core_datapath_loadstore__io_dmem_protection_5.values[0], Core_datapath_loadstore__io_dmem_protection_4.values[0]);}
  { Core_datapath_csr__io_dmem_protection_6.values[0] = Core_datapath_csr__reg_dmem_protection_6.values[0];}
  { Core_datapath_loadstore__io_dmem_protection_6.values[0] = Core_datapath_csr__io_dmem_protection_6.values[0];}
  { Core_datapath_csr__io_dmem_protection_7.values[0] = Core_datapath_csr__reg_dmem_protection_7.values[0];}
  { Core_datapath_loadstore__io_dmem_protection_7.values[0] = Core_datapath_csr__io_dmem_protection_7.values[0];}
  val_t T152;
  T152 = (T143 >> 0) & 1;
  val_t T153;
  { T153 = TERNARY_1(T152, Core_datapath_loadstore__io_dmem_protection_7.values[0], Core_datapath_loadstore__io_dmem_protection_6.values[0]);}
  val_t T154;
  T154 = (T143 >> 1) & 1;
  val_t T155;
  { T155 = TERNARY_1(T154, T153, T151);}
  val_t T156;
  T156 = (T143 >> 2) & 1;
  val_t T157;
  { T157 = TERNARY_1(T156, T155, T149);}
  val_t T158;
  T158 = T157 != 0xcL;
  val_t T159;
  { T159 = T157;}
  T159 = T159 & 0x3L;
  val_t T160;
  T160 = T159 == Core_datapath_loadstore__io_thread.values[0];
  val_t T161;
  T161 = T157 == 0x8L;
  val_t T162;
  { T162 = T161 | T160;}
  val_t T163;
  { T163 = T162 & T158;}
  val_t T164;
  { T164 = Core_datapath_loadstore__io_addr.values[0] >> 29;}
  T164 = T164 & 0x7L;
  Core_datapath_loadstore__dmem_op.values[0] = T164 == 0x1L;
  val_t T165;
  { T165 = Core_datapath_loadstore__dmem_op.values[0] & T163;}
  val_t T166;
  { T166 = T165 | T142;}
  val_t T167;
  { T167 = T166 | Core_datapath_loadstore__bus_op.values[0];}
  { Core_datapath_loadstore__permission.values[0] = T167;}
  val_t T168;
  { T168 = Core_datapath_loadstore__io_store.values[0] & Core_datapath_loadstore__permission.values[0];}
  val_t T169;
  { T169 = T168 & T118;}
  val_t T170;
  { T170 = T169 & T107;}
  { Core_datapath_loadstore__write.values[0] = T170 & T106;}
  val_t T171;
  { T171 = TERNARY(Core_datapath_loadstore__write.values[0], 0xfL, 0x0L);}
  val_t T172;
  { T172 = T171 | 0x0L << 4;}
  val_t T173;
  T173 = Core_datapath_loadstore__io_mem_type.values[0] == 0xaL;
  val_t T174;
  { T174 = TERNARY(T173, 0xfL, 0x0L);}
  val_t T175;
  { T175 = T174 | 0x0L << 4;}
  val_t T176;
  { T176 = Core_datapath_loadstore__io_addr.values[0];}
  T176 = T176 & 0x3L;
  val_t T177;
  T177 = 0x3L << T176;
  T177 = T177 & 0x1fL;
  val_t T178;
  T178 = Core_datapath_loadstore__io_mem_type.values[0] == 0x9L;
  val_t T179;
  { T179 = TERNARY_1(T178, T177, T175);}
  val_t T180;
  T180 = 0x1L << T176;
  T180 = T180 & 0xfL;
  val_t T181;
  { T181 = T180 | 0x0L << 4;}
  val_t T182;
  T182 = Core_datapath_loadstore__io_mem_type.values[0] == 0x8L;
  val_t T183;
  { T183 = TERNARY_1(T182, T181, T179);}
  val_t T184;
  { T184 = T183 & T172;}
  val_t T185;
  T185 = (T184 >> 0) & 1;
  { Core_datapath_loadstore__io_dmem_byte_write_0.values[0] = T185;}
  { Core_datapath__io_dmem_byte_write_0.values[0] = Core_datapath_loadstore__io_dmem_byte_write_0.values[0];}
  { Core_dmem__io_core_byte_write_0.values[0] = Core_datapath__io_dmem_byte_write_0.values[0];}
  val_t T186;
  { T186 = TERNARY_1(Core_dmem__io_core_byte_write_0.values[0], T49, T39);}
  val_t T187;
  { T187 = T38 >> 8;}
  T187 = T187 & 0xffL;
  val_t T188;
  { T188 = Core_dmem__io_core_data_in.values[0] >> 8;}
  T188 = T188 & 0xffL;
  val_t T189;
  T189 = (T184 >> 1) & 1;
  { Core_datapath_loadstore__io_dmem_byte_write_1.values[0] = T189;}
  { Core_datapath__io_dmem_byte_write_1.values[0] = Core_datapath_loadstore__io_dmem_byte_write_1.values[0];}
  { Core_dmem__io_core_byte_write_1.values[0] = Core_datapath__io_dmem_byte_write_1.values[0];}
  val_t T190;
  { T190 = TERNARY_1(Core_dmem__io_core_byte_write_1.values[0], T188, T187);}
  val_t T191;
  { T191 = T186 | T190 << 8;}
  val_t T192;
  { T192 = T38 >> 16;}
  T192 = T192 & 0xffL;
  val_t T193;
  { T193 = Core_dmem__io_core_data_in.values[0] >> 16;}
  T193 = T193 & 0xffL;
  val_t T194;
  T194 = (T184 >> 2) & 1;
  { Core_datapath_loadstore__io_dmem_byte_write_2.values[0] = T194;}
  { Core_datapath__io_dmem_byte_write_2.values[0] = Core_datapath_loadstore__io_dmem_byte_write_2.values[0];}
  { Core_dmem__io_core_byte_write_2.values[0] = Core_datapath__io_dmem_byte_write_2.values[0];}
  val_t T195;
  { T195 = TERNARY_1(Core_dmem__io_core_byte_write_2.values[0], T193, T192);}
  val_t T196;
  { T196 = T38 >> 24;}
  T196 = T196 & 0xffL;
  val_t T197;
  { T197 = Core_dmem__io_core_data_in.values[0] >> 24;}
  T197 = T197 & 0xffL;
  val_t T198;
  T198 = (T184 >> 3) & 1;
  { Core_datapath_loadstore__io_dmem_byte_write_3.values[0] = T198;}
  { Core_datapath__io_dmem_byte_write_3.values[0] = Core_datapath_loadstore__io_dmem_byte_write_3.values[0];}
  { Core_dmem__io_core_byte_write_3.values[0] = Core_datapath__io_dmem_byte_write_3.values[0];}
  val_t T199;
  { T199 = TERNARY_1(Core_dmem__io_core_byte_write_3.values[0], T197, T196);}
  val_t T200;
  { T200 = T195 | T199 << 8;}
  { T201.values[0] = T191 | T200 << 16;}
  { Core_control__exe_load.values[0] = Core_control__exe_reg_load.values[0] & Core_control__exe_reg_valid.values[0];}
  { Core_control__io_exe_load.values[0] = Core_control__exe_load.values[0];}
  { Core_datapath__io_control_exe_load.values[0] = Core_control__io_exe_load.values[0];}
  { Core_datapath_loadstore__io_load.values[0] = Core_datapath__io_control_exe_load.values[0];}
  val_t T202;
  { T202 = Core_datapath_loadstore__io_load.values[0] | Core_datapath_loadstore__io_store.values[0];}
  val_t T203;
  { T203 = Core_datapath_loadstore__dmem_op.values[0] & T202;}
  { Core_datapath_loadstore__io_dmem_enable.values[0] = T203;}
  { Core_datapath__io_dmem_enable.values[0] = Core_datapath_loadstore__io_dmem_enable.values[0];}
  { Core_dmem__io_core_enable.values[0] = Core_datapath__io_dmem_enable.values[0];}
  { T204.values[0] = TERNARY_1(Core_dmem__io_core_enable.values[0], T38, Core_dmem__dout.values[0]);}
  val_t T205;
  { T205 = Core_datapath__if_reg_pc.values[0]+0x4L;}
  T205 = T205 & 0xffffffffL;
  { Core_datapath__if_pc_plus4.values[0] = T205;}
  val_t T206;
  T206 = 0x1L << Core_datapath__if_reg_tid.values[0];
  T206 = T206 & 0xfL;
  val_t T207;
  T207 = (T206 >> 0) & 1;
  { Core_datapath__io_control_if_tid.values[0] = Core_datapath__if_reg_tid.values[0];}
  { Core_control__io_if_tid.values[0] = Core_datapath__io_control_if_tid.values[0];}
  val_t T208;
  T208 = 0x1L << Core_control__io_if_tid.values[0];
  T208 = T208 & 0xfL;
  val_t T209;
  T209 = (T208 >> 0) & 1;
  val_t T210;
  T210 = (Core_control__io_if_tid.values[0] >> 0) & 1;
  val_t T211;
  { T211 = TERNARY_1(T210, Core_control__stall_count_1.values[0], Core_control__stall_count_0.values[0]);}
  val_t T212;
  T212 = (Core_control__io_if_tid.values[0] >> 0) & 1;
  val_t T213;
  { T213 = TERNARY_1(T212, Core_control__stall_count_3.values[0], Core_control__stall_count_2.values[0]);}
  val_t T214;
  T214 = (Core_control__io_if_tid.values[0] >> 1) & 1;
  val_t T215;
  { T215 = TERNARY_1(T214, T213, T211);}
  val_t T216;
  T216 = T215 == 0x0L;
  { Core_datapath__io_control_dec_tid.values[0] = Core_datapath__dec_reg_tid.values[0];}
  { Core_control__io_dec_tid.values[0] = Core_datapath__io_control_dec_tid.values[0];}
  val_t T217;
  T217 = Core_control__io_if_tid.values[0] == Core_control__io_dec_tid.values[0];
  { Core_datapath__io_control_dec_inst.values[0] = Core_datapath__dec_reg_inst.values[0];}
  { Core_control__io_dec_inst.values[0] = Core_datapath__io_control_dec_inst.values[0];}
  val_t T218;
  { T218 = Core_control__io_dec_inst.values[0] & 0x207fL;}
  val_t T219;
  T219 = T218 == 0x3L;
  val_t T220;
  { T220 = Core_control__io_dec_inst.values[0] & 0x507fL;}
  val_t T221;
  T221 = T220 == 0x3L;
  { Core_control__dec_load.values[0] = T221 | T219;}
  val_t T222;
  { T222 = Core_control__dec_reg_valid.values[0] & Core_control__dec_load.values[0];}
  val_t T223;
  { T223 = Core_control__io_dec_inst.values[0] & 0x707fL;}
  Core_control__dec_fence_i.values[0] = T223 == 0x100fL;
  val_t T224;
  { T224 = Core_control__dec_reg_valid.values[0] & Core_control__dec_fence_i.values[0];}
  val_t T225;
  { T225 = TERNARY(T224, 0x1L, T222);}
  { Core_control__dec_stall.values[0] = T225;}
  val_t T226;
  { T226 = Core_control__dec_stall.values[0] & T217;}
  val_t T227;
  { T227 = T226 ^ 0x1L;}
  val_t T228;
  { T228 = Core_control__if_reg_valid.values[0] & T227;}
  { Core_control__if_pre_valid.values[0] = T228 & T216;}
  val_t T229;
  { T229 = Core_control__if_pre_valid.values[0] & T209;}
  val_t T230;
  { T230 = TERNARY(T229, 0x1L, 0x0L);}
  { Core_datapath__io_control_exe_tid.values[0] = Core_datapath__exe_reg_tid.values[0];}
  { Core_control__io_exe_tid.values[0] = Core_datapath__io_control_exe_tid.values[0];}
  val_t T231;
  T231 = 0x1L << Core_control__io_exe_tid.values[0];
  T231 = T231 & 0xfL;
  val_t T232;
  T232 = (T231 >> 0) & 1;
  { Core_datapath_csr__io_expire.values[0] = T84;}
  { Core_datapath__io_control_exe_expire.values[0] = Core_datapath_csr__io_expire.values[0];}
  { Core_control__io_exe_expire.values[0] = Core_datapath__io_control_exe_expire.values[0];}
  val_t T233;
  { T233 = Core_control__io_exe_expire.values[0] ^ 0x1L;}
  val_t T234;
  { T234 = Core_control__exe_reg_valid.values[0] & Core_control__R81.values[0];}
  val_t T235;
  { T235 = T234 & T233;}
  { Core_control__exe_du.values[0] = T235;}
  Core_datapath__exe_ltu.values[0] = Core_datapath__exe_reg_rs1_data.values[0]<Core_datapath__exe_reg_rs2_data.values[0];
  val_t T236;
  { T236 = Core_datapath__exe_ltu.values[0] ^ 0x1L;}
  { Core_control__io_exe_br_type.values[0] = Core_control__exe_reg_br_type.values[0];}
  { Core_datapath__io_control_exe_br_type.values[0] = Core_control__io_exe_br_type.values[0];}
  val_t T237;
  T237 = Core_datapath__io_control_exe_br_type.values[0] == 0x5L;
  val_t T238;
  { T238 = TERNARY(T237, T236, 0x0L);}
  val_t T239;
  T239 = (Core_datapath__exe_reg_rs1_data.values[0] >> 31) & 1;
  val_t T240;
  T240 = Core_datapath__exe_reg_rs1_data.values[0]<Core_datapath__exe_reg_rs2_data.values[0];
  val_t T241;
  T241 = (Core_datapath__exe_reg_rs2_data.values[0] >> 31) & 1;
  val_t T242;
  T242 = T239 == T241;
  { Core_datapath__exe_lt.values[0] = TERNARY_1(T242, T240, T239);}
  val_t T243;
  { T243 = Core_datapath__exe_lt.values[0] ^ 0x1L;}
  val_t T244;
  T244 = Core_datapath__io_control_exe_br_type.values[0] == 0x3L;
  val_t T245;
  { T245 = TERNARY_1(T244, T243, T238);}
  Core_datapath__exe_eq.values[0] = Core_datapath__exe_reg_rs1_data.values[0] == Core_datapath__exe_reg_rs2_data.values[0];
  val_t T246;
  { T246 = Core_datapath__exe_eq.values[0] ^ 0x1L;}
  val_t T247;
  T247 = Core_datapath__io_control_exe_br_type.values[0] == 0x1L;
  val_t T248;
  { T248 = TERNARY_1(T247, T246, T245);}
  val_t T249;
  T249 = Core_datapath__io_control_exe_br_type.values[0] == 0x4L;
  val_t T250;
  { T250 = TERNARY_1(T249, Core_datapath__exe_ltu.values[0], T248);}
  val_t T251;
  T251 = Core_datapath__io_control_exe_br_type.values[0] == 0x2L;
  val_t T252;
  { T252 = TERNARY_1(T251, Core_datapath__exe_lt.values[0], T250);}
  val_t T253;
  T253 = Core_datapath__io_control_exe_br_type.values[0] == 0x0L;
  val_t T254;
  { T254 = TERNARY_1(T253, Core_datapath__exe_eq.values[0], T252);}
  { Core_datapath__exe_br_cond.values[0] = T254;}
  { Core_datapath__io_control_exe_br_cond.values[0] = Core_datapath__exe_br_cond.values[0];}
  { Core_control__io_exe_br_cond.values[0] = Core_datapath__io_control_exe_br_cond.values[0];}
  val_t T255;
  { T255 = Core_control__exe_reg_branch.values[0] & Core_control__io_exe_br_cond.values[0];}
  val_t T256;
  { T256 = Core_control__exe_reg_jump.values[0] | T255;}
  { Core_control__exe_brjmp.values[0] = Core_control__exe_reg_valid.values[0] & T256;}
  val_t T257;
  { T257 = Core_control__exe_brjmp.values[0] | Core_control__exe_du.values[0];}
  val_t T258;
  { T258 = T257 & T232;}
  val_t T259;
  { T259 = TERNARY(T258, 0x2L, T230);}
  { Core_datapath__io_control_mem_tid.values[0] = Core_datapath__mem_reg_tid.values[0];}
  { Core_control__io_mem_tid.values[0] = Core_datapath__io_control_mem_tid.values[0];}
  val_t T260;
  T260 = 0x1L << Core_control__io_mem_tid.values[0];
  T260 = T260 & 0xfL;
  val_t T261;
  T261 = (T260 >> 0) & 1;
  val_t T262;
  { T262 = Core_control__mem_reg_exception.values[0] & T261;}
  val_t T263;
  { T263 = TERNARY(T262, 0x3L, T259);}
  { Core_control__next_pc_sel_0.values[0] = T263;}
  { Core_control__io_next_pc_sel_0.values[0] = Core_control__next_pc_sel_0.values[0];}
  { Core_datapath__io_control_next_pc_sel_0.values[0] = Core_control__io_next_pc_sel_0.values[0];}
  val_t T264;
  T264 = (T208 >> 1) & 1;
  val_t T265;
  { T265 = Core_control__if_pre_valid.values[0] & T264;}
  val_t T266;
  { T266 = TERNARY(T265, 0x1L, 0x0L);}
  val_t T267;
  T267 = (T231 >> 1) & 1;
  val_t T268;
  { T268 = T257 & T267;}
  val_t T269;
  { T269 = TERNARY(T268, 0x2L, T266);}
  val_t T270;
  T270 = (T260 >> 1) & 1;
  val_t T271;
  { T271 = Core_control__mem_reg_exception.values[0] & T270;}
  val_t T272;
  { T272 = TERNARY(T271, 0x3L, T269);}
  { Core_control__next_pc_sel_1.values[0] = T272;}
  { Core_control__io_next_pc_sel_1.values[0] = Core_control__next_pc_sel_1.values[0];}
  { Core_datapath__io_control_next_pc_sel_1.values[0] = Core_control__io_next_pc_sel_1.values[0];}
  val_t T273;
  T273 = (Core_datapath__if_reg_tid.values[0] >> 0) & 1;
  val_t T274;
  { T274 = TERNARY_1(T273, Core_datapath__io_control_next_pc_sel_1.values[0], Core_datapath__io_control_next_pc_sel_0.values[0]);}
  val_t T275;
  T275 = (T208 >> 2) & 1;
  val_t T276;
  { T276 = Core_control__if_pre_valid.values[0] & T275;}
  val_t T277;
  { T277 = TERNARY(T276, 0x1L, 0x0L);}
  val_t T278;
  T278 = (T231 >> 2) & 1;
  val_t T279;
  { T279 = T257 & T278;}
  val_t T280;
  { T280 = TERNARY(T279, 0x2L, T277);}
  val_t T281;
  T281 = (T260 >> 2) & 1;
  val_t T282;
  { T282 = Core_control__mem_reg_exception.values[0] & T281;}
  val_t T283;
  { T283 = TERNARY(T282, 0x3L, T280);}
  { Core_control__next_pc_sel_2.values[0] = T283;}
  { Core_control__io_next_pc_sel_2.values[0] = Core_control__next_pc_sel_2.values[0];}
  { Core_datapath__io_control_next_pc_sel_2.values[0] = Core_control__io_next_pc_sel_2.values[0];}
  val_t T284;
  T284 = (T208 >> 3) & 1;
  val_t T285;
  { T285 = Core_control__if_pre_valid.values[0] & T284;}
  val_t T286;
  { T286 = TERNARY(T285, 0x1L, 0x0L);}
  val_t T287;
  T287 = (T231 >> 3) & 1;
  val_t T288;
  { T288 = T257 & T287;}
  val_t T289;
  { T289 = TERNARY(T288, 0x2L, T286);}
  val_t T290;
  T290 = (T260 >> 3) & 1;
  val_t T291;
  { T291 = Core_control__mem_reg_exception.values[0] & T290;}
  val_t T292;
  { T292 = TERNARY(T291, 0x3L, T289);}
  { Core_control__next_pc_sel_3.values[0] = T292;}
  { Core_control__io_next_pc_sel_3.values[0] = Core_control__next_pc_sel_3.values[0];}
  { Core_datapath__io_control_next_pc_sel_3.values[0] = Core_control__io_next_pc_sel_3.values[0];}
  val_t T293;
  T293 = (Core_datapath__if_reg_tid.values[0] >> 0) & 1;
  val_t T294;
  { T294 = TERNARY_1(T293, Core_datapath__io_control_next_pc_sel_3.values[0], Core_datapath__io_control_next_pc_sel_2.values[0]);}
  val_t T295;
  T295 = (Core_datapath__if_reg_tid.values[0] >> 1) & 1;
  val_t T296;
  { T296 = TERNARY_1(T295, T294, T274);}
  val_t T297;
  T297 = T296 == 0x1L;
  val_t T298;
  { T298 = T297 & T207;}
  val_t T299;
  { T299 = TERNARY_1(T298, Core_datapath__if_pc_plus4.values[0], Core_datapath__if_reg_pcs_0.values[0]);}
  val_t T300;
  T300 = 0x1L << Core_datapath__exe_reg_tid.values[0];
  T300 = T300 & 0xfL;
  val_t T301;
  T301 = (T300 >> 0) & 1;
  val_t T302;
  T302 = (Core_datapath__exe_reg_tid.values[0] >> 0) & 1;
  val_t T303;
  { T303 = TERNARY_1(T302, Core_datapath__io_control_next_pc_sel_1.values[0], Core_datapath__io_control_next_pc_sel_0.values[0]);}
  val_t T304;
  T304 = (Core_datapath__exe_reg_tid.values[0] >> 0) & 1;
  val_t T305;
  { T305 = TERNARY_1(T304, Core_datapath__io_control_next_pc_sel_3.values[0], Core_datapath__io_control_next_pc_sel_2.values[0]);}
  val_t T306;
  T306 = (Core_datapath__exe_reg_tid.values[0] >> 1) & 1;
  val_t T307;
  { T307 = TERNARY_1(T306, T305, T303);}
  val_t T308;
  T308 = T307 == 0x2L;
  val_t T309;
  { T309 = T308 & T301;}
  val_t T310;
  { T310 = TERNARY_1(T309, Core_datapath__exe_address.values[0], T299);}
  val_t T311;
  { T311 = Core_datapath_csr__reg_evecs_0.values[0];}
  T311 = T311 & 0xffffffffL;
  { Core_datapath_csr__io_evecs_0.values[0] = T311;}
  val_t T312;
  { T312 = Core_datapath_csr__reg_evecs_1.values[0];}
  T312 = T312 & 0xffffffffL;
  { Core_datapath_csr__io_evecs_1.values[0] = T312;}
  val_t T313;
  T313 = (Core_datapath__mem_reg_tid.values[0] >> 0) & 1;
  val_t T314;
  { T314 = TERNARY_1(T313, Core_datapath_csr__io_evecs_1.values[0], Core_datapath_csr__io_evecs_0.values[0]);}
  val_t T315;
  { T315 = Core_datapath_csr__reg_evecs_2.values[0];}
  T315 = T315 & 0xffffffffL;
  { Core_datapath_csr__io_evecs_2.values[0] = T315;}
  val_t T316;
  { T316 = Core_datapath_csr__reg_evecs_3.values[0];}
  T316 = T316 & 0xffffffffL;
  { Core_datapath_csr__io_evecs_3.values[0] = T316;}
  val_t T317;
  T317 = (Core_datapath__mem_reg_tid.values[0] >> 0) & 1;
  val_t T318;
  { T318 = TERNARY_1(T317, Core_datapath_csr__io_evecs_3.values[0], Core_datapath_csr__io_evecs_2.values[0]);}
  val_t T319;
  T319 = (Core_datapath__mem_reg_tid.values[0] >> 1) & 1;
  val_t T320;
  { T320 = TERNARY_1(T319, T318, T314);}
  { Core_datapath__mem_evec.values[0] = T320;}
  val_t T321;
  T321 = 0x1L << Core_datapath__mem_reg_tid.values[0];
  T321 = T321 & 0xfL;
  val_t T322;
  T322 = (T321 >> 0) & 1;
  val_t T323;
  T323 = (Core_datapath__mem_reg_tid.values[0] >> 0) & 1;
  val_t T324;
  { T324 = TERNARY_1(T323, Core_datapath__io_control_next_pc_sel_1.values[0], Core_datapath__io_control_next_pc_sel_0.values[0]);}
  val_t T325;
  T325 = (Core_datapath__mem_reg_tid.values[0] >> 0) & 1;
  val_t T326;
  { T326 = TERNARY_1(T325, Core_datapath__io_control_next_pc_sel_3.values[0], Core_datapath__io_control_next_pc_sel_2.values[0]);}
  val_t T327;
  T327 = (Core_datapath__mem_reg_tid.values[0] >> 1) & 1;
  val_t T328;
  { T328 = TERNARY_1(T327, T326, T324);}
  val_t T329;
  T329 = T328 == 0x3L;
  val_t T330;
  { T330 = T329 & T322;}
  val_t T331;
  { T331 = TERNARY_1(T330, Core_datapath__mem_evec.values[0], T310);}
  { Core_datapath__next_pcs_0.values[0] = T331;}
  val_t T332;
  T332 = (T206 >> 1) & 1;
  val_t T333;
  { T333 = T297 & T332;}
  val_t T334;
  { T334 = TERNARY_1(T333, Core_datapath__if_pc_plus4.values[0], Core_datapath__if_reg_pcs_1.values[0]);}
  val_t T335;
  T335 = (T300 >> 1) & 1;
  val_t T336;
  { T336 = T308 & T335;}
  val_t T337;
  { T337 = TERNARY_1(T336, Core_datapath__exe_address.values[0], T334);}
  val_t T338;
  T338 = (T321 >> 1) & 1;
  val_t T339;
  { T339 = T329 & T338;}
  val_t T340;
  { T340 = TERNARY_1(T339, Core_datapath__mem_evec.values[0], T337);}
  { Core_datapath__next_pcs_1.values[0] = T340;}
  { Core_control__next_tid.values[0] = Core_control__R225.values[0];}
  { Core_control__io_next_tid.values[0] = Core_control__next_tid.values[0];}
  { Core_datapath__io_control_next_tid.values[0] = Core_control__io_next_tid.values[0];}
  val_t T341;
  T341 = (Core_datapath__io_control_next_tid.values[0] >> 0) & 1;
  val_t T342;
  { T342 = TERNARY_1(T341, Core_datapath__next_pcs_1.values[0], Core_datapath__next_pcs_0.values[0]);}
  val_t T343;
  T343 = (T206 >> 2) & 1;
  val_t T344;
  { T344 = T297 & T343;}
  val_t T345;
  { T345 = TERNARY_1(T344, Core_datapath__if_pc_plus4.values[0], Core_datapath__if_reg_pcs_2.values[0]);}
  val_t T346;
  T346 = (T300 >> 2) & 1;
  val_t T347;
  { T347 = T308 & T346;}
  val_t T348;
  { T348 = TERNARY_1(T347, Core_datapath__exe_address.values[0], T345);}
  val_t T349;
  T349 = (T321 >> 2) & 1;
  val_t T350;
  { T350 = T329 & T349;}
  val_t T351;
  { T351 = TERNARY_1(T350, Core_datapath__mem_evec.values[0], T348);}
  { Core_datapath__next_pcs_2.values[0] = T351;}
  val_t T352;
  T352 = (T206 >> 3) & 1;
  val_t T353;
  { T353 = T297 & T352;}
  val_t T354;
  { T354 = TERNARY_1(T353, Core_datapath__if_pc_plus4.values[0], Core_datapath__if_reg_pcs_3.values[0]);}
  val_t T355;
  T355 = (T300 >> 3) & 1;
  val_t T356;
  { T356 = T308 & T355;}
  val_t T357;
  { T357 = TERNARY_1(T356, Core_datapath__exe_address.values[0], T354);}
  val_t T358;
  T358 = (T321 >> 3) & 1;
  val_t T359;
  { T359 = T329 & T358;}
  val_t T360;
  { T360 = TERNARY_1(T359, Core_datapath__mem_evec.values[0], T357);}
  { Core_datapath__next_pcs_3.values[0] = T360;}
  val_t T361;
  T361 = (Core_datapath__io_control_next_tid.values[0] >> 0) & 1;
  val_t T362;
  { T362 = TERNARY_1(T361, Core_datapath__next_pcs_3.values[0], Core_datapath__next_pcs_2.values[0]);}
  val_t T363;
  T363 = (Core_datapath__io_control_next_tid.values[0] >> 1) & 1;
  { Core_datapath__next_pc.values[0] = TERNARY_1(T363, T362, T342);}
  val_t T364;
  { T364 = Core_datapath__next_pc.values[0] >> 2;}
  T364 = T364 & 0x3fffffffL;
  val_t T365;
  { T365 = T364;}
  T365 = T365 & 0xfffL;
  { Core_datapath__io_imem_r_addr.values[0] = T365;}
  { Core_imem__io_core_r_addr.values[0] = Core_datapath__io_imem_r_addr.values[0];}
  val_t T366;
  { T366 = Core_imem__ispm.get(Core_imem__io_core_r_addr.values[0], 0);}
  { Core_control__next_valid.values[0] = Core_control__R148.values[0];}
  { Core_control__io_next_valid.values[0] = Core_control__next_valid.values[0];}
  { Core_datapath__io_control_next_valid.values[0] = Core_control__io_next_valid.values[0];}
  { Core_datapath__io_imem_r_enable.values[0] = Core_datapath__io_control_next_valid.values[0];}
  { Core_imem__io_core_r_enable.values[0] = Core_datapath__io_imem_r_enable.values[0];}
  { T367.values[0] = TERNARY_1(Core_imem__io_core_r_enable.values[0], T366, Core_imem__dout_r.values[0]);}
  { Core_datapath_loadstore__io_imem_rw_data_in.values[0] = Core_datapath_loadstore__io_data_in.values[0];}
  { Core_datapath__io_imem_rw_data_in.values[0] = Core_datapath_loadstore__io_imem_rw_data_in.values[0];}
  { Core_imem__io_core_rw_data_in.values[0] = Core_datapath__io_imem_rw_data_in.values[0];}
  val_t T368;
  { T368 = Core_datapath_loadstore__imem_op.values[0] & Core_datapath_loadstore__write.values[0];}
  { Core_datapath_loadstore__io_imem_rw_write.values[0] = T368;}
  { Core_datapath__io_imem_rw_write.values[0] = Core_datapath_loadstore__io_imem_rw_write.values[0];}
  { Core_imem__io_core_rw_write.values[0] = Core_datapath__io_imem_rw_write.values[0];}
  val_t T369;
  { T369 = Core_datapath_loadstore__io_load.values[0] | Core_datapath_loadstore__io_store.values[0];}
  val_t T370;
  { T370 = Core_datapath_loadstore__imem_op.values[0] & T369;}
  { Core_datapath_loadstore__io_imem_rw_enable.values[0] = T370;}
  { Core_datapath__io_imem_rw_enable.values[0] = Core_datapath_loadstore__io_imem_rw_enable.values[0];}
  { Core_imem__io_core_rw_enable.values[0] = Core_datapath__io_imem_rw_enable.values[0];}
  { T371.values[0] = Core_imem__io_core_rw_enable.values[0] & Core_imem__io_core_rw_write.values[0];}
  val_t T372;
  { T372 = Core_datapath_loadstore__io_addr.values[0] >> 2;}
  T372 = T372 & 0x3ffL;
  val_t T373;
  { T373 = T372 | 0x0L << 10;}
  { Core_datapath_loadstore__io_imem_rw_addr.values[0] = T373;}
  { Core_datapath__io_imem_rw_addr.values[0] = Core_datapath_loadstore__io_imem_rw_addr.values[0];}
  { Core_imem__io_core_rw_addr.values[0] = Core_datapath__io_imem_rw_addr.values[0];}
  val_t T374;
  { T374 = Core_imem__ispm.get(Core_imem__io_core_rw_addr.values[0], 0);}
  { T375.values[0] = TERNARY_1(Core_imem__io_core_rw_enable.values[0], T374, Core_imem__R0.values[0]);}
  { Core_datapath_csr__io_rw_data_in.values[0] = Core_datapath__exe_csr_data.values[0];}
  { Core_control__io_exe_csr_type.values[0] = Core_control__exe_reg_csr_type.values[0];}
  { Core_datapath__io_control_exe_csr_type.values[0] = Core_control__io_exe_csr_type.values[0];}
  { Core_datapath_csr__io_rw_csr_type.values[0] = Core_datapath__io_control_exe_csr_type.values[0];}
  val_t T376;
  T376 = Core_datapath_csr__io_rw_csr_type.values[0] == 0x1L;
  val_t T377;
  { T377 = TERNARY_1(T376, Core_datapath_csr__io_rw_data_in.values[0], Core_datapath_csr__io_rw_data_in.values[0]);}
  val_t T378;
  { T378 = T377 | 0x0L << 32;}
  val_t T379;
  { T379 = ~Core_datapath_csr__io_rw_data_in.values[0];}
  T379 = T379 & 0xffffffffL;
  val_t T380;
  { T380 = T379 | 0x0L << 32;}
  val_t T381;
  { T381 = Core_datapath_csr__reg_slots_0.values[0] | Core_datapath_csr__reg_slots_1.values[0] << 4;}
  val_t T382;
  { T382 = Core_datapath_csr__reg_slots_2.values[0] | Core_datapath_csr__reg_slots_3.values[0] << 4;}
  val_t T383;
  { T383 = T381 | T382 << 8;}
  val_t T384;
  { T384 = Core_datapath_csr__reg_slots_4.values[0] | Core_datapath_csr__reg_slots_5.values[0] << 4;}
  val_t T385;
  { T385 = Core_datapath_csr__reg_slots_6.values[0] | Core_datapath_csr__reg_slots_7.values[0] << 4;}
  val_t T386;
  { T386 = T384 | T385 << 8;}
  val_t T387;
  { T387 = T383 | T386 << 16;}
  { Core_datapath_csr__io_rw_addr.values[0] = Core_datapath__exe_reg_csr_addr.values[0];}
  val_t T388;
  T388 = Core_datapath_csr__io_rw_addr.values[0] == 0x503L;
  val_t T389;
  { T389 = TERNARY(T388, T387, 0x0L);}
  val_t T390;
  { T390 = Core_datapath_csr__io_rw_thread.values[0] | 0x0L << 2;}
  val_t T391;
  T391 = Core_datapath_csr__io_rw_addr.values[0] == 0x50bL;
  val_t T392;
  { T392 = TERNARY_1(T391, T390, T389);}
  val_t T393;
  { T393 = Core_datapath_csr__reg_tmodes_0.values[0] | Core_datapath_csr__reg_tmodes_1.values[0] << 2;}
  val_t T394;
  { T394 = Core_datapath_csr__reg_tmodes_2.values[0] | Core_datapath_csr__reg_tmodes_3.values[0] << 2;}
  val_t T395;
  { T395 = T393 | T394 << 4;}
  val_t T396;
  { T396 = T395 | 0x0L << 8;}
  val_t T397;
  T397 = Core_datapath_csr__io_rw_addr.values[0] == 0x504L;
  val_t T398;
  { T398 = TERNARY_1(T397, T396, T392);}
  val_t T399;
  { T399 = T398 | 0x0L << 32;}
  val_t T400;
  T400 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T401;
  { T401 = TERNARY_1(T400, Core_datapath_csr__reg_evecs_1.values[0], Core_datapath_csr__reg_evecs_0.values[0]);}
  val_t T402;
  T402 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T403;
  { T403 = TERNARY_1(T402, Core_datapath_csr__reg_evecs_3.values[0], Core_datapath_csr__reg_evecs_2.values[0]);}
  val_t T404;
  T404 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T405;
  { T405 = TERNARY_1(T404, T403, T401);}
  val_t T406;
  T406 = Core_datapath_csr__io_rw_addr.values[0] == 0x508L;
  val_t T407;
  { T407 = TERNARY_1(T406, T405, T399);}
  val_t T408;
  T408 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T409;
  { T409 = TERNARY_1(T408, Core_datapath_csr__reg_epcs_1.values[0], Core_datapath_csr__reg_epcs_0.values[0]);}
  val_t T410;
  T410 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T411;
  { T411 = TERNARY_1(T410, Core_datapath_csr__reg_epcs_3.values[0], Core_datapath_csr__reg_epcs_2.values[0]);}
  val_t T412;
  T412 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T413;
  { T413 = TERNARY_1(T412, T411, T409);}
  val_t T414;
  { T414 = T413 | 0x0L << 32;}
  val_t T415;
  T415 = Core_datapath_csr__io_rw_addr.values[0] == 0x502L;
  val_t T416;
  { T416 = TERNARY_1(T415, T414, T407);}
  val_t T417;
  T417 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T418;
  { T418 = TERNARY_1(T417, Core_datapath_csr__reg_causes_1.values[0], Core_datapath_csr__reg_causes_0.values[0]);}
  val_t T419;
  T419 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T420;
  { T420 = TERNARY_1(T419, Core_datapath_csr__reg_causes_3.values[0], Core_datapath_csr__reg_causes_2.values[0]);}
  val_t T421;
  T421 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T422;
  { T422 = TERNARY_1(T421, T420, T418);}
  val_t T423;
  { T423 = T422;}
  T423 = T423 & 0xfL;
  val_t T424;
  { T424 = T423 | 0x0L << 4;}
  val_t T425;
  T425 = (T422 >> 4) & 1;
  val_t T426;
  { T426 = T424 | T425 << 31;}
  val_t T427;
  { T427 = T426 | 0x0L << 32;}
  val_t T428;
  T428 = Core_datapath_csr__io_rw_addr.values[0] == 0x509L;
  val_t T429;
  { T429 = TERNARY_1(T428, T427, T416);}
  val_t T430;
  T430 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T431;
  { T431 = TERNARY_1(T430, Core_datapath_csr__reg_sup0_1.values[0], Core_datapath_csr__reg_sup0_0.values[0]);}
  val_t T432;
  T432 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T433;
  { T433 = TERNARY_1(T432, Core_datapath_csr__reg_sup0_3.values[0], Core_datapath_csr__reg_sup0_2.values[0]);}
  val_t T434;
  T434 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T435;
  { T435 = TERNARY_1(T434, T433, T431);}
  val_t T436;
  T436 = Core_datapath_csr__io_rw_addr.values[0] == 0x500L;
  val_t T437;
  { T437 = TERNARY_1(T436, T435, T429);}
  val_t T438;
  { T438 = Core_datapath_csr__reg_time.values[0];}
  T438 = T438 & 0xffffffffL;
  val_t T439;
  { T439 = T438 | 0x0L << 32;}
  val_t T440;
  T440 = Core_datapath_csr__io_rw_addr.values[0] == 0x1L;
  val_t T441;
  { T441 = TERNARY_1(T440, T439, T437);}
  val_t T442;
  { T442 = Core_datapath_csr__reg_to_host.values[0] | 0x0L << 32;}
  val_t T443;
  T443 = Core_datapath_csr__io_rw_addr.values[0] == 0x51eL;
  val_t T444;
  { T444 = TERNARY_1(T443, T442, T441);}
  val_t T445;
  { T445 = Core_datapath_csr__reg_gpis_0.values[0] | 0x0L << 1;}
  val_t T446;
  { T446 = T445 | 0x0L << 32;}
  val_t T447;
  T447 = Core_datapath_csr__io_rw_addr.values[0] == 0xcc0L;
  val_t T448;
  { T448 = TERNARY_1(T447, T446, T444);}
  val_t T449;
  { T449 = Core_datapath_csr__reg_gpis_1.values[0] | 0x0L << 1;}
  val_t T450;
  { T450 = T449 | 0x0L << 32;}
  val_t T451;
  T451 = Core_datapath_csr__io_rw_addr.values[0] == 0xcc1L;
  val_t T452;
  { T452 = TERNARY_1(T451, T450, T448);}
  val_t T453;
  { T453 = Core_datapath_csr__reg_gpis_2.values[0] | 0x0L << 1;}
  val_t T454;
  { T454 = T453 | 0x0L << 32;}
  val_t T455;
  T455 = Core_datapath_csr__io_rw_addr.values[0] == 0xcc2L;
  val_t T456;
  { T456 = TERNARY_1(T455, T454, T452);}
  val_t T457;
  { T457 = Core_datapath_csr__reg_gpis_3.values[0] | 0x0L << 1;}
  val_t T458;
  { T458 = T457 | 0x0L << 32;}
  val_t T459;
  T459 = Core_datapath_csr__io_rw_addr.values[0] == 0xcc3L;
  val_t T460;
  { T460 = TERNARY_1(T459, T458, T456);}
  val_t T461;
  { T461 = Core_datapath_csr__reg_gpos_0.values[0] | 0x0L << 2;}
  val_t T462;
  { T462 = T461 | 0x0L << 32;}
  val_t T463;
  T463 = Core_datapath_csr__io_rw_addr.values[0] == 0xcc4L;
  val_t T464;
  { T464 = TERNARY_1(T463, T462, T460);}
  val_t T465;
  { T465 = Core_datapath_csr__reg_gpos_1.values[0] | 0x0L << 2;}
  val_t T466;
  { T466 = T465 | 0x0L << 32;}
  val_t T467;
  T467 = Core_datapath_csr__io_rw_addr.values[0] == 0xcc5L;
  val_t T468;
  { T468 = TERNARY_1(T467, T466, T464);}
  val_t T469;
  { T469 = Core_datapath_csr__reg_gpos_2.values[0] | 0x0L << 2;}
  val_t T470;
  { T470 = T469 | 0x0L << 32;}
  val_t T471;
  T471 = Core_datapath_csr__io_rw_addr.values[0] == 0xcc6L;
  val_t T472;
  { T472 = TERNARY_1(T471, T470, T468);}
  val_t T473;
  { T473 = Core_datapath_csr__reg_gpos_3.values[0] | 0x0L << 2;}
  val_t T474;
  { T474 = T473 | 0x0L << 32;}
  val_t T475;
  T475 = Core_datapath_csr__io_rw_addr.values[0] == 0xcc7L;
  val_t T476;
  { T476 = TERNARY_1(T475, T474, T472);}
  val_t T477;
  { T477 = Core_datapath_csr__reg_gpo_protection_0.values[0] | Core_datapath_csr__reg_gpo_protection_1.values[0] << 4;}
  val_t T478;
  { T478 = Core_datapath_csr__reg_gpo_protection_2.values[0] | Core_datapath_csr__reg_gpo_protection_3.values[0] << 4;}
  val_t T479;
  { T479 = T477 | T478 << 8;}
  val_t T480;
  { T480 = T479 | 0x0L << 16;}
  val_t T481;
  T481 = Core_datapath_csr__io_rw_addr.values[0] == 0x50dL;
  val_t T482;
  { T482 = TERNARY_1(T481, T480, T476);}
  val_t T483;
  { T483 = Core_datapath_csr__reg_imem_protection_0.values[0] | Core_datapath_csr__reg_imem_protection_1.values[0] << 4;}
  val_t T484;
  { T484 = Core_datapath_csr__reg_imem_protection_2.values[0] | Core_datapath_csr__reg_imem_protection_3.values[0] << 4;}
  val_t T485;
  { T485 = T483 | T484 << 8;}
  val_t T486;
  { T486 = Core_datapath_csr__reg_imem_protection_4.values[0] | Core_datapath_csr__reg_imem_protection_5.values[0] << 4;}
  val_t T487;
  { T487 = Core_datapath_csr__reg_imem_protection_6.values[0] | Core_datapath_csr__reg_imem_protection_7.values[0] << 4;}
  val_t T488;
  { T488 = T486 | T487 << 8;}
  val_t T489;
  { T489 = T485 | T488 << 16;}
  val_t T490;
  { T490 = T489 | 0x0L << 32;}
  val_t T491;
  T491 = Core_datapath_csr__io_rw_addr.values[0] == 0x505L;
  val_t T492;
  { T492 = TERNARY_1(T491, T490, T482);}
  val_t T493;
  { T493 = Core_datapath_csr__reg_dmem_protection_0.values[0] | Core_datapath_csr__reg_dmem_protection_1.values[0] << 4;}
  val_t T494;
  { T494 = Core_datapath_csr__reg_dmem_protection_2.values[0] | Core_datapath_csr__reg_dmem_protection_3.values[0] << 4;}
  val_t T495;
  { T495 = T493 | T494 << 8;}
  val_t T496;
  { T496 = Core_datapath_csr__reg_dmem_protection_4.values[0] | Core_datapath_csr__reg_dmem_protection_5.values[0] << 4;}
  val_t T497;
  { T497 = Core_datapath_csr__reg_dmem_protection_6.values[0] | Core_datapath_csr__reg_dmem_protection_7.values[0] << 4;}
  val_t T498;
  { T498 = T496 | T497 << 8;}
  val_t T499;
  { T499 = T495 | T498 << 16;}
  val_t T500;
  { T500 = T499 | 0x0L << 32;}
  val_t T501;
  T501 = Core_datapath_csr__io_rw_addr.values[0] == 0x50cL;
  val_t T502;
  { T502 = TERNARY_1(T501, T500, T492);}
  val_t T503;
  { T503 = 0x0L | Core_datapath_csr__reg_msip_0.values[0] << 3;}
  val_t T504;
  { T504 = T503 | Core_datapath_csr__reg_ie_0.values[0] << 4;}
  val_t T505;
  { T505 = Core_datapath_csr__reg_prv_0.values[0] | Core_datapath_csr__reg_ie1_0.values[0] << 2;}
  val_t T506;
  { T506 = T504 | T505 << 5;}
  val_t T507;
  { T507 = Core_datapath_csr__reg_prv1_0.values[0] | 0x0L << 2;}
  val_t T508;
  { T508 = T507 | Core_datapath_csr__reg_mtie_0.values[0] << 22;}
  val_t T509;
  { T509 = T508 | 0x10L << 23;}
  val_t T510;
  { T510 = T506 | T509 << 8;}
  { Core_datapath_csr__status_0.values[0] = T510;}
  val_t T511;
  { T511 = 0x0L | Core_datapath_csr__reg_msip_1.values[0] << 3;}
  val_t T512;
  { T512 = T511 | Core_datapath_csr__reg_ie_1.values[0] << 4;}
  val_t T513;
  { T513 = Core_datapath_csr__reg_prv_1.values[0] | Core_datapath_csr__reg_ie1_1.values[0] << 2;}
  val_t T514;
  { T514 = T512 | T513 << 5;}
  val_t T515;
  { T515 = Core_datapath_csr__reg_prv1_1.values[0] | 0x0L << 2;}
  val_t T516;
  { T516 = T515 | Core_datapath_csr__reg_mtie_1.values[0] << 22;}
  val_t T517;
  { T517 = T516 | 0x10L << 23;}
  val_t T518;
  { T518 = T514 | T517 << 8;}
  { Core_datapath_csr__status_1.values[0] = T518;}
  val_t T519;
  T519 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T520;
  { T520 = TERNARY_1(T519, Core_datapath_csr__status_1.values[0], Core_datapath_csr__status_0.values[0]);}
  val_t T521;
  { T521 = 0x0L | Core_datapath_csr__reg_msip_2.values[0] << 3;}
  val_t T522;
  { T522 = T521 | Core_datapath_csr__reg_ie_2.values[0] << 4;}
  val_t T523;
  { T523 = Core_datapath_csr__reg_prv_2.values[0] | Core_datapath_csr__reg_ie1_2.values[0] << 2;}
  val_t T524;
  { T524 = T522 | T523 << 5;}
  val_t T525;
  { T525 = Core_datapath_csr__reg_prv1_2.values[0] | 0x0L << 2;}
  val_t T526;
  { T526 = T525 | Core_datapath_csr__reg_mtie_2.values[0] << 22;}
  val_t T527;
  { T527 = T526 | 0x10L << 23;}
  val_t T528;
  { T528 = T524 | T527 << 8;}
  { Core_datapath_csr__status_2.values[0] = T528;}
  val_t T529;
  { T529 = 0x0L | Core_datapath_csr__reg_msip_3.values[0] << 3;}
  val_t T530;
  { T530 = T529 | Core_datapath_csr__reg_ie_3.values[0] << 4;}
  val_t T531;
  { T531 = Core_datapath_csr__reg_prv_3.values[0] | Core_datapath_csr__reg_ie1_3.values[0] << 2;}
  val_t T532;
  { T532 = T530 | T531 << 5;}
  val_t T533;
  { T533 = Core_datapath_csr__reg_prv1_3.values[0] | 0x0L << 2;}
  val_t T534;
  { T534 = T533 | Core_datapath_csr__reg_mtie_3.values[0] << 22;}
  val_t T535;
  { T535 = T534 | 0x10L << 23;}
  val_t T536;
  { T536 = T532 | T535 << 8;}
  { Core_datapath_csr__status_3.values[0] = T536;}
  val_t T537;
  T537 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T538;
  { T538 = TERNARY_1(T537, Core_datapath_csr__status_3.values[0], Core_datapath_csr__status_2.values[0]);}
  val_t T539;
  T539 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T540;
  { T540 = TERNARY_1(T539, T538, T520);}
  val_t T541;
  T541 = Core_datapath_csr__io_rw_addr.values[0] == 0x50aL;
  val_t T542;
  { T542 = TERNARY_1(T541, T540, T502);}
  { Core_datapath_csr__data_out.values[0] = T542;}
  val_t T543;
  { T543 = Core_datapath_csr__data_out.values[0] & T380;}
  val_t T544;
  T544 = Core_datapath_csr__io_rw_csr_type.values[0] == 0x3L;
  val_t T545;
  { T545 = TERNARY_1(T544, T543, T378);}
  val_t T546;
  { T546 = Core_datapath_csr__io_rw_data_in.values[0] | 0x0L << 32;}
  val_t T547;
  { T547 = Core_datapath_csr__data_out.values[0] | T546;}
  val_t T548;
  T548 = Core_datapath_csr__io_rw_csr_type.values[0] == 0x2L;
  { Core_datapath_csr__data_in.values[0] = TERNARY_1(T548, T547, T545);}
  val_t T549;
  T549 = (Core_datapath_csr__data_in.values[0] >> 3) & 1;
  val_t T550;
  T550 = 0x1L << Core_datapath_csr__io_rw_thread.values[0];
  T550 = T550 & 0xfL;
  val_t T551;
  T551 = (T550 >> 1) & 1;
  val_t T552;
  T552 = Core_datapath_csr__io_rw_addr.values[0] == 0x50aL;
  { Core_datapath_csr__io_kill.values[0] = Core_datapath__io_control_exe_kill.values[0];}
  val_t T553;
  { T553 = Core_datapath_csr__io_kill.values[0] ^ 0x1L;}
  { Core_datapath_csr__priv_fault.values[0] = 0x0L;}
  val_t T554;
  { T554 = Core_datapath_csr__priv_fault.values[0] ^ 0x1L;}
  { Core_control__exe_csr_write.values[0] = Core_control__exe_reg_csr_write.values[0] & Core_control__exe_reg_valid.values[0];}
  { Core_control__io_exe_csr_write.values[0] = Core_control__exe_csr_write.values[0];}
  { Core_datapath__io_control_exe_csr_write.values[0] = Core_control__io_exe_csr_write.values[0];}
  { Core_datapath_csr__io_rw_write.values[0] = Core_datapath__io_control_exe_csr_write.values[0];}
  val_t T555;
  { T555 = Core_datapath_csr__io_rw_write.values[0] & T554;}
  { Core_datapath_csr__write.values[0] = T555 & T553;}
  val_t T556;
  { T556 = Core_datapath_csr__write.values[0] & T552;}
  val_t T557;
  { T557 = T556 & T551;}
  val_t T558;
  { T558 = TERNARY_1(T557, T549, Core_datapath_csr__reg_msip_1.values[0]);}
  { Core_datapath__io_int_exts_0.values[0] = Core__io_int_exts_0.values[0];}
  { Core_datapath_csr__io_int_exts_0.values[0] = Core_datapath__io_int_exts_0.values[0];}
  val_t T559;
  { T559 = Core_datapath_csr__io_int_exts_0.values[0] & T551;}
  val_t T560;
  { T560 = TERNARY(T559, 0x1L, T558);}
  { Core_datapath__io_int_exts_1.values[0] = Core__io_int_exts_1.values[0];}
  { Core_datapath_csr__io_int_exts_1.values[0] = Core_datapath__io_int_exts_1.values[0];}
  val_t T561;
  { T561 = Core_datapath_csr__io_int_exts_1.values[0] & T551;}
  val_t T562;
  { T562 = TERNARY(T561, 0x1L, T560);}
  { Core_datapath__io_int_exts_2.values[0] = Core__io_int_exts_2.values[0];}
  { Core_datapath_csr__io_int_exts_2.values[0] = Core_datapath__io_int_exts_2.values[0];}
  val_t T563;
  { T563 = Core_datapath_csr__io_int_exts_2.values[0] & T551;}
  val_t T564;
  { T564 = TERNARY(T563, 0x1L, T562);}
  { Core_datapath__io_int_exts_3.values[0] = Core__io_int_exts_3.values[0];}
  { Core_datapath_csr__io_int_exts_3.values[0] = Core_datapath__io_int_exts_3.values[0];}
  val_t T565;
  { T565 = Core_datapath_csr__io_int_exts_3.values[0] & T551;}
  val_t T566;
  { T566 = TERNARY(T565, 0x1L, T564);}
  { Core_datapath__reset.values[0] = reset.values[0];}
  { Core_datapath_csr__reset.values[0] = Core_datapath__reset.values[0];}
  { T567.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T566);}
  val_t T568;
  T568 = (Core_datapath_csr__data_in.values[0] >> 26) & 1;
  val_t T569;
  T569 = 0x1L << Core_datapath_csr__io_rw_thread.values[0];
  T569 = T569 & 0xfL;
  val_t T570;
  T570 = (T569 >> 3) & 1;
  val_t T571;
  { T571 = T556 & T570;}
  val_t T572;
  { T572 = TERNARY_1(T571, T568, Core_datapath_csr__reg_mtie_3.values[0]);}
  val_t T573;
  { T573 = T93 & T570;}
  val_t T574;
  { T574 = TERNARY(T573, 0x1L, T572);}
  { T575.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T574);}
  { T576.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, Core_datapath_csr__reg_prv1_3.values[0]);}
  { T577.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, Core_datapath_csr__reg_ie1_3.values[0]);}
  { T578.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x3L, Core_datapath_csr__reg_prv_3.values[0]);}
  val_t T579;
  T579 = (Core_datapath_csr__data_in.values[0] >> 4) & 1;
  val_t T580;
  T580 = 0x1L << Core_datapath_csr__io_rw_thread.values[0];
  T580 = T580 & 0xfL;
  val_t T581;
  T581 = (T580 >> 3) & 1;
  val_t T582;
  { T582 = T556 & T581;}
  val_t T583;
  { T583 = TERNARY_1(T582, T579, Core_datapath_csr__reg_ie_3.values[0]);}
  { Core_datapath_loadstore__io_store_misaligned.values[0] = Core_datapath_loadstore__store_misaligned.values[0];}
  { Core_datapath__io_control_exe_exc_store_misaligned.values[0] = Core_datapath_loadstore__io_store_misaligned.values[0];}
  { Core_control__io_exe_exc_store_misaligned.values[0] = Core_datapath__io_control_exe_exc_store_misaligned.values[0];}
  val_t T584;
  { T584 = Core_datapath_loadstore__io_addr.values[0];}
  T584 = T584 & 0x3L;
  val_t T585;
  T585 = T584 != 0x0L;
  val_t T586;
  T586 = Core_datapath_loadstore__io_mem_type.values[0] == 0x2L;
  val_t T587;
  { T587 = T586 & T585;}
  val_t T588;
  T588 = (Core_datapath_loadstore__io_addr.values[0] >> 0) & 1;
  val_t T589;
  T589 = T588 != 0x0L;
  val_t T590;
  T590 = Core_datapath_loadstore__io_mem_type.values[0] == 0x5L;
  val_t T591;
  T591 = Core_datapath_loadstore__io_mem_type.values[0] == 0x1L;
  val_t T592;
  { T592 = T591 | T590;}
  val_t T593;
  { T593 = T592 & T589;}
  val_t T594;
  { T594 = T593 | T587;}
  val_t T595;
  { T595 = Core_datapath_loadstore__io_load.values[0] & T594;}
  { Core_datapath_loadstore__load_misaligned.values[0] = T595;}
  { Core_datapath_loadstore__io_load_misaligned.values[0] = Core_datapath_loadstore__load_misaligned.values[0];}
  { Core_datapath__io_control_exe_exc_load_misaligned.values[0] = Core_datapath_loadstore__io_load_misaligned.values[0];}
  { Core_control__io_exe_exc_load_misaligned.values[0] = Core_datapath__io_control_exe_exc_load_misaligned.values[0];}
  { Core_datapath_csr__io_priv_fault.values[0] = Core_datapath_csr__priv_fault.values[0];}
  { Core_datapath__io_control_exe_exc_priv_inst.values[0] = Core_datapath_csr__io_priv_fault.values[0];}
  { Core_control__io_exe_exc_priv_inst.values[0] = Core_datapath__io_control_exe_exc_priv_inst.values[0];}
  val_t T596;
  { T596 = Core_control__io_exe_exc_priv_inst.values[0] | Core_control__io_exe_exc_load_misaligned.values[0];}
  { Core_control__exe_inst_exc.values[0] = T596 | Core_control__io_exe_exc_store_misaligned.values[0];}
  val_t T597;
  { T597 = Core_control__exe_reg_exc.values[0] | Core_control__exe_inst_exc.values[0];}
  val_t T598;
  { T598 = T597 | Core_control__exe_any_exc.values[0];}
  val_t T599;
  { T599 = Core_control__exe_reg_valid.values[0] & T598;}
  { Core_control__exe_exception.values[0] = T599;}
  { Core_control__io_exe_exception.values[0] = Core_control__exe_exception.values[0];}
  { Core_datapath__io_control_exe_exception.values[0] = Core_control__io_exe_exception.values[0];}
  { Core_datapath_csr__io_exception.values[0] = Core_datapath__io_control_exe_exception.values[0];}
  val_t T600;
  { T600 = TERNARY(Core_datapath_csr__io_exception.values[0], 0x0L, T583);}
  { T601.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T600);}
  val_t T602;
  T602 = (T550 >> 3) & 1;
  val_t T603;
  { T603 = T556 & T602;}
  val_t T604;
  { T604 = TERNARY_1(T603, T549, Core_datapath_csr__reg_msip_3.values[0]);}
  val_t T605;
  { T605 = Core_datapath_csr__io_int_exts_0.values[0] & T602;}
  val_t T606;
  { T606 = TERNARY(T605, 0x1L, T604);}
  val_t T607;
  { T607 = Core_datapath_csr__io_int_exts_1.values[0] & T602;}
  val_t T608;
  { T608 = TERNARY(T607, 0x1L, T606);}
  val_t T609;
  { T609 = Core_datapath_csr__io_int_exts_2.values[0] & T602;}
  val_t T610;
  { T610 = TERNARY(T609, 0x1L, T608);}
  val_t T611;
  { T611 = Core_datapath_csr__io_int_exts_3.values[0] & T602;}
  val_t T612;
  { T612 = TERNARY(T611, 0x1L, T610);}
  { T613.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T612);}
  val_t T614;
  T614 = (T569 >> 2) & 1;
  val_t T615;
  { T615 = T556 & T614;}
  val_t T616;
  { T616 = TERNARY_1(T615, T568, Core_datapath_csr__reg_mtie_2.values[0]);}
  val_t T617;
  { T617 = T93 & T614;}
  val_t T618;
  { T618 = TERNARY(T617, 0x1L, T616);}
  { T619.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T618);}
  { T620.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, Core_datapath_csr__reg_prv1_2.values[0]);}
  { T621.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, Core_datapath_csr__reg_ie1_2.values[0]);}
  { T622.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x3L, Core_datapath_csr__reg_prv_2.values[0]);}
  val_t T623;
  T623 = (T580 >> 2) & 1;
  val_t T624;
  { T624 = T556 & T623;}
  val_t T625;
  { T625 = TERNARY_1(T624, T579, Core_datapath_csr__reg_ie_2.values[0]);}
  val_t T626;
  { T626 = TERNARY(Core_datapath_csr__io_exception.values[0], 0x0L, T625);}
  { T627.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T626);}
  val_t T628;
  T628 = (T550 >> 2) & 1;
  val_t T629;
  { T629 = T556 & T628;}
  val_t T630;
  { T630 = TERNARY_1(T629, T549, Core_datapath_csr__reg_msip_2.values[0]);}
  val_t T631;
  { T631 = Core_datapath_csr__io_int_exts_0.values[0] & T628;}
  val_t T632;
  { T632 = TERNARY(T631, 0x1L, T630);}
  val_t T633;
  { T633 = Core_datapath_csr__io_int_exts_1.values[0] & T628;}
  val_t T634;
  { T634 = TERNARY(T633, 0x1L, T632);}
  val_t T635;
  { T635 = Core_datapath_csr__io_int_exts_2.values[0] & T628;}
  val_t T636;
  { T636 = TERNARY(T635, 0x1L, T634);}
  val_t T637;
  { T637 = Core_datapath_csr__io_int_exts_3.values[0] & T628;}
  val_t T638;
  { T638 = TERNARY(T637, 0x1L, T636);}
  { T639.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T638);}
  val_t T640;
  T640 = (T569 >> 1) & 1;
  val_t T641;
  { T641 = T556 & T640;}
  val_t T642;
  { T642 = TERNARY_1(T641, T568, Core_datapath_csr__reg_mtie_1.values[0]);}
  val_t T643;
  { T643 = T93 & T640;}
  val_t T644;
  { T644 = TERNARY(T643, 0x1L, T642);}
  { T645.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T644);}
  { T646.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, Core_datapath_csr__reg_prv1_1.values[0]);}
  { T647.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, Core_datapath_csr__reg_ie1_1.values[0]);}
  { T648.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x3L, Core_datapath_csr__reg_prv_1.values[0]);}
  val_t T649;
  T649 = (T580 >> 1) & 1;
  val_t T650;
  { T650 = T556 & T649;}
  val_t T651;
  { T651 = TERNARY_1(T650, T579, Core_datapath_csr__reg_ie_1.values[0]);}
  val_t T652;
  { T652 = TERNARY(Core_datapath_csr__io_exception.values[0], 0x0L, T651);}
  { T653.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T652);}
  val_t T654;
  T654 = (T569 >> 0) & 1;
  val_t T655;
  { T655 = T556 & T654;}
  val_t T656;
  { T656 = TERNARY_1(T655, T568, Core_datapath_csr__reg_mtie_0.values[0]);}
  val_t T657;
  { T657 = T93 & T654;}
  val_t T658;
  { T658 = TERNARY(T657, 0x1L, T656);}
  { T659.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T658);}
  { T660.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, Core_datapath_csr__reg_prv1_0.values[0]);}
  { T661.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, Core_datapath_csr__reg_ie1_0.values[0]);}
  { T662.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x3L, Core_datapath_csr__reg_prv_0.values[0]);}
  val_t T663;
  T663 = (T580 >> 0) & 1;
  val_t T664;
  { T664 = T556 & T663;}
  val_t T665;
  { T665 = TERNARY_1(T664, T579, Core_datapath_csr__reg_ie_0.values[0]);}
  val_t T666;
  { T666 = TERNARY(Core_datapath_csr__io_exception.values[0], 0x0L, T665);}
  { T667.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T666);}
  val_t T668;
  { T668 = Core_datapath_csr__data_in.values[0] >> 28;}
  T668 = T668 & 0xfL;
  val_t T669;
  T669 = Core_datapath_csr__io_rw_addr.values[0] == 0x50cL;
  val_t T670;
  { T670 = Core_datapath_csr__write.values[0] & T669;}
  val_t T671;
  { T671 = TERNARY_1(T670, T668, Core_datapath_csr__reg_dmem_protection_7.values[0]);}
  { T672.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x8L, T671);}
  val_t T673;
  { T673 = Core_datapath_csr__data_in.values[0] >> 24;}
  T673 = T673 & 0xfL;
  val_t T674;
  { T674 = TERNARY_1(T670, T673, Core_datapath_csr__reg_dmem_protection_6.values[0]);}
  { T675.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x8L, T674);}
  val_t T676;
  { T676 = Core_datapath_csr__data_in.values[0] >> 20;}
  T676 = T676 & 0xfL;
  val_t T677;
  { T677 = TERNARY_1(T670, T676, Core_datapath_csr__reg_dmem_protection_5.values[0]);}
  { T678.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x8L, T677);}
  val_t T679;
  { T679 = Core_datapath_csr__data_in.values[0] >> 16;}
  T679 = T679 & 0xfL;
  val_t T680;
  { T680 = TERNARY_1(T670, T679, Core_datapath_csr__reg_dmem_protection_4.values[0]);}
  { T681.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x8L, T680);}
  val_t T682;
  { T682 = Core_datapath_csr__data_in.values[0] >> 12;}
  T682 = T682 & 0xfL;
  val_t T683;
  { T683 = TERNARY_1(T670, T682, Core_datapath_csr__reg_dmem_protection_3.values[0]);}
  { T684.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x8L, T683);}
  val_t T685;
  { T685 = Core_datapath_csr__data_in.values[0] >> 8;}
  T685 = T685 & 0xfL;
  val_t T686;
  { T686 = TERNARY_1(T670, T685, Core_datapath_csr__reg_dmem_protection_2.values[0]);}
  { T687.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x8L, T686);}
  val_t T688;
  { T688 = Core_datapath_csr__data_in.values[0] >> 4;}
  T688 = T688 & 0xfL;
  val_t T689;
  { T689 = TERNARY_1(T670, T688, Core_datapath_csr__reg_dmem_protection_1.values[0]);}
  { T690.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x8L, T689);}
  val_t T691;
  { T691 = Core_datapath_csr__data_in.values[0];}
  T691 = T691 & 0xfL;
  val_t T692;
  { T692 = TERNARY_1(T670, T691, Core_datapath_csr__reg_dmem_protection_0.values[0]);}
  { T693.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x8L, T692);}
  val_t T694;
  { T694 = Core_datapath_csr__data_in.values[0] >> 28;}
  T694 = T694 & 0xfL;
  val_t T695;
  T695 = Core_datapath_csr__io_rw_addr.values[0] == 0x505L;
  val_t T696;
  { T696 = Core_datapath_csr__write.values[0] & T695;}
  val_t T697;
  { T697 = TERNARY_1(T696, T694, Core_datapath_csr__reg_imem_protection_7.values[0]);}
  { T698.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xcL, T697);}
  val_t T699;
  { T699 = Core_datapath_csr__data_in.values[0] >> 24;}
  T699 = T699 & 0xfL;
  val_t T700;
  { T700 = TERNARY_1(T696, T699, Core_datapath_csr__reg_imem_protection_6.values[0]);}
  { T701.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xcL, T700);}
  val_t T702;
  { T702 = Core_datapath_csr__data_in.values[0] >> 20;}
  T702 = T702 & 0xfL;
  val_t T703;
  { T703 = TERNARY_1(T696, T702, Core_datapath_csr__reg_imem_protection_5.values[0]);}
  { T704.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xcL, T703);}
  val_t T705;
  { T705 = Core_datapath_csr__data_in.values[0] >> 16;}
  T705 = T705 & 0xfL;
  val_t T706;
  { T706 = TERNARY_1(T696, T705, Core_datapath_csr__reg_imem_protection_4.values[0]);}
  { T707.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xcL, T706);}
  val_t T708;
  { T708 = Core_datapath_csr__data_in.values[0] >> 12;}
  T708 = T708 & 0xfL;
  val_t T709;
  { T709 = TERNARY_1(T696, T708, Core_datapath_csr__reg_imem_protection_3.values[0]);}
  { T710.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xcL, T709);}
  val_t T711;
  { T711 = Core_datapath_csr__data_in.values[0] >> 8;}
  T711 = T711 & 0xfL;
  val_t T712;
  { T712 = TERNARY_1(T696, T711, Core_datapath_csr__reg_imem_protection_2.values[0]);}
  { T713.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xcL, T712);}
  val_t T714;
  { T714 = Core_datapath_csr__data_in.values[0] >> 4;}
  T714 = T714 & 0xfL;
  val_t T715;
  { T715 = TERNARY_1(T696, T714, Core_datapath_csr__reg_imem_protection_1.values[0]);}
  { T716.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xcL, T715);}
  val_t T717;
  { T717 = Core_datapath_csr__data_in.values[0];}
  T717 = T717 & 0xfL;
  val_t T718;
  { T718 = TERNARY_1(T696, T717, Core_datapath_csr__reg_imem_protection_0.values[0]);}
  { T719.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x8L, T718);}
  val_t T720;
  { T720 = Core_datapath_csr__data_in.values[0] >> 12;}
  T720 = T720 & 0xfL;
  val_t T721;
  T721 = Core_datapath_csr__io_rw_addr.values[0] == 0x50dL;
  val_t T722;
  { T722 = Core_datapath_csr__write.values[0] & T721;}
  val_t T723;
  { T723 = TERNARY_1(T722, T720, Core_datapath_csr__reg_gpo_protection_3.values[0]);}
  { T724.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x8L, T723);}
  val_t T725;
  { T725 = Core_datapath_csr__data_in.values[0];}
  T725 = T725 & 0x3L;
  val_t T726;
  T726 = Core_datapath_csr__reg_gpo_protection_3.values[0] != 0xcL;
  val_t T727;
  { T727 = Core_datapath_csr__reg_gpo_protection_3.values[0];}
  T727 = T727 & 0x3L;
  val_t T728;
  T728 = T727 == Core_datapath_csr__io_rw_thread.values[0];
  val_t T729;
  T729 = Core_datapath_csr__reg_gpo_protection_3.values[0] == 0x8L;
  val_t T730;
  { T730 = T729 | T728;}
  val_t T731;
  { T731 = T730 & T726;}
  val_t T732;
  T732 = Core_datapath_csr__io_rw_addr.values[0] == 0xcc7L;
  val_t T733;
  { T733 = Core_datapath_csr__write.values[0] & T732;}
  val_t T734;
  { T734 = T733 & T731;}
  val_t T735;
  { T735 = TERNARY_1(T734, T725, Core_datapath_csr__reg_gpos_3.values[0]);}
  { T736.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T735);}
  val_t T737;
  { T737 = Core_datapath_csr__data_in.values[0] >> 8;}
  T737 = T737 & 0xfL;
  val_t T738;
  { T738 = TERNARY_1(T722, T737, Core_datapath_csr__reg_gpo_protection_2.values[0]);}
  { T739.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x8L, T738);}
  val_t T740;
  { T740 = Core_datapath_csr__data_in.values[0];}
  T740 = T740 & 0x3L;
  val_t T741;
  T741 = Core_datapath_csr__reg_gpo_protection_2.values[0] != 0xcL;
  val_t T742;
  { T742 = Core_datapath_csr__reg_gpo_protection_2.values[0];}
  T742 = T742 & 0x3L;
  val_t T743;
  T743 = T742 == Core_datapath_csr__io_rw_thread.values[0];
  val_t T744;
  T744 = Core_datapath_csr__reg_gpo_protection_2.values[0] == 0x8L;
  val_t T745;
  { T745 = T744 | T743;}
  val_t T746;
  { T746 = T745 & T741;}
  val_t T747;
  T747 = Core_datapath_csr__io_rw_addr.values[0] == 0xcc6L;
  val_t T748;
  { T748 = Core_datapath_csr__write.values[0] & T747;}
  val_t T749;
  { T749 = T748 & T746;}
  val_t T750;
  { T750 = TERNARY_1(T749, T740, Core_datapath_csr__reg_gpos_2.values[0]);}
  { T751.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T750);}
  val_t T752;
  { T752 = Core_datapath_csr__data_in.values[0] >> 4;}
  T752 = T752 & 0xfL;
  val_t T753;
  { T753 = TERNARY_1(T722, T752, Core_datapath_csr__reg_gpo_protection_1.values[0]);}
  { T754.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x8L, T753);}
  val_t T755;
  { T755 = Core_datapath_csr__data_in.values[0];}
  T755 = T755 & 0x3L;
  val_t T756;
  T756 = Core_datapath_csr__reg_gpo_protection_1.values[0] != 0xcL;
  val_t T757;
  { T757 = Core_datapath_csr__reg_gpo_protection_1.values[0];}
  T757 = T757 & 0x3L;
  val_t T758;
  T758 = T757 == Core_datapath_csr__io_rw_thread.values[0];
  val_t T759;
  T759 = Core_datapath_csr__reg_gpo_protection_1.values[0] == 0x8L;
  val_t T760;
  { T760 = T759 | T758;}
  val_t T761;
  { T761 = T760 & T756;}
  val_t T762;
  T762 = Core_datapath_csr__io_rw_addr.values[0] == 0xcc5L;
  val_t T763;
  { T763 = Core_datapath_csr__write.values[0] & T762;}
  val_t T764;
  { T764 = T763 & T761;}
  val_t T765;
  { T765 = TERNARY_1(T764, T755, Core_datapath_csr__reg_gpos_1.values[0]);}
  { T766.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T765);}
  val_t T767;
  { T767 = Core_datapath_csr__data_in.values[0];}
  T767 = T767 & 0xfL;
  val_t T768;
  { T768 = TERNARY_1(T722, T767, Core_datapath_csr__reg_gpo_protection_0.values[0]);}
  { T769.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T768);}
  val_t T770;
  { T770 = Core_datapath_csr__data_in.values[0];}
  T770 = T770 & 0x3L;
  val_t T771;
  T771 = Core_datapath_csr__reg_gpo_protection_0.values[0] != 0xcL;
  val_t T772;
  { T772 = Core_datapath_csr__reg_gpo_protection_0.values[0];}
  T772 = T772 & 0x3L;
  val_t T773;
  T773 = T772 == Core_datapath_csr__io_rw_thread.values[0];
  val_t T774;
  T774 = Core_datapath_csr__reg_gpo_protection_0.values[0] == 0x8L;
  val_t T775;
  { T775 = T774 | T773;}
  val_t T776;
  { T776 = T775 & T771;}
  val_t T777;
  T777 = Core_datapath_csr__io_rw_addr.values[0] == 0xcc4L;
  val_t T778;
  { T778 = Core_datapath_csr__write.values[0] & T777;}
  val_t T779;
  { T779 = T778 & T776;}
  val_t T780;
  { T780 = TERNARY_1(T779, T770, Core_datapath_csr__reg_gpos_0.values[0]);}
  { T781.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T780);}
  { Core_datapath__io_gpio_in_3.values[0] = Core__io_gpio_in_3.values[0];}
  { Core_datapath_csr__io_gpio_in_3.values[0] = Core_datapath__io_gpio_in_3.values[0];}
  { Core_datapath__io_gpio_in_2.values[0] = Core__io_gpio_in_2.values[0];}
  { Core_datapath_csr__io_gpio_in_2.values[0] = Core_datapath__io_gpio_in_2.values[0];}
  { Core_datapath__io_gpio_in_1.values[0] = Core__io_gpio_in_1.values[0];}
  { Core_datapath_csr__io_gpio_in_1.values[0] = Core_datapath__io_gpio_in_1.values[0];}
  { Core_datapath__io_gpio_in_0.values[0] = Core__io_gpio_in_0.values[0];}
  { Core_datapath_csr__io_gpio_in_0.values[0] = Core_datapath__io_gpio_in_0.values[0];}
  val_t T782;
  { T782 = Core_datapath_csr__reg_to_host.values[0] | 0x0L << 32;}
  val_t T783;
  T783 = Core_datapath_csr__io_rw_addr.values[0] == 0x51eL;
  val_t T784;
  { T784 = Core_datapath_csr__write.values[0] & T783;}
  val_t T785;
  { T785 = TERNARY_1(T784, Core_datapath_csr__data_in.values[0], T782);}
  val_t T786;
  { T786 = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T785);}
  { T787.values[0] = T786;}
  T787.values[0] = T787.values[0] & 0xffffffffL;
  val_t T788;
  T788 = 0x1L << Core_datapath_csr__io_rw_thread.values[0];
  T788 = T788 & 0xfL;
  val_t T789;
  T789 = (T788 >> 3) & 1;
  val_t T790;
  T790 = Core_datapath_csr__io_rw_addr.values[0] == 0x500L;
  val_t T791;
  { T791 = Core_datapath_csr__write.values[0] & T790;}
  val_t T792;
  { T792 = T791 & T789;}
  { T793.values[0] = TERNARY_1(T792, Core_datapath_csr__data_in.values[0], Core_datapath_csr__reg_sup0_3.values[0]);}
  val_t T794;
  T794 = (T788 >> 2) & 1;
  val_t T795;
  { T795 = T791 & T794;}
  { T796.values[0] = TERNARY_1(T795, Core_datapath_csr__data_in.values[0], Core_datapath_csr__reg_sup0_2.values[0]);}
  val_t T797;
  T797 = (T788 >> 1) & 1;
  val_t T798;
  { T798 = T791 & T797;}
  { T799.values[0] = TERNARY_1(T798, Core_datapath_csr__data_in.values[0], Core_datapath_csr__reg_sup0_1.values[0]);}
  val_t T800;
  T800 = (T788 >> 0) & 1;
  val_t T801;
  { T801 = T791 & T800;}
  { T802.values[0] = TERNARY_1(T801, Core_datapath_csr__data_in.values[0], Core_datapath_csr__reg_sup0_0.values[0]);}
  val_t T803;
  { T803 = TERNARY(Core_control__io_exe_int_ext.values[0], 0x1eL, 0x0L);}
  val_t T804;
  { T804 = TERNARY(Core_control__io_exe_int_expire.values[0], 0x1dL, T803);}
  { Core_control__exe_any_cause.values[0] = TERNARY(Core_control__io_exe_exc_expire.values[0], 0xdL, T804);}
  val_t T805;
  { T805 = TERNARY(Core_control__io_exe_exc_store_misaligned.values[0], 0x9L, 0x0L);}
  val_t T806;
  { T806 = TERNARY(Core_control__io_exe_exc_load_misaligned.values[0], 0x8L, T805);}
  { Core_control__exe_inst_cause.values[0] = TERNARY(Core_control__io_exe_exc_priv_inst.values[0], 0x3L, T806);}
  val_t T807;
  { T807 = Core_control__exe_inst_cause.values[0] | 0x0L << 4;}
  val_t T808;
  { T808 = TERNARY_1(Core_control__exe_inst_exc.values[0], T807, Core_control__exe_any_cause.values[0]);}
  val_t T809;
  { T809 = Core_control__exe_reg_cause.values[0] | 0x0L << 3;}
  val_t T810;
  { T810 = TERNARY_1(Core_control__exe_reg_exc.values[0], T809, T808);}
  { Core_control__exe_exception_cause.values[0] = T810;}
  { Core_control__io_exe_cause.values[0] = Core_control__exe_exception_cause.values[0];}
  { Core_datapath__io_control_exe_cause.values[0] = Core_control__io_exe_cause.values[0];}
  { Core_datapath_csr__io_cause.values[0] = Core_datapath__io_control_exe_cause.values[0];}
  val_t T811;
  T811 = 0x1L << Core_datapath_csr__io_rw_thread.values[0];
  T811 = T811 & 0xfL;
  val_t T812;
  T812 = (T811 >> 3) & 1;
  val_t T813;
  { T813 = Core_datapath_csr__io_exception.values[0] & T812;}
  { T814.values[0] = TERNARY_1(T813, Core_datapath_csr__io_cause.values[0], Core_datapath_csr__reg_causes_3.values[0]);}
  val_t T815;
  T815 = (T811 >> 2) & 1;
  val_t T816;
  { T816 = Core_datapath_csr__io_exception.values[0] & T815;}
  { T817.values[0] = TERNARY_1(T816, Core_datapath_csr__io_cause.values[0], Core_datapath_csr__reg_causes_2.values[0]);}
  val_t T818;
  T818 = (T811 >> 1) & 1;
  val_t T819;
  { T819 = Core_datapath_csr__io_exception.values[0] & T818;}
  { T820.values[0] = TERNARY_1(T819, Core_datapath_csr__io_cause.values[0], Core_datapath_csr__reg_causes_1.values[0]);}
  val_t T821;
  T821 = (T811 >> 0) & 1;
  val_t T822;
  { T822 = Core_datapath_csr__io_exception.values[0] & T821;}
  { T823.values[0] = TERNARY_1(T822, Core_datapath_csr__io_cause.values[0], Core_datapath_csr__reg_causes_0.values[0]);}
  { Core_datapath_csr__io_epc.values[0] = Core_datapath__exe_reg_pc.values[0];}
  val_t T824;
  T824 = 0x1L << Core_datapath_csr__io_rw_thread.values[0];
  T824 = T824 & 0xfL;
  val_t T825;
  T825 = (T824 >> 3) & 1;
  val_t T826;
  { T826 = Core_datapath_csr__io_exception.values[0] & T825;}
  { T827.values[0] = TERNARY_1(T826, Core_datapath_csr__io_epc.values[0], Core_datapath_csr__reg_epcs_3.values[0]);}
  val_t T828;
  T828 = (T824 >> 2) & 1;
  val_t T829;
  { T829 = Core_datapath_csr__io_exception.values[0] & T828;}
  { T830.values[0] = TERNARY_1(T829, Core_datapath_csr__io_epc.values[0], Core_datapath_csr__reg_epcs_2.values[0]);}
  val_t T831;
  T831 = (T824 >> 1) & 1;
  val_t T832;
  { T832 = Core_datapath_csr__io_exception.values[0] & T831;}
  { T833.values[0] = TERNARY_1(T832, Core_datapath_csr__io_epc.values[0], Core_datapath_csr__reg_epcs_1.values[0]);}
  val_t T834;
  T834 = (T824 >> 0) & 1;
  val_t T835;
  { T835 = Core_datapath_csr__io_exception.values[0] & T834;}
  { T836.values[0] = TERNARY_1(T835, Core_datapath_csr__io_epc.values[0], Core_datapath_csr__reg_epcs_0.values[0]);}
  val_t T837;
  T837 = 0x1L << Core_datapath_csr__io_rw_thread.values[0];
  T837 = T837 & 0xfL;
  val_t T838;
  T838 = (T837 >> 3) & 1;
  val_t T839;
  T839 = Core_datapath_csr__io_rw_addr.values[0] == 0x508L;
  val_t T840;
  { T840 = Core_datapath_csr__write.values[0] & T839;}
  val_t T841;
  { T841 = T840 & T838;}
  { T842.values[0] = TERNARY_1(T841, Core_datapath_csr__data_in.values[0], Core_datapath_csr__reg_evecs_3.values[0]);}
  val_t T843;
  T843 = (T837 >> 2) & 1;
  val_t T844;
  { T844 = T840 & T843;}
  { T845.values[0] = TERNARY_1(T844, Core_datapath_csr__data_in.values[0], Core_datapath_csr__reg_evecs_2.values[0]);}
  val_t T846;
  T846 = (T837 >> 1) & 1;
  val_t T847;
  { T847 = T840 & T846;}
  { T848.values[0] = TERNARY_1(T847, Core_datapath_csr__data_in.values[0], Core_datapath_csr__reg_evecs_1.values[0]);}
  val_t T849;
  T849 = (T837 >> 0) & 1;
  val_t T850;
  { T850 = T840 & T849;}
  { T851.values[0] = TERNARY_1(T850, Core_datapath_csr__data_in.values[0], Core_datapath_csr__reg_evecs_0.values[0]);}
  val_t T852;
  { T852 = Core_datapath_csr__data_in.values[0] >> 2;}
  T852 = T852 & 0x3L;
  val_t T853;
  T853 = Core_datapath_csr__io_rw_addr.values[0] == 0x504L;
  val_t T854;
  { T854 = Core_datapath_csr__write.values[0] & T853;}
  val_t T855;
  { T855 = TERNARY_1(T854, T852, Core_datapath_csr__reg_tmodes_1.values[0]);}
  val_t T856;
  T856 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T857;
  { T857 = TERNARY_1(T856, Core_datapath_csr__reg_tmodes_1.values[0], Core_datapath_csr__reg_tmodes_0.values[0]);}
  val_t T858;
  T858 = (Core_datapath_csr__io_rw_thread.values[0] >> 0) & 1;
  val_t T859;
  { T859 = TERNARY_1(T858, Core_datapath_csr__reg_tmodes_3.values[0], Core_datapath_csr__reg_tmodes_2.values[0]);}
  val_t T860;
  T860 = (Core_datapath_csr__io_rw_thread.values[0] >> 1) & 1;
  val_t T861;
  { T861 = TERNARY_1(T860, T859, T857);}
  val_t T862;
  { T862 = T861 | 0x1L;}
  val_t T863;
  T863 = 0x1L << Core_datapath_csr__io_rw_thread.values[0];
  T863 = T863 & 0xfL;
  val_t T864;
  T864 = (T863 >> 1) & 1;
  val_t T865;
  { T865 = Core_control__exe_exception.values[0] ^ 0x1L;}
  { Core_control__exe_valid.values[0] = Core_control__exe_reg_valid.values[0] & T865;}
  { Core_control__exe_sleep.values[0] = Core_control__exe_du.values[0] & Core_control__exe_valid.values[0];}
  { Core_control__io_exe_sleep.values[0] = Core_control__exe_sleep.values[0];}
  { Core_datapath__io_control_exe_sleep.values[0] = Core_control__io_exe_sleep.values[0];}
  { Core_datapath_csr__io_sleep.values[0] = Core_datapath__io_control_exe_sleep.values[0];}
  { Core_datapath_csr__sleep.values[0] = Core_datapath_csr__io_sleep.values[0];}
  val_t T866;
  { T866 = Core_datapath_csr__sleep.values[0] & T864;}
  val_t T867;
  { T867 = TERNARY_1(T866, T862, T855);}
  val_t T868;
  { T868 = Core_datapath_csr__reg_tmodes_1.values[0] & 0x2L;}
  val_t T869;
  T869 = Core_datapath_csr__reg_timer_1.values[0] == 0x1L;
  val_t T870;
  { T870 = T869 & Core_datapath_csr__expired_1.values[0];}
  val_t T871;
  { T871 = TERNARY(Core_datapath_csr__io_int_exts_1.values[0], 0x1L, T870);}
  { Core_datapath_csr__wake_1.values[0] = T871;}
  val_t T872;
  { T872 = TERNARY_1(Core_datapath_csr__wake_1.values[0], T868, T867);}
  { T873.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x1L, T872);}
  val_t T874;
  { T874 = Core_datapath_csr__data_in.values[0] >> 6;}
  T874 = T874 & 0x3L;
  val_t T875;
  { T875 = TERNARY_1(T854, T874, Core_datapath_csr__reg_tmodes_3.values[0]);}
  val_t T876;
  T876 = (T863 >> 3) & 1;
  val_t T877;
  { T877 = Core_datapath_csr__sleep.values[0] & T876;}
  val_t T878;
  { T878 = TERNARY_1(T877, T862, T875);}
  val_t T879;
  { T879 = Core_datapath_csr__reg_tmodes_3.values[0] & 0x2L;}
  val_t T880;
  T880 = Core_datapath_csr__reg_timer_3.values[0] == 0x1L;
  val_t T881;
  { T881 = T880 & Core_datapath_csr__expired_3.values[0];}
  val_t T882;
  { T882 = TERNARY(Core_datapath_csr__io_int_exts_3.values[0], 0x1L, T881);}
  { Core_datapath_csr__wake_3.values[0] = T882;}
  val_t T883;
  { T883 = TERNARY_1(Core_datapath_csr__wake_3.values[0], T879, T878);}
  { T884.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x1L, T883);}
  val_t T885;
  T885 = 0x1L << Core_datapath_csr__io_rw_thread.values[0];
  T885 = T885 & 0xfL;
  val_t T886;
  T886 = (T885 >> 3) & 1;
  val_t T887;
  T887 = Core_datapath_csr__io_rw_addr.values[0] == 0x507L;
  val_t T888;
  { T888 = Core_datapath_csr__write.values[0] & T887;}
  val_t T889;
  { T889 = T888 & T886;}
  val_t T890;
  { T890 = TERNARY(T889, 0x0L, Core_datapath_csr__reg_timer_3.values[0]);}
  val_t T891;
  { T891 = Core_datapath_csr__io_sleep.values[0] & T886;}
  val_t T892;
  { T892 = TERNARY(T891, 0x1L, T890);}
  val_t T893;
  { T893 = TERNARY(T881, 0x0L, T892);}
  val_t T894;
  { T894 = Core_control__exe_valid.values[0] & Core_control__R172.values[0];}
  { Core_control__exe_ee.values[0] = T894;}
  { Core_control__io_exe_ee.values[0] = Core_control__exe_ee.values[0];}
  { Core_datapath__io_control_exe_ee.values[0] = Core_control__io_exe_ee.values[0];}
  { Core_datapath_csr__io_ee.values[0] = Core_datapath__io_control_exe_ee.values[0];}
  val_t T895;
  { T895 = Core_datapath_csr__io_ee.values[0] & T886;}
  val_t T896;
  { T896 = TERNARY(T895, 0x3L, T893);}
  val_t T897;
  { T897 = T104 & T886;}
  val_t T898;
  { T898 = TERNARY(T897, 0x0L, T896);}
  val_t T899;
  { T899 = Core_control__exe_valid.values[0] & Core_control__R179.values[0];}
  { Core_control__exe_ie.values[0] = T899;}
  { Core_control__io_exe_ie.values[0] = Core_control__exe_ie.values[0];}
  { Core_datapath__io_control_exe_ie.values[0] = Core_control__io_exe_ie.values[0];}
  { Core_datapath_csr__io_ie.values[0] = Core_datapath__io_control_exe_ie.values[0];}
  val_t T900;
  { T900 = Core_datapath_csr__io_ie.values[0] & T886;}
  val_t T901;
  { T901 = TERNARY(T900, 0x2L, T898);}
  val_t T902;
  { T902 = T93 & T886;}
  val_t T903;
  { T903 = TERNARY(T902, 0x0L, T901);}
  { T904.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T903);}
  val_t T905;
  T905 = (T885 >> 1) & 1;
  val_t T906;
  { T906 = T888 & T905;}
  val_t T907;
  { T907 = TERNARY(T906, 0x0L, Core_datapath_csr__reg_timer_1.values[0]);}
  val_t T908;
  { T908 = Core_datapath_csr__io_sleep.values[0] & T905;}
  val_t T909;
  { T909 = TERNARY(T908, 0x1L, T907);}
  val_t T910;
  { T910 = TERNARY(T870, 0x0L, T909);}
  val_t T911;
  { T911 = Core_datapath_csr__io_ee.values[0] & T905;}
  val_t T912;
  { T912 = TERNARY(T911, 0x3L, T910);}
  val_t T913;
  { T913 = T104 & T905;}
  val_t T914;
  { T914 = TERNARY(T913, 0x0L, T912);}
  val_t T915;
  { T915 = Core_datapath_csr__io_ie.values[0] & T905;}
  val_t T916;
  { T916 = TERNARY(T915, 0x2L, T914);}
  val_t T917;
  { T917 = T93 & T905;}
  val_t T918;
  { T918 = TERNARY(T917, 0x0L, T916);}
  { T919.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T918);}
  val_t T920;
  T920 = (T885 >> 0) & 1;
  val_t T921;
  { T921 = T888 & T920;}
  val_t T922;
  { T922 = TERNARY(T921, 0x0L, Core_datapath_csr__reg_timer_0.values[0]);}
  val_t T923;
  { T923 = Core_datapath_csr__io_sleep.values[0] & T920;}
  val_t T924;
  { T924 = TERNARY(T923, 0x1L, T922);}
  val_t T925;
  T925 = Core_datapath_csr__reg_timer_0.values[0] == 0x1L;
  val_t T926;
  { T926 = T925 & Core_datapath_csr__expired_0.values[0];}
  val_t T927;
  { T927 = TERNARY(T926, 0x0L, T924);}
  val_t T928;
  { T928 = Core_datapath_csr__io_ee.values[0] & T920;}
  val_t T929;
  { T929 = TERNARY(T928, 0x3L, T927);}
  val_t T930;
  { T930 = T104 & T920;}
  val_t T931;
  { T931 = TERNARY(T930, 0x0L, T929);}
  val_t T932;
  { T932 = Core_datapath_csr__io_ie.values[0] & T920;}
  val_t T933;
  { T933 = TERNARY(T932, 0x2L, T931);}
  val_t T934;
  { T934 = T93 & T920;}
  val_t T935;
  { T935 = TERNARY(T934, 0x0L, T933);}
  { T936.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T935);}
  val_t T937;
  { T937 = Core_datapath_csr__data_in.values[0];}
  T937 = T937 & 0xffffffffL;
  val_t T938;
  T938 = 0x1L << Core_datapath_csr__io_rw_thread.values[0];
  T938 = T938 & 0xfL;
  val_t T939;
  T939 = (T938 >> 3) & 1;
  val_t T940;
  { T940 = T888 & T939;}
  { T941.values[0] = TERNARY_1(T940, T937, Core_datapath_csr__reg_compare_3.values[0]);}
  val_t T942;
  T942 = (T938 >> 1) & 1;
  val_t T943;
  { T943 = T888 & T942;}
  { T944.values[0] = TERNARY_1(T943, T937, Core_datapath_csr__reg_compare_1.values[0]);}
  val_t T945;
  T945 = (T938 >> 0) & 1;
  val_t T946;
  { T946 = T888 & T945;}
  { T947.values[0] = TERNARY_1(T946, T937, Core_datapath_csr__reg_compare_0.values[0]);}
  val_t T948;
  T948 = (T885 >> 2) & 1;
  val_t T949;
  { T949 = T888 & T948;}
  val_t T950;
  { T950 = TERNARY(T949, 0x0L, Core_datapath_csr__reg_timer_2.values[0]);}
  val_t T951;
  { T951 = Core_datapath_csr__io_sleep.values[0] & T948;}
  val_t T952;
  { T952 = TERNARY(T951, 0x1L, T950);}
  val_t T953;
  T953 = Core_datapath_csr__reg_timer_2.values[0] == 0x1L;
  val_t T954;
  { T954 = T953 & Core_datapath_csr__expired_2.values[0];}
  val_t T955;
  { T955 = TERNARY(T954, 0x0L, T952);}
  val_t T956;
  { T956 = Core_datapath_csr__io_ee.values[0] & T948;}
  val_t T957;
  { T957 = TERNARY(T956, 0x3L, T955);}
  val_t T958;
  { T958 = T104 & T948;}
  val_t T959;
  { T959 = TERNARY(T958, 0x0L, T957);}
  val_t T960;
  { T960 = Core_datapath_csr__io_ie.values[0] & T948;}
  val_t T961;
  { T961 = TERNARY(T960, 0x2L, T959);}
  val_t T962;
  { T962 = T93 & T948;}
  val_t T963;
  { T963 = TERNARY(T962, 0x0L, T961);}
  { T964.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T963);}
  val_t T965;
  { T965 = Core_datapath_csr__reg_time.values[0]+0xaL;}
  { T966.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T965);}
  val_t T967;
  T967 = (T938 >> 2) & 1;
  val_t T968;
  { T968 = T888 & T967;}
  { T969.values[0] = TERNARY_1(T968, T937, Core_datapath_csr__reg_compare_2.values[0]);}
  val_t T970;
  { T970 = Core_datapath_csr__data_in.values[0] >> 4;}
  T970 = T970 & 0x3L;
  val_t T971;
  { T971 = TERNARY_1(T854, T970, Core_datapath_csr__reg_tmodes_2.values[0]);}
  val_t T972;
  T972 = (T863 >> 2) & 1;
  val_t T973;
  { T973 = Core_datapath_csr__sleep.values[0] & T972;}
  val_t T974;
  { T974 = TERNARY_1(T973, T862, T971);}
  val_t T975;
  { T975 = Core_datapath_csr__reg_tmodes_2.values[0] & 0x2L;}
  val_t T976;
  { T976 = TERNARY(Core_datapath_csr__io_int_exts_2.values[0], 0x1L, T954);}
  { Core_datapath_csr__wake_2.values[0] = T976;}
  val_t T977;
  { T977 = TERNARY_1(Core_datapath_csr__wake_2.values[0], T975, T974);}
  { T978.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x1L, T977);}
  val_t T979;
  { T979 = Core_datapath_csr__data_in.values[0];}
  T979 = T979 & 0x3L;
  val_t T980;
  { T980 = TERNARY_1(T854, T979, Core_datapath_csr__reg_tmodes_0.values[0]);}
  val_t T981;
  T981 = (T863 >> 0) & 1;
  val_t T982;
  { T982 = Core_datapath_csr__sleep.values[0] & T981;}
  val_t T983;
  { T983 = TERNARY_1(T982, T862, T980);}
  val_t T984;
  { T984 = Core_datapath_csr__reg_tmodes_0.values[0] & 0x2L;}
  val_t T985;
  { T985 = TERNARY(Core_datapath_csr__io_int_exts_0.values[0], 0x1L, T926);}
  { Core_datapath_csr__wake_0.values[0] = T985;}
  val_t T986;
  { T986 = TERNARY_1(Core_datapath_csr__wake_0.values[0], T984, T983);}
  { T987.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T986);}
  val_t T988;
  { T988 = Core_datapath_csr__data_in.values[0] >> 28;}
  T988 = T988 & 0xfL;
  val_t T989;
  T989 = Core_datapath_csr__io_rw_addr.values[0] == 0x503L;
  val_t T990;
  { T990 = Core_datapath_csr__write.values[0] & T989;}
  val_t T991;
  { T991 = TERNARY_1(T990, T988, Core_datapath_csr__reg_slots_7.values[0]);}
  { T992.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T991);}
  val_t T993;
  { T993 = Core_datapath_csr__data_in.values[0] >> 24;}
  T993 = T993 & 0xfL;
  val_t T994;
  { T994 = TERNARY_1(T990, T993, Core_datapath_csr__reg_slots_6.values[0]);}
  { T995.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xfL, T994);}
  val_t T996;
  { T996 = Core_datapath_csr__data_in.values[0] >> 20;}
  T996 = T996 & 0xfL;
  val_t T997;
  { T997 = TERNARY_1(T990, T996, Core_datapath_csr__reg_slots_5.values[0]);}
  { T998.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xfL, T997);}
  val_t T999;
  { T999 = Core_datapath_csr__data_in.values[0] >> 16;}
  T999 = T999 & 0xfL;
  val_t T1000;
  { T1000 = TERNARY_1(T990, T999, Core_datapath_csr__reg_slots_4.values[0]);}
  { T1001.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xfL, T1000);}
  val_t T1002;
  { T1002 = Core_datapath_csr__data_in.values[0] >> 12;}
  T1002 = T1002 & 0xfL;
  val_t T1003;
  { T1003 = TERNARY_1(T990, T1002, Core_datapath_csr__reg_slots_3.values[0]);}
  { T1004.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xfL, T1003);}
  val_t T1005;
  { T1005 = Core_datapath_csr__data_in.values[0] >> 8;}
  T1005 = T1005 & 0xfL;
  val_t T1006;
  { T1006 = TERNARY_1(T990, T1005, Core_datapath_csr__reg_slots_2.values[0]);}
  { T1007.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xfL, T1006);}
  val_t T1008;
  { T1008 = Core_datapath_csr__data_in.values[0] >> 4;}
  T1008 = T1008 & 0xfL;
  val_t T1009;
  { T1009 = TERNARY_1(T990, T1008, Core_datapath_csr__reg_slots_1.values[0]);}
  { T1010.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xfL, T1009);}
  val_t T1011;
  { T1011 = Core_datapath_csr__data_in.values[0];}
  T1011 = T1011 & 0xfL;
  val_t T1012;
  { T1012 = TERNARY_1(T990, T1011, Core_datapath_csr__reg_slots_0.values[0]);}
  { T1013.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0xfL, T1012);}
  val_t T1014;
  T1014 = (T550 >> 0) & 1;
  val_t T1015;
  { T1015 = T556 & T1014;}
  val_t T1016;
  { T1016 = TERNARY_1(T1015, T549, Core_datapath_csr__reg_msip_0.values[0]);}
  val_t T1017;
  { T1017 = Core_datapath_csr__io_int_exts_0.values[0] & T1014;}
  val_t T1018;
  { T1018 = TERNARY(T1017, 0x1L, T1016);}
  val_t T1019;
  { T1019 = Core_datapath_csr__io_int_exts_1.values[0] & T1014;}
  val_t T1020;
  { T1020 = TERNARY(T1019, 0x1L, T1018);}
  val_t T1021;
  { T1021 = Core_datapath_csr__io_int_exts_2.values[0] & T1014;}
  val_t T1022;
  { T1022 = TERNARY(T1021, 0x1L, T1020);}
  val_t T1023;
  { T1023 = Core_datapath_csr__io_int_exts_3.values[0] & T1014;}
  val_t T1024;
  { T1024 = TERNARY(T1023, 0x1L, T1022);}
  { T1025.values[0] = TERNARY(Core_datapath_csr__reset.values[0], 0x0L, T1024);}
  { val_t __r = this->__rand_val(); Core_datapath_loadstore__io_imem_r_addr.values[0] = __r;}
  Core_datapath_loadstore__io_imem_r_addr.values[0] = Core_datapath_loadstore__io_imem_r_addr.values[0] & 0xfffL;
  { val_t __r = this->__rand_val(); Core_datapath_loadstore__io_imem_r_enable.values[0] = __r;}
  Core_datapath_loadstore__io_imem_r_enable.values[0] = Core_datapath_loadstore__io_imem_r_enable.values[0] & 0x1L;
  { T1026.values[0] = Core_datapath_loadstore__io_addr.values[0];}
  T1026.values[0] = T1026.values[0] & 0x3L;
  { Core_datapath_regfile__io_rs1_thread.values[0] = Core_datapath__if_reg_tid.values[0];}
  { Core_imem__io_core_r_data_out.values[0] = Core_imem__dout_r.values[0];}
  { Core_datapath__io_imem_r_data_out.values[0] = Core_imem__io_core_r_data_out.values[0];}
  val_t T1027;
  { T1027 = Core_datapath__io_imem_r_data_out.values[0] >> 15;}
  T1027 = T1027 & 0x1fL;
  { Core_datapath_regfile__io_rs1_addr.values[0] = T1027;}
  val_t T1028;
  { T1028 = Core_datapath_regfile__io_rs1_thread.values[0] | Core_datapath_regfile__io_rs1_addr.values[0] << 2;}
  val_t T1029;
  { T1029 = Core_datapath_regfile__regfile.get(T1028, 0);}
  val_t T1030;
  T1030 = Core_datapath_regfile__io_rs1_addr.values[0] == 0x0L;
  { T1031.values[0] = TERNARY(T1030, 0x0L, T1029);}
  { Core_datapath__mem_mul_result.values[0] = Core_datapath__mem_reg_rd_data.values[0];}
  { Core_control__io_mem_rd_data_sel.values[0] = Core_control__mem_reg_rd_data_sel.values[0];}
  { Core_datapath__io_control_mem_rd_data_sel.values[0] = Core_control__io_mem_rd_data_sel.values[0];}
  val_t T1032;
  T1032 = Core_datapath__io_control_mem_rd_data_sel.values[0] == 0x2L;
  val_t T1033;
  { T1033 = TERNARY_1(T1032, Core_datapath__mem_mul_result.values[0], Core_datapath__mem_reg_rd_data.values[0]);}
  { Core_datapath__io_bus_data_out.values[0] = Core__io_bus_data_out.values[0];}
  { Core_datapath_loadstore__io_bus_data_out.values[0] = Core_datapath__io_bus_data_out.values[0];}
  { Core_imem__io_core_rw_data_out.values[0] = Core_imem__R0.values[0];}
  { Core_datapath__io_imem_rw_data_out.values[0] = Core_imem__io_core_rw_data_out.values[0];}
  { Core_datapath_loadstore__io_imem_rw_data_out.values[0] = Core_datapath__io_imem_rw_data_out.values[0];}
  val_t T1034;
  { T1034 = TERNARY_1(Core_datapath_loadstore__imem_op_reg.values[0], Core_datapath_loadstore__io_imem_rw_data_out.values[0], Core_datapath_loadstore__io_bus_data_out.values[0]);}
  val_t T1035;
  { T1035 = 0x0L | Core_datapath_loadstore__addr_byte_reg.values[0] << 3;}
  { Core_dmem__io_core_data_out.values[0] = Core_dmem__dout.values[0];}
  { Core_datapath__io_dmem_data_out.values[0] = Core_dmem__io_core_data_out.values[0];}
  { Core_datapath_loadstore__io_dmem_data_out.values[0] = Core_datapath__io_dmem_data_out.values[0];}
  val_t T1036;
  T1036 = Core_datapath_loadstore__io_dmem_data_out.values[0] >> T1035;
  val_t T1037;
  { T1037 = T1036;}
  T1037 = T1037 & 0xffffL;
  val_t T1038;
  { T1038 = T1037 | 0x0L << 16;}
  val_t T1039;
  T1039 = Core_datapath_loadstore__mem_type_reg.values[0] == 0x5L;
  val_t T1040;
  { T1040 = TERNARY_1(T1039, T1038, T1036);}
  val_t T1041;
  { T1041 = T1036;}
  T1041 = T1041 & 0xffffL;
  val_t T1042;
  T1042 = (T1036 >> 15) & 1;
  val_t T1043;
  { T1043 = T1042 | 0x0L << 1;}
  val_t T1044;
  { T1044 = 0x0L-T1043;}
  T1044 = T1044 & 0xffffL;
  val_t T1045;
  { T1045 = T1041 | T1044 << 16;}
  val_t T1046;
  T1046 = Core_datapath_loadstore__mem_type_reg.values[0] == 0x1L;
  val_t T1047;
  { T1047 = TERNARY_1(T1046, T1045, T1040);}
  val_t T1048;
  { T1048 = T1036;}
  T1048 = T1048 & 0xffL;
  val_t T1049;
  { T1049 = T1048 | 0x0L << 8;}
  val_t T1050;
  T1050 = Core_datapath_loadstore__mem_type_reg.values[0] == 0x4L;
  val_t T1051;
  { T1051 = TERNARY_1(T1050, T1049, T1047);}
  val_t T1052;
  { T1052 = T1036;}
  T1052 = T1052 & 0xffL;
  val_t T1053;
  T1053 = (T1036 >> 7) & 1;
  val_t T1054;
  { T1054 = T1053 | 0x0L << 1;}
  val_t T1055;
  { T1055 = 0x0L-T1054;}
  T1055 = T1055 & 0xffffffL;
  val_t T1056;
  { T1056 = T1052 | T1055 << 8;}
  val_t T1057;
  T1057 = Core_datapath_loadstore__mem_type_reg.values[0] == 0x0L;
  val_t T1058;
  { T1058 = TERNARY_1(T1057, T1056, T1051);}
  val_t T1059;
  { T1059 = TERNARY_1(Core_datapath_loadstore__dmem_op_reg.values[0], T1058, T1034);}
  { Core_datapath_loadstore__io_data_out.values[0] = T1059;}
  val_t T1060;
  T1060 = Core_datapath__io_control_mem_rd_data_sel.values[0] == 0x1L;
  val_t T1061;
  { T1061 = TERNARY_1(T1060, Core_datapath_loadstore__io_data_out.values[0], T1033);}
  { Core_datapath__mem_rd_data.values[0] = T1061;}
  { Core_datapath_regfile__io_rd_data.values[0] = Core_datapath__mem_rd_data.values[0];}
  { Core_control__mem_rd_write.values[0] = Core_control__mem_reg_rd_write.values[0] & Core_control__mem_reg_valid.values[0];}
  { Core_control__io_mem_rd_write.values[0] = Core_control__mem_rd_write.values[0];}
  { Core_datapath__io_control_mem_rd_write.values[0] = Core_control__io_mem_rd_write.values[0];}
  { Core_datapath_regfile__io_rd_enable.values[0] = Core_datapath__io_control_mem_rd_write.values[0];}
  { Core_datapath_regfile__io_rd_thread.values[0] = Core_datapath__mem_reg_tid.values[0];}
  { Core_datapath_regfile__io_rd_addr.values[0] = Core_datapath__mem_reg_rd_addr.values[0];}
  { T1062.values[0] = Core_datapath_regfile__io_rd_thread.values[0] | Core_datapath_regfile__io_rd_addr.values[0] << 2;}
  { Core_datapath_regfile__io_rs2_thread.values[0] = Core_datapath__if_reg_tid.values[0];}
  val_t T1063;
  { T1063 = Core_datapath__io_imem_r_data_out.values[0] >> 20;}
  T1063 = T1063 & 0x1fL;
  { Core_datapath_regfile__io_rs2_addr.values[0] = T1063;}
  val_t T1064;
  { T1064 = Core_datapath_regfile__io_rs2_thread.values[0] | Core_datapath_regfile__io_rs2_addr.values[0] << 2;}
  val_t T1065;
  { T1065 = Core_datapath_regfile__regfile.get(T1064, 0);}
  val_t T1066;
  T1066 = Core_datapath_regfile__io_rs2_addr.values[0] == 0x0L;
  { T1067.values[0] = TERNARY(T1066, 0x0L, T1065);}
  { Core_datapath_regfile__io_rs1_data.values[0] = Core_datapath_regfile__dout1.values[0];}
  { Core_datapath__wb_rd_data.values[0] = Core_datapath__wb_reg_rd_data.values[0];}
  { Core_datapath__io_control_wb_rd_addr.values[0] = Core_datapath__wb_reg_rd_addr.values[0];}
  { Core_control__io_wb_rd_addr.values[0] = Core_datapath__io_control_wb_rd_addr.values[0];}
  val_t T1068;
  { T1068 = Core_control__io_dec_inst.values[0] >> 15;}
  T1068 = T1068 & 0x1fL;
  val_t T1069;
  T1069 = T1068 == Core_control__io_wb_rd_addr.values[0];
  { Core_datapath__io_control_wb_tid.values[0] = Core_datapath__wb_reg_tid.values[0];}
  { Core_control__io_wb_tid.values[0] = Core_datapath__io_control_wb_tid.values[0];}
  val_t T1070;
  T1070 = Core_control__io_dec_tid.values[0] == Core_control__io_wb_tid.values[0];
  val_t T1071;
  { T1071 = T1070 & Core_control__wb_reg_rd_write.values[0];}
  val_t T1072;
  { T1072 = T1071 & T1069;}
  val_t T1073;
  { T1073 = TERNARY(T1072, 0x3L, 0x0L);}
  { Core_datapath__io_control_mem_rd_addr.values[0] = Core_datapath__mem_reg_rd_addr.values[0];}
  { Core_control__io_mem_rd_addr.values[0] = Core_datapath__io_control_mem_rd_addr.values[0];}
  val_t T1074;
  T1074 = T1068 == Core_control__io_mem_rd_addr.values[0];
  val_t T1075;
  T1075 = Core_control__io_dec_tid.values[0] == Core_control__io_mem_tid.values[0];
  val_t T1076;
  { T1076 = T1075 & Core_control__mem_reg_rd_write.values[0];}
  val_t T1077;
  { T1077 = T1076 & T1074;}
  val_t T1078;
  { T1078 = TERNARY(T1077, 0x2L, T1073);}
  { Core_datapath__io_control_exe_rd_addr.values[0] = Core_datapath__exe_reg_rd_addr.values[0];}
  { Core_control__io_exe_rd_addr.values[0] = Core_datapath__io_control_exe_rd_addr.values[0];}
  val_t T1079;
  T1079 = T1068 == Core_control__io_exe_rd_addr.values[0];
  val_t T1080;
  T1080 = Core_control__io_dec_tid.values[0] == Core_control__io_exe_tid.values[0];
  val_t T1081;
  { T1081 = T1080 & Core_control__exe_reg_rd_write.values[0];}
  val_t T1082;
  { T1082 = T1081 & T1079;}
  val_t T1083;
  { T1083 = TERNARY(T1082, 0x1L, T1078);}
  { Core_control__dec_rs1_sel.values[0] = T1083;}
  { Core_control__io_dec_rs1_sel.values[0] = Core_control__dec_rs1_sel.values[0];}
  { Core_datapath__io_control_dec_rs1_sel.values[0] = Core_control__io_dec_rs1_sel.values[0];}
  val_t T1084;
  T1084 = Core_datapath__io_control_dec_rs1_sel.values[0] == 0x3L;
  val_t T1085;
  { T1085 = TERNARY_1(T1084, Core_datapath__wb_rd_data.values[0], Core_datapath_regfile__io_rs1_data.values[0]);}
  val_t T1086;
  T1086 = Core_datapath__io_control_dec_rs1_sel.values[0] == 0x2L;
  val_t T1087;
  { T1087 = TERNARY_1(T1086, Core_datapath__mem_rd_data.values[0], T1085);}
  { Core_control__io_exe_rd_data_sel.values[0] = Core_control__exe_reg_rd_data_sel.values[0];}
  { Core_datapath__io_control_exe_rd_data_sel.values[0] = Core_control__io_exe_rd_data_sel.values[0];}
  val_t T1088;
  T1088 = Core_datapath__io_control_exe_rd_data_sel.values[0] == 0x2L;
  val_t T1089;
  { T1089 = TERNARY_1(T1088, Core_datapath__exe_reg_pc4.values[0], Core_datapath__exe_alu_result.values[0]);}
  val_t T1090;
  { T1090 = Core_datapath_csr__data_out.values[0];}
  T1090 = T1090 & 0xffffffffL;
  { Core_datapath_csr__io_rw_data_out.values[0] = T1090;}
  val_t T1091;
  T1091 = Core_datapath__io_control_exe_rd_data_sel.values[0] == 0x1L;
  val_t T1092;
  { T1092 = TERNARY_1(T1091, Core_datapath_csr__io_rw_data_out.values[0], T1089);}
  { Core_datapath__exe_rd_data.values[0] = T1092;}
  val_t T1093;
  T1093 = Core_datapath__io_control_dec_rs1_sel.values[0] == 0x1L;
  val_t T1094;
  { T1094 = TERNARY_1(T1093, Core_datapath__exe_rd_data.values[0], T1087);}
  { Core_datapath__dec_rs1_data.values[0] = T1094;}
  { T1095.values[0] = Core_datapath__dec_reg_inst.values[0] >> 7;}
  T1095.values[0] = T1095.values[0] & 0x1fL;
  { Core_datapath_regfile__io_rs2_data.values[0] = Core_datapath_regfile__dout2.values[0];}
  val_t T1096;
  { T1096 = Core_control__io_dec_inst.values[0] >> 20;}
  T1096 = T1096 & 0x1fL;
  val_t T1097;
  T1097 = T1096 == Core_control__io_wb_rd_addr.values[0];
  val_t T1098;
  { T1098 = T1071 & T1097;}
  val_t T1099;
  { T1099 = TERNARY(T1098, 0x3L, 0x0L);}
  val_t T1100;
  T1100 = T1096 == Core_control__io_mem_rd_addr.values[0];
  val_t T1101;
  { T1101 = T1076 & T1100;}
  val_t T1102;
  { T1102 = TERNARY(T1101, 0x2L, T1099);}
  val_t T1103;
  T1103 = T1096 == Core_control__io_exe_rd_addr.values[0];
  val_t T1104;
  { T1104 = T1081 & T1103;}
  val_t T1105;
  { T1105 = TERNARY(T1104, 0x1L, T1102);}
  { Core_control__dec_rs2_sel.values[0] = T1105;}
  { Core_control__io_dec_rs2_sel.values[0] = Core_control__dec_rs2_sel.values[0];}
  { Core_datapath__io_control_dec_rs2_sel.values[0] = Core_control__io_dec_rs2_sel.values[0];}
  val_t T1106;
  T1106 = Core_datapath__io_control_dec_rs2_sel.values[0] == 0x3L;
  val_t T1107;
  { T1107 = TERNARY_1(T1106, Core_datapath__wb_rd_data.values[0], Core_datapath_regfile__io_rs2_data.values[0]);}
  val_t T1108;
  T1108 = Core_datapath__io_control_dec_rs2_sel.values[0] == 0x2L;
  val_t T1109;
  { T1109 = TERNARY_1(T1108, Core_datapath__mem_rd_data.values[0], T1107);}
  val_t T1110;
  T1110 = Core_datapath__io_control_dec_rs2_sel.values[0] == 0x1L;
  val_t T1111;
  { T1111 = TERNARY_1(T1110, Core_datapath__exe_rd_data.values[0], T1109);}
  { Core_datapath__dec_rs2_data.values[0] = T1111;}
  { T1112.values[0] = Core_datapath__dec_reg_inst.values[0] >> 20;}
  T1112.values[0] = T1112.values[0] & 0xfffL;
  val_t T1113;
  { T1113 = Core_datapath__dec_reg_inst.values[0] >> 20;}
  T1113 = T1113 & 0x7ffL;
  val_t T1114;
  T1114 = (Core_datapath__dec_reg_inst.values[0] >> 31) & 1;
  val_t T1115;
  { T1115 = T1114 | 0x0L << 1;}
  val_t T1116;
  { T1116 = 0x0L-T1115;}
  T1116 = T1116 & 0x1fffffL;
  { Core_datapath__dec_imm_i.values[0] = T1113 | T1116 << 11;}
  val_t T1117;
  { T1117 = Core_datapath__dec_reg_inst.values[0] >> 15;}
  T1117 = T1117 & 0x1fL;
  { Core_datapath__dec_imm_z.values[0] = T1117 | 0x0L << 5;}
  val_t T1118;
  { T1118 = Core_control__io_dec_inst.values[0] & 0x44L;}
  val_t T1119;
  T1119 = T1118 == 0x40L;
  val_t T1120;
  { T1120 = Core_control__io_dec_inst.values[0] & 0x8L;}
  val_t T1121;
  T1121 = T1120 == 0x8L;
  val_t T1122;
  { T1122 = T1121 | T1119;}
  val_t T1123;
  { T1123 = Core_control__io_dec_inst.values[0] & 0x44L;}
  val_t T1124;
  T1124 = T1123 == 0x4L;
  val_t T1125;
  { T1125 = T1124 | T1121;}
  val_t T1126;
  { T1126 = T1122 | T1125 << 1;}
  val_t T1127;
  { T1127 = Core_control__io_dec_inst.values[0] & 0x14L;}
  val_t T1128;
  T1128 = T1127 == 0x10L;
  val_t T1129;
  { T1129 = Core_control__io_dec_inst.values[0] & 0x1cL;}
  val_t T1130;
  T1130 = T1129 == 0x4L;
  val_t T1131;
  { T1131 = Core_control__io_dec_inst.values[0] & 0x24L;}
  val_t T1132;
  T1132 = T1131 == 0x0L;
  val_t T1133;
  { T1133 = T1132 | T1130;}
  val_t T1134;
  { T1134 = T1133 | T1128;}
  { Core_control__dec_imm_sel.values[0] = T1126 | T1134 << 2;}
  { Core_control__io_dec_imm_sel.values[0] = Core_control__dec_imm_sel.values[0];}
  { Core_datapath__io_control_dec_imm_sel.values[0] = Core_control__io_dec_imm_sel.values[0];}
  val_t T1135;
  T1135 = Core_datapath__io_control_dec_imm_sel.values[0] == 0x5L;
  val_t T1136;
  { T1136 = TERNARY_1(T1135, Core_datapath__dec_imm_z.values[0], Core_datapath__dec_imm_i.values[0]);}
  val_t T1137;
  T1137 = Core_datapath__io_control_dec_imm_sel.values[0] == 0x4L;
  val_t T1138;
  { T1138 = TERNARY_1(T1137, Core_datapath__dec_imm_i.values[0], T1136);}
  val_t T1139;
  { T1139 = Core_datapath__dec_reg_inst.values[0] >> 21;}
  T1139 = T1139 & 0x3ffL;
  val_t T1140;
  { T1140 = 0x0L | T1139 << 1;}
  val_t T1141;
  T1141 = (Core_datapath__dec_reg_inst.values[0] >> 20) & 1;
  val_t T1142;
  { T1142 = T1140 | T1141 << 11;}
  val_t T1143;
  { T1143 = Core_datapath__dec_reg_inst.values[0] >> 12;}
  T1143 = T1143 & 0xffL;
  val_t T1144;
  T1144 = (Core_datapath__dec_reg_inst.values[0] >> 31) & 1;
  val_t T1145;
  { T1145 = T1144 | 0x0L << 1;}
  val_t T1146;
  { T1146 = 0x0L-T1145;}
  T1146 = T1146 & 0xfffL;
  val_t T1147;
  { T1147 = T1143 | T1146 << 8;}
  { Core_datapath__dec_imm_j.values[0] = T1142 | T1147 << 12;}
  val_t T1148;
  T1148 = Core_datapath__io_control_dec_imm_sel.values[0] == 0x3L;
  val_t T1149;
  { T1149 = TERNARY_1(T1148, Core_datapath__dec_imm_j.values[0], T1138);}
  val_t T1150;
  { T1150 = Core_datapath__dec_reg_inst.values[0] >> 12;}
  T1150 = T1150 & 0xfffffL;
  { Core_datapath__dec_imm_u.values[0] = 0x0L | T1150 << 12;}
  val_t T1151;
  T1151 = Core_datapath__io_control_dec_imm_sel.values[0] == 0x2L;
  val_t T1152;
  { T1152 = TERNARY_1(T1151, Core_datapath__dec_imm_u.values[0], T1149);}
  val_t T1153;
  { T1153 = Core_datapath__dec_reg_inst.values[0] >> 8;}
  T1153 = T1153 & 0xfL;
  val_t T1154;
  { T1154 = 0x0L | T1153 << 1;}
  val_t T1155;
  { T1155 = Core_datapath__dec_reg_inst.values[0] >> 25;}
  T1155 = T1155 & 0x3fL;
  val_t T1156;
  { T1156 = T1154 | T1155 << 5;}
  val_t T1157;
  T1157 = (Core_datapath__dec_reg_inst.values[0] >> 7) & 1;
  val_t T1158;
  T1158 = (Core_datapath__dec_reg_inst.values[0] >> 31) & 1;
  val_t T1159;
  { T1159 = T1158 | 0x0L << 1;}
  val_t T1160;
  { T1160 = 0x0L-T1159;}
  T1160 = T1160 & 0xfffffL;
  val_t T1161;
  { T1161 = T1157 | T1160 << 1;}
  { Core_datapath__dec_imm_b.values[0] = T1156 | T1161 << 11;}
  val_t T1162;
  T1162 = Core_datapath__io_control_dec_imm_sel.values[0] == 0x1L;
  val_t T1163;
  { T1163 = TERNARY_1(T1162, Core_datapath__dec_imm_b.values[0], T1152);}
  val_t T1164;
  { T1164 = Core_datapath__dec_reg_inst.values[0] >> 7;}
  T1164 = T1164 & 0x1fL;
  val_t T1165;
  { T1165 = Core_datapath__dec_reg_inst.values[0] >> 25;}
  T1165 = T1165 & 0x3fL;
  val_t T1166;
  { T1166 = T1164 | T1165 << 5;}
  val_t T1167;
  T1167 = (Core_datapath__dec_reg_inst.values[0] >> 31) & 1;
  val_t T1168;
  { T1168 = T1167 | 0x0L << 1;}
  val_t T1169;
  { T1169 = 0x0L-T1168;}
  T1169 = T1169 & 0x1fffffL;
  { Core_datapath__dec_imm_s.values[0] = T1166 | T1169 << 11;}
  val_t T1170;
  T1170 = Core_datapath__io_control_dec_imm_sel.values[0] == 0x0L;
  { Core_datapath__dec_imm.values[0] = TERNARY_1(T1170, Core_datapath__dec_imm_s.values[0], T1163);}
  val_t T1171;
  { T1171 = Core_control__io_dec_inst.values[0] & 0x4064L;}
  val_t T1172;
  T1172 = T1171 == 0x4020L;
  val_t T1173;
  { T1173 = Core_control__io_dec_inst.values[0] & 0x60L;}
  val_t T1174;
  T1174 = T1173 == 0x40L;
  val_t T1175;
  { T1175 = Core_control__io_dec_inst.values[0] & 0x74L;}
  val_t T1176;
  T1176 = T1175 == 0x30L;
  val_t T1177;
  { T1177 = T1176 | T1174;}
  val_t T1178;
  { T1178 = T1177 | T1172;}
  val_t T1179;
  { T1179 = Core_control__io_dec_inst.values[0] & 0x6050L;}
  val_t T1180;
  T1180 = T1179 == 0x6000L;
  val_t T1181;
  { T1181 = Core_control__io_dec_inst.values[0] & 0x4050L;}
  val_t T1182;
  T1182 = T1181 == 0x50L;
  val_t T1183;
  { T1183 = T1174 | T1182;}
  val_t T1184;
  { T1184 = T1183 | T1180;}
  { Core_control__dec_op2_sel.values[0] = T1178 | T1184 << 1;}
  { Core_control__io_dec_op2_sel.values[0] = Core_control__dec_op2_sel.values[0];}
  { Core_datapath__io_control_dec_op2_sel.values[0] = Core_control__io_dec_op2_sel.values[0];}
  val_t T1185;
  T1185 = Core_datapath__io_control_dec_op2_sel.values[0] == 0x0L;
  { Core_datapath__dec_csr_data.values[0] = TERNARY_1(T1185, Core_datapath__dec_imm.values[0], Core_datapath__dec_rs1_data.values[0]);}
  { T1186.values[0] = TERNARY(Core_datapath__reset.values[0], 0x0L, Core_datapath__next_pcs_3.values[0]);}
  { T1187.values[0] = TERNARY(Core_datapath__reset.values[0], 0x0L, Core_datapath__next_pcs_2.values[0]);}
  { T1188.values[0] = TERNARY(Core_datapath__reset.values[0], 0x0L, Core_datapath__next_pcs_1.values[0]);}
  val_t T1189;
  { T1189 = Core_control__io_dec_inst.values[0] & 0x4014L;}
  val_t T1190;
  T1190 = T1189 == 0x10L;
  val_t T1191;
  { T1191 = Core_control__io_dec_inst.values[0] & 0x4cL;}
  val_t T1192;
  T1192 = T1191 == 0x0L;
  val_t T1193;
  { T1193 = T1192 | T1130;}
  val_t T1194;
  { T1194 = T1193 | T1190;}
  val_t T1195;
  { T1195 = Core_control__io_dec_inst.values[0] & 0x4058L;}
  val_t T1196;
  T1196 = T1195 == 0x4050L;
  val_t T1197;
  { T1197 = Core_control__io_dec_inst.values[0] & 0x64L;}
  val_t T1198;
  T1198 = T1197 == 0x24L;
  val_t T1199;
  { T1199 = T1198 | T1196;}
  { Core_control__dec_op1_sel.values[0] = T1194 | T1199 << 1;}
  { Core_control__io_dec_op1_sel.values[0] = Core_control__dec_op1_sel.values[0];}
  { Core_datapath__io_control_dec_op1_sel.values[0] = Core_control__io_dec_op1_sel.values[0];}
  val_t T1200;
  T1200 = Core_datapath__io_control_dec_op1_sel.values[0] == 0x0L;
  val_t T1201;
  { T1201 = TERNARY(T1200, Core_datapath__dec_reg_pc.values[0], 0x0L);}
  val_t T1202;
  T1202 = Core_datapath__io_control_dec_op1_sel.values[0] == 0x1L;
  { Core_datapath__dec_op1.values[0] = TERNARY_1(T1202, Core_datapath__dec_rs1_data.values[0], T1201);}
  val_t T1203;
  T1203 = Core_datapath__io_control_dec_op2_sel.values[0] == 0x0L;
  val_t T1204;
  { T1204 = TERNARY(T1203, Core_datapath__dec_imm.values[0], 0x0L);}
  val_t T1205;
  T1205 = Core_datapath__io_control_dec_op2_sel.values[0] == 0x1L;
  { Core_datapath__dec_op2.values[0] = TERNARY_1(T1205, Core_datapath__dec_rs2_data.values[0], T1204);}
  { T1206.values[0] = TERNARY(Core_datapath__reset.values[0], 0x0L, Core_datapath__next_pcs_0.values[0]);}
  { Core_datapath_csr__io_tmodes_1.values[0] = Core_datapath_csr__reg_tmodes_1.values[0];}
  { Core_datapath__io_control_csr_tmodes_1.values[0] = Core_datapath_csr__io_tmodes_1.values[0];}
  { Core_control__io_csr_tmodes_1.values[0] = Core_datapath__io_control_csr_tmodes_1.values[0];}
  { Core_control_scheduler__io_thread_modes_1.values[0] = Core_control__io_csr_tmodes_1.values[0];}
  val_t T1207;
  T1207 = Core_control_scheduler__io_thread_modes_1.values[0] == 0x2L;
  { Core_datapath_csr__io_tmodes_0.values[0] = Core_datapath_csr__reg_tmodes_0.values[0];}
  { Core_datapath__io_control_csr_tmodes_0.values[0] = Core_datapath_csr__io_tmodes_0.values[0];}
  { Core_control__io_csr_tmodes_0.values[0] = Core_datapath__io_control_csr_tmodes_0.values[0];}
  { Core_control_scheduler__io_thread_modes_0.values[0] = Core_control__io_csr_tmodes_0.values[0];}
  val_t T1208;
  T1208 = Core_control_scheduler__io_thread_modes_0.values[0] == 0x2L;
  val_t T1209;
  { T1209 = T1208 | T1207;}
  val_t T1210;
  { T1210 = T1209 ^ 0x1L;}
  { Core_datapath_csr__io_tmodes_2.values[0] = Core_datapath_csr__reg_tmodes_2.values[0];}
  { Core_datapath__io_control_csr_tmodes_2.values[0] = Core_datapath_csr__io_tmodes_2.values[0];}
  { Core_control__io_csr_tmodes_2.values[0] = Core_datapath__io_control_csr_tmodes_2.values[0];}
  { Core_control_scheduler__io_thread_modes_2.values[0] = Core_control__io_csr_tmodes_2.values[0];}
  val_t T1211;
  T1211 = Core_control_scheduler__io_thread_modes_2.values[0] == 0x2L;
  val_t T1212;
  { T1212 = T1211 & T1210;}
  val_t T1213;
  { T1213 = T1207 & Core_control_scheduler__R185.values[0];}
  val_t T1214;
  { T1214 = T1213 ^ 0x1L;}
  val_t T1215;
  { T1215 = Core_control_scheduler__R185.values[0] | Core_control_scheduler__R180.values[0];}
  val_t T1216;
  { T1216 = T1211 & T1215;}
  val_t T1217;
  { T1217 = T1216 & T1214;}
  val_t T1218;
  { T1218 = Core_control_scheduler__R185.values[0] | Core_control_scheduler__R180.values[0];}
  val_t T1219;
  { T1219 = T1218 | Core_control_scheduler__R191.values[0];}
  { Core_datapath_csr__io_tmodes_3.values[0] = Core_datapath_csr__reg_tmodes_3.values[0];}
  { Core_datapath__io_control_csr_tmodes_3.values[0] = Core_datapath_csr__io_tmodes_3.values[0];}
  { Core_control__io_csr_tmodes_3.values[0] = Core_datapath__io_control_csr_tmodes_3.values[0];}
  { Core_control_scheduler__io_thread_modes_3.values[0] = Core_control__io_csr_tmodes_3.values[0];}
  val_t T1220;
  T1220 = Core_control_scheduler__io_thread_modes_3.values[0] == 0x2L;
  val_t T1221;
  { T1221 = T1220 & T1219;}
  val_t T1222;
  { T1222 = T1213 | T1216;}
  val_t T1223;
  { T1223 = T1222 | T1221;}
  val_t T1224;
  { T1224 = TERNARY_1(T1223, T1217, T1212);}
  val_t T1225;
  { T1225 = T1208 | T1207;}
  val_t T1226;
  { T1226 = T1225 | T1211;}
  val_t T1227;
  { T1227 = T1226 ^ 0x1L;}
  val_t T1228;
  { T1228 = T1220 & T1227;}
  val_t T1229;
  { T1229 = T1213 | T1216;}
  val_t T1230;
  { T1230 = T1229 ^ 0x1L;}
  val_t T1231;
  { T1231 = T1221 & T1230;}
  val_t T1232;
  { T1232 = TERNARY_1(T1223, T1231, T1228);}
  val_t T1233;
  { T1233 = T1208 ^ 0x1L;}
  val_t T1234;
  { T1234 = T1207 & T1233;}
  val_t T1235;
  { T1235 = TERNARY_1(T1223, T1213, T1234);}
  val_t T1236;
  { T1236 = TERNARY(T1223, 0x0L, T1208);}
  val_t T1237;
  { T1237 = T1236 | T1235;}
  val_t T1238;
  { T1238 = T1237 | T1224;}
  val_t T1239;
  { T1239 = T1238 | T1232;}
  { Core_datapath_csr__io_slots_7.values[0] = Core_datapath_csr__reg_slots_7.values[0];}
  { Core_datapath__io_control_csr_slots_7.values[0] = Core_datapath_csr__io_slots_7.values[0];}
  { Core_control__io_csr_slots_7.values[0] = Core_datapath__io_control_csr_slots_7.values[0];}
  { Core_control_scheduler__io_slots_7.values[0] = Core_control__io_csr_slots_7.values[0];}
  { Core_datapath_csr__io_slots_6.values[0] = Core_datapath_csr__reg_slots_6.values[0];}
  { Core_datapath__io_control_csr_slots_6.values[0] = Core_datapath_csr__io_slots_6.values[0];}
  { Core_control__io_csr_slots_6.values[0] = Core_datapath__io_control_csr_slots_6.values[0];}
  { Core_control_scheduler__io_slots_6.values[0] = Core_control__io_csr_slots_6.values[0];}
  val_t T1240;
  T1240 = Core_control_scheduler__io_slots_6.values[0] != 0xfL;
  { Core_datapath_csr__io_slots_5.values[0] = Core_datapath_csr__reg_slots_5.values[0];}
  { Core_datapath__io_control_csr_slots_5.values[0] = Core_datapath_csr__io_slots_5.values[0];}
  { Core_control__io_csr_slots_5.values[0] = Core_datapath__io_control_csr_slots_5.values[0];}
  { Core_control_scheduler__io_slots_5.values[0] = Core_control__io_csr_slots_5.values[0];}
  val_t T1241;
  T1241 = Core_control_scheduler__io_slots_5.values[0] != 0xfL;
  { Core_datapath_csr__io_slots_4.values[0] = Core_datapath_csr__reg_slots_4.values[0];}
  { Core_datapath__io_control_csr_slots_4.values[0] = Core_datapath_csr__io_slots_4.values[0];}
  { Core_control__io_csr_slots_4.values[0] = Core_datapath__io_control_csr_slots_4.values[0];}
  { Core_control_scheduler__io_slots_4.values[0] = Core_control__io_csr_slots_4.values[0];}
  val_t T1242;
  T1242 = Core_control_scheduler__io_slots_4.values[0] != 0xfL;
  { Core_datapath_csr__io_slots_3.values[0] = Core_datapath_csr__reg_slots_3.values[0];}
  { Core_datapath__io_control_csr_slots_3.values[0] = Core_datapath_csr__io_slots_3.values[0];}
  { Core_control__io_csr_slots_3.values[0] = Core_datapath__io_control_csr_slots_3.values[0];}
  { Core_control_scheduler__io_slots_3.values[0] = Core_control__io_csr_slots_3.values[0];}
  val_t T1243;
  T1243 = Core_control_scheduler__io_slots_3.values[0] != 0xfL;
  { Core_datapath_csr__io_slots_2.values[0] = Core_datapath_csr__reg_slots_2.values[0];}
  { Core_datapath__io_control_csr_slots_2.values[0] = Core_datapath_csr__io_slots_2.values[0];}
  { Core_control__io_csr_slots_2.values[0] = Core_datapath__io_control_csr_slots_2.values[0];}
  { Core_control_scheduler__io_slots_2.values[0] = Core_control__io_csr_slots_2.values[0];}
  val_t T1244;
  T1244 = Core_control_scheduler__io_slots_2.values[0] != 0xfL;
  { Core_datapath_csr__io_slots_1.values[0] = Core_datapath_csr__reg_slots_1.values[0];}
  { Core_datapath__io_control_csr_slots_1.values[0] = Core_datapath_csr__io_slots_1.values[0];}
  { Core_control__io_csr_slots_1.values[0] = Core_datapath__io_control_csr_slots_1.values[0];}
  { Core_control_scheduler__io_slots_1.values[0] = Core_control__io_csr_slots_1.values[0];}
  val_t T1245;
  T1245 = Core_control_scheduler__io_slots_1.values[0] != 0xfL;
  { Core_datapath_csr__io_slots_0.values[0] = Core_datapath_csr__reg_slots_0.values[0];}
  { Core_datapath__io_control_csr_slots_0.values[0] = Core_datapath_csr__io_slots_0.values[0];}
  { Core_control__io_csr_slots_0.values[0] = Core_datapath__io_control_csr_slots_0.values[0];}
  { Core_control_scheduler__io_slots_0.values[0] = Core_control__io_csr_slots_0.values[0];}
  val_t T1246;
  T1246 = Core_control_scheduler__io_slots_0.values[0] != 0xfL;
  val_t T1247;
  { T1247 = T1246 | T1245;}
  val_t T1248;
  { T1248 = T1247 | T1244;}
  val_t T1249;
  { T1249 = T1248 | T1243;}
  val_t T1250;
  { T1250 = T1249 | T1242;}
  val_t T1251;
  { T1251 = T1250 | T1241;}
  val_t T1252;
  { T1252 = T1251 | T1240;}
  val_t T1253;
  { T1253 = T1252 ^ 0x1L;}
  val_t T1254;
  T1254 = Core_control_scheduler__io_slots_7.values[0] != 0xfL;
  val_t T1255;
  { T1255 = T1254 & T1253;}
  val_t T1256;
  { T1256 = Core_control_scheduler__R65.values[0] | Core_control_scheduler__R60.values[0];}
  val_t T1257;
  { T1257 = T1256 | Core_control_scheduler__R71.values[0];}
  val_t T1258;
  { T1258 = T1257 | Core_control_scheduler__R48.values[0];}
  val_t T1259;
  { T1259 = T1258 | Core_control_scheduler__R86.values[0];}
  val_t T1260;
  { T1260 = T1259 | Core_control_scheduler__R34.values[0];}
  val_t T1261;
  { T1261 = T1240 & T1260;}
  val_t T1262;
  { T1262 = Core_control_scheduler__R65.values[0] | Core_control_scheduler__R60.values[0];}
  val_t T1263;
  { T1263 = T1262 | Core_control_scheduler__R71.values[0];}
  val_t T1264;
  { T1264 = T1263 | Core_control_scheduler__R48.values[0];}
  val_t T1265;
  { T1265 = T1264 | Core_control_scheduler__R86.values[0];}
  val_t T1266;
  { T1266 = T1241 & T1265;}
  val_t T1267;
  { T1267 = Core_control_scheduler__R65.values[0] | Core_control_scheduler__R60.values[0];}
  val_t T1268;
  { T1268 = T1267 | Core_control_scheduler__R71.values[0];}
  val_t T1269;
  { T1269 = T1268 | Core_control_scheduler__R48.values[0];}
  val_t T1270;
  { T1270 = T1242 & T1269;}
  val_t T1271;
  { T1271 = Core_control_scheduler__R65.values[0] | Core_control_scheduler__R60.values[0];}
  val_t T1272;
  { T1272 = T1271 | Core_control_scheduler__R71.values[0];}
  val_t T1273;
  { T1273 = T1243 & T1272;}
  val_t T1274;
  { T1274 = Core_control_scheduler__R65.values[0] | Core_control_scheduler__R60.values[0];}
  val_t T1275;
  { T1275 = T1244 & T1274;}
  val_t T1276;
  { T1276 = T1245 & Core_control_scheduler__R65.values[0];}
  val_t T1277;
  { T1277 = T1276 | T1275;}
  val_t T1278;
  { T1278 = T1277 | T1273;}
  val_t T1279;
  { T1279 = T1278 | T1270;}
  val_t T1280;
  { T1280 = T1279 | T1266;}
  val_t T1281;
  { T1281 = T1280 | T1261;}
  val_t T1282;
  { T1282 = T1281 ^ 0x1L;}
  val_t T1283;
  { T1283 = Core_control_scheduler__R65.values[0] | Core_control_scheduler__R60.values[0];}
  val_t T1284;
  { T1284 = T1283 | Core_control_scheduler__R71.values[0];}
  val_t T1285;
  { T1285 = T1284 | Core_control_scheduler__R48.values[0];}
  val_t T1286;
  { T1286 = T1285 | Core_control_scheduler__R86.values[0];}
  val_t T1287;
  { T1287 = T1286 | Core_control_scheduler__R34.values[0];}
  val_t T1288;
  { T1288 = T1287 | Core_control_scheduler__R111.values[0];}
  val_t T1289;
  { T1289 = T1254 & T1288;}
  val_t T1290;
  { T1290 = T1289 & T1282;}
  val_t T1291;
  { T1291 = T1276 | T1275;}
  val_t T1292;
  { T1292 = T1291 | T1273;}
  val_t T1293;
  { T1293 = T1292 | T1270;}
  val_t T1294;
  { T1294 = T1293 | T1266;}
  val_t T1295;
  { T1295 = T1294 | T1261;}
  val_t T1296;
  { T1296 = T1295 | T1289;}
  val_t T1297;
  { T1297 = TERNARY_1(T1296, T1290, T1255);}
  val_t T1298;
  { T1298 = TERNARY(T1297, Core_control_scheduler__io_slots_7.values[0], 0x0L);}
  val_t T1299;
  { T1299 = T1246 | T1245;}
  val_t T1300;
  { T1300 = T1299 | T1244;}
  val_t T1301;
  { T1301 = T1300 | T1243;}
  val_t T1302;
  { T1302 = T1301 | T1242;}
  val_t T1303;
  { T1303 = T1302 | T1241;}
  val_t T1304;
  { T1304 = T1303 ^ 0x1L;}
  val_t T1305;
  { T1305 = T1240 & T1304;}
  val_t T1306;
  { T1306 = T1276 | T1275;}
  val_t T1307;
  { T1307 = T1306 | T1273;}
  val_t T1308;
  { T1308 = T1307 | T1270;}
  val_t T1309;
  { T1309 = T1308 | T1266;}
  val_t T1310;
  { T1310 = T1309 ^ 0x1L;}
  val_t T1311;
  { T1311 = T1261 & T1310;}
  val_t T1312;
  { T1312 = TERNARY_1(T1296, T1311, T1305);}
  val_t T1313;
  { T1313 = TERNARY(T1312, Core_control_scheduler__io_slots_6.values[0], 0x0L);}
  val_t T1314;
  { T1314 = T1246 | T1245;}
  val_t T1315;
  { T1315 = T1314 | T1244;}
  val_t T1316;
  { T1316 = T1315 | T1243;}
  val_t T1317;
  { T1317 = T1316 | T1242;}
  val_t T1318;
  { T1318 = T1317 ^ 0x1L;}
  val_t T1319;
  { T1319 = T1241 & T1318;}
  val_t T1320;
  { T1320 = T1276 | T1275;}
  val_t T1321;
  { T1321 = T1320 | T1273;}
  val_t T1322;
  { T1322 = T1321 | T1270;}
  val_t T1323;
  { T1323 = T1322 ^ 0x1L;}
  val_t T1324;
  { T1324 = T1266 & T1323;}
  val_t T1325;
  { T1325 = TERNARY_1(T1296, T1324, T1319);}
  val_t T1326;
  { T1326 = TERNARY(T1325, Core_control_scheduler__io_slots_5.values[0], 0x0L);}
  val_t T1327;
  { T1327 = T1246 | T1245;}
  val_t T1328;
  { T1328 = T1327 | T1244;}
  val_t T1329;
  { T1329 = T1328 | T1243;}
  val_t T1330;
  { T1330 = T1329 ^ 0x1L;}
  val_t T1331;
  { T1331 = T1242 & T1330;}
  val_t T1332;
  { T1332 = T1276 | T1275;}
  val_t T1333;
  { T1333 = T1332 | T1273;}
  val_t T1334;
  { T1334 = T1333 ^ 0x1L;}
  val_t T1335;
  { T1335 = T1270 & T1334;}
  val_t T1336;
  { T1336 = TERNARY_1(T1296, T1335, T1331);}
  val_t T1337;
  { T1337 = TERNARY(T1336, Core_control_scheduler__io_slots_4.values[0], 0x0L);}
  val_t T1338;
  { T1338 = T1246 | T1245;}
  val_t T1339;
  { T1339 = T1338 | T1244;}
  val_t T1340;
  { T1340 = T1339 ^ 0x1L;}
  val_t T1341;
  { T1341 = T1243 & T1340;}
  val_t T1342;
  { T1342 = T1276 | T1275;}
  val_t T1343;
  { T1343 = T1342 ^ 0x1L;}
  val_t T1344;
  { T1344 = T1273 & T1343;}
  val_t T1345;
  { T1345 = TERNARY_1(T1296, T1344, T1341);}
  val_t T1346;
  { T1346 = TERNARY(T1345, Core_control_scheduler__io_slots_3.values[0], 0x0L);}
  val_t T1347;
  { T1347 = T1246 | T1245;}
  val_t T1348;
  { T1348 = T1347 ^ 0x1L;}
  val_t T1349;
  { T1349 = T1244 & T1348;}
  val_t T1350;
  { T1350 = T1276 ^ 0x1L;}
  val_t T1351;
  { T1351 = T1275 & T1350;}
  val_t T1352;
  { T1352 = TERNARY_1(T1296, T1351, T1349);}
  val_t T1353;
  { T1353 = TERNARY(T1352, Core_control_scheduler__io_slots_2.values[0], 0x0L);}
  val_t T1354;
  { T1354 = T1246 ^ 0x1L;}
  val_t T1355;
  { T1355 = T1245 & T1354;}
  val_t T1356;
  { T1356 = TERNARY_1(T1296, T1276, T1355);}
  val_t T1357;
  { T1357 = TERNARY(T1356, Core_control_scheduler__io_slots_1.values[0], 0x0L);}
  val_t T1358;
  { T1358 = TERNARY(T1296, 0x0L, T1246);}
  val_t T1359;
  { T1359 = TERNARY(T1358, Core_control_scheduler__io_slots_0.values[0], 0x0L);}
  val_t T1360;
  { T1360 = T1359 | T1357;}
  val_t T1361;
  { T1361 = T1360 | T1353;}
  val_t T1362;
  { T1362 = T1361 | T1346;}
  val_t T1363;
  { T1363 = T1362 | T1337;}
  val_t T1364;
  { T1364 = T1363 | T1326;}
  val_t T1365;
  { T1365 = T1364 | T1313;}
  val_t T1366;
  { T1366 = T1365 | T1298;}
  val_t T1367;
  { T1367 = T1366;}
  T1367 = T1367 & 0x3L;
  val_t T1368;
  T1368 = (T1367 >> 0) & 1;
  val_t T1369;
  { T1369 = TERNARY_1(T1368, Core_control_scheduler__io_thread_modes_1.values[0], Core_control_scheduler__io_thread_modes_0.values[0]);}
  val_t T1370;
  T1370 = (T1367 >> 0) & 1;
  val_t T1371;
  { T1371 = TERNARY_1(T1370, Core_control_scheduler__io_thread_modes_3.values[0], Core_control_scheduler__io_thread_modes_2.values[0]);}
  val_t T1372;
  T1372 = (T1367 >> 1) & 1;
  val_t T1373;
  { T1373 = TERNARY_1(T1372, T1371, T1369);}
  val_t T1374;
  T1374 = T1373 == 0x2L;
  val_t T1375;
  T1375 = T1373 == 0x0L;
  val_t T1376;
  { T1376 = T1375 | T1374;}
  val_t T1377;
  T1377 = T1366 != 0xeL;
  val_t T1378;
  { T1378 = T1377 & T1376;}
  val_t T1379;
  { T1379 = T1378 ^ 0x1L;}
  val_t T1380;
  { T1380 = T1379 & T1239;}
  val_t T1381;
  { T1381 = T1358 | T1356;}
  val_t T1382;
  { T1382 = T1381 | T1352;}
  val_t T1383;
  { T1383 = T1382 | T1345;}
  val_t T1384;
  { T1384 = T1383 | T1336;}
  val_t T1385;
  { T1385 = T1384 | T1325;}
  val_t T1386;
  { T1386 = T1385 | T1312;}
  val_t T1387;
  { T1387 = T1386 | T1297;}
  val_t T1388;
  { T1388 = T1387 & T1380;}
  val_t T1389;
  { T1389 = TERNARY_1(T1388, T1224, Core_control_scheduler__R191.values[0]);}
  { Core_control__reset.values[0] = reset.values[0];}
  { Core_control_scheduler__reset.values[0] = Core_control__reset.values[0];}
  { T1390.values[0] = TERNARY(Core_control_scheduler__reset.values[0], 0x0L, T1389);}
  val_t T1391;
  { T1391 = TERNARY_1(T1388, T1236, Core_control_scheduler__R185.values[0]);}
  { T1392.values[0] = TERNARY(Core_control_scheduler__reset.values[0], 0x0L, T1391);}
  val_t T1393;
  { T1393 = TERNARY_1(T1388, T1235, Core_control_scheduler__R180.values[0]);}
  { T1394.values[0] = TERNARY(Core_control_scheduler__reset.values[0], 0x0L, T1393);}
  val_t T1395;
  { T1395 = TERNARY_1(T1387, T1312, Core_control_scheduler__R111.values[0]);}
  { T1396.values[0] = TERNARY(Core_control_scheduler__reset.values[0], 0x0L, T1395);}
  val_t T1397;
  { T1397 = TERNARY_1(T1387, T1336, Core_control_scheduler__R86.values[0]);}
  { T1398.values[0] = TERNARY(Core_control_scheduler__reset.values[0], 0x0L, T1397);}
  val_t T1399;
  { T1399 = TERNARY_1(T1387, T1352, Core_control_scheduler__R71.values[0]);}
  { T1400.values[0] = TERNARY(Core_control_scheduler__reset.values[0], 0x0L, T1399);}
  val_t T1401;
  { T1401 = TERNARY_1(T1387, T1358, Core_control_scheduler__R65.values[0]);}
  { T1402.values[0] = TERNARY(Core_control_scheduler__reset.values[0], 0x0L, T1401);}
  val_t T1403;
  { T1403 = TERNARY_1(T1387, T1356, Core_control_scheduler__R60.values[0]);}
  { T1404.values[0] = TERNARY(Core_control_scheduler__reset.values[0], 0x0L, T1403);}
  val_t T1405;
  { T1405 = TERNARY_1(T1387, T1345, Core_control_scheduler__R48.values[0]);}
  { T1406.values[0] = TERNARY(Core_control_scheduler__reset.values[0], 0x0L, T1405);}
  val_t T1407;
  { T1407 = TERNARY_1(T1387, T1325, Core_control_scheduler__R34.values[0]);}
  { T1408.values[0] = TERNARY(Core_control_scheduler__reset.values[0], 0x0L, T1407);}
  val_t T1409;
  { T1409 = Core_control__io_dec_inst.values[0] & 0x1054L;}
  val_t T1410;
  T1410 = T1409 == 0x1010L;
  val_t T1411;
  { T1411 = Core_control__io_dec_inst.values[0] & 0x2054L;}
  val_t T1412;
  T1412 = T1411 == 0x2010L;
  val_t T1413;
  { T1413 = T1410 | T1412 << 1;}
  val_t T1414;
  { T1414 = Core_control__io_dec_inst.values[0] & 0x4054L;}
  val_t T1415;
  T1415 = T1414 == 0x4010L;
  val_t T1416;
  { T1416 = T1413 | T1415 << 2;}
  val_t T1417;
  { T1417 = Core_control__io_dec_inst.values[0] & 0x40003054L;}
  val_t T1418;
  T1418 = T1417 == 0x40001010L;
  val_t T1419;
  { T1419 = Core_control__io_dec_inst.values[0] & 0x40003034L;}
  val_t T1420;
  T1420 = T1419 == 0x40000030L;
  val_t T1421;
  { T1421 = Core_control__io_dec_inst.values[0] & 0x6054L;}
  val_t T1422;
  T1422 = T1421 == 0x2010L;
  val_t T1423;
  { T1423 = T1422 | T1420;}
  val_t T1424;
  { T1424 = T1423 | T1418;}
  { Core_control__dec_alu_type.values[0] = T1416 | T1424 << 3;}
  val_t T1425;
  { T1425 = Core_control__io_dec_inst.values[0] & 0x1000L;}
  val_t T1426;
  T1426 = T1425 == 0x1000L;
  val_t T1427;
  { T1427 = Core_control__io_dec_inst.values[0] & 0x6000L;}
  val_t T1428;
  T1428 = T1427 == 0x4000L;
  val_t T1429;
  { T1429 = T1426 | T1428 << 1;}
  val_t T1430;
  { T1430 = Core_control__io_dec_inst.values[0] & 0x2000L;}
  val_t T1431;
  T1431 = T1430 == 0x2000L;
  { Core_control__dec_br_type.values[0] = T1429 | T1431 << 2;}
  { Core_control__dec_csr_type.values[0] = T1426 | T1431 << 1;}
  val_t T1432;
  { T1432 = Core_control__io_dec_inst.values[0] & 0x10L;}
  val_t T1433;
  T1433 = T1432 == 0x0L;
  { Core_control__dec_exe_rd_data_sel.values[0] = T1119 | T1433 << 1;}
  val_t T1434;
  { T1434 = T1426 | T1431 << 1;}
  val_t T1435;
  { T1435 = Core_control__io_dec_inst.values[0] & 0x4000L;}
  val_t T1436;
  T1436 = T1435 == 0x4000L;
  val_t T1437;
  { T1437 = T1434 | T1436 << 2;}
  val_t T1438;
  { T1438 = Core_control__io_dec_inst.values[0] & 0x20L;}
  val_t T1439;
  T1439 = T1438 == 0x20L;
  { Core_control__dec_mem_type.values[0] = T1437 | T1439 << 3;}
  val_t T1440;
  { T1440 = Core_control__io_dec_inst.values[0] & 0x50L;}
  val_t T1441;
  T1441 = T1440 == 0x0L;
  { Core_control__dec_mem_rd_data_sel.values[0] = T1441 | 0x0L << 1;}
  val_t T1442;
  { T1442 = T1366;}
  T1442 = T1442 & 0x3L;
  val_t T1443;
  { T1443 = T1442 | 0x0L << 2;}
  val_t T1444;
  { T1444 = T1366;}
  T1444 = T1444 & 0x7L;
  val_t T1445;
  { T1445 = T1387 & T1378;}
  val_t T1446;
  { T1446 = TERNARY_1(T1445, T1444, T1443);}
  val_t T1447;
  { T1447 = T1236 | T1235 << 1;}
  val_t T1448;
  { T1448 = T1224 | T1232 << 1;}
  val_t T1449;
  { T1449 = T1447 | T1448 << 2;}
  val_t T1450;
  T1450 = TERNARY(T1449 != 0, 0 + priority_encode_1(T1449), 0);
  val_t T1451;
  { T1451 = T1450 | 0x0L << 2;}
  val_t T1452;
  { T1452 = TERNARY_1(T1388, T1451, T1446);}
  val_t T1453;
  { T1453 = T1452;}
  T1453 = T1453 & 0x3L;
  { Core_control_scheduler__io_thread.values[0] = T1453;}
  { T1454.values[0] = Core_control__dec_load.values[0];}
  val_t T1455;
  { T1455 = Core_control__io_dec_inst.values[0] & 0x507fL;}
  val_t T1456;
  T1456 = T1455 == 0x23L;
  val_t T1457;
  { T1457 = Core_control__io_dec_inst.values[0] & 0x607fL;}
  val_t T1458;
  T1458 = T1457 == 0x23L;
  { Core_control__dec_store.values[0] = T1458 | T1456;}
  { T1459.values[0] = Core_control__dec_store.values[0];}
  val_t T1460;
  { T1460 = Core_control__io_dec_inst.values[0] & 0x207fL;}
  val_t T1461;
  T1461 = T1460 == 0x2073L;
  val_t T1462;
  { T1462 = Core_control__io_dec_inst.values[0] & 0x107fL;}
  val_t T1463;
  T1463 = T1462 == 0x1073L;
  { Core_control__dec_csr.values[0] = T1463 | T1461;}
  { T1464.values[0] = Core_control__dec_csr.values[0];}
  val_t T1465;
  { T1465 = Core_control__io_dec_inst.values[0] & 0x8010707fL;}
  Core_control__dec_scall.values[0] = T1465 == 0x73L;
  val_t T1466;
  { T1466 = TERNARY(Core_control__dec_scall.values[0], 0x6L, 0x0L);}
  val_t T1467;
  { T1467 = Core_control__io_dec_inst.values[0] & 0x306fL;}
  val_t T1468;
  T1468 = T1467 == 0x3L;
  val_t T1469;
  { T1469 = Core_control__io_dec_inst.values[0] & 0x407fL;}
  val_t T1470;
  T1470 = T1469 == 0x4063L;
  val_t T1471;
  { T1471 = Core_control__io_dec_inst.values[0] & 0x306fL;}
  val_t T1472;
  T1472 = T1471 == 0x1063L;
  val_t T1473;
  { T1473 = Core_control__io_dec_inst.values[0] & 0x603fL;}
  val_t T1474;
  T1474 = T1473 == 0x23L;
  val_t T1475;
  { T1475 = Core_control__io_dec_inst.values[0] & 0x707fL;}
  Core_control__dec_ie.values[0] = T1475 == 0x705bL;
  val_t T1476;
  { T1476 = Core_control__io_dec_inst.values[0] & 0x705fL;}
  Core_control__dec_du.values[0] = T1476 == 0x700bL;
  val_t T1477;
  { T1477 = Core_control__io_dec_inst.values[0] & 0xbe00707fL;}
  val_t T1478;
  T1478 = T1477 == 0x5033L;
  val_t T1479;
  { T1479 = Core_control__io_dec_inst.values[0] & 0xbc00707fL;}
  val_t T1480;
  T1480 = T1479 == 0x5013L;
  val_t T1481;
  { T1481 = Core_control__io_dec_inst.values[0] & 0x207fL;}
  val_t T1482;
  T1482 = T1481 == 0x2013L;
  val_t T1483;
  { T1483 = Core_control__io_dec_inst.values[0] & 0xfc00307fL;}
  val_t T1484;
  T1484 = T1483 == 0x1013L;
  val_t T1485;
  { T1485 = Core_control__io_dec_inst.values[0] & 0x7fL;}
  val_t T1486;
  T1486 = T1485 == 0x6fL;
  val_t T1487;
  { T1487 = Core_control__io_dec_inst.values[0] & 0x707bL;}
  val_t T1488;
  T1488 = T1487 == 0x63L;
  val_t T1489;
  { T1489 = Core_control__io_dec_inst.values[0] & 0xbe00707fL;}
  val_t T1490;
  T1490 = T1489 == 0x33L;
  val_t T1491;
  { T1491 = Core_control__io_dec_inst.values[0] & 0xfe00007fL;}
  val_t T1492;
  T1492 = T1491 == 0x33L;
  val_t T1493;
  { T1493 = Core_control__io_dec_inst.values[0] & 0x5fL;}
  val_t T1494;
  T1494 = T1493 == 0x17L;
  val_t T1495;
  { T1495 = Core_control__io_dec_inst.values[0] & 0x607fL;}
  val_t T1496;
  T1496 = T1495 == 0xfL;
  val_t T1497;
  { T1497 = Core_control__io_dec_inst.values[0] & 0x505fL;}
  val_t T1498;
  T1498 = T1497 == 0x3L;
  val_t T1499;
  { T1499 = T1498 | T219;}
  val_t T1500;
  { T1500 = T1499 | T1496;}
  val_t T1501;
  { T1501 = T1500 | T1494;}
  val_t T1502;
  { T1502 = T1501 | T1492;}
  val_t T1503;
  { T1503 = T1502 | T1490;}
  val_t T1504;
  { T1504 = T1503 | T1488;}
  val_t T1505;
  { T1505 = T1504 | T1486;}
  val_t T1506;
  { T1506 = T1505 | Core_control__dec_scall.values[0];}
  val_t T1507;
  { T1507 = T1506 | T1484;}
  val_t T1508;
  { T1508 = T1507 | T1482;}
  val_t T1509;
  { T1509 = T1508 | T1461;}
  val_t T1510;
  { T1510 = T1509 | T1480;}
  val_t T1511;
  { T1511 = T1510 | T1478;}
  val_t T1512;
  { T1512 = T1511 | Core_control__dec_du.values[0];}
  val_t T1513;
  { T1513 = T1512 | Core_control__dec_ie.values[0];}
  val_t T1514;
  { T1514 = T1513 | T1474;}
  val_t T1515;
  { T1515 = T1514 | T1472;}
  val_t T1516;
  { T1516 = T1515 | T1470;}
  { Core_control__dec_legal.values[0] = T1516 | T1468;}
  val_t T1517;
  { T1517 = Core_control__dec_legal.values[0] ^ 0x1L;}
  { Core_control__dec_cause.values[0] = TERNARY(T1517, 0x2L, T1466);}
  val_t T1518;
  { T1518 = Core_control__dec_reg_cause.values[0] | 0x0L << 1;}
  { T1519.values[0] = TERNARY_1(Core_control__dec_reg_exc.values[0], T1518, Core_control__dec_cause.values[0]);}
  val_t T1520;
  T1520 = (Core_control__io_dec_inst.values[0] >> 25) & 1;
  { T1521.values[0] = Core_control__dec_ie.values[0] & T1520;}
  val_t T1522;
  T1522 = (Core_control__io_dec_inst.values[0] >> 25) & 1;
  val_t T1523;
  { T1523 = T1522 ^ 0x1L;}
  { T1524.values[0] = Core_control__dec_ie.values[0] & T1523;}
  { T1525.values[0] = 0x0L;}
  val_t T1526;
  { T1526 = Core_control__io_dec_inst.values[0] & 0x707fL;}
  val_t T1527;
  T1527 = T1526 == 0x67L;
  val_t T1528;
  { T1528 = Core_control__io_dec_inst.values[0] & 0x506fL;}
  val_t T1529;
  T1529 = T1528 == 0x3L;
  val_t T1530;
  { T1530 = T1529 | T219;}
  val_t T1531;
  { T1531 = T1530 | T1494;}
  val_t T1532;
  { T1532 = T1531 | T1492;}
  val_t T1533;
  { T1533 = T1532 | T1490;}
  val_t T1534;
  { T1534 = T1533 | T1527;}
  val_t T1535;
  { T1535 = T1534 | T1486;}
  val_t T1536;
  { T1536 = T1535 | T1484;}
  val_t T1537;
  { T1537 = T1536 | T1463;}
  val_t T1538;
  { T1538 = T1537 | T1482;}
  val_t T1539;
  { T1539 = T1538 | T1461;}
  val_t T1540;
  { T1540 = T1539 | T1480;}
  val_t T1541;
  { T1541 = T1540 | T1478;}
  { Core_control__dec_rd_en.values[0] = T1541 | T1468;}
  val_t T1542;
  { T1542 = Core_control__io_dec_inst.values[0] >> 7;}
  T1542 = T1542 & 0x1fL;
  val_t T1543;
  T1543 = T1542 != 0x0L;
  { Core_control__dec_rd_write.values[0] = T1543 & Core_control__dec_rd_en.values[0];}
  { T1544.values[0] = Core_control__dec_rd_write.values[0] & Core_control__dec_reg_valid.values[0];}
  { T1545.values[0] = Core_control__exe_reg_rd_write.values[0] & Core_control__exe_reg_valid.values[0];}
  { T1546.values[0] = TERNARY(Core_control__reset.values[0], 0x0L, Core_control__exe_valid.values[0]);}
  val_t T1547;
  { T1547 = TERNARY(T1388, 0x1L, T1445);}
  { Core_control_scheduler__io_valid.values[0] = T1547;}
  { T1548.values[0] = TERNARY(Core_control__reset.values[0], 0x0L, Core_control_scheduler__io_valid.values[0]);}
  { T1549.values[0] = TERNARY(Core_control__reset.values[0], 0x0L, Core_control__next_valid.values[0]);}
  val_t T1550;
  { T1550 = Core_control__stall_count_3.values[0]-0x1L;}
  T1550 = T1550 & 0x3L;
  val_t T1551;
  T1551 = Core_control__stall_count_3.values[0] != 0x0L;
  val_t T1552;
  { T1552 = TERNARY(T1551, T1550, 0x0L);}
  val_t T1553;
  T1553 = 0x1L << Core_control__io_exe_tid.values[0];
  T1553 = T1553 & 0xfL;
  val_t T1554;
  T1554 = (T1553 >> 3) & 1;
  val_t T1555;
  { T1555 = Core_control__exe_sleep.values[0] & T1554;}
  val_t T1556;
  { T1556 = TERNARY(T1555, 0x2L, T1552);}
  val_t T1557;
  { T1557 = T224 & T1554;}
  val_t T1558;
  { T1558 = TERNARY(T1557, 0x1L, T1556);}
  val_t T1559;
  { T1559 = T599 & T1554;}
  val_t T1560;
  { T1560 = TERNARY(T1559, 0x1L, T1558);}
  { T1561.values[0] = TERNARY(Core_control__reset.values[0], 0x0L, T1560);}
  val_t T1562;
  { T1562 = Core_control__stall_count_2.values[0]-0x1L;}
  T1562 = T1562 & 0x3L;
  val_t T1563;
  T1563 = Core_control__stall_count_2.values[0] != 0x0L;
  val_t T1564;
  { T1564 = TERNARY(T1563, T1562, 0x0L);}
  val_t T1565;
  T1565 = (T1553 >> 2) & 1;
  val_t T1566;
  { T1566 = Core_control__exe_sleep.values[0] & T1565;}
  val_t T1567;
  { T1567 = TERNARY(T1566, 0x2L, T1564);}
  val_t T1568;
  { T1568 = T224 & T1565;}
  val_t T1569;
  { T1569 = TERNARY(T1568, 0x1L, T1567);}
  val_t T1570;
  { T1570 = T599 & T1565;}
  val_t T1571;
  { T1571 = TERNARY(T1570, 0x1L, T1569);}
  { T1572.values[0] = TERNARY(Core_control__reset.values[0], 0x0L, T1571);}
  val_t T1573;
  { T1573 = Core_control__stall_count_1.values[0]-0x1L;}
  T1573 = T1573 & 0x3L;
  val_t T1574;
  T1574 = Core_control__stall_count_1.values[0] != 0x0L;
  val_t T1575;
  { T1575 = TERNARY(T1574, T1573, 0x0L);}
  val_t T1576;
  T1576 = (T1553 >> 1) & 1;
  val_t T1577;
  { T1577 = Core_control__exe_sleep.values[0] & T1576;}
  val_t T1578;
  { T1578 = TERNARY(T1577, 0x2L, T1575);}
  val_t T1579;
  { T1579 = T224 & T1576;}
  val_t T1580;
  { T1580 = TERNARY(T1579, 0x1L, T1578);}
  val_t T1581;
  { T1581 = T599 & T1576;}
  val_t T1582;
  { T1582 = TERNARY(T1581, 0x1L, T1580);}
  { T1583.values[0] = TERNARY(Core_control__reset.values[0], 0x0L, T1582);}
  val_t T1584;
  { T1584 = Core_control__stall_count_0.values[0]-0x1L;}
  T1584 = T1584 & 0x3L;
  val_t T1585;
  T1585 = Core_control__stall_count_0.values[0] != 0x0L;
  val_t T1586;
  { T1586 = TERNARY(T1585, T1584, 0x0L);}
  val_t T1587;
  T1587 = (T1553 >> 0) & 1;
  val_t T1588;
  { T1588 = Core_control__exe_sleep.values[0] & T1587;}
  val_t T1589;
  { T1589 = TERNARY(T1588, 0x2L, T1586);}
  val_t T1590;
  { T1590 = T224 & T1587;}
  val_t T1591;
  { T1591 = TERNARY(T1590, 0x1L, T1589);}
  val_t T1592;
  { T1592 = T599 & T1587;}
  val_t T1593;
  { T1593 = TERNARY(T1592, 0x1L, T1591);}
  { T1594.values[0] = TERNARY(Core_control__reset.values[0], 0x0L, T1593);}
  val_t T1595;
  T1595 = Core_control__io_if_tid.values[0] == Core_control__io_exe_tid.values[0];
  val_t T1596;
  { T1596 = TERNARY(Core_control__exe_brjmp.values[0], 0x1L, Core_control__exe_exception.values[0]);}
  val_t T1597;
  { T1597 = TERNARY(Core_control__exe_sleep.values[0], 0x1L, T1596);}
  { Core_control__exe_flush.values[0] = T1597;}
  val_t T1598;
  { T1598 = Core_control__exe_flush.values[0] & T1595;}
  val_t T1599;
  { T1599 = T1598 ^ 0x1L;}
  { Core_control__if_valid.values[0] = Core_control__if_pre_valid.values[0] & T1599;}
  { T1600.values[0] = TERNARY(Core_control__reset.values[0], 0x0L, Core_control__if_valid.values[0]);}
  { T1601.values[0] = Core_control__dec_du.values[0];}
  { Core_control__dec_jump.values[0] = T1527 | T1486;}
  { T1602.values[0] = Core_control__dec_jump.values[0];}
  val_t T1603;
  { T1603 = Core_control__io_dec_inst.values[0] & 0x207fL;}
  val_t T1604;
  T1604 = T1603 == 0x63L;
  { Core_control__dec_branch.values[0] = T1604 | T1470;}
  { T1605.values[0] = Core_control__dec_branch.values[0];}
  val_t T1606;
  T1606 = Core_control__io_dec_tid.values[0] == Core_control__io_exe_tid.values[0];
  val_t T1607;
  { T1607 = Core_control__exe_flush.values[0] & T1606;}
  val_t T1608;
  { T1608 = T1607 ^ 0x1L;}
  { Core_control__dec_valid.values[0] = Core_control__dec_reg_valid.values[0] & T1608;}
  { T1609.values[0] = TERNARY(Core_control__reset.values[0], 0x0L, Core_control__dec_valid.values[0]);}
  val_t T1610;
  { T1610 = Core_datapath__if_reg_pc.values[0];}
  T1610 = T1610 & 0x3L;
  val_t T1611;
  T1611 = T1610 != 0x0L;
  { Core_datapath__io_control_if_exc_misaligned.values[0] = T1611;}
  { Core_control__io_if_exc_misaligned.values[0] = Core_datapath__io_control_if_exc_misaligned.values[0];}
  { Core_control__dec_exc.values[0] = T1517 | Core_control__dec_scall.values[0];}
  { T1612.values[0] = Core_control__dec_reg_exc.values[0] | Core_control__dec_exc.values[0];}
  { val_t __r = this->__rand_val(); Core_imem__io_bus_data_out.values[0] = __r;}
  Core_imem__io_bus_data_out.values[0] = Core_imem__io_bus_data_out.values[0] & 0xffffffffL;
  { Core__io_imem_data_out.values[0] = Core_imem__io_bus_data_out.values[0];}
  { val_t __r = this->__rand_val(); Core_imem__io_bus_ready.values[0] = __r;}
  Core_imem__io_bus_ready.values[0] = Core_imem__io_bus_ready.values[0] & 0x1L;
  { Core__io_imem_ready.values[0] = Core_imem__io_bus_ready.values[0];}
  { val_t __r = this->__rand_val(); Core_dmem__io_bus_data_out.values[0] = __r;}
  Core_dmem__io_bus_data_out.values[0] = Core_dmem__io_bus_data_out.values[0] & 0xffffffffL;
  { Core__io_dmem_data_out.values[0] = Core_dmem__io_bus_data_out.values[0];}
  val_t T1613;
  { T1613 = Core_datapath_loadstore__io_addr.values[0];}
  T1613 = T1613 & 0xffL;
  val_t T1614;
  { T1614 = T1613 | Core_datapath_loadstore__io_thread.values[0] << 8;}
  { Core_datapath_loadstore__io_bus_addr.values[0] = T1614;}
  { Core_datapath__io_bus_addr.values[0] = Core_datapath_loadstore__io_bus_addr.values[0];}
  { Core__io_bus_addr.values[0] = Core_datapath__io_bus_addr.values[0];}
  val_t T1615;
  { T1615 = Core_datapath_loadstore__io_load.values[0] | Core_datapath_loadstore__io_store.values[0];}
  val_t T1616;
  { T1616 = Core_datapath_loadstore__bus_op.values[0] & T1615;}
  { Core_datapath_loadstore__io_bus_enable.values[0] = T1616;}
  { Core_datapath__io_bus_enable.values[0] = Core_datapath_loadstore__io_bus_enable.values[0];}
  { Core__io_bus_enable.values[0] = Core_datapath__io_bus_enable.values[0];}
  val_t T1617;
  { T1617 = Core_datapath_loadstore__bus_op.values[0] & Core_datapath_loadstore__write.values[0];}
  { Core_datapath_loadstore__io_bus_write.values[0] = T1617;}
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
  { if (Core_dmem__io_core_enable.values[0]) Core_dmem__dspm.put(Core_dmem__io_core_addr.values[0], 0, T201.values[0]);}
  dat_t<32> Core_dmem__dout__shadow = T204;
  dat_t<32> Core_imem__dout_r__shadow = T367;
  { if (T371.values[0]) Core_imem__ispm.put(Core_imem__io_core_rw_addr.values[0], 0, Core_imem__io_core_rw_data_in.values[0]);}
  dat_t<32> Core_imem__R0__shadow = T375;
  dat_t<1> Core_datapath_csr__reg_msip_1__shadow = T567;
  dat_t<1> Core_datapath_csr__reg_mtie_3__shadow = T575;
  dat_t<2> Core_datapath_csr__reg_prv1_3__shadow = T576;
  dat_t<1> Core_datapath_csr__reg_ie1_3__shadow = T577;
  dat_t<2> Core_datapath_csr__reg_prv_3__shadow = T578;
  dat_t<1> Core_datapath_csr__reg_ie_3__shadow = T601;
  dat_t<1> Core_datapath_csr__reg_msip_3__shadow = T613;
  dat_t<1> Core_datapath_csr__reg_mtie_2__shadow = T619;
  dat_t<2> Core_datapath_csr__reg_prv1_2__shadow = T620;
  dat_t<1> Core_datapath_csr__reg_ie1_2__shadow = T621;
  dat_t<2> Core_datapath_csr__reg_prv_2__shadow = T622;
  dat_t<1> Core_datapath_csr__reg_ie_2__shadow = T627;
  dat_t<1> Core_datapath_csr__reg_msip_2__shadow = T639;
  dat_t<1> Core_datapath_csr__reg_mtie_1__shadow = T645;
  dat_t<2> Core_datapath_csr__reg_prv1_1__shadow = T646;
  dat_t<1> Core_datapath_csr__reg_ie1_1__shadow = T647;
  dat_t<2> Core_datapath_csr__reg_prv_1__shadow = T648;
  dat_t<1> Core_datapath_csr__reg_ie_1__shadow = T653;
  dat_t<1> Core_datapath_csr__reg_mtie_0__shadow = T659;
  dat_t<2> Core_datapath_csr__reg_prv1_0__shadow = T660;
  dat_t<1> Core_datapath_csr__reg_ie1_0__shadow = T661;
  dat_t<2> Core_datapath_csr__reg_prv_0__shadow = T662;
  dat_t<1> Core_datapath_csr__reg_ie_0__shadow = T667;
  dat_t<4> Core_datapath_csr__reg_dmem_protection_7__shadow = T672;
  dat_t<4> Core_datapath_csr__reg_dmem_protection_6__shadow = T675;
  dat_t<4> Core_datapath_csr__reg_dmem_protection_5__shadow = T678;
  dat_t<4> Core_datapath_csr__reg_dmem_protection_4__shadow = T681;
  dat_t<4> Core_datapath_csr__reg_dmem_protection_3__shadow = T684;
  dat_t<4> Core_datapath_csr__reg_dmem_protection_2__shadow = T687;
  dat_t<4> Core_datapath_csr__reg_dmem_protection_1__shadow = T690;
  dat_t<4> Core_datapath_csr__reg_dmem_protection_0__shadow = T693;
  dat_t<4> Core_datapath_csr__reg_imem_protection_7__shadow = T698;
  dat_t<4> Core_datapath_csr__reg_imem_protection_6__shadow = T701;
  dat_t<4> Core_datapath_csr__reg_imem_protection_5__shadow = T704;
  dat_t<4> Core_datapath_csr__reg_imem_protection_4__shadow = T707;
  dat_t<4> Core_datapath_csr__reg_imem_protection_3__shadow = T710;
  dat_t<4> Core_datapath_csr__reg_imem_protection_2__shadow = T713;
  dat_t<4> Core_datapath_csr__reg_imem_protection_1__shadow = T716;
  dat_t<4> Core_datapath_csr__reg_imem_protection_0__shadow = T719;
  dat_t<4> Core_datapath_csr__reg_gpo_protection_3__shadow = T724;
  dat_t<2> Core_datapath_csr__reg_gpos_3__shadow = T736;
  dat_t<4> Core_datapath_csr__reg_gpo_protection_2__shadow = T739;
  dat_t<2> Core_datapath_csr__reg_gpos_2__shadow = T751;
  dat_t<4> Core_datapath_csr__reg_gpo_protection_1__shadow = T754;
  dat_t<2> Core_datapath_csr__reg_gpos_1__shadow = T766;
  dat_t<4> Core_datapath_csr__reg_gpo_protection_0__shadow = T769;
  dat_t<2> Core_datapath_csr__reg_gpos_0__shadow = T781;
  dat_t<1> Core_datapath_csr__reg_gpis_3__shadow = Core_datapath_csr__io_gpio_in_3;
  dat_t<1> Core_datapath_csr__reg_gpis_2__shadow = Core_datapath_csr__io_gpio_in_2;
  dat_t<1> Core_datapath_csr__reg_gpis_1__shadow = Core_datapath_csr__io_gpio_in_1;
  dat_t<1> Core_datapath_csr__reg_gpis_0__shadow = Core_datapath_csr__io_gpio_in_0;
  dat_t<32> Core_datapath_csr__reg_to_host__shadow = T787;
  dat_t<36> Core_datapath_csr__reg_sup0_3__shadow = T793;
  dat_t<36> Core_datapath_csr__reg_sup0_2__shadow = T796;
  dat_t<36> Core_datapath_csr__reg_sup0_1__shadow = T799;
  dat_t<36> Core_datapath_csr__reg_sup0_0__shadow = T802;
  dat_t<5> Core_datapath_csr__reg_causes_3__shadow = T814;
  dat_t<5> Core_datapath_csr__reg_causes_2__shadow = T817;
  dat_t<5> Core_datapath_csr__reg_causes_1__shadow = T820;
  dat_t<5> Core_datapath_csr__reg_causes_0__shadow = T823;
  dat_t<32> Core_datapath_csr__reg_epcs_3__shadow = T827;
  dat_t<32> Core_datapath_csr__reg_epcs_2__shadow = T830;
  dat_t<32> Core_datapath_csr__reg_epcs_1__shadow = T833;
  dat_t<32> Core_datapath_csr__reg_epcs_0__shadow = T836;
  dat_t<36> Core_datapath_csr__reg_evecs_3__shadow = T842;
  dat_t<36> Core_datapath_csr__reg_evecs_2__shadow = T845;
  dat_t<36> Core_datapath_csr__reg_evecs_1__shadow = T848;
  dat_t<36> Core_datapath_csr__reg_evecs_0__shadow = T851;
  dat_t<2> Core_datapath_csr__reg_tmodes_1__shadow = T873;
  dat_t<2> Core_datapath_csr__reg_tmodes_3__shadow = T884;
  dat_t<2> Core_datapath_csr__reg_timer_3__shadow = T904;
  dat_t<2> Core_datapath_csr__reg_timer_1__shadow = T919;
  dat_t<2> Core_datapath_csr__reg_timer_0__shadow = T936;
  dat_t<32> Core_datapath_csr__reg_compare_3__shadow = T941;
  dat_t<32> Core_datapath_csr__reg_compare_1__shadow = T944;
  dat_t<32> Core_datapath_csr__reg_compare_0__shadow = T947;
  dat_t<2> Core_datapath_csr__reg_timer_2__shadow = T964;
  dat_t<64> Core_datapath_csr__reg_time__shadow = T966;
  dat_t<32> Core_datapath_csr__reg_compare_2__shadow = T969;
  dat_t<2> Core_datapath_csr__reg_tmodes_2__shadow = T978;
  dat_t<2> Core_datapath_csr__reg_tmodes_0__shadow = T987;
  dat_t<4> Core_datapath_csr__reg_slots_7__shadow = T992;
  dat_t<4> Core_datapath_csr__reg_slots_6__shadow = T995;
  dat_t<4> Core_datapath_csr__reg_slots_5__shadow = T998;
  dat_t<4> Core_datapath_csr__reg_slots_4__shadow = T1001;
  dat_t<4> Core_datapath_csr__reg_slots_3__shadow = T1004;
  dat_t<4> Core_datapath_csr__reg_slots_2__shadow = T1007;
  dat_t<4> Core_datapath_csr__reg_slots_1__shadow = T1010;
  dat_t<4> Core_datapath_csr__reg_slots_0__shadow = T1013;
  dat_t<1> Core_datapath_csr__reg_msip_0__shadow = T1025;
  dat_t<1> Core_datapath_loadstore__dmem_op_reg__shadow = Core_datapath_loadstore__dmem_op;
  dat_t<4> Core_datapath_loadstore__mem_type_reg__shadow = Core_datapath_loadstore__io_mem_type;
  dat_t<2> Core_datapath_loadstore__addr_byte_reg__shadow = T1026;
  dat_t<1> Core_datapath_loadstore__imem_op_reg__shadow = Core_datapath_loadstore__imem_op;
  dat_t<32> Core_datapath_regfile__dout1__shadow = T1031;
  { if (Core_datapath_regfile__io_rd_enable.values[0]) Core_datapath_regfile__regfile.put(T1062.values[0], 0, Core_datapath_regfile__io_rd_data.values[0]);}
  dat_t<32> Core_datapath_regfile__dout2__shadow = T1067;
  dat_t<32> Core_datapath__exe_reg_rs1_data__shadow = Core_datapath__dec_rs1_data;
  dat_t<2> Core_datapath__wb_reg_tid__shadow = Core_datapath__mem_reg_tid;
  dat_t<5> Core_datapath__wb_reg_rd_addr__shadow = Core_datapath__mem_reg_rd_addr;
  dat_t<5> Core_datapath__exe_reg_rd_addr__shadow = T1095;
  dat_t<5> Core_datapath__mem_reg_rd_addr__shadow = Core_datapath__exe_reg_rd_addr;
  dat_t<32> Core_datapath__exe_reg_rs2_data__shadow = Core_datapath__dec_rs2_data;
  dat_t<12> Core_datapath__exe_reg_csr_addr__shadow = T1112;
  dat_t<32> Core_datapath__exe_csr_data__shadow = Core_datapath__dec_csr_data;
  dat_t<32> Core_datapath__if_reg_pcs_3__shadow = T1186;
  dat_t<32> Core_datapath__if_reg_pcs_2__shadow = T1187;
  dat_t<32> Core_datapath__if_reg_pcs_1__shadow = T1188;
  dat_t<2> Core_datapath__mem_reg_tid__shadow = Core_datapath__exe_reg_tid;
  dat_t<2> Core_datapath__exe_reg_tid__shadow = Core_datapath__dec_reg_tid;
  dat_t<32> Core_datapath__exe_reg_op1__shadow = Core_datapath__dec_op1;
  dat_t<32> Core_datapath__dec_reg_pc4__shadow = Core_datapath__if_pc_plus4;
  dat_t<32> Core_datapath__exe_reg_pc4__shadow = Core_datapath__dec_reg_pc4;
  dat_t<32> Core_datapath__mem_reg_rd_data__shadow = Core_datapath__exe_rd_data;
  dat_t<32> Core_datapath__wb_reg_rd_data__shadow = Core_datapath__mem_rd_data;
  dat_t<32> Core_datapath__dec_reg_inst__shadow = Core_datapath__io_imem_r_data_out;
  dat_t<32> Core_datapath__exe_reg_op2__shadow = Core_datapath__dec_op2;
  dat_t<32> Core_datapath__if_reg_pcs_0__shadow = T1206;
  dat_t<32> Core_datapath__if_reg_pc__shadow = Core_datapath__next_pc;
  dat_t<32> Core_datapath__dec_reg_pc__shadow = Core_datapath__if_reg_pc;
  dat_t<32> Core_datapath__exe_reg_pc__shadow = Core_datapath__dec_reg_pc;
  dat_t<2> Core_datapath__if_reg_tid__shadow = Core_datapath__io_control_next_tid;
  dat_t<2> Core_datapath__dec_reg_tid__shadow = Core_datapath__if_reg_tid;
  dat_t<1> Core_control_scheduler__R191__shadow = T1390;
  dat_t<1> Core_control_scheduler__R185__shadow = T1392;
  dat_t<1> Core_control_scheduler__R180__shadow = T1394;
  dat_t<1> Core_control_scheduler__R111__shadow = T1396;
  dat_t<1> Core_control_scheduler__R86__shadow = T1398;
  dat_t<1> Core_control_scheduler__R71__shadow = T1400;
  dat_t<1> Core_control_scheduler__R65__shadow = T1402;
  dat_t<1> Core_control_scheduler__R60__shadow = T1404;
  dat_t<1> Core_control_scheduler__R48__shadow = T1406;
  dat_t<1> Core_control_scheduler__R34__shadow = T1408;
  dat_t<4> Core_control__exe_reg_alu_type__shadow = Core_control__dec_alu_type;
  dat_t<3> Core_control__exe_reg_br_type__shadow = Core_control__dec_br_type;
  dat_t<2> Core_control__exe_reg_csr_type__shadow = Core_control__dec_csr_type;
  dat_t<2> Core_control__exe_reg_mul_type__shadow = 0x0;
  dat_t<2> Core_control__exe_reg_rd_data_sel__shadow = Core_control__dec_exe_rd_data_sel;
  dat_t<4> Core_control__exe_reg_mem_type__shadow = Core_control__dec_mem_type;
  dat_t<2> Core_control__R269__shadow = Core_control__dec_mem_rd_data_sel;
  dat_t<2> Core_control__mem_reg_rd_data_sel__shadow = Core_control__R269;
  dat_t<1> Core_control__mem_reg_exception__shadow = Core_control__exe_exception;
  dat_t<2> Core_control__R225__shadow = Core_control_scheduler__io_thread;
  dat_t<1> Core_control__wb_reg_rd_write__shadow = Core_control__mem_rd_write;
  dat_t<1> Core_control__exe_reg_load__shadow = T1454;
  dat_t<1> Core_control__exe_reg_store__shadow = T1459;
  dat_t<1> Core_control__exe_reg_csr_write__shadow = T1464;
  dat_t<1> Core_control__dec_reg_cause__shadow = 0x0;
  dat_t<3> Core_control__exe_reg_cause__shadow = T1519;
  dat_t<1> Core_control__R179__shadow = T1521;
  dat_t<1> Core_control__R172__shadow = T1524;
  dat_t<1> Core_control__exe_reg_sret__shadow = T1525;
  dat_t<1> Core_control__exe_reg_rd_write__shadow = T1544;
  dat_t<1> Core_control__mem_reg_rd_write__shadow = T1545;
  dat_t<1> Core_control__mem_reg_valid__shadow = T1546;
  dat_t<1> Core_control__R148__shadow = T1548;
  dat_t<1> Core_control__if_reg_valid__shadow = T1549;
  dat_t<2> Core_control__stall_count_3__shadow = T1561;
  dat_t<2> Core_control__stall_count_2__shadow = T1572;
  dat_t<2> Core_control__stall_count_1__shadow = T1583;
  dat_t<2> Core_control__stall_count_0__shadow = T1594;
  dat_t<1> Core_control__dec_reg_valid__shadow = T1600;
  dat_t<1> Core_control__R81__shadow = T1601;
  dat_t<1> Core_control__exe_reg_jump__shadow = T1602;
  dat_t<1> Core_control__exe_reg_branch__shadow = T1605;
  dat_t<1> Core_control__exe_reg_valid__shadow = T1609;
  dat_t<1> Core_control__dec_reg_exc__shadow = Core_control__io_if_exc_misaligned;
  dat_t<1> Core_control__exe_reg_exc__shadow = T1612;
  Core_dmem__dout = T204;
  Core_imem__dout_r = T367;
  Core_imem__R0 = T375;
  Core_datapath_csr__reg_msip_1 = T567;
  Core_datapath_csr__reg_mtie_3 = T575;
  Core_datapath_csr__reg_prv1_3 = T576;
  Core_datapath_csr__reg_ie1_3 = T577;
  Core_datapath_csr__reg_prv_3 = T578;
  Core_datapath_csr__reg_ie_3 = T601;
  Core_datapath_csr__reg_msip_3 = T613;
  Core_datapath_csr__reg_mtie_2 = T619;
  Core_datapath_csr__reg_prv1_2 = T620;
  Core_datapath_csr__reg_ie1_2 = T621;
  Core_datapath_csr__reg_prv_2 = T622;
  Core_datapath_csr__reg_ie_2 = T627;
  Core_datapath_csr__reg_msip_2 = T639;
  Core_datapath_csr__reg_mtie_1 = T645;
  Core_datapath_csr__reg_prv1_1 = T646;
  Core_datapath_csr__reg_ie1_1 = T647;
  Core_datapath_csr__reg_prv_1 = T648;
  Core_datapath_csr__reg_ie_1 = T653;
  Core_datapath_csr__reg_mtie_0 = T659;
  Core_datapath_csr__reg_prv1_0 = T660;
  Core_datapath_csr__reg_ie1_0 = T661;
  Core_datapath_csr__reg_prv_0 = T662;
  Core_datapath_csr__reg_ie_0 = T667;
  Core_datapath_csr__reg_dmem_protection_7 = T672;
  Core_datapath_csr__reg_dmem_protection_6 = T675;
  Core_datapath_csr__reg_dmem_protection_5 = T678;
  Core_datapath_csr__reg_dmem_protection_4 = T681;
  Core_datapath_csr__reg_dmem_protection_3 = T684;
  Core_datapath_csr__reg_dmem_protection_2 = T687;
  Core_datapath_csr__reg_dmem_protection_1 = T690;
  Core_datapath_csr__reg_dmem_protection_0 = T693;
  Core_datapath_csr__reg_imem_protection_7 = T698;
  Core_datapath_csr__reg_imem_protection_6 = T701;
  Core_datapath_csr__reg_imem_protection_5 = T704;
  Core_datapath_csr__reg_imem_protection_4 = T707;
  Core_datapath_csr__reg_imem_protection_3 = T710;
  Core_datapath_csr__reg_imem_protection_2 = T713;
  Core_datapath_csr__reg_imem_protection_1 = T716;
  Core_datapath_csr__reg_imem_protection_0 = T719;
  Core_datapath_csr__reg_gpo_protection_3 = T724;
  Core_datapath_csr__reg_gpos_3 = T736;
  Core_datapath_csr__reg_gpo_protection_2 = T739;
  Core_datapath_csr__reg_gpos_2 = T751;
  Core_datapath_csr__reg_gpo_protection_1 = T754;
  Core_datapath_csr__reg_gpos_1 = T766;
  Core_datapath_csr__reg_gpo_protection_0 = T769;
  Core_datapath_csr__reg_gpos_0 = T781;
  Core_datapath_csr__reg_gpis_3 = Core_datapath_csr__io_gpio_in_3;
  Core_datapath_csr__reg_gpis_2 = Core_datapath_csr__io_gpio_in_2;
  Core_datapath_csr__reg_gpis_1 = Core_datapath_csr__io_gpio_in_1;
  Core_datapath_csr__reg_gpis_0 = Core_datapath_csr__io_gpio_in_0;
  Core_datapath_csr__reg_to_host = T787;
  Core_datapath_csr__reg_sup0_3 = T793;
  Core_datapath_csr__reg_sup0_2 = T796;
  Core_datapath_csr__reg_sup0_1 = T799;
  Core_datapath_csr__reg_sup0_0 = T802;
  Core_datapath_csr__reg_causes_3 = T814;
  Core_datapath_csr__reg_causes_2 = T817;
  Core_datapath_csr__reg_causes_1 = T820;
  Core_datapath_csr__reg_causes_0 = T823;
  Core_datapath_csr__reg_epcs_3 = T827;
  Core_datapath_csr__reg_epcs_2 = T830;
  Core_datapath_csr__reg_epcs_1 = T833;
  Core_datapath_csr__reg_epcs_0 = T836;
  Core_datapath_csr__reg_evecs_3 = T842;
  Core_datapath_csr__reg_evecs_2 = T845;
  Core_datapath_csr__reg_evecs_1 = T848;
  Core_datapath_csr__reg_evecs_0 = T851;
  Core_datapath_csr__reg_tmodes_1 = T873;
  Core_datapath_csr__reg_tmodes_3 = T884;
  Core_datapath_csr__reg_timer_3 = T904;
  Core_datapath_csr__reg_timer_1 = T919;
  Core_datapath_csr__reg_timer_0 = T936;
  Core_datapath_csr__reg_compare_3 = T941;
  Core_datapath_csr__reg_compare_1 = T944;
  Core_datapath_csr__reg_compare_0 = T947;
  Core_datapath_csr__reg_timer_2 = T964;
  Core_datapath_csr__reg_time = T966;
  Core_datapath_csr__reg_compare_2 = T969;
  Core_datapath_csr__reg_tmodes_2 = T978;
  Core_datapath_csr__reg_tmodes_0 = T987;
  Core_datapath_csr__reg_slots_7 = T992;
  Core_datapath_csr__reg_slots_6 = T995;
  Core_datapath_csr__reg_slots_5 = T998;
  Core_datapath_csr__reg_slots_4 = T1001;
  Core_datapath_csr__reg_slots_3 = T1004;
  Core_datapath_csr__reg_slots_2 = T1007;
  Core_datapath_csr__reg_slots_1 = T1010;
  Core_datapath_csr__reg_slots_0 = T1013;
  Core_datapath_csr__reg_msip_0 = T1025;
  Core_datapath_loadstore__dmem_op_reg = Core_datapath_loadstore__dmem_op;
  Core_datapath_loadstore__mem_type_reg = Core_datapath_loadstore__io_mem_type;
  Core_datapath_loadstore__addr_byte_reg = T1026;
  Core_datapath_loadstore__imem_op_reg = Core_datapath_loadstore__imem_op;
  Core_datapath_regfile__dout1 = T1031;
  Core_datapath_regfile__dout2 = T1067;
  Core_datapath__exe_reg_rs1_data = Core_datapath__dec_rs1_data;
  Core_datapath__wb_reg_tid = Core_datapath__wb_reg_tid__shadow;
  Core_datapath__wb_reg_rd_addr = Core_datapath__wb_reg_rd_addr__shadow;
  Core_datapath__exe_reg_rd_addr = T1095;
  Core_datapath__mem_reg_rd_addr = Core_datapath__mem_reg_rd_addr__shadow;
  Core_datapath__exe_reg_rs2_data = Core_datapath__dec_rs2_data;
  Core_datapath__exe_reg_csr_addr = T1112;
  Core_datapath__exe_csr_data = Core_datapath__dec_csr_data;
  Core_datapath__if_reg_pcs_3 = T1186;
  Core_datapath__if_reg_pcs_2 = T1187;
  Core_datapath__if_reg_pcs_1 = T1188;
  Core_datapath__mem_reg_tid = Core_datapath__mem_reg_tid__shadow;
  Core_datapath__exe_reg_tid = Core_datapath__exe_reg_tid__shadow;
  Core_datapath__exe_reg_op1 = Core_datapath__dec_op1;
  Core_datapath__dec_reg_pc4 = Core_datapath__if_pc_plus4;
  Core_datapath__exe_reg_pc4 = Core_datapath__exe_reg_pc4__shadow;
  Core_datapath__mem_reg_rd_data = Core_datapath__exe_rd_data;
  Core_datapath__wb_reg_rd_data = Core_datapath__mem_rd_data;
  Core_datapath__dec_reg_inst = Core_datapath__io_imem_r_data_out;
  Core_datapath__exe_reg_op2 = Core_datapath__dec_op2;
  Core_datapath__if_reg_pcs_0 = T1206;
  Core_datapath__if_reg_pc = Core_datapath__next_pc;
  Core_datapath__dec_reg_pc = Core_datapath__dec_reg_pc__shadow;
  Core_datapath__exe_reg_pc = Core_datapath__exe_reg_pc__shadow;
  Core_datapath__if_reg_tid = Core_datapath__io_control_next_tid;
  Core_datapath__dec_reg_tid = Core_datapath__dec_reg_tid__shadow;
  Core_control_scheduler__R191 = T1390;
  Core_control_scheduler__R185 = T1392;
  Core_control_scheduler__R180 = T1394;
  Core_control_scheduler__R111 = T1396;
  Core_control_scheduler__R86 = T1398;
  Core_control_scheduler__R71 = T1400;
  Core_control_scheduler__R65 = T1402;
  Core_control_scheduler__R60 = T1404;
  Core_control_scheduler__R48 = T1406;
  Core_control_scheduler__R34 = T1408;
  Core_control__exe_reg_alu_type = Core_control__dec_alu_type;
  Core_control__exe_reg_br_type = Core_control__dec_br_type;
  Core_control__exe_reg_csr_type = Core_control__dec_csr_type;
  Core_control__exe_reg_mul_type = 0x0;
  Core_control__exe_reg_rd_data_sel = Core_control__dec_exe_rd_data_sel;
  Core_control__exe_reg_mem_type = Core_control__dec_mem_type;
  Core_control__R269 = Core_control__dec_mem_rd_data_sel;
  Core_control__mem_reg_rd_data_sel = Core_control__mem_reg_rd_data_sel__shadow;
  Core_control__mem_reg_exception = Core_control__exe_exception;
  Core_control__R225 = Core_control_scheduler__io_thread;
  Core_control__wb_reg_rd_write = Core_control__mem_rd_write;
  Core_control__exe_reg_load = T1454;
  Core_control__exe_reg_store = T1459;
  Core_control__exe_reg_csr_write = T1464;
  Core_control__dec_reg_cause = 0x0;
  Core_control__exe_reg_cause = T1519;
  Core_control__R179 = T1521;
  Core_control__R172 = T1524;
  Core_control__exe_reg_sret = T1525;
  Core_control__exe_reg_rd_write = T1544;
  Core_control__mem_reg_rd_write = T1545;
  Core_control__mem_reg_valid = T1546;
  Core_control__R148 = T1548;
  Core_control__if_reg_valid = T1549;
  Core_control__stall_count_3 = T1561;
  Core_control__stall_count_2 = T1572;
  Core_control__stall_count_1 = T1583;
  Core_control__stall_count_0 = T1594;
  Core_control__dec_reg_valid = T1600;
  Core_control__R81 = T1601;
  Core_control__exe_reg_jump = T1602;
  Core_control__exe_reg_branch = T1605;
  Core_control__exe_reg_valid = T1609;
  Core_control__dec_reg_exc = Core_control__io_if_exc_misaligned;
  Core_control__exe_reg_exc = T1612;
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
  dat_table["Core.datapath.csr.io_rw_thread"] = new dat_api<2>(&mod_typed->Core_datapath_csr__io_rw_thread, "Core.datapath.csr.io_rw_thread", "");
  dat_table["Core.datapath.csr.int_ext"] = new dat_api<1>(&mod_typed->Core_datapath_csr__int_ext, "Core.datapath.csr.int_ext", "");
  dat_table["Core.datapath.csr.io_int_ext"] = new dat_api<1>(&mod_typed->Core_datapath_csr__io_int_ext, "Core.datapath.csr.io_int_ext", "");
  dat_table["Core.datapath.io_control_exe_int_ext"] = new dat_api<1>(&mod_typed->Core_datapath__io_control_exe_int_ext, "Core.datapath.io_control_exe_int_ext", "");
  dat_table["Core.control.io_exe_int_ext"] = new dat_api<1>(&mod_typed->Core_control__io_exe_int_ext, "Core.control.io_exe_int_ext", "");
  dat_table["Core.datapath.csr.expired_0"] = new dat_api<1>(&mod_typed->Core_datapath_csr__expired_0, "Core.datapath.csr.expired_0", "");
  dat_table["Core.datapath.csr.expired_1"] = new dat_api<1>(&mod_typed->Core_datapath_csr__expired_1, "Core.datapath.csr.expired_1", "");
  dat_table["Core.datapath.csr.expired_2"] = new dat_api<1>(&mod_typed->Core_datapath_csr__expired_2, "Core.datapath.csr.expired_2", "");
  dat_table["Core.datapath.csr.expired_3"] = new dat_api<1>(&mod_typed->Core_datapath_csr__expired_3, "Core.datapath.csr.expired_3", "");
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
  dat_table["Core.datapath.loadstore.io_thread"] = new dat_api<2>(&mod_typed->Core_datapath_loadstore__io_thread, "Core.datapath.loadstore.io_thread", "");
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
  dat_table["Core.datapath.io_control_if_tid"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_if_tid, "Core.datapath.io_control_if_tid", "");
  dat_table["Core.control.io_if_tid"] = new dat_api<2>(&mod_typed->Core_control__io_if_tid, "Core.control.io_if_tid", "");
  dat_table["Core.datapath.io_control_dec_tid"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_dec_tid, "Core.datapath.io_control_dec_tid", "");
  dat_table["Core.control.io_dec_tid"] = new dat_api<2>(&mod_typed->Core_control__io_dec_tid, "Core.control.io_dec_tid", "");
  dat_table["Core.datapath.io_control_dec_inst"] = new dat_api<32>(&mod_typed->Core_datapath__io_control_dec_inst, "Core.datapath.io_control_dec_inst", "");
  dat_table["Core.control.io_dec_inst"] = new dat_api<32>(&mod_typed->Core_control__io_dec_inst, "Core.control.io_dec_inst", "");
  dat_table["Core.control.dec_load"] = new dat_api<1>(&mod_typed->Core_control__dec_load, "Core.control.dec_load", "");
  dat_table["Core.control.dec_fence_i"] = new dat_api<1>(&mod_typed->Core_control__dec_fence_i, "Core.control.dec_fence_i", "");
  dat_table["Core.control.dec_stall"] = new dat_api<1>(&mod_typed->Core_control__dec_stall, "Core.control.dec_stall", "");
  dat_table["Core.control.if_pre_valid"] = new dat_api<1>(&mod_typed->Core_control__if_pre_valid, "Core.control.if_pre_valid", "");
  dat_table["Core.datapath.io_control_exe_tid"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_exe_tid, "Core.datapath.io_control_exe_tid", "");
  dat_table["Core.control.io_exe_tid"] = new dat_api<2>(&mod_typed->Core_control__io_exe_tid, "Core.control.io_exe_tid", "");
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
  dat_table["Core.datapath.io_control_mem_tid"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_mem_tid, "Core.datapath.io_control_mem_tid", "");
  dat_table["Core.control.io_mem_tid"] = new dat_api<2>(&mod_typed->Core_control__io_mem_tid, "Core.control.io_mem_tid", "");
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
  dat_table["Core.datapath.csr.io_evecs_0"] = new dat_api<32>(&mod_typed->Core_datapath_csr__io_evecs_0, "Core.datapath.csr.io_evecs_0", "");
  dat_table["Core.datapath.csr.io_evecs_1"] = new dat_api<32>(&mod_typed->Core_datapath_csr__io_evecs_1, "Core.datapath.csr.io_evecs_1", "");
  dat_table["Core.datapath.csr.io_evecs_2"] = new dat_api<32>(&mod_typed->Core_datapath_csr__io_evecs_2, "Core.datapath.csr.io_evecs_2", "");
  dat_table["Core.datapath.csr.io_evecs_3"] = new dat_api<32>(&mod_typed->Core_datapath_csr__io_evecs_3, "Core.datapath.csr.io_evecs_3", "");
  dat_table["Core.datapath.mem_evec"] = new dat_api<32>(&mod_typed->Core_datapath__mem_evec, "Core.datapath.mem_evec", "");
  dat_table["Core.datapath.next_pcs_0"] = new dat_api<32>(&mod_typed->Core_datapath__next_pcs_0, "Core.datapath.next_pcs_0", "");
  dat_table["Core.datapath.next_pcs_1"] = new dat_api<32>(&mod_typed->Core_datapath__next_pcs_1, "Core.datapath.next_pcs_1", "");
  dat_table["Core.control.next_tid"] = new dat_api<2>(&mod_typed->Core_control__next_tid, "Core.control.next_tid", "");
  dat_table["Core.control.io_next_tid"] = new dat_api<2>(&mod_typed->Core_control__io_next_tid, "Core.control.io_next_tid", "");
  dat_table["Core.datapath.io_control_next_tid"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_next_tid, "Core.datapath.io_control_next_tid", "");
  dat_table["Core.datapath.next_pcs_2"] = new dat_api<32>(&mod_typed->Core_datapath__next_pcs_2, "Core.datapath.next_pcs_2", "");
  dat_table["Core.datapath.next_pcs_3"] = new dat_api<32>(&mod_typed->Core_datapath__next_pcs_3, "Core.datapath.next_pcs_3", "");
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
  dat_table["Core.datapath.csr.reg_msip_1"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_msip_1, "Core.datapath.csr.reg_msip_1", "");
  dat_table["Core.datapath.csr.reg_mtie_3"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_mtie_3, "Core.datapath.csr.reg_mtie_3", "");
  dat_table["Core.datapath.csr.reg_prv1_3"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_prv1_3, "Core.datapath.csr.reg_prv1_3", "");
  dat_table["Core.datapath.csr.reg_ie1_3"] = new dat_api<1>(&mod_typed->Core_datapath_csr__reg_ie1_3, "Core.datapath.csr.reg_ie1_3", "");
  dat_table["Core.datapath.csr.reg_prv_3"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_prv_3, "Core.datapath.csr.reg_prv_3", "");
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
  dat_table["Core.datapath.csr.reg_causes_3"] = new dat_api<5>(&mod_typed->Core_datapath_csr__reg_causes_3, "Core.datapath.csr.reg_causes_3", "");
  dat_table["Core.datapath.csr.reg_causes_2"] = new dat_api<5>(&mod_typed->Core_datapath_csr__reg_causes_2, "Core.datapath.csr.reg_causes_2", "");
  dat_table["Core.datapath.csr.reg_causes_1"] = new dat_api<5>(&mod_typed->Core_datapath_csr__reg_causes_1, "Core.datapath.csr.reg_causes_1", "");
  dat_table["Core.datapath.csr.reg_causes_0"] = new dat_api<5>(&mod_typed->Core_datapath_csr__reg_causes_0, "Core.datapath.csr.reg_causes_0", "");
  dat_table["Core.datapath.csr.io_epc"] = new dat_api<32>(&mod_typed->Core_datapath_csr__io_epc, "Core.datapath.csr.io_epc", "");
  dat_table["Core.datapath.csr.reg_epcs_3"] = new dat_api<32>(&mod_typed->Core_datapath_csr__reg_epcs_3, "Core.datapath.csr.reg_epcs_3", "");
  dat_table["Core.datapath.csr.reg_epcs_2"] = new dat_api<32>(&mod_typed->Core_datapath_csr__reg_epcs_2, "Core.datapath.csr.reg_epcs_2", "");
  dat_table["Core.datapath.csr.reg_epcs_1"] = new dat_api<32>(&mod_typed->Core_datapath_csr__reg_epcs_1, "Core.datapath.csr.reg_epcs_1", "");
  dat_table["Core.datapath.csr.reg_epcs_0"] = new dat_api<32>(&mod_typed->Core_datapath_csr__reg_epcs_0, "Core.datapath.csr.reg_epcs_0", "");
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
  dat_table["Core.datapath.csr.reg_timer_3"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_timer_3, "Core.datapath.csr.reg_timer_3", "");
  dat_table["Core.datapath.csr.reg_timer_1"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_timer_1, "Core.datapath.csr.reg_timer_1", "");
  dat_table["Core.datapath.csr.reg_timer_0"] = new dat_api<2>(&mod_typed->Core_datapath_csr__reg_timer_0, "Core.datapath.csr.reg_timer_0", "");
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
  dat_table["Core.datapath.regfile.io_rs1_thread"] = new dat_api<2>(&mod_typed->Core_datapath_regfile__io_rs1_thread, "Core.datapath.regfile.io_rs1_thread", "");
  dat_table["Core.imem.io_core_r_data_out"] = new dat_api<32>(&mod_typed->Core_imem__io_core_r_data_out, "Core.imem.io_core_r_data_out", "");
  dat_table["Core.datapath.io_imem_r_data_out"] = new dat_api<32>(&mod_typed->Core_datapath__io_imem_r_data_out, "Core.datapath.io_imem_r_data_out", "");
  dat_table["Core.datapath.regfile.io_rs1_addr"] = new dat_api<5>(&mod_typed->Core_datapath_regfile__io_rs1_addr, "Core.datapath.regfile.io_rs1_addr", "");
  dat_table["Core.datapath.regfile.dout1"] = new dat_api<32>(&mod_typed->Core_datapath_regfile__dout1, "Core.datapath.regfile.dout1", "");
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
  dat_table["Core.datapath.regfile.io_rd_thread"] = new dat_api<2>(&mod_typed->Core_datapath_regfile__io_rd_thread, "Core.datapath.regfile.io_rd_thread", "");
  dat_table["Core.datapath.regfile.io_rd_addr"] = new dat_api<5>(&mod_typed->Core_datapath_regfile__io_rd_addr, "Core.datapath.regfile.io_rd_addr", "");
  mem_table["Core.datapath.regfile.regfile"] = new mem_api<32, 128>(&mod_typed->Core_datapath_regfile__regfile, "Core.datapath.regfile.regfile", "");
  dat_table["Core.datapath.regfile.io_rs2_thread"] = new dat_api<2>(&mod_typed->Core_datapath_regfile__io_rs2_thread, "Core.datapath.regfile.io_rs2_thread", "");
  dat_table["Core.datapath.regfile.io_rs2_addr"] = new dat_api<5>(&mod_typed->Core_datapath_regfile__io_rs2_addr, "Core.datapath.regfile.io_rs2_addr", "");
  dat_table["Core.datapath.regfile.dout2"] = new dat_api<32>(&mod_typed->Core_datapath_regfile__dout2, "Core.datapath.regfile.dout2", "");
  dat_table["Core.datapath.regfile.io_rs1_data"] = new dat_api<32>(&mod_typed->Core_datapath_regfile__io_rs1_data, "Core.datapath.regfile.io_rs1_data", "");
  dat_table["Core.datapath.wb_rd_data"] = new dat_api<32>(&mod_typed->Core_datapath__wb_rd_data, "Core.datapath.wb_rd_data", "");
  dat_table["Core.datapath.io_control_wb_rd_addr"] = new dat_api<5>(&mod_typed->Core_datapath__io_control_wb_rd_addr, "Core.datapath.io_control_wb_rd_addr", "");
  dat_table["Core.control.io_wb_rd_addr"] = new dat_api<5>(&mod_typed->Core_control__io_wb_rd_addr, "Core.control.io_wb_rd_addr", "");
  dat_table["Core.datapath.io_control_wb_tid"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_wb_tid, "Core.datapath.io_control_wb_tid", "");
  dat_table["Core.control.io_wb_tid"] = new dat_api<2>(&mod_typed->Core_control__io_wb_tid, "Core.control.io_wb_tid", "");
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
  dat_table["Core.datapath.wb_reg_tid"] = new dat_api<2>(&mod_typed->Core_datapath__wb_reg_tid, "Core.datapath.wb_reg_tid", "");
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
  dat_table["Core.datapath.if_reg_pcs_3"] = new dat_api<32>(&mod_typed->Core_datapath__if_reg_pcs_3, "Core.datapath.if_reg_pcs_3", "");
  dat_table["Core.datapath.if_reg_pcs_2"] = new dat_api<32>(&mod_typed->Core_datapath__if_reg_pcs_2, "Core.datapath.if_reg_pcs_2", "");
  dat_table["Core.datapath.if_reg_pcs_1"] = new dat_api<32>(&mod_typed->Core_datapath__if_reg_pcs_1, "Core.datapath.if_reg_pcs_1", "");
  dat_table["Core.datapath.mem_reg_tid"] = new dat_api<2>(&mod_typed->Core_datapath__mem_reg_tid, "Core.datapath.mem_reg_tid", "");
  dat_table["Core.datapath.exe_reg_tid"] = new dat_api<2>(&mod_typed->Core_datapath__exe_reg_tid, "Core.datapath.exe_reg_tid", "");
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
  dat_table["Core.datapath.if_reg_tid"] = new dat_api<2>(&mod_typed->Core_datapath__if_reg_tid, "Core.datapath.if_reg_tid", "");
  dat_table["Core.datapath.dec_reg_tid"] = new dat_api<2>(&mod_typed->Core_datapath__dec_reg_tid, "Core.datapath.dec_reg_tid", "");
  dat_table["Core.datapath.csr.io_tmodes_1"] = new dat_api<2>(&mod_typed->Core_datapath_csr__io_tmodes_1, "Core.datapath.csr.io_tmodes_1", "");
  dat_table["Core.datapath.io_control_csr_tmodes_1"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_csr_tmodes_1, "Core.datapath.io_control_csr_tmodes_1", "");
  dat_table["Core.control.io_csr_tmodes_1"] = new dat_api<2>(&mod_typed->Core_control__io_csr_tmodes_1, "Core.control.io_csr_tmodes_1", "");
  dat_table["Core.control.scheduler.io_thread_modes_1"] = new dat_api<2>(&mod_typed->Core_control_scheduler__io_thread_modes_1, "Core.control.scheduler.io_thread_modes_1", "");
  dat_table["Core.datapath.csr.io_tmodes_0"] = new dat_api<2>(&mod_typed->Core_datapath_csr__io_tmodes_0, "Core.datapath.csr.io_tmodes_0", "");
  dat_table["Core.datapath.io_control_csr_tmodes_0"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_csr_tmodes_0, "Core.datapath.io_control_csr_tmodes_0", "");
  dat_table["Core.control.io_csr_tmodes_0"] = new dat_api<2>(&mod_typed->Core_control__io_csr_tmodes_0, "Core.control.io_csr_tmodes_0", "");
  dat_table["Core.control.scheduler.io_thread_modes_0"] = new dat_api<2>(&mod_typed->Core_control_scheduler__io_thread_modes_0, "Core.control.scheduler.io_thread_modes_0", "");
  dat_table["Core.datapath.csr.io_tmodes_2"] = new dat_api<2>(&mod_typed->Core_datapath_csr__io_tmodes_2, "Core.datapath.csr.io_tmodes_2", "");
  dat_table["Core.datapath.io_control_csr_tmodes_2"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_csr_tmodes_2, "Core.datapath.io_control_csr_tmodes_2", "");
  dat_table["Core.control.io_csr_tmodes_2"] = new dat_api<2>(&mod_typed->Core_control__io_csr_tmodes_2, "Core.control.io_csr_tmodes_2", "");
  dat_table["Core.control.scheduler.io_thread_modes_2"] = new dat_api<2>(&mod_typed->Core_control_scheduler__io_thread_modes_2, "Core.control.scheduler.io_thread_modes_2", "");
  dat_table["Core.datapath.csr.io_tmodes_3"] = new dat_api<2>(&mod_typed->Core_datapath_csr__io_tmodes_3, "Core.datapath.csr.io_tmodes_3", "");
  dat_table["Core.datapath.io_control_csr_tmodes_3"] = new dat_api<2>(&mod_typed->Core_datapath__io_control_csr_tmodes_3, "Core.datapath.io_control_csr_tmodes_3", "");
  dat_table["Core.control.io_csr_tmodes_3"] = new dat_api<2>(&mod_typed->Core_control__io_csr_tmodes_3, "Core.control.io_csr_tmodes_3", "");
  dat_table["Core.control.scheduler.io_thread_modes_3"] = new dat_api<2>(&mod_typed->Core_control_scheduler__io_thread_modes_3, "Core.control.scheduler.io_thread_modes_3", "");
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
  dat_table["Core.control.scheduler.R191"] = new dat_api<1>(&mod_typed->Core_control_scheduler__R191, "Core.control.scheduler.R191", "");
  dat_table["Core.control.scheduler.R185"] = new dat_api<1>(&mod_typed->Core_control_scheduler__R185, "Core.control.scheduler.R185", "");
  dat_table["Core.control.scheduler.R180"] = new dat_api<1>(&mod_typed->Core_control_scheduler__R180, "Core.control.scheduler.R180", "");
  dat_table["Core.control.scheduler.R111"] = new dat_api<1>(&mod_typed->Core_control_scheduler__R111, "Core.control.scheduler.R111", "");
  dat_table["Core.control.scheduler.R86"] = new dat_api<1>(&mod_typed->Core_control_scheduler__R86, "Core.control.scheduler.R86", "");
  dat_table["Core.control.scheduler.R71"] = new dat_api<1>(&mod_typed->Core_control_scheduler__R71, "Core.control.scheduler.R71", "");
  dat_table["Core.control.scheduler.R65"] = new dat_api<1>(&mod_typed->Core_control_scheduler__R65, "Core.control.scheduler.R65", "");
  dat_table["Core.control.scheduler.R60"] = new dat_api<1>(&mod_typed->Core_control_scheduler__R60, "Core.control.scheduler.R60", "");
  dat_table["Core.control.scheduler.R48"] = new dat_api<1>(&mod_typed->Core_control_scheduler__R48, "Core.control.scheduler.R48", "");
  dat_table["Core.control.scheduler.R34"] = new dat_api<1>(&mod_typed->Core_control_scheduler__R34, "Core.control.scheduler.R34", "");
  dat_table["Core.control.dec_alu_type"] = new dat_api<4>(&mod_typed->Core_control__dec_alu_type, "Core.control.dec_alu_type", "");
  dat_table["Core.control.exe_reg_alu_type"] = new dat_api<4>(&mod_typed->Core_control__exe_reg_alu_type, "Core.control.exe_reg_alu_type", "");
  dat_table["Core.control.dec_br_type"] = new dat_api<3>(&mod_typed->Core_control__dec_br_type, "Core.control.dec_br_type", "");
  dat_table["Core.control.exe_reg_br_type"] = new dat_api<3>(&mod_typed->Core_control__exe_reg_br_type, "Core.control.exe_reg_br_type", "");
  dat_table["Core.control.dec_csr_type"] = new dat_api<2>(&mod_typed->Core_control__dec_csr_type, "Core.control.dec_csr_type", "");
  dat_table["Core.control.exe_reg_csr_type"] = new dat_api<2>(&mod_typed->Core_control__exe_reg_csr_type, "Core.control.exe_reg_csr_type", "");
  dat_table["Core.control.exe_reg_mul_type"] = new dat_api<2>(&mod_typed->Core_control__exe_reg_mul_type, "Core.control.exe_reg_mul_type", "");
  dat_table["Core.control.dec_exe_rd_data_sel"] = new dat_api<2>(&mod_typed->Core_control__dec_exe_rd_data_sel, "Core.control.dec_exe_rd_data_sel", "");
  dat_table["Core.control.exe_reg_rd_data_sel"] = new dat_api<2>(&mod_typed->Core_control__exe_reg_rd_data_sel, "Core.control.exe_reg_rd_data_sel", "");
  dat_table["Core.control.dec_mem_type"] = new dat_api<4>(&mod_typed->Core_control__dec_mem_type, "Core.control.dec_mem_type", "");
  dat_table["Core.control.exe_reg_mem_type"] = new dat_api<4>(&mod_typed->Core_control__exe_reg_mem_type, "Core.control.exe_reg_mem_type", "");
  dat_table["Core.control.dec_mem_rd_data_sel"] = new dat_api<2>(&mod_typed->Core_control__dec_mem_rd_data_sel, "Core.control.dec_mem_rd_data_sel", "");
  dat_table["Core.control.R269"] = new dat_api<2>(&mod_typed->Core_control__R269, "Core.control.R269", "");
  dat_table["Core.control.mem_reg_rd_data_sel"] = new dat_api<2>(&mod_typed->Core_control__mem_reg_rd_data_sel, "Core.control.mem_reg_rd_data_sel", "");
  dat_table["Core.control.mem_reg_exception"] = new dat_api<1>(&mod_typed->Core_control__mem_reg_exception, "Core.control.mem_reg_exception", "");
  dat_table["Core.control.scheduler.io_thread"] = new dat_api<2>(&mod_typed->Core_control_scheduler__io_thread, "Core.control.scheduler.io_thread", "");
  dat_table["Core.control.R225"] = new dat_api<2>(&mod_typed->Core_control__R225, "Core.control.R225", "");
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
  dat_table["Core.control.R179"] = new dat_api<1>(&mod_typed->Core_control__R179, "Core.control.R179", "");
  dat_table["Core.control.R172"] = new dat_api<1>(&mod_typed->Core_control__R172, "Core.control.R172", "");
  dat_table["Core.control.exe_reg_sret"] = new dat_api<1>(&mod_typed->Core_control__exe_reg_sret, "Core.control.exe_reg_sret", "");
  dat_table["Core.control.dec_rd_en"] = new dat_api<1>(&mod_typed->Core_control__dec_rd_en, "Core.control.dec_rd_en", "");
  dat_table["Core.control.dec_rd_write"] = new dat_api<1>(&mod_typed->Core_control__dec_rd_write, "Core.control.dec_rd_write", "");
  dat_table["Core.control.exe_reg_rd_write"] = new dat_api<1>(&mod_typed->Core_control__exe_reg_rd_write, "Core.control.exe_reg_rd_write", "");
  dat_table["Core.control.mem_reg_rd_write"] = new dat_api<1>(&mod_typed->Core_control__mem_reg_rd_write, "Core.control.mem_reg_rd_write", "");
  dat_table["Core.control.mem_reg_valid"] = new dat_api<1>(&mod_typed->Core_control__mem_reg_valid, "Core.control.mem_reg_valid", "");
  dat_table["Core.control.scheduler.io_valid"] = new dat_api<1>(&mod_typed->Core_control_scheduler__io_valid, "Core.control.scheduler.io_valid", "");
  dat_table["Core.control.R148"] = new dat_api<1>(&mod_typed->Core_control__R148, "Core.control.R148", "");
  dat_table["Core.control.if_reg_valid"] = new dat_api<1>(&mod_typed->Core_control__if_reg_valid, "Core.control.if_reg_valid", "");
  dat_table["Core.control.stall_count_3"] = new dat_api<2>(&mod_typed->Core_control__stall_count_3, "Core.control.stall_count_3", "");
  dat_table["Core.control.stall_count_2"] = new dat_api<2>(&mod_typed->Core_control__stall_count_2, "Core.control.stall_count_2", "");
  dat_table["Core.control.stall_count_1"] = new dat_api<2>(&mod_typed->Core_control__stall_count_1, "Core.control.stall_count_1", "");
  dat_table["Core.control.stall_count_0"] = new dat_api<2>(&mod_typed->Core_control__stall_count_0, "Core.control.stall_count_0", "");
  dat_table["Core.control.exe_flush"] = new dat_api<1>(&mod_typed->Core_control__exe_flush, "Core.control.exe_flush", "");
  dat_table["Core.control.if_valid"] = new dat_api<1>(&mod_typed->Core_control__if_valid, "Core.control.if_valid", "");
  dat_table["Core.control.dec_reg_valid"] = new dat_api<1>(&mod_typed->Core_control__dec_reg_valid, "Core.control.dec_reg_valid", "");
  dat_table["Core.control.R81"] = new dat_api<1>(&mod_typed->Core_control__R81, "Core.control.R81", "");
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
  dat_table["Core.io_int_exts_4"] = new dat_api<1>(&mod_typed->Core__io_int_exts_4, "Core.io_int_exts_4", "");
  dat_table["Core.io_int_exts_5"] = new dat_api<1>(&mod_typed->Core__io_int_exts_5, "Core.io_int_exts_5", "");
  dat_table["Core.io_int_exts_6"] = new dat_api<1>(&mod_typed->Core__io_int_exts_6, "Core.io_int_exts_6", "");
  dat_table["Core.io_int_exts_7"] = new dat_api<1>(&mod_typed->Core__io_int_exts_7, "Core.io_int_exts_7", "");
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

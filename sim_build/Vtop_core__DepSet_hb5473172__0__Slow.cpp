// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_core.h"

VL_ATTR_COLD void Vtop_core___stl_sequent__TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__0(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_core___stl_sequent__TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.sv2v_tmp_fetcher_instance_fetcher_state 
        = vlSelfRef.fetcher_instance__DOT__fetcher_state;
    vlSelfRef.sv2v_tmp_fetcher_instance_instruction 
        = vlSelfRef.fetcher_instance__DOT__instruction;
    vlSelfRef.sv2v_tmp_scheduler_instance_core_state 
        = vlSelfRef.scheduler_instance__DOT__core_state;
    vlSelfRef.sv2v_tmp_scheduler_instance_current_pc 
        = vlSelfRef.scheduler_instance__DOT__current_pc;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_rd_address 
        = vlSelfRef.decoder_instance__DOT__decoded_rd_address;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_rs_address 
        = vlSelfRef.decoder_instance__DOT__decoded_rs_address;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_rt_address 
        = vlSelfRef.decoder_instance__DOT__decoded_rt_address;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_nzp 
        = vlSelfRef.decoder_instance__DOT__decoded_nzp;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_immediate 
        = vlSelfRef.decoder_instance__DOT__decoded_immediate;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_reg_write_enable 
        = vlSelfRef.decoder_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_mem_read_enable 
        = vlSelfRef.decoder_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_mem_write_enable 
        = vlSelfRef.decoder_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_nzp_write_enable 
        = vlSelfRef.decoder_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_reg_input_mux 
        = vlSelfRef.decoder_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_alu_arithmetic_mux 
        = vlSelfRef.decoder_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_alu_output_mux 
        = vlSelfRef.decoder_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_pc_mux 
        = vlSelfRef.decoder_instance__DOT__decoded_pc_mux;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_ret 
        = vlSelfRef.decoder_instance__DOT__decoded_ret;
    vlSelfRef.threads__BRA__0__KET____DOT__sv2v_tmp_lsu_instance_lsu_state 
        = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.threads__BRA__1__KET____DOT__sv2v_tmp_lsu_instance_lsu_state 
        = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.threads__BRA__2__KET____DOT__sv2v_tmp_lsu_instance_lsu_state 
        = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.threads__BRA__3__KET____DOT__sv2v_tmp_lsu_instance_lsu_state 
        = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.threads__BRA__0__KET____DOT__sv2v_tmp_lsu_instance_lsu_out 
        = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.threads__BRA__1__KET____DOT__sv2v_tmp_lsu_instance_lsu_out 
        = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.threads__BRA__2__KET____DOT__sv2v_tmp_lsu_instance_lsu_out 
        = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.threads__BRA__3__KET____DOT__sv2v_tmp_lsu_instance_lsu_out 
        = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.threads__BRA__0__KET____DOT__sv2v_tmp_register_instance_rs 
        = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.threads__BRA__1__KET____DOT__sv2v_tmp_register_instance_rs 
        = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.threads__BRA__2__KET____DOT__sv2v_tmp_register_instance_rs 
        = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.threads__BRA__3__KET____DOT__sv2v_tmp_register_instance_rs 
        = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.threads__BRA__0__KET____DOT__sv2v_tmp_register_instance_rt 
        = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.threads__BRA__1__KET____DOT__sv2v_tmp_register_instance_rt 
        = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.threads__BRA__2__KET____DOT__sv2v_tmp_register_instance_rt 
        = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.threads__BRA__3__KET____DOT__sv2v_tmp_register_instance_rt 
        = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.fetcher_state = vlSelfRef.fetcher_instance__DOT__fetcher_state;
    vlSelfRef.instruction = vlSelfRef.fetcher_instance__DOT__instruction;
    vlSelfRef.decoded_ret = vlSelfRef.decoder_instance__DOT__decoded_ret;
    vlSelfRef.lsu_out[0U] = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.lsu_out[1U] = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.lsu_out[2U] = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.lsu_out[3U] = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.rs[0U] = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.rs[1U] = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.rs[2U] = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.rs[3U] = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.rt[0U] = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.rt[1U] = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.rt[2U] = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.rt[3U] = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.alu_out[0U] = vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.alu_out[1U] = vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.alu_out[2U] = vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.alu_out[3U] = vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.lsu_state = ((((IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state) 
                             << 6U) | ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state) 
                                       << 4U)) | (((IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state) 
                                                   << 2U) 
                                                  | (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state)));
    vlSelfRef.next_pc = ((((IData)(vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__next_pc) 
                           << 0x18U) | ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__next_pc) 
                                        << 0x10U)) 
                         | (((IData)(vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__next_pc) 
                             << 8U) | (IData)(vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__next_pc)));
    vlSelfRef.data_mem_read_valid = ((((IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_valid) 
                                       << 3U) | ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_valid) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_valid) 
                                         << 1U) | (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_valid)));
    vlSelfRef.data_mem_read_address = ((((IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_address) 
                                         << 0x18U) 
                                        | ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_address) 
                                           << 0x10U)) 
                                       | (((IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_address) 
                                           << 8U) | (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_address)));
    vlSelfRef.data_mem_write_valid = ((((IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_valid) 
                                        << 3U) | ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_valid) 
                                                  << 2U)) 
                                      | (((IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_valid) 
                                          << 1U) | (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_valid)));
    vlSelfRef.data_mem_write_address = ((((IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_address) 
                                          << 0x18U) 
                                         | ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_address) 
                                            << 0x10U)) 
                                        | (((IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_address) 
                                            << 8U) 
                                           | (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_address)));
    vlSelfRef.data_mem_write_data = ((((IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_data) 
                                       << 0x18U) | 
                                      ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_data) 
                                       << 0x10U)) | 
                                     (((IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_data) 
                                       << 8U) | (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_data)));
    vlSelfRef.done = vlSelfRef.scheduler_instance__DOT__done;
    vlSelfRef.decoded_rd_address = vlSelfRef.decoder_instance__DOT__decoded_rd_address;
    vlSelfRef.decoded_rs_address = vlSelfRef.decoder_instance__DOT__decoded_rs_address;
    vlSelfRef.decoded_rt_address = vlSelfRef.decoder_instance__DOT__decoded_rt_address;
    vlSelfRef.decoded_nzp = vlSelfRef.decoder_instance__DOT__decoded_nzp;
    vlSelfRef.decoded_reg_write_enable = vlSelfRef.decoder_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.decoded_nzp_write_enable = vlSelfRef.decoder_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.decoded_reg_input_mux = vlSelfRef.decoder_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.decoded_alu_arithmetic_mux = vlSelfRef.decoder_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.decoded_alu_output_mux = vlSelfRef.decoder_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.decoded_pc_mux = vlSelfRef.decoder_instance__DOT__decoded_pc_mux;
    vlSelfRef.current_pc = vlSelfRef.scheduler_instance__DOT__current_pc;
    vlSelfRef.decoded_mem_read_enable = vlSelfRef.decoder_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.decoded_mem_write_enable = vlSelfRef.decoder_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.fetcher_instance__DOT__sv2v_tmp_AF88B 
        = vlSelfRef.fetcher_instance__DOT__mem_if__DOT__read_valid;
    vlSelfRef.fetcher_instance__DOT__sv2v_tmp_9FB2F 
        = vlSelfRef.fetcher_instance__DOT__mem_if__DOT__read_address;
    vlSelfRef.decoded_immediate = vlSelfRef.decoder_instance__DOT__decoded_immediate;
    vlSelfRef.core_state = vlSelfRef.scheduler_instance__DOT__core_state;
    vlSelfRef.scheduler_instance__DOT__start = vlSelfRef.start;
    vlSelfRef.fetcher_instance__DOT__mem_read_data 
        = vlSelfRef.program_mem_read_data;
    vlSelfRef.fetcher_instance__DOT__mem_if__DOT__read_data 
        = vlSelfRef.program_mem_read_data;
    vlSelfRef.fetcher_instance__DOT__mem_read_ready 
        = vlSelfRef.program_mem_read_ready;
    vlSelfRef.fetcher_instance__DOT__mem_if__DOT__read_ready 
        = vlSelfRef.program_mem_read_ready;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_write_ready) 
                 >> 0U));
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_write_ready) 
                 >> 1U));
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_write_ready) 
                 >> 2U));
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_write_ready) 
                 >> 3U));
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_data 
        = (0xffU & (vlSelfRef.data_mem_read_data >> 0U));
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_data 
        = (0xffU & (vlSelfRef.data_mem_read_data >> 8U));
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_data 
        = (0xffU & (vlSelfRef.data_mem_read_data >> 0x10U));
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_data 
        = (0xffU & (vlSelfRef.data_mem_read_data >> 0x18U));
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_read_ready) 
                 >> 0U));
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_read_ready) 
                 >> 1U));
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_read_ready) 
                 >> 2U));
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_read_ready) 
                 >> 3U));
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.block_id;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.block_id;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.block_id;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.block_id;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__enable 
        = (0U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__enable 
        = (0U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__enable 
        = (0U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__enable 
        = (0U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__enable 
        = (1U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__enable 
        = (1U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__enable 
        = (1U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__enable 
        = (1U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__enable 
        = (2U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__enable 
        = (2U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__enable 
        = (2U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__enable 
        = (2U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__enable 
        = (3U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__enable 
        = (3U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__enable 
        = (3U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__enable 
        = (3U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.fetcher_instance__DOT__reset = vlSelfRef.reset;
    vlSelfRef.decoder_instance__DOT__reset = vlSelfRef.reset;
    vlSelfRef.scheduler_instance__DOT__reset = vlSelfRef.reset;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.fetcher_instance__DOT__clk = vlSelfRef.clk;
    vlSelfRef.decoder_instance__DOT__clk = vlSelfRef.clk;
    vlSelfRef.scheduler_instance__DOT__clk = vlSelfRef.clk;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.scheduler_instance__DOT__fetcher_state 
        = vlSelfRef.fetcher_state;
    vlSelfRef.decoder_instance__DOT__instruction = vlSelfRef.instruction;
    vlSelfRef.scheduler_instance__DOT__decoded_ret 
        = vlSelfRef.decoded_ret;
    vlSelfRef.scheduler_instance__DOT__lsu_state = vlSelfRef.lsu_state;
    vlSelfRef.scheduler_instance__DOT__next_pc = vlSelfRef.next_pc;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.decoded_rd_address;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.decoded_rd_address;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.decoded_rd_address;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.decoded_rd_address;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.decoded_rs_address;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.decoded_rs_address;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.decoded_rs_address;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.decoded_rs_address;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.decoded_rt_address;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.decoded_rt_address;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.decoded_rt_address;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.decoded_rt_address;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.decoded_nzp;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.decoded_nzp;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.decoded_nzp;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.decoded_nzp;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.decoded_reg_write_enable;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.decoded_reg_write_enable;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.decoded_reg_write_enable;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.decoded_reg_write_enable;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.decoded_nzp_write_enable;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.decoded_nzp_write_enable;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.decoded_nzp_write_enable;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.decoded_nzp_write_enable;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.decoded_reg_input_mux;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.decoded_reg_input_mux;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.decoded_reg_input_mux;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.decoded_reg_input_mux;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.decoded_alu_arithmetic_mux;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.decoded_alu_arithmetic_mux;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.decoded_alu_arithmetic_mux;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.decoded_alu_arithmetic_mux;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.decoded_alu_output_mux;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.decoded_alu_output_mux;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.decoded_alu_output_mux;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.decoded_alu_output_mux;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.decoded_pc_mux;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.decoded_pc_mux;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.decoded_pc_mux;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.decoded_pc_mux;
    vlSelfRef.fetcher_instance__DOT__current_pc = vlSelfRef.current_pc;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.current_pc;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.current_pc;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.current_pc;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.current_pc;
    vlSelfRef.scheduler_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.decoded_mem_read_enable;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.decoded_mem_read_enable;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.decoded_mem_read_enable;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.decoded_mem_read_enable;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.decoded_mem_read_enable;
    vlSelfRef.scheduler_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.decoded_mem_write_enable;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.decoded_mem_write_enable;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.decoded_mem_write_enable;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.decoded_mem_write_enable;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.decoded_mem_write_enable;
    vlSelfRef.fetcher_instance__DOT__mem_read_valid 
        = vlSelfRef.fetcher_instance__DOT__sv2v_tmp_AF88B;
    vlSelfRef.program_mem_read_valid = vlSelfRef.fetcher_instance__DOT__sv2v_tmp_AF88B;
    vlSelfRef.fetcher_instance__DOT__mem_read_address 
        = vlSelfRef.fetcher_instance__DOT__sv2v_tmp_9FB2F;
    vlSelfRef.program_mem_read_address = vlSelfRef.fetcher_instance__DOT__sv2v_tmp_9FB2F;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.fetcher_instance__DOT__core_state = vlSelfRef.core_state;
    vlSelfRef.decoder_instance__DOT__core_state = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.core_state;
}

VL_ATTR_COLD void Vtop_core___ctor_var_reset(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_core___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->block_id = VL_RAND_RESET_I(8);
    vlSelf->thread_count = VL_RAND_RESET_I(3);
    vlSelf->program_mem_read_valid = VL_RAND_RESET_I(1);
    vlSelf->program_mem_read_address = VL_RAND_RESET_I(8);
    vlSelf->program_mem_read_ready = VL_RAND_RESET_I(1);
    vlSelf->program_mem_read_data = VL_RAND_RESET_I(16);
    vlSelf->data_mem_read_valid = VL_RAND_RESET_I(4);
    vlSelf->data_mem_read_address = VL_RAND_RESET_I(32);
    vlSelf->data_mem_read_ready = VL_RAND_RESET_I(4);
    vlSelf->data_mem_read_data = VL_RAND_RESET_I(32);
    vlSelf->data_mem_write_valid = VL_RAND_RESET_I(4);
    vlSelf->data_mem_write_address = VL_RAND_RESET_I(32);
    vlSelf->data_mem_write_ready = VL_RAND_RESET_I(4);
    vlSelf->data_mem_write_data = VL_RAND_RESET_I(32);
    vlSelf->core_state = VL_RAND_RESET_I(3);
    vlSelf->fetcher_state = VL_RAND_RESET_I(3);
    vlSelf->instruction = VL_RAND_RESET_I(16);
    vlSelf->current_pc = VL_RAND_RESET_I(8);
    vlSelf->next_pc = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->rs[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->rt[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->lsu_state = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->lsu_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->alu_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->decoded_rd_address = VL_RAND_RESET_I(4);
    vlSelf->decoded_rs_address = VL_RAND_RESET_I(4);
    vlSelf->decoded_rt_address = VL_RAND_RESET_I(4);
    vlSelf->decoded_nzp = VL_RAND_RESET_I(3);
    vlSelf->decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->decoded_mem_read_enable = VL_RAND_RESET_I(1);
    vlSelf->decoded_mem_write_enable = VL_RAND_RESET_I(1);
    vlSelf->decoded_nzp_write_enable = VL_RAND_RESET_I(1);
    vlSelf->decoded_reg_input_mux = VL_RAND_RESET_I(2);
    vlSelf->decoded_alu_arithmetic_mux = VL_RAND_RESET_I(2);
    vlSelf->decoded_alu_output_mux = VL_RAND_RESET_I(1);
    vlSelf->decoded_pc_mux = VL_RAND_RESET_I(1);
    vlSelf->decoded_ret = VL_RAND_RESET_I(1);
    vlSelf->sv2v_tmp_fetcher_instance_fetcher_state = VL_RAND_RESET_I(3);
    vlSelf->sv2v_tmp_fetcher_instance_instruction = VL_RAND_RESET_I(16);
    vlSelf->sv2v_tmp_decoder_instance_decoded_rd_address = VL_RAND_RESET_I(4);
    vlSelf->sv2v_tmp_decoder_instance_decoded_rs_address = VL_RAND_RESET_I(4);
    vlSelf->sv2v_tmp_decoder_instance_decoded_rt_address = VL_RAND_RESET_I(4);
    vlSelf->sv2v_tmp_decoder_instance_decoded_nzp = VL_RAND_RESET_I(3);
    vlSelf->sv2v_tmp_decoder_instance_decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->sv2v_tmp_decoder_instance_decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->sv2v_tmp_decoder_instance_decoded_mem_read_enable = VL_RAND_RESET_I(1);
    vlSelf->sv2v_tmp_decoder_instance_decoded_mem_write_enable = VL_RAND_RESET_I(1);
    vlSelf->sv2v_tmp_decoder_instance_decoded_nzp_write_enable = VL_RAND_RESET_I(1);
    vlSelf->sv2v_tmp_decoder_instance_decoded_reg_input_mux = VL_RAND_RESET_I(2);
    vlSelf->sv2v_tmp_decoder_instance_decoded_alu_arithmetic_mux = VL_RAND_RESET_I(2);
    vlSelf->sv2v_tmp_decoder_instance_decoded_alu_output_mux = VL_RAND_RESET_I(1);
    vlSelf->sv2v_tmp_decoder_instance_decoded_pc_mux = VL_RAND_RESET_I(1);
    vlSelf->sv2v_tmp_decoder_instance_decoded_ret = VL_RAND_RESET_I(1);
    vlSelf->sv2v_tmp_scheduler_instance_core_state = VL_RAND_RESET_I(3);
    vlSelf->sv2v_tmp_scheduler_instance_current_pc = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__0__KET____DOT__sv2v_tmp_lsu_instance_lsu_state = VL_RAND_RESET_I(2);
    vlSelf->threads__BRA__0__KET____DOT__sv2v_tmp_lsu_instance_lsu_out = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__0__KET____DOT__sv2v_tmp_register_instance_rs = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__0__KET____DOT__sv2v_tmp_register_instance_rt = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__1__KET____DOT__sv2v_tmp_lsu_instance_lsu_state = VL_RAND_RESET_I(2);
    vlSelf->threads__BRA__1__KET____DOT__sv2v_tmp_lsu_instance_lsu_out = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__1__KET____DOT__sv2v_tmp_register_instance_rs = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__1__KET____DOT__sv2v_tmp_register_instance_rt = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__2__KET____DOT__sv2v_tmp_lsu_instance_lsu_state = VL_RAND_RESET_I(2);
    vlSelf->threads__BRA__2__KET____DOT__sv2v_tmp_lsu_instance_lsu_out = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__2__KET____DOT__sv2v_tmp_register_instance_rs = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__2__KET____DOT__sv2v_tmp_register_instance_rt = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__3__KET____DOT__sv2v_tmp_lsu_instance_lsu_state = VL_RAND_RESET_I(2);
    vlSelf->threads__BRA__3__KET____DOT__sv2v_tmp_lsu_instance_lsu_out = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__3__KET____DOT__sv2v_tmp_register_instance_rs = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__3__KET____DOT__sv2v_tmp_register_instance_rt = VL_RAND_RESET_I(8);
    vlSelf->fetcher_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fetcher_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->fetcher_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->fetcher_instance__DOT__current_pc = VL_RAND_RESET_I(8);
    vlSelf->fetcher_instance__DOT__mem_read_valid = VL_RAND_RESET_I(1);
    vlSelf->fetcher_instance__DOT__mem_read_address = VL_RAND_RESET_I(8);
    vlSelf->fetcher_instance__DOT__mem_read_ready = VL_RAND_RESET_I(1);
    vlSelf->fetcher_instance__DOT__mem_read_data = VL_RAND_RESET_I(16);
    vlSelf->fetcher_instance__DOT__fetcher_state = VL_RAND_RESET_I(3);
    vlSelf->fetcher_instance__DOT__instruction = VL_RAND_RESET_I(16);
    vlSelf->fetcher_instance__DOT__sv2v_tmp_AF88B = VL_RAND_RESET_I(1);
    vlSelf->fetcher_instance__DOT__sv2v_tmp_9FB2F = VL_RAND_RESET_I(8);
    vlSelf->fetcher_instance__DOT__mem_if__DOT__read_valid = VL_RAND_RESET_I(1);
    vlSelf->fetcher_instance__DOT__mem_if__DOT__read_address = VL_RAND_RESET_I(8);
    vlSelf->fetcher_instance__DOT__mem_if__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->fetcher_instance__DOT__mem_if__DOT__read_data = VL_RAND_RESET_I(16);
    vlSelf->fetcher_instance__DOT__mem_if__DOT__write_valid = VL_RAND_RESET_I(1);
    vlSelf->fetcher_instance__DOT__mem_if__DOT__write_address = VL_RAND_RESET_I(8);
    vlSelf->fetcher_instance__DOT__mem_if__DOT__write_data = VL_RAND_RESET_I(16);
    vlSelf->fetcher_instance__DOT__mem_if__DOT__write_ready = VL_RAND_RESET_I(1);
    vlSelf->decoder_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->decoder_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->decoder_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->decoder_instance__DOT__instruction = VL_RAND_RESET_I(16);
    vlSelf->decoder_instance__DOT__decoded_rd_address = VL_RAND_RESET_I(4);
    vlSelf->decoder_instance__DOT__decoded_rs_address = VL_RAND_RESET_I(4);
    vlSelf->decoder_instance__DOT__decoded_rt_address = VL_RAND_RESET_I(4);
    vlSelf->decoder_instance__DOT__decoded_nzp = VL_RAND_RESET_I(3);
    vlSelf->decoder_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->decoder_instance__DOT__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->decoder_instance__DOT__decoded_mem_read_enable = VL_RAND_RESET_I(1);
    vlSelf->decoder_instance__DOT__decoded_mem_write_enable = VL_RAND_RESET_I(1);
    vlSelf->decoder_instance__DOT__decoded_nzp_write_enable = VL_RAND_RESET_I(1);
    vlSelf->decoder_instance__DOT__decoded_reg_input_mux = VL_RAND_RESET_I(2);
    vlSelf->decoder_instance__DOT__decoded_alu_arithmetic_mux = VL_RAND_RESET_I(2);
    vlSelf->decoder_instance__DOT__decoded_alu_output_mux = VL_RAND_RESET_I(1);
    vlSelf->decoder_instance__DOT__decoded_pc_mux = VL_RAND_RESET_I(1);
    vlSelf->decoder_instance__DOT__decoded_ret = VL_RAND_RESET_I(1);
    vlSelf->scheduler_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->scheduler_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->scheduler_instance__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->scheduler_instance__DOT__decoded_mem_read_enable = VL_RAND_RESET_I(1);
    vlSelf->scheduler_instance__DOT__decoded_mem_write_enable = VL_RAND_RESET_I(1);
    vlSelf->scheduler_instance__DOT__decoded_ret = VL_RAND_RESET_I(1);
    vlSelf->scheduler_instance__DOT__fetcher_state = VL_RAND_RESET_I(3);
    vlSelf->scheduler_instance__DOT__lsu_state = VL_RAND_RESET_I(8);
    vlSelf->scheduler_instance__DOT__current_pc = VL_RAND_RESET_I(8);
    vlSelf->scheduler_instance__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->scheduler_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->scheduler_instance__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->scheduler_instance__DOT__sv2v_autoblock_1__DOT___sv2v_jump = VL_RAND_RESET_I(2);
    vlSelf->scheduler_instance__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__any_lsu_waiting = VL_RAND_RESET_I(1);
    vlSelf->scheduler_instance__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__sv2v_autoblock_3__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->scheduler_instance__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__sv2v_autoblock_3__DOT__sv2v_autoblock_4__DOT___sv2v_value_on_break = VL_RAND_RESET_I(32);
    vlSelf->threads__BRA__0__KET____DOT__alu_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__0__KET____DOT__alu_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__0__KET____DOT__alu_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__0__KET____DOT__alu_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->threads__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux = VL_RAND_RESET_I(2);
    vlSelf->threads__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_output_mux = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__0__KET____DOT__alu_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__0__KET____DOT__alu_instance__DOT__rt = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__0__KET____DOT__alu_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__0__KET____DOT__lsu_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__0__KET____DOT__lsu_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__0__KET____DOT__lsu_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__0__KET____DOT__lsu_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->threads__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__0__KET____DOT__lsu_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__0__KET____DOT__lsu_instance__DOT__rt = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_valid = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_address = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_ready = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_data = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_valid = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_address = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_data = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_ready = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = VL_RAND_RESET_I(2);
    vlSelf->threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__0__KET____DOT__register_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__0__KET____DOT__register_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__0__KET____DOT__register_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__0__KET____DOT__register_instance__DOT__block_id = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__0__KET____DOT__register_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rd_address = VL_RAND_RESET_I(4);
    vlSelf->threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rs_address = VL_RAND_RESET_I(4);
    vlSelf->threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rt_address = VL_RAND_RESET_I(4);
    vlSelf->threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_input_mux = VL_RAND_RESET_I(2);
    vlSelf->threads__BRA__0__KET____DOT__register_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__0__KET____DOT__register_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__0__KET____DOT__register_instance__DOT__lsu_out = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__0__KET____DOT__register_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__0__KET____DOT__register_instance__DOT__rt = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->threads__BRA__0__KET____DOT__register_instance__DOT__registers[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->threads__BRA__0__KET____DOT__pc_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__0__KET____DOT__pc_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__0__KET____DOT__pc_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__0__KET____DOT__pc_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp = VL_RAND_RESET_I(3);
    vlSelf->threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_pc_mux = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__0__KET____DOT__pc_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__0__KET____DOT__pc_instance__DOT__current_pc = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__0__KET____DOT__pc_instance__DOT__next_pc = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__0__KET____DOT__pc_instance__DOT__nzp = VL_RAND_RESET_I(3);
    vlSelf->threads__BRA__1__KET____DOT__alu_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__1__KET____DOT__alu_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__1__KET____DOT__alu_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__1__KET____DOT__alu_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->threads__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux = VL_RAND_RESET_I(2);
    vlSelf->threads__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_output_mux = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__1__KET____DOT__alu_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__1__KET____DOT__alu_instance__DOT__rt = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__1__KET____DOT__alu_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__1__KET____DOT__lsu_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__1__KET____DOT__lsu_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__1__KET____DOT__lsu_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__1__KET____DOT__lsu_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->threads__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__1__KET____DOT__lsu_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__1__KET____DOT__lsu_instance__DOT__rt = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_valid = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_address = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_ready = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_data = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_valid = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_address = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_data = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_ready = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = VL_RAND_RESET_I(2);
    vlSelf->threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__1__KET____DOT__register_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__1__KET____DOT__register_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__1__KET____DOT__register_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__1__KET____DOT__register_instance__DOT__block_id = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__1__KET____DOT__register_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rd_address = VL_RAND_RESET_I(4);
    vlSelf->threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rs_address = VL_RAND_RESET_I(4);
    vlSelf->threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rt_address = VL_RAND_RESET_I(4);
    vlSelf->threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_input_mux = VL_RAND_RESET_I(2);
    vlSelf->threads__BRA__1__KET____DOT__register_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__1__KET____DOT__register_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__1__KET____DOT__register_instance__DOT__lsu_out = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__1__KET____DOT__register_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__1__KET____DOT__register_instance__DOT__rt = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->threads__BRA__1__KET____DOT__register_instance__DOT__registers[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->threads__BRA__1__KET____DOT__pc_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__1__KET____DOT__pc_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__1__KET____DOT__pc_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__1__KET____DOT__pc_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp = VL_RAND_RESET_I(3);
    vlSelf->threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_pc_mux = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__1__KET____DOT__pc_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__1__KET____DOT__pc_instance__DOT__current_pc = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__1__KET____DOT__pc_instance__DOT__next_pc = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__1__KET____DOT__pc_instance__DOT__nzp = VL_RAND_RESET_I(3);
    vlSelf->threads__BRA__2__KET____DOT__alu_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__2__KET____DOT__alu_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__2__KET____DOT__alu_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__2__KET____DOT__alu_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->threads__BRA__2__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux = VL_RAND_RESET_I(2);
    vlSelf->threads__BRA__2__KET____DOT__alu_instance__DOT__decoded_alu_output_mux = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__2__KET____DOT__alu_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__2__KET____DOT__alu_instance__DOT__rt = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__2__KET____DOT__alu_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__2__KET____DOT__lsu_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__2__KET____DOT__lsu_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__2__KET____DOT__lsu_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__2__KET____DOT__lsu_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->threads__BRA__2__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__2__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__2__KET____DOT__lsu_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__2__KET____DOT__lsu_instance__DOT__rt = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_valid = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_address = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_ready = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_data = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_valid = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_address = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_data = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_ready = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = VL_RAND_RESET_I(2);
    vlSelf->threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_out = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__2__KET____DOT__register_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__2__KET____DOT__register_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__2__KET____DOT__register_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__2__KET____DOT__register_instance__DOT__block_id = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__2__KET____DOT__register_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rd_address = VL_RAND_RESET_I(4);
    vlSelf->threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rs_address = VL_RAND_RESET_I(4);
    vlSelf->threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rt_address = VL_RAND_RESET_I(4);
    vlSelf->threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_input_mux = VL_RAND_RESET_I(2);
    vlSelf->threads__BRA__2__KET____DOT__register_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__2__KET____DOT__register_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__2__KET____DOT__register_instance__DOT__lsu_out = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__2__KET____DOT__register_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__2__KET____DOT__register_instance__DOT__rt = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->threads__BRA__2__KET____DOT__register_instance__DOT__registers[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->threads__BRA__2__KET____DOT__pc_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__2__KET____DOT__pc_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__2__KET____DOT__pc_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__2__KET____DOT__pc_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_nzp = VL_RAND_RESET_I(3);
    vlSelf->threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_pc_mux = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__2__KET____DOT__pc_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__2__KET____DOT__pc_instance__DOT__current_pc = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__2__KET____DOT__pc_instance__DOT__next_pc = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__2__KET____DOT__pc_instance__DOT__nzp = VL_RAND_RESET_I(3);
    vlSelf->threads__BRA__3__KET____DOT__alu_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__3__KET____DOT__alu_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__3__KET____DOT__alu_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__3__KET____DOT__alu_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->threads__BRA__3__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux = VL_RAND_RESET_I(2);
    vlSelf->threads__BRA__3__KET____DOT__alu_instance__DOT__decoded_alu_output_mux = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__3__KET____DOT__alu_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__3__KET____DOT__alu_instance__DOT__rt = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__3__KET____DOT__alu_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__3__KET____DOT__lsu_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__3__KET____DOT__lsu_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__3__KET____DOT__lsu_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__3__KET____DOT__lsu_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->threads__BRA__3__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__3__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__3__KET____DOT__lsu_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__3__KET____DOT__lsu_instance__DOT__rt = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_valid = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_address = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_ready = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_data = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_valid = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_address = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_data = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_ready = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = VL_RAND_RESET_I(2);
    vlSelf->threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_out = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__3__KET____DOT__register_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__3__KET____DOT__register_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__3__KET____DOT__register_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__3__KET____DOT__register_instance__DOT__block_id = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__3__KET____DOT__register_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rd_address = VL_RAND_RESET_I(4);
    vlSelf->threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rs_address = VL_RAND_RESET_I(4);
    vlSelf->threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rt_address = VL_RAND_RESET_I(4);
    vlSelf->threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_input_mux = VL_RAND_RESET_I(2);
    vlSelf->threads__BRA__3__KET____DOT__register_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__3__KET____DOT__register_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__3__KET____DOT__register_instance__DOT__lsu_out = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__3__KET____DOT__register_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__3__KET____DOT__register_instance__DOT__rt = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->threads__BRA__3__KET____DOT__register_instance__DOT__registers[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->threads__BRA__3__KET____DOT__pc_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__3__KET____DOT__pc_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__3__KET____DOT__pc_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__3__KET____DOT__pc_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_nzp = VL_RAND_RESET_I(3);
    vlSelf->threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_pc_mux = VL_RAND_RESET_I(1);
    vlSelf->threads__BRA__3__KET____DOT__pc_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__3__KET____DOT__pc_instance__DOT__current_pc = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__3__KET____DOT__pc_instance__DOT__next_pc = VL_RAND_RESET_I(8);
    vlSelf->threads__BRA__3__KET____DOT__pc_instance__DOT__nzp = VL_RAND_RESET_I(3);
}

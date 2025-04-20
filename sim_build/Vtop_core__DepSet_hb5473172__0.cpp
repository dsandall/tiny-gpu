// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_core.h"

VL_INLINE_OPT void Vtop_core___ico_sequent__TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__0(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_core___ico_sequent__TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__0\n"); );
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

VL_INLINE_OPT void Vtop_core___nba_sequent__TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__0(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_core___nba_sequent__TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fetcher_instance__DOT__fetcher_state;
    __Vdly__fetcher_instance__DOT__fetcher_state = 0;
    CData/*2:0*/ __Vdly__scheduler_instance__DOT__core_state;
    __Vdly__scheduler_instance__DOT__core_state = 0;
    CData/*1:0*/ __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 0;
    CData/*1:0*/ __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 0;
    CData/*1:0*/ __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 0;
    CData/*1:0*/ __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v0;
    __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v0 = 0;
    CData/*7:0*/ __VdlyVal__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16;
    __VdlyVal__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16;
    __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*7:0*/ __VdlyVal__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyVal__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*3:0*/ __VdlyDim0__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyDim0__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17;
    __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*7:0*/ __VdlyVal__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18;
    __VdlyVal__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*3:0*/ __VdlyDim0__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18;
    __VdlyDim0__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18;
    __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*7:0*/ __VdlyVal__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19;
    __VdlyVal__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*3:0*/ __VdlyDim0__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19;
    __VdlyDim0__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19;
    __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v0;
    __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v0 = 0;
    CData/*7:0*/ __VdlyVal__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16;
    __VdlyVal__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16;
    __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*7:0*/ __VdlyVal__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyVal__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*3:0*/ __VdlyDim0__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyDim0__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17;
    __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*7:0*/ __VdlyVal__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18;
    __VdlyVal__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*3:0*/ __VdlyDim0__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18;
    __VdlyDim0__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18;
    __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*7:0*/ __VdlyVal__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19;
    __VdlyVal__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*3:0*/ __VdlyDim0__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19;
    __VdlyDim0__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19;
    __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v0;
    __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v0 = 0;
    CData/*7:0*/ __VdlyVal__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16;
    __VdlyVal__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16;
    __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*7:0*/ __VdlyVal__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyVal__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*3:0*/ __VdlyDim0__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyDim0__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17;
    __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*7:0*/ __VdlyVal__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18;
    __VdlyVal__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*3:0*/ __VdlyDim0__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18;
    __VdlyDim0__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18;
    __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*7:0*/ __VdlyVal__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19;
    __VdlyVal__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*3:0*/ __VdlyDim0__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19;
    __VdlyDim0__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19;
    __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v0;
    __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v0 = 0;
    CData/*7:0*/ __VdlyVal__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16;
    __VdlyVal__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16;
    __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*7:0*/ __VdlyVal__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyVal__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*3:0*/ __VdlyDim0__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyDim0__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17;
    __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*7:0*/ __VdlyVal__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18;
    __VdlyVal__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*3:0*/ __VdlyDim0__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18;
    __VdlyDim0__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18;
    __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*7:0*/ __VdlyVal__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19;
    __VdlyVal__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*3:0*/ __VdlyDim0__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19;
    __VdlyDim0__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19;
    __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19 = 0;
    // Body
    __Vdly__fetcher_instance__DOT__fetcher_state = vlSelfRef.fetcher_instance__DOT__fetcher_state;
    __Vdly__scheduler_instance__DOT__core_state = vlSelfRef.scheduler_instance__DOT__core_state;
    __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state 
        = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state 
        = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state 
        = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state 
        = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state;
    __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v0 = 0U;
    __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16 = 0U;
    __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 = 0U;
    __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18 = 0U;
    __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19 = 0U;
    __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v0 = 0U;
    __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16 = 0U;
    __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 = 0U;
    __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18 = 0U;
    __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19 = 0U;
    __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v0 = 0U;
    __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16 = 0U;
    __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 = 0U;
    __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18 = 0U;
    __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19 = 0U;
    __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v0 = 0U;
    __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16 = 0U;
    __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 = 0U;
    __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18 = 0U;
    __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19 = 0U;
    vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT___sv2v_jump = 0U;
    if (vlSelfRef.reset) {
        __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v0 = 1U;
        __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v0 = 1U;
        __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v0 = 1U;
        __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v0 = 1U;
        vlSelfRef.decoder_instance__DOT__decoded_ret = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_alu_output_mux = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_alu_arithmetic_mux = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_reg_input_mux = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_reg_write_enable = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_nzp = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_rt_address = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_rs_address = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_rd_address = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_nzp_write_enable = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_pc_mux = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_mem_write_enable = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_mem_read_enable = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_immediate = 0U;
        vlSelfRef.scheduler_instance__DOT__current_pc = 0U;
        __Vdly__scheduler_instance__DOT__core_state = 0U;
        vlSelfRef.scheduler_instance__DOT__done = 0U;
        __Vdly__fetcher_instance__DOT__fetcher_state = 0U;
        vlSelfRef.fetcher_instance__DOT__mem_if__DOT__read_valid = 0U;
        vlSelfRef.fetcher_instance__DOT__mem_if__DOT__read_address = 0U;
        vlSelfRef.fetcher_instance__DOT__instruction = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__next_pc = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__next_pc = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__next_pc = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__next_pc = 0U;
        __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_address = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_address = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_data = 0U;
        __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_address = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_address = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_data = 0U;
        __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_out = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_address = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_address = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_data = 0U;
        __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_out = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_address = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_address = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_data = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__nzp = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__nzp = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__nzp = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__nzp = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rs = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rt = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rs = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rt = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rs = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rt = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rs = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rt = 0U;
    } else {
        if ((0U < (IData)(vlSelfRef.thread_count))) {
            __VdlyVal__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16 
                = vlSelfRef.block_id;
            __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16 = 1U;
            if ((6U == (IData)(vlSelfRef.core_state))) {
                if (((IData)(vlSelfRef.decoded_reg_write_enable) 
                     & (0xdU > (IData)(vlSelfRef.decoded_rd_address)))) {
                    if ((0U == (IData)(vlSelfRef.decoded_reg_input_mux))) {
                        __VdlyVal__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 
                            = vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg;
                        __VdlyDim0__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 
                            = vlSelfRef.decoded_rd_address;
                        __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 = 1U;
                    } else if ((1U == (IData)(vlSelfRef.decoded_reg_input_mux))) {
                        __VdlyVal__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18 
                            = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out;
                        __VdlyDim0__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18 
                            = vlSelfRef.decoded_rd_address;
                        __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18 = 1U;
                    } else if ((2U == (IData)(vlSelfRef.decoded_reg_input_mux))) {
                        __VdlyVal__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19 
                            = vlSelfRef.decoded_immediate;
                        __VdlyDim0__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19 
                            = vlSelfRef.decoded_rd_address;
                        __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19 = 1U;
                    }
                }
            }
            if ((5U == (IData)(vlSelfRef.core_state))) {
                vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__next_pc 
                    = (0xffU & ((IData)(vlSelfRef.decoded_pc_mux)
                                 ? ((0U != ((IData)(vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__nzp) 
                                            & (IData)(vlSelfRef.decoded_nzp)))
                                     ? (IData)(vlSelfRef.decoded_immediate)
                                     : ((IData)(1U) 
                                        + (IData)(vlSelfRef.current_pc)))
                                 : ((IData)(1U) + (IData)(vlSelfRef.current_pc))));
            }
            if ((6U == (IData)(vlSelfRef.core_state))) {
                if (vlSelfRef.decoded_nzp_write_enable) {
                    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__nzp 
                        = (7U & (IData)(vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg));
                }
            }
            if ((5U == (IData)(vlSelfRef.core_state))) {
                vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg 
                    = (0xffU & ((IData)(vlSelfRef.decoded_alu_output_mux)
                                 ? (((0U < ((IData)(vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rs) 
                                            - (IData)(vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rt))) 
                                     << 2U) | ((0U 
                                                == 
                                                ((IData)(vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rs) 
                                                 - (IData)(vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rt))) 
                                               << 1U))
                                 : ((2U & (IData)(vlSelfRef.decoded_alu_arithmetic_mux))
                                     ? ((1U & (IData)(vlSelfRef.decoded_alu_arithmetic_mux))
                                         ? VL_DIV_III(8, (IData)(vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rs), (IData)(vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rt))
                                         : ((IData)(vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rs) 
                                            * (IData)(vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rt)))
                                     : ((1U & (IData)(vlSelfRef.decoded_alu_arithmetic_mux))
                                         ? ((IData)(vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rs) 
                                            - (IData)(vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rt))
                                         : ((IData)(vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rs) 
                                            + (IData)(vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rt))))));
            }
            if (vlSelfRef.decoded_mem_read_enable) {
                if ((2U & (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((1U & (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state))) {
                        if ((6U == (IData)(vlSelfRef.core_state))) {
                            __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.data_mem_read_ready))) {
                        vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
                        vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out 
                            = (0xffU & vlSelfRef.data_mem_read_data);
                        __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_valid = 1U;
                    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_address 
                        = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rs;
                    __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
                } else if ((3U == (IData)(vlSelfRef.core_state))) {
                    __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
                }
            }
            if (vlSelfRef.decoded_mem_write_enable) {
                if ((2U & (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((1U & (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state))) {
                        if ((6U == (IData)(vlSelfRef.core_state))) {
                            __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.data_mem_write_ready))) {
                        vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
                        __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_valid = 1U;
                    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_address 
                        = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rs;
                    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_data 
                        = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rt;
                    __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
                } else if ((3U == (IData)(vlSelfRef.core_state))) {
                    __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
                }
            }
            if ((3U == (IData)(vlSelfRef.core_state))) {
                vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rs 
                    = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers
                    [vlSelfRef.decoded_rs_address];
                vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rt 
                    = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers
                    [vlSelfRef.decoded_rt_address];
            }
        }
        if ((1U < (IData)(vlSelfRef.thread_count))) {
            __VdlyVal__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16 
                = vlSelfRef.block_id;
            __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16 = 1U;
            if ((6U == (IData)(vlSelfRef.core_state))) {
                if (((IData)(vlSelfRef.decoded_reg_write_enable) 
                     & (0xdU > (IData)(vlSelfRef.decoded_rd_address)))) {
                    if ((0U == (IData)(vlSelfRef.decoded_reg_input_mux))) {
                        __VdlyVal__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 
                            = vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg;
                        __VdlyDim0__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 
                            = vlSelfRef.decoded_rd_address;
                        __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 = 1U;
                    } else if ((1U == (IData)(vlSelfRef.decoded_reg_input_mux))) {
                        __VdlyVal__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18 
                            = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out;
                        __VdlyDim0__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18 
                            = vlSelfRef.decoded_rd_address;
                        __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18 = 1U;
                    } else if ((2U == (IData)(vlSelfRef.decoded_reg_input_mux))) {
                        __VdlyVal__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19 
                            = vlSelfRef.decoded_immediate;
                        __VdlyDim0__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19 
                            = vlSelfRef.decoded_rd_address;
                        __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19 = 1U;
                    }
                }
            }
            if ((5U == (IData)(vlSelfRef.core_state))) {
                vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__next_pc 
                    = (0xffU & ((IData)(vlSelfRef.decoded_pc_mux)
                                 ? ((0U != ((IData)(vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__nzp) 
                                            & (IData)(vlSelfRef.decoded_nzp)))
                                     ? (IData)(vlSelfRef.decoded_immediate)
                                     : ((IData)(1U) 
                                        + (IData)(vlSelfRef.current_pc)))
                                 : ((IData)(1U) + (IData)(vlSelfRef.current_pc))));
            }
            if ((6U == (IData)(vlSelfRef.core_state))) {
                if (vlSelfRef.decoded_nzp_write_enable) {
                    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__nzp 
                        = (7U & (IData)(vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg));
                }
            }
            if ((5U == (IData)(vlSelfRef.core_state))) {
                vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg 
                    = (0xffU & ((IData)(vlSelfRef.decoded_alu_output_mux)
                                 ? (((0U < ((IData)(vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rs) 
                                            - (IData)(vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rt))) 
                                     << 2U) | ((0U 
                                                == 
                                                ((IData)(vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rs) 
                                                 - (IData)(vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rt))) 
                                               << 1U))
                                 : ((2U & (IData)(vlSelfRef.decoded_alu_arithmetic_mux))
                                     ? ((1U & (IData)(vlSelfRef.decoded_alu_arithmetic_mux))
                                         ? VL_DIV_III(8, (IData)(vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rs), (IData)(vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rt))
                                         : ((IData)(vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rs) 
                                            * (IData)(vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rt)))
                                     : ((1U & (IData)(vlSelfRef.decoded_alu_arithmetic_mux))
                                         ? ((IData)(vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rs) 
                                            - (IData)(vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rt))
                                         : ((IData)(vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rs) 
                                            + (IData)(vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rt))))));
            }
            if (vlSelfRef.decoded_mem_read_enable) {
                if ((2U & (IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((1U & (IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state))) {
                        if ((6U == (IData)(vlSelfRef.core_state))) {
                            __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.data_mem_read_ready))) {
                        vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
                        vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out 
                            = (0xffU & (vlSelfRef.data_mem_read_data 
                                        >> 8U));
                        __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_valid = 1U;
                    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_address 
                        = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rs;
                    __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
                } else if ((3U == (IData)(vlSelfRef.core_state))) {
                    __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
                }
            }
            if (vlSelfRef.decoded_mem_write_enable) {
                if ((2U & (IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((1U & (IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state))) {
                        if ((6U == (IData)(vlSelfRef.core_state))) {
                            __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.data_mem_write_ready))) {
                        vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
                        __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_valid = 1U;
                    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_address 
                        = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rs;
                    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_data 
                        = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rt;
                    __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
                } else if ((3U == (IData)(vlSelfRef.core_state))) {
                    __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
                }
            }
            if ((3U == (IData)(vlSelfRef.core_state))) {
                vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rs 
                    = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers
                    [vlSelfRef.decoded_rs_address];
                vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rt 
                    = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers
                    [vlSelfRef.decoded_rt_address];
            }
        }
        if ((2U < (IData)(vlSelfRef.thread_count))) {
            __VdlyVal__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16 
                = vlSelfRef.block_id;
            __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16 = 1U;
            if ((6U == (IData)(vlSelfRef.core_state))) {
                if (((IData)(vlSelfRef.decoded_reg_write_enable) 
                     & (0xdU > (IData)(vlSelfRef.decoded_rd_address)))) {
                    if ((0U == (IData)(vlSelfRef.decoded_reg_input_mux))) {
                        __VdlyVal__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 
                            = vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg;
                        __VdlyDim0__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 
                            = vlSelfRef.decoded_rd_address;
                        __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 = 1U;
                    } else if ((1U == (IData)(vlSelfRef.decoded_reg_input_mux))) {
                        __VdlyVal__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18 
                            = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_out;
                        __VdlyDim0__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18 
                            = vlSelfRef.decoded_rd_address;
                        __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18 = 1U;
                    } else if ((2U == (IData)(vlSelfRef.decoded_reg_input_mux))) {
                        __VdlyVal__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19 
                            = vlSelfRef.decoded_immediate;
                        __VdlyDim0__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19 
                            = vlSelfRef.decoded_rd_address;
                        __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19 = 1U;
                    }
                }
            }
            if ((5U == (IData)(vlSelfRef.core_state))) {
                vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__next_pc 
                    = (0xffU & ((IData)(vlSelfRef.decoded_pc_mux)
                                 ? ((0U != ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__nzp) 
                                            & (IData)(vlSelfRef.decoded_nzp)))
                                     ? (IData)(vlSelfRef.decoded_immediate)
                                     : ((IData)(1U) 
                                        + (IData)(vlSelfRef.current_pc)))
                                 : ((IData)(1U) + (IData)(vlSelfRef.current_pc))));
            }
            if ((6U == (IData)(vlSelfRef.core_state))) {
                if (vlSelfRef.decoded_nzp_write_enable) {
                    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__nzp 
                        = (7U & (IData)(vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg));
                }
            }
            if ((5U == (IData)(vlSelfRef.core_state))) {
                vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg 
                    = (0xffU & ((IData)(vlSelfRef.decoded_alu_output_mux)
                                 ? (((0U < ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rs) 
                                            - (IData)(vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rt))) 
                                     << 2U) | ((0U 
                                                == 
                                                ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rs) 
                                                 - (IData)(vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rt))) 
                                               << 1U))
                                 : ((2U & (IData)(vlSelfRef.decoded_alu_arithmetic_mux))
                                     ? ((1U & (IData)(vlSelfRef.decoded_alu_arithmetic_mux))
                                         ? VL_DIV_III(8, (IData)(vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rs), (IData)(vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rt))
                                         : ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rs) 
                                            * (IData)(vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rt)))
                                     : ((1U & (IData)(vlSelfRef.decoded_alu_arithmetic_mux))
                                         ? ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rs) 
                                            - (IData)(vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rt))
                                         : ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rs) 
                                            + (IData)(vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rt))))));
            }
            if (vlSelfRef.decoded_mem_read_enable) {
                if ((2U & (IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((1U & (IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state))) {
                        if ((6U == (IData)(vlSelfRef.core_state))) {
                            __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.data_mem_read_ready))) {
                        vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
                        vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_out 
                            = (0xffU & (vlSelfRef.data_mem_read_data 
                                        >> 0x10U));
                        __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_valid = 1U;
                    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_address 
                        = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rs;
                    __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
                } else if ((3U == (IData)(vlSelfRef.core_state))) {
                    __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
                }
            }
            if (vlSelfRef.decoded_mem_write_enable) {
                if ((2U & (IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((1U & (IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state))) {
                        if ((6U == (IData)(vlSelfRef.core_state))) {
                            __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.data_mem_write_ready))) {
                        vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
                        __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_valid = 1U;
                    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_address 
                        = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rs;
                    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_data 
                        = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rt;
                    __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
                } else if ((3U == (IData)(vlSelfRef.core_state))) {
                    __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
                }
            }
            if ((3U == (IData)(vlSelfRef.core_state))) {
                vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rs 
                    = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers
                    [vlSelfRef.decoded_rs_address];
                vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rt 
                    = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers
                    [vlSelfRef.decoded_rt_address];
            }
        }
        if ((3U < (IData)(vlSelfRef.thread_count))) {
            __VdlyVal__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16 
                = vlSelfRef.block_id;
            __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16 = 1U;
            if ((6U == (IData)(vlSelfRef.core_state))) {
                if (((IData)(vlSelfRef.decoded_reg_write_enable) 
                     & (0xdU > (IData)(vlSelfRef.decoded_rd_address)))) {
                    if ((0U == (IData)(vlSelfRef.decoded_reg_input_mux))) {
                        __VdlyVal__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 
                            = vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg;
                        __VdlyDim0__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 
                            = vlSelfRef.decoded_rd_address;
                        __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 = 1U;
                    } else if ((1U == (IData)(vlSelfRef.decoded_reg_input_mux))) {
                        __VdlyVal__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18 
                            = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_out;
                        __VdlyDim0__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18 
                            = vlSelfRef.decoded_rd_address;
                        __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18 = 1U;
                    } else if ((2U == (IData)(vlSelfRef.decoded_reg_input_mux))) {
                        __VdlyVal__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19 
                            = vlSelfRef.decoded_immediate;
                        __VdlyDim0__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19 
                            = vlSelfRef.decoded_rd_address;
                        __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19 = 1U;
                    }
                }
            }
            if ((5U == (IData)(vlSelfRef.core_state))) {
                vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__next_pc 
                    = (0xffU & ((IData)(vlSelfRef.decoded_pc_mux)
                                 ? ((0U != ((IData)(vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__nzp) 
                                            & (IData)(vlSelfRef.decoded_nzp)))
                                     ? (IData)(vlSelfRef.decoded_immediate)
                                     : ((IData)(1U) 
                                        + (IData)(vlSelfRef.current_pc)))
                                 : ((IData)(1U) + (IData)(vlSelfRef.current_pc))));
            }
            if ((6U == (IData)(vlSelfRef.core_state))) {
                if (vlSelfRef.decoded_nzp_write_enable) {
                    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__nzp 
                        = (7U & (IData)(vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg));
                }
            }
            if ((5U == (IData)(vlSelfRef.core_state))) {
                vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg 
                    = (0xffU & ((IData)(vlSelfRef.decoded_alu_output_mux)
                                 ? (((0U < ((IData)(vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rs) 
                                            - (IData)(vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rt))) 
                                     << 2U) | ((0U 
                                                == 
                                                ((IData)(vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rs) 
                                                 - (IData)(vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rt))) 
                                               << 1U))
                                 : ((2U & (IData)(vlSelfRef.decoded_alu_arithmetic_mux))
                                     ? ((1U & (IData)(vlSelfRef.decoded_alu_arithmetic_mux))
                                         ? VL_DIV_III(8, (IData)(vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rs), (IData)(vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rt))
                                         : ((IData)(vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rs) 
                                            * (IData)(vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rt)))
                                     : ((1U & (IData)(vlSelfRef.decoded_alu_arithmetic_mux))
                                         ? ((IData)(vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rs) 
                                            - (IData)(vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rt))
                                         : ((IData)(vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rs) 
                                            + (IData)(vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rt))))));
            }
            if (vlSelfRef.decoded_mem_read_enable) {
                if ((2U & (IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((1U & (IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state))) {
                        if ((6U == (IData)(vlSelfRef.core_state))) {
                            __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                        }
                    } else if ((8U & (IData)(vlSelfRef.data_mem_read_ready))) {
                        vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
                        vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_out 
                            = (vlSelfRef.data_mem_read_data 
                               >> 0x18U);
                        __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_valid = 1U;
                    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_address 
                        = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rs;
                    __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
                } else if ((3U == (IData)(vlSelfRef.core_state))) {
                    __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
                }
            }
            if (vlSelfRef.decoded_mem_write_enable) {
                if ((2U & (IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((1U & (IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state))) {
                        if ((6U == (IData)(vlSelfRef.core_state))) {
                            __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                        }
                    } else if ((8U & (IData)(vlSelfRef.data_mem_write_ready))) {
                        vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
                        __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_valid = 1U;
                    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_address 
                        = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rs;
                    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_data 
                        = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rt;
                    __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
                } else if ((3U == (IData)(vlSelfRef.core_state))) {
                    __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
                }
            }
            if ((3U == (IData)(vlSelfRef.core_state))) {
                vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rs 
                    = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers
                    [vlSelfRef.decoded_rs_address];
                vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rt 
                    = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers
                    [vlSelfRef.decoded_rt_address];
            }
        }
        if ((2U == (IData)(vlSelfRef.core_state))) {
            vlSelfRef.decoder_instance__DOT__decoded_ret = 0U;
            vlSelfRef.decoder_instance__DOT__decoded_alu_output_mux = 0U;
            vlSelfRef.decoder_instance__DOT__decoded_alu_arithmetic_mux = 0U;
            vlSelfRef.decoder_instance__DOT__decoded_reg_input_mux = 0U;
            vlSelfRef.decoder_instance__DOT__decoded_reg_write_enable = 0U;
            vlSelfRef.decoder_instance__DOT__decoded_nzp 
                = (7U & ((IData)(vlSelfRef.instruction) 
                         >> 9U));
            vlSelfRef.decoder_instance__DOT__decoded_rt_address 
                = (0xfU & (IData)(vlSelfRef.instruction));
            vlSelfRef.decoder_instance__DOT__decoded_rs_address 
                = (0xfU & ((IData)(vlSelfRef.instruction) 
                           >> 4U));
            vlSelfRef.decoder_instance__DOT__decoded_rd_address 
                = (0xfU & ((IData)(vlSelfRef.instruction) 
                           >> 8U));
            vlSelfRef.decoder_instance__DOT__decoded_nzp_write_enable = 0U;
            vlSelfRef.decoder_instance__DOT__decoded_pc_mux = 0U;
            vlSelfRef.decoder_instance__DOT__decoded_mem_write_enable = 0U;
            if ((1U & (~ ((((((((0U == (0xfU & ((IData)(vlSelfRef.instruction) 
                                                >> 0xcU))) 
                                | (1U == (0xfU & ((IData)(vlSelfRef.instruction) 
                                                  >> 0xcU)))) 
                               | (2U == (0xfU & ((IData)(vlSelfRef.instruction) 
                                                 >> 0xcU)))) 
                              | (3U == (0xfU & ((IData)(vlSelfRef.instruction) 
                                                >> 0xcU)))) 
                             | (4U == (0xfU & ((IData)(vlSelfRef.instruction) 
                                               >> 0xcU)))) 
                            | (5U == (0xfU & ((IData)(vlSelfRef.instruction) 
                                              >> 0xcU)))) 
                           | (6U == (0xfU & ((IData)(vlSelfRef.instruction) 
                                             >> 0xcU)))) 
                          | (7U == (0xfU & ((IData)(vlSelfRef.instruction) 
                                            >> 0xcU))))))) {
                if ((8U != (0xfU & ((IData)(vlSelfRef.instruction) 
                                    >> 0xcU)))) {
                    if ((9U != (0xfU & ((IData)(vlSelfRef.instruction) 
                                        >> 0xcU)))) {
                        if ((0xfU == (0xfU & ((IData)(vlSelfRef.instruction) 
                                              >> 0xcU)))) {
                            vlSelfRef.decoder_instance__DOT__decoded_ret = 1U;
                        }
                    }
                }
                if ((8U == (0xfU & ((IData)(vlSelfRef.instruction) 
                                    >> 0xcU)))) {
                    vlSelfRef.decoder_instance__DOT__decoded_mem_write_enable = 1U;
                }
            }
            vlSelfRef.decoder_instance__DOT__decoded_mem_read_enable = 0U;
            if (((((((((0U == (0xfU & ((IData)(vlSelfRef.instruction) 
                                       >> 0xcU))) | 
                       (1U == (0xfU & ((IData)(vlSelfRef.instruction) 
                                       >> 0xcU)))) 
                      | (2U == (0xfU & ((IData)(vlSelfRef.instruction) 
                                        >> 0xcU)))) 
                     | (3U == (0xfU & ((IData)(vlSelfRef.instruction) 
                                       >> 0xcU)))) 
                    | (4U == (0xfU & ((IData)(vlSelfRef.instruction) 
                                      >> 0xcU)))) | 
                   (5U == (0xfU & ((IData)(vlSelfRef.instruction) 
                                   >> 0xcU)))) | (6U 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelfRef.instruction) 
                                                      >> 0xcU)))) 
                 | (7U == (0xfU & ((IData)(vlSelfRef.instruction) 
                                   >> 0xcU))))) {
                if ((0U != (0xfU & ((IData)(vlSelfRef.instruction) 
                                    >> 0xcU)))) {
                    if ((1U != (0xfU & ((IData)(vlSelfRef.instruction) 
                                        >> 0xcU)))) {
                        if ((2U == (0xfU & ((IData)(vlSelfRef.instruction) 
                                            >> 0xcU)))) {
                            vlSelfRef.decoder_instance__DOT__decoded_alu_output_mux = 1U;
                            vlSelfRef.decoder_instance__DOT__decoded_nzp_write_enable = 1U;
                        }
                        if ((2U != (0xfU & ((IData)(vlSelfRef.instruction) 
                                            >> 0xcU)))) {
                            if ((3U == (0xfU & ((IData)(vlSelfRef.instruction) 
                                                >> 0xcU)))) {
                                vlSelfRef.decoder_instance__DOT__decoded_alu_arithmetic_mux = 0U;
                                vlSelfRef.decoder_instance__DOT__decoded_reg_input_mux = 0U;
                            } else if ((4U == (0xfU 
                                               & ((IData)(vlSelfRef.instruction) 
                                                  >> 0xcU)))) {
                                vlSelfRef.decoder_instance__DOT__decoded_alu_arithmetic_mux = 1U;
                                vlSelfRef.decoder_instance__DOT__decoded_reg_input_mux = 0U;
                            } else if ((5U == (0xfU 
                                               & ((IData)(vlSelfRef.instruction) 
                                                  >> 0xcU)))) {
                                vlSelfRef.decoder_instance__DOT__decoded_alu_arithmetic_mux = 2U;
                                vlSelfRef.decoder_instance__DOT__decoded_reg_input_mux = 0U;
                            } else if ((6U == (0xfU 
                                               & ((IData)(vlSelfRef.instruction) 
                                                  >> 0xcU)))) {
                                vlSelfRef.decoder_instance__DOT__decoded_alu_arithmetic_mux = 3U;
                                vlSelfRef.decoder_instance__DOT__decoded_reg_input_mux = 0U;
                            } else {
                                vlSelfRef.decoder_instance__DOT__decoded_reg_input_mux = 1U;
                            }
                            vlSelfRef.decoder_instance__DOT__decoded_reg_write_enable = 1U;
                            if ((3U != (0xfU & ((IData)(vlSelfRef.instruction) 
                                                >> 0xcU)))) {
                                if ((4U != (0xfU & 
                                            ((IData)(vlSelfRef.instruction) 
                                             >> 0xcU)))) {
                                    if ((5U != (0xfU 
                                                & ((IData)(vlSelfRef.instruction) 
                                                   >> 0xcU)))) {
                                        if ((6U != 
                                             (0xfU 
                                              & ((IData)(vlSelfRef.instruction) 
                                                 >> 0xcU)))) {
                                            vlSelfRef.decoder_instance__DOT__decoded_mem_read_enable = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((1U == (0xfU & ((IData)(vlSelfRef.instruction) 
                                        >> 0xcU)))) {
                        vlSelfRef.decoder_instance__DOT__decoded_pc_mux = 1U;
                    }
                }
            } else if ((8U != (0xfU & ((IData)(vlSelfRef.instruction) 
                                       >> 0xcU)))) {
                if ((9U == (0xfU & ((IData)(vlSelfRef.instruction) 
                                    >> 0xcU)))) {
                    vlSelfRef.decoder_instance__DOT__decoded_reg_input_mux = 2U;
                    vlSelfRef.decoder_instance__DOT__decoded_reg_write_enable = 1U;
                }
            }
            vlSelfRef.decoder_instance__DOT__decoded_immediate 
                = (0xffU & (IData)(vlSelfRef.instruction));
        }
        if ((4U & (IData)(vlSelfRef.scheduler_instance__DOT__core_state))) {
            if ((2U & (IData)(vlSelfRef.scheduler_instance__DOT__core_state))) {
                if ((1U & (~ (IData)(vlSelfRef.scheduler_instance__DOT__core_state)))) {
                    if (vlSelfRef.decoded_ret) {
                        vlSelfRef.scheduler_instance__DOT__done = 1U;
                        __Vdly__scheduler_instance__DOT__core_state = 7U;
                    } else {
                        vlSelfRef.scheduler_instance__DOT__current_pc 
                            = (vlSelfRef.next_pc >> 0x18U);
                        __Vdly__scheduler_instance__DOT__core_state = 1U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.scheduler_instance__DOT__core_state))) {
                __Vdly__scheduler_instance__DOT__core_state = 6U;
            } else {
                vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__any_lsu_waiting = 0U;
                if ((2U > (IData)(vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT___sv2v_jump))) {
                    vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT___sv2v_jump = 0U;
                    vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__sv2v_autoblock_3__DOT__sv2v_autoblock_4__DOT___sv2v_value_on_break = 0U;
                    if (((1U == (3U & (IData)(vlSelfRef.lsu_state))) 
                         | (2U == (3U & (IData)(vlSelfRef.lsu_state))))) {
                        vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__any_lsu_waiting = 1U;
                        vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT___sv2v_jump = 2U;
                    }
                }
                if ((2U > (IData)(vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT___sv2v_jump))) {
                    vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT___sv2v_jump = 0U;
                    vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__sv2v_autoblock_3__DOT__sv2v_autoblock_4__DOT___sv2v_value_on_break = 1U;
                    if (((1U == (3U & ((IData)(vlSelfRef.lsu_state) 
                                       >> 2U))) | (2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.lsu_state) 
                                                       >> 2U))))) {
                        vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__any_lsu_waiting = 1U;
                        vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT___sv2v_jump = 2U;
                    }
                }
                if ((2U > (IData)(vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT___sv2v_jump))) {
                    vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT___sv2v_jump = 0U;
                    vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__sv2v_autoblock_3__DOT__sv2v_autoblock_4__DOT___sv2v_value_on_break = 2U;
                    if (((1U == (3U & ((IData)(vlSelfRef.lsu_state) 
                                       >> 4U))) | (2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.lsu_state) 
                                                       >> 4U))))) {
                        vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__any_lsu_waiting = 1U;
                        vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT___sv2v_jump = 2U;
                    }
                }
                if ((2U > (IData)(vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT___sv2v_jump))) {
                    vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT___sv2v_jump = 0U;
                    vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__sv2v_autoblock_3__DOT__sv2v_autoblock_4__DOT___sv2v_value_on_break = 3U;
                    if (((1U == (3U & ((IData)(vlSelfRef.lsu_state) 
                                       >> 6U))) | (2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.lsu_state) 
                                                       >> 6U))))) {
                        vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__any_lsu_waiting = 1U;
                        vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT___sv2v_jump = 2U;
                    }
                }
                vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__sv2v_autoblock_3__DOT__i = 1U;
                vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__sv2v_autoblock_3__DOT__i = 2U;
                vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__sv2v_autoblock_3__DOT__i = 3U;
                vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__sv2v_autoblock_3__DOT__i = 4U;
                if ((2U <= (IData)(vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT___sv2v_jump))) {
                    vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__sv2v_autoblock_3__DOT__i 
                        = vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__sv2v_autoblock_3__DOT__sv2v_autoblock_4__DOT___sv2v_value_on_break;
                }
                if ((3U != (IData)(vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT___sv2v_jump))) {
                    vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT___sv2v_jump = 0U;
                }
                if ((0U == (IData)(vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT___sv2v_jump))) {
                    if ((1U & (~ (IData)(vlSelfRef.scheduler_instance__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__any_lsu_waiting)))) {
                        __Vdly__scheduler_instance__DOT__core_state = 5U;
                    }
                }
            }
        } else if ((2U & (IData)(vlSelfRef.scheduler_instance__DOT__core_state))) {
            __Vdly__scheduler_instance__DOT__core_state 
                = ((1U & (IData)(vlSelfRef.scheduler_instance__DOT__core_state))
                    ? 4U : 3U);
        } else if ((1U & (IData)(vlSelfRef.scheduler_instance__DOT__core_state))) {
            if ((2U == (IData)(vlSelfRef.fetcher_state))) {
                __Vdly__scheduler_instance__DOT__core_state = 2U;
            }
        } else if (vlSelfRef.start) {
            __Vdly__scheduler_instance__DOT__core_state = 1U;
        }
        if ((0U == (IData)(vlSelfRef.fetcher_instance__DOT__fetcher_state))) {
            if ((1U == (IData)(vlSelfRef.core_state))) {
                __Vdly__fetcher_instance__DOT__fetcher_state = 1U;
                vlSelfRef.fetcher_instance__DOT__mem_if__DOT__read_valid = 1U;
                vlSelfRef.fetcher_instance__DOT__mem_if__DOT__read_address 
                    = vlSelfRef.current_pc;
            }
        } else if ((1U == (IData)(vlSelfRef.fetcher_instance__DOT__fetcher_state))) {
            if (vlSelfRef.fetcher_instance__DOT__mem_if__DOT__read_ready) {
                __Vdly__fetcher_instance__DOT__fetcher_state = 2U;
                vlSelfRef.fetcher_instance__DOT__instruction 
                    = vlSelfRef.fetcher_instance__DOT__mem_if__DOT__read_data;
                vlSelfRef.fetcher_instance__DOT__mem_if__DOT__read_valid = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.fetcher_instance__DOT__fetcher_state))) {
            if ((2U == (IData)(vlSelfRef.core_state))) {
                __Vdly__fetcher_instance__DOT__fetcher_state = 0U;
            }
        }
    }
    vlSelfRef.scheduler_instance__DOT__core_state = __Vdly__scheduler_instance__DOT__core_state;
    vlSelfRef.fetcher_instance__DOT__fetcher_state 
        = __Vdly__fetcher_instance__DOT__fetcher_state;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_ret 
        = vlSelfRef.decoder_instance__DOT__decoded_ret;
    vlSelfRef.decoded_ret = vlSelfRef.decoder_instance__DOT__decoded_ret;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_alu_output_mux 
        = vlSelfRef.decoder_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_alu_arithmetic_mux 
        = vlSelfRef.decoder_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_reg_input_mux 
        = vlSelfRef.decoder_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.decoded_reg_input_mux = vlSelfRef.decoder_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_reg_write_enable 
        = vlSelfRef.decoder_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.decoded_reg_write_enable = vlSelfRef.decoder_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_nzp 
        = vlSelfRef.decoder_instance__DOT__decoded_nzp;
    vlSelfRef.decoded_nzp = vlSelfRef.decoder_instance__DOT__decoded_nzp;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_rt_address 
        = vlSelfRef.decoder_instance__DOT__decoded_rt_address;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_rs_address 
        = vlSelfRef.decoder_instance__DOT__decoded_rs_address;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_rd_address 
        = vlSelfRef.decoder_instance__DOT__decoded_rd_address;
    vlSelfRef.decoded_rd_address = vlSelfRef.decoder_instance__DOT__decoded_rd_address;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_nzp_write_enable 
        = vlSelfRef.decoder_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_pc_mux 
        = vlSelfRef.decoder_instance__DOT__decoded_pc_mux;
    vlSelfRef.decoded_pc_mux = vlSelfRef.decoder_instance__DOT__decoded_pc_mux;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_mem_write_enable 
        = vlSelfRef.decoder_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_mem_read_enable 
        = vlSelfRef.decoder_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.sv2v_tmp_decoder_instance_decoded_immediate 
        = vlSelfRef.decoder_instance__DOT__decoded_immediate;
    vlSelfRef.decoded_immediate = vlSelfRef.decoder_instance__DOT__decoded_immediate;
    vlSelfRef.done = vlSelfRef.scheduler_instance__DOT__done;
    vlSelfRef.sv2v_tmp_scheduler_instance_current_pc 
        = vlSelfRef.scheduler_instance__DOT__current_pc;
    vlSelfRef.current_pc = vlSelfRef.scheduler_instance__DOT__current_pc;
    vlSelfRef.sv2v_tmp_scheduler_instance_core_state 
        = vlSelfRef.scheduler_instance__DOT__core_state;
    vlSelfRef.sv2v_tmp_fetcher_instance_fetcher_state 
        = vlSelfRef.fetcher_instance__DOT__fetcher_state;
    vlSelfRef.fetcher_state = vlSelfRef.fetcher_instance__DOT__fetcher_state;
    vlSelfRef.sv2v_tmp_fetcher_instance_instruction 
        = vlSelfRef.fetcher_instance__DOT__instruction;
    vlSelfRef.instruction = vlSelfRef.fetcher_instance__DOT__instruction;
    vlSelfRef.fetcher_instance__DOT__sv2v_tmp_AF88B 
        = vlSelfRef.fetcher_instance__DOT__mem_if__DOT__read_valid;
    vlSelfRef.fetcher_instance__DOT__sv2v_tmp_9FB2F 
        = vlSelfRef.fetcher_instance__DOT__mem_if__DOT__read_address;
    vlSelfRef.next_pc = ((((IData)(vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__next_pc) 
                           << 0x18U) | ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__next_pc) 
                                        << 0x10U)) 
                         | (((IData)(vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__next_pc) 
                             << 8U) | (IData)(vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__next_pc)));
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state 
        = __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state 
        = __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state 
        = __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state 
        = __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.decoded_mem_read_enable = vlSelfRef.decoder_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.decoded_mem_write_enable = vlSelfRef.decoder_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.scheduler_instance__DOT__decoded_ret 
        = vlSelfRef.decoded_ret;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.decoded_reg_input_mux;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.decoded_reg_input_mux;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.decoded_reg_input_mux;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.decoded_reg_input_mux;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.decoded_reg_write_enable;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.decoded_reg_write_enable;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.decoded_reg_write_enable;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.decoded_reg_write_enable;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.decoded_nzp;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.decoded_nzp;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.decoded_nzp;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.decoded_nzp;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.decoded_rd_address;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.decoded_rd_address;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.decoded_rd_address;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.decoded_rd_address;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.decoded_pc_mux;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.decoded_pc_mux;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.decoded_pc_mux;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.decoded_pc_mux;
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
    vlSelfRef.fetcher_instance__DOT__current_pc = vlSelfRef.current_pc;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.current_pc;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.current_pc;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.current_pc;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.current_pc;
    vlSelfRef.scheduler_instance__DOT__fetcher_state 
        = vlSelfRef.fetcher_state;
    vlSelfRef.decoder_instance__DOT__instruction = vlSelfRef.instruction;
    vlSelfRef.fetcher_instance__DOT__mem_read_valid 
        = vlSelfRef.fetcher_instance__DOT__sv2v_tmp_AF88B;
    vlSelfRef.program_mem_read_valid = vlSelfRef.fetcher_instance__DOT__sv2v_tmp_AF88B;
    vlSelfRef.fetcher_instance__DOT__mem_read_address 
        = vlSelfRef.fetcher_instance__DOT__sv2v_tmp_9FB2F;
    vlSelfRef.program_mem_read_address = vlSelfRef.fetcher_instance__DOT__sv2v_tmp_9FB2F;
    vlSelfRef.scheduler_instance__DOT__next_pc = vlSelfRef.next_pc;
    vlSelfRef.decoded_nzp_write_enable = vlSelfRef.decoder_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.threads__BRA__0__KET____DOT__sv2v_tmp_lsu_instance_lsu_state 
        = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.threads__BRA__0__KET____DOT__sv2v_tmp_lsu_instance_lsu_out 
        = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.lsu_out[0U] = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.threads__BRA__1__KET____DOT__sv2v_tmp_lsu_instance_lsu_state 
        = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.threads__BRA__1__KET____DOT__sv2v_tmp_lsu_instance_lsu_out 
        = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.lsu_out[1U] = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.threads__BRA__2__KET____DOT__sv2v_tmp_lsu_instance_lsu_state 
        = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.threads__BRA__2__KET____DOT__sv2v_tmp_lsu_instance_lsu_out 
        = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.lsu_out[2U] = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.threads__BRA__3__KET____DOT__sv2v_tmp_lsu_instance_lsu_state 
        = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.lsu_state = ((((IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state) 
                             << 6U) | ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state) 
                                       << 4U)) | (((IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state) 
                                                   << 2U) 
                                                  | (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state)));
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.threads__BRA__3__KET____DOT__sv2v_tmp_lsu_instance_lsu_out 
        = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.lsu_out[3U] = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_out;
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
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.decoded_nzp_write_enable;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.decoded_nzp_write_enable;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.decoded_nzp_write_enable;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.decoded_nzp_write_enable;
    vlSelfRef.scheduler_instance__DOT__lsu_state = vlSelfRef.lsu_state;
    vlSelfRef.decoded_alu_output_mux = vlSelfRef.decoder_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.decoded_alu_arithmetic_mux = vlSelfRef.decoder_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.alu_out[0U] = vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.alu_out[1U] = vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.alu_out[2U] = vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.decoded_alu_output_mux;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.decoded_alu_output_mux;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.decoded_alu_output_mux;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.decoded_alu_output_mux;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.decoded_alu_arithmetic_mux;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.decoded_alu_arithmetic_mux;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.decoded_alu_arithmetic_mux;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.decoded_alu_arithmetic_mux;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.alu_out[3U] = vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg;
    if (__VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v0) {
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[0U] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[1U] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[2U] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[3U] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[4U] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[5U] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[6U] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[7U] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[8U] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[9U] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[0xaU] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[0xbU] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[0xcU] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[0xdU] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[0xeU] = 4U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[0xfU] = 0U;
    }
    if (__VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16) {
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[0xdU] 
            = __VdlyVal__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16;
    }
    if (__VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17) {
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[__VdlyDim0__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17] 
            = __VdlyVal__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17;
    }
    if (__VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18) {
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[__VdlyDim0__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18] 
            = __VdlyVal__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18;
    }
    if (__VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19) {
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[__VdlyDim0__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19] 
            = __VdlyVal__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19;
    }
    if (__VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v0) {
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[0U] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[1U] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[2U] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[3U] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[4U] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[5U] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[6U] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[7U] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[8U] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[9U] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[0xaU] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[0xbU] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[0xcU] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[0xdU] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[0xeU] = 4U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[0xfU] = 1U;
    }
    if (__VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16) {
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[0xdU] 
            = __VdlyVal__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16;
    }
    if (__VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17) {
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[__VdlyDim0__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17] 
            = __VdlyVal__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17;
    }
    if (__VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18) {
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[__VdlyDim0__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18] 
            = __VdlyVal__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18;
    }
    if (__VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19) {
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[__VdlyDim0__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19] 
            = __VdlyVal__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19;
    }
    if (__VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v0) {
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[0U] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[1U] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[2U] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[3U] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[4U] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[5U] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[6U] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[7U] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[8U] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[9U] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[0xaU] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[0xbU] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[0xcU] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[0xdU] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[0xeU] = 4U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[0xfU] = 2U;
    }
    if (__VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16) {
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[0xdU] 
            = __VdlyVal__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16;
    }
    if (__VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17) {
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[__VdlyDim0__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17] 
            = __VdlyVal__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17;
    }
    if (__VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18) {
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[__VdlyDim0__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18] 
            = __VdlyVal__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18;
    }
    if (__VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19) {
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[__VdlyDim0__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19] 
            = __VdlyVal__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19;
    }
    if (__VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v0) {
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[0U] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[1U] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[2U] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[3U] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[4U] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[5U] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[6U] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[7U] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[8U] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[9U] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[0xaU] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[0xbU] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[0xcU] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[0xdU] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[0xeU] = 4U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[0xfU] = 3U;
    }
    if (__VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16) {
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[0xdU] 
            = __VdlyVal__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16;
    }
    if (__VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17) {
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[__VdlyDim0__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17] 
            = __VdlyVal__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17;
    }
    if (__VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18) {
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[__VdlyDim0__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18] 
            = __VdlyVal__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18;
    }
    if (__VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19) {
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[__VdlyDim0__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19] 
            = __VdlyVal__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19;
    }
    vlSelfRef.decoded_rs_address = vlSelfRef.decoder_instance__DOT__decoded_rs_address;
    vlSelfRef.decoded_rt_address = vlSelfRef.decoder_instance__DOT__decoded_rt_address;
    vlSelfRef.core_state = vlSelfRef.scheduler_instance__DOT__core_state;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.threads__BRA__0__KET____DOT__sv2v_tmp_register_instance_rs 
        = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.rs[0U] = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.threads__BRA__0__KET____DOT__sv2v_tmp_register_instance_rt 
        = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.rt[0U] = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.threads__BRA__1__KET____DOT__sv2v_tmp_register_instance_rs 
        = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.rs[1U] = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.threads__BRA__1__KET____DOT__sv2v_tmp_register_instance_rt 
        = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.rt[1U] = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.threads__BRA__2__KET____DOT__sv2v_tmp_register_instance_rs 
        = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.rs[2U] = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.threads__BRA__2__KET____DOT__sv2v_tmp_register_instance_rt 
        = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.rt[2U] = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rt;
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
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.threads__BRA__3__KET____DOT__sv2v_tmp_register_instance_rs 
        = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.rs[3U] = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.threads__BRA__3__KET____DOT__sv2v_tmp_register_instance_rt 
        = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.rt[3U] = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rt;
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

VL_INLINE_OPT void Vtop_core___nba_sequent__TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__1(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_core___nba_sequent__TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_data 
        = (0xffU & (vlSelfRef.data_mem_read_data >> 0U));
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_data 
        = (0xffU & (vlSelfRef.data_mem_read_data >> 8U));
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_data 
        = (0xffU & (vlSelfRef.data_mem_read_data >> 0x10U));
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_data 
        = (0xffU & (vlSelfRef.data_mem_read_data >> 0x18U));
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
    vlSelfRef.scheduler_instance__DOT__start = vlSelfRef.start;
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
    vlSelfRef.fetcher_instance__DOT__mem_read_ready 
        = vlSelfRef.program_mem_read_ready;
    vlSelfRef.fetcher_instance__DOT__mem_if__DOT__read_ready 
        = vlSelfRef.program_mem_read_ready;
    vlSelfRef.fetcher_instance__DOT__mem_read_data 
        = vlSelfRef.program_mem_read_data;
    vlSelfRef.fetcher_instance__DOT__mem_if__DOT__read_data 
        = vlSelfRef.program_mem_read_data;
}

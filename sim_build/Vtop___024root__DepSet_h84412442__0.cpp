// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop_core___ico_sequent__TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__0(Vtop_core* vlSelf);
void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        Vtop_core___ico_sequent__TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__0((&vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance));
        Vtop_core___ico_sequent__TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__0((&vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance));
        Vtop___024root___ico_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_valid 
        = vlSelfRef.gpu__DOT__lsu_read_valid;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_address 
        = vlSelfRef.gpu__DOT__lsu_read_address;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_valid 
        = vlSelfRef.gpu__DOT__lsu_write_valid;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_address 
        = vlSelfRef.gpu__DOT__lsu_write_address;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_data 
        = vlSelfRef.gpu__DOT__lsu_write_data;
    vlSelfRef.done = vlSelfRef.gpu__DOT__dispatch_instance__DOT__done;
    vlSelfRef.gpu__DOT__done = vlSelfRef.gpu__DOT__dispatch_instance__DOT__done;
    vlSelfRef.program_mem_read_valid = vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_valid;
    vlSelfRef.gpu__DOT__program_mem_read_valid = vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_valid;
    vlSelfRef.program_mem_read_address = vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__program_mem_read_address = vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_address;
    vlSelfRef.data_mem_read_valid = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid;
    vlSelfRef.gpu__DOT__data_mem_read_valid = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid;
    vlSelfRef.data_mem_read_address = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__data_mem_read_address = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_address;
    vlSelfRef.data_mem_write_valid = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid;
    vlSelfRef.gpu__DOT__data_mem_write_valid = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid;
    vlSelfRef.data_mem_write_address = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address;
    vlSelfRef.gpu__DOT__data_mem_write_address = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address;
    vlSelfRef.data_mem_write_data = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data;
    vlSelfRef.gpu__DOT__data_mem_write_data = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data;
    vlSelfRef.gpu__DOT__lsu_read_ready = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready;
    vlSelfRef.gpu__DOT__sv2v_tmp_data_memory_controller_consumer_read_ready 
        = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready;
    vlSelfRef.gpu__DOT__lsu_read_data = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data;
    vlSelfRef.gpu__DOT__sv2v_tmp_data_memory_controller_consumer_read_data 
        = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data;
    vlSelfRef.gpu__DOT__lsu_write_ready = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready;
    vlSelfRef.gpu__DOT__sv2v_tmp_data_memory_controller_consumer_write_ready 
        = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready;
    vlSelfRef.gpu__DOT__sv2v_tmp_dispatch_instance_core_reset 
        = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset;
    vlSelfRef.gpu__DOT__core_reset = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset;
    vlSelfRef.gpu__DOT__sv2v_tmp_dispatch_instance_core_start 
        = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start;
    vlSelfRef.gpu__DOT__core_start = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start;
    vlSelfRef.gpu__DOT__sv2v_tmp_dispatch_instance_core_block_id 
        = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id;
    vlSelfRef.gpu__DOT__core_block_id = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id;
    vlSelfRef.gpu__DOT__sv2v_tmp_dispatch_instance_core_thread_count 
        = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count;
    vlSelfRef.gpu__DOT__core_thread_count = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count;
    vlSelfRef.gpu__DOT__sv2v_tmp_program_memory_controller_consumer_read_ready 
        = vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready;
    vlSelfRef.gpu__DOT__fetcher_read_ready = vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready;
    vlSelfRef.gpu__DOT__sv2v_tmp_program_memory_controller_consumer_read_data 
        = vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_data;
    vlSelfRef.gpu__DOT__fetcher_read_data = vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_data;
    vlSelfRef.gpu__DOT__dcr_instance__DOT__thread_count 
        = vlSelfRef.gpu__DOT__dcr_instance__DOT__device_conrol_register;
    vlSelfRef.gpu__DOT__dispatch_instance__DOT__total_blocks 
        = (0xffU & (((IData)(3U) + (IData)(vlSelfRef.gpu__DOT__dcr_instance__DOT__device_conrol_register)) 
                    >> 2U));
    vlSelfRef.gpu__DOT__start = vlSelfRef.start;
    vlSelfRef.gpu__DOT__device_control_write_enable 
        = vlSelfRef.device_control_write_enable;
    vlSelfRef.gpu__DOT__device_control_data = vlSelfRef.device_control_data;
    vlSelfRef.gpu__DOT__program_mem_read_ready = vlSelfRef.program_mem_read_ready;
    vlSelfRef.gpu__DOT__program_mem_read_data = vlSelfRef.program_mem_read_data;
    vlSelfRef.gpu__DOT__data_mem_read_ready = vlSelfRef.data_mem_read_ready;
    vlSelfRef.gpu__DOT__data_mem_read_data = vlSelfRef.data_mem_read_data;
    vlSelfRef.gpu__DOT__data_mem_write_ready = vlSelfRef.data_mem_write_ready;
    vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.start 
        = (1U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start));
    vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.start 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start) 
                 >> 1U));
    vlSelfRef.gpu__DOT__thread_count = vlSelfRef.gpu__DOT__dcr_instance__DOT__device_conrol_register;
    vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.program_mem_read_data 
        = (0xffffU & vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_data);
    vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.program_mem_read_ready 
        = (1U & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready));
    vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.program_mem_read_data 
        = (vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_data 
           >> 0x10U);
    vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.program_mem_read_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready) 
                 >> 1U));
    vlSelfRef.gpu__DOT__clk = vlSelfRef.clk;
    vlSelfRef.gpu__DOT__reset = vlSelfRef.reset;
    vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_ready 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready;
    vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_data 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data;
    vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_ready 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready;
    vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.block_id 
        = (0xffU & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id));
    vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_ready 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready;
    vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_data 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data;
    vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_ready 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready;
    vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.block_id 
        = (0xffU & ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id) 
                    >> 8U));
    vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.thread_count 
        = (7U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count));
    vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.thread_count 
        = (7U & ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count) 
                 >> 3U));
    vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.reset 
        = (1U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset));
    vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.reset 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset) 
                 >> 1U));
    vlSelfRef.gpu__DOT__dispatch_instance__DOT__start 
        = vlSelfRef.gpu__DOT__start;
    vlSelfRef.gpu__DOT__dcr_instance__DOT__device_control_write_enable 
        = vlSelfRef.gpu__DOT__device_control_write_enable;
    vlSelfRef.gpu__DOT__dcr_instance__DOT__device_control_data 
        = vlSelfRef.gpu__DOT__device_control_data;
    vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_ready 
        = vlSelfRef.gpu__DOT__program_mem_read_ready;
    vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_data 
        = vlSelfRef.gpu__DOT__program_mem_read_data;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_ready 
        = vlSelfRef.gpu__DOT__data_mem_read_ready;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_data 
        = vlSelfRef.gpu__DOT__data_mem_read_data;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_ready 
        = vlSelfRef.gpu__DOT__data_mem_write_ready;
    vlSelfRef.gpu__DOT__dispatch_instance__DOT__thread_count 
        = vlSelfRef.gpu__DOT__thread_count;
    vlSelfRef.gpu__DOT__dcr_instance__DOT__clk = vlSelfRef.gpu__DOT__clk;
    vlSelfRef.gpu__DOT__dispatch_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__clk;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__clk 
        = vlSelfRef.gpu__DOT__clk;
    vlSelfRef.gpu__DOT__program_memory_controller__DOT__clk 
        = vlSelfRef.gpu__DOT__clk;
    vlSelfRef.gpu__DOT__dcr_instance__DOT__reset = vlSelfRef.gpu__DOT__reset;
    vlSelfRef.gpu__DOT__dispatch_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__reset;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__reset 
        = vlSelfRef.gpu__DOT__reset;
    vlSelfRef.gpu__DOT__program_memory_controller__DOT__reset 
        = vlSelfRef.gpu__DOT__reset;
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_valid 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_valid;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__sv2v_tmp_core_instance_data_mem_read_valid 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_valid;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__sv2v_tmp_core_instance_data_mem_read_address 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_valid 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_valid;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__sv2v_tmp_core_instance_data_mem_write_valid 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_valid;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__sv2v_tmp_core_instance_data_mem_write_address 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_data;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__sv2v_tmp_core_instance_data_mem_write_data 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_data;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__sv2v_tmp_core_instance_done 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.done;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__sv2v_tmp_core_instance_program_mem_read_valid 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.program_mem_read_valid;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__sv2v_tmp_core_instance_program_mem_read_address 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.program_mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_valid 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_valid;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__sv2v_tmp_core_instance_data_mem_read_valid 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_valid;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__sv2v_tmp_core_instance_data_mem_read_address 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_valid 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_valid;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__sv2v_tmp_core_instance_data_mem_write_valid 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_valid;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__sv2v_tmp_core_instance_data_mem_write_address 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_data;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__sv2v_tmp_core_instance_data_mem_write_data 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_data;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__sv2v_tmp_core_instance_done 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.done;
    vlSelfRef.gpu__DOT__core_done = (((IData)(vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.done) 
                                      << 1U) | (IData)(vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.done));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__sv2v_tmp_core_instance_program_mem_read_valid 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.program_mem_read_valid;
    vlSelfRef.gpu__DOT__fetcher_read_valid = (((IData)(vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.program_mem_read_valid) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.program_mem_read_valid));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__sv2v_tmp_core_instance_program_mem_read_address 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.program_mem_read_address;
    vlSelfRef.gpu__DOT__fetcher_read_address = (((IData)(vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.program_mem_read_address) 
                                                 << 8U) 
                                                | (IData)(vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.program_mem_read_address));
    vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_done 
        = vlSelfRef.gpu__DOT__core_done;
    vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_valid 
        = vlSelfRef.gpu__DOT__fetcher_read_valid;
    vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_address 
        = vlSelfRef.gpu__DOT__fetcher_read_address;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__clk__0))));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__clk__0 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__clk__0 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop_core___nba_sequent__TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__0(Vtop_core* vlSelf);
void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop_core___nba_sequent__TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__1(Vtop_core* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__0((&vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance));
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__0((&vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance));
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
        Vtop_core___nba_sequent__TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__1((&vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance));
        Vtop_core___nba_sequent__TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__1((&vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__sv2v_tmp_core_instance_done 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.done;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__sv2v_tmp_core_instance_program_mem_read_valid 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.program_mem_read_valid;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__sv2v_tmp_core_instance_program_mem_read_address 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.program_mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__sv2v_tmp_core_instance_data_mem_read_valid 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_valid;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__sv2v_tmp_core_instance_data_mem_read_address 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__sv2v_tmp_core_instance_data_mem_write_valid 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_valid;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__sv2v_tmp_core_instance_data_mem_write_address 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__sv2v_tmp_core_instance_data_mem_write_data 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_data;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__sv2v_tmp_core_instance_done 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.done;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__sv2v_tmp_core_instance_program_mem_read_valid 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.program_mem_read_valid;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__sv2v_tmp_core_instance_program_mem_read_address 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.program_mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__sv2v_tmp_core_instance_data_mem_read_valid 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_valid;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__sv2v_tmp_core_instance_data_mem_read_address 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__sv2v_tmp_core_instance_data_mem_write_valid 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_valid;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__sv2v_tmp_core_instance_data_mem_write_address 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__sv2v_tmp_core_instance_data_mem_write_data 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_data;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu__DOT__dispatch_instance__DOT__start_execution 
        = vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__start_execution;
    vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start 
        = vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_start;
    vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset 
        = vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset;
    vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset 
        = vlSelfRef.__Vdly__gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset;
    vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read 
        = vlSelfRef.__Vdly__gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read;
    if (vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__current_consumer__v0) {
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__current_consumer__v1) {
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer[0U] = 1U;
    }
    vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_address 
        = vlSelfRef.__Vdly__gpu__DOT__program_memory_controller__DOT__mem_read_address;
    if (vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v0) {
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state[0U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v1) {
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state[0U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v2) {
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state[0U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v3) {
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state[0U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v4) {
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state[0U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v5) {
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state[0U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v6) {
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state[0U] = 4U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v7) {
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state[0U] = 3U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v9) {
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state[0U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v10) {
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state[0U] = 6U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v11) {
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v12) {
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__cache__v0) {
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v0] 
            = ((0x3fULL & vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v0]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__gpu__DOT__program_memory_controller__DOT__cache__v0)) 
                  << 6U));
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v1] 
            = ((0x3ffffffff9ULL & vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v1]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__gpu__DOT__program_memory_controller__DOT__cache__v1)) 
                  << 1U));
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v2] 
            = (1ULL | vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v2]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__cache__v3) {
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v3] 
            = ((0x3fULL & vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v3]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__gpu__DOT__program_memory_controller__DOT__cache__v3)) 
                  << 6U));
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v4] 
            = ((0x3ffffffff9ULL & vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v4]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__gpu__DOT__program_memory_controller__DOT__cache__v4)) 
                  << 1U));
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v5] 
            = (1ULL | vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v5]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__cache__v6) {
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v6] 
            = (((~ (0xffffULL << (IData)(vlSelfRef.__VdlyLsb__gpu__DOT__program_memory_controller__DOT__cache__v6))) 
                & vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v6]) 
               | (0x3fffffffffULL & ((QData)((IData)(vlSelfRef.__VdlyVal__gpu__DOT__program_memory_controller__DOT__cache__v6)) 
                                     << (IData)(vlSelfRef.__VdlyLsb__gpu__DOT__program_memory_controller__DOT__cache__v6))));
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__cache__v7) {
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v7] 
            = (6ULL | vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v7]);
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v8] 
            = ((0x3fffffffc7ULL & vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v8]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__gpu__DOT__program_memory_controller__DOT__cache__v8)) 
                  << 3U));
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state[0U] = 4U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v9] 
            = (0x3ffffffffeULL & vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v9]);
    }
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset 
        = vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read 
        = vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__consumer_req_offset 
        = vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__consumer_req_offset;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__chunks_read 
        = vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__chunks_read;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__consumer_req_offset 
        = vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__consumer_req_offset;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__chunks_read 
        = vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__chunks_read;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__consumer_req_offset 
        = vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__consumer_req_offset;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__chunks_read 
        = vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__chunks_read;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_address 
        = vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address;
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v0) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v1) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[0U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v2) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[0U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v3) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[0U] = 3U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v4) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[0U] = 4U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v5) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[0U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v6) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[0U] = 6U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v7) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[0U] = 7U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v8) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v9) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[1U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v10) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[1U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v11) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[1U] = 3U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v12) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[1U] = 4U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v13) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[1U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v14) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[1U] = 6U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v15) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[1U] = 7U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v16) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v17) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[2U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v18) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[2U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v19) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[2U] = 3U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v20) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[2U] = 4U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v21) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[2U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v22) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[2U] = 6U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v23) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[2U] = 7U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v24) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v25) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[3U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v26) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[3U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v27) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[3U] = 3U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v28) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[3U] = 4U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v29) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[3U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v30) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[3U] = 6U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v31) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[3U] = 7U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v0) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v1) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v2) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v3) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v4) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v5) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v6) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v7) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v8) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v9) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v10) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v11) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v12) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v13) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v14) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v15) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v16) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v17) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v18) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v19) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v20) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v21) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v22) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v23) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v24) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 4U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v25) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 3U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v27) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v28) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 6U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v29) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v30) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v31) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v32) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v33) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v34) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v35) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v36) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v37) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v38) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v39) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v40) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v41) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v42) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v43) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v44) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v45) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v46) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v47) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v48) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v49) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v50) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v51) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v52) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v53) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v54) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v55) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 4U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v56) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 3U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v58) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v59) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 6U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v60) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v61) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v62) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v63) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v64) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v65) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v66) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v67) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v68) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v69) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v70) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v71) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v72) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v73) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v74) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v75) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v76) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v77) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v78) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v79) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v80) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v81) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v82) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v83) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v84) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v85) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v86) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 4U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v87) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 3U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v89) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v90) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 6U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v91) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v92) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v93) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v94) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v95) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v96) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v97) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v98) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v99) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v100) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v101) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v102) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v103) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v104) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v105) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v106) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v107) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v108) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v109) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v110) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v111) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v112) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v113) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v114) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 1U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v115) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v116) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 5U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v117) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 4U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v118) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 3U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v120) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 2U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v121) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 6U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v122) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v123) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v0) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v0] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v0]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v0) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v1] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v1]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v1) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v2] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v2]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v3) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v3] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v3]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v3) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v4] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v4]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v4) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v5] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v5]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v6) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v6] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v6]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v6) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v7] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v7]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v7) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v8] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v8]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v9) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v9] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v9]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v9) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v10] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v10]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v10) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v11] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v11]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v12) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v12] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v12]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v12) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v13] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v13]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v13) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v14] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v14]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v15) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v15] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v15]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v15) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v16] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v16]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v16) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v17] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v17]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v18) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v18] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v18]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v18) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v19] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v19]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v19) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v20] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v20]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v21) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v21] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v21]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v21) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v22] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v22]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v22) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v23] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v23]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v24) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v24] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelfRef.__VdlyLsb__gpu__DOT__data_memory_controller__DOT__cache__v24))) 
                & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v24]) 
               | (0x3fffffU & ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v24) 
                               << (IData)(vlSelfRef.__VdlyLsb__gpu__DOT__data_memory_controller__DOT__cache__v24))));
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v25) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v25] 
            = (6U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v25]);
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v26] 
            = ((0x3fffc7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v26]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v26) 
                  << 3U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 4U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v27] 
            = (0x3ffffeU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v27]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v28) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v28] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v28]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v28) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v29] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v29]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v29) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v30] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v30]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v31) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v31] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v31]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v31) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v32] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v32]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v32) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v33] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v33]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v34) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v34] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v34]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v34) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v35] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v35]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v35) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v36] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v36]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v37) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v37] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v37]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v37) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v38] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v38]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v38) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v39] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v39]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v40) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v40] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v40]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v40) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v41] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v41]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v41) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v42] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v42]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v43) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v43] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v43]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v43) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v44] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v44]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v44) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v45] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v45]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v46) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v46] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v46]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v46) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v47] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v47]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v47) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v48] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v48]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v49) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v49] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v49]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v49) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v50] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v50]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v50) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v51] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v51]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v52) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v52] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelfRef.__VdlyLsb__gpu__DOT__data_memory_controller__DOT__cache__v52))) 
                & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v52]) 
               | (0x3fffffU & ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v52) 
                               << (IData)(vlSelfRef.__VdlyLsb__gpu__DOT__data_memory_controller__DOT__cache__v52))));
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v53) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v53] 
            = (6U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v53]);
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v54] 
            = ((0x3fffc7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v54]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v54) 
                  << 3U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 4U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v55] 
            = (0x3ffffeU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v55]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v56) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v56] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v56]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v56) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v57] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v57]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v57) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v58] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v58]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v59) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v59] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v59]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v59) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v60] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v60]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v60) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v61] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v61]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v62) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v62] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v62]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v62) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v63] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v63]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v63) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v64] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v64]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v65) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v65] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v65]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v65) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v66] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v66]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v66) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v67] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v67]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v68) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v68] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v68]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v68) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v69] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v69]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v69) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v70] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v70]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v71) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v71] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v71]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v71) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v72] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v72]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v72) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v73] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v73]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v74) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v74] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v74]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v74) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v75] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v75]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v75) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v76] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v76]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v77) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v77] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v77]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v77) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v78] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v78]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v78) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v79] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v79]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v80) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v80] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelfRef.__VdlyLsb__gpu__DOT__data_memory_controller__DOT__cache__v80))) 
                & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v80]) 
               | (0x3fffffU & ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v80) 
                               << (IData)(vlSelfRef.__VdlyLsb__gpu__DOT__data_memory_controller__DOT__cache__v80))));
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v81) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v81] 
            = (6U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v81]);
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v82] 
            = ((0x3fffc7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v82]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v82) 
                  << 3U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 4U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v83] 
            = (0x3ffffeU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v83]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v84) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v84] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v84]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v84) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v85] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v85]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v85) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v86] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v86]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v87) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v87] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v87]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v87) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v88] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v88]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v88) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v89] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v89]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v90) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v90] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v90]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v90) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v91] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v91]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v91) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v92] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v92]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v93) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v93] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v93]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v93) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v94] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v94]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v94) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v95] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v95]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v96) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v96] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v96]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v96) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v97] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v97]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v97) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v98] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v98]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v99) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v99] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v99]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v99) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v100] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v100]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v100) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v101] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v101]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v102) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v102] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v102]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v102) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v103] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v103]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v103) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v104] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v104]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v105) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v105] 
            = ((0x3fU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v105]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v105) 
                  << 6U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v106] 
            = ((0x3ffff9U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v106]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v106) 
                  << 1U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v107] 
            = (1U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v107]);
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v108) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v108] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelfRef.__VdlyLsb__gpu__DOT__data_memory_controller__DOT__cache__v108))) 
                & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v108]) 
               | (0x3fffffU & ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v108) 
                               << (IData)(vlSelfRef.__VdlyLsb__gpu__DOT__data_memory_controller__DOT__cache__v108))));
    }
    if (vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v109) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v109] 
            = (6U | vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v109]);
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v110] 
            = ((0x3fffc7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v110]) 
               | ((IData)(vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v110) 
                  << 3U));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 4U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v111] 
            = (0x3ffffeU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
               [vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v111]);
    }
    vlSelfRef.gpu__DOT__dcr_instance__DOT__thread_count 
        = vlSelfRef.gpu__DOT__dcr_instance__DOT__device_conrol_register;
    vlSelfRef.gpu__DOT__dispatch_instance__DOT__total_blocks 
        = (0xffU & (((IData)(3U) + (IData)(vlSelfRef.gpu__DOT__dcr_instance__DOT__device_conrol_register)) 
                    >> 2U));
    vlSelfRef.gpu__DOT__thread_count = vlSelfRef.gpu__DOT__dcr_instance__DOT__device_conrol_register;
    vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_ready 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready;
    vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_data 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data;
    vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_ready 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready;
    vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_ready 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready;
    vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_data 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data;
    vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_ready 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready;
    vlSelfRef.done = vlSelfRef.gpu__DOT__dispatch_instance__DOT__done;
    vlSelfRef.gpu__DOT__done = vlSelfRef.gpu__DOT__dispatch_instance__DOT__done;
    vlSelfRef.gpu__DOT__sv2v_tmp_dispatch_instance_core_start 
        = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start;
    vlSelfRef.gpu__DOT__core_start = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start;
    vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.start 
        = (1U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start));
    vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.start 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start) 
                 >> 1U));
    vlSelfRef.gpu__DOT__sv2v_tmp_dispatch_instance_core_block_id 
        = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id;
    vlSelfRef.gpu__DOT__core_block_id = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id;
    vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.block_id 
        = (0xffU & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id));
    vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.block_id 
        = (0xffU & ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id) 
                    >> 8U));
    vlSelfRef.gpu__DOT__sv2v_tmp_dispatch_instance_core_thread_count 
        = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count;
    vlSelfRef.gpu__DOT__core_thread_count = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count;
    vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.thread_count 
        = (7U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count));
    vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.thread_count 
        = (7U & ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count) 
                 >> 3U));
    vlSelfRef.gpu__DOT__sv2v_tmp_dispatch_instance_core_reset 
        = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset;
    vlSelfRef.gpu__DOT__core_reset = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset;
    vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.reset 
        = (1U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset));
    vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.reset 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset) 
                 >> 1U));
    vlSelfRef.program_mem_read_address = vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__program_mem_read_address = vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_address;
    vlSelfRef.program_mem_read_valid = vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_valid;
    vlSelfRef.gpu__DOT__program_mem_read_valid = vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_valid;
    vlSelfRef.gpu__DOT__sv2v_tmp_program_memory_controller_consumer_read_ready 
        = vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready;
    vlSelfRef.gpu__DOT__fetcher_read_ready = vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready;
    vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.program_mem_read_ready 
        = (1U & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready));
    vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.program_mem_read_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready) 
                 >> 1U));
    vlSelfRef.gpu__DOT__sv2v_tmp_program_memory_controller_consumer_read_data 
        = vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_data;
    vlSelfRef.gpu__DOT__fetcher_read_data = vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_data;
    vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.program_mem_read_data 
        = (0xffffU & vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_data);
    vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.program_mem_read_data 
        = (vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_data 
           >> 0x10U);
    vlSelfRef.data_mem_read_address = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__data_mem_read_address = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_address;
    vlSelfRef.data_mem_read_valid = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid;
    vlSelfRef.gpu__DOT__data_mem_read_valid = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid;
    vlSelfRef.data_mem_write_valid = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid;
    vlSelfRef.gpu__DOT__data_mem_write_valid = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid;
    vlSelfRef.data_mem_write_address = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address;
    vlSelfRef.gpu__DOT__data_mem_write_address = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address;
    vlSelfRef.data_mem_write_data = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data;
    vlSelfRef.gpu__DOT__data_mem_write_data = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data;
    vlSelfRef.gpu__DOT__lsu_read_ready = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready;
    vlSelfRef.gpu__DOT__sv2v_tmp_data_memory_controller_consumer_read_ready 
        = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready;
    vlSelfRef.gpu__DOT__lsu_read_data = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data;
    vlSelfRef.gpu__DOT__sv2v_tmp_data_memory_controller_consumer_read_data 
        = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data;
    vlSelfRef.gpu__DOT__lsu_write_ready = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready;
    vlSelfRef.gpu__DOT__sv2v_tmp_data_memory_controller_consumer_write_ready 
        = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready;
    vlSelfRef.gpu__DOT__lsu_read_valid = ((0xc0U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid)) 
                                          | ((0x20U 
                                              & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_valid) 
                                                 << 4U)) 
                                             | ((0x10U 
                                                 & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_valid) 
                                                    << 4U)) 
                                                | (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_valid))));
    vlSelfRef.gpu__DOT__lsu_read_valid = ((0x3fU & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid)) 
                                          | (0xc0U 
                                             & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_valid) 
                                                << 4U)));
    vlSelfRef.gpu__DOT__lsu_read_address = ((0xffff000000000000ULL 
                                             & vlSelfRef.gpu__DOT__lsu_read_address) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address 
                                                                    >> 8U)))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address)))));
    vlSelfRef.gpu__DOT__lsu_read_address = ((0xffffffffffffULL 
                                             & vlSelfRef.gpu__DOT__lsu_read_address) 
                                            | ((QData)((IData)(
                                                               (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address 
                                                                >> 0x10U))) 
                                               << 0x30U));
    vlSelfRef.gpu__DOT__lsu_write_valid = ((0xc0U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                                           | ((0x20U 
                                               & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_valid) 
                                                  << 4U)) 
                                              | ((0x10U 
                                                  & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_valid) 
                                                     << 4U)) 
                                                 | (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_valid))));
    vlSelfRef.gpu__DOT__lsu_write_valid = ((0x3fU & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                                           | (0xc0U 
                                              & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_valid) 
                                                 << 4U)));
    vlSelfRef.gpu__DOT__lsu_write_address = ((0xffff000000000000ULL 
                                              & vlSelfRef.gpu__DOT__lsu_write_address) 
                                             | (((QData)((IData)(
                                                                 (0xffU 
                                                                  & (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address 
                                                                     >> 8U)))) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(
                                                                    (0xffU 
                                                                     & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address)))));
    vlSelfRef.gpu__DOT__lsu_write_address = ((0xffffffffffffULL 
                                              & vlSelfRef.gpu__DOT__lsu_write_address) 
                                             | ((QData)((IData)(
                                                                (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address 
                                                                 >> 0x10U))) 
                                                << 0x30U));
    vlSelfRef.gpu__DOT__lsu_write_data = ((0xffff000000000000ULL 
                                           & vlSelfRef.gpu__DOT__lsu_write_data) 
                                          | (((QData)((IData)(
                                                              (0xffU 
                                                               & (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data 
                                                                  >> 8U)))) 
                                              << 0x28U) 
                                             | (((QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data)))));
    vlSelfRef.gpu__DOT__lsu_write_data = ((0xffffffffffffULL 
                                           & vlSelfRef.gpu__DOT__lsu_write_data) 
                                          | ((QData)((IData)(
                                                             (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data 
                                                              >> 0x10U))) 
                                             << 0x30U));
    vlSelfRef.gpu__DOT__dispatch_instance__DOT__thread_count 
        = vlSelfRef.gpu__DOT__thread_count;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_valid 
        = vlSelfRef.gpu__DOT__lsu_read_valid;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_address 
        = vlSelfRef.gpu__DOT__lsu_read_address;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_valid 
        = vlSelfRef.gpu__DOT__lsu_write_valid;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_address 
        = vlSelfRef.gpu__DOT__lsu_write_address;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_data 
        = vlSelfRef.gpu__DOT__lsu_write_data;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu__DOT__core_done = (((IData)(vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.done) 
                                      << 1U) | (IData)(vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.done));
    vlSelfRef.gpu__DOT__fetcher_read_valid = (((IData)(vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.program_mem_read_valid) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.program_mem_read_valid));
    vlSelfRef.gpu__DOT__fetcher_read_address = (((IData)(vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.program_mem_read_address) 
                                                 << 8U) 
                                                | (IData)(vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.program_mem_read_address));
    vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_done 
        = vlSelfRef.gpu__DOT__core_done;
    vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_valid 
        = vlSelfRef.gpu__DOT__fetcher_read_valid;
    vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_address 
        = vlSelfRef.gpu__DOT__fetcher_read_address;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_valid 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_valid;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_valid 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_valid;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_data;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_valid 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_valid;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_valid 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_valid;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_data;
}

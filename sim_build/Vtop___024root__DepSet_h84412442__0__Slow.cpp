// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__clk__0 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__clk__0 
        = vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x2f677075U;
    __Vtemp_1[2U] = 0x75696c64U;
    __Vtemp_1[3U] = 0x62U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    VL_PRINTF_MT("-Info: build/gpu.v:1004: $dumpvar ignored, as Verilated without --trace\n");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop_core___stl_sequent__TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__0(Vtop_core* vlSelf);
void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop_core___stl_sequent__TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__0((&vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance));
        Vtop_core___stl_sequent__TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__0((&vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance));
        Vtop___024root___ico_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
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
    vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.reset 
        = (1U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset));
    vlSymsp->TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.reset 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset) 
                 >> 1U));
    vlSymsp->TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance.clk 
        = vlSelfRef.clk;
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

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read = 0U;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__chunks_read = 0U;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__chunks_read = 0U;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__chunks_read = 0U;
    vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("build/gpu.v", 781, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge gpu.cores[0].core_instance.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge gpu.cores[1].core_instance.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge gpu.cores[0].core_instance.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge gpu.cores[1].core_instance.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->device_control_write_enable = VL_RAND_RESET_I(1);
    vlSelf->device_control_data = VL_RAND_RESET_I(8);
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
    vlSelf->gpu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__device_control_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__device_control_data = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__program_mem_read_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__program_mem_read_address = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__program_mem_read_ready = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__program_mem_read_data = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__data_mem_read_valid = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__data_mem_read_address = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__data_mem_read_ready = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__data_mem_read_data = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__data_mem_write_valid = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__data_mem_write_address = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__data_mem_write_ready = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__data_mem_write_data = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__thread_count = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__core_start = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__core_reset = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__core_done = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__core_block_id = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__core_thread_count = VL_RAND_RESET_I(6);
    vlSelf->gpu__DOT__sv2v_tmp_dispatch_instance_core_start = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__sv2v_tmp_dispatch_instance_core_reset = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__sv2v_tmp_dispatch_instance_core_block_id = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__sv2v_tmp_dispatch_instance_core_thread_count = VL_RAND_RESET_I(6);
    vlSelf->gpu__DOT__lsu_read_valid = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__lsu_read_address = VL_RAND_RESET_Q(64);
    vlSelf->gpu__DOT__lsu_read_ready = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__lsu_read_data = VL_RAND_RESET_Q(64);
    vlSelf->gpu__DOT__lsu_write_valid = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__lsu_write_address = VL_RAND_RESET_Q(64);
    vlSelf->gpu__DOT__lsu_write_ready = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__lsu_write_data = VL_RAND_RESET_Q(64);
    vlSelf->gpu__DOT__fetcher_read_valid = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__fetcher_read_address = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__fetcher_read_ready = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__fetcher_read_data = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__sv2v_tmp_data_memory_controller_consumer_write_ready = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__sv2v_tmp_data_memory_controller_consumer_read_ready = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__sv2v_tmp_data_memory_controller_consumer_read_data = VL_RAND_RESET_Q(64);
    vlSelf->gpu__DOT__sv2v_tmp_program_memory_controller_consumer_read_ready = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__sv2v_tmp_program_memory_controller_consumer_read_data = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_valid = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_valid = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__sv2v_tmp_core_instance_done = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__sv2v_tmp_core_instance_program_mem_read_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__sv2v_tmp_core_instance_program_mem_read_address = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__sv2v_tmp_core_instance_data_mem_read_valid = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__sv2v_tmp_core_instance_data_mem_read_address = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__sv2v_tmp_core_instance_data_mem_write_valid = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__sv2v_tmp_core_instance_data_mem_write_address = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__sv2v_tmp_core_instance_data_mem_write_data = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_valid = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_valid = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__sv2v_tmp_core_instance_done = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__sv2v_tmp_core_instance_program_mem_read_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__sv2v_tmp_core_instance_program_mem_read_address = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__sv2v_tmp_core_instance_data_mem_read_valid = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__sv2v_tmp_core_instance_data_mem_read_address = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__sv2v_tmp_core_instance_data_mem_write_valid = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__sv2v_tmp_core_instance_data_mem_write_address = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__sv2v_tmp_core_instance_data_mem_write_data = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__dcr_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__dcr_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__dcr_instance__DOT__device_control_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__dcr_instance__DOT__device_control_data = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__dcr_instance__DOT__thread_count = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__dcr_instance__DOT__device_conrol_register = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__dispatch_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__dispatch_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__dispatch_instance__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__dispatch_instance__DOT__thread_count = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__dispatch_instance__DOT__core_done = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__dispatch_instance__DOT__core_start = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__dispatch_instance__DOT__core_reset = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__dispatch_instance__DOT__core_block_id = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__dispatch_instance__DOT__core_thread_count = VL_RAND_RESET_I(6);
    vlSelf->gpu__DOT__dispatch_instance__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__dispatch_instance__DOT__total_blocks = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__dispatch_instance__DOT__blocks_dispatched = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__dispatch_instance__DOT__blocks_done = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__dispatch_instance__DOT__start_execution = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__dispatch_instance__DOT__sv2v_autoblock_1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__dispatch_instance__DOT__sv2v_autoblock_2__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__dispatch_instance__DOT__sv2v_autoblock_3__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__dispatch_instance__DOT__sv2v_autoblock_4__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__dispatch_instance__DOT____Vlvbound_h4c6e9b06__0 = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__data_memory_controller__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__data_memory_controller__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__data_memory_controller__DOT__consumer_read_valid = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__data_memory_controller__DOT__consumer_read_address = VL_RAND_RESET_Q(64);
    vlSelf->gpu__DOT__data_memory_controller__DOT__consumer_read_ready = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__data_memory_controller__DOT__consumer_read_data = VL_RAND_RESET_Q(64);
    vlSelf->gpu__DOT__data_memory_controller__DOT__consumer_write_valid = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__data_memory_controller__DOT__consumer_write_address = VL_RAND_RESET_Q(64);
    vlSelf->gpu__DOT__data_memory_controller__DOT__consumer_write_ready = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__data_memory_controller__DOT__consumer_write_data = VL_RAND_RESET_Q(64);
    vlSelf->gpu__DOT__data_memory_controller__DOT__mem_read_valid = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__data_memory_controller__DOT__mem_read_address = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__data_memory_controller__DOT__mem_read_ready = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__data_memory_controller__DOT__mem_read_data = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__data_memory_controller__DOT__mem_write_valid = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__data_memory_controller__DOT__mem_write_address = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__data_memory_controller__DOT__mem_write_ready = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__data_memory_controller__DOT__mem_write_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__data_memory_controller__DOT__controller_state[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->gpu__DOT__data_memory_controller__DOT__cache[__Vi0] = VL_RAND_RESET_I(22);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__data_memory_controller__DOT__current_consumer[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->gpu__DOT__data_memory_controller__DOT__consumer_mutex = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_1__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_2__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_3__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_4__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__consumer_req_offset = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__chunks_read = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__consumer_req_offset = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__chunks_read = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__consumer_req_offset = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__chunks_read = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__data_memory_controller__DOT____Vlvbound_h14c04415__0 = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__data_memory_controller__DOT____Vlvbound_h98b46d85__0 = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__data_memory_controller__DOT____Vlvbound_h0c71622f__0 = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__data_memory_controller__DOT____Vlvbound_h05961d59__0 = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__program_memory_controller__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__program_memory_controller__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__program_memory_controller__DOT__consumer_read_valid = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__program_memory_controller__DOT__consumer_read_address = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__program_memory_controller__DOT__consumer_read_ready = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__program_memory_controller__DOT__consumer_read_data = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__program_memory_controller__DOT__consumer_write_valid = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__program_memory_controller__DOT__consumer_write_address = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__program_memory_controller__DOT__consumer_write_ready = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__program_memory_controller__DOT__consumer_write_data = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__program_memory_controller__DOT__mem_read_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__program_memory_controller__DOT__mem_read_address = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__program_memory_controller__DOT__mem_read_ready = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__program_memory_controller__DOT__mem_read_data = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__program_memory_controller__DOT__mem_write_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__program_memory_controller__DOT__mem_write_address = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__program_memory_controller__DOT__mem_write_ready = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__program_memory_controller__DOT__mem_write_data = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__program_memory_controller__DOT__controller_state[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->gpu__DOT__program_memory_controller__DOT__cache[__Vi0] = VL_RAND_RESET_Q(38);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__program_memory_controller__DOT__current_consumer[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->gpu__DOT__program_memory_controller__DOT__consumer_mutex = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__program_memory_controller__DOT__sv2v_autoblock_1__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__program_memory_controller__DOT__sv2v_autoblock_2__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__program_memory_controller__DOT__sv2v_autoblock_3__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__program_memory_controller__DOT__sv2v_autoblock_4__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__program_memory_controller__DOT____Vlvbound_he4e9ff2c__0 = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__gpu__DOT__dispatch_instance__DOT__start_execution = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__gpu__DOT__dispatch_instance__DOT__core_start = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__consumer_req_offset = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__chunks_read = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__consumer_req_offset = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__chunks_read = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__consumer_req_offset = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__chunks_read = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__gpu__DOT__program_memory_controller__DOT__mem_read_address = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v0 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v0 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v1 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v2 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v0 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v0 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v1 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v1 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v2 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v1 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v3 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v4 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v5 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v3 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v3 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v4 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v4 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v5 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v2 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v6 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v7 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v8 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v6 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v6 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v7 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v7 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v8 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v3 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v9 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v10 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v11 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v9 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v9 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v10 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v10 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v11 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v4 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v12 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v13 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v14 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v12 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v12 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v13 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v13 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v14 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v5 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v15 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v16 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v17 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v15 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v15 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v16 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v16 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v17 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v6 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v18 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v19 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v20 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v18 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v18 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v18 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v19 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v19 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v20 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v7 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v21 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v22 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v23 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v21 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v21 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v21 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v22 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v22 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v23 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v24 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v24 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyLsb__gpu__DOT__data_memory_controller__DOT__cache__v24 = VL_RAND_RESET_I(5);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v24 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v24 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v25 = 0;
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v25 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v25 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v26 = VL_RAND_RESET_I(3);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v26 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v27 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v27 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v28 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v29 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v30 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v8 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v31 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v32 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v33 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v28 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v28 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v28 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v29 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v29 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v30 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v9 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v34 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v35 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v36 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v31 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v31 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v31 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v32 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v32 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v33 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v10 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v37 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v38 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v39 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v34 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v34 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v34 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v35 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v35 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v36 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v11 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v40 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v41 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v42 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v37 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v37 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v37 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v38 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v38 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v39 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v12 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v43 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v44 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v45 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v40 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v40 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v40 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v41 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v41 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v42 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v13 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v46 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v47 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v48 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v43 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v43 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v43 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v44 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v44 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v45 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v14 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v49 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v50 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v51 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v46 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v46 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v46 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v47 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v47 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v48 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v15 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v52 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v53 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v54 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v49 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v49 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v49 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v50 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v50 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v51 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v55 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v52 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyLsb__gpu__DOT__data_memory_controller__DOT__cache__v52 = VL_RAND_RESET_I(5);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v52 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v52 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v56 = 0;
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v53 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v53 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v54 = VL_RAND_RESET_I(3);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v54 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v55 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v58 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v59 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v60 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v61 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v16 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v62 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v63 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v64 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v56 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v56 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v56 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v57 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v57 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v58 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v17 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v65 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v66 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v67 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v59 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v59 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v59 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v60 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v60 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v61 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v18 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v68 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v69 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v70 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v62 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v62 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v62 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v63 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v63 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v64 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v19 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v71 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v72 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v73 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v65 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v65 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v65 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v66 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v66 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v67 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v20 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v74 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v75 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v76 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v68 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v68 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v68 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v69 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v69 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v70 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v21 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v77 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v78 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v79 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v71 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v71 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v71 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v72 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v72 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v73 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v22 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v80 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v81 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v82 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v74 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v74 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v74 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v75 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v75 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v76 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v23 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v83 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v84 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v85 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v77 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v77 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v77 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v78 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v78 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v79 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v86 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v80 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyLsb__gpu__DOT__data_memory_controller__DOT__cache__v80 = VL_RAND_RESET_I(5);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v80 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v80 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v87 = 0;
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v81 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v81 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v82 = VL_RAND_RESET_I(3);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v82 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v83 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v89 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v90 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v91 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v92 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v24 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v93 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v94 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v95 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v84 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v84 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v84 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v85 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v85 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v86 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v25 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v96 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v97 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v98 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v87 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v87 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v87 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v88 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v88 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v89 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v26 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v99 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v100 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v101 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v90 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v90 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v90 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v91 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v91 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v92 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v27 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v102 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v103 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v104 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v93 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v93 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v93 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v94 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v94 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v95 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v28 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v105 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v106 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v107 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v96 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v96 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v96 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v97 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v97 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v98 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v29 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v108 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v109 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v110 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v99 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v99 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v99 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v100 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v100 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v101 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v30 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v111 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v112 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v113 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v102 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v102 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v102 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v103 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v103 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v104 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v31 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v114 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v115 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v116 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v105 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v105 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v105 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v106 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v106 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v107 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v117 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v108 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyLsb__gpu__DOT__data_memory_controller__DOT__cache__v108 = VL_RAND_RESET_I(5);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v108 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v108 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v118 = 0;
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v109 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v109 = 0;
    vlSelf->__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v110 = VL_RAND_RESET_I(3);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v110 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v111 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v120 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v121 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v122 = 0;
    vlSelf->__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v123 = 0;
    vlSelf->__VdlySet__gpu__DOT__program_memory_controller__DOT__current_consumer__v0 = 0;
    vlSelf->__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v0 = 0;
    vlSelf->__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v1 = 0;
    vlSelf->__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v2 = 0;
    vlSelf->__VdlyVal__gpu__DOT__program_memory_controller__DOT__cache__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v0 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__program_memory_controller__DOT__cache__v0 = 0;
    vlSelf->__VdlyVal__gpu__DOT__program_memory_controller__DOT__cache__v1 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v1 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v2 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__program_memory_controller__DOT__current_consumer__v1 = 0;
    vlSelf->__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v3 = 0;
    vlSelf->__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v4 = 0;
    vlSelf->__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v5 = 0;
    vlSelf->__VdlyVal__gpu__DOT__program_memory_controller__DOT__cache__v3 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v3 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__program_memory_controller__DOT__cache__v3 = 0;
    vlSelf->__VdlyVal__gpu__DOT__program_memory_controller__DOT__cache__v4 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v4 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v5 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v6 = 0;
    vlSelf->__VdlyVal__gpu__DOT__program_memory_controller__DOT__cache__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyLsb__gpu__DOT__program_memory_controller__DOT__cache__v6 = VL_RAND_RESET_I(6);
    vlSelf->__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v6 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__program_memory_controller__DOT__cache__v6 = 0;
    vlSelf->__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v7 = 0;
    vlSelf->__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v7 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__program_memory_controller__DOT__cache__v7 = 0;
    vlSelf->__VdlyVal__gpu__DOT__program_memory_controller__DOT__cache__v8 = VL_RAND_RESET_I(3);
    vlSelf->__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v8 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v9 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v9 = 0;
    vlSelf->__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v10 = 0;
    vlSelf->__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v11 = 0;
    vlSelf->__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v12 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__clk__0 = VL_RAND_RESET_I(1);
}

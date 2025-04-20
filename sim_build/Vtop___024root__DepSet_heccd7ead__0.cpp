// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
void Vtop___024root___eval_ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__Vfuncout;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__line;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__line = 0;
    CData/*0:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset = 0;
    CData/*7:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__data_in;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__data_in = 0;
    SData/*15:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp = 0;
    CData/*1:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__offset;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__offset = 0;
    CData/*7:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__2__Vfuncout;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__2__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__2__line;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__2__line = 0;
    CData/*0:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__2__offset;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__2__offset = 0;
    CData/*7:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__3__Vfuncout;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__3__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__3__offset;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__3__offset = 0;
    SData/*15:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__3__line_data;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__3__line_data = 0;
    CData/*7:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__3__tail_data;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__3__tail_data = 0;
    SData/*15:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__Vfuncout;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__line;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__line = 0;
    CData/*0:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset = 0;
    CData/*7:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__data_in;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__data_in = 0;
    SData/*15:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp = 0;
    CData/*1:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__offset;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__offset = 0;
    CData/*7:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__6__Vfuncout;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__6__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__6__line;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__6__line = 0;
    CData/*0:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__6__offset;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__6__offset = 0;
    CData/*7:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__7__Vfuncout;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__7__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__7__offset;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__7__offset = 0;
    SData/*15:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__7__line_data;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__7__line_data = 0;
    CData/*7:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__7__tail_data;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__7__tail_data = 0;
    SData/*15:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__Vfuncout;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__line;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__line = 0;
    CData/*0:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset = 0;
    CData/*7:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__data_in;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__data_in = 0;
    SData/*15:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp = 0;
    CData/*1:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__offset;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__offset = 0;
    CData/*7:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__10__Vfuncout;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__10__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__10__line;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__10__line = 0;
    CData/*0:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__10__offset;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__10__offset = 0;
    CData/*7:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__11__Vfuncout;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__11__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__11__offset;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__11__offset = 0;
    SData/*15:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__11__line_data;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__11__line_data = 0;
    CData/*7:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__11__tail_data;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__11__tail_data = 0;
    SData/*15:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__Vfuncout;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__line;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__line = 0;
    CData/*0:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset = 0;
    CData/*7:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__data_in;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__data_in = 0;
    SData/*15:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp = 0;
    CData/*1:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__offset;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__offset = 0;
    CData/*7:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__14__Vfuncout;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__14__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__14__line;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__14__line = 0;
    CData/*0:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__14__offset;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__14__offset = 0;
    CData/*7:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__15__Vfuncout;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__15__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__15__offset;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__15__offset = 0;
    SData/*15:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__15__line_data;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__15__line_data = 0;
    CData/*7:0*/ __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__15__tail_data;
    __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__15__tail_data = 0;
    IData/*31:0*/ __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__Vfuncout;
    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__line;
    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__line = 0;
    CData/*0:0*/ __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__offset;
    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__offset = 0;
    SData/*15:0*/ __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__data_in;
    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__data_in = 0;
    IData/*31:0*/ __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__temp;
    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__temp = 0;
    CData/*1:0*/ __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_valid_mask_by_offset__17__Vfuncout;
    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_valid_mask_by_offset__17__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_valid_mask_by_offset__17__offset;
    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_valid_mask_by_offset__17__offset = 0;
    SData/*15:0*/ __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_read_by_offset__18__Vfuncout;
    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_read_by_offset__18__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_read_by_offset__18__line;
    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_read_by_offset__18__line = 0;
    CData/*0:0*/ __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_read_by_offset__18__offset;
    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_read_by_offset__18__offset = 0;
    SData/*15:0*/ __Vfunc_gpu__DOT__program_memory_controller__DOT__select_consumer_read_data__19__Vfuncout;
    __Vfunc_gpu__DOT__program_memory_controller__DOT__select_consumer_read_data__19__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_gpu__DOT__program_memory_controller__DOT__select_consumer_read_data__19__offset;
    __Vfunc_gpu__DOT__program_memory_controller__DOT__select_consumer_read_data__19__offset = 0;
    IData/*31:0*/ __Vfunc_gpu__DOT__program_memory_controller__DOT__select_consumer_read_data__19__line_data;
    __Vfunc_gpu__DOT__program_memory_controller__DOT__select_consumer_read_data__19__line_data = 0;
    SData/*15:0*/ __Vfunc_gpu__DOT__program_memory_controller__DOT__select_consumer_read_data__19__tail_data;
    __Vfunc_gpu__DOT__program_memory_controller__DOT__select_consumer_read_data__19__tail_data = 0;
    // Body
    vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__start_execution 
        = vlSelfRef.gpu__DOT__dispatch_instance__DOT__start_execution;
    vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_start 
        = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start;
    vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset 
        = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset;
    vlSelfRef.__Vdly__gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset 
        = vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset;
    vlSelfRef.__Vdly__gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read 
        = vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read;
    vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__current_consumer__v0 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__current_consumer__v1 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v0 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v1 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v2 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v3 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v4 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v5 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v6 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v7 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v9 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v10 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v11 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v12 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__cache__v0 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__cache__v3 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__cache__v6 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__cache__v7 = 0U;
    vlSelfRef.__Vdly__gpu__DOT__program_memory_controller__DOT__mem_read_address 
        = vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_address;
    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset 
        = vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset;
    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read 
        = vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read;
    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__consumer_req_offset 
        = vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__consumer_req_offset;
    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__chunks_read 
        = vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__chunks_read;
    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__consumer_req_offset 
        = vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__consumer_req_offset;
    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__chunks_read 
        = vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__chunks_read;
    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__consumer_req_offset 
        = vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__consumer_req_offset;
    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__chunks_read 
        = vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__chunks_read;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v0 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v1 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v2 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v3 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v4 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v5 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v6 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v7 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v8 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v9 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v10 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v11 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v12 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v13 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v14 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v15 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v16 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v17 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v18 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v19 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v20 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v21 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v22 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v23 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v24 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v25 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v26 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v27 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v28 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v29 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v30 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v31 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v0 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v1 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v2 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v3 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v4 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v5 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v6 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v7 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v8 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v9 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v10 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v11 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v12 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v13 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v14 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v15 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v16 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v17 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v18 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v19 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v20 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v21 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v22 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v23 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v24 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v25 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v27 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v28 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v29 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v30 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v31 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v32 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v33 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v34 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v35 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v36 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v37 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v38 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v39 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v40 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v41 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v42 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v43 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v44 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v45 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v46 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v47 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v48 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v49 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v50 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v51 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v52 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v53 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v54 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v55 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v56 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v58 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v59 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v60 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v61 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v62 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v63 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v64 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v65 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v66 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v67 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v68 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v69 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v70 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v71 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v72 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v73 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v74 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v75 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v76 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v77 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v78 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v79 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v80 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v81 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v82 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v83 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v84 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v85 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v86 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v87 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v89 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v90 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v91 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v92 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v93 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v94 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v95 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v96 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v97 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v98 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v99 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v100 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v101 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v102 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v103 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v104 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v105 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v106 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v107 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v108 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v109 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v110 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v111 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v112 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v113 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v114 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v115 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v116 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v117 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v118 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v120 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v121 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v122 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v123 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v0 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v3 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v6 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v9 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v12 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v15 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v18 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v21 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v24 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v25 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v28 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v31 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v34 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v37 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v40 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v43 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v46 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v49 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v52 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v53 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v56 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v59 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v62 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v65 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v68 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v71 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v74 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v77 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v80 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v81 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v84 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v87 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v90 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v93 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v96 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v99 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v102 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v105 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v108 = 0U;
    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v109 = 0U;
    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
        = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_address;
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        if (vlSelfRef.start) {
            vlSelfRef.gpu__DOT__dispatch_instance__DOT__sv2v_autoblock_3__DOT__i = 1U;
            vlSelfRef.gpu__DOT__dispatch_instance__DOT__sv2v_autoblock_3__DOT__i = 2U;
            vlSelfRef.gpu__DOT__dispatch_instance__DOT__sv2v_autoblock_4__DOT__i = 1U;
            vlSelfRef.gpu__DOT__dispatch_instance__DOT__sv2v_autoblock_4__DOT__i = 2U;
        }
    }
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready 
        = (0xfU & (IData)(vlSelfRef.gpu__DOT__lsu_read_ready));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data 
        = (IData)(vlSelfRef.gpu__DOT__lsu_read_data);
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready 
        = (0xfU & (IData)(vlSelfRef.gpu__DOT__lsu_write_ready));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready 
        = (0xfU & ((IData)(vlSelfRef.gpu__DOT__lsu_read_ready) 
                   >> 4U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data 
        = (IData)((vlSelfRef.gpu__DOT__lsu_read_data 
                   >> 0x20U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready 
        = (0xfU & ((IData)(vlSelfRef.gpu__DOT__lsu_write_ready) 
                   >> 4U));
    vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
    if (vlSelfRef.reset) {
        vlSelfRef.gpu__DOT__dispatch_instance__DOT__sv2v_autoblock_1__DOT__i = 1U;
        vlSelfRef.gpu__DOT__dispatch_instance__DOT__sv2v_autoblock_1__DOT__i = 2U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_2__DOT__b = 1U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_2__DOT__b = 2U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_2__DOT__b = 3U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_2__DOT__b = 4U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 1U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 2U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 3U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 4U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 5U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 6U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 7U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 8U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 9U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 0xaU;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 0xbU;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 0xcU;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 0xdU;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 0xeU;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 0xfU;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 0x10U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_1__DOT__b = 1U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_1__DOT__b = 2U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_1__DOT__b = 3U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_1__DOT__b = 4U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_3__DOT__b = 1U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_3__DOT__b = 2U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_3__DOT__b = 3U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_3__DOT__b = 4U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_3__DOT__b = 5U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_3__DOT__b = 6U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_3__DOT__b = 7U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__sv2v_autoblock_3__DOT__b = 8U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__sv2v_autoblock_2__DOT__b = 1U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__sv2v_autoblock_1__DOT__b = 1U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__sv2v_autoblock_3__DOT__b = 1U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__sv2v_autoblock_3__DOT__b = 2U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 1U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 2U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 3U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 4U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 5U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 6U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 7U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 8U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 9U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 0xaU;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 0xbU;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 0xcU;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 0xdU;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 0xeU;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 0xfU;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__sv2v_autoblock_4__DOT__b = 0x10U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[0U] = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[1U] = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[2U] = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[3U] = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[0U] = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[1U] = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[2U] = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[3U] = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[4U] = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[5U] = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[6U] = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[7U] = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[8U] = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[9U] = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[0xaU] = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[0xbU] = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[0xcU] = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[0xdU] = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[0xeU] = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache[0xfU] = 0U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[0U] = 0ULL;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[1U] = 0ULL;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[2U] = 0ULL;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[3U] = 0ULL;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[4U] = 0ULL;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[5U] = 0ULL;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[6U] = 0ULL;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[7U] = 0ULL;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[8U] = 0ULL;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[9U] = 0ULL;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[0xaU] = 0ULL;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[0xbU] = 0ULL;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[0xcU] = 0ULL;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[0xdU] = 0ULL;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[0xeU] = 0ULL;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache[0xfU] = 0ULL;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_mutex = 0U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer[0U] = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0U] = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1U] = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2U] = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3U] = 0U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state[0U] = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex = 0U;
        vlSelfRef.__Vdly__gpu__DOT__program_memory_controller__DOT__mem_read_address = 0U;
        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address = 0U;
        vlSelfRef.gpu__DOT__dcr_instance__DOT__device_conrol_register = 0U;
        vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched = 0U;
        vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_done = 0U;
        vlSelfRef.gpu__DOT__dispatch_instance__DOT__done = 0U;
        vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__start_execution = 0U;
        vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_start 
            = (2U & (IData)(vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_start));
        vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset 
            = (1U | (IData)(vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset));
        vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id 
            = (0xff00U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id));
        vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count 
            = (4U | (0x38U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count)));
        vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_start 
            = (1U & (IData)(vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_start));
        vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset 
            = (2U | (IData)(vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset));
        vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id 
            = (0xffU & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id));
        vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count 
            = (0x20U | (7U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count)));
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_write_data = 0U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_write_address = 0U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_write_valid = 0U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_ready = 0U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_valid = 0U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_data = 0U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready = 0U;
    } else {
        if (vlSelfRef.device_control_write_enable) {
            vlSelfRef.gpu__DOT__dcr_instance__DOT__device_conrol_register 
                = vlSelfRef.device_control_data;
        }
        if (vlSelfRef.start) {
            if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__start_execution)))) {
                vlSelfRef.gpu__DOT__dispatch_instance__DOT__sv2v_autoblock_2__DOT__i = 1U;
                vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__start_execution = 1U;
                vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset 
                    = (1U | (IData)(vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset));
                vlSelfRef.gpu__DOT__dispatch_instance__DOT__sv2v_autoblock_2__DOT__i = 2U;
                vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset 
                    = (2U | (IData)(vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset));
            }
            if (((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_done) 
                 == (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__total_blocks))) {
                vlSelfRef.gpu__DOT__dispatch_instance__DOT__done = 1U;
            }
            if ((1U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset))) {
                vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset 
                    = (2U & (IData)(vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset));
                if (((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched) 
                     < (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__total_blocks))) {
                    vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_start 
                        = (1U | (IData)(vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_start));
                    vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id 
                        = ((0xff00U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id)) 
                           | (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched));
                    vlSelfRef.gpu__DOT__dispatch_instance__DOT____Vlvbound_h4c6e9b06__0 
                        = (((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched) 
                            == ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__total_blocks) 
                                - (IData)(1U))) ? (7U 
                                                   & ((IData)(vlSelfRef.gpu__DOT__thread_count) 
                                                      - 
                                                      VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched), 2U)))
                            : 4U);
                    vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count 
                        = ((0x38U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count)) 
                           | (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT____Vlvbound_h4c6e9b06__0));
                    vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched)));
                }
            }
            if ((2U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset))) {
                vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset 
                    = (1U & (IData)(vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset));
                if (((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched) 
                     < (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__total_blocks))) {
                    vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_start 
                        = (2U | (IData)(vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_start));
                    vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id 
                        = ((0xffU & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id)) 
                           | ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched) 
                              << 8U));
                    vlSelfRef.gpu__DOT__dispatch_instance__DOT____Vlvbound_h4c6e9b06__0 
                        = (((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched) 
                            == ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__total_blocks) 
                                - (IData)(1U))) ? (7U 
                                                   & ((IData)(vlSelfRef.gpu__DOT__thread_count) 
                                                      - 
                                                      VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched), 2U)))
                            : 4U);
                    vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count 
                        = ((7U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count)) 
                           | ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT____Vlvbound_h4c6e9b06__0) 
                              << 3U));
                    vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched)));
                }
            }
            if ((1U & ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start) 
                       & (IData)(vlSelfRef.gpu__DOT__core_done)))) {
                vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_done 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_done)));
                vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset 
                    = (1U | (IData)(vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset));
                vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_start 
                    = (2U & (IData)(vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_start));
            }
            if ((2U & ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start) 
                       & (IData)(vlSelfRef.gpu__DOT__core_done)))) {
                vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_done 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_done)));
                vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset 
                    = (2U | (IData)(vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset));
                vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_start 
                    = (1U & (IData)(vlSelfRef.__Vdly__gpu__DOT__dispatch_instance__DOT__core_start));
            }
        }
    }
    if ((0U == vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state
         [0U])) {
        if ((2U > (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 0U;
            vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (IData)((vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache
                                  [(0xfU & ((1U & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))
                                             ? (0xfU 
                                                & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                                   >> 1U))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                                    >> 1U))
                                                 : 0U)))] 
                                  >> 3U))) == ((1U 
                                                & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))
                                                ? (7U 
                                                   & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                                      >> 5U))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))
                                                    ? 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                                       >> 5U))
                                                    : 0U)));
            if ((1U & (((IData)(vlSelfRef.gpu__DOT__fetcher_read_valid) 
                        | (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid)) 
                       & (~ (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_mutex))))) {
                vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_mutex 
                    = (1U | (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__current_consumer__v0 = 1U;
                if ((1U & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))) {
                    vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x25U >= (0x3fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(vlSelfRef.gpu__DOT__fetcher_read_address))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address))
                                                     : 0U)))))) 
                           && (1U & (IData)((vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache
                                             [(0xfU 
                                               & ((1U 
                                                   & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))
                                                   ? 
                                                  (0xfU 
                                                   & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                                      >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                                       >> 1U))
                                                    : 0U)))] 
                                             >> (0x3fU 
                                                 & ((IData)(2U) 
                                                    - 
                                                    ((IData)(1U) 
                                                     - 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))
                                                       ? 
                                                      (1U 
                                                       & (IData)(vlSelfRef.gpu__DOT__fetcher_read_address))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))
                                                        ? 
                                                       (1U 
                                                        & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address))
                                                        : 0U)))))))));
                    vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v0 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__program_memory_controller__DOT__mem_read_address 
                            = (0xfeU & (IData)(vlSelfRef.gpu__DOT__fetcher_read_address));
                        vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_valid = 1U;
                        vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v1 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset 
                        = (0xffU & ((1U & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))
                                     ? (1U & (IData)(vlSelfRef.gpu__DOT__fetcher_read_address))
                                     : ((1U & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))
                                         ? (1U & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address))
                                         : 0U)));
                } else if ((1U & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))) {
                    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__data_in 
                        = (0xffffU & vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_data);
                    vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_write_valid = 1U;
                    vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_write_address 
                        = (0xffU & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address));
                    vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_write_data 
                        = (0xffffU & vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_data);
                    vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v2 = 1U;
                    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__line 
                        = (IData)((vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache
                                   [(0xfU & ((1U & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))
                                              ? (0xfU 
                                                 & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                                    >> 1U))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                                     >> 1U))
                                                  : 0U)))] 
                                   >> 6U));
                    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__temp 
                        = __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__line;
                    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__offset 
                        = (1U & ((1U & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))
                                  ? (1U & (IData)(vlSelfRef.gpu__DOT__fetcher_read_address))
                                  : ((1U & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))
                                      ? (1U & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address))
                                      : 0U)));
                    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__temp 
                        = (((~ ((IData)(0xffffU) << 
                                (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(__Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__offset), 4U)))) 
                            & __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__temp) 
                           | (0xffffffffULL & ((IData)(__Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__data_in) 
                                               << (0x1fU 
                                                   & VL_SHIFTL_III(5,32,32, (IData)(__Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__offset), 4U)))));
                    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__Vfuncout 
                        = __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__program_memory_controller__DOT__cache__v0 
                        = __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__cache__v0 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v0 
                        = (0xfU & ((1U & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))
                                    ? (0xfU & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                               >> 1U))
                                    : ((1U & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))
                                        ? (0xfU & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                                   >> 1U))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__program_memory_controller__DOT__cache__v1 
                        = (3U & ((IData)((vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache
                                          [(0xfU & 
                                            ((1U & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))
                                              ? (0xfU 
                                                 & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                                    >> 1U))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                                     >> 1U))
                                                  : 0U)))] 
                                          >> 1U)) | 
                                 ([&]() {
                                    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_valid_mask_by_offset__17__offset 
                                        = (1U & ((1U 
                                                  & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelfRef.gpu__DOT__fetcher_read_address))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_valid_mask_by_offset__17__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_valid_mask_by_offset__17__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__program_memory_controller__DOT__cache_valid_mask_by_offset__17__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__program_memory_controller__DOT__cache_valid_mask_by_offset__17__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__program_memory_controller__DOT__cache_valid_mask_by_offset__17__Vfuncout))));
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v1 
                            = (0xfU & (0xfU & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                               >> 1U)));
                        vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v2 
                            = (0xfU & (0xfU & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                               >> 1U)));
                    } else if ((1U & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v1 
                            = (0xfU & (0xfU & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                               >> 1U)));
                        vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v2 
                            = (0xfU & (0xfU & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                               >> 1U)));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v1 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v2 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 1U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 1U;
            vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (IData)((vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache
                                  [(0xfU & ((2U & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))
                                             ? (0xfU 
                                                & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                                   >> 9U))
                                             : ((2U 
                                                 & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                                    >> 9U))
                                                 : 0U)))] 
                                  >> 3U))) == ((2U 
                                                & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))
                                                ? (7U 
                                                   & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                                      >> 0xdU))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))
                                                    ? 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                                       >> 0xdU))
                                                    : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__fetcher_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid)) 
                        >> 1U) & (~ ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_mutex) 
                                     >> 1U))))) {
                vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_mutex 
                    = (2U | (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__current_consumer__v1 = 1U;
                if ((2U & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))) {
                    vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x25U >= (0x3fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))
                                                    ? 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                                       >> 8U))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))
                                                     ? 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                                        >> 8U))
                                                     : 0U)))))) 
                           && (1U & (IData)((vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache
                                             [(0xfU 
                                               & ((2U 
                                                   & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))
                                                   ? 
                                                  (0xfU 
                                                   & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                                      >> 9U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                                       >> 9U))
                                                    : 0U)))] 
                                             >> (0x3fU 
                                                 & ((IData)(2U) 
                                                    - 
                                                    ((IData)(1U) 
                                                     - 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))
                                                       ? 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                                          >> 8U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))
                                                        ? 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                                           >> 8U))
                                                        : 0U)))))))));
                    vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v3 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__program_memory_controller__DOT__mem_read_address 
                            = (0xfeU & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                        >> 8U));
                        vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_valid = 1U;
                        vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v4 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset 
                        = (0xffU & ((2U & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))
                                     ? (1U & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                              >> 8U))
                                     : ((2U & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))
                                         ? (1U & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                                  >> 8U))
                                         : 0U)));
                } else if ((2U & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))) {
                    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__data_in 
                        = (vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_data 
                           >> 0x10U);
                    vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_write_valid = 1U;
                    vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_write_address 
                        = (0xffU & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                    >> 8U));
                    vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_write_data 
                        = (vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_data 
                           >> 0x10U);
                    vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v5 = 1U;
                    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__line 
                        = (IData)((vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache
                                   [(0xfU & ((2U & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))
                                              ? (0xfU 
                                                 & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                                    >> 9U))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                                     >> 9U))
                                                  : 0U)))] 
                                   >> 6U));
                    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__temp 
                        = __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__line;
                    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__offset 
                        = (1U & ((2U & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))
                                  ? (1U & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                           >> 8U)) : 
                                 ((2U & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))
                                   ? (1U & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                            >> 8U))
                                   : 0U)));
                    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__temp 
                        = (((~ ((IData)(0xffffU) << 
                                (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(__Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__offset), 4U)))) 
                            & __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__temp) 
                           | (0xffffffffULL & ((IData)(__Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__data_in) 
                                               << (0x1fU 
                                                   & VL_SHIFTL_III(5,32,32, (IData)(__Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__offset), 4U)))));
                    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__Vfuncout 
                        = __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__program_memory_controller__DOT__cache__v3 
                        = __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_write_by_offset__16__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__cache__v3 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v3 
                        = (0xfU & ((2U & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))
                                    ? (0xfU & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                               >> 9U))
                                    : ((2U & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))
                                        ? (0xfU & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                                   >> 9U))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__program_memory_controller__DOT__cache__v4 
                        = (3U & ((IData)((vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache
                                          [(0xfU & 
                                            ((2U & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))
                                              ? (0xfU 
                                                 & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                                    >> 9U))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                                     >> 9U))
                                                  : 0U)))] 
                                          >> 1U)) | 
                                 ([&]() {
                                    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_valid_mask_by_offset__17__offset 
                                        = (1U & ((2U 
                                                  & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))
                                                  ? 
                                                 (1U 
                                                  & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                                     >> 8U))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))
                                                   ? 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                                      >> 8U))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_valid_mask_by_offset__17__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_valid_mask_by_offset__17__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__program_memory_controller__DOT__cache_valid_mask_by_offset__17__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__program_memory_controller__DOT__cache_valid_mask_by_offset__17__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__program_memory_controller__DOT__cache_valid_mask_by_offset__17__Vfuncout))));
                    if ((2U & (IData)(vlSelfRef.gpu__DOT__fetcher_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v4 
                            = (0xfU & (0xfU & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                               >> 9U)));
                        vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v5 
                            = (0xfU & (0xfU & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                               >> 9U)));
                    } else if ((2U & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v4 
                            = (0xfU & (0xfU & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                               >> 9U)));
                        vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v5 
                            = (0xfU & (0xfU & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                               >> 9U)));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v4 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v5 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 2U;
        if ((2U <= (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j 
                = vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break;
        }
        if ((3U != (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
        }
    } else if ((1U == vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state
                [0U])) {
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready 
            = ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready) 
               | (3U & ((IData)(1U) << vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                        [0U])));
        vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v6 = 1U;
        __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_read_by_offset__18__offset 
            = (1U & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset));
        __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_read_by_offset__18__line 
            = (IData)((vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache
                       [(0xfU & ((1U & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_valid) 
                                        >> vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                        [0U])) ? (0xfU 
                                                  & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                                     >> 
                                                     (0xfU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_SHIFTL_III(4,32,32, 
                                                                       vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                                                       [0U], 3U)))))
                                  : ((1U & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid) 
                                            >> vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                            [0U])) ? 
                                     (0xfU & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                              >> (0xfU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     VL_SHIFTL_III(4,32,32, 
                                                                   vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                                                   [0U], 3U)))))
                                      : 0U)))] >> 6U));
        __Vfunc_gpu__DOT__program_memory_controller__DOT__cache_read_by_offset__18__Vfuncout 
            = (0xffffU & (__Vfunc_gpu__DOT__program_memory_controller__DOT__cache_read_by_offset__18__line 
                          >> (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(__Vfunc_gpu__DOT__program_memory_controller__DOT__cache_read_by_offset__18__offset), 4U))));
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_data 
            = (((~ ((IData)(0xffffU) << (0x1fU & VL_SHIFTL_III(5,32,32, 
                                                               vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                                               [0U], 4U)))) 
                & vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_data) 
               | (0xffffffffULL & ((IData)(__Vfunc_gpu__DOT__program_memory_controller__DOT__cache_read_by_offset__18__Vfuncout) 
                                   << (0x1fU & VL_SHIFTL_III(5,32,32, 
                                                             vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                                             [0U], 4U)))));
    } else if ((2U == vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state
                [0U])) {
        if (vlSelfRef.program_mem_read_ready) {
            vlSelfRef.__Vdly__gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read 
                = ((IData)(1U) + vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read);
            vlSelfRef.gpu__DOT__program_memory_controller__DOT____Vlvbound_he4e9ff2c__0 
                = vlSelfRef.program_mem_read_data;
            vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_valid = 0U;
            if ((0x25U >= (0x3fU & (((IData)(0x25U) 
                                     - ((IData)(0x1fU) 
                                        - (VL_SHIFTL_III(6,32,32, 
                                                         ((IData)(1U) 
                                                          + vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read), 4U) 
                                           - (IData)(1U)))) 
                                    - (IData)(0xfU))))) {
                vlSelfRef.__VdlyVal__gpu__DOT__program_memory_controller__DOT__cache__v6 
                    = vlSelfRef.gpu__DOT__program_memory_controller__DOT____Vlvbound_he4e9ff2c__0;
                vlSelfRef.__VdlyLsb__gpu__DOT__program_memory_controller__DOT__cache__v6 
                    = (0x3fU & (((IData)(0x25U) - ((IData)(0x1fU) 
                                                   - 
                                                   (VL_SHIFTL_III(6,32,32, 
                                                                  ((IData)(1U) 
                                                                   + vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read), 4U) 
                                                    - (IData)(1U)))) 
                                - (IData)(0xfU)));
                vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v6 
                    = (0xfU & ((1U & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_valid) 
                                      >> vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                      [0U])) ? (0xfU 
                                                & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(4,32,32, 
                                                                     vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                                                     [0U], 3U)))))
                                : ((1U & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid) 
                                          >> vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                          [0U])) ? 
                                   (0xfU & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                            >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_SHIFTL_III(4,32,32, 
                                                                 vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                                                 [0U], 3U)))))
                                    : 0U)));
                vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__cache__v6 = 1U;
            }
            if (VL_GTS_III(32, 1U, vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read)) {
                vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v7 = 1U;
            } else {
                if ((1U & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_valid) 
                           >> vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                           [0U]))) {
                    vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v7 
                        = (0xfU & (0xfU & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                           >> (0xfU 
                                               & ((IData)(1U) 
                                                  + 
                                                  VL_SHIFTL_III(4,32,32, 
                                                                vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                                                [0U], 3U))))));
                    vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v8 
                        = (0xfU & (0xfU & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                           >> (0xfU 
                                               & ((IData)(1U) 
                                                  + 
                                                  VL_SHIFTL_III(4,32,32, 
                                                                vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                                                [0U], 3U))))));
                    vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v9 
                        = (0xfU & (0xfU & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                           >> (0xfU 
                                               & ((IData)(1U) 
                                                  + 
                                                  VL_SHIFTL_III(4,32,32, 
                                                                vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                                                [0U], 3U))))));
                } else if ((1U & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid) 
                                  >> vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                  [0U]))) {
                    vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v7 
                        = (0xfU & (0xfU & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                           >> (0xfU 
                                               & ((IData)(1U) 
                                                  + 
                                                  VL_SHIFTL_III(4,32,32, 
                                                                vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                                                [0U], 3U))))));
                    vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v8 
                        = (0xfU & (0xfU & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                           >> (0xfU 
                                               & ((IData)(1U) 
                                                  + 
                                                  VL_SHIFTL_III(4,32,32, 
                                                                vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                                                [0U], 3U))))));
                    vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v9 
                        = (0xfU & (0xfU & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                           >> (0xfU 
                                               & ((IData)(1U) 
                                                  + 
                                                  VL_SHIFTL_III(4,32,32, 
                                                                vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                                                [0U], 3U))))));
                } else {
                    vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v7 
                        = (0xfU & 0U);
                    vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v8 
                        = (0xfU & 0U);
                    vlSelfRef.__VdlyDim0__gpu__DOT__program_memory_controller__DOT__cache__v9 
                        = (0xfU & 0U);
                }
                vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__cache__v7 = 1U;
                vlSelfRef.__VdlyVal__gpu__DOT__program_memory_controller__DOT__cache__v8 
                    = (7U & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_address) 
                             >> 5U));
                vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready 
                    = ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready) 
                       | (3U & ((IData)(1U) << vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                [0U])));
                __Vfunc_gpu__DOT__program_memory_controller__DOT__select_consumer_read_data__19__tail_data 
                    = vlSelfRef.program_mem_read_data;
                __Vfunc_gpu__DOT__program_memory_controller__DOT__select_consumer_read_data__19__line_data 
                    = (IData)((vlSelfRef.gpu__DOT__program_memory_controller__DOT__cache
                               [(0xfU & ((1U & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_valid) 
                                                >> 
                                                vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                                [0U]))
                                          ? (0xfU & 
                                             ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                              >> (0xfU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     VL_SHIFTL_III(4,32,32, 
                                                                   vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                                                   [0U], 3U)))))
                                          : ((1U & 
                                              ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid) 
                                               >> vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                               [0U]))
                                              ? (0xfU 
                                                 & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                                    >> 
                                                    (0xfU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        VL_SHIFTL_III(4,32,32, 
                                                                      vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                                                      [0U], 3U)))))
                                              : 0U)))] 
                               >> 6U));
                __Vfunc_gpu__DOT__program_memory_controller__DOT__select_consumer_read_data__19__offset 
                    = (1U & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset));
                __Vfunc_gpu__DOT__program_memory_controller__DOT__select_consumer_read_data__19__Vfuncout = 0U;
                if (__Vfunc_gpu__DOT__program_memory_controller__DOT__select_consumer_read_data__19__offset) {
                    __Vfunc_gpu__DOT__program_memory_controller__DOT__select_consumer_read_data__19__Vfuncout 
                        = __Vfunc_gpu__DOT__program_memory_controller__DOT__select_consumer_read_data__19__tail_data;
                } else {
                    if ((1U & (~ (IData)(__Vfunc_gpu__DOT__program_memory_controller__DOT__select_consumer_read_data__19__offset)))) {
                        __Vfunc_gpu__DOT__program_memory_controller__DOT__select_consumer_read_data__19__Vfuncout 
                            = (0xffffU & __Vfunc_gpu__DOT__program_memory_controller__DOT__select_consumer_read_data__19__line_data);
                    }
                    if (__Vfunc_gpu__DOT__program_memory_controller__DOT__select_consumer_read_data__19__offset) {
                        __Vfunc_gpu__DOT__program_memory_controller__DOT__select_consumer_read_data__19__Vfuncout 
                            = (__Vfunc_gpu__DOT__program_memory_controller__DOT__select_consumer_read_data__19__line_data 
                               >> 0x10U);
                    }
                }
                vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_data 
                    = (((~ ((IData)(0xffffU) << (0x1fU 
                                                 & VL_SHIFTL_III(5,32,32, 
                                                                 vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                                                 [0U], 4U)))) 
                        & vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_data) 
                       | (0xffffffffULL & ((IData)(__Vfunc_gpu__DOT__program_memory_controller__DOT__select_consumer_read_data__19__Vfuncout) 
                                           << (0x1fU 
                                               & VL_SHIFTL_III(5,32,32, 
                                                               vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                                               [0U], 4U)))));
            }
        }
    } else if ((3U == vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state
                [0U])) {
        vlSelfRef.__Vdly__gpu__DOT__program_memory_controller__DOT__mem_read_address 
            = (0xffU & ((0xfeU & ((1U & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_valid) 
                                         >> vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                         [0U])) ? (0xffU 
                                                   & ((IData)(vlSelfRef.gpu__DOT__fetcher_read_address) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,32,32, 
                                                                       vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                                                       [0U], 3U))))
                                   : ((1U & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid) 
                                             >> vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                             [0U]))
                                       ? (0xffU & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address) 
                                                   >> 
                                                   (0xfU 
                                                    & VL_SHIFTL_III(4,32,32, 
                                                                    vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                                                    [0U], 3U))))
                                       : 0U))) | vlSelfRef.gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read));
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_valid = 1U;
        vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v9 = 1U;
    } else if ((5U == vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state
                [0U])) {
        if (vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_write_ready) {
            vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_write_valid = 0U;
            vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_ready 
                = ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_ready) 
                   | (3U & ((IData)(1U) << vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                            [0U])));
            vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v10 = 1U;
        }
    } else if ((4U == vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state
                [0U])) {
        vlSelfRef.__Vdly__gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read = 0U;
        if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__fetcher_read_valid) 
                      >> vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                      [0U])))) {
            vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_mutex 
                = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                       [0U])) & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_mutex));
            vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready 
                = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                       [0U])) & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready));
            vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v11 = 1U;
        }
    } else if ((6U == vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state
                [0U])) {
        if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid) 
                      >> vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                      [0U])))) {
            vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_mutex 
                = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                       [0U])) & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_mutex));
            vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_ready 
                = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                       [0U])) & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_ready));
            vlSelfRef.__VdlySet__gpu__DOT__program_memory_controller__DOT__controller_state__v12 = 1U;
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data = 0ULL;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready = 0U;
    }
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
    if ((0U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
         [0U])) {
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 1U)))
                                     : ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 1U)))
                                         : 0U)))] >> 3U)) 
                   == ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 5U))) : 
                       ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                         ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                          >> 5U))) : 0U)));
            if ((1U & (((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                        | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                       & (~ (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (1U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v0 = 1U;
                if ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_address))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_address))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((1U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 1U)))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 1U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_address))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_address))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v0 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xffffff00U & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfeU & (IData)(vlSelfRef.gpu__DOT__lsu_read_address)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (1U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v1 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset 
                        = (0xffU & ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_address))
                                     : ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_address))
                                         : 0U)));
                } else if ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__data_in 
                        = (0xffU & (IData)(vlSelfRef.gpu__DOT__lsu_write_data));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (1U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xffffff00U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | (0xffU & (IData)(vlSelfRef.gpu__DOT__lsu_write_address)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xffffff00U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | (0xffU & (IData)(vlSelfRef.gpu__DOT__lsu_write_data)));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v2 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((1U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 1U)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 1U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset 
                        = (1U & ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_address))
                                  : ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_address))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v0 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v0 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v0 
                        = (0xfU & ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 1U)))
                                    : ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 1U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v1 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 1U)))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 1U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__offset 
                                        = (1U & ((1U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_address))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_address))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout))));
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v1 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 1U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v2 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 1U))));
                    } else if ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v1 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 1U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v2 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 1U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v1 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v2 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 1U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 1U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 9U)))
                                     : ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 9U)))
                                         : 0U)))] >> 3U)) 
                   == ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0xdU)))
                        : ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0xdU)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 1U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 1U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (2U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v1 = 1U;
                if ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 8U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 8U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((2U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 9U)))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 9U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 8U)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 8U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v3 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xffffff00U & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfeU & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 8U))));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (1U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v4 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset 
                        = (0xffU & ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 8U)))
                                     : ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 8U)))
                                         : 0U)));
                } else if ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 8U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (1U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xffffff00U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                               >> 8U))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xffffff00U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                               >> 8U))));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v5 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((2U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 9U)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 9U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset 
                        = (1U & ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 8U)))
                                  : ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 8U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v3 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v3 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v3 
                        = (0xfU & ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 9U)))
                                    : ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 9U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v4 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 9U)))
                                             : ((2U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 9U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__offset 
                                        = (1U & ((2U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 8U)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 8U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout))));
                    if ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v4 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 9U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v5 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 9U))));
                    } else if ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v4 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 9U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v5 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 9U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v4 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v5 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 2U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 2U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x11U)))
                                     : ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x11U)))
                                         : 0U)))] >> 3U)) 
                   == ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0x15U)))
                        : ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0x15U)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 2U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 2U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (4U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v2 = 1U;
                if ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 0x10U)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 0x10U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((4U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 0x11U)))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 0x11U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 0x10U)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 0x10U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v6 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xffffff00U & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfeU & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x10U))));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (1U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v7 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset 
                        = (0xffU & ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x10U)))
                                     : ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 0x10U)))
                                         : 0U)));
                } else if ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 0x10U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (1U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xffffff00U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                               >> 0x10U))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xffffff00U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                               >> 0x10U))));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v8 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((4U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 0x11U)))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 0x11U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset 
                        = (1U & ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x10U)))
                                  : ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x10U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v6 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v6 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v6 
                        = (0xfU & ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x11U)))
                                    : ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 0x11U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v7 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 0x11U)))
                                             : ((4U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x11U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__offset 
                                        = (1U & ((4U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 0x10U)))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 0x10U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout))));
                    if ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v7 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x11U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v8 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x11U))));
                    } else if ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v7 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x11U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v8 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x11U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v7 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v8 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 3U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 3U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x19U)))
                                     : ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x19U)))
                                         : 0U)))] >> 3U)) 
                   == ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0x1dU)))
                        : ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0x1dU)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 3U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 3U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (8U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v3 = 1U;
                if ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 0x18U)))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 0x18U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((8U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 0x19U)))
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 0x19U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 0x18U)))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 0x18U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v9 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xffffff00U & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfeU & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x18U))));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (1U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v10 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset 
                        = (0xffU & ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x18U)))
                                     : ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 0x18U)))
                                         : 0U)));
                } else if ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 0x18U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (1U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xffffff00U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                               >> 0x18U))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xffffff00U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                               >> 0x18U))));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v11 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((8U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 0x19U)))
                                                 : 
                                                ((8U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 0x19U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset 
                        = (1U & ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x18U)))
                                  : ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x18U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v9 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v9 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v9 
                        = (0xfU & ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x19U)))
                                    : ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 0x19U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v10 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 0x19U)))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x19U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__offset 
                                        = (1U & ((8U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 0x18U)))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 0x18U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout))));
                    if ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v10 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x19U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v11 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x19U))));
                    } else if ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v10 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x19U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v11 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x19U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v10 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v11 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 4U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 4U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x21U)))
                                     : ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x21U)))
                                         : 0U)))] >> 3U)) 
                   == ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0x25U)))
                        : ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0x25U)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 4U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 4U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (0x10U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v4 = 1U;
                if ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 0x20U)))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 0x20U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((0x10U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 0x21U)))
                                                : (
                                                   (0x10U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 0x21U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 0x20U)))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 0x20U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v12 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xffffff00U & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfeU & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x20U))));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (1U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v13 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset 
                        = (0xffU & ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x20U)))
                                     : ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 0x20U)))
                                         : 0U)));
                } else if ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 0x20U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (1U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xffffff00U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                               >> 0x20U))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xffffff00U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                               >> 0x20U))));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v14 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((0x10U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 0x21U)))
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 0x21U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset 
                        = (1U & ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x20U)))
                                  : ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x20U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v12 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v12 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v12 
                        = (0xfU & ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x21U)))
                                    : ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 0x21U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v13 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((0x10U 
                                             & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 0x21U)))
                                             : ((0x10U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x21U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__offset 
                                        = (1U & ((0x10U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 0x20U)))
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 0x20U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout))));
                    if ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v13 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x21U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v14 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x21U))));
                    } else if ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v13 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x21U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v14 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x21U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v13 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v14 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 5U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 5U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x29U)))
                                     : ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x29U)))
                                         : 0U)))] >> 3U)) 
                   == ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0x2dU)))
                        : ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0x2dU)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 5U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 5U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (0x20U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v5 = 1U;
                if ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((0x20U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 0x28U)))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 0x28U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((0x20U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 0x29U)))
                                                : (
                                                   (0x20U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 0x29U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((0x20U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 0x28U)))
                                                     : 
                                                    ((0x20U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 0x28U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v15 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xffffff00U & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfeU & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x28U))));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (1U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v16 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset 
                        = (0xffU & ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x28U)))
                                     : ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 0x28U)))
                                         : 0U)));
                } else if ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 0x28U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (1U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xffffff00U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                               >> 0x28U))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xffffff00U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                               >> 0x28U))));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v17 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((0x20U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 0x29U)))
                                                 : 
                                                ((0x20U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 0x29U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset 
                        = (1U & ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x28U)))
                                  : ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x28U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v15 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v15 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v15 
                        = (0xfU & ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x29U)))
                                    : ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 0x29U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v16 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((0x20U 
                                             & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 0x29U)))
                                             : ((0x20U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x29U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__offset 
                                        = (1U & ((0x20U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 0x28U)))
                                                  : 
                                                 ((0x20U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 0x28U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout))));
                    if ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v16 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x29U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v17 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x29U))));
                    } else if ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v16 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x29U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v17 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x29U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v16 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v17 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 6U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 6U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x31U)))
                                     : ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x31U)))
                                         : 0U)))] >> 3U)) 
                   == ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0x35U)))
                        : ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0x35U)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 6U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 6U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (0x40U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v6 = 1U;
                if ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((0x40U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 0x30U)))
                                                    : 
                                                   ((0x40U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 0x30U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((0x40U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 0x31U)))
                                                : (
                                                   (0x40U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 0x31U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((0x40U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 0x30U)))
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 0x30U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v18 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xffffff00U & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfeU & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x30U))));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (1U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v19 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset 
                        = (0xffU & ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x30U)))
                                     : ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 0x30U)))
                                         : 0U)));
                } else if ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 0x30U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (1U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xffffff00U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                               >> 0x30U))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xffffff00U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                               >> 0x30U))));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v20 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((0x40U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 0x31U)))
                                                 : 
                                                ((0x40U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 0x31U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset 
                        = (1U & ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x30U)))
                                  : ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x30U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v18 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v18 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v18 
                        = (0xfU & ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x31U)))
                                    : ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 0x31U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v19 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((0x40U 
                                             & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 0x31U)))
                                             : ((0x40U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x31U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__offset 
                                        = (1U & ((0x40U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 0x30U)))
                                                  : 
                                                 ((0x40U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 0x30U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout))));
                    if ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v19 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x31U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v20 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x31U))));
                    } else if ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v19 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x31U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v20 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x31U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v19 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v20 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 7U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 7U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x39U)))
                                     : ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x39U)))
                                         : 0U)))] >> 3U)) 
                   == ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0x3dU)))
                        : ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0x3dU)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 7U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 7U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (0x80U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v7 = 1U;
                if ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 0x38U)))
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 0x38U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((0x80U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 0x39U)))
                                                : (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 0x39U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((0x80U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 0x38U)))
                                                     : 
                                                    ((0x80U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 0x38U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v21 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xffffff00U & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfeU & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x38U))));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (1U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v22 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset 
                        = (0xffU & ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x38U)))
                                     : ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 0x38U)))
                                         : 0U)));
                } else if ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 0x38U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (1U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xffffff00U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                               >> 0x38U))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xffffff00U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                               >> 0x38U))));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v23 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((0x80U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 0x39U)))
                                                 : 
                                                ((0x80U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 0x39U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset 
                        = (1U & ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x38U)))
                                  : ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x38U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v21 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__0__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v21 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v21 
                        = (0xfU & ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x39U)))
                                    : ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 0x39U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v22 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((0x80U 
                                             & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 0x39U)))
                                             : ((0x80U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x39U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__offset 
                                        = (1U & ((0x80U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 0x38U)))
                                                  : 
                                                 ((0x80U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 0x38U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__1__Vfuncout))));
                    if ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v22 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x39U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v23 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x39U))));
                    } else if ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v22 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x39U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v23 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x39U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v22 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v23 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 8U;
        if ((2U <= (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j 
                = vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break;
        }
        if ((3U != (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
        }
    } else if ((1U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                [0U])) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready 
            = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready) 
               | (0xffU & ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                           [0U])));
        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v24 = 1U;
        __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__2__offset 
            = (1U & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset));
        __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__2__line 
            = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                                           >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                           [0U])) ? 
                                    (0xfU & (IData)(
                                                    (vlSelfRef.gpu__DOT__lsu_read_address 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_SHIFTL_III(6,32,32, 
                                                                       vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                       [0U], 3U))))))
                                     : ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                                               >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                               [0U]))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(1U) 
                                                                + 
                                                                VL_SHIFTL_III(6,32,32, 
                                                                              vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                              [0U], 3U))))))
                                         : 0U)))] >> 6U));
        __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__2__Vfuncout 
            = (0xffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__2__line) 
                        >> (0xfU & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__2__offset), 3U))));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data 
            = (((~ (0xffULL << (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                      vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                      [0U], 3U)))) 
                & vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data) 
               | ((QData)((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__2__Vfuncout)) 
                  << (0x3fU & VL_SHIFTL_III(6,32,32, 
                                            vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                            [0U], 3U))));
    } else if ((2U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                [0U])) {
        if ((1U & (IData)(vlSelfRef.data_mem_read_ready))) {
            vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read 
                = ((IData)(1U) + vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read);
            vlSelfRef.gpu__DOT__data_memory_controller__DOT____Vlvbound_h14c04415__0 
                = (0xffU & vlSelfRef.data_mem_read_data);
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                = (0xeU & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
            if ((0x15U >= (0x1fU & (((IData)(0x15U) 
                                     - ((IData)(0xfU) 
                                        - (VL_SHIFTL_III(5,32,32, 
                                                         ((IData)(1U) 
                                                          + vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read), 3U) 
                                           - (IData)(1U)))) 
                                    - (IData)(7U))))) {
                vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v24 
                    = vlSelfRef.gpu__DOT__data_memory_controller__DOT____Vlvbound_h14c04415__0;
                vlSelfRef.__VdlyLsb__gpu__DOT__data_memory_controller__DOT__cache__v24 
                    = (0x1fU & (((IData)(0x15U) - ((IData)(0xfU) 
                                                   - 
                                                   (VL_SHIFTL_III(5,32,32, 
                                                                  ((IData)(1U) 
                                                                   + vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read), 3U) 
                                                    - (IData)(1U)))) 
                                - (IData)(7U)));
                vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v24 
                    = (0xfU & ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                                      >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                      [0U])) ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 
                                                           (0x3fU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               VL_SHIFTL_III(6,32,32, 
                                                                             vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                             [0U], 3U))))))
                                : ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                                          >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                          [0U])) ? 
                                   (0xfU & (IData)(
                                                   (vlSelfRef.gpu__DOT__lsu_write_address 
                                                    >> 
                                                    (0x3fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        VL_SHIFTL_III(6,32,32, 
                                                                      vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                      [0U], 3U))))))
                                    : 0U)));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v24 = 1U;
            }
            if (VL_GTS_III(32, 1U, vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read)) {
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v25 = 1U;
            } else {
                if ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                           >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                           [0U]))) {
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v25 
                        = (0xfU & (0xfU & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(6,32,32, 
                                                                     vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                     [0U], 3U)))))));
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v26 
                        = (0xfU & (0xfU & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(6,32,32, 
                                                                     vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                     [0U], 3U)))))));
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v27 
                        = (0xfU & (0xfU & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(6,32,32, 
                                                                     vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                     [0U], 3U)))))));
                } else if ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                                  >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                  [0U]))) {
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v25 
                        = (0xfU & (0xfU & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(6,32,32, 
                                                                     vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                     [0U], 3U)))))));
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v26 
                        = (0xfU & (0xfU & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(6,32,32, 
                                                                     vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                     [0U], 3U)))))));
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v27 
                        = (0xfU & (0xfU & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(6,32,32, 
                                                                     vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                     [0U], 3U)))))));
                } else {
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v25 
                        = (0xfU & 0U);
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v26 
                        = (0xfU & 0U);
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v27 
                        = (0xfU & 0U);
                }
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v25 = 1U;
                vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v26 
                    = (7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_address 
                             >> 5U));
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready 
                    = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready) 
                       | (0xffU & ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                   [0U])));
                __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__3__tail_data 
                    = (0xffU & vlSelfRef.data_mem_read_data);
                __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__3__line_data 
                    = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                                                   >> 
                                                   vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                   [0U]))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 
                                                           (0x3fU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               VL_SHIFTL_III(6,32,32, 
                                                                             vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                             [0U], 3U))))))
                                             : ((1U 
                                                 & ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                                                    >> 
                                                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                    [0U]))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(1U) 
                                                                + 
                                                                VL_SHIFTL_III(6,32,32, 
                                                                              vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                              [0U], 3U))))))
                                                 : 0U)))] 
                                  >> 6U));
                __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__3__offset 
                    = (1U & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__consumer_req_offset));
                __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__3__Vfuncout = 0U;
                if (__Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__3__offset) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__3__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__3__tail_data;
                } else {
                    if ((1U & (~ (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__3__offset)))) {
                        __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__3__Vfuncout 
                            = (0xffU & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__3__line_data));
                    }
                    if (__Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__3__offset) {
                        __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__3__Vfuncout 
                            = (0xffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__3__line_data) 
                                        >> 8U));
                    }
                }
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data 
                    = (((~ (0xffULL << (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                              vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                              [0U], 3U)))) 
                        & vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data) 
                       | ((QData)((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__3__Vfuncout)) 
                          << (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                    [0U], 3U))));
            }
        }
    } else if ((3U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                [0U])) {
        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
            = ((0xffffff00U & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
               | (0xffU & ((0xfeU & ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                                            >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                            [0U])) ? 
                                     (0xffU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 
                                                       (0x3fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                        [0U], 3U)))))
                                      : ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                                                >> 
                                                vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                [0U]))
                                          ? (0xffU 
                                             & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_write_address 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_SHIFTL_III(6,32,32, 
                                                                         vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                         [0U], 3U)))))
                                          : 0U))) | vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read)));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
            = (1U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v27 = 1U;
    } else if ((5U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                [0U])) {
        if ((1U & (IData)(vlSelfRef.data_mem_write_ready))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                = (0xeU & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready 
                = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready) 
                   | (0xffU & ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                               [0U])));
            vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v28 = 1U;
        }
    } else if ((4U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                [0U])) {
        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__chunks_read = 0U;
        if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                      >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                      [0U])))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                       [0U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready 
                = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                       [0U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready));
            vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v29 = 1U;
        }
    } else if ((6U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                [0U])) {
        if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                      >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                      [0U])))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                       [0U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready 
                = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                       [0U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready));
            vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v30 = 1U;
        }
    }
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
    if ((0U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
         [1U])) {
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 1U)))
                                     : ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 1U)))
                                         : 0U)))] >> 3U)) 
                   == ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 5U))) : 
                       ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                         ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                          >> 5U))) : 0U)));
            if ((1U & (((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                        | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                       & (~ (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (1U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v8 = 1U;
                if ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_address))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_address))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((1U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 1U)))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 1U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_address))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_address))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v31 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xffff00ffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfe00U & ((IData)(vlSelfRef.gpu__DOT__lsu_read_address) 
                                             << 8U)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (2U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v32 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__consumer_req_offset 
                        = (0xffU & ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_address))
                                     : ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_address))
                                         : 0U)));
                } else if ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__data_in 
                        = (0xffU & (IData)(vlSelfRef.gpu__DOT__lsu_write_data));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (2U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xffff00ffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | (0xff00U & ((IData)(vlSelfRef.gpu__DOT__lsu_write_address) 
                                         << 8U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xffff00ffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | (0xff00U & ((IData)(vlSelfRef.gpu__DOT__lsu_write_data) 
                                         << 8U)));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v33 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((1U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 1U)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 1U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset 
                        = (1U & ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_address))
                                  : ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_address))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v28 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v28 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v28 
                        = (0xfU & ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 1U)))
                                    : ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 1U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v29 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 1U)))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 1U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__offset 
                                        = (1U & ((1U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_address))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_address))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout))));
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v29 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 1U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v30 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 1U))));
                    } else if ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v29 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 1U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v30 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 1U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v29 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v30 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 1U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 1U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 9U)))
                                     : ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 9U)))
                                         : 0U)))] >> 3U)) 
                   == ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0xdU)))
                        : ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0xdU)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 1U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 1U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (2U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v9 = 1U;
                if ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 8U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 8U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((2U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 9U)))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 9U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 8U)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 8U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v34 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xffff00ffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfe00U & ((IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 8U)) 
                                             << 8U)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (2U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v35 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__consumer_req_offset 
                        = (0xffU & ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 8U)))
                                     : ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 8U)))
                                         : 0U)));
                } else if ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 8U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (2U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xffff00ffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | (0xff00U & ((IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                                  >> 8U)) 
                                         << 8U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xffff00ffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | (0xff00U & ((IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                                  >> 8U)) 
                                         << 8U)));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v36 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((2U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 9U)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 9U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset 
                        = (1U & ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 8U)))
                                  : ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 8U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v31 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v31 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v31 
                        = (0xfU & ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 9U)))
                                    : ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 9U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v32 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 9U)))
                                             : ((2U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 9U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__offset 
                                        = (1U & ((2U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 8U)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 8U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout))));
                    if ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v32 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 9U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v33 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 9U))));
                    } else if ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v32 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 9U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v33 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 9U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v32 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v33 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 2U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 2U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x11U)))
                                     : ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x11U)))
                                         : 0U)))] >> 3U)) 
                   == ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0x15U)))
                        : ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0x15U)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 2U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 2U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (4U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v10 = 1U;
                if ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 0x10U)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 0x10U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((4U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 0x11U)))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 0x11U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 0x10U)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 0x10U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v37 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xffff00ffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfe00U & ((IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x10U)) 
                                             << 8U)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (2U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v38 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__consumer_req_offset 
                        = (0xffU & ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x10U)))
                                     : ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 0x10U)))
                                         : 0U)));
                } else if ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 0x10U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (2U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xffff00ffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | (0xff00U & ((IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                                  >> 0x10U)) 
                                         << 8U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xffff00ffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | (0xff00U & ((IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                                  >> 0x10U)) 
                                         << 8U)));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v39 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((4U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 0x11U)))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 0x11U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset 
                        = (1U & ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x10U)))
                                  : ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x10U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v34 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v34 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v34 
                        = (0xfU & ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x11U)))
                                    : ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 0x11U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v35 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 0x11U)))
                                             : ((4U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x11U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__offset 
                                        = (1U & ((4U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 0x10U)))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 0x10U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout))));
                    if ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v35 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x11U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v36 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x11U))));
                    } else if ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v35 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x11U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v36 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x11U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v35 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v36 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 3U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 3U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x19U)))
                                     : ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x19U)))
                                         : 0U)))] >> 3U)) 
                   == ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0x1dU)))
                        : ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0x1dU)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 3U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 3U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (8U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v11 = 1U;
                if ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 0x18U)))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 0x18U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((8U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 0x19U)))
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 0x19U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 0x18U)))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 0x18U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v40 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xffff00ffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfe00U & ((IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x18U)) 
                                             << 8U)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (2U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v41 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__consumer_req_offset 
                        = (0xffU & ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x18U)))
                                     : ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 0x18U)))
                                         : 0U)));
                } else if ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 0x18U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (2U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xffff00ffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | (0xff00U & ((IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                                  >> 0x18U)) 
                                         << 8U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xffff00ffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | (0xff00U & ((IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                                  >> 0x18U)) 
                                         << 8U)));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v42 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((8U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 0x19U)))
                                                 : 
                                                ((8U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 0x19U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset 
                        = (1U & ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x18U)))
                                  : ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x18U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v37 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v37 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v37 
                        = (0xfU & ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x19U)))
                                    : ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 0x19U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v38 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 0x19U)))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x19U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__offset 
                                        = (1U & ((8U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 0x18U)))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 0x18U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout))));
                    if ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v38 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x19U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v39 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x19U))));
                    } else if ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v38 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x19U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v39 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x19U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v38 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v39 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 4U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 4U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x21U)))
                                     : ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x21U)))
                                         : 0U)))] >> 3U)) 
                   == ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0x25U)))
                        : ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0x25U)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 4U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 4U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (0x10U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v12 = 1U;
                if ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 0x20U)))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 0x20U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((0x10U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 0x21U)))
                                                : (
                                                   (0x10U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 0x21U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 0x20U)))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 0x20U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v43 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xffff00ffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfe00U & ((IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x20U)) 
                                             << 8U)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (2U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v44 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__consumer_req_offset 
                        = (0xffU & ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x20U)))
                                     : ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 0x20U)))
                                         : 0U)));
                } else if ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 0x20U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (2U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xffff00ffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | (0xff00U & ((IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                                  >> 0x20U)) 
                                         << 8U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xffff00ffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | (0xff00U & ((IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                                  >> 0x20U)) 
                                         << 8U)));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v45 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((0x10U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 0x21U)))
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 0x21U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset 
                        = (1U & ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x20U)))
                                  : ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x20U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v40 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v40 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v40 
                        = (0xfU & ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x21U)))
                                    : ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 0x21U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v41 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((0x10U 
                                             & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 0x21U)))
                                             : ((0x10U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x21U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__offset 
                                        = (1U & ((0x10U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 0x20U)))
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 0x20U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout))));
                    if ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v41 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x21U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v42 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x21U))));
                    } else if ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v41 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x21U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v42 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x21U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v41 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v42 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 5U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 5U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x29U)))
                                     : ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x29U)))
                                         : 0U)))] >> 3U)) 
                   == ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0x2dU)))
                        : ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0x2dU)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 5U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 5U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (0x20U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v13 = 1U;
                if ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((0x20U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 0x28U)))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 0x28U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((0x20U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 0x29U)))
                                                : (
                                                   (0x20U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 0x29U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((0x20U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 0x28U)))
                                                     : 
                                                    ((0x20U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 0x28U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v46 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xffff00ffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfe00U & ((IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x28U)) 
                                             << 8U)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (2U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v47 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__consumer_req_offset 
                        = (0xffU & ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x28U)))
                                     : ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 0x28U)))
                                         : 0U)));
                } else if ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 0x28U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (2U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xffff00ffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | (0xff00U & ((IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                                  >> 0x28U)) 
                                         << 8U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xffff00ffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | (0xff00U & ((IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                                  >> 0x28U)) 
                                         << 8U)));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v48 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((0x20U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 0x29U)))
                                                 : 
                                                ((0x20U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 0x29U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset 
                        = (1U & ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x28U)))
                                  : ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x28U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v43 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v43 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v43 
                        = (0xfU & ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x29U)))
                                    : ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 0x29U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v44 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((0x20U 
                                             & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 0x29U)))
                                             : ((0x20U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x29U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__offset 
                                        = (1U & ((0x20U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 0x28U)))
                                                  : 
                                                 ((0x20U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 0x28U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout))));
                    if ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v44 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x29U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v45 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x29U))));
                    } else if ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v44 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x29U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v45 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x29U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v44 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v45 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 6U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 6U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x31U)))
                                     : ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x31U)))
                                         : 0U)))] >> 3U)) 
                   == ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0x35U)))
                        : ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0x35U)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 6U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 6U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (0x40U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v14 = 1U;
                if ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((0x40U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 0x30U)))
                                                    : 
                                                   ((0x40U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 0x30U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((0x40U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 0x31U)))
                                                : (
                                                   (0x40U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 0x31U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((0x40U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 0x30U)))
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 0x30U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v49 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xffff00ffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfe00U & ((IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x30U)) 
                                             << 8U)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (2U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v50 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__consumer_req_offset 
                        = (0xffU & ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x30U)))
                                     : ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 0x30U)))
                                         : 0U)));
                } else if ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 0x30U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (2U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xffff00ffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | (0xff00U & ((IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                                  >> 0x30U)) 
                                         << 8U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xffff00ffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | (0xff00U & ((IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                                  >> 0x30U)) 
                                         << 8U)));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v51 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((0x40U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 0x31U)))
                                                 : 
                                                ((0x40U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 0x31U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset 
                        = (1U & ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x30U)))
                                  : ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x30U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v46 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v46 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v46 
                        = (0xfU & ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x31U)))
                                    : ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 0x31U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v47 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((0x40U 
                                             & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 0x31U)))
                                             : ((0x40U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x31U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__offset 
                                        = (1U & ((0x40U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 0x30U)))
                                                  : 
                                                 ((0x40U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 0x30U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout))));
                    if ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v47 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x31U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v48 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x31U))));
                    } else if ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v47 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x31U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v48 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x31U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v47 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v48 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 7U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 7U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x39U)))
                                     : ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x39U)))
                                         : 0U)))] >> 3U)) 
                   == ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0x3dU)))
                        : ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0x3dU)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 7U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 7U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (0x80U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v15 = 1U;
                if ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 0x38U)))
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 0x38U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((0x80U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 0x39U)))
                                                : (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 0x39U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((0x80U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 0x38U)))
                                                     : 
                                                    ((0x80U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 0x38U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v52 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xffff00ffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfe00U & ((IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x38U)) 
                                             << 8U)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (2U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v53 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__consumer_req_offset 
                        = (0xffU & ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x38U)))
                                     : ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 0x38U)))
                                         : 0U)));
                } else if ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 0x38U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (2U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xffff00ffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | (0xff00U & ((IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                                  >> 0x38U)) 
                                         << 8U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xffff00ffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | (0xff00U & ((IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                                  >> 0x38U)) 
                                         << 8U)));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v54 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((0x80U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 0x39U)))
                                                 : 
                                                ((0x80U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 0x39U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset 
                        = (1U & ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x38U)))
                                  : ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x38U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v49 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__4__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v49 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v49 
                        = (0xfU & ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x39U)))
                                    : ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 0x39U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v50 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((0x80U 
                                             & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 0x39U)))
                                             : ((0x80U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x39U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__offset 
                                        = (1U & ((0x80U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 0x38U)))
                                                  : 
                                                 ((0x80U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 0x38U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__5__Vfuncout))));
                    if ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v50 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x39U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v51 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x39U))));
                    } else if ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v50 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x39U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v51 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x39U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v50 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v51 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 8U;
        if ((2U <= (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j 
                = vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break;
        }
        if ((3U != (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
        }
    } else if ((1U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                [1U])) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready 
            = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready) 
               | (0xffU & ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                           [1U])));
        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v55 = 1U;
        __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__6__offset 
            = (1U & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__consumer_req_offset));
        __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__6__line 
            = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                                           >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                           [1U])) ? 
                                    (0xfU & (IData)(
                                                    (vlSelfRef.gpu__DOT__lsu_read_address 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_SHIFTL_III(6,32,32, 
                                                                       vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                       [1U], 3U))))))
                                     : ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                                               >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                               [1U]))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(1U) 
                                                                + 
                                                                VL_SHIFTL_III(6,32,32, 
                                                                              vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                              [1U], 3U))))))
                                         : 0U)))] >> 6U));
        __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__6__Vfuncout 
            = (0xffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__6__line) 
                        >> (0xfU & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__6__offset), 3U))));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data 
            = (((~ (0xffULL << (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                      vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                      [1U], 3U)))) 
                & vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data) 
               | ((QData)((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__6__Vfuncout)) 
                  << (0x3fU & VL_SHIFTL_III(6,32,32, 
                                            vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                            [1U], 3U))));
    } else if ((2U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                [1U])) {
        if ((2U & (IData)(vlSelfRef.data_mem_read_ready))) {
            vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__chunks_read 
                = ((IData)(1U) + vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__chunks_read);
            vlSelfRef.gpu__DOT__data_memory_controller__DOT____Vlvbound_h98b46d85__0 
                = (0xffU & (vlSelfRef.data_mem_read_data 
                            >> 8U));
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                = (0xdU & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
            if ((0x15U >= (0x1fU & (((IData)(0x15U) 
                                     - ((IData)(0xfU) 
                                        - (VL_SHIFTL_III(5,32,32, 
                                                         ((IData)(1U) 
                                                          + vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__chunks_read), 3U) 
                                           - (IData)(1U)))) 
                                    - (IData)(7U))))) {
                vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v52 
                    = vlSelfRef.gpu__DOT__data_memory_controller__DOT____Vlvbound_h98b46d85__0;
                vlSelfRef.__VdlyLsb__gpu__DOT__data_memory_controller__DOT__cache__v52 
                    = (0x1fU & (((IData)(0x15U) - ((IData)(0xfU) 
                                                   - 
                                                   (VL_SHIFTL_III(5,32,32, 
                                                                  ((IData)(1U) 
                                                                   + vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__chunks_read), 3U) 
                                                    - (IData)(1U)))) 
                                - (IData)(7U)));
                vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v52 
                    = (0xfU & ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                                      >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                      [1U])) ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 
                                                           (0x3fU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               VL_SHIFTL_III(6,32,32, 
                                                                             vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                             [1U], 3U))))))
                                : ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                                          >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                          [1U])) ? 
                                   (0xfU & (IData)(
                                                   (vlSelfRef.gpu__DOT__lsu_write_address 
                                                    >> 
                                                    (0x3fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        VL_SHIFTL_III(6,32,32, 
                                                                      vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                      [1U], 3U))))))
                                    : 0U)));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v52 = 1U;
            }
            if (VL_GTS_III(32, 1U, vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__chunks_read)) {
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v56 = 1U;
            } else {
                if ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                           >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                           [1U]))) {
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v53 
                        = (0xfU & (0xfU & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(6,32,32, 
                                                                     vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                     [1U], 3U)))))));
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v54 
                        = (0xfU & (0xfU & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(6,32,32, 
                                                                     vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                     [1U], 3U)))))));
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v55 
                        = (0xfU & (0xfU & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(6,32,32, 
                                                                     vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                     [1U], 3U)))))));
                } else if ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                                  >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                  [1U]))) {
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v53 
                        = (0xfU & (0xfU & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(6,32,32, 
                                                                     vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                     [1U], 3U)))))));
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v54 
                        = (0xfU & (0xfU & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(6,32,32, 
                                                                     vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                     [1U], 3U)))))));
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v55 
                        = (0xfU & (0xfU & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(6,32,32, 
                                                                     vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                     [1U], 3U)))))));
                } else {
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v53 
                        = (0xfU & 0U);
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v54 
                        = (0xfU & 0U);
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v55 
                        = (0xfU & 0U);
                }
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v53 = 1U;
                vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v54 
                    = (7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_address 
                             >> 0xdU));
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready 
                    = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready) 
                       | (0xffU & ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                   [1U])));
                __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__7__tail_data 
                    = (0xffU & (vlSelfRef.data_mem_read_data 
                                >> 8U));
                __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__7__line_data 
                    = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                                                   >> 
                                                   vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                   [1U]))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 
                                                           (0x3fU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               VL_SHIFTL_III(6,32,32, 
                                                                             vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                             [1U], 3U))))))
                                             : ((1U 
                                                 & ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                                                    >> 
                                                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                    [1U]))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(1U) 
                                                                + 
                                                                VL_SHIFTL_III(6,32,32, 
                                                                              vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                              [1U], 3U))))))
                                                 : 0U)))] 
                                  >> 6U));
                __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__7__offset 
                    = (1U & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__consumer_req_offset));
                __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__7__Vfuncout = 0U;
                if (__Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__7__offset) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__7__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__7__tail_data;
                } else {
                    if ((1U & (~ (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__7__offset)))) {
                        __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__7__Vfuncout 
                            = (0xffU & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__7__line_data));
                    }
                    if (__Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__7__offset) {
                        __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__7__Vfuncout 
                            = (0xffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__7__line_data) 
                                        >> 8U));
                    }
                }
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data 
                    = (((~ (0xffULL << (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                              vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                              [1U], 3U)))) 
                        & vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data) 
                       | ((QData)((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__7__Vfuncout)) 
                          << (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                    [1U], 3U))));
            }
        }
    } else if ((3U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                [1U])) {
        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
            = ((0xffff00ffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
               | (0xff00U & ((0xfe00U & (((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                                                 >> 
                                                 vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                 [1U]))
                                           ? (0xffU 
                                              & (IData)(
                                                        (vlSelfRef.gpu__DOT__lsu_read_address 
                                                         >> 
                                                         (0x3fU 
                                                          & VL_SHIFTL_III(6,32,32, 
                                                                          vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                          [1U], 3U)))))
                                           : ((1U & 
                                               ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                                                >> 
                                                vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                [1U]))
                                               ? (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 
                                                             (0x3fU 
                                                              & VL_SHIFTL_III(6,32,32, 
                                                                              vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                              [1U], 3U)))))
                                               : 0U)) 
                                         << 8U)) | 
                             (vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__chunks_read 
                              << 8U))));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
            = (2U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v58 = 1U;
    } else if ((5U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                [1U])) {
        if ((2U & (IData)(vlSelfRef.data_mem_write_ready))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                = (0xdU & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready 
                = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready) 
                   | (0xffU & ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                               [1U])));
            vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v59 = 1U;
        }
    } else if ((4U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                [1U])) {
        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__chunks_read = 0U;
        if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                      >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                      [1U])))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                       [1U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready 
                = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                       [1U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready));
            vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v60 = 1U;
        }
    } else if ((6U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                [1U])) {
        if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                      >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                      [1U])))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                       [1U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready 
                = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                       [1U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready));
            vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v61 = 1U;
        }
    }
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
    if ((0U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
         [2U])) {
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 1U)))
                                     : ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 1U)))
                                         : 0U)))] >> 3U)) 
                   == ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 5U))) : 
                       ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                         ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                          >> 5U))) : 0U)));
            if ((1U & (((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                        | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                       & (~ (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (1U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v16 = 1U;
                if ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_address))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_address))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((1U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 1U)))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 1U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_address))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_address))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v62 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xff00ffffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfe0000U & ((IData)(vlSelfRef.gpu__DOT__lsu_read_address) 
                                               << 0x10U)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (4U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v63 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__consumer_req_offset 
                        = (0xffU & ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_address))
                                     : ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_address))
                                         : 0U)));
                } else if ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__data_in 
                        = (0xffU & (IData)(vlSelfRef.gpu__DOT__lsu_write_data));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (4U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xff00ffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | (0xff0000U & ((IData)(vlSelfRef.gpu__DOT__lsu_write_address) 
                                           << 0x10U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xff00ffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | (0xff0000U & ((IData)(vlSelfRef.gpu__DOT__lsu_write_data) 
                                           << 0x10U)));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v64 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((1U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 1U)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 1U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset 
                        = (1U & ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_address))
                                  : ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_address))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v56 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v56 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v56 
                        = (0xfU & ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 1U)))
                                    : ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 1U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v57 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 1U)))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 1U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__offset 
                                        = (1U & ((1U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_address))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_address))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout))));
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v57 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 1U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v58 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 1U))));
                    } else if ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v57 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 1U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v58 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 1U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v57 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v58 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 1U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 1U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 9U)))
                                     : ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 9U)))
                                         : 0U)))] >> 3U)) 
                   == ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0xdU)))
                        : ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0xdU)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 1U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 1U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (2U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v17 = 1U;
                if ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 8U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 8U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((2U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 9U)))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 9U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 8U)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 8U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v65 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xff00ffffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfe0000U & ((IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 8U)) 
                                               << 0x10U)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (4U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v66 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__consumer_req_offset 
                        = (0xffU & ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 8U)))
                                     : ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 8U)))
                                         : 0U)));
                } else if ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 8U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (4U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xff00ffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | (0xff0000U & ((IData)(
                                                   (vlSelfRef.gpu__DOT__lsu_write_address 
                                                    >> 8U)) 
                                           << 0x10U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xff00ffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | (0xff0000U & ((IData)(
                                                   (vlSelfRef.gpu__DOT__lsu_write_data 
                                                    >> 8U)) 
                                           << 0x10U)));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v67 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((2U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 9U)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 9U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset 
                        = (1U & ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 8U)))
                                  : ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 8U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v59 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v59 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v59 
                        = (0xfU & ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 9U)))
                                    : ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 9U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v60 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 9U)))
                                             : ((2U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 9U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__offset 
                                        = (1U & ((2U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 8U)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 8U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout))));
                    if ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v60 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 9U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v61 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 9U))));
                    } else if ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v60 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 9U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v61 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 9U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v60 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v61 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 2U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 2U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x11U)))
                                     : ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x11U)))
                                         : 0U)))] >> 3U)) 
                   == ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0x15U)))
                        : ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0x15U)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 2U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 2U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (4U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v18 = 1U;
                if ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 0x10U)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 0x10U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((4U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 0x11U)))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 0x11U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 0x10U)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 0x10U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v68 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xff00ffffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfe0000U & ((IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (4U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v69 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__consumer_req_offset 
                        = (0xffU & ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x10U)))
                                     : ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 0x10U)))
                                         : 0U)));
                } else if ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 0x10U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (4U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xff00ffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | (0xff0000U & ((IData)(
                                                   (vlSelfRef.gpu__DOT__lsu_write_address 
                                                    >> 0x10U)) 
                                           << 0x10U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xff00ffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | (0xff0000U & ((IData)(
                                                   (vlSelfRef.gpu__DOT__lsu_write_data 
                                                    >> 0x10U)) 
                                           << 0x10U)));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v70 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((4U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 0x11U)))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 0x11U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset 
                        = (1U & ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x10U)))
                                  : ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x10U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v62 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v62 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v62 
                        = (0xfU & ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x11U)))
                                    : ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 0x11U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v63 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 0x11U)))
                                             : ((4U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x11U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__offset 
                                        = (1U & ((4U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 0x10U)))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 0x10U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout))));
                    if ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v63 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x11U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v64 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x11U))));
                    } else if ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v63 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x11U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v64 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x11U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v63 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v64 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 3U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 3U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x19U)))
                                     : ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x19U)))
                                         : 0U)))] >> 3U)) 
                   == ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0x1dU)))
                        : ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0x1dU)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 3U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 3U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (8U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v19 = 1U;
                if ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 0x18U)))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 0x18U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((8U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 0x19U)))
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 0x19U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 0x18U)))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 0x18U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v71 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xff00ffffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfe0000U & ((IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x18U)) 
                                               << 0x10U)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (4U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v72 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__consumer_req_offset 
                        = (0xffU & ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x18U)))
                                     : ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 0x18U)))
                                         : 0U)));
                } else if ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 0x18U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (4U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xff00ffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | (0xff0000U & ((IData)(
                                                   (vlSelfRef.gpu__DOT__lsu_write_address 
                                                    >> 0x18U)) 
                                           << 0x10U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xff00ffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | (0xff0000U & ((IData)(
                                                   (vlSelfRef.gpu__DOT__lsu_write_data 
                                                    >> 0x18U)) 
                                           << 0x10U)));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v73 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((8U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 0x19U)))
                                                 : 
                                                ((8U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 0x19U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset 
                        = (1U & ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x18U)))
                                  : ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x18U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v65 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v65 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v65 
                        = (0xfU & ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x19U)))
                                    : ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 0x19U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v66 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 0x19U)))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x19U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__offset 
                                        = (1U & ((8U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 0x18U)))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 0x18U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout))));
                    if ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v66 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x19U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v67 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x19U))));
                    } else if ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v66 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x19U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v67 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x19U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v66 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v67 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 4U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 4U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x21U)))
                                     : ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x21U)))
                                         : 0U)))] >> 3U)) 
                   == ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0x25U)))
                        : ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0x25U)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 4U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 4U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (0x10U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v20 = 1U;
                if ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 0x20U)))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 0x20U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((0x10U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 0x21U)))
                                                : (
                                                   (0x10U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 0x21U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 0x20U)))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 0x20U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v74 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xff00ffffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfe0000U & ((IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x20U)) 
                                               << 0x10U)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (4U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v75 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__consumer_req_offset 
                        = (0xffU & ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x20U)))
                                     : ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 0x20U)))
                                         : 0U)));
                } else if ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 0x20U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (4U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xff00ffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | (0xff0000U & ((IData)(
                                                   (vlSelfRef.gpu__DOT__lsu_write_address 
                                                    >> 0x20U)) 
                                           << 0x10U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xff00ffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | (0xff0000U & ((IData)(
                                                   (vlSelfRef.gpu__DOT__lsu_write_data 
                                                    >> 0x20U)) 
                                           << 0x10U)));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v76 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((0x10U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 0x21U)))
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 0x21U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset 
                        = (1U & ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x20U)))
                                  : ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x20U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v68 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v68 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v68 
                        = (0xfU & ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x21U)))
                                    : ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 0x21U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v69 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((0x10U 
                                             & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 0x21U)))
                                             : ((0x10U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x21U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__offset 
                                        = (1U & ((0x10U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 0x20U)))
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 0x20U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout))));
                    if ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v69 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x21U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v70 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x21U))));
                    } else if ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v69 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x21U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v70 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x21U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v69 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v70 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 5U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 5U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x29U)))
                                     : ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x29U)))
                                         : 0U)))] >> 3U)) 
                   == ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0x2dU)))
                        : ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0x2dU)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 5U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 5U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (0x20U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v21 = 1U;
                if ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((0x20U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 0x28U)))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 0x28U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((0x20U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 0x29U)))
                                                : (
                                                   (0x20U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 0x29U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((0x20U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 0x28U)))
                                                     : 
                                                    ((0x20U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 0x28U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v77 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xff00ffffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfe0000U & ((IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x28U)) 
                                               << 0x10U)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (4U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v78 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__consumer_req_offset 
                        = (0xffU & ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x28U)))
                                     : ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 0x28U)))
                                         : 0U)));
                } else if ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 0x28U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (4U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xff00ffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | (0xff0000U & ((IData)(
                                                   (vlSelfRef.gpu__DOT__lsu_write_address 
                                                    >> 0x28U)) 
                                           << 0x10U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xff00ffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | (0xff0000U & ((IData)(
                                                   (vlSelfRef.gpu__DOT__lsu_write_data 
                                                    >> 0x28U)) 
                                           << 0x10U)));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v79 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((0x20U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 0x29U)))
                                                 : 
                                                ((0x20U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 0x29U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset 
                        = (1U & ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x28U)))
                                  : ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x28U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v71 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v71 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v71 
                        = (0xfU & ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x29U)))
                                    : ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 0x29U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v72 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((0x20U 
                                             & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 0x29U)))
                                             : ((0x20U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x29U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__offset 
                                        = (1U & ((0x20U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 0x28U)))
                                                  : 
                                                 ((0x20U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 0x28U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout))));
                    if ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v72 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x29U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v73 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x29U))));
                    } else if ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v72 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x29U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v73 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x29U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v72 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v73 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 6U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 6U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x31U)))
                                     : ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x31U)))
                                         : 0U)))] >> 3U)) 
                   == ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0x35U)))
                        : ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0x35U)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 6U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 6U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (0x40U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v22 = 1U;
                if ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((0x40U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 0x30U)))
                                                    : 
                                                   ((0x40U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 0x30U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((0x40U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 0x31U)))
                                                : (
                                                   (0x40U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 0x31U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((0x40U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 0x30U)))
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 0x30U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v80 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xff00ffffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfe0000U & ((IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x30U)) 
                                               << 0x10U)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (4U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v81 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__consumer_req_offset 
                        = (0xffU & ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x30U)))
                                     : ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 0x30U)))
                                         : 0U)));
                } else if ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 0x30U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (4U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xff00ffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | (0xff0000U & ((IData)(
                                                   (vlSelfRef.gpu__DOT__lsu_write_address 
                                                    >> 0x30U)) 
                                           << 0x10U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xff00ffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | (0xff0000U & ((IData)(
                                                   (vlSelfRef.gpu__DOT__lsu_write_data 
                                                    >> 0x30U)) 
                                           << 0x10U)));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v82 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((0x40U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 0x31U)))
                                                 : 
                                                ((0x40U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 0x31U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset 
                        = (1U & ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x30U)))
                                  : ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x30U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v74 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v74 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v74 
                        = (0xfU & ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x31U)))
                                    : ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 0x31U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v75 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((0x40U 
                                             & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 0x31U)))
                                             : ((0x40U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x31U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__offset 
                                        = (1U & ((0x40U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 0x30U)))
                                                  : 
                                                 ((0x40U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 0x30U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout))));
                    if ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v75 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x31U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v76 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x31U))));
                    } else if ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v75 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x31U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v76 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x31U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v75 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v76 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 7U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 7U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x39U)))
                                     : ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x39U)))
                                         : 0U)))] >> 3U)) 
                   == ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0x3dU)))
                        : ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0x3dU)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 7U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 7U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (0x80U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v23 = 1U;
                if ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 0x38U)))
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 0x38U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((0x80U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 0x39U)))
                                                : (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 0x39U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((0x80U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 0x38U)))
                                                     : 
                                                    ((0x80U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 0x38U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v83 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xff00ffffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfe0000U & ((IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x38U)) 
                                               << 0x10U)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (4U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v84 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__consumer_req_offset 
                        = (0xffU & ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x38U)))
                                     : ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 0x38U)))
                                         : 0U)));
                } else if ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 0x38U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (4U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xff00ffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | (0xff0000U & ((IData)(
                                                   (vlSelfRef.gpu__DOT__lsu_write_address 
                                                    >> 0x38U)) 
                                           << 0x10U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xff00ffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | (0xff0000U & ((IData)(
                                                   (vlSelfRef.gpu__DOT__lsu_write_data 
                                                    >> 0x38U)) 
                                           << 0x10U)));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v85 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((0x80U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 0x39U)))
                                                 : 
                                                ((0x80U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 0x39U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset 
                        = (1U & ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x38U)))
                                  : ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x38U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v77 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__8__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v77 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v77 
                        = (0xfU & ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x39U)))
                                    : ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 0x39U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v78 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((0x80U 
                                             & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 0x39U)))
                                             : ((0x80U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x39U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__offset 
                                        = (1U & ((0x80U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 0x38U)))
                                                  : 
                                                 ((0x80U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 0x38U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__9__Vfuncout))));
                    if ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v78 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x39U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v79 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x39U))));
                    } else if ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v78 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x39U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v79 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x39U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v78 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v79 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 8U;
        if ((2U <= (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j 
                = vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break;
        }
        if ((3U != (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
        }
    } else if ((1U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                [2U])) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready 
            = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready) 
               | (0xffU & ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                           [2U])));
        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v86 = 1U;
        __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__10__offset 
            = (1U & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__consumer_req_offset));
        __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__10__line 
            = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                                           >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                           [2U])) ? 
                                    (0xfU & (IData)(
                                                    (vlSelfRef.gpu__DOT__lsu_read_address 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_SHIFTL_III(6,32,32, 
                                                                       vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                       [2U], 3U))))))
                                     : ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                                               >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                               [2U]))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(1U) 
                                                                + 
                                                                VL_SHIFTL_III(6,32,32, 
                                                                              vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                              [2U], 3U))))))
                                         : 0U)))] >> 6U));
        __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__10__Vfuncout 
            = (0xffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__10__line) 
                        >> (0xfU & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__10__offset), 3U))));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data 
            = (((~ (0xffULL << (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                      vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                      [2U], 3U)))) 
                & vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data) 
               | ((QData)((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__10__Vfuncout)) 
                  << (0x3fU & VL_SHIFTL_III(6,32,32, 
                                            vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                            [2U], 3U))));
    } else if ((2U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                [2U])) {
        if ((4U & (IData)(vlSelfRef.data_mem_read_ready))) {
            vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__chunks_read 
                = ((IData)(1U) + vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__chunks_read);
            vlSelfRef.gpu__DOT__data_memory_controller__DOT____Vlvbound_h0c71622f__0 
                = (0xffU & (vlSelfRef.data_mem_read_data 
                            >> 0x10U));
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                = (0xbU & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
            if ((0x15U >= (0x1fU & (((IData)(0x15U) 
                                     - ((IData)(0xfU) 
                                        - (VL_SHIFTL_III(5,32,32, 
                                                         ((IData)(1U) 
                                                          + vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__chunks_read), 3U) 
                                           - (IData)(1U)))) 
                                    - (IData)(7U))))) {
                vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v80 
                    = vlSelfRef.gpu__DOT__data_memory_controller__DOT____Vlvbound_h0c71622f__0;
                vlSelfRef.__VdlyLsb__gpu__DOT__data_memory_controller__DOT__cache__v80 
                    = (0x1fU & (((IData)(0x15U) - ((IData)(0xfU) 
                                                   - 
                                                   (VL_SHIFTL_III(5,32,32, 
                                                                  ((IData)(1U) 
                                                                   + vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__chunks_read), 3U) 
                                                    - (IData)(1U)))) 
                                - (IData)(7U)));
                vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v80 
                    = (0xfU & ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                                      >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                      [2U])) ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 
                                                           (0x3fU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               VL_SHIFTL_III(6,32,32, 
                                                                             vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                             [2U], 3U))))))
                                : ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                                          >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                          [2U])) ? 
                                   (0xfU & (IData)(
                                                   (vlSelfRef.gpu__DOT__lsu_write_address 
                                                    >> 
                                                    (0x3fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        VL_SHIFTL_III(6,32,32, 
                                                                      vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                      [2U], 3U))))))
                                    : 0U)));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v80 = 1U;
            }
            if (VL_GTS_III(32, 1U, vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__chunks_read)) {
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v87 = 1U;
            } else {
                if ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                           >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                           [2U]))) {
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v81 
                        = (0xfU & (0xfU & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(6,32,32, 
                                                                     vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                     [2U], 3U)))))));
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v82 
                        = (0xfU & (0xfU & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(6,32,32, 
                                                                     vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                     [2U], 3U)))))));
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v83 
                        = (0xfU & (0xfU & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(6,32,32, 
                                                                     vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                     [2U], 3U)))))));
                } else if ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                                  >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                  [2U]))) {
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v81 
                        = (0xfU & (0xfU & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(6,32,32, 
                                                                     vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                     [2U], 3U)))))));
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v82 
                        = (0xfU & (0xfU & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(6,32,32, 
                                                                     vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                     [2U], 3U)))))));
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v83 
                        = (0xfU & (0xfU & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(6,32,32, 
                                                                     vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                     [2U], 3U)))))));
                } else {
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v81 
                        = (0xfU & 0U);
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v82 
                        = (0xfU & 0U);
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v83 
                        = (0xfU & 0U);
                }
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v81 = 1U;
                vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v82 
                    = (7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_address 
                             >> 0x15U));
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready 
                    = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready) 
                       | (0xffU & ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                   [2U])));
                __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__11__tail_data 
                    = (0xffU & (vlSelfRef.data_mem_read_data 
                                >> 0x10U));
                __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__11__line_data 
                    = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                                                   >> 
                                                   vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                   [2U]))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 
                                                           (0x3fU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               VL_SHIFTL_III(6,32,32, 
                                                                             vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                             [2U], 3U))))))
                                             : ((1U 
                                                 & ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                                                    >> 
                                                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                    [2U]))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(1U) 
                                                                + 
                                                                VL_SHIFTL_III(6,32,32, 
                                                                              vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                              [2U], 3U))))))
                                                 : 0U)))] 
                                  >> 6U));
                __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__11__offset 
                    = (1U & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__consumer_req_offset));
                __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__11__Vfuncout = 0U;
                if (__Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__11__offset) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__11__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__11__tail_data;
                } else {
                    if ((1U & (~ (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__11__offset)))) {
                        __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__11__Vfuncout 
                            = (0xffU & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__11__line_data));
                    }
                    if (__Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__11__offset) {
                        __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__11__Vfuncout 
                            = (0xffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__11__line_data) 
                                        >> 8U));
                    }
                }
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data 
                    = (((~ (0xffULL << (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                              vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                              [2U], 3U)))) 
                        & vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data) 
                       | ((QData)((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__11__Vfuncout)) 
                          << (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                    [2U], 3U))));
            }
        }
    } else if ((3U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                [2U])) {
        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
            = ((0xff00ffffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
               | (0xff0000U & ((0xfe0000U & (((1U & 
                                               ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                                                >> 
                                                vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                [2U]))
                                               ? (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 
                                                             (0x3fU 
                                                              & VL_SHIFTL_III(6,32,32, 
                                                                              vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                              [2U], 3U)))))
                                               : ((1U 
                                                   & ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                                                      >> 
                                                      vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                      [2U]))
                                                   ? 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_SHIFTL_III(6,32,32, 
                                                                               vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                               [2U], 3U)))))
                                                   : 0U)) 
                                             << 0x10U)) 
                               | (vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__chunks_read 
                                  << 0x10U))));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
            = (4U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v89 = 1U;
    } else if ((5U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                [2U])) {
        if ((4U & (IData)(vlSelfRef.data_mem_write_ready))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                = (0xbU & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready 
                = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready) 
                   | (0xffU & ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                               [2U])));
            vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v90 = 1U;
        }
    } else if ((4U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                [2U])) {
        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__chunks_read = 0U;
        if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                      >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                      [2U])))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                       [2U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready 
                = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                       [2U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready));
            vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v91 = 1U;
        }
    } else if ((6U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                [2U])) {
        if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                      >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                      [2U])))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                       [2U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready 
                = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                       [2U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready));
            vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v92 = 1U;
        }
    }
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
    if ((0U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
         [3U])) {
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 1U)))
                                     : ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 1U)))
                                         : 0U)))] >> 3U)) 
                   == ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 5U))) : 
                       ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                         ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                          >> 5U))) : 0U)));
            if ((1U & (((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                        | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                       & (~ (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (1U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v24 = 1U;
                if ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_address))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_address))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((1U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 1U)))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 1U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_address))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_address))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v93 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xffffffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfe000000U & ((IData)(vlSelfRef.gpu__DOT__lsu_read_address) 
                                                 << 0x18U)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (8U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v94 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__consumer_req_offset 
                        = (0xffU & ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_address))
                                     : ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_address))
                                         : 0U)));
                } else if ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__data_in 
                        = (0xffU & (IData)(vlSelfRef.gpu__DOT__lsu_write_data));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (8U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xffffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | ((IData)(vlSelfRef.gpu__DOT__lsu_write_address) 
                              << 0x18U));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xffffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | ((IData)(vlSelfRef.gpu__DOT__lsu_write_data) 
                              << 0x18U));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v95 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((1U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 1U)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 1U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset 
                        = (1U & ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_address))
                                  : ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_address))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v84 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v84 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v84 
                        = (0xfU & ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 1U)))
                                    : ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 1U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v85 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 1U)))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 1U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__offset 
                                        = (1U & ((1U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_address))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_address))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout))));
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v85 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 1U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v86 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 1U))));
                    } else if ((1U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v85 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 1U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v86 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 1U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v85 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v86 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 1U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 1U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 9U)))
                                     : ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 9U)))
                                         : 0U)))] >> 3U)) 
                   == ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0xdU)))
                        : ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0xdU)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 1U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 1U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (2U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v25 = 1U;
                if ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 8U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 8U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((2U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 9U)))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 9U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 8U)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 8U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v96 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xffffffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfe000000U & ((IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_read_address 
                                                          >> 8U)) 
                                                 << 0x18U)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (8U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v97 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__consumer_req_offset 
                        = (0xffU & ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 8U)))
                                     : ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 8U)))
                                         : 0U)));
                } else if ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 8U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (8U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xffffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | ((IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                       >> 8U)) << 0x18U));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xffffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | ((IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                       >> 8U)) << 0x18U));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v98 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((2U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 9U)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 9U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset 
                        = (1U & ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 8U)))
                                  : ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 8U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v87 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v87 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v87 
                        = (0xfU & ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 9U)))
                                    : ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 9U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v88 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 9U)))
                                             : ((2U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 9U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__offset 
                                        = (1U & ((2U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 8U)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 8U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout))));
                    if ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v88 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 9U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v89 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 9U))));
                    } else if ((2U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v88 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 9U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v89 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 9U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v88 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v89 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 2U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 2U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x11U)))
                                     : ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x11U)))
                                         : 0U)))] >> 3U)) 
                   == ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0x15U)))
                        : ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0x15U)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 2U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 2U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (4U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v26 = 1U;
                if ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 0x10U)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 0x10U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((4U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 0x11U)))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 0x11U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 0x10U)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 0x10U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v99 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xffffffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfe000000U & ((IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_read_address 
                                                          >> 0x10U)) 
                                                 << 0x18U)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (8U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v100 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__consumer_req_offset 
                        = (0xffU & ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x10U)))
                                     : ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 0x10U)))
                                         : 0U)));
                } else if ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 0x10U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (8U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xffffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | ((IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                       >> 0x10U)) << 0x18U));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xffffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | ((IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                       >> 0x10U)) << 0x18U));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v101 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((4U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 0x11U)))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 0x11U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset 
                        = (1U & ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x10U)))
                                  : ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x10U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v90 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v90 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v90 
                        = (0xfU & ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x11U)))
                                    : ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 0x11U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v91 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 0x11U)))
                                             : ((4U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x11U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__offset 
                                        = (1U & ((4U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 0x10U)))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 0x10U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout))));
                    if ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v91 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x11U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v92 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x11U))));
                    } else if ((4U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v91 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x11U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v92 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x11U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v91 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v92 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 3U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 3U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x19U)))
                                     : ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x19U)))
                                         : 0U)))] >> 3U)) 
                   == ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0x1dU)))
                        : ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0x1dU)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 3U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 3U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (8U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v27 = 1U;
                if ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 0x18U)))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 0x18U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((8U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 0x19U)))
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 0x19U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 0x18U)))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 0x18U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v102 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xffffffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfe000000U & ((IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_read_address 
                                                          >> 0x18U)) 
                                                 << 0x18U)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (8U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v103 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__consumer_req_offset 
                        = (0xffU & ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x18U)))
                                     : ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 0x18U)))
                                         : 0U)));
                } else if ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 0x18U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (8U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xffffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | ((IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                       >> 0x18U)) << 0x18U));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xffffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | ((IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                       >> 0x18U)) << 0x18U));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v104 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((8U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 0x19U)))
                                                 : 
                                                ((8U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 0x19U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset 
                        = (1U & ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x18U)))
                                  : ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x18U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v93 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v93 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v93 
                        = (0xfU & ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x19U)))
                                    : ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 0x19U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v94 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 0x19U)))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x19U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__offset 
                                        = (1U & ((8U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 0x18U)))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 0x18U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout))));
                    if ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v94 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x19U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v95 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x19U))));
                    } else if ((8U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v94 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x19U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v95 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x19U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v94 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v95 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 4U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 4U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x21U)))
                                     : ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x21U)))
                                         : 0U)))] >> 3U)) 
                   == ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0x25U)))
                        : ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0x25U)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 4U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 4U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (0x10U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v28 = 1U;
                if ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 0x20U)))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 0x20U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((0x10U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 0x21U)))
                                                : (
                                                   (0x10U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 0x21U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 0x20U)))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 0x20U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v105 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xffffffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfe000000U & ((IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_read_address 
                                                          >> 0x20U)) 
                                                 << 0x18U)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (8U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v106 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__consumer_req_offset 
                        = (0xffU & ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x20U)))
                                     : ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 0x20U)))
                                         : 0U)));
                } else if ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 0x20U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (8U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xffffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | ((IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                       >> 0x20U)) << 0x18U));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xffffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | ((IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                       >> 0x20U)) << 0x18U));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v107 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((0x10U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 0x21U)))
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 0x21U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset 
                        = (1U & ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x20U)))
                                  : ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x20U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v96 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v96 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v96 
                        = (0xfU & ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x21U)))
                                    : ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 0x21U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v97 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((0x10U 
                                             & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 0x21U)))
                                             : ((0x10U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x21U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__offset 
                                        = (1U & ((0x10U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 0x20U)))
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 0x20U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout))));
                    if ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v97 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x21U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v98 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x21U))));
                    } else if ((0x10U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v97 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x21U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v98 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x21U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v97 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v98 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 5U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 5U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x29U)))
                                     : ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x29U)))
                                         : 0U)))] >> 3U)) 
                   == ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0x2dU)))
                        : ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0x2dU)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 5U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 5U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (0x20U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v29 = 1U;
                if ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((0x20U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 0x28U)))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 0x28U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((0x20U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 0x29U)))
                                                : (
                                                   (0x20U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 0x29U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((0x20U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 0x28U)))
                                                     : 
                                                    ((0x20U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 0x28U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v108 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xffffffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfe000000U & ((IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_read_address 
                                                          >> 0x28U)) 
                                                 << 0x18U)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (8U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v109 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__consumer_req_offset 
                        = (0xffU & ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x28U)))
                                     : ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 0x28U)))
                                         : 0U)));
                } else if ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 0x28U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (8U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xffffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | ((IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                       >> 0x28U)) << 0x18U));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xffffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | ((IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                       >> 0x28U)) << 0x18U));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v110 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((0x20U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 0x29U)))
                                                 : 
                                                ((0x20U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 0x29U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset 
                        = (1U & ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x28U)))
                                  : ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x28U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v99 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v99 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v99 
                        = (0xfU & ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x29U)))
                                    : ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 0x29U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v100 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((0x20U 
                                             & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 0x29U)))
                                             : ((0x20U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x29U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__offset 
                                        = (1U & ((0x20U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 0x28U)))
                                                  : 
                                                 ((0x20U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 0x28U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout))));
                    if ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v100 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x29U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v101 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x29U))));
                    } else if ((0x20U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v100 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x29U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v101 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x29U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v100 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v101 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 6U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 6U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x31U)))
                                     : ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x31U)))
                                         : 0U)))] >> 3U)) 
                   == ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0x35U)))
                        : ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0x35U)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 6U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 6U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (0x40U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v30 = 1U;
                if ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((0x40U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 0x30U)))
                                                    : 
                                                   ((0x40U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 0x30U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((0x40U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 0x31U)))
                                                : (
                                                   (0x40U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 0x31U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((0x40U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 0x30U)))
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 0x30U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v111 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xffffffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfe000000U & ((IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_read_address 
                                                          >> 0x30U)) 
                                                 << 0x18U)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (8U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v112 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__consumer_req_offset 
                        = (0xffU & ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x30U)))
                                     : ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 0x30U)))
                                         : 0U)));
                } else if ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 0x30U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (8U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xffffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | ((IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                       >> 0x30U)) << 0x18U));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xffffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | ((IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                       >> 0x30U)) << 0x18U));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v113 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((0x40U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 0x31U)))
                                                 : 
                                                ((0x40U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 0x31U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset 
                        = (1U & ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x30U)))
                                  : ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x30U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v102 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v102 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v102 
                        = (0xfU & ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x31U)))
                                    : ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 0x31U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v103 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((0x40U 
                                             & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 0x31U)))
                                             : ((0x40U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x31U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__offset 
                                        = (1U & ((0x40U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 0x30U)))
                                                  : 
                                                 ((0x40U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 0x30U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout))));
                    if ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v103 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x31U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v104 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x31U))));
                    } else if ((0x40U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v103 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x31U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v104 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x31U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v103 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v104 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 7U;
        if ((2U > (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break = 7U;
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid 
                = ((7U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (0xfU & (IData)(
                                                       (vlSelfRef.gpu__DOT__lsu_read_address 
                                                        >> 0x39U)))
                                     : ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x39U)))
                                         : 0U)))] >> 3U)) 
                   == ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                        ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                         >> 0x3dU)))
                        : ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                            ? (7U & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                             >> 0x3dU)))
                            : 0U)));
            if ((1U & ((((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                         | (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                        >> 7U) & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex) 
                                     >> 7U))))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                    = (0x80U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__current_consumer__v31 = 1U;
                if ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid 
                        = ((0x15U >= (0x1fU & ((IData)(2U) 
                                               - ((IData)(1U) 
                                                  - 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_read_address 
                                                               >> 0x38U)))
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                >> 0x38U)))
                                                     : 0U)))))) 
                           && (1U & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                     [(0xfU & ((0x80U 
                                                & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                ? (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 0x39U)))
                                                : (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 0x39U)))
                                                    : 0U)))] 
                                     >> (0x1fU & ((IData)(2U) 
                                                  - 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((0x80U 
                                                     & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.gpu__DOT__lsu_read_address 
                                                                >> 0x38U)))
                                                     : 
                                                    ((0x80U 
                                                      & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.gpu__DOT__lsu_write_address 
                                                                 >> 0x38U)))
                                                      : 0U))))))));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    if (((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__sv2v_autoblock_9__DOT__req_line_valid) 
                         & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT__sv2v_autoblock_8__DOT__tag_valid))) {
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v114 = 1U;
                    } else {
                        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
                            = ((0xffffffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
                               | (0xfe000000U & ((IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_read_address 
                                                          >> 0x38U)) 
                                                 << 0x18U)));
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (8U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v115 = 1U;
                    }
                    vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__consumer_req_offset 
                        = (0xffU & ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                     ? (1U & (IData)(
                                                     (vlSelfRef.gpu__DOT__lsu_read_address 
                                                      >> 0x38U)))
                                     : ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                         ? (1U & (IData)(
                                                         (vlSelfRef.gpu__DOT__lsu_write_address 
                                                          >> 0x38U)))
                                         : 0U)));
                } else if ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__data_in 
                        = (0xffU & (IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                            >> 0x38U)));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 2U;
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                        = (8U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address 
                        = ((0xffffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address) 
                           | ((IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                       >> 0x38U)) << 0x18U));
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data 
                        = ((0xffffffU & vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data) 
                           | ((IData)((vlSelfRef.gpu__DOT__lsu_write_data 
                                       >> 0x38U)) << 0x18U));
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v116 = 1U;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__line 
                        = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                      [(0xfU & ((0x80U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_read_address 
                                                            >> 0x39U)))
                                                 : 
                                                ((0x80U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_write_address 
                                                             >> 0x39U)))
                                                  : 0U)))] 
                                      >> 6U));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__line;
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset 
                        = (1U & ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                  ? (1U & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 0x38U)))
                                  : ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                      ? (1U & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x38U)))
                                      : 0U)));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp 
                        = (((~ ((IData)(0xffU) << (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset), 3U)))) 
                            & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp)) 
                           | (0xffffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__data_in) 
                                         << (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__offset), 3U)))));
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__temp;
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v105 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_write_by_offset__12__Vfuncout;
                    vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v105 = 1U;
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v105 
                        = (0xfU & ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                    ? (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x39U)))
                                    : ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                        ? (0xfU & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_write_address 
                                                           >> 0x39U)))
                                        : 0U)));
                    vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v106 
                        = (3U & ((vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((0x80U 
                                             & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 0x39U)))
                                             : ((0x80U 
                                                 & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 0x39U)))
                                                 : 0U)))] 
                                  >> 1U) | ([&]() {
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__offset 
                                        = (1U & ((0x80U 
                                                  & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.gpu__DOT__lsu_read_address 
                                                             >> 0x38U)))
                                                  : 
                                                 ((0x80U 
                                                   & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_write_address 
                                                              >> 0x38U)))
                                                   : 0U)));
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout = 0U;
                                    __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout 
                                        = ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__offset))));
                                }(), (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_valid_mask_by_offset__13__Vfuncout))));
                    if ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v106 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x39U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v107 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_read_address 
                                                       >> 0x39U))));
                    } else if ((0x80U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid))) {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v106 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x39U))));
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v107 
                            = (0xfU & (0xfU & (IData)(
                                                      (vlSelfRef.gpu__DOT__lsu_write_address 
                                                       >> 0x39U))));
                    } else {
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v106 
                            = (0xfU & 0U);
                        vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v107 
                            = (0xfU & 0U);
                    }
                }
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j = 8U;
        if ((2U <= (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__j 
                = vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT__sv2v_autoblock_6__DOT__sv2v_autoblock_7__DOT___sv2v_value_on_break;
        }
        if ((3U != (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__sv2v_autoblock_5__DOT___sv2v_jump = 0U;
        }
    } else if ((1U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                [3U])) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready 
            = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready) 
               | (0xffU & ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                           [3U])));
        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v117 = 1U;
        __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__14__offset 
            = (1U & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__consumer_req_offset));
        __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__14__line 
            = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                          [(0xfU & ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                                           >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                           [3U])) ? 
                                    (0xfU & (IData)(
                                                    (vlSelfRef.gpu__DOT__lsu_read_address 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_SHIFTL_III(6,32,32, 
                                                                       vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                       [3U], 3U))))))
                                     : ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                                               >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                               [3U]))
                                         ? (0xfU & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(1U) 
                                                                + 
                                                                VL_SHIFTL_III(6,32,32, 
                                                                              vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                              [3U], 3U))))))
                                         : 0U)))] >> 6U));
        __Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__14__Vfuncout 
            = (0xffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__14__line) 
                        >> (0xfU & VL_SHIFTL_III(4,32,32, (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__14__offset), 3U))));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data 
            = (((~ (0xffULL << (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                      vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                      [3U], 3U)))) 
                & vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data) 
               | ((QData)((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__cache_read_by_offset__14__Vfuncout)) 
                  << (0x3fU & VL_SHIFTL_III(6,32,32, 
                                            vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                            [3U], 3U))));
    } else if ((2U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                [3U])) {
        if ((8U & (IData)(vlSelfRef.data_mem_read_ready))) {
            vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__chunks_read 
                = ((IData)(1U) + vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__chunks_read);
            vlSelfRef.gpu__DOT__data_memory_controller__DOT____Vlvbound_h05961d59__0 
                = (vlSelfRef.data_mem_read_data >> 0x18U);
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                = (7U & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
            if ((0x15U >= (0x1fU & (((IData)(0x15U) 
                                     - ((IData)(0xfU) 
                                        - (VL_SHIFTL_III(5,32,32, 
                                                         ((IData)(1U) 
                                                          + vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__chunks_read), 3U) 
                                           - (IData)(1U)))) 
                                    - (IData)(7U))))) {
                vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v108 
                    = vlSelfRef.gpu__DOT__data_memory_controller__DOT____Vlvbound_h05961d59__0;
                vlSelfRef.__VdlyLsb__gpu__DOT__data_memory_controller__DOT__cache__v108 
                    = (0x1fU & (((IData)(0x15U) - ((IData)(0xfU) 
                                                   - 
                                                   (VL_SHIFTL_III(5,32,32, 
                                                                  ((IData)(1U) 
                                                                   + vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__chunks_read), 3U) 
                                                    - (IData)(1U)))) 
                                - (IData)(7U)));
                vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v108 
                    = (0xfU & ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                                      >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                      [3U])) ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 
                                                           (0x3fU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               VL_SHIFTL_III(6,32,32, 
                                                                             vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                             [3U], 3U))))))
                                : ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                                          >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                          [3U])) ? 
                                   (0xfU & (IData)(
                                                   (vlSelfRef.gpu__DOT__lsu_write_address 
                                                    >> 
                                                    (0x3fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        VL_SHIFTL_III(6,32,32, 
                                                                      vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                      [3U], 3U))))))
                                    : 0U)));
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v108 = 1U;
            }
            if (VL_GTS_III(32, 1U, vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__chunks_read)) {
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v118 = 1U;
            } else {
                if ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                           >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                           [3U]))) {
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v109 
                        = (0xfU & (0xfU & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(6,32,32, 
                                                                     vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                     [3U], 3U)))))));
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v110 
                        = (0xfU & (0xfU & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(6,32,32, 
                                                                     vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                     [3U], 3U)))))));
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v111 
                        = (0xfU & (0xfU & (IData)((vlSelfRef.gpu__DOT__lsu_read_address 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(6,32,32, 
                                                                     vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                     [3U], 3U)))))));
                } else if ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                                  >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                  [3U]))) {
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v109 
                        = (0xfU & (0xfU & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(6,32,32, 
                                                                     vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                     [3U], 3U)))))));
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v110 
                        = (0xfU & (0xfU & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(6,32,32, 
                                                                     vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                     [3U], 3U)))))));
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v111 
                        = (0xfU & (0xfU & (IData)((vlSelfRef.gpu__DOT__lsu_write_address 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_SHIFTL_III(6,32,32, 
                                                                     vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                     [3U], 3U)))))));
                } else {
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v109 
                        = (0xfU & 0U);
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v110 
                        = (0xfU & 0U);
                    vlSelfRef.__VdlyDim0__gpu__DOT__data_memory_controller__DOT__cache__v111 
                        = (0xfU & 0U);
                }
                vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__cache__v109 = 1U;
                vlSelfRef.__VdlyVal__gpu__DOT__data_memory_controller__DOT__cache__v110 
                    = (vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_address 
                       >> 0x1dU);
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready 
                    = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready) 
                       | (0xffU & ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                   [3U])));
                __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__15__tail_data 
                    = (vlSelfRef.data_mem_read_data 
                       >> 0x18U);
                __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__15__line_data 
                    = (0xffffU & (vlSelfRef.gpu__DOT__data_memory_controller__DOT__cache
                                  [(0xfU & ((1U & ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                                                   >> 
                                                   vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                   [3U]))
                                             ? (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.gpu__DOT__lsu_read_address 
                                                           >> 
                                                           (0x3fU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               VL_SHIFTL_III(6,32,32, 
                                                                             vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                             [3U], 3U))))))
                                             : ((1U 
                                                 & ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                                                    >> 
                                                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                    [3U]))
                                                 ? 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.gpu__DOT__lsu_write_address 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(1U) 
                                                                + 
                                                                VL_SHIFTL_III(6,32,32, 
                                                                              vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                              [3U], 3U))))))
                                                 : 0U)))] 
                                  >> 6U));
                __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__15__offset 
                    = (1U & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__consumer_req_offset));
                __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__15__Vfuncout = 0U;
                if (__Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__15__offset) {
                    __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__15__Vfuncout 
                        = __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__15__tail_data;
                } else {
                    if ((1U & (~ (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__15__offset)))) {
                        __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__15__Vfuncout 
                            = (0xffU & (IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__15__line_data));
                    }
                    if (__Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__15__offset) {
                        __Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__15__Vfuncout 
                            = (0xffU & ((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__15__line_data) 
                                        >> 8U));
                    }
                }
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data 
                    = (((~ (0xffULL << (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                              vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                              [3U], 3U)))) 
                        & vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data) 
                       | ((QData)((IData)(__Vfunc_gpu__DOT__data_memory_controller__DOT__select_consumer_read_data__15__Vfuncout)) 
                          << (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                    [3U], 3U))));
            }
        }
    } else if ((3U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                [3U])) {
        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address 
            = ((0xffffffU & vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__mem_read_address) 
               | (0xff000000U & ((0xfe000000U & (((1U 
                                                   & ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                                                      >> 
                                                      vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                      [3U]))
                                                   ? 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.gpu__DOT__lsu_read_address 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_SHIFTL_III(6,32,32, 
                                                                               vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                               [3U], 3U)))))
                                                   : 
                                                  ((1U 
                                                    & ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                                                       >> 
                                                       vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                       [3U]))
                                                    ? 
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelfRef.gpu__DOT__lsu_write_address 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_SHIFTL_III(6,32,32, 
                                                                                vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                                                                [3U], 3U)))))
                                                    : 0U)) 
                                                 << 0x18U)) 
                                 | (vlSelfRef.gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__chunks_read 
                                    << 0x18U))));
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
            = (8U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
        vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v120 = 1U;
    } else if ((5U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                [3U])) {
        if ((8U & (IData)(vlSelfRef.data_mem_write_ready))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                = (7U & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready 
                = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready) 
                   | (0xffU & ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                               [3U])));
            vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v121 = 1U;
        }
    } else if ((4U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                [3U])) {
        vlSelfRef.__Vdly__gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__chunks_read = 0U;
        if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                      >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                      [3U])))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                       [3U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready 
                = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                       [3U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready));
            vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v122 = 1U;
        }
    } else if ((6U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                [3U])) {
        if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                      >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                      [3U])))) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex 
                = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                       [3U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_mutex));
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready 
                = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                       [3U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready));
            vlSelfRef.__VdlySet__gpu__DOT__data_memory_controller__DOT__controller_state__v123 = 1U;
        }
    }
}

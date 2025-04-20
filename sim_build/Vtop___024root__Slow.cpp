// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr SData/*15:0*/ Vtop___024root::gpu__DOT__data_memory_controller__DOT__CACHE_OFFSET_MASK;
constexpr SData/*15:0*/ Vtop___024root::gpu__DOT__program_memory_controller__DOT__CACHE_OFFSET_MASK;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__DATA_MEM_ADDR_BITS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__DATA_MEM_DATA_BITS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__DATA_MEM_NUM_CHANNELS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__PROGRAM_MEM_ADDR_BITS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__PROGRAM_MEM_DATA_BITS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__PROGRAM_MEM_NUM_CHANNELS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__NUM_CORES;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__THREADS_PER_BLOCK;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__NUM_LSUS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__NUM_FETCHERS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__cores__BRA__0__KET____DOT__i;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__cores__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__j;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__cores__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__lsu_index;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__cores__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__j;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__cores__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__lsu_index;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__cores__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__j;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__cores__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__lsu_index;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__cores__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__j;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__cores__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__lsu_index;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__cores__BRA__1__KET____DOT__i;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__cores__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__j;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__cores__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__lsu_index;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__cores__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__j;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__cores__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__lsu_index;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__cores__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__j;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__cores__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__lsu_index;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__cores__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__j;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__cores__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__lsu_index;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__dispatch_instance__DOT__NUM_CORES;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__dispatch_instance__DOT__THREADS_PER_BLOCK;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__data_memory_controller__DOT__NUM_CONSUMERS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__data_memory_controller__DOT__NUM_CHANNELS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__data_memory_controller__DOT__ADDR_BITS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__data_memory_controller__DOT__CACHE_OFFSET_BITS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__data_memory_controller__DOT__CACHE_INDEX_BITS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__data_memory_controller__DOT__CONSUMER_BUS_BITS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__data_memory_controller__DOT__MEMORY_BUS_BITS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__data_memory_controller__DOT__BITS_ADDRESSABLE;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__data_memory_controller__DOT__NUM_WORDS_IN_LINE;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__data_memory_controller__DOT__CHUNK_SIZE;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__data_memory_controller__DOT__NUM_BYTES;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__data_memory_controller__DOT__NUM_CHUNKS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__data_memory_controller__DOT__CACHE_LINE_SIZE_BITS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__data_memory_controller__DOT__CACHE_NUM_LINES;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__data_memory_controller__DOT__CACHE_TAG_BITS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__data_memory_controller__DOT__genblk1__BRA__0__KET____DOT__i;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__data_memory_controller__DOT__genblk1__BRA__1__KET____DOT__i;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__data_memory_controller__DOT__genblk1__BRA__2__KET____DOT__i;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__data_memory_controller__DOT__genblk1__BRA__3__KET____DOT__i;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__program_memory_controller__DOT__NUM_CONSUMERS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__program_memory_controller__DOT__NUM_CHANNELS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__program_memory_controller__DOT__ADDR_BITS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__program_memory_controller__DOT__CACHE_OFFSET_BITS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__program_memory_controller__DOT__CACHE_INDEX_BITS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__program_memory_controller__DOT__CONSUMER_BUS_BITS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__program_memory_controller__DOT__MEMORY_BUS_BITS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__program_memory_controller__DOT__BITS_ADDRESSABLE;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__program_memory_controller__DOT__NUM_WORDS_IN_LINE;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__program_memory_controller__DOT__CHUNK_SIZE;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__program_memory_controller__DOT__NUM_BYTES;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__program_memory_controller__DOT__NUM_CHUNKS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__program_memory_controller__DOT__CACHE_LINE_SIZE_BITS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__program_memory_controller__DOT__CACHE_NUM_LINES;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__program_memory_controller__DOT__CACHE_TAG_BITS;
constexpr IData/*31:0*/ Vtop___024root::gpu__DOT__program_memory_controller__DOT__genblk1__BRA__0__KET____DOT__i;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
}

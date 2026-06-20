// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_counter_4bit.h for the primary calling header

#include "verilated.h"

#include "Vtb_counter_4bit__Syms.h"
#include "Vtb_counter_4bit__Syms.h"
#include "Vtb_counter_4bit___024unit.h"

void Vtb_counter_4bit___024unit___ctor_var_reset(Vtb_counter_4bit___024unit* vlSelf);

Vtb_counter_4bit___024unit::Vtb_counter_4bit___024unit(Vtb_counter_4bit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_counter_4bit___024unit___ctor_var_reset(this);
}

void Vtb_counter_4bit___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_counter_4bit___024unit::~Vtb_counter_4bit___024unit() {
}

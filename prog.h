// -----------------------------------------------------------------------------
// Altair 8800 Simulator
// Copyright (C) 2017 David Hansel
// -----------------------------------------------------------------------------

#ifndef PROG_H
#define PROG_H

#include <Arduino.h>

#if defined(__AVR_ATmega2560__)
#define FP(x) (__FlashStringHelper *)(x)
#else
#define FP(x) x
#endif


byte  prog_find(const char *name);
PGM_P prog_get_name(byte n);
bool  prog_load(byte n, uint16_t *pc, byte *mem);

#endif

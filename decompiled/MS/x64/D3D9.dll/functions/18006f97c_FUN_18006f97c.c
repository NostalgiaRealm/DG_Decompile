/*
 * FUN_18006f97c at 18006f97c
 * undefined __fastcall FUN_18006f97c(longlong param_1, undefined8 param_2, undefined8 param_3, int param_4, int param_5)
 * Address ranges: 18006f97c-18006fade
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006f97c(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  FUN_1800edd10(*(uint **)(param_1 + 8),*(longlong **)(param_1 + 0x10),0x10,0x101);
  if (param_4 != -1) {
    FUN_1800edd10(*(uint **)(param_1 + 8),*(longlong **)(param_1 + 0x10),0x10,0x102);
  }
  if (param_5 != -1) {
    FUN_1800edd10(*(uint **)(param_1 + 8),*(longlong **)(param_1 + 0x10),0x10,0x104);
  }
  return;
}


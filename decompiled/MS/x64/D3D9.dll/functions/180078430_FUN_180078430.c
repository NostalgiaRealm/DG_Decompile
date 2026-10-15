/*
 * FUN_180078430 at 180078430
 * undefined __fastcall FUN_180078430(undefined8 param_1, longlong param_2, uint param_3)
 * Address ranges: 180078430-180078457
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180078430(undefined8 param_1,longlong param_2,uint param_3)

{
  if ((*(longlong *)(param_2 + 0x1b8) != 0) || ((param_3 & 0x3f00) == 0)) {
    FUN_1800ec960(param_2 + 0x20,param_3);
  }
  return;
}


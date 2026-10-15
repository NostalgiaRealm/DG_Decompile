/*
 * FUN_1800ab998 at 1800ab998
 * bool __fastcall FUN_1800ab998(longlong param_1, longlong param_2)
 * Address ranges: 1800ab998-1800ab9b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800ab998(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1800e06fc(*(longlong *)(param_1 + 0x20),param_2);
  return lVar1 == param_1;
}


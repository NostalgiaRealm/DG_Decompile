/*
 * FUN_18001e0e4 at 18001e0e4
 * undefined __fastcall FUN_18001e0e4(longlong * param_1)
 * Address ranges: 18001e0e4-18001e109
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e0e4(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = param_1[1];
  iVar2 = FUN_1800143f0(*(longlong *)(*param_1 + 0x3300));
  *(bool *)lVar1 = iVar2 != 0;
  return;
}


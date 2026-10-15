/*
 * FUN_18002c01c at 18002c01c
 * undefined __fastcall FUN_18002c01c(longlong * param_1)
 * Address ranges: 18002c01c-18002c041
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002c01c(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = param_1[1];
  iVar2 = FUN_1800213f4(*(longlong *)(*param_1 + 0x3180));
  *(bool *)lVar1 = iVar2 != 0;
  return;
}


/*
 * FUN_18002bb74 at 18002bb74
 * undefined __fastcall FUN_18002bb74(longlong * param_1)
 * Address ranges: 18002bb74-18002bb99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002bb74(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = param_1[1];
  iVar2 = FUN_180020f4c(*(longlong *)(*param_1 + 0x3180));
  *(bool *)lVar1 = iVar2 != 0;
  return;
}


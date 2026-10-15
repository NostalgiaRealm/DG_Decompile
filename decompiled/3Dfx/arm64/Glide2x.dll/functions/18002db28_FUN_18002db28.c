/*
 * FUN_18002db28 at 18002db28
 * undefined __cdecl FUN_18002db28(longlong * param_1)
 * Address ranges: 18002db28-18002db53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002db28(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = param_1[1];
  iVar2 = FUN_180023110(*param_1);
  *(bool *)lVar1 = iVar2 != 0;
  return;
}


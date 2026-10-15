/*
 * FUN_180021eb0 at 180021eb0
 * undefined __cdecl FUN_180021eb0(longlong * param_1)
 * Address ranges: 180021eb0-180021edb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180021eb0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = param_1[1];
  iVar2 = FUN_180017cf8(*param_1);
  *(bool *)lVar1 = iVar2 != 0;
  return;
}


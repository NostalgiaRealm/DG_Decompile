/*
 * FUN_18002e978 at 18002e978
 * undefined __cdecl FUN_18002e978(longlong * param_1)
 * Address ranges: 18002e978-18002e9a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002e978(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = param_1[1];
  iVar2 = FUN_180023f60(*param_1);
  *(bool *)lVar1 = iVar2 != 0;
  return;
}


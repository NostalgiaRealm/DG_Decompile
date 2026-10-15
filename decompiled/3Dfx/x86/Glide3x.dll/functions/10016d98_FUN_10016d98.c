/*
 * FUN_10016d98 at 10016d98
 * undefined __cdecl FUN_10016d98(int * param_1)
 * Address ranges: 10016d98-10016dc0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10016d98(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[2];
  iVar2 = *param_1;
  *(int *)(iVar2 + 0x2bb0) = param_1[1];
  *(int *)(iVar2 + 0x2bb4) = iVar1;
  *(undefined1 *)(iVar2 + 0x2c64) = 1;
  return;
}


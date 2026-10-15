/*
 * FUN_1001935c at 1001935c
 * undefined __cdecl FUN_1001935c(int * param_1)
 * Address ranges: 1001935c-10019384
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1001935c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[2];
  iVar2 = *param_1;
  *(int *)(iVar2 + 0x2cf0) = param_1[1];
  *(int *)(iVar2 + 0x2cf4) = iVar1;
  *(undefined1 *)(iVar2 + 0x2dac) = 1;
  return;
}


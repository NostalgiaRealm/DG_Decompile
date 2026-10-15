/*
 * FUN_100274a0 at 100274a0
 * undefined FUN_100274a0(void)
 * Address ranges: 100274a0-100274e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100274a0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = param_1[2];
  *(int *)(iVar1 + 0x2bb0) = param_1[1];
  *(int *)(iVar1 + 0x2bb4) = iVar2;
  *(undefined1 *)(iVar1 + 0x2c64) = 1;
  return;
}


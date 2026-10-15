/*
 * FUN_1002aed0 at 1002aed0
 * undefined FUN_1002aed0(void)
 * Address ranges: 1002aed0-1002af13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002aed0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = param_1[2];
  *(int *)(iVar1 + 0x2cf0) = param_1[1];
  *(int *)(iVar1 + 0x2cf4) = iVar2;
  *(undefined1 *)(iVar1 + 0x2dac) = 1;
  return;
}


/*
 * FUN_1003a2c0 at 1003a2c0
 * undefined FUN_1003a2c0(void)
 * Address ranges: 1003a2c0-1003a32b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003a2c0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x2b8c) = *(undefined4 *)(iVar1 + 0x2b5c);
  *(undefined4 *)(iVar1 + 0x2b88) = *(undefined4 *)(iVar1 + 0x2b58);
  *(undefined4 *)(iVar1 + 0x2b90) = *(undefined4 *)(iVar1 + 0x2b60);
  *(undefined4 *)(iVar1 + 0x2bb0) = *(undefined4 *)(iVar1 + 0x2b80);
  return;
}


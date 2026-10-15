/*
 * FUN_1003a740 at 1003a740
 * undefined FUN_1003a740(void)
 * Address ranges: 1003a740-1003a7ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003a740(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x2b8c) = *(undefined4 *)(iVar1 + 0x2b5c);
  *(undefined4 *)(iVar1 + 0x2b88) = *(undefined4 *)(iVar1 + 0x2b58);
  *(undefined4 *)(iVar1 + 0x2b90) = *(undefined4 *)(iVar1 + 0x2b60);
  *(undefined4 *)(iVar1 + 0x2bb0) = *(undefined4 *)(iVar1 + 0x2b80);
  return;
}


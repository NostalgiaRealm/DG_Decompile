/*
 * FUN_100cebc8 at 100cebc8
 * undefined FUN_100cebc8(void)
 * Address ranges: 100cebc8-100cebeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100cebc8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
  }
  return iVar1;
}


/*
 * FUN_10066f80 at 10066f80
 * undefined FUN_10066f80(void)
 * Address ranges: 10066f80-10066fdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10066f80(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  uVar2 = param_1[1];
  FUN_10079290(iVar1,(ulonglong)uVar2,param_1[2]);
  if ((uVar2 < 0x35) && ((0x10000000004080U >> ((ulonglong)uVar2 & 0x3f) & 1) != 0)) {
    *(undefined1 *)(iVar1 + 0xfd9f) = 1;
  }
  return;
}


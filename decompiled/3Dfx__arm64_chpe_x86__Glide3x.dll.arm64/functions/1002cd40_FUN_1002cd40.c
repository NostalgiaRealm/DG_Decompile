/*
 * FUN_1002cd40 at 1002cd40
 * undefined FUN_1002cd40(void)
 * Address ranges: 1002cd40-1002cd8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002cd40(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = param_1[1];
  FUN_1000e660(iVar2,uVar1);
  FUN_1007e4a0(iVar2 + 0x2a4c,uVar1,*(undefined4 *)(iVar2 + 0xd8));
  return;
}


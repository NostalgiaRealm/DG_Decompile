/*
 * FUN_1002fac0 at 1002fac0
 * undefined FUN_1002fac0(void)
 * Address ranges: 1002fac0-1002fb0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002fac0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = param_1[1];
  FUN_10010500(iVar2,uVar1);
  FUN_10083b40(iVar2 + 0x2b8c,uVar1,*(undefined4 *)(iVar2 + 0xdc));
  return;
}


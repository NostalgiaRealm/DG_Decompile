/*
 * FUN_10031f30 at 10031f30
 * undefined FUN_10031f30(void)
 * Address ranges: 10031f30-10031f93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10031f30(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_1 + param_2 * 0xc18 + 0xa8;
  FUN_100917a0(iVar1,param_1 + 0xc228,0xc00);
  if (param_3 != 0) {
    FUN_10070168(*(undefined4 *)(param_1 + 0x10),param_3,iVar1,param_1 + 0xc);
  }
  return;
}


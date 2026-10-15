/*
 * FUN_10069810 at 10069810
 * undefined FUN_10069810(void)
 * Address ranges: 10069810-10069867
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10069810(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = FUN_100699e8(iVar1 + 4,&DAT_1009c420);
  uVar2 = FUN_10062790(iVar1,param_2,param_3,uVar2);
  return uVar2;
}


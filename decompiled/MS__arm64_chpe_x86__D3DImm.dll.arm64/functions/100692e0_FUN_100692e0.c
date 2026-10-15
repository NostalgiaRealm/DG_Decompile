/*
 * FUN_100692e0 at 100692e0
 * undefined FUN_100692e0(void)
 * Address ranges: 100692e0-10069337
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100692e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = FUN_100699e8(iVar1 + 4,&DAT_1009c400);
  uVar2 = FUN_10062790(iVar1,param_2,param_3,uVar2);
  return uVar2;
}


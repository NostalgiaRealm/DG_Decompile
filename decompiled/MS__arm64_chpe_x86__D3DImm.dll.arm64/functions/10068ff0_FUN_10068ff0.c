/*
 * FUN_10068ff0 at 10068ff0
 * undefined FUN_10068ff0(void)
 * Address ranges: 10068ff0-10069047
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10068ff0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = FUN_100699e8(iVar1 + 4,&DAT_1009c5d0);
  uVar2 = FUN_10062790(iVar1,param_2,param_3,uVar2);
  return uVar2;
}


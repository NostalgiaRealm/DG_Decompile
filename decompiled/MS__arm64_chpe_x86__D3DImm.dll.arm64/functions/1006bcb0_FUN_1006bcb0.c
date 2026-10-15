/*
 * FUN_1006bcb0 at 1006bcb0
 * undefined FUN_1006bcb0(void)
 * Address ranges: 1006bcb0-1006bd07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006bcb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = FUN_100699e8(iVar1 + 4,&DAT_1009c4d0);
  uVar2 = FUN_100665d8(iVar1,param_2,param_3,uVar2);
  return uVar2;
}


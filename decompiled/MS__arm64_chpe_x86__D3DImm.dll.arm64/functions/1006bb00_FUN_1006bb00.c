/*
 * FUN_1006bb00 at 1006bb00
 * undefined FUN_1006bb00(void)
 * Address ranges: 1006bb00-1006bb57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006bb00(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = FUN_100699e8(iVar1 + 4,&DAT_1009c4c0);
  uVar2 = FUN_100665d8(iVar1,param_2,param_3,uVar2);
  return uVar2;
}


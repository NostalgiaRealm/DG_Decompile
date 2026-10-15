/*
 * FUN_100690c0 at 100690c0
 * undefined FUN_100690c0(void)
 * Address ranges: 100690c0-10069117
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100690c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = FUN_100699e8(iVar1 + 4,&DAT_1009c3f0);
  uVar2 = FUN_10062790(iVar1,param_2,param_3,uVar2);
  return uVar2;
}


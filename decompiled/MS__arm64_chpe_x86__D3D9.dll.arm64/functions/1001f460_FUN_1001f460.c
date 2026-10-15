/*
 * FUN_1001f460 at 1001f460
 * undefined FUN_1001f460(void)
 * Address ranges: 1001f460-1001f4c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001f460(int param_1,undefined8 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  uVar2 = FUN_1003b2b8(iVar1,param_2,param_3,param_4);
  if (*param_4 == 1) {
    FUN_1003c008(*(undefined4 *)(&DAT_10171558 + iVar1 * 0x228));
  }
  return uVar2;
}


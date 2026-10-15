/*
 * FUN_10034e70 at 10034e70
 * undefined FUN_10034e70(void)
 * Address ranges: 10034e70-10034ed7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10034e70(int param_1,undefined8 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10003258(*(int *)(param_1 + 0xe4),param_2,param_3,param_4);
  if (*param_4 == 1) {
    FUN_10004408(*(undefined4 *)(&DAT_100be328 + *(int *)(param_1 + 0xe4) * 0x228));
  }
  return uVar1;
}


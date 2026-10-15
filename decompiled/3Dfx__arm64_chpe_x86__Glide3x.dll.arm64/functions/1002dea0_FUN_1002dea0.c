/*
 * FUN_1002dea0 at 1002dea0
 * undefined FUN_1002dea0(void)
 * Address ranges: 1002dea0-1002dfaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002dea0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  code *extraout_w11;
  int local_50 [8];
  
  puVar1 = (undefined4 *)(param_1 + 0x3328);
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar3 = (*extraout_w11)(uVar2,local_50,0);
  if (((iVar3 < 0) || (local_50[0] != 4)) ||
     (uVar4 = FUN_1005d7e0(*(undefined4 *)(*(int *)(param_1 + 0x3300) + 0x172c0),*puVar1),
     (uVar4 & 1) == 0)) {
    FUN_10067568(*(undefined4 *)(*(int *)(param_1 + 0x3308) + 0x1304),*puVar1,
                 *(int *)(param_1 + 0x3308) + 0x1430,param_3,param_3 + param_4,param_2);
  }
  else {
    FUN_100672a8(*(undefined4 *)(*(int *)(param_1 + 0x3308) + 0x1304),*puVar1,param_3,
                 param_3 + param_4,param_2,0);
  }
  return;
}


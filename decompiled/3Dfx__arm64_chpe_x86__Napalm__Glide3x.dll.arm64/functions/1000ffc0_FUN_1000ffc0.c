/*
 * FUN_1000ffc0 at 1000ffc0
 * undefined FUN_1000ffc0(void)
 * Address ranges: 1000ffc0-100101a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000ffc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  
  FUN_1001c528(*(undefined4 *)(param_1 + 0x365c),0,2);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = (int *)(param_1 + 0x3660);
  if (*(int *)(*piVar1 + 0x1dc) != 4) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
    *(undefined4 *)(*piVar1 + 0x1dc) = 4;
  }
  FUN_10019648(*piVar1,3,3);
  uVar4 = 1;
  if (param_5 == '\0') {
    FUN_1000ed80(*piVar1,param_2,0,1);
    uVar5 = 1;
    uVar4 = 0;
    FUN_1000ed80(*piVar1,param_3,0,1);
    FUN_1000ed80(*piVar1,param_4,uVar4 & 0xffffffff,uVar5 & 0xffffffff);
  }
  else {
    FUN_1000f078();
    FUN_1000f078(*piVar1,param_3,0,uVar4 & 0xffffffff);
    FUN_1000f078(*piVar1,param_4,0,1);
  }
  **(int **)(*piVar1 + 0x1d4) = *(int *)(*piVar1 + 0x1d8) + -3;
  *(int *)(*(int *)(*piVar1 + 0x1d4) + 4) = *(int *)(*piVar1 + 0x1d8) + -2;
  *(int *)(*(int *)(*piVar1 + 0x1d4) + 8) = *(int *)(*piVar1 + 0x1d8) + -1;
  *(int *)(*piVar1 + 0x1d4) = *(int *)(*piVar1 + 0x1d4) + 0xc;
  FUN_10017ce8(param_1);
  uVar3 = (*pcVar2)();
  (*extraout_w11_00)(uVar3);
  return;
}


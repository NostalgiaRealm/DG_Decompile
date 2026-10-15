/*
 * FUN_1000fe30 at 1000fe30
 * undefined FUN_1000fe30(void)
 * Address ranges: 1000fe30-1000ffbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000fe30(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  
  FUN_1001c528(*(undefined4 *)(param_1 + 0x365c),0,2);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = (int *)(param_1 + 0x3660);
  if (*(int *)(*piVar1 + 0x1dc) != 2) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
    *(undefined4 *)(*piVar1 + 0x1dc) = 2;
  }
  FUN_10019648(*piVar1,2,2);
  uVar4 = 1;
  if (param_4 == '\0') {
    FUN_1000ed80(*piVar1,param_2,0,1);
    FUN_1000ed80(*piVar1,param_3,0,1);
  }
  else {
    FUN_1000f078();
    FUN_1000f078(*piVar1,param_3,0,uVar4 & 0xffffffff);
  }
  **(int **)(*piVar1 + 0x1d4) = *(int *)(*piVar1 + 0x1d8) + -2;
  *(int *)(*(int *)(*piVar1 + 0x1d4) + 4) = *(int *)(*piVar1 + 0x1d8) + -1;
  *(int *)(*piVar1 + 0x1d4) = *(int *)(*piVar1 + 0x1d4) + 8;
  FUN_10017ce8(param_1);
  uVar3 = (*pcVar2)();
  (*extraout_w11_00)(uVar3);
  return;
}


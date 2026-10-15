/*
 * FUN_1006b950 at 1006b950
 * undefined FUN_1006b950(void)
 * Address ranges: 1006b950-1006baff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006b950(int param_1,int param_2,undefined8 param_3,int param_4,int param_5,int param_6)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  param_1 = param_1 + param_2 * 0x1510;
  if (*(int *)(param_1 + 0x7e8) != 5) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,5);
    *(int *)(param_1 + 0x7e8) = 5;
  }
  if (param_4 != *(int *)(param_1 + 0x7ec)) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_00)(uVar2,param_4);
    *(int *)(param_1 + 0x7ec) = param_4;
  }
  if (param_5 != *(int *)(param_1 + 0x7f0)) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_01)(uVar2,param_5,0,0);
    *(int *)(param_1 + 0x7f0) = param_5;
  }
  if (param_6 != *(int *)(param_1 + 0x7f4)) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_02)(uVar2,param_6,0,0);
    *(int *)(param_1 + 0x7f4) = param_6;
  }
  if (*(int *)(param_1 + 0x7f8) != 0) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_03)(uVar2,0,0,0);
    *(int *)(param_1 + 0x7f8) = 0;
  }
  return;
}


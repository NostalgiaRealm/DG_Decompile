/*
 * FUN_1000df90 at 1000df90
 * undefined FUN_1000df90(void)
 * Address ranges: 1000df90-1000e11f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000df90(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  
  FUN_1001bf60(*(undefined4 *)(param_1 + 0x32dc),0,2);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = (int *)(param_1 + 0x32e0);
  if (*(int *)(*piVar1 + 0x1dc) != 2) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
    *(undefined4 *)(*piVar1 + 0x1dc) = 2;
  }
  FUN_10018f20(*piVar1,2,2);
  uVar4 = 1;
  if (param_4 == '\0') {
    FUN_1000cee0(*piVar1,param_2,0,1);
    FUN_1000cee0(*piVar1,param_3,0,1);
  }
  else {
    FUN_1000d1d8();
    FUN_1000d1d8(*piVar1,param_3,0,uVar4 & 0xffffffff);
  }
  **(int **)(*piVar1 + 0x1d4) = *(int *)(*piVar1 + 0x1d8) + -2;
  *(int *)(*(int *)(*piVar1 + 0x1d4) + 4) = *(int *)(*piVar1 + 0x1d8) + -1;
  *(int *)(*piVar1 + 0x1d4) = *(int *)(*piVar1 + 0x1d4) + 8;
  FUN_10017808(param_1);
  uVar3 = (*pcVar2)();
  (*extraout_w11_00)(uVar3);
  return;
}


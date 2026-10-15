/*
 * FUN_1006efa8 at 1006efa8
 * undefined FUN_1006efa8(void)
 * Address ranges: 1006efa8-1006f067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006efa8(int param_1,int param_2,undefined8 param_3,undefined8 param_4,int *param_5,
                 int *param_6,int *param_7)

{
  int *piVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *extraout_w11;
  
  param_1 = param_1 + param_2 * 0x1510;
  piVar1 = (int *)(param_1 + 0x704);
  uVar3 = ZEXT48(piVar1);
  if (((*piVar1 != *param_5) || (*(int *)(param_1 + 0x744) != *param_6)) ||
     (*(int *)(param_1 + 0x784) != *param_7)) {
    *piVar1 = *param_5;
    uVar4 = ZEXT48((int *)(param_1 + 0x744U));
    uVar5 = ZEXT48((int *)(param_1 + 0x784U));
    *(int *)(param_1 + 0x744U) = *param_6;
    *(int *)(param_1 + 0x784U) = *param_7;
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,0,1,uVar3 & 0xffffffff,uVar4 & 0xffffffff,uVar5 & 0xffffffff);
  }
  return;
}


/*
 * FUN_1006b808 at 1006b808
 * undefined FUN_1006b808(void)
 * Address ranges: 1006b808-1006b8c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006b808(int param_1,int param_2,undefined8 param_3,undefined8 param_4,int *param_5,
                 int *param_6,int *param_7)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  code *extraout_w11;
  
  param_1 = param_1 + param_2 * 0x1510;
  piVar1 = (int *)(param_1 + 0x704);
  uVar4 = ZEXT48(piVar1);
  if (((*piVar1 != *param_5) || (*(int *)(param_1 + 0x744) != *param_6)) ||
     (*(int *)(param_1 + 0x784) != *param_7)) {
    iVar2 = *param_6;
    uVar5 = ZEXT48((int *)(param_1 + 0x744U));
    *piVar1 = *param_5;
    uVar6 = ZEXT48((int *)(param_1 + 0x784U));
    *(int *)(param_1 + 0x744U) = iVar2;
    *(int *)(param_1 + 0x784U) = *param_7;
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar3,0,1,uVar4 & 0xffffffff,uVar5 & 0xffffffff,uVar6 & 0xffffffff);
  }
  return;
}


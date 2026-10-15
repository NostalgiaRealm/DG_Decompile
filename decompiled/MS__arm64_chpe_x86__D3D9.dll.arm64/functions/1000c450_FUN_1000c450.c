/*
 * FUN_1000c450 at 1000c450
 * undefined FUN_1000c450(void)
 * Address ranges: 1000c450-1000c71b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1000c450(int param_1,ulonglong param_2,int param_3,int param_4,int param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *pcVar8;
  int local_4c;
  
  pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar7 = (uint)param_2;
  if (param_3 == 0) {
    local_4c = 0;
  }
  else {
    local_4c = *(int *)(param_3 + 0x3c);
  }
  iVar1 = param_1 + uVar7 * 4;
  if (((*(int *)(iVar1 + 26000) == param_3) && (*(int *)(iVar1 + 0x65d0) == param_5)) &&
     (*(int *)(iVar1 + 0x6610) == param_4 && param_6 == '\0')) {
    return 1;
  }
  uVar2 = 1 << (ulonglong)(uVar7 & 0x1f);
  uVar5 = param_2;
  if (param_3 != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_3);
    *(uint *)(param_1 + 0x668c) = uVar2 | *(uint *)(param_1 + 0x668c);
    uVar5 = extraout_x1;
  }
  if (*(int *)(iVar1 + 26000) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 26000) + 0x5c) = 0xffffffff;
    uVar4 = (*pcVar8)();
    (*extraout_w11_00)(uVar4);
    uVar5 = extraout_x1_00;
  }
  *(int *)(iVar1 + 0x65d0) = param_5;
  *(int *)(iVar1 + 26000) = param_3;
  *(int *)(iVar1 + 0x6610) = param_4;
  uVar3 = ~uVar2;
  if (param_3 == 0) {
    *(uint *)(param_1 + 0x6650) = *(uint *)(param_1 + 0x6650) & (uVar2 ^ 0xffffffff);
    uVar7 = *(uint *)(&DAT_00006664 + param_1) & (uVar2 ^ 0xffffffff);
  }
  else {
    *(uint *)(param_3 + 0x5c) = uVar7;
    uVar7 = *(uint *)(&DAT_00006664 + param_1);
    *(uint *)(param_1 + 0x6650) = *(uint *)(param_1 + 0x6650) | uVar2;
    if (*(int *)(param_3 + 0xc) == 0) {
      uVar7 = uVar7 & (uVar2 ^ 0xffffffff);
    }
    else {
      uVar7 = uVar2 | uVar7;
    }
  }
  *(uint *)(&DAT_00006664 + param_1) = uVar7;
  uVar7 = *(uint *)(param_1 + 0x6658) & uVar3;
  if (local_4c != 0) {
    uVar7 = *(uint *)(param_1 + 0x6658) | uVar2;
  }
  *(uint *)(param_1 + 0x6658) = uVar7;
  if ((param_3 == 0) || ((*(uint *)(param_3 + 0x34) >> 4 & 1) == 0)) {
    *(uint *)(param_1 + 0x665c) = uVar3 & *(uint *)(param_1 + 0x665c);
    if (param_3 != 0) goto LAB_1000c634;
LAB_1000c658:
    *(uint *)(param_1 + 0x6660) = *(uint *)(param_1 + 0x6660) & uVar3;
    if (param_3 == 0) {
      uVar4 = (*pcVar8)();
      param_4 = 0;
      uVar6 = 0;
      pcVar8 = extraout_w11_02;
      goto LAB_1000c6ec;
    }
  }
  else {
    *(uint *)(param_1 + 0x665c) = uVar2 | *(uint *)(param_1 + 0x665c);
LAB_1000c634:
    if (*(int *)(param_3 + 0x44) == 0) goto LAB_1000c658;
    *(uint *)(param_1 + 0x6660) = *(uint *)(param_1 + 0x6660) | uVar2;
  }
  uVar7 = *(uint *)(param_3 + 0x44);
  *(undefined1 *)(param_3 + 0x61) = 1;
  if (uVar7 == 0) {
    uVar7 = *(uint *)(param_3 + 0x48);
  }
  uVar6 = (ulonglong)uVar7;
  uVar4 = (*pcVar8)(*(undefined4 *)(param_1 + 0x14),uVar5,uVar6);
  uVar6 = uVar6 & 0xffffffff;
  pcVar8 = extraout_w11_01;
LAB_1000c6ec:
  (*pcVar8)(uVar4,param_2 & 0xffffffff,uVar6,param_4,param_5);
  return 1;
}


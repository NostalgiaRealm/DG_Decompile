/*
 * FUN_1002f100 at 1002f100
 * undefined FUN_1002f100(void)
 * Address ranges: 1002f100-1002f387
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002f100(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  int extraout_w15;
  int local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  uint uStack_5c;
  undefined1 local_57;
  undefined4 local_54;
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar2 = *(int *)(param_1 + 0x315c);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(iVar2);
  piVar1 = (int *)(iVar2 + 4);
  iVar7 = *piVar1;
  iVar6 = *(int *)(iVar7 + 4);
  iVar5 = *(int *)(iVar6 + 0x18);
  iVar4 = FUN_10055ad0((int *)(iVar7 + 4));
  local_88 = *(undefined4 *)(iVar7 + 0x94);
  uStack_64 = *(undefined4 *)(&DAT_10096e18 + iVar4 * 4);
  uStack_8c = *(undefined4 *)(iVar7 + 0x2960);
  uStack_6c = *(undefined4 *)(&DAT_10097910 + *(int *)(iVar6 + 0x1c) * 4);
  local_70 = *(undefined4 *)(iVar7 + 0xb8);
  uStack_74 = *(undefined4 *)(iVar7 + 0xb4);
  local_78 = *(undefined4 *)(iVar7 + 0xac);
  uStack_7c = *(undefined4 *)(iVar7 + 0xa8);
  local_80 = *(undefined4 *)(iVar7 + 0xa4);
  uStack_84 = *(undefined4 *)(iVar7 + 0xa0);
  uStack_5c = (uint)(extraout_w15 != 0);
  local_57 = iVar5 == 1;
  local_68 = 0;
  local_54 = 0;
  local_90 = iVar2;
  iVar5 = FUN_1006ad90(*(undefined4 *)(iVar7 + 0x295c),&local_90);
  FUN_1006ba08(*(undefined4 *)(*piVar1 + 0x295c),*(undefined4 *)(*piVar1 + 0x94),0);
  FUN_10029c00(iVar2);
  iVar6 = *piVar1;
  iVar7 = 0x1d58;
  if (*(char *)(*(int *)(iVar6 + 4) + 0x50) != '\0') {
    iVar7 = 0x1158;
  }
  FUN_1006bcc0(*(undefined4 *)(iVar6 + 0x295c),*(int *)(iVar2 + 8),iVar7 + iVar6,iVar6 + 0x2958);
  if (iVar5 != 0) {
    *(int *)(iVar2 + 8) = iVar5;
    (*pcVar3)();
    (*extraout_w11_00)(iVar2);
  }
  *(undefined1 *)(param_1 + 0x2bc5) = 1;
  *(undefined1 *)(param_1 + 0x2bc3) = 1;
  *(float *)(param_1 + 0x2b08) = (float)*(uint *)(param_1 + 0xa0);
  *(float *)(param_1 + 0x2b0c) = (float)*(uint *)(param_1 + 0xa4);
  *(undefined8 *)(param_1 + 0x2af0) = *(undefined8 *)(param_1 + 0x2b08);
  *(undefined8 *)(param_1 + 0x2ae8) = *(undefined8 *)(param_1 + 0x2b00);
  *(undefined8 *)(param_1 + 11000) = *(undefined8 *)(param_1 + 0x2b10);
  FUN_100492b0(param_1,param_1 + 0x2984);
  return;
}


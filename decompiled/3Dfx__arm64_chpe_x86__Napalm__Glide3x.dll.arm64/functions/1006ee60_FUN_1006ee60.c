/*
 * FUN_1006ee60 at 1006ee60
 * undefined FUN_1006ee60(void)
 * Address ranges: 1006ee60-1006f0c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006ee60(undefined4 param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4,
                 int param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 local_90 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  int local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  float local_48;
  float fStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  local_50 = 0;
  local_48 = (float)(param_3 >> 1 & 0x7fffffff);
  local_40 = 0;
  fStack_44 = (float)(param_4 >> 1 & 0x7fffffff);
  piVar1 = (int *)(param_5 + 8);
  local_3c = 0x3f800000;
  FUN_100709b0(param_1,*(undefined4 *)(*piVar1 + 8),&local_50);
  local_70 = 0;
  uStack_68 = 0;
  FUN_10070f40(param_1,*(undefined4 *)(*piVar1 + 8),4,&local_70,0);
  local_88 = *(undefined4 *)(param_5 + 0x10);
  uStack_84 = 0;
  FUN_10070b38(param_1,*(undefined4 *)(*piVar1 + 8),0,2,&local_88);
  uVar4 = *(uint *)(param_5 + 0x14);
  iVar2 = *piVar1 + uVar4 * 4;
  local_90[0] = *(undefined4 *)(iVar2 + 0xd78);
  *(undefined4 *)(param_5 + 0xc) = *(undefined4 *)(iVar2 + 0xd70);
  *(undefined4 *)(param_5 + 0x10) = *(undefined4 *)(iVar2 + 0xd80);
  *(uint *)(param_5 + 0x14) = uVar4 - 1 & 1;
  FUN_10070f40(param_1,*(undefined4 *)(*piVar1 + 8),1,local_90,0);
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = (int *)(param_5 + 4);
  local_60 = 0;
  uStack_58 = 0;
  uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar6,local_90[0],&local_60);
  iVar7 = *(int *)(*piVar1 + 0x484);
  iVar2 = 0;
  if (iVar7 + 4U < 0x401) {
    iVar2 = iVar7;
  }
  *(int *)(*piVar1 + 0x484) = iVar2 + 4;
  puVar8 = (undefined4 *)(*piVar1 + 0x480);
  uVar6 = (*pcVar5)();
  iVar7 = (*extraout_w11_00)(uVar6,*puVar8,0);
  if (-1 < iVar7) {
    uVar11 = *param_2;
    uVar10 = param_2[3];
    uVar9 = param_2[2];
    puVar3 = (undefined8 *)(local_80 + iVar2 * 0x10);
    puVar3[1] = param_2[1];
    *puVar3 = uVar11;
    puVar3[3] = uVar10;
    puVar3[2] = uVar9;
    uVar11 = param_2[4];
    uVar10 = param_2[7];
    uVar9 = param_2[6];
    puVar3[5] = param_2[5];
    puVar3[4] = uVar11;
    puVar3[7] = uVar10;
    puVar3[6] = uVar9;
    puVar8 = (undefined4 *)(*piVar1 + 0x480);
    uVar6 = (*pcVar5)();
    (*extraout_w11_01)(uVar6,*puVar8,0);
  }
  uVar6 = (*pcVar5)();
  (*extraout_w11_02)(uVar6,4,iVar2);
  return;
}


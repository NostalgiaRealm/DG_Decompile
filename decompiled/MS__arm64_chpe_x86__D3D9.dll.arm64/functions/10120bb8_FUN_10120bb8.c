/*
 * FUN_10120bb8 at 10120bb8
 * undefined FUN_10120bb8(void)
 * Address ranges: 10120bb8-10120ecf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10120bb8(int *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 in_x7;
  uint uVar9;
  int iVar10;
  uint uVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  int local_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_80 [2];
  undefined8 local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_a8 = 0;
  local_b0 = param_1[6];
  iStack_ac = param_1[7];
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar7 = (*extraout_w11)(uVar6,&local_b0,&DAT_10165a98,&local_d0);
  if (iVar7 < 0) {
    return 0;
  }
  local_98 = 3;
  uStack_90 = 0;
  local_80[0] = 1;
  local_88 = 0;
  local_78 = 0;
  local_50 = 0;
  local_70 = ((ulonglong)(((*(uint *)(*param_1 + param_1[1] * 0x18 + 0xc) & 1) + 2) * param_1[7]) &
             0x3fffffff) << 2;
  uStack_68 = 0x1000100000001;
  local_60 = 0x100000000;
  uStack_58 = 0x100000000;
  uVar8 = FUN_10112948(*param_1,param_1[1],&local_98,0,local_80,0x400,0,in_x7,(int)&local_d0 + 4);
  if ((uVar8 & 1) == 0) goto LAB_10120e88;
  local_a0 = 0;
  uVar6 = (*pcVar5)();
  (*extraout_w11_00)(uVar6,0,&local_a0,&uStack_c8);
  piVar1 = param_1 + 2;
  puVar2 = (uint *)(param_1 + 3);
  if (param_1[3] == 0) {
    puVar3 = (uint *)(param_1 + 4);
    uVar11 = *puVar3;
    if (*puVar2 == uVar11) {
      uVar9 = uVar11 << 1;
      if (uVar11 == 0) {
        uVar9 = 0x10;
      }
      iVar7 = uVar9 * 0x20;
      if (uVar9 >> 0x1b != 0) {
        iVar7 = -1;
      }
      iVar7 = FUN_101322b0(iVar7);
      if (iVar7 == 0) goto LAB_10120e60;
      FUN_101325a0(iVar7,*piVar1,((ulonglong)*puVar3 & 0x7ffffff) << 5);
      FUN_101322d0(*piVar1);
      *piVar1 = iVar7;
      *puVar3 = uVar9;
    }
    uVar11 = *puVar2;
  }
  else {
    puVar3 = (uint *)(param_1 + 4);
    iVar7 = param_1[5];
    uVar11 = *puVar3;
    if (*puVar2 == uVar11) {
      uVar9 = uVar11 << 1;
      if (uVar11 == 0) {
        uVar9 = 0x10;
      }
      iVar10 = uVar9 * 0x20;
      if (uVar9 >> 0x1b != 0) {
        iVar10 = -1;
      }
      iVar10 = FUN_101322b0(iVar10);
      if (iVar10 == 0) {
LAB_10120e60:
        uVar6 = (*pcVar5)();
        (*extraout_w11_01)(uVar6);
LAB_10120e88:
        uVar6 = (*pcVar5)();
        (*extraout_w11_02)(uVar6);
        return 0;
      }
      FUN_101325a0(iVar10,*piVar1,((ulonglong)*puVar3 & 0x7ffffff) << 5);
      FUN_101322d0(*piVar1);
      *piVar1 = iVar10;
      *puVar3 = uVar9;
    }
    uVar11 = iVar7 + 1;
    for (uVar9 = *puVar2; uVar11 < uVar9; uVar9 = uVar9 - 1) {
      puVar4 = (undefined8 *)(*piVar1 + uVar9 * 0x20);
      puVar4[1] = puVar4[-3];
      *puVar4 = puVar4[-4];
      puVar4[3] = puVar4[-1];
      puVar4[2] = puVar4[-2];
    }
  }
  puVar4 = (undefined8 *)(*piVar1 + uVar11 * 0x20);
  puVar4[1] = uStack_c8;
  *puVar4 = local_d0;
  puVar4[3] = uStack_b8;
  puVar4[2] = local_c0;
  *puVar2 = *puVar2 + 1;
  return 1;
}


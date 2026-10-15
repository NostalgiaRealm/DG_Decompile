/*
 * FUN_100860b0 at 100860b0
 * undefined FUN_100860b0(void)
 * Address ranges: 100860b0-1008659f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100860b0(int param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4,char param_5
                 )

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  float fVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined8 extraout_x1;
  ulonglong uVar7;
  undefined4 *puVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  float fVar13;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  float local_120;
  float fStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  float local_110;
  float fStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  float local_100;
  float fStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  float local_f0;
  float fStack_ec;
  undefined8 local_e8;
  float local_e0;
  float fStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0 [4];
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  ulonglong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint local_70;
  uint uStack_6c;
  
  local_138 = 0;
  uStack_130 = 0;
  if ((param_2[0x10] != 0) || (param_2[0x11] != 0)) {
    FUN_100d8a98(*(undefined4 *)(param_1 + 0x1cf00),*(undefined4 *)(param_1 + 0x14),4,&local_138,0);
  }
  puVar8 = (undefined4 *)(param_1 + 0x1cf00);
  puVar1 = (undefined4 *)(param_1 + 0x14);
  if (param_5 == '\0') {
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_a0 = (ulonglong)(uint)param_2[0x10] << 0x20;
    uStack_98 = (ulonglong)(uint)param_2[0x11];
    FUN_100d8638(*puVar8,*puVar1,0,0x10,&local_b0);
  }
  local_138 = *(undefined8 *)(param_2 + 0xd);
  FUN_100d8a98(*puVar8,*puVar1,4,&local_138,param_2[0x13]);
  FUN_100d88d0(*puVar8,*puVar1,5,*(undefined4 *)(param_1 + 0x1cfac),
               *(undefined4 *)(param_1 + 0x1cfa8),param_3,0);
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar2 = (undefined4 *)(param_1 + 0x1d1e0);
  uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar6,0,1,puVar2);
  uVar6 = (*pcVar5)();
  (*extraout_w11_00)(uVar6,0,1,puVar2);
  FUN_100d8708(*puVar8,*puVar1);
  FUN_100d8830(*puVar8,*puVar1,0,0);
  uVar6 = (*pcVar5)();
  (*extraout_w11_01)(uVar6,&local_70);
  local_e8 = 0;
  local_d8 = 0;
  local_70 = local_70 >> (ulonglong)(param_2[8] & 0x1f);
  uStack_6c = uStack_6c >> (ulonglong)(param_2[8] & 0x1f);
  if (local_70 == 0) {
    local_70 = 1;
  }
  if (uStack_6c == 0) {
    uStack_6c = 1;
  }
  local_d4 = 0x3f800000;
  local_e0 = (float)(int)local_70;
  fStack_dc = (float)(int)uStack_6c;
  FUN_100d83d0(*puVar8,*puVar1,&local_e8);
  uVar7 = ZEXT48((float *)(param_1 + 0x1ce30U));
  *(float *)(param_1 + 0x1ce34) = (float)(int)uStack_6c;
  *(float *)(param_1 + 0x1ce30U) = (float)(int)local_70;
  *(undefined4 *)(param_1 + 0x1ce90) = param_2[10];
  *(undefined4 *)(param_1 + 0x1ce94) = param_2[0xb];
  *(float *)(param_1 + 0x1cee0) = (float)(uint)param_2[10];
  *(float *)(param_1 + 0x1cee4) = (float)(uint)param_2[0xb];
  fVar4 = (float)param_2[4];
  uVar9 = SUB41(fVar4,0);
  uVar10 = (undefined1)((uint)fVar4 >> 8);
  uVar11 = (undefined1)((uint)fVar4 >> 0x10);
  uVar12 = (undefined1)((uint)fVar4 >> 0x18);
  fVar13 = (float)param_2[6];
  if (fVar4 < fVar13) {
    fVar13 = fVar13 - 0.495;
    uVar9 = SUB41(fVar13,0);
    uVar10 = (undefined1)((uint)fVar13 >> 8);
    uVar11 = (undefined1)((uint)fVar13 >> 0x10);
    uVar12 = (undefined1)((uint)fVar13 >> 0x18);
  }
  *(uint *)(param_1 + 0x1ce98) = CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9)));
  fVar13 = (float)param_2[7];
  fVar4 = (float)param_2[5];
  uVar9 = SUB41(fVar4,0);
  uVar10 = (undefined1)((uint)fVar4 >> 8);
  uVar11 = (undefined1)((uint)fVar4 >> 0x10);
  uVar12 = (undefined1)((uint)fVar4 >> 0x18);
  if (fVar4 < fVar13) {
    fVar13 = fVar13 - 0.495;
    uVar9 = SUB41(fVar13,0);
    uVar10 = (undefined1)((uint)fVar13 >> 8);
    uVar11 = (undefined1)((uint)fVar13 >> 0x10);
    uVar12 = (undefined1)((uint)fVar13 >> 0x18);
  }
  *(uint *)(param_1 + 0x1ce9c) = CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9)));
  uVar6 = (*pcVar5)();
  (*extraout_w11_02)(uVar6,*puVar2,0,0,uVar7 & 0xffffffff,0xd0,0xd0);
  local_128 = *param_2;
  uStack_124 = param_2[1];
  local_118 = param_2[2];
  fStack_11c = (float)param_2[5];
  local_120 = (float)param_2[4];
  local_110 = (float)param_2[6];
  uStack_104 = param_2[3];
  piVar3 = (int *)(param_1 + 0x1cef0);
  fStack_fc = (float)param_2[7];
  local_d0[0] = *piVar3;
  if (local_d0[0] == 0x100) {
    *piVar3 = 0;
    local_d0[0] = 0;
  }
  local_d0[0] = local_d0[0] * 0x40;
  local_d0[1] = 0;
  local_d0[2] = 0;
  local_d0[3] = local_d0[0] + 0x40;
  local_c0 = 0x100000001;
  puVar8 = (undefined4 *)(param_1 + 0x1d1dc);
  uStack_114 = uStack_124;
  fStack_10c = fStack_11c;
  local_108 = local_128;
  local_100 = local_120;
  local_f8 = local_118;
  uStack_f4 = uStack_104;
  local_f0 = local_110;
  fStack_ec = fStack_fc;
  uVar6 = (*pcVar5)();
  (*extraout_w11_03)(uVar6,*puVar8,0,local_d0,&local_128,0x40,0x40);
  uVar6 = (*pcVar5)(*(undefined4 *)(*(int *)(param_1 + 0x1cf04) + 4),extraout_x1,*piVar3 << 2);
  (*extraout_w11_04)(uVar6,4);
  *piVar3 = *piVar3 + 1;
  return;
}


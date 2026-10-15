/*
 * FUN_1000ba20 at 1000ba20
 * undefined FUN_1000ba20(void)
 * Address ranges: 1000ba20-1000beaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000ba20(int param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,char param_5
                 )

{
  undefined4 *puVar1;
  float fVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined8 extraout_x1;
  undefined4 *puVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  float fVar10;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  float local_f8;
  float fStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  float local_e8;
  float fStack_e4;
  undefined8 local_e0;
  float local_d8;
  float fStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8 [4];
  undefined8 local_b8;
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
  
  local_130 = 0;
  uStack_128 = 0;
  if ((param_2[0x10] != 0) || (param_2[0x11] != 0)) {
    FUN_1006bb00(*(undefined4 *)(param_1 + 0xcf00),*(undefined4 *)(param_1 + 0x14),4,&local_130,0);
  }
  puVar5 = (undefined4 *)(param_1 + 0x14);
  puVar1 = (undefined4 *)(param_1 + 0xcf00);
  if (param_5 == '\0') {
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_a0 = (ulonglong)(uint)param_2[0x10] << 0x20;
    uStack_98 = (ulonglong)(uint)param_2[0x11];
    FUN_1006b748(*puVar1,*puVar5);
  }
  local_130 = *(undefined8 *)(param_2 + 0xd);
  FUN_1006bb00(*puVar1,*puVar5,4,&local_130,param_2[0x13]);
  FUN_1006b950(*puVar1,*puVar5);
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar4,0,1,param_1 + 0xd1e0);
  uVar4 = (*pcVar3)();
  (*extraout_w11_00)(uVar4,0,1,param_1 + 0xd1e0);
  FUN_1006b808(*puVar1,*puVar5);
  FUN_1006b8c8(*puVar1,*puVar5);
  uVar4 = (*pcVar3)();
  (*extraout_w11_01)(uVar4,&local_70);
  local_e0 = 0;
  local_d0 = 0;
  local_70 = local_70 >> (ulonglong)(param_2[8] & 0x1f);
  uStack_6c = uStack_6c >> (ulonglong)(param_2[8] & 0x1f);
  if (local_70 == 0) {
    local_70 = 1;
  }
  if (uStack_6c == 0) {
    uStack_6c = 1;
  }
  local_cc = 0x3f800000;
  local_d8 = (float)(int)local_70;
  fStack_d4 = (float)(int)uStack_6c;
  FUN_1006b540(*puVar1,*puVar5,&local_e0);
  *(float *)(param_1 + 0xce30) = (float)(int)local_70;
  *(float *)(param_1 + 0xce34) = (float)(int)uStack_6c;
  *(undefined4 *)(param_1 + 0xce90) = param_2[10];
  *(undefined4 *)(param_1 + 0xce94) = param_2[0xb];
  *(float *)(param_1 + 0xcee0) = (float)(uint)param_2[10];
  *(float *)(param_1 + 0xcee4) = (float)(uint)param_2[0xb];
  fVar10 = (float)param_2[6];
  fVar2 = (float)param_2[4];
  uVar6 = SUB41(fVar2,0);
  uVar7 = (undefined1)((uint)fVar2 >> 8);
  uVar8 = (undefined1)((uint)fVar2 >> 0x10);
  uVar9 = (undefined1)((uint)fVar2 >> 0x18);
  if (fVar2 < fVar10) {
    fVar10 = fVar10 - 0.495;
    uVar6 = SUB41(fVar10,0);
    uVar7 = (undefined1)((uint)fVar10 >> 8);
    uVar8 = (undefined1)((uint)fVar10 >> 0x10);
    uVar9 = (undefined1)((uint)fVar10 >> 0x18);
  }
  *(uint *)(param_1 + 0xce98) = CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6)));
  fVar10 = (float)param_2[7];
  fVar2 = (float)param_2[5];
  uVar6 = SUB41(fVar2,0);
  uVar7 = (undefined1)((uint)fVar2 >> 8);
  uVar8 = (undefined1)((uint)fVar2 >> 0x10);
  uVar9 = (undefined1)((uint)fVar2 >> 0x18);
  if (fVar2 < fVar10) {
    fVar10 = fVar10 - 0.495;
    uVar6 = SUB41(fVar10,0);
    uVar7 = (undefined1)((uint)fVar10 >> 8);
    uVar8 = (undefined1)((uint)fVar10 >> 0x10);
    uVar9 = (undefined1)((uint)fVar10 >> 0x18);
  }
  *(uint *)(param_1 + 0xce9c) = CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6)));
  uVar4 = (*pcVar3)();
  (*extraout_w11_02)(uVar4,*(undefined4 *)(param_1 + 0xd1e0),0,0);
  local_120 = *param_2;
  uStack_11c = param_2[1];
  local_110 = param_2[2];
  fStack_114 = (float)param_2[5];
  local_118 = (float)param_2[4];
  local_108 = (float)param_2[6];
  uStack_fc = param_2[3];
  local_c8[0] = *(int *)(param_1 + 0xcef0);
  fStack_f4 = (float)param_2[7];
  if (local_c8[0] == 0x100) {
    *(undefined4 *)(param_1 + 0xcef0) = 0;
    local_c8[0] = 0;
  }
  local_c8[0] = local_c8[0] * 0x40;
  local_c8[1] = 0;
  local_c8[2] = 0;
  local_c8[3] = local_c8[0] + 0x40;
  local_b8 = 0x100000001;
  puVar5 = (undefined4 *)(param_1 + 0xd1dc);
  uStack_10c = uStack_11c;
  fStack_104 = fStack_114;
  local_100 = local_120;
  local_f8 = local_118;
  local_f0 = local_110;
  uStack_ec = uStack_fc;
  local_e8 = local_108;
  fStack_e4 = fStack_f4;
  uVar4 = (*pcVar3)();
  (*extraout_w11_03)(uVar4,*puVar5,0,local_c8,&local_120,0x40,0x40);
  uVar4 = (*pcVar3)(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 4),extraout_x1,
                    *(int *)(param_1 + 0xcef0) << 2);
  (*extraout_w11_04)(uVar4,4);
  *(int *)(param_1 + 0xcef0) = *(int *)(param_1 + 0xcef0) + 1;
  return;
}


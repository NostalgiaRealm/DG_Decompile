/*
 * FUN_100187b8 at 100187b8
 * undefined FUN_100187b8(void)
 * Address ranges: 100187b8-10018bab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100187b8(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *extraout_w11;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 local_100;
  undefined8 local_f8;
  float local_f0;
  float fStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  float local_e0;
  float fStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  float local_d0;
  float fStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  float local_c0;
  float fStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  float local_b0;
  float fStack_ac;
  undefined8 local_a8;
  uint local_a0;
  uint uStack_9c;
  undefined8 local_98;
  float local_90;
  float fStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [16];
  uint local_70;
  uint local_68;
  undefined8 local_5c;
  
  *(undefined4 *)(param_1 + 0xcf14) = param_3;
  *(undefined4 *)(param_1 + 0xcf10) = *(undefined4 *)(param_1 + 0xd024);
  *(undefined4 *)(param_1 + 0xcf38) = *(undefined4 *)(param_1 + 0xd028);
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2,auStack_80);
  *(undefined8 *)(param_1 + 0xcf6c) = local_5c;
  uVar2 = FUN_10075d20(*(int *)(param_1 + 0xcf04) + 0x1640,param_1 + 0xcf0c);
  FUN_1007d4d8(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),uVar2);
  FUN_1007e5f0(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),uVar2);
  FUN_1007e680(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),5);
  local_98 = 0;
  local_88 = 0;
  local_a8 = 0;
  local_a0 = local_70 >> (ulonglong)(param_2[8] & 0x1f);
  if (local_a0 == 0) {
    local_a0 = 1;
  }
  local_f0 = (float)local_a0;
  uStack_9c = local_68 >> (ulonglong)(param_2[8] & 0x1f);
  if (uStack_9c == 0) {
    uStack_9c = 1;
  }
  fStack_ec = (float)uStack_9c;
  local_84 = 0x3f800000;
  local_90 = local_f0;
  fStack_8c = fStack_ec;
  FUN_1007f570(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),1,&local_98);
  FUN_1007f440(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),1,&local_a8);
  *(float *)(param_1 + 0xce30) = local_f0;
  *(float *)(param_1 + 0xce34) = fStack_ec;
  *(undefined4 *)(param_1 + 0xce90) = param_2[0xb];
  *(undefined4 *)(param_1 + 0xce94) = param_2[0xc];
  *(float *)(param_1 + 0xcee0) = (float)(uint)param_2[0xb];
  *(float *)(param_1 + 0xcee4) = (float)(uint)param_2[0xc];
  fVar6 = (float)param_2[6];
  fVar4 = (float)param_2[4];
  if (fVar4 < fVar6) {
    fVar4 = fVar6 - 0.495;
  }
  *(float *)(param_1 + 0xce98) = fVar4;
  fVar6 = (float)param_2[7];
  fVar4 = (float)param_2[5];
  if (fVar4 < fVar6) {
    fVar4 = fVar6 - 0.495;
  }
  *(float *)(param_1 + 0xce9c) = fVar4;
  FUN_100773f0(*(int *)(param_1 + 0xcf80) + 0x38,&local_100,2,
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xcf04) + 0x1300) + 0xc),
               *(undefined8 *)(*(int *)(*(int *)(param_1 + 0xcf04) + 0x1304) + 0x938));
  if ((undefined8 *)local_f8 != (undefined8 *)0x0) {
    uVar7 = *(undefined8 *)(param_1 + 0xce30);
    uVar5 = *(undefined8 *)(param_1 + 0xce48);
    uVar3 = *(undefined8 *)(param_1 + 0xce40);
    ((undefined8 *)local_f8)[1] = *(undefined8 *)(param_1 + 0xce38);
    *(undefined8 *)local_f8 = uVar7;
    ((undefined8 *)local_f8)[3] = uVar5;
    ((undefined8 *)local_f8)[2] = uVar3;
    uVar7 = *(undefined8 *)(param_1 + 0xce50);
    uVar5 = *(undefined8 *)(param_1 + 0xce68);
    uVar3 = *(undefined8 *)(param_1 + 0xce60);
    ((undefined8 *)local_f8)[5] = *(undefined8 *)(param_1 + 0xce58);
    ((undefined8 *)local_f8)[4] = uVar7;
    ((undefined8 *)local_f8)[7] = uVar5;
    ((undefined8 *)local_f8)[6] = uVar3;
    uVar7 = *(undefined8 *)(param_1 + 0xce70);
    uVar5 = *(undefined8 *)(param_1 + 0xce88);
    uVar3 = *(undefined8 *)(param_1 + 0xce80);
    ((undefined8 *)local_f8)[9] = *(undefined8 *)(param_1 + 0xce78);
    ((undefined8 *)local_f8)[8] = uVar7;
    ((undefined8 *)local_f8)[0xb] = uVar5;
    ((undefined8 *)local_f8)[10] = uVar3;
    uVar7 = *(undefined8 *)(param_1 + 0xce90);
    uVar5 = *(undefined8 *)(param_1 + 0xcea8);
    uVar3 = *(undefined8 *)(param_1 + 0xcea0);
    ((undefined8 *)local_f8)[0xd] = *(undefined8 *)(param_1 + 0xce98);
    ((undefined8 *)local_f8)[0xc] = uVar7;
    ((undefined8 *)local_f8)[0xf] = uVar5;
    ((undefined8 *)local_f8)[0xe] = uVar3;
    uVar7 = *(undefined8 *)(param_1 + 0xceb0);
    uVar5 = *(undefined8 *)(param_1 + 0xcec8);
    uVar3 = *(undefined8 *)(param_1 + 0xcec0);
    ((undefined8 *)local_f8)[0x11] = *(undefined8 *)(param_1 + 0xceb8);
    ((undefined8 *)local_f8)[0x10] = uVar7;
    ((undefined8 *)local_f8)[0x13] = uVar5;
    ((undefined8 *)local_f8)[0x12] = uVar3;
    uVar7 = *(undefined8 *)(param_1 + 0xced0);
    uVar5 = *(undefined8 *)(param_1 + 0xcee8);
    uVar3 = *(undefined8 *)(param_1 + 0xcee0);
    ((undefined8 *)local_f8)[0x15] = *(undefined8 *)(param_1 + 0xced8);
    ((undefined8 *)local_f8)[0x14] = uVar7;
    ((undefined8 *)local_f8)[0x17] = uVar5;
    ((undefined8 *)local_f8)[0x16] = uVar3;
    piVar1 = (int *)(*(int *)(param_1 + 0xcf80) + 0x2c);
    if (*piVar1 != 0) {
      *piVar1 = 0;
    }
    FUN_1007e920(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),0,local_100);
  }
  local_e8 = *param_2;
  uStack_e4 = param_2[1];
  local_d8 = param_2[2];
  fStack_dc = (float)param_2[5];
  uVar3 = 1;
  local_e0 = (float)param_2[4];
  local_d0 = (float)param_2[6];
  uStack_c4 = param_2[3];
  fStack_bc = (float)param_2[7];
  if (*(int *)(param_1 + 0xcef0) == 0x100) {
    *(undefined4 *)(param_1 + 0xcef0) = 0;
    uVar3 = 2;
  }
  uStack_d4 = uStack_e4;
  fStack_cc = fStack_dc;
  local_c8 = local_e8;
  local_c0 = local_e0;
  local_b8 = local_d8;
  uStack_b4 = uStack_c4;
  local_b0 = local_d0;
  fStack_ac = fStack_bc;
  FUN_100773f0(*(int *)(param_1 + 0xcf7c) + 0x38,&local_100,uVar3,
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xcf04) + 0x1300) + 0xc),
               *(undefined8 *)(*(int *)(*(int *)(param_1 + 0xcf04) + 0x1304) + 0x938));
  if ((undefined8 *)local_f8 != (undefined8 *)0x0) {
    local_f8._0_4_ = (undefined8 *)local_f8 + *(int *)(param_1 + 0xcef0) * 8;
    *(undefined8 *)local_f8 = CONCAT44(uStack_e4,local_e8);
    ((undefined8 *)local_f8)[1] = CONCAT44(fStack_dc,local_e0);
    ((undefined8 *)local_f8)[2] = CONCAT44(uStack_d4,local_d8);
    ((undefined8 *)local_f8)[3] = CONCAT44(fStack_cc,local_d0);
    ((undefined8 *)local_f8)[4] = CONCAT44(uStack_c4,local_c8);
    ((undefined8 *)local_f8)[5] = CONCAT44(fStack_bc,local_c0);
    ((undefined8 *)local_f8)[6] = CONCAT44(uStack_b4,local_b8);
    ((undefined8 *)local_f8)[7] = CONCAT44(fStack_ac,local_b0);
    piVar1 = (int *)(*(int *)(param_1 + 0xcf7c) + 0x2c);
    if (*piVar1 != 0) {
      *piVar1 = 0;
    }
  }
  local_f8 = 0x1000004000;
  FUN_1007edb0(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),0,1,&local_100);
  FUN_1007faa0(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),4,1,
               *(int *)(param_1 + 0xcef0) << 2,0);
  *(int *)(param_1 + 0xcef0) = *(int *)(param_1 + 0xcef0) + 1;
  return;
}


/*
 * FUN_100bcc06 at 100bcc06
 * int * __thiscall FUN_100bcc06(void * this, int * param_1, int * param_2, void * param_3, int * param_4, uint * param_5, uint param_6, int param_7, int param_8, int param_9)
 * Address ranges: 100bcc06-100bceeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall
FUN_100bcc06(void *this,int *param_1,int *param_2,void *param_3,int *param_4,uint *param_5,
            uint param_6,int param_7,int param_8,int param_9)

{
  uint *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  undefined1 auVar18 [16];
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  bool bVar22;
  int iVar23;
  uint *puVar24;
  int iVar25;
  uint uVar26;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  uint uVar27;
  int *piVar28;
  uint uVar29;
  char *pcVar30;
  uint uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 local_70 [60];
  uint *local_34;
  undefined4 *local_30;
  uint *local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint *local_1c;
  uint local_18;
  uint local_14;
  
  piVar28 = param_1;
  for (iVar25 = 10; iVar25 != 0; iVar25 = iVar25 + -1) {
    *piVar28 = 0;
    piVar28 = piVar28 + 1;
  }
  if (*(int *)((int)this + 0x8e0) == 0) {
    return param_1;
  }
  if (param_9 == 0) {
    iVar25 = (**(code **)(*param_2 + 0x28))(param_2,local_70);
    param_9 = *(int *)(iVar25 + 0x20);
  }
  local_28 = param_9;
  iVar25 = FUN_100ba24a(param_9);
  iVar23 = FUN_100ba2f3(extraout_EDX);
  local_2c = (uint *)FUN_100ba375(extraout_EDX_00);
  local_14 = (uint)(param_4[4] - param_4[1]) / (uint)local_2c;
  local_1c = (uint *)(param_4[3] - *param_4);
  local_20 = FUN_100ba338(param_9);
  if (iVar23 != 0) {
    iVar25 = iVar23;
  }
  local_20 = (uint)(iVar25 * extraout_EDX_01) / local_20;
  local_18 = local_20 + 0xff & 0xffffff00;
  local_24 = (param_4[5] - param_4[2]) * local_18 * local_14;
  if ((param_9 == 0x2c) || (param_9 == 0x2d)) {
    if (param_8 == 0) {
      local_28 = 0x2a;
    }
    else {
      if (param_8 != 1) goto LAB_100bcd11;
      local_28 = 0x3e;
    }
    iVar25 = FUN_100ba24a(local_28);
    local_18 = iVar25 * (int)local_1c + 0xffU & 0xffffff00;
    local_24 = local_18 * extraout_EDX_02;
  }
LAB_100bcd11:
  uVar31 = local_18;
  bVar22 = FUN_100c0821(param_3,local_24,param_1);
  if (bVar22) {
    if (((param_9 == 0x2c) || (param_9 == 0x2d)) && (param_8 == 1)) {
      pcVar30 = (char *)*param_1;
      if (local_14 != 0) {
        uVar29 = (uint)(param_4[3] - *param_4) >> 4;
        uVar26 = param_4[3] - *param_4 & 0xf;
        uVar27 = uVar29;
        local_1c = (uint *)pcVar30;
        puVar24 = param_5;
        do {
          for (; uVar27 != 0; uVar27 = uVar27 - 1) {
            auVar34._0_4_ = param_5[8] >> 0x18;
            auVar34._4_4_ = param_5[9] >> 0x18;
            auVar34._8_4_ = param_5[10] >> 0x18;
            auVar34._12_4_ = param_5[0xb] >> 0x18;
            auVar32._0_4_ = *param_5 >> 0x18;
            auVar32._4_4_ = param_5[1] >> 0x18;
            auVar32._8_4_ = param_5[2] >> 0x18;
            auVar32._12_4_ = param_5[3] >> 0x18;
            auVar33._4_4_ = param_5[0xd] >> 0x18;
            auVar33._0_4_ = param_5[0xc] >> 0x18;
            auVar33._8_4_ = param_5[0xe] >> 0x18;
            auVar33._12_4_ = param_5[0xf] >> 0x18;
            auVar34 = packssdw(auVar34,auVar33);
            puVar1 = param_5 + 4;
            puVar19 = param_5 + 5;
            puVar20 = param_5 + 6;
            puVar21 = param_5 + 7;
            param_5 = param_5 + 0x10;
            auVar18._4_4_ = *puVar19 >> 0x18;
            auVar18._0_4_ = *puVar1 >> 0x18;
            auVar18._8_4_ = *puVar20 >> 0x18;
            auVar18._12_4_ = *puVar21 >> 0x18;
            auVar33 = packssdw(auVar32,auVar18);
            sVar2 = auVar33._0_2_;
            sVar3 = auVar33._2_2_;
            sVar4 = auVar33._4_2_;
            sVar5 = auVar33._6_2_;
            sVar6 = auVar33._8_2_;
            sVar7 = auVar33._10_2_;
            sVar8 = auVar33._12_2_;
            sVar9 = auVar33._14_2_;
            sVar10 = auVar34._0_2_;
            sVar11 = auVar34._2_2_;
            sVar12 = auVar34._4_2_;
            sVar13 = auVar34._6_2_;
            sVar14 = auVar34._8_2_;
            sVar15 = auVar34._10_2_;
            sVar16 = auVar34._12_2_;
            sVar17 = auVar34._14_2_;
            *pcVar30 = (0 < sVar2) * (sVar2 < 0x100) * auVar33[0] - (0xff < sVar2);
            pcVar30[1] = (0 < sVar3) * (sVar3 < 0x100) * auVar33[2] - (0xff < sVar3);
            pcVar30[2] = (0 < sVar4) * (sVar4 < 0x100) * auVar33[4] - (0xff < sVar4);
            pcVar30[3] = (0 < sVar5) * (sVar5 < 0x100) * auVar33[6] - (0xff < sVar5);
            pcVar30[4] = (0 < sVar6) * (sVar6 < 0x100) * auVar33[8] - (0xff < sVar6);
            pcVar30[5] = (0 < sVar7) * (sVar7 < 0x100) * auVar33[10] - (0xff < sVar7);
            pcVar30[6] = (0 < sVar8) * (sVar8 < 0x100) * auVar33[0xc] - (0xff < sVar8);
            pcVar30[7] = (0 < sVar9) * (sVar9 < 0x100) * auVar33[0xe] - (0xff < sVar9);
            pcVar30[8] = (0 < sVar10) * (sVar10 < 0x100) * auVar34[0] - (0xff < sVar10);
            pcVar30[9] = (0 < sVar11) * (sVar11 < 0x100) * auVar34[2] - (0xff < sVar11);
            pcVar30[10] = (0 < sVar12) * (sVar12 < 0x100) * auVar34[4] - (0xff < sVar12);
            pcVar30[0xb] = (0 < sVar13) * (sVar13 < 0x100) * auVar34[6] - (0xff < sVar13);
            pcVar30[0xc] = (0 < sVar14) * (sVar14 < 0x100) * auVar34[8] - (0xff < sVar14);
            pcVar30[0xd] = (0 < sVar15) * (sVar15 < 0x100) * auVar34[10] - (0xff < sVar15);
            pcVar30[0xe] = (0 < sVar16) * (sVar16 < 0x100) * auVar34[0xc] - (0xff < sVar16);
            pcVar30[0xf] = (0 < sVar17) * (sVar17 < 0x100) * auVar34[0xe] - (0xff < sVar17);
            pcVar30 = pcVar30 + 0x10;
          }
          uVar31 = 0;
          if (uVar26 != 0) {
            do {
              pcVar30[uVar31] = (char)(param_5[uVar31] >> 0x18);
              uVar31 = uVar31 + 1;
            } while (uVar31 < uVar26);
          }
          param_5 = (uint *)((int)puVar24 + param_6);
          pcVar30 = (char *)((int)local_1c + local_18);
          local_14 = local_14 - 1;
          uVar31 = local_18;
          uVar27 = uVar29;
          local_1c = (uint *)pcVar30;
          puVar24 = param_5;
        } while (local_14 != 0);
      }
    }
    else if ((param_6 == uVar31) && (local_20 == param_6)) {
      local_30 = (undefined4 *)*param_1;
      local_1c = param_5;
      uVar27 = param_4[2];
      if (uVar27 < (uint)param_4[5]) {
        local_14 = uVar31 * local_14;
        do {
          FUN_100cff00(local_30,local_1c,((param_4[4] - param_4[1]) * local_20) / (uint)local_2c);
          local_30 = (undefined4 *)((int)local_30 + local_14);
          local_1c = (uint *)((int)local_1c + param_7);
          uVar27 = uVar27 + 1;
          uVar31 = local_18;
        } while (uVar27 < (uint)param_4[5]);
      }
    }
    else {
      local_18 = param_4[2];
      local_1c = (uint *)*param_1;
      local_30 = (undefined4 *)local_14;
      uVar27 = local_14;
      local_34 = param_5;
      local_2c = param_5;
      if (local_18 < (uint)param_4[5]) {
        do {
          for (; local_30 != (undefined4 *)0x0; local_30 = (undefined4 *)((int)local_30 - 1)) {
            FUN_100cff00(local_1c,param_5,local_20);
            param_5 = (uint *)((int)param_5 + param_6);
            local_1c = (uint *)((int)local_1c + uVar31);
            uVar27 = local_14;
          }
          param_5 = (uint *)((int)local_2c + param_7);
          local_18 = local_18 + 1;
          local_30 = (undefined4 *)uVar27;
          local_34 = param_5;
          local_2c = param_5;
        } while (local_18 < (uint)param_4[5]);
      }
    }
    param_1[6] = local_24;
    param_1[8] = local_28;
    param_1[7] = uVar31;
  }
  return param_1;
}


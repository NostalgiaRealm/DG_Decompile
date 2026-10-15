/*
 * FUN_18008a494 at 18008a494
 * undefined __fastcall FUN_18008a494(longlong param_1, float * param_2, uint param_3, uint param_4, uint param_5, char param_6, uint param_7)
 * Address ranges: 18008a494-18008a932
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008a494(longlong param_1,float *param_2,uint param_3,uint param_4,uint param_5,
                  char param_6,uint param_7)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  byte bVar10;
  int *piVar11;
  undefined *puVar12;
  undefined8 uVar13;
  uint uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 auStack_f0 [3];
  undefined8 local_d8 [5];
  undefined8 local_b0;
  undefined8 local_a8;
  
  if ((char)param_7 == '\0') {
    fVar15 = param_2[6];
    fVar22 = param_2[4];
    fVar20 = param_2[7];
    fVar23 = param_2[5];
    fVar24 = ((fVar15 - fVar22) / (param_2[2] - *param_2)) * 0.495;
    fVar25 = ((fVar20 - fVar23) / (param_2[3] - param_2[1])) * 0.495;
    if ((int)param_5 < 0) {
      cVar2 = FUN_1800a91c4(param_5);
LAB_18008a54e:
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(param_2 + 0x12) + 0x50))
                  (*(longlong **)(param_2 + 0x12),&local_108);
        bVar10 = SUB41(param_2[10],0) & 0x1f;
        local_108._4_4_ = local_108._4_4_ >> (SUB41(param_2[10],0) & 0x1f);
        uVar9 = 1;
        if ((uint)local_108 >> bVar10 != 0) {
          uVar9 = (uint)local_108 >> bVar10;
        }
        fVar15 = (float)uVar9;
        uVar9 = 1;
        if (local_108._4_4_ != 0) {
          uVar9 = local_108._4_4_;
        }
        fVar20 = (float)uVar9;
        fVar24 = fVar24 / fVar15;
        fVar25 = fVar25 / fVar20;
        if (param_6 == '\0') {
          fVar21 = 0.5;
        }
        else {
          fVar21 = 1.0;
        }
        fVar22 = (fVar21 + param_2[4]) / fVar15;
        fVar23 = (fVar21 + param_2[5]) / fVar20;
        fVar15 = (fVar21 + param_2[6]) / fVar15;
        fVar20 = (fVar21 + param_2[7]) / fVar20;
      }
    }
    else if (param_5 - 4 < 2) {
      cVar2 = '\x01';
      goto LAB_18008a54e;
    }
    param_2[4] = fVar22 - fVar24;
    param_2[5] = fVar23 - fVar25;
    param_2[6] = fVar15 - fVar24;
    param_2[7] = fVar20 - fVar25;
  }
  uVar14 = 2;
  uVar9 = param_5;
  if (((int)param_5 < 0) && (((byte)param_5 & 0xf) == 2)) {
    FUN_1800ac578(&param_7,param_1,param_4);
    uVar9 = ~(param_7 << 8) & 0x40000000 | (param_7 & 0xfff00) << 10 | param_5 & 0x8003ffff;
  }
  if ((int)uVar9 < 0) {
    lVar4 = FUN_180088ec8((longlong *)(param_1 + 0x1d070),uVar9);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x1cf20 + (ulonglong)uVar9 * 8);
  }
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  local_108 = 0;
  uStack_100 = 0;
  if (-1 < (int)uVar9) {
    bVar3 = FUN_18008d1bc(param_1,local_d8,local_d8 + 1,local_d8 + 2,local_d8 + 3,param_4);
    if (!bVar3) {
      local_d8[3] = 0;
      local_d8[2] = 0;
      local_d8[1] = 0;
      local_d8[0] = 0;
    }
    if (param_3 == 0) {
      local_d8[4] = *(undefined8 *)(param_1 + 0x1d2c8);
    }
    else {
      local_d8[4] = 0;
    }
    uVar9 = 7;
    local_b0 = *(undefined8 *)(param_2 + 0x14);
    local_a8 = *(undefined8 *)(param_2 + 0x16);
    uVar16 = extraout_XMM0_Da_00;
    uVar17 = extraout_XMM0_Db_00;
    uVar18 = extraout_XMM0_Dc_00;
    uVar19 = extraout_XMM0_Dd_00;
    goto LAB_18008a7d0;
  }
  uVar6 = uVar9 & 0x400;
  uVar9 = uVar9 & 0xf;
  bVar10 = (-(uVar6 != 0) & 2U) + 1;
  if (uVar9 == 2) {
LAB_18008a6f7:
    bVar3 = false;
    bVar1 = false;
  }
  else {
    if (uVar9 == 1) {
      bVar1 = true;
      bVar10 = (-(uVar6 != 0) & 2U) + 0xd;
    }
    else {
      if (uVar9 != 0) goto LAB_18008a6f7;
      bVar10 = (-(uVar6 != 0) & 2U) + 5;
      bVar1 = false;
    }
    bVar3 = true;
    FUN_18008d1bc(param_1,&local_108,&uStack_100,&local_f8,auStack_f0,param_4);
    uVar16 = extraout_XMM0_Da;
    uVar17 = extraout_XMM0_Db;
    uVar18 = extraout_XMM0_Dc;
    uVar19 = extraout_XMM0_Dd;
  }
  local_d8[0] = *(undefined8 *)(param_2 + 0x14);
  uVar9 = 1;
  if ((bVar10 & 2) == 0) {
    puVar7 = local_d8 + 1;
  }
  else {
    local_d8[1] = *(undefined8 *)(param_2 + 0x16);
    puVar7 = local_d8 + 2;
    uVar14 = 3;
    uVar9 = 2;
  }
  if (bVar3) {
    *puVar7 = local_108;
    uVar9 = uVar14;
  }
  if (bVar1) {
    uVar8 = (ulonglong)uVar9;
    uVar9 = uVar9 + 1;
    local_d8[uVar8] = uStack_100;
  }
LAB_18008a7d0:
  if (uVar9 != 0) {
    local_f8 = 0;
    auStack_f0[0] = 0;
    local_108 = CONCAT44(uVar17,uVar16);
    uStack_100 = CONCAT44(uVar19,uVar18);
    FUN_1800dc4ec(*(longlong *)(param_1 + 0x1cf10),(ulonglong)*(uint *)(param_1 + 0x28),4,
                  (longlong)&local_108,0);
    if (uVar9 < 0x10) {
      FUN_1800fbea0((undefined1 *)(local_d8 + uVar9),0,(ulonglong)(0x10 - uVar9) << 3);
    }
    FUN_1800dc1e8(*(longlong *)(param_1 + 0x1cf10),(ulonglong)*(uint *)(param_1 + 0x28),0,0x10,
                  (longlong)local_d8);
  }
  piVar11 = (int *)0x0;
  param_2[0x16] = 0.0;
  param_2[0x17] = 0.0;
  param_2[0x14] = 0.0;
  param_2[0x15] = 0.0;
  FUN_1800aa43c(param_1,(ulonglong)param_3,0,0);
  FUN_1800dbbbc(*(longlong *)(param_1 + 0x1cf10),(ulonglong)*(uint *)(param_1 + 0x28),
                (int *)&DAT_1801001b0,piVar11,-1,'\0');
  piVar11 = (int *)&DAT_1801002b8;
  if (*(longlong *)(param_2 + 0xc) != 0) {
    piVar11 = (int *)&DAT_180100350;
  }
  uVar13 = 0;
  FUN_1800dbc90(*(longlong *)(param_1 + 0x1cf10),(ulonglong)*(uint *)(param_1 + 0x28),piVar11,0);
  puVar12 = &DAT_180100328;
  FUN_1800dbe08(*(longlong *)(param_1 + 0x1cf10),(ulonglong)*(uint *)(param_1 + 0x28),
                (uint *)&DAT_180100328);
  puVar5 = (uint *)&DAT_1801002f0;
  if (param_6 != '\0') {
    puVar5 = (uint *)&DAT_180100178;
  }
  FUN_1800dc0cc(*(longlong *)(param_1 + 0x1cf10),(ulonglong)*(uint *)(param_1 + 0x28),puVar12,uVar13
                ,puVar5);
  param_5 = CONCAT31(param_5._1_3_,1);
  FUN_180089dfc(param_1,param_2,lVar4,(int)uVar13,param_5);
  return;
}


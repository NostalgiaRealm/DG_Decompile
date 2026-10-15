/*
 * FUN_10016cb2 at 10016cb2
 * undefined __thiscall FUN_10016cb2(void * this, int * param_1, int param_2, int param_3, uint param_4, int param_5, uint param_6, int param_7, char param_8)
 * Address ranges: 10016cb2-10017451
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_10016cb2(void *this,int *param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6,
            int param_7,char param_8)

{
  uint uVar1;
  longlong lVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  uint uVar11;
  SIZE_T SVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int local_1a0;
  undefined *local_19c;
  int local_198;
  undefined *local_194;
  undefined *local_190;
  undefined *local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  uint local_170;
  undefined1 local_16c;
  undefined1 local_16b;
  undefined1 local_16a;
  undefined1 local_169;
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166;
  undefined1 local_165;
  byte local_164;
  int local_158;
  undefined4 local_154;
  int local_150;
  uint *local_14c;
  uint local_70;
  uint local_6c;
  uint local_68;
  void *local_64;
  uint *local_60;
  uint local_5c;
  uint *local_58;
  uint *local_54;
  uint *local_50;
  uint *local_4c;
  uint *local_48;
  uint *local_44;
  int local_40;
  uint *local_3c;
  uint *local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  char local_1d;
  uint *local_1c;
  char local_15;
  char local_14;
  char local_13;
  bool local_12;
  char local_11;
  
  local_1d = *(char *)(param_3 + 0x3c);
  local_12 = *(bool *)(param_3 + 0x44);
  if (((local_1d == -1) && (local_12 == true)) || (bVar16 = true, (param_4 & 4) == 0)) {
    bVar16 = false;
  }
  iVar22 = *(int *)((int)this + 0x4bc);
  if ((((iVar22 == 1) || (iVar22 == 2)) || (iVar22 == 3)) && (*(int *)((int)this + 0x2fc) != 0)) {
    bVar10 = true;
    local_14 = '\x01';
  }
  else {
    bVar10 = false;
    local_14 = '\0';
  }
  if ((local_12 == true) || (local_13 = '\x01', !bVar10)) {
    local_13 = '\0';
  }
  local_15 = '\0';
  uVar11 = 0;
  do {
    if ((*(int *)((int)this + uVar11 * 0x74 + 0x548) != 1) &&
       ((*(uint *)((int)this + uVar11 * 0x74 + 0x570) & 0x30000) != 0)) {
      local_15 = '\x01';
      break;
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 8);
  local_64 = this;
  if (local_13 == '\0' && local_15 == '\0') {
    if (bVar16) {
      uVar11 = 0;
      if (*(uint *)((int)this + 0x178) != 0) {
        do {
          if (*(int *)(*(int *)((int)this + 0x174) + uVar11 * 4) != -1) goto LAB_10016d97;
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(uint *)((int)this + 0x178));
      }
    }
    local_11 = '\0';
  }
  else {
LAB_10016d97:
    local_11 = '\x01';
    if (*(uint *)((int)this + 0xaa0) < param_6) {
      FUN_1001682c((int)this);
      lVar2 = (ulonglong)(param_6 * 2 | 1) * 0x10;
      SVar12 = (SIZE_T)lVar2;
      if ((int)((ulonglong)lVar2 >> 0x20) != 0) {
        SVar12 = 0xffffffff;
      }
      iVar22 = FUN_100ad4a9(SVar12);
      *(int *)((int)this + 0xa98) = iVar22;
      if (iVar22 != 0) {
        *(uint *)((int)this + 0xa94) = iVar22 + 0xfU & 0xfffffff0;
        *(uint *)((int)this + 0xaa0) = param_6;
      }
    }
  }
  local_24 = *(uint **)(param_3 + 0xc);
  FUN_100ada8e(&local_1a0,0,0x58);
  local_14c = local_24;
  if (*(char *)(param_3 + 0x14) != -1) {
    local_150 = (int)local_24 * param_5 + param_2 + (uint)*(byte *)(param_3 + 0x17) * 4;
  }
  local_188 = param_1[1];
  local_19c = &DAT_100b19c4;
  local_16b = 2;
  local_1a0 = local_188 * param_7 + *param_1;
  local_16c = (undefined1)param_1[2];
  if (param_1[9] != 0) {
    local_184 = param_1[10];
    local_19c = (undefined *)(local_184 * param_7 + param_1[9]);
    local_16b = (undefined1)param_1[0xb];
  }
  local_194 = &DAT_100b19c4;
  local_169 = 2;
  if (param_1[0x2d] != 0) {
    local_180 = param_1[0x2e];
    local_194 = (undefined *)(local_180 * param_7 + param_1[0x2d]);
    local_169 = (undefined1)param_1[0x2f];
  }
  local_190 = &DAT_100b19c4;
  local_168 = 2;
  if (param_1[0x30] != 0) {
    local_17c = param_1[0x31];
    local_190 = (undefined *)(local_17c * param_7 + param_1[0x30]);
    local_168 = (undefined1)param_1[0x32];
  }
  local_18c = &DAT_100b19c0;
  local_178 = 0;
  local_167 = 5;
  if (param_1[3] != 0) {
    local_174 = param_1[4];
    local_198 = local_174 * param_7 + param_1[3];
    local_170 = (uint)*(byte *)((int)param_1 + 0x15);
    local_16a = (undefined1)param_1[5];
    if ((param_1[6] != 0) && (*(int *)((int)this + 0x528) != 0)) {
      local_178 = param_1[7];
      local_18c = (undefined *)(local_178 * param_7 + param_1[6]);
      local_167 = (undefined1)param_1[8];
    }
  }
  if (local_11 == '\0') {
    local_154 = 0;
  }
  else {
    local_154 = *(undefined4 *)((int)this + 0xa94);
  }
  local_158 = (int)this + 0x1ec;
  local_164 = (byte)(param_4 >> 3) & 1;
  local_166 = 1;
  local_165 = 1;
  FUN_1001e9d3(this,&local_1a0,0,param_6);
  local_3c = (uint *)0x0;
  if (local_12 != true) {
    local_3c = (uint *)((int)local_24 * param_5 + param_2 + (uint)*(byte *)(param_3 + 0x47) * 4);
  }
  if ((DAT_100bf1a4 & 1) == 0) {
    DAT_100bf1a4 = DAT_100bf1a4 | 1;
    _DAT_100bf1a8 = *(uint *)((int)this + 0xac4) | 0xff000000;
  }
  local_1c = (uint *)(param_1 + 0x13);
  local_40 = 0;
  local_60 = (uint *)&DAT_100bf1a8;
  if (param_1[0x12] != 0) {
    local_40 = param_1[0x13];
    local_60 = (uint *)(local_40 * param_7 + param_1[0x12]);
  }
  if (local_13 != '\0') {
    FUN_10017585(this,*(int *)((int)this + 0xa94),local_60,local_40,param_6,local_3c,
                 *(int *)(param_3 + 0xc));
  }
  bVar16 = true;
  if ((local_1d == -1) && (local_12 == true)) goto LAB_100173d3;
  local_28 = (uint *)0x0;
  local_34 = (uint *)0x0;
  local_2c = (uint *)0x0;
  local_38 = (uint *)0x0;
  if (param_1[0xf] != 0) {
    local_2c = (uint *)param_1[0x10];
    local_28 = (uint *)((int)local_2c * param_7 + param_1[0xf]);
  }
  if (param_1[0x12] != 0) {
    local_38 = (uint *)*local_1c;
    local_34 = (uint *)((int)local_38 * param_7 + param_1[0x12]);
  }
  local_30 = (uint *)0x0;
  iVar22 = (int)(*(float *)((int)this + 0x11c) * 255.0);
  iVar23 = (int)(*(float *)((int)this + 0x118) * 255.0);
  iVar24 = (int)(*(float *)((int)this + 0x114) * 255.0);
  iVar25 = (int)(*(float *)((int)this + 0x120) * 255.0);
  auVar17._4_4_ = iVar23;
  auVar17._0_4_ = iVar22;
  auVar17._8_4_ = iVar24;
  auVar17._12_4_ = iVar25;
  auVar18._4_4_ = iVar23;
  auVar18._0_4_ = iVar22;
  auVar18._8_4_ = iVar24;
  auVar18._12_4_ = iVar25;
  auVar18 = packssdw(auVar17,auVar18);
  sVar3 = auVar18._0_2_;
  sVar4 = auVar18._2_2_;
  sVar5 = auVar18._4_2_;
  sVar6 = auVar18._6_2_;
  local_70 = CONCAT13((0 < sVar6) * (sVar6 < 0x100) * auVar18[6] - (0xff < sVar6),
                      CONCAT12((0 < sVar5) * (sVar5 < 0x100) * auVar18[4] - (0xff < sVar5),
                               CONCAT11((0 < sVar4) * (sVar4 < 0x100) * auVar18[2] - (0xff < sVar4),
                                        (0 < sVar3) * (sVar3 < 0x100) * auVar18[0] - (0xff < sVar3))
                              ));
  iVar22 = (int)(*(float *)((int)this + 0x13c) * 255.0);
  iVar23 = (int)(*(float *)((int)this + 0x138) * 255.0);
  iVar24 = (int)(*(float *)((int)this + 0x134) * 255.0);
  iVar25 = (int)(*(float *)((int)this + 0x140) * 255.0);
  auVar19._4_4_ = iVar23;
  auVar19._0_4_ = iVar22;
  auVar19._8_4_ = iVar24;
  auVar19._12_4_ = iVar25;
  auVar7._4_4_ = iVar23;
  auVar7._0_4_ = iVar22;
  auVar7._8_4_ = iVar24;
  auVar7._12_4_ = iVar25;
  auVar18 = packssdw(auVar19,auVar7);
  sVar3 = auVar18._0_2_;
  sVar4 = auVar18._2_2_;
  sVar5 = auVar18._4_2_;
  sVar6 = auVar18._6_2_;
  local_5c = CONCAT13((0 < sVar6) * (sVar6 < 0x100) * auVar18[6] - (0xff < sVar6),
                      CONCAT12((0 < sVar5) * (sVar5 < 0x100) * auVar18[4] - (0xff < sVar5),
                               CONCAT11((0 < sVar4) * (sVar4 < 0x100) * auVar18[2] - (0xff < sVar4),
                                        (0 < sVar3) * (sVar3 < 0x100) * auVar18[0] - (0xff < sVar3))
                              ));
  iVar22 = (int)(*(float *)((int)this + 0x10c) * 255.0);
  iVar23 = (int)(*(float *)((int)this + 0x108) * 255.0);
  iVar24 = (int)(*(float *)((int)this + 0x104) * 255.0);
  iVar25 = (int)(*(float *)((int)this + 0x110) * 255.0);
  auVar20._4_4_ = iVar23;
  auVar20._0_4_ = iVar22;
  auVar20._8_4_ = iVar24;
  auVar20._12_4_ = iVar25;
  auVar8._4_4_ = iVar23;
  auVar8._0_4_ = iVar22;
  auVar8._8_4_ = iVar24;
  auVar8._12_4_ = iVar25;
  auVar18 = packssdw(auVar20,auVar8);
  sVar3 = auVar18._0_2_;
  sVar4 = auVar18._2_2_;
  sVar5 = auVar18._4_2_;
  sVar6 = auVar18._6_2_;
  local_68 = CONCAT13((0 < sVar6) * (sVar6 < 0x100) * auVar18[6] - (0xff < sVar6),
                      CONCAT12((0 < sVar5) * (sVar5 < 0x100) * auVar18[4] - (0xff < sVar5),
                               CONCAT11((0 < sVar4) * (sVar4 < 0x100) * auVar18[2] - (0xff < sVar4),
                                        (0 < sVar3) * (sVar3 < 0x100) * auVar18[0] - (0xff < sVar3))
                              ));
  iVar22 = (int)(*(float *)((int)this + 300) * 255.0);
  iVar23 = (int)(*(float *)((int)this + 0x128) * 255.0);
  iVar24 = (int)(*(float *)((int)this + 0x124) * 255.0);
  iVar25 = (int)(*(float *)((int)this + 0x130) * 255.0);
  auVar21._4_4_ = iVar23;
  auVar21._0_4_ = iVar22;
  auVar21._8_4_ = iVar24;
  auVar21._12_4_ = iVar25;
  auVar9._4_4_ = iVar23;
  auVar9._0_4_ = iVar22;
  auVar9._8_4_ = iVar24;
  auVar9._12_4_ = iVar25;
  auVar18 = packssdw(auVar21,auVar9);
  sVar3 = auVar18._0_2_;
  sVar4 = auVar18._2_2_;
  sVar5 = auVar18._4_2_;
  sVar6 = auVar18._6_2_;
  local_6c = CONCAT13((0 < sVar6) * (sVar6 < 0x100) * auVar18[6] - (0xff < sVar6),
                      CONCAT12((0 < sVar5) * (sVar5 < 0x100) * auVar18[4] - (0xff < sVar5),
                               CONCAT11((0 < sVar4) * (sVar4 < 0x100) * auVar18[2] - (0xff < sVar4),
                                        (0 < sVar3) * (sVar3 < 0x100) * auVar18[0] - (0xff < sVar3))
                              ));
  if (*(char *)(param_3 + 0x3c) != -1) {
    local_30 = (uint *)((int)local_24 * param_5 + param_2 + (uint)*(byte *)(param_3 + 0x3f) * 4);
  }
  local_12 = true;
  if ((param_4 & 4) != 0) {
    local_54 = &local_68;
    local_44 = (uint *)0x0;
    local_24 = (uint *)0x0;
    local_4c = (uint *)0x0;
    local_48 = (uint *)0x0;
    puVar13 = &local_5c;
    local_50 = &local_6c;
    local_1c = &local_70;
    if (*(int *)((int)this + 0x4c0) != 0) {
      if (*(int *)((int)this + 0x4d0) == 1) {
        if (local_28 != (uint *)0x0) {
          local_44 = local_2c;
          local_54 = local_28;
        }
      }
      else if ((*(int *)((int)this + 0x4d0) == 2) && (local_34 != (uint *)0x0)) {
        local_44 = local_38;
        local_54 = local_34;
      }
      puVar14 = &local_6c;
      if (*(int *)((int)this + 0x4d4) == 1) {
        puVar15 = local_2c;
        local_50 = local_28;
        if (local_28 != (uint *)0x0) {
LAB_1001726f:
          puVar14 = local_50;
          local_24 = puVar15;
        }
      }
      else if ((*(int *)((int)this + 0x4d4) == 2) && (local_34 != (uint *)0x0)) {
        local_50 = local_34;
        puVar15 = local_38;
        goto LAB_1001726f;
      }
      local_50 = puVar14;
      puVar14 = &local_70;
      if (*(int *)((int)this + 0x4d8) == 1) {
        puVar15 = local_2c;
        local_1c = local_28;
        if (local_28 != (uint *)0x0) {
LAB_10017299:
          local_4c = puVar15;
          puVar14 = local_1c;
        }
      }
      else if ((*(int *)((int)this + 0x4d8) == 2) && (local_34 != (uint *)0x0)) {
        local_1c = local_34;
        puVar15 = local_38;
        goto LAB_10017299;
      }
      local_1c = puVar14;
      if (*(int *)((int)this + 0x4dc) == 1) {
        puVar14 = local_2c;
        local_58 = local_28;
        if (local_28 != (uint *)0x0) {
LAB_100172c3:
          puVar13 = local_58;
          local_48 = puVar14;
        }
      }
      else if ((*(int *)((int)this + 0x4dc) == 2) && (local_34 != (uint *)0x0)) {
        local_58 = local_34;
        puVar14 = local_38;
        goto LAB_100172c3;
      }
    }
    local_58 = puVar13;
    puVar13 = local_60;
    iVar22 = local_40;
    if (local_14 != '\0') {
      puVar13 = local_3c;
      iVar22 = *(int *)(param_3 + 0xc);
    }
    FUN_1001869f(this,*(int *)((int)this + 0xa94),0,local_184,local_1c,local_58,local_54,local_50,
                 puVar13,(int)local_4c,(int)local_48,(int)local_44,(int)local_24,iVar22,local_30,
                 local_3c,*(int *)(param_3 + 0xc),*(int *)(param_3 + 0xc),param_6);
    bVar16 = false;
    local_12 = *(int *)((int)this + 0x300) == 0;
  }
  if (param_8 == '\0') {
    if ((local_30 != (uint *)0x0) && (bVar16)) {
      puVar13 = (uint *)((int)this + 0xac0);
      if (local_28 != (uint *)0x0) {
        puVar13 = local_28;
      }
      bVar16 = local_28 != (uint *)0x0;
      uVar11 = param_6;
      local_28 = (uint *)0x0;
      if (bVar16) {
        local_28 = local_2c;
      }
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
        uVar1 = *puVar13;
        puVar13 = (uint *)((int)puVar13 + (int)local_28);
        *local_30 = uVar1;
        local_30 = (uint *)((int)local_30 + *(int *)(param_3 + 0xc));
        this = local_64;
      }
    }
    if (((local_3c != (uint *)0x0) && (local_14 == '\0')) && (local_12 != false)) {
      puVar13 = (uint *)((int)this + 0xac4);
      if (local_34 != (uint *)0x0) {
        puVar13 = local_34;
      }
      local_1c = (uint *)0x0;
      if (local_34 != (uint *)0x0) {
        local_1c = local_38;
      }
      if (param_6 != 0) {
        local_28 = (uint *)param_6;
        puVar14 = local_3c;
        do {
          uVar11 = *puVar13;
          puVar13 = (uint *)((int)puVar13 + (int)local_1c);
          *puVar14 = uVar11;
          puVar14 = (uint *)((int)puVar14 + *(int *)(param_3 + 0xc));
          local_28 = (uint *)((int)local_28 - 1);
        } while (local_28 != (uint *)0x0);
        local_28 = (uint *)0x0;
        this = local_64;
      }
    }
  }
LAB_100173d3:
  iVar22 = *(int *)(param_3 + 0xc) * param_5 + param_2;
  uVar11 = 0;
  while ((local_5c = uVar11 * 0x74, (*(uint *)((int)this + local_5c + 0x570) & 0x30000) == 0 &&
         (*(char *)((int)this + local_5c + 0x5a4) == '\0'))) {
    uVar11 = uVar11 + 1;
    if (7 < uVar11) {
      if (param_8 == '\0') {
        FUN_1001922c((int)param_1,param_3,iVar22,*(int *)(param_3 + 0xc),param_6,param_7);
      }
      return;
    }
  }
  FUN_1001928d(this,(int)param_1,param_3,*(int *)((int)this + 0xa94),iVar22,*(int *)(param_3 + 0xc),
               param_6,param_7,param_8);
  return;
}


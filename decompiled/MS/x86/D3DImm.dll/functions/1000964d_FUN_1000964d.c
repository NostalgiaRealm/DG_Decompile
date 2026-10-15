/*
 * FUN_1000964d at 1000964d
 * undefined __thiscall FUN_1000964d(void * this, int * param_1, int param_2, int param_3, uint param_4, int param_5, uint param_6, int param_7, char param_8, byte param_9)
 * Address ranges: 1000964d-10009dc2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1000964d(void *this,int *param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6,
            int param_7,char param_8,byte param_9)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint *puVar12;
  char cVar13;
  uint uVar14;
  float *pfVar15;
  undefined4 uVar16;
  int iVar17;
  void *this_00;
  uint *puVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  uint *local_198;
  uint *local_194;
  uint *local_190;
  int local_188;
  int local_184;
  uint *local_180;
  uint *local_17c;
  int local_174;
  uint *local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  uint *local_15c;
  uint *local_158;
  uint *local_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  int local_120;
  float *local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  uint local_108;
  undefined1 local_104;
  undefined1 local_103;
  undefined1 local_102;
  undefined1 local_101;
  undefined1 local_100;
  byte local_ff;
  int local_f4;
  undefined4 local_f0;
  int local_ec;
  int local_e4;
  
  cVar13 = *(char *)(param_3 + 0x3c);
  cVar1 = *(char *)(param_3 + 0x44);
  if (((cVar13 == -1) && (cVar1 == -1)) || (bVar9 = true, (param_4 & 4) == 0)) {
    bVar9 = false;
  }
  iVar25 = *(int *)((int)this + 0x4c0);
  if ((((iVar25 == 1) || (iVar25 == 2)) || (iVar25 == 3)) && (*(int *)((int)this + 0x300) != 0)) {
    bVar19 = true;
    bVar11 = true;
  }
  else {
    bVar19 = false;
    bVar11 = false;
  }
  if ((cVar1 == -1) || (bVar10 = true, !bVar19)) {
    bVar10 = false;
  }
  bVar19 = false;
  uVar14 = 0;
  do {
    if ((*(int *)((int)this + uVar14 * 100 + 0x4f8) != 1) &&
       ((*(uint *)((int)this + uVar14 * 100 + 0x520) & 0x30000) != 0)) {
      bVar19 = true;
      break;
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 < 8);
  if (bVar10 || bVar19) {
LAB_1000972c:
    bVar9 = true;
    FUN_10008def(this,param_6);
  }
  else {
    if (bVar9) {
      uVar14 = 0;
      if (*(uint *)((int)this + 0x17c) != 0) {
        do {
          if (*(int *)(*(int *)((int)this + 0x178) + uVar14 * 4) != -1) goto LAB_1000972c;
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(uint *)((int)this + 0x17c));
      }
    }
    bVar9 = false;
  }
  iVar25 = *(int *)(param_3 + 0xc);
  FUN_1005c9cc(&local_120,0,0x40);
  iVar17 = param_5 * iVar25;
  if (*(char *)(param_3 + 0x14) != -1) {
    local_ec = iVar17 + (uint)*(byte *)(param_3 + 0x17) * 4 + param_2;
  }
  local_11c = (float *)&DAT_1005e608;
  local_103 = 2;
  local_114 = param_1[1];
  local_120 = local_114 * param_7 + *param_1;
  local_104 = (undefined1)param_1[2];
  if (param_1[9] != 0) {
    local_110 = param_1[10];
    local_11c = (float *)(local_110 * param_7 + param_1[9]);
    local_103 = (undefined1)param_1[0xb];
  }
  if (param_1[3] != 0) {
    local_10c = param_1[4];
    local_118 = local_10c * param_7 + param_1[3];
    local_108 = (uint)*(byte *)((int)param_1 + 0x15);
    local_102 = (undefined1)param_1[5];
  }
  if (bVar9) {
    local_f0 = *(undefined4 *)((int)this + 0x9a4);
  }
  else {
    local_f0 = 0;
  }
  local_f4 = (int)this + 0x1f0;
  local_ff = (byte)(param_4 >> 3) & 1;
  local_101 = 1;
  local_100 = 1;
  local_e4 = iVar25;
  FUN_10011755(this,&local_120,0,param_6);
  local_180 = (uint *)0x0;
  if (cVar1 != -1) {
    local_180 = (uint *)(iVar17 + (uint)*(byte *)(param_3 + 0x47) * 4 + param_2);
  }
  if ((DAT_1006bbf4 & 1) == 0) {
    DAT_1006bbf4 = DAT_1006bbf4 | 1;
    _DAT_1006bbf8 = *(uint *)((int)this + 0x9d4) | 0xff000000;
  }
  local_15c = (uint *)&DAT_1006bbf8;
  local_174 = 0;
  if (param_1[0x12] != 0) {
    local_174 = param_1[0x13];
    local_15c = (uint *)(local_174 * param_7 + param_1[0x12]);
  }
  if (bVar10) {
    FUN_10009e88(this,*(int *)((int)this + 0x9a4),local_15c,local_174,param_6,local_180,
                 *(int *)(param_3 + 0xc));
  }
  bVar9 = true;
  if ((cVar13 == -1) && (cVar1 == -1)) goto LAB_10009d5a;
  local_190 = (uint *)0x0;
  local_198 = (uint *)0x0;
  local_188 = 0;
  local_184 = 0;
  if (param_1[0xf] != 0) {
    local_188 = param_1[0x10];
    local_190 = (uint *)(local_188 * param_7 + param_1[0xf]);
  }
  if (param_1[0x12] != 0) {
    local_184 = param_1[0x13];
    local_198 = (uint *)(local_184 * param_7 + param_1[0x12]);
  }
  local_170 = (uint *)0x0;
  iVar25 = (int)(*(float *)((int)this + 0x11c) * 255.0);
  iVar26 = (int)(*(float *)((int)this + 0x118) * 255.0);
  iVar27 = (int)(*(float *)((int)this + 0x114) * 255.0);
  iVar28 = (int)(*(float *)((int)this + 0x120) * 255.0);
  auVar20._4_4_ = iVar26;
  auVar20._0_4_ = iVar25;
  auVar20._8_4_ = iVar27;
  auVar20._12_4_ = iVar28;
  auVar21._4_4_ = iVar26;
  auVar21._0_4_ = iVar25;
  auVar21._8_4_ = iVar27;
  auVar21._12_4_ = iVar28;
  auVar21 = packssdw(auVar20,auVar21);
  sVar2 = auVar21._0_2_;
  sVar3 = auVar21._2_2_;
  sVar4 = auVar21._4_2_;
  sVar5 = auVar21._6_2_;
  local_148 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * auVar21[6] - (0xff < sVar5),
                       CONCAT12((0 < sVar4) * (sVar4 < 0x100) * auVar21[4] - (0xff < sVar4),
                                CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar21[2] - (0xff < sVar3)
                                         ,(0 < sVar2) * (sVar2 < 0x100) * auVar21[0] -
                                          (0xff < sVar2))));
  fStack_12c = *(float *)((int)this + 0x108);
  iVar25 = (int)(*(float *)((int)this + 0x13c) * 255.0);
  iVar26 = (int)(*(float *)((int)this + 0x138) * 255.0);
  iVar27 = (int)(*(float *)((int)this + 0x134) * 255.0);
  iVar28 = (int)(*(float *)((int)this + 0x140) * 255.0);
  local_130 = *(float *)((int)this + 0x10c);
  auVar22._4_4_ = iVar26;
  auVar22._0_4_ = iVar25;
  auVar22._8_4_ = iVar27;
  auVar22._12_4_ = iVar28;
  auVar6._4_4_ = iVar26;
  auVar6._0_4_ = iVar25;
  auVar6._8_4_ = iVar27;
  auVar6._12_4_ = iVar28;
  auVar21 = packssdw(auVar22,auVar6);
  sVar2 = auVar21._0_2_;
  sVar3 = auVar21._2_2_;
  sVar4 = auVar21._4_2_;
  sVar5 = auVar21._6_2_;
  local_144 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * auVar21[6] - (0xff < sVar5),
                       CONCAT12((0 < sVar4) * (sVar4 < 0x100) * auVar21[4] - (0xff < sVar4),
                                CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar21[2] - (0xff < sVar3)
                                         ,(0 < sVar2) * (sVar2 < 0x100) * auVar21[0] -
                                          (0xff < sVar2))));
  fStack_124 = *(float *)((int)this + 0x110);
  fStack_128 = *(float *)((int)this + 0x104);
  fStack_13c = *(float *)((int)this + 0x128);
  local_140 = *(float *)((int)this + 300);
  auVar23._4_4_ = (int)(fStack_12c * 255.0);
  auVar23._0_4_ = (int)(local_130 * 255.0);
  auVar23._8_4_ = (int)(fStack_128 * 255.0);
  auVar23._12_4_ = (int)(fStack_124 * 255.0);
  auVar7._4_4_ = (int)(fStack_12c * 255.0);
  auVar7._0_4_ = (int)(local_130 * 255.0);
  auVar7._8_4_ = (int)(fStack_128 * 255.0);
  auVar7._12_4_ = (int)(fStack_124 * 255.0);
  auVar21 = packssdw(auVar23,auVar7);
  sVar2 = auVar21._0_2_;
  sVar3 = auVar21._2_2_;
  sVar4 = auVar21._4_2_;
  sVar5 = auVar21._6_2_;
  local_150 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * auVar21[6] - (0xff < sVar5),
                       CONCAT12((0 < sVar4) * (sVar4 < 0x100) * auVar21[4] - (0xff < sVar4),
                                CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar21[2] - (0xff < sVar3)
                                         ,(0 < sVar2) * (sVar2 < 0x100) * auVar21[0] -
                                          (0xff < sVar2))));
  fStack_134 = *(float *)((int)this + 0x130);
  fStack_138 = *(float *)((int)this + 0x124);
  auVar24._4_4_ = (int)(fStack_13c * 255.0);
  auVar24._0_4_ = (int)(local_140 * 255.0);
  auVar24._8_4_ = (int)(fStack_138 * 255.0);
  auVar24._12_4_ = (int)(fStack_134 * 255.0);
  auVar8._4_4_ = (int)(fStack_13c * 255.0);
  auVar8._0_4_ = (int)(local_140 * 255.0);
  auVar8._8_4_ = (int)(fStack_138 * 255.0);
  auVar8._12_4_ = (int)(fStack_134 * 255.0);
  auVar21 = packssdw(auVar24,auVar8);
  sVar2 = auVar21._0_2_;
  sVar3 = auVar21._2_2_;
  sVar4 = auVar21._4_2_;
  sVar5 = auVar21._6_2_;
  local_14c = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * auVar21[6] - (0xff < sVar5),
                       CONCAT12((0 < sVar4) * (sVar4 < 0x100) * auVar21[4] - (0xff < sVar4),
                                CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar21[2] - (0xff < sVar3)
                                         ,(0 < sVar2) * (sVar2 < 0x100) * auVar21[0] -
                                          (0xff < sVar2))));
  if (*(char *)(param_3 + 0x3c) != -1) {
    local_170 = (uint *)(iVar17 + (uint)*(byte *)(param_3 + 0x3f) * 4 + param_2);
  }
  bVar19 = true;
  if ((param_4 & 4) != 0) {
    local_168 = 0;
    local_16c = 0;
    local_160 = 0;
    local_164 = 0;
    local_194 = &local_148;
    puVar18 = &local_144;
    local_158 = &local_14c;
    local_154 = &local_150;
    if (*(int *)((int)this + 0x4c4) != 0) {
      puVar12 = &local_150;
      if (*(int *)((int)this + 0x4d4) == 1) {
        if (local_190 != (uint *)0x0) {
          local_154 = local_190;
          iVar25 = local_188;
LAB_10009b40:
          local_168 = iVar25;
          puVar12 = local_154;
        }
      }
      else if ((*(int *)((int)this + 0x4d4) == 2) &&
              (iVar25 = local_184, local_154 = local_198, local_198 != (uint *)0x0))
      goto LAB_10009b40;
      local_154 = puVar12;
      puVar12 = &local_14c;
      if (*(int *)((int)this + 0x4d8) == 1) {
        if (local_190 != (uint *)0x0) {
          local_158 = local_190;
          iVar25 = local_188;
LAB_10009b72:
          local_16c = iVar25;
          puVar12 = local_158;
        }
      }
      else if ((*(int *)((int)this + 0x4d8) == 2) &&
              (iVar25 = local_184, local_158 = local_198, local_198 != (uint *)0x0))
      goto LAB_10009b72;
      local_158 = puVar12;
      puVar12 = &local_148;
      if (*(int *)((int)this + 0x4dc) == 1) {
        if (local_190 != (uint *)0x0) {
          local_194 = local_190;
          iVar25 = local_188;
LAB_10009ba4:
          puVar12 = local_194;
          local_160 = iVar25;
        }
      }
      else if ((*(int *)((int)this + 0x4dc) == 2) &&
              (iVar25 = local_184, local_194 = local_198, local_198 != (uint *)0x0))
      goto LAB_10009ba4;
      local_194 = puVar12;
      if (*(int *)((int)this + 0x4e0) == 1) {
        if (local_190 != (uint *)0x0) {
          local_17c = local_190;
          iVar25 = local_188;
LAB_10009bd6:
          puVar18 = local_17c;
          local_164 = iVar25;
        }
      }
      else if ((*(int *)((int)this + 0x4e0) == 2) &&
              (iVar25 = local_184, local_17c = local_198, local_198 != (uint *)0x0))
      goto LAB_10009bd6;
    }
    local_17c = puVar18;
    if (bVar11) {
      local_15c = local_180;
      local_174 = *(int *)(param_3 + 0xc);
    }
    if (((param_1[3] == 0) && (*(int *)((int)this + 0x4cc) == 0)) &&
       (cVar13 = FUN_10008d64(this,param_9 ^ 1), cVar13 != '\0')) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    pfVar15 = (float *)0x0;
    if (bVar9) {
      pfVar15 = local_11c;
    }
    FUN_1000b1f9(this,*(int *)((int)this + 0x9a4),pfVar15,local_110,local_194,local_17c,local_154,
                 local_158,local_15c,local_160,local_164,local_168,local_16c,local_174,local_170,
                 local_180,*(int *)(param_3 + 0xc),*(int *)(param_3 + 0xc),param_6);
    bVar9 = false;
    bVar19 = *(int *)((int)this + 0x304) == 0;
  }
  if (param_8 == '\0') {
    if ((local_170 != (uint *)0x0) && (bVar9)) {
      puVar18 = (uint *)((int)this + 0x9d0);
      if (local_190 != (uint *)0x0) {
        puVar18 = local_190;
      }
      iVar25 = 0;
      if (local_190 != (uint *)0x0) {
        iVar25 = local_188;
      }
      if (param_6 != 0) {
        local_190 = (uint *)param_6;
        do {
          uVar14 = *puVar18;
          puVar18 = (uint *)((int)puVar18 + iVar25);
          *local_170 = uVar14;
          local_170 = (uint *)((int)local_170 + *(int *)(param_3 + 0xc));
          local_190 = (uint *)((int)local_190 - 1);
        } while (local_190 != (uint *)0x0);
      }
    }
    if (((local_180 != (uint *)0x0) && (!bVar11)) && (bVar19)) {
      puVar18 = (uint *)((int)this + 0x9d4);
      if (local_198 != (uint *)0x0) {
        puVar18 = local_198;
      }
      iVar25 = 0;
      if (local_198 != (uint *)0x0) {
        iVar25 = local_184;
      }
      if (param_6 != 0) {
        local_198 = (uint *)param_6;
        do {
          uVar14 = *puVar18;
          puVar18 = (uint *)((int)puVar18 + iVar25);
          *local_180 = uVar14;
          local_180 = (uint *)((int)local_180 + *(int *)(param_3 + 0xc));
          local_198 = (uint *)((int)local_198 - 1);
        } while (local_198 != (uint *)0x0);
      }
    }
  }
LAB_10009d5a:
  iVar25 = *(int *)(param_3 + 0xc);
  iVar17 = iVar25 * param_5 + param_2;
  uVar16 = FUN_10008dc3((int)this);
  if ((char)uVar16 == '\0') {
    if (param_8 == '\0') {
      FUN_1000bfb3((int)param_1,param_3,iVar17,iVar25,param_6,param_7);
    }
  }
  else {
    FUN_1000c00f(this_00,(int)param_1,param_3,*(int *)((int)this + 0x9a4),iVar17,iVar25,param_6,
                 param_7,param_8);
  }
  return;
}


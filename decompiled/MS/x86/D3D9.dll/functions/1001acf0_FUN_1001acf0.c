/*
 * FUN_1001acf0 at 1001acf0
 * undefined __thiscall FUN_1001acf0(void * this, int * param_1, int param_2, int param_3, uint param_4, int param_5, uint param_6, int param_7, char param_8)
 * Address ranges: 1001acf0-1001b622
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1001acf0(void *this,int *param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6,
            int param_7,char param_8)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  short sVar4;
  short sVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  SIZE_T SVar15;
  uint uVar16;
  undefined1 (*pauVar17) [16];
  int iVar18;
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
  byte local_1a9;
  byte local_1a8;
  undefined1 (*pauStack_1a4) [16];
  undefined1 (*pauStack_1a0) [16];
  undefined1 (*pauStack_19c) [16];
  uint *puStack_194;
  uint *puStack_18c;
  undefined1 (*pauStack_188) [16];
  int iStack_184;
  int iStack_180;
  uint *puStack_17c;
  undefined1 (*pauStack_178) [16];
  undefined1 auStack_174 [4];
  int iStack_170;
  byte bStack_16c;
  undefined3 uStack_16b;
  byte bStack_168;
  undefined3 uStack_167;
  byte bStack_164;
  undefined3 uStack_163;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  void *local_14c;
  undefined1 auStack_148 [4];
  undefined1 auStack_144 [4];
  int local_140;
  undefined *local_13c;
  int local_138;
  undefined *local_134;
  undefined *local_130;
  undefined *local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  uint local_110;
  undefined1 local_10c;
  undefined1 local_10b;
  undefined1 local_10a;
  undefined1 local_109;
  undefined1 local_108;
  undefined1 local_107;
  undefined1 local_106;
  undefined1 local_105;
  byte local_104;
  undefined1 local_102;
  int local_f8;
  undefined4 local_f4;
  int local_f0;
  int local_ec;
  
  cVar1 = *(char *)(param_3 + 0x3c);
  cVar2 = *(char *)(param_3 + 0x44);
  if (((cVar1 == -1) && (cVar2 == -1)) || (bVar9 = true, (param_4 & 4) == 0)) {
    bVar9 = false;
  }
  iVar18 = *(int *)((int)this + 0x660);
  if ((((iVar18 == 1) || (iVar18 == 2)) || (iVar18 == 3)) && (*(int *)((int)this + 0x4a0) != 0)) {
    bVar19 = true;
    bVar10 = true;
  }
  else {
    bVar19 = false;
    bVar10 = false;
  }
  if ((cVar2 == -1) || (bVar11 = true, !bVar19)) {
    bVar11 = false;
  }
  bVar19 = false;
  uVar14 = 0;
  do {
    if ((*(int *)((int)this + uVar14 * 0x84 + 0x77c) != 1) &&
       ((*(uint *)((int)this + uVar14 * 0x84 + 0x7a4) & 0x30000) != 0)) {
      bVar19 = true;
      break;
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 < 8);
  local_14c = this;
  if (bVar11 || bVar19) {
LAB_1001add8:
    bVar9 = true;
    if (*(uint *)((int)this + 0xd64) < param_6) {
      FUN_1001a86c((int)this);
      lVar3 = (ulonglong)(param_6 * 2 | 1) * 0x10;
      SVar15 = (SIZE_T)lVar3;
      if ((int)((ulonglong)lVar3 >> 0x20) != 0) {
        SVar15 = 0xffffffff;
      }
      iVar18 = FUN_100cfd89(SVar15);
      *(int *)((int)this + 0xd5c) = iVar18;
      if (iVar18 != 0) {
        *(uint *)((int)this + 0xd58) = iVar18 + 0xfU & 0xfffffff0;
        *(uint *)((int)this + 0xd64) = param_6;
      }
    }
  }
  else {
    if (bVar9) {
      uVar14 = 0;
      if (*(uint *)((int)this + 0x31c) != 0) {
        do {
          if (*(int *)(*(int *)((int)this + 0x318) + uVar14 * 4) != -1) goto LAB_1001add8;
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(uint *)((int)this + 0x31c));
      }
    }
    bVar9 = false;
  }
  iVar18 = *(int *)(param_3 + 0xc);
  FUN_100cfed0(&local_140,0,0x58);
  if (*(char *)(param_3 + 0x14) != -1) {
    local_f0 = iVar18 * param_5 + param_2 + (uint)*(byte *)(param_3 + 0x17) * 4;
  }
  local_128 = param_1[1];
  local_13c = &DAT_100d4e74;
  local_10b = 2;
  local_140 = local_128 * param_7 + *param_1;
  local_10c = (undefined1)param_1[2];
  if (param_1[9] != 0) {
    local_124 = param_1[10];
    local_13c = (undefined *)(local_124 * param_7 + param_1[9]);
    local_10b = (undefined1)param_1[0xb];
  }
  local_134 = &DAT_100d4e74;
  local_109 = 2;
  if (param_1[0x2d] != 0) {
    local_120 = param_1[0x2e];
    local_134 = (undefined *)(local_120 * param_7 + param_1[0x2d]);
    local_109 = (undefined1)param_1[0x2f];
  }
  local_130 = &DAT_100d4e74;
  local_108 = 2;
  if (param_1[0x30] != 0) {
    local_11c = param_1[0x31];
    local_130 = (undefined *)(local_11c * param_7 + param_1[0x30]);
    local_108 = (undefined1)param_1[0x32];
  }
  local_12c = &DAT_100d4e70;
  local_118 = 0;
  local_107 = 5;
  if (param_1[3] != 0) {
    local_114 = param_1[4];
    local_138 = local_114 * param_7 + param_1[3];
    local_110 = (uint)*(byte *)((int)param_1 + 0x15);
    local_10a = (undefined1)param_1[5];
    if ((param_1[6] != 0) && (*(int *)((int)this + 0x6cc) != 0)) {
      local_118 = param_1[7];
      local_12c = (undefined *)(local_118 * param_7 + param_1[6]);
      local_107 = (undefined1)param_1[8];
    }
  }
  if (bVar9) {
    local_f4 = *(undefined4 *)((int)this + 0xd58);
  }
  else {
    local_f4 = 0;
  }
  local_f8 = (int)this + 0x390;
  local_104 = (byte)(param_4 >> 3) & 1;
  local_106 = 1;
  local_102 = *(int *)(param_3 + 4) == 3;
  local_105 = 1;
  local_ec = iVar18;
  FUN_1002433a(this,&local_140,0,param_6);
  puStack_194 = (uint *)0x0;
  if (cVar2 != -1) {
    puStack_194 = (uint *)(iVar18 * param_5 + param_2 + (uint)*(byte *)(param_3 + 0x47) * 4);
  }
  if ((DAT_100e3bc4 & 1) == 0) {
    DAT_100e3bc4 = DAT_100e3bc4 | 1;
    _DAT_100e3bc8 = *(uint *)((int)this + 0xd88) | 0xff000000;
  }
  puStack_18c = (uint *)&DAT_100e3bc8;
  iStack_170 = 0;
  if (param_1[0x12] != 0) {
    iStack_170 = param_1[0x13];
    puStack_18c = (uint *)(iStack_170 * param_7 + param_1[0x12]);
  }
  if (bVar11) {
    FUN_1001b756(this,*(int *)((int)this + 0xd58),puStack_18c,iStack_170,param_6,puStack_194,
                 *(int *)(param_3 + 0xc));
  }
  bVar9 = true;
  if ((cVar1 == -1) && (cVar2 == -1)) goto LAB_1001b5a2;
  pauStack_178 = (undefined1 (*) [16])0x0;
  pauStack_1a0 = (undefined1 (*) [16])0x0;
  iStack_184 = 0;
  iStack_180 = 0;
  local_1a9 = 4;
  local_1a8 = local_1a9;
  if (param_1[0xf] != 0) {
    iStack_184 = param_1[0x10];
    pauStack_1a0 = (undefined1 (*) [16])(iStack_184 * param_7 + param_1[0xf]);
    local_1a8 = *(byte *)(param_1 + 0x11);
  }
  if (param_1[0x12] != 0) {
    iStack_180 = param_1[0x13];
    local_1a9 = *(byte *)(param_1 + 0x14);
    pauStack_178 = (undefined1 (*) [16])(iStack_180 * param_7 + param_1[0x12]);
  }
  puStack_17c = (uint *)0x0;
  iVar25 = (int)(*(float *)((int)this + 0x2c0) * 255.0);
  iVar26 = (int)(*(float *)((int)this + 700) * 255.0);
  iVar27 = (int)(*(float *)((int)this + 0x2b8) * 255.0);
  iVar28 = (int)(*(float *)((int)this + 0x2c4) * 255.0);
  auVar20._4_4_ = iVar26;
  auVar20._0_4_ = iVar25;
  auVar20._8_4_ = iVar27;
  auVar20._12_4_ = iVar28;
  auVar21._4_4_ = iVar26;
  auVar21._0_4_ = iVar25;
  auVar21._8_4_ = iVar27;
  auVar21._12_4_ = iVar28;
  auVar21 = packssdw(auVar20,auVar21);
  sVar4 = auVar21._0_2_;
  sVar5 = auVar21._2_2_;
  iStack_150._1_1_ = (0 < sVar5) * (sVar5 < 0x100) * auVar21[2] - (0xff < sVar5);
  iStack_150._0_1_ = (0 < sVar4) * (sVar4 < 0x100) * auVar21[0] - (0xff < sVar4);
  sVar4 = auVar21._4_2_;
  iStack_150._2_1_ = (0 < sVar4) * (sVar4 < 0x100) * auVar21[4] - (0xff < sVar4);
  sVar4 = auVar21._6_2_;
  iStack_150._3_1_ = (0 < sVar4) * (sVar4 < 0x100) * auVar21[6] - (0xff < sVar4);
  iVar25 = (int)(*(float *)((int)this + 0x2e0) * 255.0);
  iVar26 = (int)(*(float *)((int)this + 0x2dc) * 255.0);
  iVar27 = (int)(*(float *)((int)this + 0x2d8) * 255.0);
  iVar28 = (int)(*(float *)((int)this + 0x2e4) * 255.0);
  auVar22._4_4_ = iVar26;
  auVar22._0_4_ = iVar25;
  auVar22._8_4_ = iVar27;
  auVar22._12_4_ = iVar28;
  auVar6._4_4_ = iVar26;
  auVar6._0_4_ = iVar25;
  auVar6._8_4_ = iVar27;
  auVar6._12_4_ = iVar28;
  auVar21 = packssdw(auVar22,auVar6);
  sVar4 = auVar21._0_2_;
  sVar5 = auVar21._2_2_;
  auStack_174[1] = (0 < sVar5) * (sVar5 < 0x100) * auVar21[2] - (0xff < sVar5);
  auStack_174[0] = (0 < sVar4) * (sVar4 < 0x100) * auVar21[0] - (0xff < sVar4);
  sVar4 = auVar21._4_2_;
  auStack_174[2] = (0 < sVar4) * (sVar4 < 0x100) * auVar21[4] - (0xff < sVar4);
  sVar4 = auVar21._6_2_;
  auStack_174[3] = (0 < sVar4) * (sVar4 < 0x100) * auVar21[6] - (0xff < sVar4);
  iVar25 = (int)(*(float *)((int)this + 0x2b0) * 255.0);
  iVar26 = (int)(*(float *)((int)this + 0x2ac) * 255.0);
  iVar27 = (int)(*(float *)((int)this + 0x2a8) * 255.0);
  iVar28 = (int)(*(float *)((int)this + 0x2b4) * 255.0);
  auVar23._4_4_ = iVar26;
  auVar23._0_4_ = iVar25;
  auVar23._8_4_ = iVar27;
  auVar23._12_4_ = iVar28;
  auVar7._4_4_ = iVar26;
  auVar7._0_4_ = iVar25;
  auVar7._8_4_ = iVar27;
  auVar7._12_4_ = iVar28;
  auVar21 = packssdw(auVar23,auVar7);
  sVar4 = auVar21._0_2_;
  sVar5 = auVar21._2_2_;
  auStack_148[1] = (0 < sVar5) * (sVar5 < 0x100) * auVar21[2] - (0xff < sVar5);
  auStack_148[0] = (0 < sVar4) * (sVar4 < 0x100) * auVar21[0] - (0xff < sVar4);
  sVar4 = auVar21._4_2_;
  auStack_148[2] = (0 < sVar4) * (sVar4 < 0x100) * auVar21[4] - (0xff < sVar4);
  sVar4 = auVar21._6_2_;
  auStack_148[3] = (0 < sVar4) * (sVar4 < 0x100) * auVar21[6] - (0xff < sVar4);
  iVar25 = (int)(*(float *)((int)this + 0x2d0) * 255.0);
  iVar26 = (int)(*(float *)((int)this + 0x2cc) * 255.0);
  iVar27 = (int)(*(float *)((int)this + 0x2c8) * 255.0);
  iVar28 = (int)(*(float *)((int)this + 0x2d4) * 255.0);
  auVar24._4_4_ = iVar26;
  auVar24._0_4_ = iVar25;
  auVar24._8_4_ = iVar27;
  auVar24._12_4_ = iVar28;
  auVar8._4_4_ = iVar26;
  auVar8._0_4_ = iVar25;
  auVar8._8_4_ = iVar27;
  auVar8._12_4_ = iVar28;
  auVar21 = packssdw(auVar24,auVar8);
  sVar4 = auVar21._0_2_;
  sVar5 = auVar21._2_2_;
  auStack_144[1] = (0 < sVar5) * (sVar5 < 0x100) * auVar21[2] - (0xff < sVar5);
  auStack_144[0] = (0 < sVar4) * (sVar4 < 0x100) * auVar21[0] - (0xff < sVar4);
  sVar4 = auVar21._4_2_;
  auStack_144[2] = (0 < sVar4) * (sVar4 < 0x100) * auVar21[4] - (0xff < sVar4);
  sVar4 = auVar21._6_2_;
  auStack_144[3] = (0 < sVar4) * (sVar4 < 0x100) * auVar21[6] - (0xff < sVar4);
  if (*(char *)(param_3 + 0x3c) != -1) {
    puStack_17c = (uint *)(iVar18 * param_5 + param_2 + (uint)*(byte *)(param_3 + 0x3f) * 4);
  }
  bVar19 = true;
  if ((param_4 & 4) != 0) {
    pauStack_19c = (undefined1 (*) [16])auStack_148;
    bStack_16c = 4;
    pauStack_188 = (undefined1 (*) [16])auStack_144;
    pauStack_1a4 = (undefined1 (*) [16])&iStack_150;
    iStack_15c = 0;
    iStack_160 = 0;
    iStack_154 = 0;
    iStack_158 = 0;
    bVar12 = 4;
    _bStack_164 = CONCAT31(uStack_163,4);
    if (*(int *)((int)this + 0x664) == 0) {
LAB_1001b3ff:
      pauVar17 = (undefined1 (*) [16])auStack_174;
      bStack_168 = 4;
    }
    else {
      if (*(int *)((int)this + 0x674) == 1) {
        if (pauStack_1a0 != (undefined1 (*) [16])0x0) {
          iStack_15c = iStack_184;
          bStack_16c = local_1a8;
          pauStack_19c = pauStack_1a0;
        }
      }
      else if ((*(int *)((int)this + 0x674) == 2) && (pauStack_178 != (undefined1 (*) [16])0x0)) {
        iStack_15c = iStack_180;
        bStack_16c = local_1a9;
        pauStack_19c = pauStack_178;
      }
      if (*(int *)((int)this + 0x678) == 1) {
        if (pauStack_1a0 != (undefined1 (*) [16])0x0) {
          pauStack_188 = pauStack_1a0;
          iStack_160 = iStack_184;
          bVar12 = local_1a8;
        }
      }
      else if ((*(int *)((int)this + 0x678) == 2) && (pauStack_178 != (undefined1 (*) [16])0x0)) {
        iStack_160 = iStack_180;
        pauStack_188 = pauStack_178;
        bVar12 = local_1a9;
      }
      if (*(int *)((int)this + 0x67c) == 1) {
        if (pauStack_1a0 != (undefined1 (*) [16])0x0) {
          pauStack_1a4 = pauStack_1a0;
          iStack_154 = iStack_184;
          bVar13 = local_1a8;
LAB_1001b3bc:
          _bStack_164 = CONCAT31(uStack_163,bVar13);
        }
      }
      else if ((*(int *)((int)this + 0x67c) == 2) && (pauStack_178 != (undefined1 (*) [16])0x0)) {
        iStack_154 = iStack_180;
        bVar13 = local_1a9;
        pauStack_1a4 = pauStack_178;
        goto LAB_1001b3bc;
      }
      if (*(int *)((int)this + 0x680) == 1) {
        if (pauStack_1a0 == (undefined1 (*) [16])0x0) goto LAB_1001b3ff;
        iStack_158 = iStack_184;
        pauVar17 = pauStack_1a0;
        bStack_168 = local_1a8;
      }
      else {
        if ((*(int *)((int)this + 0x680) != 2) || (pauStack_178 == (undefined1 (*) [16])0x0))
        goto LAB_1001b3ff;
        iStack_158 = iStack_180;
        pauVar17 = pauStack_178;
        bStack_168 = local_1a9;
      }
    }
    iVar18 = iStack_170;
    if (bVar10) {
      puStack_18c = puStack_194;
      iVar18 = *(int *)(param_3 + 0xc);
    }
    FUN_1001c8b2(this,*(int *)((int)this + 0xd58),0,local_124,(uint *)pauStack_1a4,(uint *)pauVar17,
                 pauStack_19c,(uint *)pauStack_188,puStack_18c,iStack_154,iStack_158,iStack_15c,
                 iStack_160,iVar18,(byte)_bStack_164,bStack_168,(byte)_bStack_16c,bVar12,puStack_17c
                 ,puStack_194,*(int *)(param_3 + 0xc),*(int *)(param_3 + 0xc),param_6);
    bVar9 = false;
    bVar19 = *(int *)((int)this + 0x4a4) == 0;
  }
  if (param_8 == '\0') {
    if ((puStack_17c != (uint *)0x0) && (bVar9)) {
      pauVar17 = (undefined1 (*) [16])((int)this + 0xd84);
      if (pauStack_1a0 != (undefined1 (*) [16])0x0) {
        pauVar17 = pauStack_1a0;
      }
      iVar18 = 0;
      if (pauStack_1a0 != (undefined1 (*) [16])0x0) {
        iVar18 = iStack_184;
      }
      uVar14 = 4;
      if (pauStack_1a0 != (undefined1 (*) [16])0x0) {
        uVar14 = (uint)local_1a8;
      }
      if (param_6 != 0) {
        pauStack_1a4 = (undefined1 (*) [16])param_6;
        do {
          uVar16 = FUN_10027e89(pauVar17,uVar14);
          pauVar17 = (undefined1 (*) [16])(*pauVar17 + iVar18);
          *puStack_17c = uVar16;
          puStack_17c = (uint *)((int)puStack_17c + *(int *)(param_3 + 0xc));
          pauStack_1a4 = (undefined1 (*) [16])((int)pauStack_1a4 - 1);
          this = local_14c;
        } while (pauStack_1a4 != (undefined1 (*) [16])0x0);
      }
    }
    if (((puStack_194 != (uint *)0x0) && (!bVar10)) && (bVar19)) {
      pauVar17 = (undefined1 (*) [16])((int)this + 0xd88);
      if (pauStack_178 != (undefined1 (*) [16])0x0) {
        pauVar17 = pauStack_178;
      }
      iVar18 = 0;
      if (pauStack_178 != (undefined1 (*) [16])0x0) {
        iVar18 = iStack_180;
      }
      uVar14 = 4;
      if (pauStack_178 != (undefined1 (*) [16])0x0) {
        uVar14 = (uint)local_1a9;
      }
      if (param_6 != 0) {
        pauStack_1a4 = (undefined1 (*) [16])param_6;
        do {
          uVar16 = FUN_10027e89(pauVar17,uVar14);
          pauVar17 = (undefined1 (*) [16])(*pauVar17 + iVar18);
          *puStack_194 = uVar16;
          puStack_194 = (uint *)((int)puStack_194 + *(int *)(param_3 + 0xc));
          pauStack_1a4 = (undefined1 (*) [16])((int)pauStack_1a4 - 1);
          this = local_14c;
        } while (pauStack_1a4 != (undefined1 (*) [16])0x0);
      }
    }
  }
LAB_1001b5a2:
  iVar18 = *(int *)(param_3 + 0xc) * param_5 + param_2;
  uVar14 = 0;
  while ((iStack_150 = uVar14 * 0x84, (*(uint *)((int)this + iStack_150 + 0x7a4) & 0x70000) == 0 &&
         (*(char *)((int)this + iStack_150 + 0x7d8) == '\0'))) {
    uVar14 = uVar14 + 1;
    if (7 < uVar14) {
      if (param_8 == '\0') {
        FUN_1001d4ca((int)param_1,param_3,iVar18,*(int *)(param_3 + 0xc),param_6,param_7);
      }
      return;
    }
  }
  FUN_1001d526(this,(int)param_1,param_3,*(int *)((int)this + 0xd58),iVar18,*(int *)(param_3 + 0xc),
               param_6,param_7,param_8);
  return;
}


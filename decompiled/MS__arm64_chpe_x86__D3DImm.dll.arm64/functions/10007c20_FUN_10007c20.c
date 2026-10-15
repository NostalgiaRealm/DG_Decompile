/*
 * FUN_10007c20 at 10007c20
 * undefined FUN_10007c20(void)
 * Address ranges: 10007c20-100084c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10007c20(int param_1,int *param_2,int param_3,int param_4,uint param_5,int param_6,
                 uint param_7,int param_8,char param_9,undefined4 param_10,byte param_11)

{
  uint *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  char cVar5;
  char cVar6;
  undefined *puVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  bool bVar22;
  bool bVar23;
  char *pcVar24;
  bool bVar25;
  ulonglong uVar26;
  undefined4 *puVar27;
  uint uVar28;
  undefined4 *puVar29;
  uint uVar30;
  undefined4 *puVar31;
  float fVar32;
  float fVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  undefined4 *local_1dc;
  int local_1d8;
  undefined4 *local_1d4;
  int local_1d0;
  undefined4 *local_1cc;
  undefined4 *local_1c8;
  undefined4 *local_1c0;
  undefined4 *local_1bc;
  int local_1b8;
  undefined4 *local_1b4;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  char *local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  int local_150;
  undefined *puStack_14c;
  int iStack_148;
  int iStack_144;
  undefined8 local_140;
  uint uStack_138;
  undefined1 local_134;
  undefined1 local_133;
  undefined1 local_132;
  undefined1 uStack_131;
  undefined1 local_130;
  byte bStack_12f;
  undefined6 uStack_12e;
  longlong lStack_128;
  undefined8 local_120;
  longlong lStack_118;
  
  cVar5 = *(char *)(param_4 + 0x3c);
  cVar6 = *(char *)(param_4 + 0x44);
  if ((cVar5 == -1 && cVar6 == -1) || ((param_5 >> 2 & 1) == 0)) {
    bVar22 = false;
  }
  else {
    bVar22 = true;
  }
  if ((*(int *)(param_1 + 0x4c0) - 1U < 3) && (*(int *)(param_1 + 0x300) != 0)) {
    bVar23 = true;
  }
  else {
    bVar23 = false;
  }
  uVar28 = 0;
  do {
    if ((*(int *)(param_1 + 0x4f8 + uVar28 * 100) != 1) &&
       ((*(uint *)(param_1 + uVar28 * 100 + 0x520) & 0x30000) != 0)) {
      bVar25 = true;
      goto LAB_10007d14;
    }
    uVar28 = uVar28 + 1;
  } while (uVar28 < 8);
  bVar25 = false;
LAB_10007d14:
  if (((cVar6 != -1 && bVar23) || (bVar25)) ||
     ((bVar22 && (uVar26 = FUN_10009890(param_1), (uVar26 & 1) != 0)))) {
    bVar22 = true;
    FUN_100075c0(param_1,param_7);
  }
  else {
    bVar22 = false;
  }
  uStack_12e = 0;
  uVar28 = 0;
  puVar1 = (uint *)(param_4 + 0xc);
  uStack_138 = 0;
  local_132 = 0;
  local_140 = 0;
  local_180 = (char *)(param_4 + 0x14);
  lStack_118 = (ulonglong)*puVar1 << 0x20;
  iVar8 = *puVar1 * param_6;
  if (*local_180 != -1) {
    uVar28 = iVar8 + (uint)*(byte *)(param_4 + 0x17) * 4 + param_3;
  }
  iStack_148 = 0;
  local_134 = (undefined1)param_2[2];
  puVar7 = &DAT_1009d220;
  local_133 = 2;
  if (param_2[9] != 0) {
    local_140 = (ulonglong)(uint)param_2[10];
    puVar7 = (undefined *)(param_2[9] + param_2[10] * param_8);
    local_133 = (undefined1)param_2[0xb];
  }
  _local_150 = CONCAT44(puVar7,*param_2 + param_2[1] * param_8);
  iVar34 = param_2[3];
  if (iVar34 != 0) {
    iStack_148 = iVar34 + param_2[4] * param_8;
    uStack_138 = (uint)*(byte *)((int)param_2 + 0x15);
    local_140 = CONCAT44(param_2[4],(undefined4)local_140);
    local_132 = (undefined1)param_2[5];
  }
  _iStack_148 = CONCAT44(param_2[1],iStack_148);
  puVar2 = (undefined4 *)(param_1 + 0x9a4);
  if (bVar22) {
    local_120 = CONCAT44(uVar28,*puVar2);
  }
  else {
    local_120 = (ulonglong)uVar28 << 0x20;
  }
  lStack_128 = (ulonglong)(param_1 + 0x1f0) << 0x20;
  uStack_131 = 1;
  local_130 = 1;
  bStack_12f = (byte)(param_5 >> 3) & 1;
  FUN_1000f710(param_1,&local_150,0,param_7);
  puVar29 = (undefined4 *)0x0;
  if (cVar6 != -1) {
    puVar29 = (undefined4 *)(iVar8 + (uint)*(byte *)(param_4 + 0x47) * 4 + param_3);
  }
  if ((DAT_100acbd8 & 1) == 0) {
    DAT_100acbd8 = DAT_100acbd8 | 1;
    DAT_100acbdc = *(uint *)(param_1 + 0x9d4) | 0xff000000;
  }
  local_1b8 = 0;
  local_1b4 = &DAT_100acbdc;
  iVar34 = param_2[0x12];
  if (iVar34 != 0) {
    local_1b8 = param_2[0x13];
    local_1b4 = (undefined4 *)(iVar34 + local_1b8 * param_8);
  }
  if (cVar6 != -1 && bVar23) {
    FUN_100085a0(param_1,*puVar2,local_1b4,local_1b8,param_7,puVar29,*puVar1);
  }
  if (cVar5 == -1 && cVar6 == -1) goto LAB_100083cc;
  local_1d4 = (undefined4 *)0x0;
  local_1d0 = 0;
  if (param_2[0xf] == 0) {
    local_1dc = (undefined4 *)0x0;
    local_1d8 = 0;
  }
  else {
    local_1d8 = param_2[0x10];
    local_1dc = (undefined4 *)(param_2[0xf] + local_1d8 * param_8);
  }
  iVar34 = param_2[0x12];
  if (iVar34 != 0) {
    local_1d0 = param_2[0x13];
    local_1d4 = (undefined4 *)(iVar34 + local_1d0 * param_8);
  }
  fVar32 = *(float *)(param_1 + 0x11c) * 255.0;
  fVar33 = *(float *)(param_1 + 0x118) * 255.0;
  iVar34 = (int)fVar32;
  iVar35 = (int)fVar33;
  iVar36 = (int)(*(float *)(param_1 + 0x114) * 255.0);
  iVar37 = (int)(*(float *)(param_1 + 0x120) * 255.0);
  auVar16._4_4_ = iVar35;
  auVar16._0_4_ = iVar34;
  auVar16._8_4_ = iVar36;
  auVar16._12_4_ = iVar37;
  uVar15 = NEON_sqxtn(CONCAT44(fVar33,fVar32),auVar16,4);
  auVar17._4_4_ = iVar35;
  auVar17._0_4_ = iVar34;
  auVar17._8_4_ = iVar36;
  auVar17._12_4_ = iVar37;
  NEON_uqxtn(CONCAT44(iVar35,iVar34),auVar17,2);
  auVar10._8_4_ = (int)uVar15;
  auVar10._0_8_ = uVar15;
  auVar10._12_4_ = (int)((ulonglong)uVar15 >> 0x20);
  uVar15 = NEON_uqxtn(uVar15,auVar10,2);
  local_188 = (undefined4)uVar15;
  fVar32 = *(float *)(param_1 + 0x13c) * 255.0;
  fVar33 = *(float *)(param_1 + 0x138) * 255.0;
  iVar34 = (int)fVar32;
  iVar35 = (int)fVar33;
  iVar36 = (int)(*(float *)(param_1 + 0x134) * 255.0);
  iVar37 = (int)(*(float *)(param_1 + 0x140) * 255.0);
  auVar18._4_4_ = iVar35;
  auVar18._0_4_ = iVar34;
  auVar18._8_4_ = iVar36;
  auVar18._12_4_ = iVar37;
  uVar15 = NEON_sqxtn(CONCAT44(fVar33,fVar32),auVar18,4);
  auVar19._4_4_ = iVar35;
  auVar19._0_4_ = iVar34;
  auVar19._8_4_ = iVar36;
  auVar19._12_4_ = iVar37;
  NEON_uqxtn(CONCAT44(iVar35,iVar34),auVar19,2);
  auVar11._8_4_ = (int)uVar15;
  auVar11._0_8_ = uVar15;
  auVar11._12_4_ = (int)((ulonglong)uVar15 >> 0x20);
  uVar15 = NEON_uqxtn(uVar15,auVar11,2);
  local_184 = (undefined4)uVar15;
  fVar32 = *(float *)(param_1 + 0x10c) * 255.0;
  fVar33 = *(float *)(param_1 + 0x108) * 255.0;
  iVar34 = (int)fVar32;
  iVar35 = (int)fVar33;
  iVar36 = (int)(*(float *)(param_1 + 0x104) * 255.0);
  iVar37 = (int)(*(float *)(param_1 + 0x110) * 255.0);
  auVar20._4_4_ = iVar35;
  auVar20._0_4_ = iVar34;
  auVar20._8_4_ = iVar36;
  auVar20._12_4_ = iVar37;
  uVar15 = NEON_sqxtn(CONCAT44(fVar33,fVar32),auVar20,4);
  auVar21._4_4_ = iVar35;
  auVar21._0_4_ = iVar34;
  auVar21._8_4_ = iVar36;
  auVar21._12_4_ = iVar37;
  NEON_uqxtn(CONCAT44(iVar35,iVar34),auVar21,2);
  auVar12._8_4_ = (int)uVar15;
  auVar12._0_8_ = uVar15;
  auVar12._12_4_ = (int)((ulonglong)uVar15 >> 0x20);
  uVar15 = NEON_uqxtn(uVar15,auVar12,2);
  local_190 = (undefined4)uVar15;
  fVar32 = *(float *)(param_1 + 300) * 255.0;
  fVar33 = *(float *)(param_1 + 0x128) * 255.0;
  iVar34 = (int)fVar32;
  iVar35 = (int)fVar33;
  iVar36 = (int)(*(float *)(param_1 + 0x124) * 255.0);
  iVar37 = (int)(*(float *)(param_1 + 0x130) * 255.0);
  auVar13._4_4_ = iVar35;
  auVar13._0_4_ = iVar34;
  auVar13._8_4_ = iVar36;
  auVar13._12_4_ = iVar37;
  uVar15 = NEON_sqxtn(CONCAT17((char)((uint)fVar33 >> 0x18),
                               CONCAT16((char)((uint)fVar33 >> 0x10),
                                        CONCAT15((char)((uint)fVar33 >> 8),
                                                 CONCAT14(SUB41(fVar33,0),fVar32)))),auVar13,4);
  auVar14._4_4_ = iVar35;
  auVar14._0_4_ = iVar34;
  auVar14._8_4_ = iVar36;
  auVar14._12_4_ = iVar37;
  NEON_uqxtn(CONCAT44(iVar35,iVar34),auVar14,2);
  auVar9[8] = (char)uVar15;
  auVar9._0_8_ = uVar15;
  auVar9[9] = (char)((ulonglong)uVar15 >> 8);
  auVar9[10] = (char)((ulonglong)uVar15 >> 0x10);
  auVar9[0xb] = (char)((ulonglong)uVar15 >> 0x18);
  auVar9[0xc] = (char)((ulonglong)uVar15 >> 0x20);
  auVar9[0xd] = (char)((ulonglong)uVar15 >> 0x28);
  auVar9[0xe] = (char)((ulonglong)uVar15 >> 0x30);
  auVar9[0xf] = (char)((ulonglong)uVar15 >> 0x38);
  uVar15 = NEON_uqxtn(uVar15,auVar9,2);
  local_18c = (undefined4)uVar15;
  puVar31 = (undefined4 *)0x0;
  if (*(char *)(param_4 + 0x3c) != -1) {
    puVar31 = (undefined4 *)(iVar8 + (uint)*(byte *)(param_4 + 0x3f) * 4 + param_3);
  }
  if ((param_5 >> 2 & 1) == 0) {
    bVar22 = true;
    bVar25 = true;
  }
  else {
    local_1bc = &local_190;
    local_1c0 = &local_18c;
    local_1c8 = &local_188;
    local_1cc = &local_184;
    if (*(int *)(param_1 + 0x4c4) != 0) {
      if (*(int *)(param_1 + 0x4d4) == 1) {
        puVar27 = local_1dc;
        if (local_1dc != (undefined4 *)0x0) {
LAB_10008170:
          local_1bc = puVar27;
        }
      }
      else {
        puVar27 = local_1d4;
        if (*(int *)(param_1 + 0x4d4) == 2 && local_1d4 != (undefined4 *)0x0) goto LAB_10008170;
      }
      if (*(int *)(param_1 + 0x4d8) == 1) {
        puVar27 = local_1dc;
        if (local_1dc != (undefined4 *)0x0) {
LAB_100081ac:
          local_1c0 = puVar27;
        }
      }
      else {
        puVar27 = local_1d4;
        if (*(int *)(param_1 + 0x4d8) == 2 && local_1d4 != (undefined4 *)0x0) goto LAB_100081ac;
      }
      if (*(int *)(param_1 + 0x4dc) == 1) {
        puVar27 = local_1dc;
        if (local_1dc != (undefined4 *)0x0) {
LAB_100081e8:
          local_1c8 = puVar27;
        }
      }
      else {
        puVar27 = local_1d4;
        if (*(int *)(param_1 + 0x4dc) == 2 && local_1d4 != (undefined4 *)0x0) goto LAB_100081e8;
      }
      if (*(int *)(param_1 + 0x4e0) == 1) {
        puVar27 = local_1dc;
        if (local_1dc != (undefined4 *)0x0) {
LAB_10008220:
          local_1cc = puVar27;
        }
      }
      else {
        puVar27 = local_1d4;
        if (*(int *)(param_1 + 0x4e0) == 2 && local_1d4 != (undefined4 *)0x0) goto LAB_10008220;
      }
    }
    if (bVar23) {
      local_1b4 = puVar29;
    }
    uStack_160 = CONCAT44(*(float *)(param_1 + 0x108),*(float *)(param_1 + 0x10c));
    local_170 = CONCAT44(*(float *)(param_1 + 0x128),*(float *)(param_1 + 300));
    uStack_158 = CONCAT44(*(float *)(param_1 + 0x110),*(float *)(param_1 + 0x104));
    uStack_168 = CONCAT44(*(float *)(param_1 + 0x130),*(float *)(param_1 + 0x124));
    if (((param_2[3] == 0) && (*(int *)(param_1 + 0x4cc) == 0)) &&
       (uVar26 = FUN_10007080(param_1,param_11 ^ 1), (uVar26 & 1) != 0)) {
      bVar22 = true;
    }
    else {
      bVar22 = false;
    }
    puVar7 = puStack_14c;
    if (!bVar22) {
      puVar7 = (undefined *)0x0;
    }
    FUN_100098d8(uStack_160,local_170,param_1,*puVar2,puVar7,local_140 & 0xffffffff,local_1c8,
                 local_1cc,local_1bc,local_1c0,local_1b4);
    bVar22 = false;
    bVar25 = *(int *)(param_1 + 0x304) == 0;
  }
  if (param_9 == '\0') {
    if ((puVar31 != (undefined4 *)0x0) && (bVar22)) {
      if (local_1dc == (undefined4 *)0x0) {
        local_1d8 = 0;
        local_1dc = (undefined4 *)(param_1 + 0x9d0);
      }
      uVar28 = 0;
      if (param_7 != 0) {
        do {
          uVar4 = *local_1dc;
          uVar28 = uVar28 + 1;
          local_1dc = (undefined4 *)(local_1d8 + (int)local_1dc);
          *puVar31 = uVar4;
          puVar31 = (undefined4 *)(*puVar1 + (int)puVar31);
        } while (uVar28 < param_7);
      }
    }
    if (((puVar29 != (undefined4 *)0x0) && (!bVar23)) && (bVar25)) {
      if (local_1d4 == (undefined4 *)0x0) {
        local_1d0 = 0;
        local_1d4 = (undefined4 *)(param_1 + 0x9d4);
      }
      uVar28 = 0;
      if (param_7 != 0) {
        do {
          uVar4 = *local_1d4;
          uVar28 = uVar28 + 1;
          local_1d4 = (undefined4 *)(local_1d0 + (int)local_1d4);
          *puVar29 = uVar4;
          puVar29 = (undefined4 *)((int)puVar29 + *puVar1);
        } while (uVar28 < param_7);
      }
    }
  }
LAB_100083cc:
  uVar28 = *puVar1;
  param_3 = param_3 + uVar28 * param_6;
  uVar26 = FUN_10007560(param_1);
  pcVar24 = local_180;
  if ((uVar26 & 1) == 0) {
    if (param_9 == '\0') {
      uVar30 = 7;
      do {
        if ((pcVar24[uVar30 * 8] != -1) && (piVar3 = param_2 + uVar30 * 3, *piVar3 != 0)) {
          if ((char)piVar3[2] == *(char *)(param_4 + uVar30 * 8 + 0x18)) {
            uVar26 = FUN_1000a610(param_1);
          }
          else {
            uVar26 = switchD_1000a658::caseD_12
                               (uVar26,piVar3,pcVar24 + uVar30 * 8,param_3,uVar28,param_7,param_8);
          }
        }
        uVar30 = uVar30 + 1;
      } while (uVar30 < 0xf);
    }
  }
  else {
    switchD_1000a88c::caseD_1000a990
              (param_1,param_2,param_4,*puVar2,param_3,uVar28,param_7,param_8,param_9);
  }
  return;
}


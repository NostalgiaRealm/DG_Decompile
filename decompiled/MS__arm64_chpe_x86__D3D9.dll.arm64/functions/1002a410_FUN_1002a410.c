/*
 * FUN_1002a410 at 1002a410
 * undefined FUN_1002a410(void)
 * Address ranges: 1002a410-1002aecb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002a410(int param_1,int *param_2,int param_3,int param_4,uint param_5,int param_6,
                 uint param_7,int param_8,char param_9)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char cVar5;
  char cVar6;
  undefined *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  bool bVar21;
  uint5 uVar22;
  bool bVar23;
  char *pcVar24;
  undefined8 uVar25;
  bool bVar26;
  uint uVar27;
  int *piVar28;
  int *piVar29;
  int *piVar30;
  int *piVar31;
  int iVar32;
  undefined1 uVar33;
  uint uVar34;
  uint *puVar35;
  uint uVar36;
  float fVar37;
  float fVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int local_1c8;
  uint *local_1c4;
  int *local_1bc;
  uint local_1b8;
  int *local_1b4;
  uint *local_1b0;
  int local_1a4;
  int local_190;
  uint local_18c;
  int local_188;
  int local_184;
  int local_180;
  char *local_17c;
  int local_170;
  undefined *puStack_16c;
  int iStack_168;
  undefined *puStack_164;
  undefined *local_160;
  undefined *local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [7];
  undefined1 local_139;
  undefined8 local_138;
  undefined8 local_130;
  int iStack_128;
  undefined4 uStack_124;
  int local_120;
  int iStack_11c;
  
  cVar5 = *(char *)(param_4 + 0x3c);
  cVar6 = *(char *)(param_4 + 0x44);
  if ((cVar5 == -1 && cVar6 == -1) || ((param_5 >> 2 & 1) == 0)) {
    bVar21 = false;
  }
  else {
    bVar21 = true;
  }
  if ((*(int *)(param_1 + 0x660) - 1U < 3) && (*(int *)(param_1 + 0x4a0) != 0)) {
    bVar23 = true;
  }
  else {
    bVar23 = false;
  }
  uVar27 = 0;
  do {
    if ((*(int *)(param_1 + 0x77c + uVar27 * 0x84) != 1) &&
       ((*(uint *)(param_1 + uVar27 * 0x84 + 0x7a4) & 0x30000) != 0)) {
      bVar26 = true;
      goto LAB_1002a500;
    }
    uVar27 = uVar27 + 1;
  } while (uVar27 < 8);
  bVar26 = false;
LAB_1002a500:
  local_18c = param_5;
  if ((cVar6 != -1 && bVar23) || (bVar26)) {
LAB_1002a550:
    puVar35 = (uint *)(param_1 + 0xd64);
    bVar21 = true;
    if (*puVar35 < param_7) {
      FUN_101322d0(*(int *)(param_1 + 0xd5c));
      puVar1 = (uint *)(param_1 + 0xd58);
      puVar1[0] = 0;
      puVar1[1] = 0;
      *puVar35 = 0;
      uVar27 = param_7 * 2 + 1;
      iVar32 = uVar27 * 0x10;
      if (uVar27 >> 0x1c != 0) {
        iVar32 = -1;
      }
      iVar32 = FUN_101322b0(iVar32);
      *(int *)(param_1 + 0xd5c) = iVar32;
      if (iVar32 != 0) {
        *puVar1 = iVar32 + 0xfU & 0xfffffff0;
        *puVar35 = param_7;
      }
    }
  }
  else {
    if ((bVar21) && (*(uint *)(param_1 + 0x31c) != 0)) {
      uVar27 = 0;
      do {
        if (*(int *)(*(int *)(param_1 + 0x318) + uVar27 * 4) != -1) goto LAB_1002a550;
        uVar27 = uVar27 + 1;
      } while (uVar27 < *(uint *)(param_1 + 0x31c));
    }
    bVar21 = false;
  }
  piVar2 = (int *)(param_4 + 0xc);
  iVar32 = *piVar2;
  local_17c = (char *)(param_4 + 0x14);
  local_150 = 0;
  local_130 = 0;
  local_120 = 0;
  if (*local_17c != -1) {
    local_120 = iVar32 * param_6 + (uint)*(byte *)(param_4 + 0x17) * 4 + param_3;
  }
  _local_120 = CONCAT44(iVar32,local_120);
  uVar27 = param_2[1];
  local_158 = (ulonglong)uVar27;
  uVar33 = 2;
  puVar7 = &DAT_10161008;
  if (param_2[9] != 0) {
    local_158 = CONCAT44(param_2[10],uVar27);
    puVar7 = (undefined *)(param_2[9] + param_2[10] * param_8);
    uVar33 = (undefined1)param_2[0xb];
  }
  _local_170 = CONCAT44(puVar7,*param_2 + uVar27 * param_8);
  puStack_164 = &DAT_10161008;
  auStack_140 = (undefined1  [7])((uint7)CONCAT11(uVar33,(char)param_2[2]) << 0x20);
  _auStack_140 = CONCAT17(2,auStack_140);
  if (param_2[0x2d] != 0) {
    local_150 = (ulonglong)(uint)param_2[0x2e];
    puStack_164 = (undefined *)(param_2[0x2d] + param_2[0x2e] * param_8);
    _auStack_140 = CONCAT17((char)param_2[0x2f],auStack_140);
  }
  uVar14 = _auStack_140;
  iStack_168 = 0;
  puVar7 = &DAT_10161008;
  uVar33 = 2;
  if (param_2[0x30] != 0) {
    local_150 = CONCAT44(param_2[0x31],(undefined4)local_150);
    puVar7 = (undefined *)(param_2[0x30] + param_2[0x31] * param_8);
    uVar33 = (undefined1)param_2[0x32];
  }
  uStack_148 = 0;
  _local_160 = CONCAT44(&DAT_10161004,puVar7);
  local_138._0_2_ = CONCAT11(5,uVar33);
  if (param_2[3] != 0) {
    uVar27 = param_2[4];
    iStack_168 = param_2[3] + uVar27 * param_8;
    uStack_148 = (ulonglong)uVar27 << 0x20;
    _auStack_140 = CONCAT44(stack0xfffffec4,(uint)*(byte *)((int)param_2 + 0x15));
    uVar25 = _auStack_140;
    local_139 = SUB81(uVar14,7);
    auStack_140 = (undefined1  [7])CONCAT16((char)param_2[5],(int6)uVar25);
    if ((param_2[6] != 0) && (*(int *)(param_1 + 0x6cc) != 0)) {
      uStack_148 = CONCAT44(uVar27,param_2[7]);
      _local_160 = CONCAT44(param_2[6] + param_2[7] * param_8,puVar7);
      local_138._0_2_ = CONCAT11((char)param_2[8],uVar33);
    }
  }
  puVar3 = (undefined4 *)(param_1 + 0xd58);
  if (bVar21) {
    uVar4 = *puVar3;
  }
  else {
    uVar4 = 0;
  }
  _iStack_128 = CONCAT44(uVar4,param_1 + 0x390);
  local_138._0_4_ = CONCAT22(0x101,(undefined2)local_138);
  uVar22 = CONCAT14((char)(local_18c >> 3),(undefined4)local_138);
  local_138 = (ulonglong)(CONCAT16(*(int *)(param_4 + 4) == 3,(uint6)uVar22) & 0xffff01ffffffff);
  uVar27 = FUN_100333a0(param_1,&local_170,0,param_7);
  local_1b0 = (uint *)0x0;
  if (cVar6 != -1) {
    local_1b0 = (uint *)(iVar32 * param_6 + (uint)*(byte *)(param_4 + 0x47) * 4 + param_3);
  }
  if ((DAT_10175c68 & 1) == 0) {
    DAT_10175c68 = DAT_10175c68 | 1;
    DAT_10175c6c = *(uint *)(param_1 + 0xd88) | 0xff000000;
  }
  local_1a4 = 0;
  local_1c4 = &DAT_10175c6c;
  iVar39 = param_2[0x12];
  if (iVar39 != 0) {
    local_1a4 = param_2[0x13];
    local_1c4 = (uint *)(iVar39 + local_1a4 * param_8);
  }
  if (cVar6 != -1 && bVar23) {
    uVar27 = FUN_1002b018(param_1,*puVar3,local_1c4,local_1a4,param_7,local_1b0,*piVar2);
  }
  if (cVar5 != -1 || cVar6 != -1) {
    local_1b4 = (int *)0x0;
    uVar36 = 4;
    local_1c8 = 0;
    if (param_2[0xf] == 0) {
      uVar33 = 4;
      local_1bc = (int *)0x0;
      local_1b8 = 0;
    }
    else {
      local_1b8 = param_2[0x10];
      uVar33 = (undefined1)param_2[0x11];
      local_1bc = (int *)(param_2[0xf] + local_1b8 * param_8);
    }
    iVar39 = param_2[0x12];
    if (iVar39 != 0) {
      local_1c8 = param_2[0x13];
      local_1b4 = (int *)(iVar39 + local_1c8 * param_8);
      uVar36 = (uint)*(byte *)(param_2 + 0x14);
    }
    fVar37 = *(float *)(param_1 + 0x2c0) * 255.0;
    fVar38 = *(float *)(param_1 + 700) * 255.0;
    iVar39 = (int)fVar37;
    iVar40 = (int)fVar38;
    iVar41 = (int)(*(float *)(param_1 + 0x2b8) * 255.0);
    iVar42 = (int)(*(float *)(param_1 + 0x2c4) * 255.0);
    auVar15._4_4_ = iVar40;
    auVar15._0_4_ = iVar39;
    auVar15._8_4_ = iVar41;
    auVar15._12_4_ = iVar42;
    uVar14 = NEON_sqxtn(CONCAT44(fVar38,fVar37),auVar15,4);
    auVar16._4_4_ = iVar40;
    auVar16._0_4_ = iVar39;
    auVar16._8_4_ = iVar41;
    auVar16._12_4_ = iVar42;
    NEON_uqxtn(CONCAT44(iVar40,iVar39),auVar16,2);
    auVar9._8_4_ = (int)uVar14;
    auVar9._0_8_ = uVar14;
    auVar9._12_4_ = (int)((ulonglong)uVar14 >> 0x20);
    uVar14 = NEON_uqxtn(uVar14,auVar9,2);
    local_180 = (int)uVar14;
    fVar37 = *(float *)(param_1 + 0x2e0) * 255.0;
    fVar38 = *(float *)(param_1 + 0x2dc) * 255.0;
    iVar39 = (int)fVar37;
    iVar40 = (int)fVar38;
    iVar41 = (int)(*(float *)(param_1 + 0x2d8) * 255.0);
    iVar42 = (int)(*(float *)(param_1 + 0x2e4) * 255.0);
    auVar17._4_4_ = iVar40;
    auVar17._0_4_ = iVar39;
    auVar17._8_4_ = iVar41;
    auVar17._12_4_ = iVar42;
    uVar14 = NEON_sqxtn(CONCAT44(fVar38,fVar37),auVar17,4);
    auVar18._4_4_ = iVar40;
    auVar18._0_4_ = iVar39;
    auVar18._8_4_ = iVar41;
    auVar18._12_4_ = iVar42;
    NEON_uqxtn(CONCAT44(iVar40,iVar39),auVar18,2);
    auVar10._8_4_ = (int)uVar14;
    auVar10._0_8_ = uVar14;
    auVar10._12_4_ = (int)((ulonglong)uVar14 >> 0x20);
    uVar14 = NEON_uqxtn(uVar14,auVar10,2);
    local_190 = (int)uVar14;
    fVar37 = *(float *)(param_1 + 0x2b0) * 255.0;
    fVar38 = *(float *)(param_1 + 0x2ac) * 255.0;
    iVar39 = (int)fVar37;
    iVar40 = (int)fVar38;
    iVar41 = (int)(*(float *)(param_1 + 0x2a8) * 255.0);
    iVar42 = (int)(*(float *)(param_1 + 0x2b4) * 255.0);
    auVar19._4_4_ = iVar40;
    auVar19._0_4_ = iVar39;
    auVar19._8_4_ = iVar41;
    auVar19._12_4_ = iVar42;
    uVar14 = NEON_sqxtn(CONCAT44(fVar38,fVar37),auVar19,4);
    auVar20._4_4_ = iVar40;
    auVar20._0_4_ = iVar39;
    auVar20._8_4_ = iVar41;
    auVar20._12_4_ = iVar42;
    NEON_uqxtn(CONCAT44(iVar40,iVar39),auVar20,2);
    auVar11._8_4_ = (int)uVar14;
    auVar11._0_8_ = uVar14;
    auVar11._12_4_ = (int)((ulonglong)uVar14 >> 0x20);
    uVar14 = NEON_uqxtn(uVar14,auVar11,2);
    local_188 = (int)uVar14;
    fVar37 = *(float *)(param_1 + 0x2d0) * 255.0;
    fVar38 = *(float *)(param_1 + 0x2cc) * 255.0;
    iVar39 = (int)fVar37;
    iVar40 = (int)fVar38;
    iVar41 = (int)(*(float *)(param_1 + 0x2c8) * 255.0);
    iVar42 = (int)(*(float *)(param_1 + 0x2d4) * 255.0);
    auVar12._4_4_ = iVar40;
    auVar12._0_4_ = iVar39;
    auVar12._8_4_ = iVar41;
    auVar12._12_4_ = iVar42;
    uVar14 = NEON_sqxtn(CONCAT17((char)((uint)fVar38 >> 0x18),
                                 CONCAT16((char)((uint)fVar38 >> 0x10),
                                          CONCAT15((char)((uint)fVar38 >> 8),
                                                   CONCAT14(SUB41(fVar38,0),fVar37)))),auVar12,4);
    auVar13._4_4_ = iVar40;
    auVar13._0_4_ = iVar39;
    auVar13._8_4_ = iVar41;
    auVar13._12_4_ = iVar42;
    NEON_uqxtn(CONCAT44(iVar40,iVar39),auVar13,2);
    auVar8[8] = (char)uVar14;
    auVar8._0_8_ = uVar14;
    auVar8[9] = (char)((ulonglong)uVar14 >> 8);
    auVar8[10] = (char)((ulonglong)uVar14 >> 0x10);
    auVar8[0xb] = (char)((ulonglong)uVar14 >> 0x18);
    auVar8[0xc] = (char)((ulonglong)uVar14 >> 0x20);
    auVar8[0xd] = (char)((ulonglong)uVar14 >> 0x28);
    auVar8[0xe] = (char)((ulonglong)uVar14 >> 0x30);
    auVar8[0xf] = (char)((ulonglong)uVar14 >> 0x38);
    uVar14 = NEON_uqxtn(uVar14,auVar8,2);
    local_184 = (int)uVar14;
    puVar35 = (uint *)0x0;
    if (*(char *)(param_4 + 0x3c) != -1) {
      puVar35 = (uint *)(iVar32 * param_6 + (uint)*(byte *)(param_4 + 0x3f) * 4 + param_3);
    }
    if ((local_18c >> 2 & 1) == 0) {
      bVar21 = true;
      bVar26 = true;
    }
    else {
      piVar30 = &local_188;
      piVar31 = &local_184;
      piVar28 = &local_180;
      piVar29 = &local_190;
      if (*(int *)(param_1 + 0x664) != 0) {
        if (*(int *)(param_1 + 0x674) == 1) {
          if (local_1bc != (int *)0x0) {
            piVar30 = local_1bc;
          }
        }
        else if (*(int *)(param_1 + 0x674) == 2 && local_1b4 != (int *)0x0) {
          piVar30 = local_1b4;
        }
        if (*(int *)(param_1 + 0x678) == 1) {
          if (local_1bc != (int *)0x0) {
            piVar31 = local_1bc;
          }
        }
        else if (*(int *)(param_1 + 0x678) == 2 && local_1b4 != (int *)0x0) {
          piVar31 = local_1b4;
        }
        if (*(int *)(param_1 + 0x67c) == 1) {
          if (local_1bc != (int *)0x0) {
            piVar28 = local_1bc;
          }
        }
        else if (*(int *)(param_1 + 0x67c) == 2 && local_1b4 != (int *)0x0) {
          piVar28 = local_1b4;
        }
        if (*(int *)(param_1 + 0x680) == 1) {
          if (local_1bc != (int *)0x0) {
            piVar29 = local_1bc;
          }
        }
        else if (*(int *)(param_1 + 0x680) == 2 && local_1b4 != (int *)0x0) {
          piVar29 = local_1b4;
        }
      }
      if (bVar23) {
        local_1c4 = local_1b0;
      }
      uVar27 = FUN_1002c040(param_1,*puVar3,0,local_158._4_4_,piVar28,piVar29,piVar30,piVar31,
                            local_1c4);
      bVar21 = false;
      bVar26 = *(int *)(param_1 + 0x4a4) == 0;
    }
    if (param_9 == '\0') {
      if ((puVar35 != (uint *)0x0) && (bVar21)) {
        piVar30 = local_1bc;
        if (local_1bc == (int *)0x0) {
          uVar33 = 4;
          piVar30 = (int *)(param_1 + 0xd84);
        }
        uVar34 = 0;
        if (local_1bc == (int *)0x0) {
          local_1b8 = 0;
        }
        uVar27 = local_1b8;
        if (param_7 != 0) {
          do {
            uVar27 = FUN_10038398(piVar30,uVar33);
            uVar34 = uVar34 + 1;
            *puVar35 = uVar27;
            piVar30 = (int *)(local_1b8 + (int)piVar30);
            puVar35 = (uint *)(*piVar2 + (int)puVar35);
          } while (uVar34 < param_7);
        }
      }
      if (((local_1b0 != (uint *)0x0) && (!bVar23)) && (bVar26)) {
        uVar34 = 0;
        if (local_1b4 == (int *)0x0) {
          local_1c8 = 0;
          uVar36 = 4;
          local_1b4 = (int *)(param_1 + 0xd88);
        }
        uVar27 = uVar36;
        if (param_7 != 0) {
          do {
            uVar27 = FUN_10038398(local_1b4,uVar36);
            uVar34 = uVar34 + 1;
            *local_1b0 = uVar27;
            local_1b4 = (int *)(local_1c8 + (int)local_1b4);
            local_1b0 = (uint *)(*piVar2 + (int)local_1b0);
          } while (uVar34 < param_7);
        }
      }
    }
  }
  pcVar24 = local_17c;
  iVar32 = *piVar2;
  param_3 = param_3 + iVar32 * param_6;
  uVar36 = 0;
  while (((*(uint *)(param_1 + 0x7a4 + uVar36 * 0x84) & 0x70000) == 0 &&
         ((*(uint *)(param_1 + uVar36 * 0x84 + 0x7d8) & 0xff) == 0))) {
    uVar36 = uVar36 + 1;
    if (7 < uVar36) {
      if (param_9 == '\0') {
        uVar36 = 7;
        local_190 = param_1;
        do {
          if ((pcVar24[uVar36 * 8] != -1) && (piVar2 = param_2 + uVar36 * 3, *piVar2 != 0)) {
            if ((char)piVar2[2] == *(char *)(param_4 + uVar36 * 8 + 0x18)) {
              uVar27 = FUN_1002caf0(local_190);
            }
            else {
              uVar27 = switchD_1002cb38::caseD_b
                                 (uVar27,piVar2,pcVar24 + uVar36 * 8,param_3,iVar32,param_7,param_8)
              ;
            }
          }
          uVar36 = uVar36 + 1;
        } while (uVar36 < 0xf);
      }
      return;
    }
  }
  switchD_1002cd84::caseD_1002ce98
            (param_1,param_2,param_4,*puVar3,param_3,iVar32,param_7,param_8,param_9);
  return;
}


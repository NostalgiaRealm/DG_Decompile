/*
 * FUN_10024980 at 10024980
 * undefined FUN_10024980(void)
 * Address ranges: 10024980-1002531b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10024980(int *param_1,int *param_2,int param_3,int param_4,uint param_5,int param_6,
                 uint param_7,int param_8,char param_9)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  char cVar7;
  undefined *puVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  bool bVar23;
  bool bVar24;
  undefined1 uVar25;
  char *pcVar26;
  int **ppiVar27;
  bool bVar28;
  undefined8 uVar29;
  int **ppiVar30;
  int **ppiVar31;
  int **ppiVar32;
  int **ppiVar33;
  uint uVar34;
  int iVar35;
  undefined4 *puVar36;
  undefined4 *puVar37;
  int **ppiVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int local_1bc;
  int **local_1b8;
  int local_1a8;
  undefined4 *local_1a4;
  int *local_190;
  int *local_18c;
  uint local_188;
  int *local_184;
  int *local_180;
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
  int *piStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  
  cVar6 = *(char *)(param_4 + 0x3c);
  cVar7 = *(char *)(param_4 + 0x44);
  if ((cVar6 == -1 && cVar7 == -1) || ((param_5 >> 2 & 1) == 0)) {
    bVar23 = false;
  }
  else {
    bVar23 = true;
  }
  if ((param_1[0x12f] - 1U < 3) && (param_1[0xbf] != 0)) {
    bVar24 = true;
  }
  else {
    bVar24 = false;
  }
  uVar34 = 0;
  do {
    if ((param_1[uVar34 * 0x1d + 0x152] != 1) && ((param_1[(uVar34 + 0xc) * 0x1d] & 0x30000U) != 0))
    {
      bVar28 = true;
      goto LAB_10024a70;
    }
    uVar34 = uVar34 + 1;
  } while (uVar34 < 8);
  bVar28 = false;
LAB_10024a70:
  local_188 = param_5;
  if ((cVar7 != -1 && bVar24) || (bVar28)) {
LAB_10024ac0:
    puVar1 = (uint *)(param_1 + 0x2a8);
    bVar23 = true;
    if (*puVar1 < param_7) {
      FUN_100fed00(param_1[0x2a6]);
      puVar2 = (uint *)(param_1 + 0x2a5);
      puVar2[0] = 0;
      puVar2[1] = 0;
      *puVar1 = 0;
      uVar34 = param_7 * 2 + 1;
      iVar35 = uVar34 * 0x10;
      if (uVar34 >> 0x1c != 0) {
        iVar35 = -1;
      }
      iVar35 = FUN_100fece0(iVar35);
      param_1[0x2a6] = iVar35;
      if (iVar35 != 0) {
        *puVar2 = iVar35 + 0xfU & 0xfffffff0;
        *puVar1 = param_7;
      }
    }
  }
  else {
    if ((bVar23) && (param_1[0x5e] != 0)) {
      uVar34 = 0;
      do {
        if (*(int *)(param_1[0x5d] + uVar34 * 4) != -1) goto LAB_10024ac0;
        uVar34 = uVar34 + 1;
      } while (uVar34 < (uint)param_1[0x5e]);
    }
    bVar23 = false;
  }
  piVar3 = (int *)(param_4 + 0xc);
  local_17c = (char *)(param_4 + 0x14);
  iVar35 = *piVar3;
  local_150 = 0;
  local_130 = 0;
  local_120 = 0;
  if (*local_17c != -1) {
    local_120 = iVar35 * param_6 + (uint)*(byte *)(param_4 + 0x17) * 4 + param_3;
  }
  _local_120 = CONCAT44(iVar35,local_120);
  uVar34 = param_2[1];
  local_158 = (ulonglong)uVar34;
  uVar25 = 2;
  puVar8 = &DAT_1012b688;
  if (param_2[9] != 0) {
    local_158 = CONCAT44(param_2[10],uVar34);
    puVar8 = (undefined *)(param_2[9] + param_2[10] * param_8);
    uVar25 = (undefined1)param_2[0xb];
  }
  _local_170 = CONCAT44(puVar8,*param_2 + uVar34 * param_8);
  puStack_164 = &DAT_1012b688;
  auStack_140 = (undefined1  [7])((uint7)CONCAT11(uVar25,(char)param_2[2]) << 0x20);
  _auStack_140 = CONCAT17(2,auStack_140);
  if (param_2[0x2d] != 0) {
    local_150 = (ulonglong)(uint)param_2[0x2e];
    puStack_164 = (undefined *)(param_2[0x2d] + param_2[0x2e] * param_8);
    _auStack_140 = CONCAT17((char)param_2[0x2f],auStack_140);
  }
  uVar29 = _auStack_140;
  iStack_168 = 0;
  puVar8 = &DAT_1012b688;
  uVar25 = 2;
  if (param_2[0x30] != 0) {
    local_150 = CONCAT44(param_2[0x31],(undefined4)local_150);
    puVar8 = (undefined *)(param_2[0x30] + param_2[0x31] * param_8);
    uVar25 = (undefined1)param_2[0x32];
  }
  uStack_148 = 0;
  _local_160 = CONCAT44(&DAT_1012b684,puVar8);
  local_138._0_2_ = CONCAT11(5,uVar25);
  if (param_2[3] != 0) {
    uVar34 = param_2[4];
    iStack_168 = param_2[3] + uVar34 * param_8;
    uStack_148 = (ulonglong)uVar34 << 0x20;
    _auStack_140 = CONCAT44(stack0xfffffec4,(uint)*(byte *)((int)param_2 + 0x15));
    uVar16 = _auStack_140;
    local_139 = SUB81(uVar29,7);
    auStack_140 = (undefined1  [7])CONCAT16((char)param_2[5],(int6)uVar16);
    if ((param_2[6] != 0) && (param_1[0x14a] != 0)) {
      uStack_148 = CONCAT44(uVar34,param_2[7]);
      _local_160 = CONCAT44(param_2[6] + param_2[7] * param_8,puVar8);
      local_138._0_2_ = CONCAT11((char)param_2[8],uVar25);
    }
  }
  piVar4 = param_1 + 0x2a5;
  if (bVar23) {
    iVar39 = *piVar4;
  }
  else {
    iVar39 = 0;
  }
  _piStack_128 = CONCAT44(iVar39,param_1 + 0x7b);
  local_138._0_4_ = CONCAT22(0x101,(undefined2)local_138);
  local_138 = (ulonglong)CONCAT14((char)(local_188 >> 3),(undefined4)local_138) & 0xffffff01ffffffff
  ;
  uVar29 = FUN_1002bf10(param_1,&local_170,0,param_7);
  puVar37 = (undefined4 *)0x0;
  if (cVar7 != -1) {
    puVar37 = (undefined4 *)(iVar35 * param_6 + (uint)*(byte *)(param_4 + 0x47) * 4 + param_3);
  }
  if ((DAT_1013d298 & 1) == 0) {
    DAT_1013d298 = DAT_1013d298 | 1;
    DAT_1013d29c = param_1[0x2b1] | 0xff000000;
  }
  local_190 = param_2 + 0x12;
  local_1a8 = 0;
  local_1a4 = &DAT_1013d29c;
  if (*local_190 != 0) {
    local_1a8 = param_2[0x13];
    local_1a4 = (undefined4 *)(*local_190 + local_1a8 * param_8);
  }
  if (cVar7 != -1 && bVar24) {
    uVar29 = FUN_10025468(param_1,*piVar4,local_1a4,local_1a8,param_7,puVar37,*piVar3);
  }
  if (cVar6 != -1 || cVar7 != -1) {
    ppiVar38 = (int **)0x0;
    iVar39 = 0;
    if (param_2[0xf] == 0) {
      local_1bc = 0;
      local_1b8 = (int **)0x0;
    }
    else {
      local_1bc = param_2[0x10];
      local_1b8 = (int **)(param_2[0xf] + local_1bc * param_8);
    }
    if (*local_190 != 0) {
      iVar39 = param_2[0x13];
      ppiVar38 = (int **)(*local_190 + iVar39 * param_8);
    }
    iVar40 = (int)((float)param_1[0x47] * 255.0);
    iVar41 = (int)((float)param_1[0x46] * 255.0);
    auVar17._4_4_ = iVar41;
    auVar17._0_4_ = iVar40;
    auVar17._8_4_ = (int)((float)param_1[0x45] * 255.0);
    auVar17._12_4_ = (int)((float)param_1[0x48] * 255.0);
    uVar16 = NEON_sqxtn(CONCAT44((float)param_1[0x46] * 255.0,(float)param_1[0x47] * 255.0),auVar17,
                        4);
    auVar18._4_4_ = iVar41;
    auVar18._0_4_ = iVar40;
    auVar18._8_4_ = (int)((float)param_1[0x45] * 255.0);
    auVar18._12_4_ = (int)((float)param_1[0x48] * 255.0);
    NEON_uqxtn(CONCAT44(iVar41,iVar40),auVar18,2);
    auVar11._8_4_ = (int)uVar16;
    auVar11._0_8_ = uVar16;
    auVar11._12_4_ = (int)((ulonglong)uVar16 >> 0x20);
    uVar16 = NEON_uqxtn(uVar16,auVar11,2);
    local_180 = (int *)uVar16;
    iVar40 = (int)((float)param_1[0x4f] * 255.0);
    iVar41 = (int)((float)param_1[0x4e] * 255.0);
    auVar19._4_4_ = iVar41;
    auVar19._0_4_ = iVar40;
    auVar19._8_4_ = (int)((float)param_1[0x4d] * 255.0);
    auVar19._12_4_ = (int)((float)param_1[0x50] * 255.0);
    uVar16 = NEON_sqxtn(CONCAT44((float)param_1[0x4e] * 255.0,(float)param_1[0x4f] * 255.0),auVar19,
                        4);
    auVar20._4_4_ = iVar41;
    auVar20._0_4_ = iVar40;
    auVar20._8_4_ = (int)((float)param_1[0x4d] * 255.0);
    auVar20._12_4_ = (int)((float)param_1[0x50] * 255.0);
    NEON_uqxtn(CONCAT44(iVar41,iVar40),auVar20,2);
    auVar12._8_4_ = (int)uVar16;
    auVar12._0_8_ = uVar16;
    auVar12._12_4_ = (int)((ulonglong)uVar16 >> 0x20);
    uVar16 = NEON_uqxtn(uVar16,auVar12,2);
    local_18c = (int *)uVar16;
    iVar40 = (int)((float)param_1[0x43] * 255.0);
    iVar41 = (int)((float)param_1[0x42] * 255.0);
    auVar21._4_4_ = iVar41;
    auVar21._0_4_ = iVar40;
    auVar21._8_4_ = (int)((float)param_1[0x41] * 255.0);
    auVar21._12_4_ = (int)((float)param_1[0x44] * 255.0);
    uVar16 = NEON_sqxtn(CONCAT44((float)param_1[0x42] * 255.0,(float)param_1[0x43] * 255.0),auVar21,
                        4);
    auVar22._4_4_ = iVar41;
    auVar22._0_4_ = iVar40;
    auVar22._8_4_ = (int)((float)param_1[0x41] * 255.0);
    auVar22._12_4_ = (int)((float)param_1[0x44] * 255.0);
    NEON_uqxtn(CONCAT44(iVar41,iVar40),auVar22,2);
    auVar13._8_4_ = (int)uVar16;
    auVar13._0_8_ = uVar16;
    auVar13._12_4_ = (int)((ulonglong)uVar16 >> 0x20);
    uVar16 = NEON_uqxtn(uVar16,auVar13,2);
    local_190 = (int *)uVar16;
    fVar10 = (float)param_1[0x4a] * 255.0;
    iVar40 = (int)((float)param_1[0x4b] * 255.0);
    iVar41 = (int)fVar10;
    auVar14._4_4_ = iVar41;
    auVar14._0_4_ = iVar40;
    auVar14._8_4_ = (int)((float)param_1[0x49] * 255.0);
    auVar14._12_4_ = (int)((float)param_1[0x4c] * 255.0);
    uVar16 = NEON_sqxtn(CONCAT17((char)((uint)fVar10 >> 0x18),
                                 CONCAT16((char)((uint)fVar10 >> 0x10),
                                          CONCAT15((char)((uint)fVar10 >> 8),
                                                   CONCAT14(SUB41(fVar10,0),
                                                            (float)param_1[0x4b] * 255.0)))),auVar14
                        ,4);
    auVar15._4_4_ = iVar41;
    auVar15._0_4_ = iVar40;
    auVar15._8_4_ = (int)((float)param_1[0x49] * 255.0);
    auVar15._12_4_ = (int)((float)param_1[0x4c] * 255.0);
    NEON_uqxtn(CONCAT44(iVar41,iVar40),auVar15,2);
    auVar9[8] = (char)uVar16;
    auVar9._0_8_ = uVar16;
    auVar9[9] = (char)((ulonglong)uVar16 >> 8);
    auVar9[10] = (char)((ulonglong)uVar16 >> 0x10);
    auVar9[0xb] = (char)((ulonglong)uVar16 >> 0x18);
    auVar9[0xc] = (char)((ulonglong)uVar16 >> 0x20);
    auVar9[0xd] = (char)((ulonglong)uVar16 >> 0x28);
    auVar9[0xe] = (char)((ulonglong)uVar16 >> 0x30);
    auVar9[0xf] = (char)((ulonglong)uVar16 >> 0x38);
    uVar16 = NEON_uqxtn(uVar16,auVar9,2);
    local_184 = (int *)uVar16;
    puVar36 = (undefined4 *)0x0;
    if (*(char *)(param_4 + 0x3c) != -1) {
      puVar36 = (undefined4 *)(iVar35 * param_6 + (uint)*(byte *)(param_4 + 0x3f) * 4 + param_3);
    }
    if ((local_188 >> 2 & 1) == 0) {
      bVar23 = true;
      bVar28 = true;
    }
    else {
      ppiVar32 = &local_190;
      ppiVar33 = &local_184;
      ppiVar30 = &local_180;
      ppiVar31 = &local_18c;
      if (param_1[0x130] != 0) {
        if (param_1[0x134] == 1) {
          ppiVar27 = ppiVar32;
          if (local_1b8 != (int **)0x0) {
            ppiVar27 = local_1b8;
          }
        }
        else {
          ppiVar27 = ppiVar38;
          if (param_1[0x134] != 2 || ppiVar38 == (int **)0x0) {
            ppiVar27 = ppiVar32;
          }
        }
        ppiVar32 = ppiVar27;
        if (param_1[0x135] == 1) {
          ppiVar27 = ppiVar33;
          if (local_1b8 != (int **)0x0) {
            ppiVar27 = local_1b8;
          }
        }
        else {
          ppiVar27 = ppiVar38;
          if (param_1[0x135] != 2 || ppiVar38 == (int **)0x0) {
            ppiVar27 = ppiVar33;
          }
        }
        ppiVar33 = ppiVar27;
        if (param_1[0x136] == 1) {
          ppiVar27 = ppiVar30;
          if (local_1b8 != (int **)0x0) {
            ppiVar27 = local_1b8;
          }
        }
        else {
          ppiVar27 = ppiVar38;
          if (param_1[0x136] != 2 || ppiVar38 == (int **)0x0) {
            ppiVar27 = ppiVar30;
          }
        }
        ppiVar30 = ppiVar27;
        if (param_1[0x137] == 1) {
          if (local_1b8 != (int **)0x0) {
            ppiVar31 = local_1b8;
          }
        }
        else {
          ppiVar31 = ppiVar38;
          if (param_1[0x137] != 2 || ppiVar38 == (int **)0x0) {
            ppiVar31 = &local_18c;
          }
        }
      }
      if (bVar24) {
        local_1a4 = puVar37;
      }
      uVar29 = FUN_10026490(param_1,*piVar4,0,local_158._4_4_,ppiVar30,ppiVar31,ppiVar32,ppiVar33,
                            local_1a4);
      bVar23 = false;
      bVar28 = param_1[0xc0] == 0;
    }
    if (param_9 == '\0') {
      if ((puVar36 != (undefined4 *)0x0) && (bVar23)) {
        ppiVar32 = local_1b8;
        if (local_1b8 == (int **)0x0) {
          ppiVar32 = (int **)(param_1 + 0x2b0);
        }
        uVar34 = 0;
        if (local_1b8 == (int **)0x0) {
          local_1bc = 0;
        }
        if (param_7 != 0) {
          do {
            piVar5 = *ppiVar32;
            uVar34 = uVar34 + 1;
            ppiVar32 = (int **)(local_1bc + (int)ppiVar32);
            *puVar36 = piVar5;
            puVar36 = (undefined4 *)((int)puVar36 + *piVar3);
          } while (uVar34 < param_7);
        }
      }
      if (((puVar37 != (undefined4 *)0x0) && (!bVar24)) && (bVar28)) {
        ppiVar32 = ppiVar38;
        if (ppiVar38 == (int **)0x0) {
          ppiVar32 = (int **)(param_1 + 0x2b1);
        }
        uVar34 = 0;
        if (ppiVar38 == (int **)0x0) {
          iVar39 = 0;
        }
        if (param_7 != 0) {
          do {
            piVar5 = *ppiVar32;
            uVar34 = uVar34 + 1;
            ppiVar32 = (int **)(iVar39 + (int)ppiVar32);
            *puVar37 = piVar5;
            puVar37 = (undefined4 *)(*piVar3 + (int)puVar37);
          } while (uVar34 < param_7);
        }
      }
    }
  }
  pcVar26 = local_17c;
  iVar35 = *piVar3;
  param_3 = param_3 + iVar35 * param_6;
  uVar34 = 0;
  while (((param_1[(uVar34 + 0xc) * 0x1d] & 0x30000U) == 0 &&
         ((param_1[uVar34 * 0x1d + 0x169] & 0xffU) == 0))) {
    uVar34 = uVar34 + 1;
    if (7 < uVar34) {
      if (param_9 == '\0') {
        uVar34 = 7;
        local_18c = param_1;
        do {
          if ((pcVar26[uVar34 * 8] != -1) && (piVar3 = param_2 + uVar34 * 3, *piVar3 != 0)) {
            if ((char)piVar3[2] == *(char *)(param_4 + uVar34 * 8 + 0x18)) {
              uVar29 = FUN_10026dc8(local_18c);
            }
            else {
              uVar29 = switchD_10026e10::caseD_12
                                 (uVar29,piVar3,pcVar26 + uVar34 * 8,param_3,iVar35,param_7,param_8)
              ;
            }
          }
          uVar34 = uVar34 + 1;
        } while (uVar34 < 0xf);
      }
      return;
    }
  }
  switchD_10027044::caseD_10027148
            (param_1,param_2,param_4,*piVar4,param_3,iVar35,param_7,param_8,param_9);
  return;
}


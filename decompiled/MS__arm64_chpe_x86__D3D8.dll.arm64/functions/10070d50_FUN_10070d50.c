/*
 * FUN_10070d50 at 10070d50
 * undefined FUN_10070d50(void)
 * Address ranges: 10070d50-100713cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10070d50(undefined8 param_1,int param_2,undefined4 param_3,int param_4,ulonglong param_5,
                 ulonglong param_6,uint param_7,int param_8,char param_9)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined1 *extraout_w11;
  undefined1 *extraout_w11_00;
  undefined1 *extraout_w11_01;
  undefined1 *extraout_w11_02;
  ulonglong extraout_x11;
  int extraout_w12;
  int extraout_w14;
  int iVar15;
  byte bVar18;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  int local_110;
  undefined4 uStack_10c;
  uint local_108;
  int *piStack_104;
  undefined1 *local_100;
  undefined1 *puStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f4;
  uint *local_e0;
  int local_d0;
  byte local_cc;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  
  uVar7 = (uint)param_5;
  uVar3 = uVar7 & 0xf000000;
  uVar14 = 0;
  if ((((uVar3 == 0x1000000 || uVar3 == 0x3000000) || uVar3 == 0x5000000) || uVar3 == 0x6000000) ||
      uVar3 == 0x8000000) {
    uVar14 = 0x80000000;
  }
  uVar12 = (ulonglong)(uVar7 & 0x1fff);
  iVar15 = (int)param_6;
  uVar9 = param_5;
  local_b0 = param_8;
  if ((iVar15 == 0) || (param_9 != '\0')) {
    uVar7 = uVar7 >> 0x10;
  }
  else {
    param_1 = FUN_100efc98(0xe4,param_6 >> 0x20 & 0xff);
    uVar7 = (uint)param_1;
  }
  uVar8 = (uint)uVar9 & 0x70000000;
  uVar11 = (uint)uVar12;
  if (uVar8 < 0x20000000) {
    if ((uVar9 & 0x70000000) == 0) {
      local_e0 = (uint *)(param_2 + (param_4 + 0x13) * 0x20);
      uVar8 = FUN_10070b90(param_1,param_2,uVar12 & 0xffffffff);
      puVar13 = local_e0;
    }
    else {
      if (uVar8 != 0x10000000) goto LAB_10071008;
      puVar13 = (uint *)(param_2 + (uVar11 + 0x8a) * 4);
      local_e0 = puVar13;
      if (*puVar13 == 0) {
        piStack_104 = (int *)FUN_100ee580(param_2,4,1);
        *puVar13 = (uint)piStack_104;
        puStack_fc = (undefined1 *)(uVar11 + 2 | 0x410100);
        local_f8 = &DAT_000000e4;
        uStack_f4 = 0;
        local_100 = (undefined1 *)0xf;
        local_108 = 0x2036;
        local_110 = param_2;
        uStack_10c = param_3;
        FUN_100ef510(&local_110,0x20);
      }
      uVar8 = *local_e0;
      puVar13 = (uint *)(param_2 + (param_4 + 0x13) * 0x20);
    }
LAB_10070fe8:
    *puVar13 = uVar8 | uVar14;
    *(char *)(puVar13 + 1) = (char)uVar7;
    puVar13[4] = 0xffffffff;
    puVar13[5] = 0xffffffff;
    puVar13 = puVar13 + 6;
LAB_10071004:
    puVar13[0] = 0xffffffff;
    puVar13[1] = 0xffffffff;
  }
  else if (uVar8 < 0x20000001) {
    if ((*(char *)(param_2 + 0xe0) == '\0') ||
       (iVar4 = *(int *)(param_2 + 0xe4), *(char *)(iVar4 + uVar11 + 0x41) == '\0')) {
      puVar13 = (uint *)(param_2 + (param_4 + 0x13) * 0x20);
      *puVar13 = *(uint *)(param_2 + 0x60) | uVar14;
      *(char *)(puVar13 + 1) = (char)uVar7;
      puVar13[4] = uVar11 << 4;
      puVar13[7] = 0xffffffff;
      puVar13 = puVar13 + 5;
      goto LAB_10071004;
    }
    auVar19 = NEON_fmov(0x3f800000,4);
    auVar21 = NEON_fmov(0xbf800000,4);
    auVar17._4_4_ = *(undefined4 *)((uVar7 & 0xc | (uVar11 & 0x1fff) << 4) + iVar4 + 0x4c);
    auVar17._0_4_ = *(undefined4 *)(((uVar7 & 3) << 2 | (uVar11 & 0x1fff) << 4) + iVar4 + 0x4c);
    uVar5 = *(undefined4 *)((((uVar7 & 0xff) >> 6) << 2 | (uVar11 & 0x1fff) << 4) + iVar4 + 0x4c);
    puVar1 = (undefined4 *)(param_2 + (param_4 + 0x13) * 0x20);
    auVar17._8_4_ =
         *(undefined4 *)((((uVar7 & 0xff) >> 4 & 3) << 2 | (uVar11 & 0x1fff) << 4) + iVar4 + 0x4c);
    *puVar1 = *(undefined4 *)(param_2 + 0x94);
    *(undefined1 *)(puVar1 + 1) = 0xe4;
    auVar17._12_4_ = uVar5;
    auVar17 = NEON_fmin(auVar17,auVar19,4);
    auVar17 = NEON_fmax(auVar17,auVar21,4);
    bVar18 = (byte)(uVar14 >> 0x18);
    auVar19._0_8_ =
         CONCAT17(auVar17[7] ^ bVar18,
                  CONCAT16(auVar17[6],
                           CONCAT15(auVar17[5],
                                    CONCAT14(auVar17[4],CONCAT13(auVar17[3] ^ bVar18,auVar17._0_3_))
                                   )));
    auVar19[8] = auVar17[8];
    auVar19[9] = auVar17[9];
    auVar19[10] = auVar17[10];
    auVar19[0xb] = auVar17[0xb] ^ bVar18;
    auVar19[0xc] = auVar17[0xc];
    auVar19[0xd] = auVar17[0xd];
    auVar19[0xe] = auVar17[0xe];
    auVar19[0xf] = auVar17[0xf] ^ bVar18;
    *(longlong *)(puVar1 + 6) = auVar19._8_8_;
    *(undefined8 *)(puVar1 + 4) = auVar19._0_8_;
  }
  else if (uVar8 == 0x30000000) {
    local_e0 = (uint *)(param_2 + (param_4 + 0x13) * 0x20);
    uVar8 = FUN_10070bd8(param_1,param_2,uVar12 & 0xffffffff);
    puVar13 = local_e0;
    goto LAB_10070fe8;
  }
LAB_10071008:
  if (iVar15 == 0) {
    return;
  }
  fVar20 = *(float *)(&DAT_1012c8d4 + ((local_b0 << 0x1c) >> 0x1c) * 4);
  uVar9 = FUN_100efd00(param_6 >> 0x20 & 0xff);
  local_cc = (byte)(param_6 >> 0x20);
  uVar12 = uVar9 & 0xff;
  uStack_b8 = 0xffffffff;
  uStack_b4 = 0xffffffff;
  local_c0 = 0xffffffffffffffff;
  local_d0 = iVar15;
  uVar10 = FUN_1006a420(fVar20,uVar9,auStack_80,param_2,uVar12);
  uVar9 = extraout_x11;
  if (uVar3 < 0x4000000) {
    if ((param_5 & 0xe000000) == 0) {
      local_100 = (undefined1 *)(param_2 + (param_4 + 0x13) * 0x20);
      if (extraout_w10 == 0) {
        puStack_fc = (undefined1 *)0x0;
        local_108 = param_7 | 0x36;
        piStack_104 = &local_d0;
        local_110 = param_2;
        uStack_10c = param_3;
        FUN_100ef6a8(&local_110,0x18);
      }
      else if (extraout_w10 == 1) {
        piStack_104 = &local_d0;
        local_f8 = (undefined1 *)0x0;
        local_110 = param_2;
        uStack_10c = param_3;
        local_108 = param_7;
        puStack_fc = local_100;
        FUN_100ef6a8(&local_110,0x1c);
      }
      else {
        puStack_fc = auStack_80;
        local_f8 = (undefined1 *)0x0;
        local_108 = param_7 | 0x38;
        piStack_104 = &local_d0;
        local_110 = param_2;
        uStack_10c = param_3;
        FUN_100ef6a8(&local_110,0x1c);
      }
    }
    else {
      iVar15 = extraout_w12;
      if ((uVar3 + 0xfe000000 & 0xfeffffff) != 0) goto LAB_1007137c;
      fVar16 = -0.5;
      if (uVar3 != 0x2000000) {
        fVar16 = 0.5;
      }
      FUN_1006a420(fVar16 * fVar20,uVar10,auStack_a0,param_2,uVar12 & 0xffffffff);
      local_100 = (undefined1 *)(param_2 + (param_4 + 0x13) * 0x20);
      if (extraout_w10_01 == 0) {
        puStack_fc = auStack_a0;
        local_f8 = (undefined1 *)0x0;
        piStack_104 = &local_d0;
        local_110 = param_2;
        uStack_10c = param_3;
        local_108 = param_7;
        FUN_100ef6a8(&local_110,0x1c);
      }
      else {
        local_108 = param_7 | 0x32;
        local_f8 = auStack_a0;
        uStack_f4 = 0;
        puStack_fc = auStack_80;
        piStack_104 = &local_d0;
        local_110 = param_2;
        uStack_10c = param_3;
        FUN_100ef6a8(&local_110,0x20);
      }
    }
  }
  else if (uVar3 < 0x4000001) {
LAB_100711b4:
    uVar12 = uVar12 & 0xffffffff;
    fVar16 = -1.0;
    if (uVar3 != 0x4000000) {
      fVar16 = 1.0;
    }
    uVar10 = FUN_1006a420(fVar16 * fVar20,uVar10,auStack_a0,param_2,uVar12);
    if (extraout_w10_00 == -1) {
      puStack_fc = auStack_a0;
      local_f8 = (undefined1 *)0x0;
      piStack_104 = &local_d0;
      local_110 = param_2;
      uStack_10c = param_3;
      local_108 = param_7;
      local_100 = (undefined1 *)(param_2 + (param_4 + 0x13) * 0x20);
      FUN_100ef6a8(&local_110,0x1c);
    }
    else {
      FUN_1006a420(fVar20 + fVar20,uVar10,auStack_60,param_2,uVar12 & 0xffffffff);
      local_108 = param_7 | 0x32;
      local_f8 = auStack_a0;
      uStack_f4 = 0;
      puStack_fc = auStack_60;
      piStack_104 = &local_d0;
      local_110 = param_2;
      uStack_10c = param_3;
      local_100 = extraout_w11_02;
      FUN_100ef6a8(&local_110,0x20);
    }
  }
  else if ((uVar3 + 0xf9000000 & 0xfeffffff) == 0) {
    puVar2 = (undefined1 *)(param_2 + (param_4 + 0x13) * 0x20);
    if (extraout_w10 == -1) {
      puStack_fc = (undefined1 *)0x0;
      local_108 = param_7 | 0x36;
      piStack_104 = &local_d0;
      local_110 = param_2;
      uStack_10c = param_3;
      local_100 = puVar2;
      FUN_100ef6a8(&local_110,0x18);
    }
    else if (extraout_w10 == 0) {
      piStack_104 = &local_d0;
      local_f8 = (undefined1 *)0x0;
      local_110 = param_2;
      uStack_10c = param_3;
      local_108 = param_7;
      local_100 = puVar2;
      puStack_fc = puVar2;
      FUN_100ef6a8(&local_110,0x1c);
    }
    else {
      FUN_1006a420(fVar20 + fVar20,uVar10,auStack_a0,param_2,uVar12 & 0xffffffff);
      puStack_fc = auStack_a0;
      local_f8 = (undefined1 *)0x0;
      local_108 = param_7 | 0x38;
      piStack_104 = &local_d0;
      local_110 = param_2;
      uStack_10c = param_3;
      local_100 = extraout_w11_01;
      FUN_100ef6a8(&local_110,0x1c);
    }
  }
  else {
    if (uVar3 == 0x5000000) goto LAB_100711b4;
    iVar15 = extraout_w12;
    if (uVar3 != 0x6000000) goto LAB_1007137c;
    if (extraout_w10 == 0) {
      FUN_1006a420(0x3f800000,uVar10,auStack_a0,param_2,uVar12 & 0xffffffff);
      puStack_fc = auStack_a0;
      local_f8 = (undefined1 *)0x0;
      piStack_104 = &local_d0;
      local_110 = param_2;
      uStack_10c = param_3;
      local_108 = param_7;
      local_100 = extraout_w11;
      FUN_100ef6a8(&local_110,0x1c);
    }
    else {
      FUN_1006a420(fVar20,uVar10,auStack_a0,param_2,uVar12 & 0xffffffff);
      local_108 = param_7 | 0x32;
      local_f8 = auStack_a0;
      uStack_f4 = 0;
      puStack_fc = auStack_a0;
      piStack_104 = &local_d0;
      local_110 = param_2;
      uStack_10c = param_3;
      local_100 = extraout_w11_00;
      FUN_100ef6a8(&local_110,0x20);
    }
  }
  uVar9 = (ulonglong)local_cc;
  iVar15 = local_d0;
LAB_1007137c:
  *(int *)(param_2 + (param_4 + 0x13) * 0x20) = iVar15;
  uVar6 = FUN_100efc98(0xe4,uVar9 & 0xffffffff);
  *(undefined1 *)(extraout_w14 + 4) = uVar6;
  *(undefined8 *)(extraout_w14 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(extraout_w14 + 0x18) = 0xffffffffffffffff;
  return;
}


/*
 * FUN_10088568 at 10088568
 * undefined FUN_10088568(void)
 * Address ranges: 10088568-10088bef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10088568(undefined8 param_1,int param_2,undefined4 param_3,int param_4,ulonglong param_5,
                 ulonglong param_6,uint param_7,int param_8,char param_9)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
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
  int local_100;
  undefined4 uStack_fc;
  uint local_f8;
  int *piStack_f4;
  undefined1 *local_f0;
  undefined1 *puStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e4;
  int local_d0;
  byte local_cc;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint *local_b0;
  int local_ac;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  
  uVar3 = (uint)param_5 & 0xf000000;
  uVar13 = 0;
  if ((((uVar3 == 0x1000000 || uVar3 == 0x3000000) || uVar3 == 0x5000000) || uVar3 == 0x6000000) ||
      uVar3 == 0x8000000) {
    uVar13 = 0x80000000;
  }
  iVar15 = (int)param_6;
  uVar9 = param_5;
  local_ac = param_8;
  if ((iVar15 == 0) || (param_9 != '\0')) {
    uVar8 = (uint)param_5 >> 0x10;
  }
  else {
    param_1 = FUN_10123210(0xe4,param_6 >> 0x20 & 0xff);
    uVar8 = (uint)param_1;
  }
  uVar6 = ((uint)uVar9 & 0x1800 | (uint)(uVar9 >> 0x14) & 0x7ff) >> 8;
  if (3 < uVar6) goto LAB_10088828;
  uVar12 = (uint)uVar9 & 0x7ff;
  uVar7 = (undefined1)uVar8;
  switch(uVar6) {
  case 0:
    puVar14 = (uint *)(param_2 + param_4 * 0x20 + 0x350);
    uVar8 = FUN_100883a0(param_1,param_2,uVar12);
    goto LAB_1008863c;
  case 1:
    puVar14 = (uint *)(param_2 + (uVar12 + 0x8e) * 4);
    local_b0 = puVar14;
    if (*puVar14 == 0) {
      piStack_f4 = (int *)FUN_10121590(param_2,4,1);
      *puVar14 = (uint)piStack_f4;
      puStack_ec = (undefined1 *)(uVar12 + 2 | 0x410100);
      local_e8 = &DAT_000000e4;
      uStack_e4 = 0;
      local_f0 = (undefined1 *)0xf;
      local_f8 = 0x2036;
      local_100 = param_2;
      uStack_fc = param_3;
      FUN_10122a88(&local_100,0x20);
    }
    iVar4 = param_2 + param_4 * 0x20;
    *(uint *)(iVar4 + 0x350) = uVar13 | *local_b0;
    *(undefined1 *)(iVar4 + 0x354) = uVar7;
    *(undefined8 *)(iVar4 + 0x360) = 0xffffffffffffffff;
    puVar14 = (uint *)(iVar4 + 0x368);
    break;
  case 2:
    if ((*(char *)(param_2 + 0xf0) != '\0') &&
       (iVar4 = *(int *)(param_2 + 0xf4), *(char *)(iVar4 + uVar12 + 0x331) != '\0')) {
      auVar19 = NEON_fmov(0x3f800000,4);
      auVar21 = NEON_fmov(0xbf800000,4);
      auVar17._4_4_ = *(undefined4 *)((uVar8 & 0xc | uVar12 << 4) + iVar4 + 0x414);
      auVar17._0_4_ = *(undefined4 *)(((uVar8 & 3) << 2 | uVar12 << 4) + iVar4 + 0x414);
      uVar5 = *(undefined4 *)((((uVar8 & 0xff) >> 6) << 2 | uVar12 << 4) + iVar4 + 0x414);
      iVar2 = param_2 + param_4 * 0x20;
      auVar17._8_4_ =
           *(undefined4 *)((((uVar8 & 0xff) >> 4 & 3) << 2 | uVar12 << 4) + iVar4 + 0x414);
      *(undefined4 *)(iVar2 + 0x350) = *(undefined4 *)(param_2 + 0xa4);
      *(undefined1 *)(iVar2 + 0x354) = 0xe4;
      auVar17._12_4_ = uVar5;
      auVar17 = NEON_fmin(auVar17,auVar19,4);
      auVar17 = NEON_fmax(auVar17,auVar21,4);
      bVar18 = (byte)(uVar13 >> 0x18);
      auVar19._0_8_ =
           CONCAT17(auVar17[7] ^ bVar18,
                    CONCAT16(auVar17[6],
                             CONCAT15(auVar17[5],
                                      CONCAT14(auVar17[4],
                                               CONCAT13(auVar17[3] ^ bVar18,auVar17._0_3_)))));
      auVar19[8] = auVar17[8];
      auVar19[9] = auVar17[9];
      auVar19[10] = auVar17[10];
      auVar19[0xb] = auVar17[0xb] ^ bVar18;
      auVar19[0xc] = auVar17[0xc];
      auVar19[0xd] = auVar17[0xd];
      auVar19[0xe] = auVar17[0xe];
      auVar19[0xf] = auVar17[0xf] ^ bVar18;
      *(longlong *)(iVar2 + 0x368) = auVar19._8_8_;
      *(undefined8 *)(iVar2 + 0x360) = auVar19._0_8_;
      goto LAB_10088828;
    }
    iVar4 = param_2 + param_4 * 0x20;
    *(uint *)(iVar4 + 0x350) = *(uint *)(param_2 + 0x70) | uVar13;
    *(undefined1 *)(iVar4 + 0x354) = uVar7;
    *(uint *)(iVar4 + 0x360) = uVar12 << 4;
    *(undefined4 *)(iVar4 + 0x36c) = 0xffffffff;
    puVar14 = (uint *)(iVar4 + 0x364);
    break;
  case 3:
    puVar14 = (uint *)(param_2 + param_4 * 0x20 + 0x350);
    uVar8 = FUN_100883e8(param_1,param_2,uVar12);
LAB_1008863c:
    *puVar14 = uVar8 | uVar13;
    *(undefined1 *)(puVar14 + 1) = uVar7;
    puVar14[4] = 0xffffffff;
    puVar14[5] = 0xffffffff;
    puVar14 = puVar14 + 6;
  }
  puVar14[0] = 0xffffffff;
  puVar14[1] = 0xffffffff;
LAB_10088828:
  if (iVar15 == 0) {
    return;
  }
  fVar20 = *(float *)(&DAT_10162314 + ((local_ac << 0x1c) >> 0x1c) * 4);
  uVar9 = FUN_10123278(param_6 >> 0x20 & 0xff);
  local_cc = (byte)(param_6 >> 0x20);
  uVar11 = uVar9 & 0xff;
  uStack_b8 = 0xffffffff;
  uStack_b4 = 0xffffffff;
  local_c0 = 0xffffffffffffffff;
  local_d0 = iVar15;
  uVar10 = FUN_10081210(fVar20,uVar9,auStack_80,param_2,uVar11);
  uVar9 = extraout_x11;
  if (uVar3 < 0x4000000) {
    if ((param_5 & 0xe000000) == 0) {
      local_f0 = (undefined1 *)(param_2 + param_4 * 0x20 + 0x350);
      if (extraout_w10 == 0) {
        puStack_ec = (undefined1 *)0x0;
        local_f8 = param_7 | 0x36;
        piStack_f4 = &local_d0;
        local_100 = param_2;
        uStack_fc = param_3;
        FUN_10122c20(&local_100,0x18);
      }
      else if (extraout_w10 == 1) {
        piStack_f4 = &local_d0;
        local_e8 = (undefined1 *)0x0;
        local_100 = param_2;
        uStack_fc = param_3;
        local_f8 = param_7;
        puStack_ec = local_f0;
        FUN_10122c20(&local_100,0x1c);
      }
      else {
        puStack_ec = auStack_80;
        local_e8 = (undefined1 *)0x0;
        local_f8 = param_7 | 0x38;
        piStack_f4 = &local_d0;
        local_100 = param_2;
        uStack_fc = param_3;
        FUN_10122c20(&local_100,0x1c);
      }
    }
    else {
      iVar15 = extraout_w12;
      if ((uVar3 + 0xfe000000 & 0xfeffffff) != 0) goto LAB_10088b9c;
      fVar16 = -0.5;
      if (uVar3 != 0x2000000) {
        fVar16 = 0.5;
      }
      FUN_10081210(fVar16 * fVar20,uVar10,auStack_a0,param_2,uVar11 & 0xffffffff);
      local_f0 = (undefined1 *)(param_2 + param_4 * 0x20 + 0x350);
      if (extraout_w10_01 == 0) {
        puStack_ec = auStack_a0;
        local_e8 = (undefined1 *)0x0;
        piStack_f4 = &local_d0;
        local_100 = param_2;
        uStack_fc = param_3;
        local_f8 = param_7;
        FUN_10122c20(&local_100,0x1c);
      }
      else {
        local_f8 = param_7 | 0x32;
        local_e8 = auStack_a0;
        uStack_e4 = 0;
        puStack_ec = auStack_80;
        piStack_f4 = &local_d0;
        local_100 = param_2;
        uStack_fc = param_3;
        FUN_10122c20(&local_100,0x20);
      }
    }
  }
  else if (uVar3 < 0x4000001) {
LAB_100889d4:
    uVar11 = uVar11 & 0xffffffff;
    fVar16 = -1.0;
    if (uVar3 != 0x4000000) {
      fVar16 = 1.0;
    }
    uVar10 = FUN_10081210(fVar16 * fVar20,uVar10,auStack_a0,param_2,uVar11);
    if (extraout_w10_00 == -1) {
      puStack_ec = auStack_a0;
      local_e8 = (undefined1 *)0x0;
      piStack_f4 = &local_d0;
      local_100 = param_2;
      uStack_fc = param_3;
      local_f8 = param_7;
      local_f0 = (undefined1 *)(param_2 + param_4 * 0x20 + 0x350);
      FUN_10122c20(&local_100,0x1c);
    }
    else {
      FUN_10081210(fVar20 + fVar20,uVar10,auStack_60,param_2,uVar11 & 0xffffffff);
      local_f8 = param_7 | 0x32;
      local_e8 = auStack_a0;
      uStack_e4 = 0;
      puStack_ec = auStack_60;
      piStack_f4 = &local_d0;
      local_100 = param_2;
      uStack_fc = param_3;
      local_f0 = extraout_w11_02;
      FUN_10122c20(&local_100,0x20);
    }
  }
  else if ((uVar3 + 0xf9000000 & 0xfeffffff) == 0) {
    puVar1 = (undefined1 *)(param_2 + param_4 * 0x20 + 0x350);
    if (extraout_w10 == -1) {
      puStack_ec = (undefined1 *)0x0;
      local_f8 = param_7 | 0x36;
      piStack_f4 = &local_d0;
      local_100 = param_2;
      uStack_fc = param_3;
      local_f0 = puVar1;
      FUN_10122c20(&local_100,0x18);
    }
    else if (extraout_w10 == 0) {
      piStack_f4 = &local_d0;
      local_e8 = (undefined1 *)0x0;
      local_100 = param_2;
      uStack_fc = param_3;
      local_f8 = param_7;
      local_f0 = puVar1;
      puStack_ec = puVar1;
      FUN_10122c20(&local_100,0x1c);
    }
    else {
      FUN_10081210(fVar20 + fVar20,uVar10,auStack_a0,param_2,uVar11 & 0xffffffff);
      puStack_ec = auStack_a0;
      local_e8 = (undefined1 *)0x0;
      local_f8 = param_7 | 0x38;
      piStack_f4 = &local_d0;
      local_100 = param_2;
      uStack_fc = param_3;
      local_f0 = extraout_w11_01;
      FUN_10122c20(&local_100,0x1c);
    }
  }
  else {
    if (uVar3 == 0x5000000) goto LAB_100889d4;
    iVar15 = extraout_w12;
    if (uVar3 != 0x6000000) goto LAB_10088b9c;
    if (extraout_w10 == 0) {
      FUN_10081210(0x3f800000,uVar10,auStack_a0,param_2,uVar11 & 0xffffffff);
      puStack_ec = auStack_a0;
      local_e8 = (undefined1 *)0x0;
      piStack_f4 = &local_d0;
      local_100 = param_2;
      uStack_fc = param_3;
      local_f8 = param_7;
      local_f0 = extraout_w11;
      FUN_10122c20(&local_100,0x1c);
    }
    else {
      FUN_10081210(fVar20,uVar10,auStack_a0,param_2,uVar11 & 0xffffffff);
      local_f8 = param_7 | 0x32;
      local_e8 = auStack_a0;
      uStack_e4 = 0;
      puStack_ec = auStack_a0;
      piStack_f4 = &local_d0;
      local_100 = param_2;
      uStack_fc = param_3;
      local_f0 = extraout_w11_00;
      FUN_10122c20(&local_100,0x20);
    }
  }
  uVar9 = (ulonglong)local_cc;
  iVar15 = local_d0;
LAB_10088b9c:
  *(int *)(param_2 + param_4 * 0x20 + 0x350) = iVar15;
  uVar7 = FUN_10123210(0xe4,uVar9 & 0xffffffff);
  *(undefined1 *)(extraout_w14 + 4) = uVar7;
  *(undefined8 *)(extraout_w14 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(extraout_w14 + 0x18) = 0xffffffffffffffff;
  return;
}


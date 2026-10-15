/*
 * FUN_1007e300 at 1007e300
 * undefined FUN_1007e300(void)
 * Address ranges: 1007e300-1007f57f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007e300(ulonglong param_1,int param_2,int param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  uint *puVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  undefined1 uVar18;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined4 *extraout_w11_01;
  uint uVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  int local_f0;
  int iStack_ec;
  int local_e8;
  undefined4 *puStack_e4;
  int local_e0;
  undefined4 *local_dc;
  undefined4 *local_d8;
  undefined4 *local_d4;
  undefined4 *local_d0;
  uint local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 *local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 *local_90;
  char local_8c;
  uint *local_88;
  code *local_84;
  uint *local_80;
  undefined1 local_7c;
  uint *local_78;
  uint *local_74;
  uint *local_70;
  char *local_6c;
  byte abStack_61 [33];
  
  uVar22 = param_1 & 0xffffffff;
  local_7c = param_4;
  FUN_1007dc80(param_1,param_3);
  FUN_1007a1e0(uVar22,param_2,param_3);
  iVar21 = (int)param_1;
  puVar1 = (undefined4 *)(param_3 + 0x14c);
  local_d4 = (undefined4 *)0xe4;
  local_d0 = (undefined4 *)0x12345678;
  local_d8 = (undefined4 *)*puVar1;
  local_e0 = 1;
  local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,0xf);
  puStack_e4 = (undefined4 *)0x36;
  local_f0 = iVar21;
  iStack_ec = param_3;
  local_e8 = param_2;
  local_84 = (code *)puVar1;
  FUN_10079a50(&local_f0,0x24);
  uVar10 = (uint)*(undefined8 *)(param_3 + 8);
  local_90 = (undefined4 *)(uVar10 & 0x3f);
  uVar10 = (uVar10 & 0x2a) >> 1 | (uVar10 & 0x15) << 1;
  lVar15 = LZCOUNT(((uVar10 & 0x33333333) >> 2 |
                   ((uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x3030303) << 2) << 4) << 0x18);
  uVar10 = (uint)lVar15;
  if ((1 - (uVar10 >> 5) & 0xff) == 0) {
    puVar14 = (undefined4 *)(param_3 + 0xc0);
  }
  else {
    pbVar2 = (byte *)((int)&local_90 + ((int)uVar10 >> 3));
    uVar20 = 0;
    *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar10 & 7)) ^ 0xff);
    local_78 = (uint *)(param_3 + 0xc0);
    local_74 = puVar1;
    local_70 = local_78;
    while( true ) {
      local_c8 = ((uint)lVar15 + 0x4f) * 0x10;
      local_c4 = 0x12345678;
      local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,(char)(1 << (ulonglong)(uVar20 & 3)));
      local_e0 = (uVar20 >> 2) + 0xd;
      local_d0 = (undefined4 *)*local_70;
      local_cc = 0xe4;
      local_d8 = (undefined4 *)*local_74;
      local_d4 = (undefined4 *)0xe4;
      puStack_e4 = (undefined4 *)0x11;
      local_f0 = iVar21;
      iStack_ec = param_3;
      local_e8 = param_2;
      FUN_10079a50(&local_f0,0x30);
      *(uint *)(param_3 + 0x44) = 1 << (ulonglong)((uint)lVar15 & 0x1f) | *(uint *)(param_3 + 0x44);
      uVar10 = ((uint)local_90 & 0xaaaaaaaa) >> 1 | ((uint)local_90 & 0x55555555) << 1;
      uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
      lVar15 = LZCOUNT(uVar10 >> 0x10 | uVar10 << 0x10);
      uVar10 = (uint)lVar15;
      puVar14 = local_78;
      if ((1 - (uVar10 >> 5) & 0xff) == 0) break;
      pbVar2 = (byte *)((int)&local_90 + ((int)uVar10 >> 3));
      uVar20 = uVar20 + 1;
      *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar10 & 7)) ^ 0xff);
    }
  }
  local_74 = (uint *)(param_3 + 0x19c);
  uVar10 = *(uint *)(*local_74 + 0x44);
  if ((((uVar10 >> 0x1a & 1) == 0) || ((uVar10 & 0x3000000) == 0)) || ((uVar10 >> 0x1b & 1) == 0)) {
    local_80 = (undefined4 *)0x0;
  }
  else {
    local_80 = (uint *)FUN_100ee580(param_3 + 0x18,1,1);
  }
  iVar23 = param_3 + 0x18;
  puStack_e4 = (undefined4 *)FUN_100ee580(iVar23,4,1);
  puVar1 = (undefined4 *)(param_3 + 0x154);
  *puVar1 = puStack_e4;
  local_dc = *(undefined4 **)local_84;
  local_c8 = 0;
  local_d0 = (undefined4 *)0xe4;
  local_cc = 0x170;
  local_d4 = (undefined4 *)*puVar14;
  local_d8 = (undefined4 *)0xe4;
  local_e8 = 0x11;
  local_e0 = 1;
  local_f0 = iVar23;
  iStack_ec = param_2;
  local_90 = local_dc;
  local_88 = puStack_e4;
  local_70 = puVar1;
  FUN_100ef510(&local_f0,0x2c);
  local_c8 = 0;
  local_d0 = (undefined4 *)0xe4;
  local_cc = 0x180;
  local_d4 = (undefined4 *)*puVar14;
  local_d8 = (undefined4 *)0xe4;
  local_e0 = 2;
  local_dc = local_90;
  local_e8 = 0x11;
  puStack_e4 = local_88;
  local_f0 = iVar23;
  iStack_ec = param_2;
  FUN_100ef510(&local_f0,0x2c);
  local_c8 = 0;
  local_d0 = (undefined4 *)0xe4;
  local_cc = 400;
  local_d4 = (undefined4 *)*puVar14;
  local_d8 = (undefined4 *)0xe4;
  local_e0 = 4;
  local_dc = local_90;
  local_e8 = 0x11;
  puStack_e4 = local_88;
  local_f0 = iVar23;
  iStack_ec = param_2;
  FUN_100ef510(&local_f0,0x2c);
  local_c8 = 0;
  local_d0 = (undefined4 *)0xe4;
  local_cc = 0x1a0;
  local_d4 = (undefined4 *)*puVar14;
  local_d8 = (undefined4 *)0xe4;
  local_e0 = 8;
  local_dc = local_90;
  local_e8 = 0x11;
  puStack_e4 = local_88;
  local_f0 = iVar23;
  iStack_ec = param_2;
  FUN_100ef510(&local_f0,0x2c);
  if (*(char *)(param_3 + 0x1a5) == '\0') {
    FUN_100ee638(iVar23,*(undefined4 *)(param_3 + 0x14c));
    *(undefined4 *)(param_3 + 0x14c) = 0;
  }
  iVar11 = FUN_100ef9e8(*(undefined4 *)(param_3 + 0x18));
  if ((iVar11 == 0x51) || (*(char *)(param_3 + 0x65) == '\0')) {
    local_8c = '\0';
  }
  else {
    local_8c = '\x01';
  }
  local_78 = (uint *)(param_3 + 0x154);
  local_84 = (code *)(param_3 + 0xc0);
  local_88 = (uint *)(param_3 + 0xc0);
  puVar17 = (undefined4 *)(param_3 + 0xc0);
  if (local_8c == '\0') {
    local_90 = (undefined4 *)0x0;
    local_c8 = 0x230;
    local_c4 = 0x12345678;
    local_d0 = (undefined4 *)*puVar17;
    local_dc._0_1_ = 1;
    local_e0 = 0;
    puStack_e4 = (undefined4 *)0x11;
    local_cc = 0xe4;
    local_d8 = (undefined4 *)*puVar1;
    local_d4 = (undefined4 *)0xe4;
    local_f0 = iVar21;
    iStack_ec = param_3;
    local_e8 = param_2;
    FUN_10079a50(&local_f0,0x30);
    local_c8 = 0x240;
    local_c4 = 0x12345678;
    local_e0 = 0;
    puStack_e4 = (undefined4 *)0x11;
    local_d0 = *(undefined4 **)local_84;
    local_cc = 0xe4;
    local_d8 = (undefined4 *)*puVar1;
    local_d4 = (undefined4 *)0xe4;
    local_dc._0_1_ = 2;
    local_f0 = iVar21;
    iStack_ec = param_3;
    local_e8 = param_2;
    FUN_10079a50(&local_f0,0x30);
    puVar14 = local_80;
    if (local_80 == (undefined4 *)0x0) {
      local_c8 = 0x260;
      local_c4 = 0x12345678;
      local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,8);
      local_cc = 0xe4;
      local_d4 = (undefined4 *)0xe4;
      local_e0 = 0;
      puStack_e4 = (undefined4 *)0x11;
      local_f0 = iVar21;
      iStack_ec = param_3;
      local_e8 = param_2;
      local_d8 = (undefined4 *)*puVar1;
      local_d0 = (undefined4 *)*local_88;
      FUN_10079a50(&local_f0,0x30);
    }
    else {
      local_c8 = 0;
      local_d0 = (undefined4 *)0xe4;
      local_cc = 0x260;
      local_d8 = (undefined4 *)0xe4;
      local_e0 = 1;
      local_e8 = 0x11;
      puStack_e4 = local_80;
      local_f0 = iVar23;
      iStack_ec = param_2;
      local_dc = (undefined4 *)*puVar1;
      local_d4 = (undefined4 *)*local_88;
      FUN_100ef510(&local_f0,0x2c);
      local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,8);
      puStack_e4 = (undefined4 *)0x36;
      local_d0 = (undefined4 *)0x12345678;
      local_d8 = puVar14;
      local_d4 = (undefined4 *)0x0;
      local_e0 = 0;
      local_f0 = iVar21;
      iStack_ec = param_3;
      local_e8 = param_2;
      FUN_10079a50(&local_f0,0x24);
    }
  }
  else {
    puVar12 = (undefined4 *)FUN_100ee580(iVar23,4,1);
    local_c8 = 0;
    local_d0 = (undefined4 *)0xe4;
    local_cc = 0x230;
    local_d4 = (undefined4 *)*puVar17;
    local_d8 = (undefined4 *)0xe4;
    local_dc = (undefined4 *)*puVar1;
    local_e0 = 1;
    local_e8 = 0x11;
    local_f0 = iVar23;
    iStack_ec = param_2;
    puStack_e4 = puVar12;
    local_90 = puVar12;
    FUN_100ef510(&local_f0,0x2c);
    local_cc = 0x240;
    local_c8 = 0;
    local_d4 = *(undefined4 **)local_84;
    local_d0 = (undefined4 *)0xe4;
    local_dc = (undefined4 *)*puVar1;
    local_d8 = (undefined4 *)0xe4;
    local_e0 = 2;
    local_e8 = 0x11;
    local_f0 = iVar23;
    iStack_ec = param_2;
    puStack_e4 = puVar12;
    FUN_100ef510(&local_f0,0x2c);
    local_cc = 0x260;
    local_c8 = 0;
    local_d4 = (undefined4 *)*local_88;
    local_d0 = (undefined4 *)0xe4;
    local_dc = (undefined4 *)*puVar1;
    local_d8 = (undefined4 *)0xe4;
    local_e0 = 8;
    local_e8 = 0x11;
    local_f0 = iVar23;
    iStack_ec = param_2;
    puStack_e4 = puVar12;
    FUN_100ef510(&local_f0,0x2c);
    if (local_80 != (undefined4 *)0x0) {
      local_e0 = 1;
      local_d8 = (undefined4 *)0xff;
      local_d4 = (undefined4 *)0x0;
      local_e8 = 0x36;
      puStack_e4 = local_80;
      local_f0 = iVar23;
      iStack_ec = param_2;
      local_dc = puVar12;
      FUN_100ef510(&local_f0,0x20);
    }
  }
  local_e0 = 0;
  local_c8 = 0x250;
  local_c4 = 0x12345678;
  local_d0 = *(undefined4 **)(param_3 + 0xc0);
  local_cc = 0xe4;
  local_d8 = *(undefined4 **)(param_3 + 0x154);
  local_d4 = (undefined4 *)0xe4;
  local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,4);
  puStack_e4 = (undefined4 *)0x11;
  local_f0 = iVar21;
  iStack_ec = param_3;
  local_e8 = param_2;
  FUN_10079a50(&local_f0,0x30);
  uVar10 = *(uint *)(param_3 + 0x154);
  if (*(char *)(param_3 + 0x1a7) == '\0') {
    FUN_100ee638(param_3 + 0x18,uVar10);
    *local_78 = 0;
  }
  else if (uVar10 != 0) {
    uVar20 = uVar10 >> 0x12 & 3;
    pbVar2 = (byte *)(*(int *)(param_3 + 0x48) + (uVar10 & 0xff));
    *pbVar2 = *pbVar2 & ((byte)((1 << (ulonglong)(uVar10 >> 0x14 & 7)) + 0xff << (ulonglong)uVar20)
                        ^ 0xff);
    pbVar2 = (byte *)(*(int *)(param_3 + 0x48) + (uVar10 & 0xff));
    *pbVar2 = (byte)(7 << (ulonglong)uVar20) | *pbVar2;
  }
  if (local_8c != '\0') {
    uVar13 = FUN_100ee580(iVar23,2,0);
    puVar1 = local_90;
    local_cc = 0x30;
    local_c8 = 0;
    local_d4 = *(undefined4 **)(param_3 + 200);
    local_d0 = (undefined4 *)0x1e4;
    local_d8 = (undefined4 *)0xff;
    local_e0 = 3;
    local_dc = local_90;
    local_e8 = 0xe;
    local_f0 = iVar23;
    iStack_ec = param_2;
    puStack_e4 = (undefined4 *)uVar13;
    FUN_100ef510(&local_f0,0x2c);
    local_d0 = *(undefined4 **)(param_3 + 0xac);
    local_b0 = 0x12345678;
    local_b8 = puVar1;
    uStack_b4 = 0x154;
    local_c4 = 0xbf800000;
    local_cc = 0x1e4;
    local_dc._0_1_ = 3;
    puStack_e4 = (undefined4 *)0x32;
    local_c0 = 0;
    uStack_bc = 0;
    local_c8 = 0x3f800000;
    local_d4 = (undefined4 *)0x154;
    local_e0 = 0;
    local_f0 = iVar21;
    iStack_ec = param_3;
    local_e8 = param_2;
    local_d8 = (undefined4 *)uVar13;
    FUN_10079a50(&local_f0,0x44);
    local_d8 = puVar1;
    local_d4 = (undefined4 *)0xff;
    local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,8);
    puStack_e4 = (undefined4 *)0x36;
    local_d0 = (undefined4 *)0x12345678;
    local_e0 = 0;
    local_f0 = iVar21;
    iStack_ec = param_3;
    local_e8 = param_2;
    FUN_10079a50(&local_f0,0x24);
    FUN_100ee638(iVar23,uVar13);
  }
  FUN_100ee638(iVar23,local_90);
  uVar10 = *(uint *)(*(int *)(param_3 + 0x19c) + 0x44);
  if ((uVar10 >> 0x1a & 1) == 0) {
    if ((*(uint *)(param_3 + 0x198) >> 1 & 1) == 0) {
      if (*(char *)(param_3 + 0x1ac) == '\0') {
        local_cc = 0x12345678;
        local_d4 = (undefined4 *)0xe4;
        local_d0 = (undefined4 *)&DAT_3f800000;
        local_d8 = *(undefined4 **)(param_3 + 0xa8);
        local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,8);
        local_e0 = 3;
        puStack_e4 = (undefined4 *)0x36;
        local_f0 = iVar21;
        iStack_ec = param_3;
        local_e8 = param_2;
        FUN_10079a50(&local_f0,0x28);
      }
    }
    else {
      local_d8 = (undefined4 *)FUN_1007e130(param_1 & 0xffffffff,param_2,param_3);
      local_d0 = (undefined4 *)0x12345678;
      local_d4 = (undefined4 *)0xff;
      local_e0 = 4;
      local_dc._0_1_ = 1;
      puStack_e4 = (undefined4 *)0x36;
      local_f0 = iVar21;
      iStack_ec = param_3;
      local_e8 = param_2;
      FUN_10079a50(&local_f0,0x24);
      local_d8 = (undefined4 *)FUN_1007e130(param_1 & 0xffffffff,param_2,param_3);
      local_d0 = (undefined4 *)0x12345678;
      local_d4 = (undefined4 *)0xff;
      local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,8);
      local_e0 = 3;
      puStack_e4 = (undefined4 *)0x36;
      local_f0 = iVar21;
      iStack_ec = param_3;
      local_e8 = param_2;
      FUN_10079a50(&local_f0,0x24);
      *(byte *)(param_3 + 0x1ab) = *(byte *)(param_3 + 0x1ab) | 1;
    }
    goto LAB_1007f068;
  }
  puVar1 = *(undefined4 **)(param_3 + 0x154);
  local_84 = (code *)CONCAT31(local_84._1_3_,0xaa);
  puVar14 = (undefined4 *)0x0;
  local_90 = (undefined4 *)0x8000000;
  local_88 = puVar1;
  if ((uVar10 >> 0x18 & 3) - 1 < 3) {
    puVar14 = local_80;
    if (local_80 == (undefined4 *)0x0) {
      puVar14 = (uint *)FUN_100ee580(iVar23,1,1);
      puVar1 = (undefined4 *)*local_70;
    }
    if ((*(uint *)(*local_74 + 0x44) >> 0x1b & 1) == 0) {
      if ((*(uint *)(*local_74 + 0x44) >> 0x1c & 1) != 0) {
        local_d0 = (undefined4 *)&DAT_000000a4;
        local_cc = 0;
        local_d8 = (undefined4 *)0xa4;
        local_e8 = 0x10;
        local_84 = (code *)((uint)local_84._1_3_ << 8);
        local_90 = (undefined4 *)0x0;
        local_e0 = 1;
        local_f0 = iVar23;
        iStack_ec = param_2;
        puStack_e4 = puVar14;
        local_dc = puVar1;
        local_d4 = puVar1;
        local_88 = puVar14;
        FUN_100ef510(&local_f0,0x28);
        local_e8 = 0x4b;
        local_d8 = (undefined4 *)0x0;
        local_d4 = (undefined4 *)0x0;
        local_e0 = 1;
        local_f0 = iVar23;
        iStack_ec = param_2;
        puStack_e4 = puVar14;
        local_dc = puVar14;
        FUN_100ef510(&local_f0,0x20);
      }
    }
    else {
      local_84 = (code *)((uint)local_84._1_3_ << 8);
      local_90 = (undefined4 *)0x0;
      local_88 = local_80;
    }
  }
  puVar9 = local_74;
  switch(*(byte *)(*local_74 + 0x47) & 3) {
  default:
    if ((*(uint *)(param_3 + 0x198) >> 1 & 1) == 0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      puVar14 = (uint *)FUN_1007e130(uVar22,param_2,param_3);
    }
    uVar13 = 0xff;
    goto LAB_1007edc0;
  case 1:
  case 2:
    local_c8 = 0;
    local_d0 = (undefined4 *)0x0;
    local_cc = 0x68;
    local_d4 = *(undefined4 **)(param_3 + 0xcc);
    local_d8 = (undefined4 *)((uint)local_84 & 0xff);
    local_dc = (undefined4 *)((uint)local_90 | (uint)local_88);
    local_e8 = 0x38;
    local_e0 = 1;
    local_f0 = iVar23;
    iStack_ec = param_2;
    puStack_e4 = puVar14;
    FUN_100ef510(&local_f0,0x2c);
    if ((*(uint *)(*puVar9 + 0x44) & 0x3000000) == 0x2000000) {
      local_d0 = (undefined4 *)0x0;
      local_cc = 0;
      local_e8 = 0x38;
      local_d8 = (undefined4 *)0x0;
      local_e0 = 1;
      local_f0 = iVar23;
      iStack_ec = param_2;
      puStack_e4 = puVar14;
      local_dc = puVar14;
      local_d4 = puVar14;
      FUN_100ef510(&local_f0,0x28);
    }
    local_c8 = 0;
    local_d0 = (undefined4 *)&DAT_000000e4;
    local_d4 = *(undefined4 **)(param_3 + 0xa8);
    local_e0 = 1;
    local_cc = 0x3fb8aa3b;
    local_d8 = (undefined4 *)0x0;
    local_e8 = 0x38;
    local_f0 = iVar23;
    iStack_ec = param_2;
    puStack_e4 = puVar14;
    local_dc = puVar14;
    FUN_100ef510(&local_f0,0x2c);
    local_e8 = 0x19;
    local_d8 = (undefined4 *)0x0;
    local_d4 = (undefined4 *)0x0;
    local_e0 = 1;
    local_f0 = iVar23;
    iStack_ec = param_2;
    puStack_e4 = puVar14;
    local_dc = puVar14;
    FUN_100ef510(&local_f0,0x20);
    if (*(int *)(param_3 + 0x18) == 0x10040) {
      local_c8 = 0;
      local_d8 = (undefined4 *)&DAT_000000e4;
      local_dc = *(undefined4 **)(param_3 + 0xa8);
      local_cc = 0;
      local_d4 = (undefined4 *)0x3f800000;
      local_e0 = 1;
      local_e8 = 0xe;
      local_f0 = iVar23;
      iStack_ec = param_2;
      puStack_e4 = puVar14;
      local_d0 = puVar14;
      FUN_100ef510(&local_f0,0x2c);
    }
    else {
      local_d8 = (undefined4 *)0x0;
      local_d4 = (undefined4 *)0x0;
      local_e8 = 0x81;
      local_e0 = 1;
      local_f0 = iVar23;
      iStack_ec = param_2;
      puStack_e4 = puVar14;
      local_dc = puVar14;
      FUN_100ef510(&local_f0,0x20);
    }
    break;
  case 3:
    local_c8 = 0;
    local_e8 = 0;
    local_d0 = (undefined4 *)((uint)local_90 | (uint)local_88 | 0x80000000);
    local_cc = (uint)local_84 & 0xff;
    local_d8 = (undefined4 *)0x0;
    local_d4 = (undefined4 *)0x64;
    local_dc = *(undefined4 **)(param_3 + 0xcc);
    local_e0 = 1;
    local_f0 = iVar23;
    iStack_ec = param_2;
    puStack_e4 = puVar14;
    FUN_100ef510(&local_f0,0x2c);
    local_d0 = (undefined4 *)0x0;
    local_cc = 0x5c;
    local_d4 = *(undefined4 **)(param_3 + 0xcc);
    local_c8 = 0;
    local_e0 = 1;
    local_d8 = (undefined4 *)0x0;
    local_e8 = 0xe;
    local_f0 = iVar23;
    iStack_ec = param_2;
    puStack_e4 = puVar14;
    local_dc = puVar14;
    FUN_100ef510(&local_f0,0x2c);
  }
  uVar13 = 0;
LAB_1007edc0:
  if (puVar14 == (undefined4 *)0x0) {
    local_cc = 0x12345678;
    local_d4 = (undefined4 *)0xe4;
    local_d0 = (undefined4 *)&DAT_3f800000;
    local_d8 = *(undefined4 **)(param_3 + 0xa8);
    local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,8);
    local_e0 = 3;
    puStack_e4 = (undefined4 *)0x36;
    local_f0 = iVar21;
    iStack_ec = param_3;
    local_e8 = param_2;
    FUN_10079a50(&local_f0,0x28);
LAB_1007ef30:
    if (puVar14 != *(undefined4 **)(param_3 + 0x194)) {
      FUN_100ee638(iVar23,puVar14);
    }
  }
  else {
    if (*(char *)(param_3 + 100) == '\0') {
      local_d0 = (undefined4 *)0x12345678;
      local_e0 = 4;
      puStack_e4 = (undefined4 *)0x2036;
      local_dc._0_1_ = 1;
      local_f0 = iVar21;
      iStack_ec = param_3;
      local_e8 = param_2;
      local_d8 = puVar14;
      local_d4 = (undefined4 *)uVar13;
      FUN_10079a50(&local_f0,0x24);
      local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,8);
      local_e0 = 3;
      puStack_e4 = (undefined4 *)0x2036;
      local_d0 = (undefined4 *)0x12345678;
      local_f0 = iVar21;
      iStack_ec = param_3;
      local_e8 = param_2;
      local_d8 = puVar14;
      local_d4 = (undefined4 *)uVar13;
      FUN_10079a50(&local_f0,0x24);
    }
    else {
      puStack_e4 = (undefined4 *)FUN_100ee580(iVar23,1,1);
      local_d4 = (undefined4 *)0x0;
      local_e8 = 0x2036;
      local_e0 = 1;
      local_f0 = iVar23;
      iStack_ec = param_2;
      local_dc = puVar14;
      local_d8 = (undefined4 *)uVar13;
      local_90 = puStack_e4;
      FUN_100ef510(&local_f0,0x20);
      local_d0 = (undefined4 *)0x12345678;
      local_dc._0_1_ = 1;
      local_e0 = 4;
      local_d8 = local_90;
      local_d4 = (undefined4 *)0x0;
      puStack_e4 = (undefined4 *)0x36;
      local_f0 = iVar21;
      iStack_ec = param_3;
      local_e8 = param_2;
      FUN_10079a50(&local_f0,0x24);
      local_d0 = (undefined4 *)0x12345678;
      local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,8);
      local_e0 = 3;
      local_d8 = local_90;
      local_d4 = (undefined4 *)0x0;
      puStack_e4 = (undefined4 *)0x36;
      local_f0 = iVar21;
      iStack_ec = param_3;
      local_e8 = param_2;
      FUN_10079a50(&local_f0,0x24);
      FUN_100ee638(iVar23,local_90);
    }
    *(byte *)(param_3 + 0x1ab) = *(byte *)(param_3 + 0x1ab) | 1;
    if (((uint)puVar14 & 0x3f00) == 0) goto LAB_1007ef30;
  }
  if (local_88 != (undefined4 *)*local_70) {
    FUN_100ee638(iVar23,local_88);
  }
LAB_1007f068:
  uVar16 = FUN_100ee638(iVar23,local_80);
  FUN_10079b40(uVar16,param_3,2);
  local_84 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((*(uint *)(param_3 + 0x198) >> 0x13 & 1) != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    local_d8 = (undefined4 *)(*extraout_w11)(uVar22,param_2,param_3,4,1);
    local_d0 = (undefined4 *)0x12345678;
    local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,0xe);
    local_e0 = 4;
    local_d4 = (undefined4 *)0x0;
    puStack_e4 = (undefined4 *)0x36;
    local_f0 = iVar21;
    iStack_ec = param_3;
    local_e8 = param_2;
    FUN_10079a50(&local_f0,0x24);
    *(byte *)(param_3 + 0x1ab) = *(byte *)(param_3 + 0x1ab) | 0xe;
  }
  puVar1 = (undefined4 *)(param_3 + 0xac);
  if (*(char *)(param_3 + 0x1ab) != '\x0f') {
    local_dc = (undefined4 *)(CONCAT31(local_dc._1_3_,*(char *)(param_3 + 0x1ab)) ^ 0xf);
    local_c4 = 0;
    local_c0 = 0x12345678;
    local_d4 = (undefined4 *)0xe4;
    local_d0 = (undefined4 *)&DAT_3f800000;
    local_d8 = (undefined4 *)*puVar1;
    local_e0 = 4;
    local_cc = 0;
    local_c8 = 0;
    puStack_e4 = (undefined4 *)0x36;
    local_f0 = iVar21;
    iStack_ec = param_3;
    local_e8 = param_2;
    FUN_10079a50(&local_f0,0x34);
  }
  local_6c = (char *)(param_3 + 0x1ad);
  if (*local_6c == '\0') {
    if ((*(uint *)(param_3 + 0x198) & 1) == 0) {
      local_c4 = 0x3f800000;
      local_c0 = 0x12345678;
      local_d4 = (undefined4 *)0xe4;
      local_d0 = (undefined4 *)0x3f800000;
      local_d8 = (undefined4 *)*puVar1;
      local_cc = 0x3f800000;
      local_c8 = 0x3f800000;
      local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,0xf);
      local_e0 = 2;
      puStack_e4 = (undefined4 *)0x36;
      local_f0 = iVar21;
      iStack_ec = param_3;
      local_e8 = param_2;
      FUN_10079a50(&local_f0,0x34);
    }
    else {
      local_d8 = (undefined4 *)FUN_1007e0b8(uVar22,param_2,param_3);
      local_d0 = (undefined4 *)0x12345678;
      local_d4 = (undefined4 *)0xe4;
      local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,0xf);
      local_e0 = 2;
      puStack_e4 = (undefined4 *)0x36;
      local_f0 = iVar21;
      iStack_ec = param_3;
      local_e8 = param_2;
      FUN_10079a50(&local_f0,0x24);
    }
    if ((*(uint *)(param_3 + 0x198) >> 1 & 1) == 0) {
      local_cc = 0;
      local_c8 = 0;
      local_c4 = 0x3f800000;
      local_c0 = 0x12345678;
      uVar18 = 0xf;
      if (*(char *)(param_3 + 0x1ac) == '\0') {
        uVar18 = 7;
      }
      local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,uVar18);
      local_d4 = (undefined4 *)0xe4;
      local_d0 = (undefined4 *)0x0;
      local_d8 = (undefined4 *)*puVar1;
      local_e0 = 3;
      puStack_e4 = (undefined4 *)0x36;
      local_f0 = iVar21;
      iStack_ec = param_3;
      local_e8 = param_2;
      FUN_10079a50(&local_f0,0x34);
    }
    else {
      local_d8 = (undefined4 *)FUN_1007e130(uVar22,param_2,param_3);
      local_d0 = (undefined4 *)0x12345678;
      local_d4 = (undefined4 *)0xa4;
      local_e0 = 3;
      local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,7);
      puStack_e4 = (undefined4 *)0x36;
      local_f0 = iVar21;
      iStack_ec = param_3;
      local_e8 = param_2;
      FUN_10079a50(&local_f0,0x24);
    }
    FUN_1007e220(uVar22,param_3);
    FUN_1007e290(uVar22,param_3);
  }
  puVar14 = *(uint **)(param_3 + 0x19c);
  uVar10 = 0;
  abStack_61[9] = 0;
  abStack_61[10] = 0;
  abStack_61[0xb] = 0;
  abStack_61[0xc] = 0;
  abStack_61[0xd] = 0;
  abStack_61[0xe] = 0;
  abStack_61[0xf] = 0;
  abStack_61[0x10] = 0;
  abStack_61[1] = 0;
  abStack_61[2] = 0;
  abStack_61[3] = 0;
  abStack_61[4] = 0;
  abStack_61[5] = 0;
  abStack_61[6] = 0;
  abStack_61[7] = 0;
  abStack_61[8] = 0;
  abStack_61[0x11] = 0;
  abStack_61[0x12] = 0;
  abStack_61[0x13] = 0;
  abStack_61[0x14] = 0;
  abStack_61[0x15] = 0;
  abStack_61[0x16] = 0;
  abStack_61[0x17] = 0;
  abStack_61[0x18] = 0;
  uVar20 = *puVar14;
  uVar3 = puVar14[4];
  uVar4 = puVar14[5];
  uVar5 = puVar14[8];
  uVar6 = puVar14[3];
  do {
    uVar19 = (uVar5 & uVar6) >> (ulonglong)(uVar10 * 3 & 0x1f) & 7;
    if (uVar19 == 1) {
      uVar19 = 9;
    }
    else if (uVar19 == 2) {
      uVar19 = 8;
    }
    else if (uVar19 == 3) {
      uVar19 = 0xb;
    }
    else {
      uVar19 = (uVar4 & uVar3 & uVar20) >> (ulonglong)(uVar10 * 3 & 0x1f) & 7;
    }
    uVar8 = uVar10 & 0x1f;
    uVar10 = uVar10 + 1;
    abStack_61[uVar19 + 1] = (byte)(1 << (ulonglong)uVar8) | abStack_61[uVar19 + 1];
    abStack_61[uVar19 + 0xd] = abStack_61[uVar19 + 0xd] + 1;
  } while (uVar10 < 8);
  local_88 = (uint *)(param_3 + 0x188);
  local_78 = (uint *)(param_3 + 0x180);
  iVar21 = 0xc;
  local_80 = local_88;
  local_74 = local_88;
  local_70 = local_78;
  do {
    while( true ) {
      local_90 = (undefined4 *)(uint)abStack_61[iVar21];
      uVar10 = ((uint)local_90 & 0xaaaaaaaa) >> 1 | ((uint)local_90 & 0x55555555) << 1;
      uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
      lVar15 = LZCOUNT((uVar10 >> 4 | (uVar10 & 0xf0f0f0f) << 4) << 0x18);
      uVar10 = (uint)lVar15;
      if ((1 - (uVar10 >> 5) & 0xff) != 0) {
        pbVar2 = (byte *)((int)&local_90 + ((int)uVar10 >> 3));
        *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar10 & 7)) ^ 0xff);
        bVar7 = abStack_61[iVar21 + 0xc];
        while( true ) {
          FUN_1007b468(uVar22,param_2,param_3,lVar15,1 < bVar7);
          uVar10 = ((uint)local_90 & 0xaaaaaaaa) >> 1 | ((uint)local_90 & 0x55555555) << 1;
          uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
          lVar15 = LZCOUNT(uVar10 >> 0x10 | uVar10 << 0x10);
          uVar10 = (uint)lVar15;
          if ((1 - (uVar10 >> 5) & 0xff) == 0) break;
          pbVar2 = (byte *)((int)&local_90 + ((int)uVar10 >> 3));
          *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar10 & 7)) ^ 0xff);
        }
      }
      uVar10 = *local_70;
      if (((uVar10 & 0x3f00) == 0) && (uVar10 != *local_74)) {
        FUN_100ee638(iVar23,uVar10);
      }
      *local_78 = 0;
      (*local_84)();
      uVar16 = (*extraout_w11_00)(param_1 & 0xffffffff,param_3,*local_88);
      *local_80 = 0;
      if (iVar21 != 10) break;
      puVar1 = (undefined4 *)(param_3 + 0x158);
LAB_1007f4e8:
      FUN_100ee638(iVar23,*puVar1);
      *extraout_w11_01 = 0;
      iVar21 = iVar21 + -1;
    }
    if (iVar21 == 0xc) {
      puVar1 = (undefined4 *)(param_3 + 0x15c);
      goto LAB_1007f4e8;
    }
    iVar21 = iVar21 + -1;
    if (iVar21 == 0) {
      FUN_10079b40(uVar16,param_3,1);
      if (*local_6c != '\0') {
        FUN_1007c3a8(param_1 & 0xffffffff,param_2,param_3,local_7c);
        FUN_1007e220(param_1 & 0xffffffff,param_3);
        uVar16 = FUN_1007e290(param_1 & 0xffffffff,param_3);
        FUN_10079b40(uVar16,param_3,4);
      }
      return;
    }
  } while( true );
}


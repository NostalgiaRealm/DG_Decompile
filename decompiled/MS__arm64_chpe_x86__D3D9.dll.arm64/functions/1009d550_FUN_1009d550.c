/*
 * FUN_1009d550 at 1009d550
 * undefined FUN_1009d550(void)
 * Address ranges: 1009d550-1009e7fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009d550(ulonglong param_1,int param_2,int param_3,undefined1 param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  uint *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  undefined1 uVar17;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined4 *puVar18;
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
  FUN_1009ceb0(param_1,param_3);
  FUN_100992f0(uVar22,param_2,param_3);
  iVar21 = (int)param_1;
  puVar18 = (undefined4 *)(param_3 + 0x14c);
  local_d4 = (undefined4 *)0xe4;
  local_d0 = (undefined4 *)0x12345678;
  local_d8 = (undefined4 *)*puVar18;
  local_e0 = 1;
  local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,0xf);
  puStack_e4 = (undefined4 *)0x36;
  local_f0 = iVar21;
  iStack_ec = param_3;
  local_e8 = param_2;
  local_84 = (code *)puVar18;
  FUN_10098b60(&local_f0,0x24);
  uVar9 = (uint)*(undefined8 *)(param_3 + 8);
  local_90 = (undefined4 *)(uVar9 & 0x3f);
  uVar9 = (uVar9 & 0x2a) >> 1 | (uVar9 & 0x15) << 1;
  lVar14 = LZCOUNT(((uVar9 & 0x33333333) >> 2 |
                   ((uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x3030303) << 2) << 4) << 0x18);
  uVar9 = (uint)lVar14;
  if ((1 - (uVar9 >> 5) & 0xff) == 0) {
    puVar13 = (undefined4 *)(param_3 + 0xc0);
  }
  else {
    pbVar1 = (byte *)((int)&local_90 + ((int)uVar9 >> 3));
    uVar20 = 0;
    *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar9 & 7)) ^ 0xff);
    local_78 = (uint *)(param_3 + 0xc0);
    local_74 = puVar18;
    local_70 = local_78;
    while( true ) {
      local_c8 = ((uint)lVar14 + 0x4f) * 0x10;
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
      FUN_10098b60(&local_f0,0x30);
      *(uint *)(param_3 + 0x44) = 1 << (ulonglong)((uint)lVar14 & 0x1f) | *(uint *)(param_3 + 0x44);
      uVar9 = ((uint)local_90 & 0xaaaaaaaa) >> 1 | ((uint)local_90 & 0x55555555) << 1;
      uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
      lVar14 = LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
      uVar9 = (uint)lVar14;
      puVar13 = local_78;
      if ((1 - (uVar9 >> 5) & 0xff) == 0) break;
      pbVar1 = (byte *)((int)&local_90 + ((int)uVar9 >> 3));
      uVar20 = uVar20 + 1;
      *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar9 & 7)) ^ 0xff);
    }
  }
  local_74 = (uint *)(param_3 + 0x1a0);
  uVar9 = *(uint *)(*local_74 + 0x44);
  if ((((uVar9 >> 0x1a & 1) == 0) || ((uVar9 & 0x3000000) == 0)) || ((uVar9 >> 0x1b & 1) == 0)) {
    local_80 = (undefined4 *)0x0;
  }
  else {
    local_80 = (uint *)FUN_10121590(param_3 + 0x18,1,1);
  }
  iVar23 = param_3 + 0x18;
  puStack_e4 = (undefined4 *)FUN_10121590(iVar23,4,1);
  puVar18 = (undefined4 *)(param_3 + 0x154);
  *puVar18 = puStack_e4;
  local_dc = *(undefined4 **)local_84;
  local_c8 = 0;
  local_d0 = (undefined4 *)0xe4;
  local_cc = 0x170;
  local_d4 = (undefined4 *)*puVar13;
  local_d8 = (undefined4 *)0xe4;
  local_e8 = 0x11;
  local_e0 = 1;
  local_f0 = iVar23;
  iStack_ec = param_2;
  local_90 = local_dc;
  local_88 = puStack_e4;
  local_70 = puVar18;
  FUN_10122a88(&local_f0,0x2c);
  local_c8 = 0;
  local_d0 = (undefined4 *)0xe4;
  local_cc = 0x180;
  local_d4 = (undefined4 *)*puVar13;
  local_d8 = (undefined4 *)0xe4;
  local_e0 = 2;
  local_dc = local_90;
  local_e8 = 0x11;
  puStack_e4 = local_88;
  local_f0 = iVar23;
  iStack_ec = param_2;
  FUN_10122a88(&local_f0,0x2c);
  local_c8 = 0;
  local_d0 = (undefined4 *)0xe4;
  local_cc = 400;
  local_d4 = (undefined4 *)*puVar13;
  local_d8 = (undefined4 *)0xe4;
  local_e0 = 4;
  local_dc = local_90;
  local_e8 = 0x11;
  puStack_e4 = local_88;
  local_f0 = iVar23;
  iStack_ec = param_2;
  FUN_10122a88(&local_f0,0x2c);
  local_c8 = 0;
  local_d0 = (undefined4 *)0xe4;
  local_cc = 0x1a0;
  local_d4 = (undefined4 *)*puVar13;
  local_d8 = (undefined4 *)0xe4;
  local_e0 = 8;
  local_dc = local_90;
  local_e8 = 0x11;
  puStack_e4 = local_88;
  local_f0 = iVar23;
  iStack_ec = param_2;
  FUN_10122a88(&local_f0,0x2c);
  if (*(char *)(param_3 + 0x1a9) == '\0') {
    FUN_10121648(iVar23,*(undefined4 *)(param_3 + 0x14c));
    *(undefined4 *)(param_3 + 0x14c) = 0;
  }
  iVar10 = FUN_10122f60(*(undefined4 *)(param_3 + 0x18));
  if ((iVar10 == 0x51) || (*(char *)(param_3 + 0x65) == '\0')) {
    local_8c = '\0';
  }
  else {
    local_8c = '\x01';
  }
  local_78 = (uint *)(param_3 + 0x154);
  local_84 = (code *)(param_3 + 0xc0);
  local_88 = (uint *)(param_3 + 0xc0);
  puVar16 = (undefined4 *)(param_3 + 0xc0);
  if (local_8c == '\0') {
    local_90 = (undefined4 *)0x0;
    local_c8 = 0x230;
    local_c4 = 0x12345678;
    local_d0 = (undefined4 *)*puVar16;
    local_dc._0_1_ = 1;
    local_e0 = 0;
    puStack_e4 = (undefined4 *)0x11;
    local_cc = 0xe4;
    local_d8 = (undefined4 *)*puVar18;
    local_d4 = (undefined4 *)0xe4;
    local_f0 = iVar21;
    iStack_ec = param_3;
    local_e8 = param_2;
    FUN_10098b60(&local_f0,0x30);
    local_c8 = 0x240;
    local_c4 = 0x12345678;
    local_e0 = 0;
    puStack_e4 = (undefined4 *)0x11;
    local_d0 = *(undefined4 **)local_84;
    local_cc = 0xe4;
    local_d8 = (undefined4 *)*puVar18;
    local_d4 = (undefined4 *)0xe4;
    local_dc._0_1_ = 2;
    local_f0 = iVar21;
    iStack_ec = param_3;
    local_e8 = param_2;
    FUN_10098b60(&local_f0,0x30);
    puVar13 = local_80;
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
      local_d8 = (undefined4 *)*puVar18;
      local_d0 = (undefined4 *)*local_88;
      FUN_10098b60(&local_f0,0x30);
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
      local_dc = (undefined4 *)*puVar18;
      local_d4 = (undefined4 *)*local_88;
      FUN_10122a88(&local_f0,0x2c);
      local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,8);
      puStack_e4 = (undefined4 *)0x36;
      local_d0 = (undefined4 *)0x12345678;
      local_d8 = puVar13;
      local_d4 = (undefined4 *)0x0;
      local_e0 = 0;
      local_f0 = iVar21;
      iStack_ec = param_3;
      local_e8 = param_2;
      FUN_10098b60(&local_f0,0x24);
    }
  }
  else {
    puVar11 = (undefined4 *)FUN_10121590(iVar23,4,1);
    local_c8 = 0;
    local_d0 = (undefined4 *)0xe4;
    local_cc = 0x230;
    local_d4 = (undefined4 *)*puVar16;
    local_d8 = (undefined4 *)0xe4;
    local_dc = (undefined4 *)*puVar18;
    local_e0 = 1;
    local_e8 = 0x11;
    local_f0 = iVar23;
    iStack_ec = param_2;
    puStack_e4 = puVar11;
    local_90 = puVar11;
    FUN_10122a88(&local_f0,0x2c);
    local_cc = 0x240;
    local_c8 = 0;
    local_d4 = *(undefined4 **)local_84;
    local_d0 = (undefined4 *)0xe4;
    local_dc = (undefined4 *)*puVar18;
    local_d8 = (undefined4 *)0xe4;
    local_e0 = 2;
    local_e8 = 0x11;
    local_f0 = iVar23;
    iStack_ec = param_2;
    puStack_e4 = puVar11;
    FUN_10122a88(&local_f0,0x2c);
    local_cc = 0x260;
    local_c8 = 0;
    local_d4 = (undefined4 *)*local_88;
    local_d0 = (undefined4 *)0xe4;
    local_dc = (undefined4 *)*puVar18;
    local_d8 = (undefined4 *)0xe4;
    local_e0 = 8;
    local_e8 = 0x11;
    local_f0 = iVar23;
    iStack_ec = param_2;
    puStack_e4 = puVar11;
    FUN_10122a88(&local_f0,0x2c);
    if (local_80 != (undefined4 *)0x0) {
      local_e0 = 1;
      local_d8 = (undefined4 *)0xff;
      local_d4 = (undefined4 *)0x0;
      local_e8 = 0x36;
      puStack_e4 = local_80;
      local_f0 = iVar23;
      iStack_ec = param_2;
      local_dc = puVar11;
      FUN_10122a88(&local_f0,0x20);
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
  FUN_10098b60(&local_f0,0x30);
  uVar9 = *(uint *)(param_3 + 0x154);
  if (*(char *)(param_3 + 0x1ab) == '\0') {
    FUN_10121648(param_3 + 0x18,uVar9);
    *local_78 = 0;
  }
  else if (uVar9 != 0) {
    uVar20 = uVar9 >> 0x12 & 3;
    pbVar1 = (byte *)(*(int *)(param_3 + 0x48) + (uVar9 & 0xff));
    *pbVar1 = *pbVar1 & ((byte)((1 << (ulonglong)(uVar9 >> 0x14 & 7)) + 0xff << (ulonglong)uVar20) ^
                        0xff);
    pbVar1 = (byte *)(*(int *)(param_3 + 0x48) + (uVar9 & 0xff));
    *pbVar1 = (byte)(7 << (ulonglong)uVar20) | *pbVar1;
  }
  if (local_8c != '\0') {
    uVar12 = FUN_10121590(iVar23,2,0);
    puVar18 = local_90;
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
    puStack_e4 = (undefined4 *)uVar12;
    FUN_10122a88(&local_f0,0x2c);
    local_d0 = *(undefined4 **)(param_3 + 0xac);
    local_b0 = 0x12345678;
    local_b8 = puVar18;
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
    local_d8 = (undefined4 *)uVar12;
    FUN_10098b60(&local_f0,0x44);
    local_d8 = puVar18;
    local_d4 = (undefined4 *)0xff;
    local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,8);
    puStack_e4 = (undefined4 *)0x36;
    local_d0 = (undefined4 *)0x12345678;
    local_e0 = 0;
    local_f0 = iVar21;
    iStack_ec = param_3;
    local_e8 = param_2;
    FUN_10098b60(&local_f0,0x24);
    FUN_10121648(iVar23,uVar12);
  }
  FUN_10121648(iVar23,local_90);
  uVar9 = *(uint *)(*(int *)(param_3 + 0x1a0) + 0x44);
  if ((uVar9 >> 0x1a & 1) == 0) {
    if ((*(uint *)(param_3 + 0x19c) >> 1 & 1) == 0) {
      if (*(char *)(param_3 + 0x1b0) == '\0') {
        local_cc = 0x12345678;
        local_d4 = (undefined4 *)0xe4;
        local_d0 = (undefined4 *)0x3f800000;
        local_d8 = *(undefined4 **)(param_3 + 0xa8);
        local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,8);
        local_e0 = 3;
        puStack_e4 = (undefined4 *)0x36;
        local_f0 = iVar21;
        iStack_ec = param_3;
        local_e8 = param_2;
        FUN_10098b60(&local_f0,0x28);
      }
    }
    else {
      local_d8 = (undefined4 *)FUN_1009d380(param_1 & 0xffffffff,param_2,param_3);
      local_d0 = (undefined4 *)0x12345678;
      local_d4 = (undefined4 *)0xff;
      local_e0 = 4;
      local_dc._0_1_ = 1;
      puStack_e4 = (undefined4 *)0x36;
      local_f0 = iVar21;
      iStack_ec = param_3;
      local_e8 = param_2;
      FUN_10098b60(&local_f0,0x24);
      local_d8 = (undefined4 *)FUN_1009d380(param_1 & 0xffffffff,param_2,param_3);
      local_d0 = (undefined4 *)0x12345678;
      local_d4 = (undefined4 *)0xff;
      local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,8);
      local_e0 = 3;
      puStack_e4 = (undefined4 *)0x36;
      local_f0 = iVar21;
      iStack_ec = param_3;
      local_e8 = param_2;
      FUN_10098b60(&local_f0,0x24);
      *(byte *)(param_3 + 0x1af) = *(byte *)(param_3 + 0x1af) | 1;
    }
    goto LAB_1009e2b8;
  }
  puVar18 = *(undefined4 **)(param_3 + 0x154);
  local_84 = (code *)CONCAT31(local_84._1_3_,0xaa);
  puVar13 = (undefined4 *)0x0;
  local_90 = (undefined4 *)0x8000000;
  local_88 = puVar18;
  if ((uVar9 >> 0x18 & 3) - 1 < 3) {
    puVar13 = local_80;
    if (local_80 == (undefined4 *)0x0) {
      puVar13 = (uint *)FUN_10121590(iVar23,1,1);
      puVar18 = (undefined4 *)*local_70;
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
        puStack_e4 = puVar13;
        local_dc = puVar18;
        local_d4 = puVar18;
        local_88 = puVar13;
        FUN_10122a88(&local_f0,0x28);
        local_e8 = 0x4b;
        local_d8 = (undefined4 *)0x0;
        local_d4 = (undefined4 *)0x0;
        local_e0 = 1;
        local_f0 = iVar23;
        iStack_ec = param_2;
        puStack_e4 = puVar13;
        local_dc = puVar13;
        FUN_10122a88(&local_f0,0x20);
      }
    }
    else {
      local_84 = (code *)((uint)local_84._1_3_ << 8);
      local_90 = (undefined4 *)0x0;
      local_88 = local_80;
    }
  }
  puVar8 = local_74;
  switch(*(byte *)(*local_74 + 0x47) & 3) {
  default:
    if ((*(uint *)(param_3 + 0x19c) >> 1 & 1) == 0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      puVar13 = (uint *)FUN_1009d380(uVar22,param_2,param_3);
    }
    uVar12 = 0xff;
    goto LAB_1009e010;
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
    puStack_e4 = puVar13;
    FUN_10122a88(&local_f0,0x2c);
    if ((*(uint *)(*puVar8 + 0x44) & 0x3000000) == 0x2000000) {
      local_d0 = (undefined4 *)0x0;
      local_cc = 0;
      local_e8 = 0x38;
      local_d8 = (undefined4 *)0x0;
      local_e0 = 1;
      local_f0 = iVar23;
      iStack_ec = param_2;
      puStack_e4 = puVar13;
      local_dc = puVar13;
      local_d4 = puVar13;
      FUN_10122a88(&local_f0,0x28);
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
    puStack_e4 = puVar13;
    local_dc = puVar13;
    FUN_10122a88(&local_f0,0x2c);
    local_e8 = 0x19;
    local_d8 = (undefined4 *)0x0;
    local_d4 = (undefined4 *)0x0;
    local_e0 = 1;
    local_f0 = iVar23;
    iStack_ec = param_2;
    puStack_e4 = puVar13;
    local_dc = puVar13;
    FUN_10122a88(&local_f0,0x20);
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
      puStack_e4 = puVar13;
      local_d0 = puVar13;
      FUN_10122a88(&local_f0,0x2c);
    }
    else {
      local_d8 = (undefined4 *)0x0;
      local_d4 = (undefined4 *)0x0;
      local_e8 = 0x81;
      local_e0 = 1;
      local_f0 = iVar23;
      iStack_ec = param_2;
      puStack_e4 = puVar13;
      local_dc = puVar13;
      FUN_10122a88(&local_f0,0x20);
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
    puStack_e4 = puVar13;
    FUN_10122a88(&local_f0,0x2c);
    local_d0 = (undefined4 *)0x0;
    local_cc = 0x5c;
    local_d4 = *(undefined4 **)(param_3 + 0xcc);
    local_c8 = 0;
    local_e0 = 1;
    local_d8 = (undefined4 *)0x0;
    local_e8 = 0xe;
    local_f0 = iVar23;
    iStack_ec = param_2;
    puStack_e4 = puVar13;
    local_dc = puVar13;
    FUN_10122a88(&local_f0,0x2c);
  }
  uVar12 = 0;
LAB_1009e010:
  if (puVar13 == (undefined4 *)0x0) {
    local_cc = 0x12345678;
    local_d4 = (undefined4 *)0xe4;
    local_d0 = (undefined4 *)0x3f800000;
    local_d8 = *(undefined4 **)(param_3 + 0xa8);
    local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,8);
    local_e0 = 3;
    puStack_e4 = (undefined4 *)0x36;
    local_f0 = iVar21;
    iStack_ec = param_3;
    local_e8 = param_2;
    FUN_10098b60(&local_f0,0x28);
LAB_1009e180:
    if (puVar13 != *(undefined4 **)(param_3 + 0x198)) {
      FUN_10121648(iVar23,puVar13);
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
      local_d8 = puVar13;
      local_d4 = (undefined4 *)uVar12;
      FUN_10098b60(&local_f0,0x24);
      local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,8);
      local_e0 = 3;
      puStack_e4 = (undefined4 *)0x2036;
      local_d0 = (undefined4 *)0x12345678;
      local_f0 = iVar21;
      iStack_ec = param_3;
      local_e8 = param_2;
      local_d8 = puVar13;
      local_d4 = (undefined4 *)uVar12;
      FUN_10098b60(&local_f0,0x24);
    }
    else {
      puStack_e4 = (undefined4 *)FUN_10121590(iVar23,1,1);
      local_d4 = (undefined4 *)0x0;
      local_e8 = 0x2036;
      local_e0 = 1;
      local_f0 = iVar23;
      iStack_ec = param_2;
      local_dc = puVar13;
      local_d8 = (undefined4 *)uVar12;
      local_90 = puStack_e4;
      FUN_10122a88(&local_f0,0x20);
      local_d0 = (undefined4 *)0x12345678;
      local_dc._0_1_ = 1;
      local_e0 = 4;
      local_d8 = local_90;
      local_d4 = (undefined4 *)0x0;
      puStack_e4 = (undefined4 *)0x36;
      local_f0 = iVar21;
      iStack_ec = param_3;
      local_e8 = param_2;
      FUN_10098b60(&local_f0,0x24);
      local_d0 = (undefined4 *)0x12345678;
      local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,8);
      local_e0 = 3;
      local_d8 = local_90;
      local_d4 = (undefined4 *)0x0;
      puStack_e4 = (undefined4 *)0x36;
      local_f0 = iVar21;
      iStack_ec = param_3;
      local_e8 = param_2;
      FUN_10098b60(&local_f0,0x24);
      FUN_10121648(iVar23,local_90);
    }
    *(byte *)(param_3 + 0x1af) = *(byte *)(param_3 + 0x1af) | 1;
    if (((uint)puVar13 & 0x3f00) == 0) goto LAB_1009e180;
  }
  if (local_88 != (undefined4 *)*local_70) {
    FUN_10121648(iVar23,local_88);
  }
LAB_1009e2b8:
  uVar15 = FUN_10121648(iVar23,local_80);
  FUN_10098c50(uVar15,param_3,2);
  local_84 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((*(uint *)(param_3 + 0x19c) >> 0x13 & 1) != 0) {
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
    FUN_10098b60(&local_f0,0x24);
    *(byte *)(param_3 + 0x1af) = *(byte *)(param_3 + 0x1af) | 0xe;
  }
  puVar18 = (undefined4 *)(param_3 + 0xac);
  if (*(char *)(param_3 + 0x1af) != '\x0f') {
    local_dc = (undefined4 *)(CONCAT31(local_dc._1_3_,*(char *)(param_3 + 0x1af)) ^ 0xf);
    local_c4 = 0;
    local_c0 = 0x12345678;
    local_d4 = (undefined4 *)0xe4;
    local_d0 = (undefined4 *)0x3f800000;
    local_d8 = (undefined4 *)*puVar18;
    local_e0 = 4;
    local_cc = 0;
    local_c8 = 0;
    puStack_e4 = (undefined4 *)0x36;
    local_f0 = iVar21;
    iStack_ec = param_3;
    local_e8 = param_2;
    FUN_10098b60(&local_f0,0x34);
  }
  local_6c = (char *)(param_3 + 0x1b1);
  if (*local_6c == '\0') {
    if ((*(uint *)(param_3 + 0x19c) & 1) == 0) {
      local_c4 = 0x3f800000;
      local_c0 = 0x12345678;
      local_d4 = (undefined4 *)0xe4;
      local_d0 = (undefined4 *)0x3f800000;
      local_d8 = (undefined4 *)*puVar18;
      local_cc = 0x3f800000;
      local_c8 = 0x3f800000;
      local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,0xf);
      local_e0 = 2;
      puStack_e4 = (undefined4 *)0x36;
      local_f0 = iVar21;
      iStack_ec = param_3;
      local_e8 = param_2;
      FUN_10098b60(&local_f0,0x34);
    }
    else {
      local_d8 = (undefined4 *)FUN_1009d308(uVar22,param_2,param_3);
      local_d0 = (undefined4 *)0x12345678;
      local_d4 = (undefined4 *)0xe4;
      local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,0xf);
      local_e0 = 2;
      puStack_e4 = (undefined4 *)0x36;
      local_f0 = iVar21;
      iStack_ec = param_3;
      local_e8 = param_2;
      FUN_10098b60(&local_f0,0x24);
    }
    if ((*(uint *)(param_3 + 0x19c) >> 1 & 1) == 0) {
      local_cc = 0;
      local_c8 = 0;
      local_c4 = 0x3f800000;
      local_c0 = 0x12345678;
      uVar17 = 0xf;
      if (*(char *)(param_3 + 0x1b0) == '\0') {
        uVar17 = 7;
      }
      local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,uVar17);
      local_d4 = (undefined4 *)0xe4;
      local_d0 = (undefined4 *)0x0;
      local_d8 = (undefined4 *)*puVar18;
      local_e0 = 3;
      puStack_e4 = (undefined4 *)0x36;
      local_f0 = iVar21;
      iStack_ec = param_3;
      local_e8 = param_2;
      FUN_10098b60(&local_f0,0x34);
    }
    else {
      local_d8 = (undefined4 *)FUN_1009d380(uVar22,param_2,param_3);
      local_d0 = (undefined4 *)0x12345678;
      local_d4 = (undefined4 *)0xa4;
      local_e0 = 3;
      local_dc = (undefined4 *)CONCAT31(local_dc._1_3_,7);
      puStack_e4 = (undefined4 *)0x36;
      local_f0 = iVar21;
      iStack_ec = param_3;
      local_e8 = param_2;
      FUN_10098b60(&local_f0,0x24);
    }
    FUN_1009d470(uVar22,param_3);
    FUN_1009d4e0(uVar22,param_3);
  }
  puVar13 = *(uint **)(param_3 + 0x1a0);
  uVar9 = 0;
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
  uVar20 = *puVar13;
  uVar2 = puVar13[4];
  uVar3 = puVar13[5];
  uVar4 = puVar13[8];
  uVar5 = puVar13[3];
  do {
    uVar19 = (uVar4 & uVar5) >> (ulonglong)(uVar9 * 3 & 0x1f) & 7;
    if (uVar19 << 0x10 < 0x30000) {
      if (uVar19 == 1) {
        uVar19 = 9;
      }
      else {
        if (uVar19 != 2) goto LAB_1009e5ac;
        uVar19 = 8;
      }
    }
    else if (uVar19 << 0x10 < 0x30001) {
      uVar19 = 0xb;
    }
    else if (uVar19 == 4) {
      uVar19 = 10;
    }
    else {
LAB_1009e5ac:
      uVar19 = (uVar3 & uVar2 & uVar20) >> (ulonglong)(uVar9 * 3 & 0x1f) & 7;
    }
    uVar7 = uVar9 & 0x1f;
    uVar9 = uVar9 + 1;
    abStack_61[uVar19 + 1] = (byte)(1 << (ulonglong)uVar7) | abStack_61[uVar19 + 1];
    abStack_61[uVar19 + 0xd] = abStack_61[uVar19 + 0xd] + 1;
  } while (uVar9 < 8);
  local_88 = (uint *)(param_3 + 0x18c);
  local_78 = (uint *)(param_3 + 0x184);
  iVar21 = 0xc;
  local_80 = local_88;
  local_74 = local_88;
  local_70 = local_78;
LAB_1009e610:
  do {
    local_90 = (undefined4 *)(uint)abStack_61[iVar21];
    uVar9 = ((uint)local_90 & 0xaaaaaaaa) >> 1 | ((uint)local_90 & 0x55555555) << 1;
    uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
    lVar14 = LZCOUNT((uVar9 >> 4 | (uVar9 & 0xf0f0f0f) << 4) << 0x18);
    uVar9 = (uint)lVar14;
    if ((1 - (uVar9 >> 5) & 0xff) != 0) {
      pbVar1 = (byte *)((int)&local_90 + ((int)uVar9 >> 3));
      *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar9 & 7)) ^ 0xff);
      bVar6 = abStack_61[iVar21 + 0xc];
      while( true ) {
        FUN_1009a5e0(uVar22,param_2,param_3,lVar14,1 < bVar6);
        uVar9 = ((uint)local_90 & 0xaaaaaaaa) >> 1 | ((uint)local_90 & 0x55555555) << 1;
        uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
        lVar14 = LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
        uVar9 = (uint)lVar14;
        if ((1 - (uVar9 >> 5) & 0xff) == 0) break;
        pbVar1 = (byte *)((int)&local_90 + ((int)uVar9 >> 3));
        *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar9 & 7)) ^ 0xff);
      }
    }
    uVar9 = *local_70;
    if (((uVar9 & 0x3f00) == 0) && (uVar9 != *local_74)) {
      FUN_10121648(iVar23,uVar9);
    }
    *local_78 = 0;
    (*local_84)();
    uVar15 = (*extraout_w11_00)(param_1 & 0xffffffff,param_3,*local_88);
    *local_80 = 0;
    switch(iVar21) {
    case 10:
      puVar18 = (undefined4 *)(param_3 + 0x158);
      break;
    case 0xb:
      puVar18 = (undefined4 *)(param_3 + 0x160);
      break;
    case 0xc:
      puVar18 = (undefined4 *)(param_3 + 0x15c);
      break;
    default:
      goto switchD_1009e754_default;
    }
    FUN_10121648(iVar23,*puVar18);
    *extraout_w11_01 = 0;
    iVar21 = iVar21 + -1;
  } while( true );
switchD_1009e754_default:
  iVar21 = iVar21 + -1;
  if (iVar21 == 0) {
    FUN_10098c50(uVar15,param_3,1);
    if (*local_6c != '\0') {
      FUN_1009b5d8(param_1 & 0xffffffff,param_2,param_3,local_7c);
      FUN_1009d470(param_1 & 0xffffffff,param_3);
      uVar15 = FUN_1009d4e0(param_1 & 0xffffffff,param_3);
      FUN_10098c50(uVar15,param_3,4);
    }
    return;
  }
  goto LAB_1009e610;
}


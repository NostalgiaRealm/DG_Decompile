/*
 * FUN_100821b8 at 100821b8
 * undefined FUN_100821b8(void)
 * Address ranges: 100821b8-10082adb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100821b8(undefined8 param_1,int param_2,undefined4 param_3)

{
  undefined4 ******ppppppuVar1;
  byte *pbVar2;
  undefined4 *****pppppuVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 ******ppppppuVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  undefined4 *extraout_w11;
  undefined4 *extraout_w11_00;
  undefined4 *extraout_w11_01;
  undefined4 *extraout_w11_02;
  undefined4 *extraout_w11_03;
  undefined4 *extraout_w11_04;
  undefined4 *extraout_w11_05;
  undefined4 *extraout_w11_06;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 *****local_124;
  undefined4 *****local_120;
  undefined4 *****local_11c;
  undefined4 *****local_118;
  undefined4 *****local_114;
  undefined4 *****local_110;
  undefined4 *****local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  uint local_e0;
  uint *local_dc;
  undefined4 *****local_d8;
  int *local_d4;
  undefined4 *****local_d0;
  undefined1 local_cc;
  int local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int local_b0;
  uint *local_ac;
  undefined4 *local_a8;
  undefined4 *local_a4;
  undefined4 *****local_a0;
  undefined1 local_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_70 [48];
  
  puVar6 = (undefined4 *)(param_2 + 0x18);
  uVar14 = 0;
  uVar10 = (ulonglong)(param_2 + 300);
  puVar5 = puVar6;
  do {
    puVar5 = (undefined4 *)FUN_100ee638(puVar5,*(undefined4 *)((int)uVar10 + uVar14 * 4));
    uVar14 = uVar14 + 1;
    *extraout_w11 = 0;
  } while (uVar14 < 0x20);
  uVar14 = 0;
  uVar10 = (ulonglong)(param_2 + 0xec);
  do {
    uVar15 = *(uint *)((int)uVar10 + uVar14 * 4);
    if ((uVar15 & 0x3f00) == 0) {
      puVar6 = (undefined4 *)FUN_100ee638(puVar6,uVar15);
      *(undefined4 *)(param_2 + uVar14 * 4 + 0xec) = 0;
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 < 0x10);
  puVar5 = puVar6;
  if ((*(uint *)(param_2 + 0x224) & 0x3f00) == 0) {
    puVar5 = (undefined4 *)FUN_100ee638(puVar6,*(uint *)(param_2 + 0x224));
    *extraout_w11_00 = 0;
  }
  local_d4 = (int *)(param_2 + 0x10);
  if ((*(byte *)(*local_d4 + 0x441) & 0xc) != 0xc) {
    FUN_1007ff80(puVar5,param_2,*(undefined4 *)(param_2 + 0x1e8),~*(byte *)(*local_d4 + 0x441) & 0xc
                 ,&local_a0);
    local_d0 = *(undefined4 ******)(param_2 + 0xac);
    local_c0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_b4 = 0x3f800000;
    local_cc = 0xe4;
    local_120 = &local_d0;
    local_11c = (undefined4 ******)0x0;
    local_124 = &local_a0;
    local_128 = 0x36;
    local_130 = puVar6;
    uStack_12c = param_3;
    FUN_100ef6a8(&local_130,0x18);
  }
  local_dc = (uint *)(param_2 + 0x1e8);
  puVar5 = (undefined4 *)(param_2 + 0x18);
  ppppppuVar1 = (undefined4 ******)*local_dc;
  local_d8 = ppppppuVar1;
  uVar9 = FUN_100ef9e8(*puVar5);
  ppppppuVar7 = (undefined4 ******)local_d8;
  if (((int)uVar9 != 0x51) && (*(char *)(param_2 + 0x65) != '\0')) {
    ppppppuVar7 = (undefined4 ******)FUN_100ee580(puVar5,4,0);
    local_10c = (undefined4 *****)0x0;
    local_108 = 0;
    local_114 = *(undefined4 ******)(param_2 + 0x230);
    local_110 = (undefined4 *****)0x54;
    local_118 = (undefined4 *****)0xff;
    local_120 = (undefined4 *****)0x3;
    local_128 = 0xe;
    local_130 = puVar5;
    uStack_12c = param_3;
    local_124 = ppppppuVar7;
    local_11c = ppppppuVar1;
    FUN_100ef510(&local_130,0x2c);
    local_120 = (undefined4 *****)0x3;
    local_110 = (undefined4 *****)0x54;
    local_10c = (undefined4 ******)0x0;
    local_118 = (undefined4 *****)0x54;
    local_128 = 0;
    local_130 = puVar5;
    uStack_12c = param_3;
    local_124 = ppppppuVar7;
    local_11c = ppppppuVar1;
    local_114 = ppppppuVar7;
    FUN_100ef510(&local_130,0x28);
    local_118 = (undefined4 ******)0xea;
    local_114 = (undefined4 ******)0x0;
    local_120 = (undefined4 *****)&DAT_0000000c;
    local_128 = 0x36;
    local_130 = puVar5;
    uStack_12c = param_3;
    local_124 = ppppppuVar7;
    local_11c = ppppppuVar1;
    uVar9 = FUN_100ef510(&local_130,0x20);
  }
  uVar10 = 0xf;
  uVar9 = FUN_1007ff80(uVar9,param_2,*(undefined4 *)(param_2 + 0x1ac),0xf,&local_a0);
  FUN_1007ff80(uVar9,param_2,*(undefined4 *)(param_2 + 0x1b0),uVar10 & 0xffffffff,auStack_70);
  local_cc = 0xe4;
  local_120 = &local_d0;
  local_11c = (undefined4 *****)0x0;
  local_124 = &local_a0;
  local_128 = 0x36;
  uStack_b8 = 0xffffffff;
  uStack_b4 = 0xffffffff;
  local_c0 = -1;
  uStack_bc = 0xffffffff;
  local_130 = (undefined4 *)(param_2 + 0x18);
  uStack_12c = param_3;
  local_d0 = ppppppuVar7;
  FUN_100ef6a8(&local_130,0x18);
  local_120 = &local_d0;
  local_11c = (undefined4 ******)0x0;
  local_124 = (undefined4 *****)auStack_70;
  local_128 = 0x36;
  local_130 = (undefined4 *)(param_2 + 0x18);
  uStack_12c = param_3;
  uVar9 = FUN_100ef6a8(&local_130,0x18);
  pppppuVar3 = local_d8;
  uVar14 = 0;
  uVar12 = (uint)*(undefined8 *)(param_2 + 8);
  uVar15 = uVar12 & 0x3f;
  uVar12 = (uVar12 & 0x2a) >> 1 | (uVar12 & 0x15) << 1;
  lVar13 = LZCOUNT(((uVar12 & 0x33333333) >> 2 |
                   ((uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x3030303) << 2) << 4) << 0x18);
  uVar12 = (uint)lVar13;
  if ((1 - (uVar12 >> 5) & 0xff) == 0) {
    lVar13 = 0xffffffff;
  }
  else {
    pbVar2 = (byte *)((int)&local_e0 + ((int)uVar12 >> 3));
    *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
  }
  local_e0 = uVar15;
  if ((int)lVar13 != -1) {
    local_a8 = (undefined4 *)(param_2 + 0x18);
    local_b0 = param_2 + 0x1e0;
    local_ac = (uint *)(param_2 + 0x228);
    local_a4 = puVar6;
    do {
      FUN_1007ff80(uVar9,param_2,*(undefined4 *)(local_b0 + (uVar14 & 0xfffffffc)),
                   (char)(1 << (ulonglong)(uVar14 & 3)),auStack_70);
      local_9c = 0xe4;
      local_a0 = pppppuVar3;
      uStack_88 = 0xffffffffffffffff;
      local_90 = 0xffffffffffffffff;
      local_d0 = (undefined4 *****)*local_ac;
      local_cc = 0xe4;
      local_c0 = ((uint)lVar13 + 2) * 0x10;
      uStack_bc = 0xffffffff;
      uStack_b8 = 0xffffffff;
      uStack_b4 = 0xffffffff;
      local_11c = &local_d0;
      local_118 = (undefined4 ******)0x0;
      local_120 = &local_a0;
      local_124 = (undefined4 *****)auStack_70;
      local_128 = 0x11;
      local_130 = local_a8;
      uStack_12c = param_3;
      uVar9 = FUN_100ef6a8(&local_130,0x1c);
      uVar14 = uVar14 + 1;
      *(uint *)(param_2 + 0x44) = 1 << (ulonglong)((uint)lVar13 & 0x1f) | *(uint *)(param_2 + 0x44);
      uVar12 = (uVar15 & 0xaaaaaaaa) >> 1 | (uVar15 & 0x55555555) << 1;
      uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
      lVar13 = LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10);
      uVar12 = (uint)lVar13;
      if ((1 - (uVar12 >> 5) & 0xff) == 0) {
        lVar13 = 0xffffffff;
      }
      else {
        pbVar2 = (byte *)((int)&local_e0 + ((int)uVar12 >> 3));
        *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
        uVar15 = local_e0;
      }
      puVar6 = local_a4;
    } while ((int)lVar13 != -1);
  }
  if ((*local_dc & 0x3f00) == 0) {
    uVar9 = FUN_100ee638(puVar6,*local_dc);
    *extraout_w11_01 = 0;
  }
  if ((*(char *)(param_2 + 0xc9) != '\0') && (*(char *)(*local_d4 + 0x442) != '\0')) {
    uVar14 = *(uint *)(param_2 + 0x1ec);
    ppppppuVar7 = (undefined4 ******)FUN_100ee580(puVar6,4,1);
    local_108 = 0;
    puVar5 = (undefined4 *)(param_2 + 0x234);
    ppppppuVar1 = (undefined4 ******)
                  (uVar14 & 0xff83ffff | ((uVar14 >> 0x12 & 3) + 1) * 0x40000 | 0x300000);
    local_128 = 0;
    local_110 = (undefined4 *****)0x0;
    local_10c = (undefined4 *****)0x14;
    local_114 = (undefined4 *****)*puVar5;
    local_11c = (undefined4 *****)(uVar14 | 0x80000000);
    local_118 = (undefined4 *****)0x0;
    local_120 = (undefined4 *****)0x1;
    local_130 = puVar6;
    uStack_12c = param_3;
    local_124 = ppppppuVar7;
    FUN_100ef510(&local_130,0x2c);
    local_110 = (undefined4 *****)0x0;
    local_10c = (undefined4 *****)0x10;
    local_114 = (undefined4 *****)*puVar5;
    local_108 = 0;
    local_120 = (undefined4 *****)0x6;
    local_118 = (undefined4 *****)0x0;
    local_128 = 0x38;
    local_130 = puVar6;
    uStack_12c = param_3;
    local_124 = ppppppuVar7;
    local_11c = (undefined4 *****)uVar14;
    FUN_100ef510(&local_130,0x2c);
    local_110 = (undefined4 *****)0xaa;
    local_10c = (undefined4 *****)0x0;
    local_118 = (undefined4 *****)0xaa;
    local_120 = (undefined4 *****)0x4;
    local_128 = 0x38;
    local_130 = puVar6;
    uStack_12c = param_3;
    local_124 = ppppppuVar7;
    local_11c = ppppppuVar7;
    local_114 = ppppppuVar7;
    FUN_100ef510(&local_130,0x28);
    local_dc = (uint *)(param_2 + 0xac);
    local_114 = (undefined4 *****)*local_dc;
    local_110 = (undefined4 *****)0xe4;
    local_10c = (undefined4 *****)0x0;
    local_100 = 0;
    uStack_fc = 0;
    local_120 = (undefined4 *****)0x6;
    local_118 = (undefined4 *****)0xa5;
    local_128 = 0x38;
    local_108 = 0x3fb8aa3b;
    uStack_104 = 0x3fb8aa3b;
    local_130 = puVar6;
    uStack_12c = param_3;
    local_124 = ppppppuVar7;
    local_11c = ppppppuVar7;
    FUN_100ef510(&local_130,0x38);
    local_118 = (undefined4 *****)0xa5;
    local_114 = (undefined4 *****)0x0;
    local_128 = 0x2019;
    local_120 = (undefined4 *****)0x6;
    local_130 = puVar6;
    uStack_12c = param_3;
    local_124 = ppppppuVar7;
    local_11c = ppppppuVar7;
    FUN_100ef510(&local_130,0x20);
    local_110 = (undefined4 *****)0x0;
    local_10c = (undefined4 *****)0x18;
    local_114 = (undefined4 *****)*puVar5;
    local_108 = 0;
    local_118 = (undefined4 *****)0x0;
    local_120 = (undefined4 *****)0x1;
    local_128 = 0xe;
    local_130 = puVar6;
    uStack_12c = param_3;
    local_124 = ppppppuVar7;
    local_11c = ppppppuVar7;
    FUN_100ef510(&local_130,0x2c);
    iVar8 = FUN_100ef9e8(*puVar6);
    if (iVar8 == 0x40) {
      local_11c = *(undefined4 ******)(param_2 + 0xa8);
      local_10c = (undefined4 *****)0xa5;
      local_108 = 0;
      local_114 = (undefined4 *****)0x3f800000;
      local_118 = (undefined4 *****)0xe4;
      local_120 = (undefined4 *****)0x6;
      local_128 = 0x200e;
      local_130 = puVar6;
      uStack_12c = param_3;
      local_124 = ppppppuVar7;
      local_110 = ppppppuVar7;
      FUN_100ef510(&local_130,0x2c);
    }
    else {
      local_118 = (undefined4 *****)0xa5;
      local_114 = (undefined4 *****)0x0;
      local_128 = 0x2081;
      local_120 = (undefined4 *****)0x6;
      local_130 = puVar6;
      uStack_12c = param_3;
      local_124 = ppppppuVar7;
      local_11c = ppppppuVar7;
      FUN_100ef510(&local_130,0x20);
    }
    local_f8 = 0;
    local_100 = 2;
    uStack_fc = 0;
    local_108 = 3;
    uStack_104 = 1;
    local_10c = (undefined4 *****)0x1e4;
    local_110 = (undefined4 *****)*local_dc;
    local_114 = (undefined4 *****)0x1c;
    local_11c = (undefined4 *****)*puVar5;
    local_118 = (undefined4 *****)0x0;
    local_120 = (undefined4 *****)0x7;
    local_128 = 0x20;
    local_130 = puVar6;
    uStack_12c = param_3;
    local_124 = ppppppuVar1;
    FUN_100ef510(&local_130,0x3c);
    local_128 = 0x37;
    local_108 = 0;
    uStack_104 = 0;
    local_110 = (undefined4 *****)0x0;
    local_118 = (undefined4 *****)0x0;
    local_120 = (undefined4 *****)0x1;
    local_130 = puVar6;
    uStack_12c = param_3;
    local_124 = ppppppuVar7;
    local_11c = ppppppuVar1;
    local_114 = ppppppuVar7;
    local_10c = (undefined4 *****)uVar14;
    FUN_100ef510(&local_130,0x30);
    local_110 = (undefined4 *****)0x55;
    local_118 = (undefined4 *****)0x55;
    local_108 = 0;
    uStack_104 = 0;
    local_120 = (undefined4 *****)0x1;
    local_128 = 0x37;
    local_130 = puVar6;
    uStack_12c = param_3;
    local_124 = ppppppuVar7;
    local_11c = ppppppuVar1;
    local_114 = ppppppuVar7;
    local_10c = ppppppuVar7;
    uVar9 = FUN_100ef510(&local_130,0x30);
    FUN_1007ff80(uVar9,param_2,*(undefined4 *)(param_2 + 0x1bc),1,auStack_70);
    local_9c = 0xaa;
    local_114 = &local_d0;
    local_110 = (undefined4 *****)0x0;
    local_118 = &local_d0;
    local_11c = (undefined4 ******)0x1aa;
    local_120 = &local_a0;
    local_124 = (undefined4 *****)auStack_70;
    local_128 = 0x37;
    local_cc = 0;
    uStack_b8 = 0xffffffff;
    uStack_b4 = 0xffffffff;
    local_c0 = -1;
    uStack_bc = 0xffffffff;
    uStack_88 = 0xffffffffffffffff;
    local_90 = 0xffffffffffffffff;
    local_130 = puVar6;
    uStack_12c = param_3;
    local_d0 = ppppppuVar7;
    local_a0 = ppppppuVar1;
    FUN_100ef6a8(&local_130,0x24);
    uVar9 = FUN_100ee638(puVar6,ppppppuVar7);
  }
  piVar4 = local_d4;
  bVar11 = 0xe;
  if (*(char *)(*local_d4 + 0x443) != '\0') {
    bVar11 = 0;
  }
  uVar9 = FUN_10079448(uVar9,param_2,param_3,4,bVar11 | *(char *)(*local_d4 + 0x442) == '\0');
  uVar9 = FUN_10079448(uVar9,param_2,param_3,2,~*(byte *)(*piVar4 + 0x444));
  uVar9 = FUN_10079448(uVar9,param_2,param_3,3,~*(byte *)(*piVar4 + 0x445));
  uVar14 = 0;
  do {
    uVar9 = FUN_10079448(uVar9,param_2,param_3,uVar14 + 5,~*(byte *)(*piVar4 + uVar14 + 0x446));
    uVar15 = *(uint *)(param_2 + (uVar14 + 0x7f) * 4);
    if ((uVar15 & 0x3f00) == 0) {
      uVar9 = FUN_100ee638(puVar6,uVar15);
      *extraout_w11_02 = 0;
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 < 8);
  if ((*(uint *)(param_2 + 0x1ec) & 0x3f00) == 0) {
    FUN_100ee638(puVar6,*(uint *)(param_2 + 0x1ec));
    *extraout_w11_03 = 0;
  }
  if ((*(uint *)(param_2 + 0x1f0) & 0x3f00) == 0) {
    FUN_100ee638(puVar6,*(uint *)(param_2 + 0x1f0));
    *extraout_w11_04 = 0;
  }
  if ((*(uint *)(param_2 + 500) & 0x3f00) == 0) {
    FUN_100ee638(puVar6,*(uint *)(param_2 + 500));
    *extraout_w11_05 = 0;
  }
  if ((*(uint *)(param_2 + 0x1f8) & 0x3f00) == 0) {
    FUN_100ee638(puVar6,*(uint *)(param_2 + 0x1f8));
    *extraout_w11_06 = 0;
  }
  return;
}


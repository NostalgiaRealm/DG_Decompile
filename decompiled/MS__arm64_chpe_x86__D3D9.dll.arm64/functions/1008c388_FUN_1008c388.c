/*
 * FUN_1008c388 at 1008c388
 * undefined FUN_1008c388(void)
 * Address ranges: 1008c388-1008cbb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008c388(undefined4 param_1,uint *param_2,undefined4 param_3,uint param_4,ulonglong param_5
                 ,ulonglong *param_6)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint extraout_w11;
  char cVar12;
  uint uVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  byte bVar16;
  uint *puVar17;
  uint *puVar18;
  uint *extraout_s16;
  uint *local_130;
  undefined4 uStack_12c;
  uint local_128;
  uint *local_124;
  uint *local_120;
  uint *local_11c;
  uint *local_118;
  uint *local_114;
  uint *local_110;
  uint *puStack_10c;
  undefined4 local_108;
  char local_f0;
  uint *local_ec;
  undefined8 local_e0;
  ulonglong uStack_d8;
  ulonglong local_d0;
  ulonglong uStack_c8;
  ulonglong *local_c0;
  uint local_bc;
  uint local_b0;
  uint uStack_ac;
  ulonglong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  uint local_90;
  undefined1 local_8c;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 local_70;
  uint *puStack_6c;
  undefined4 local_68;
  uint local_60;
  byte local_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_ec = param_2 + 0x104;
  bVar2 = (byte)*local_ec;
  puVar14 = (ulonglong *)(uint)bVar2;
  uVar13 = (uint)((param_5 & 0xffffffffffff) >> ((ulonglong)((uint)bVar2 * 3) & 0x3f)) & 7;
  uVar11 = (uint)bVar2;
  pcVar1 = (char *)(param_2[0x3d] + uVar11 + 0x14f);
  if ((*(char *)(uVar13 + 0x10162370) != *pcVar1) && (*(char *)((int)param_2 + 0xf2) == '\0')) {
    uVar13 = 0;
  }
  if (param_6 == (ulonglong *)0x0) {
    local_b0 = 0;
    local_d0 = 0xffffffffffffffff;
    uStack_c8 = 0xffffffffffffffff;
    uStack_ac = uStack_ac & 0xffffff00;
    local_e0 = (ulonglong)uStack_ac << 0x20;
  }
  else {
    uStack_a8 = param_6[1];
    local_e0 = *param_6;
    uStack_c8 = param_6[3];
    local_d0 = param_6[2];
  }
  puVar18 = (uint *)0x0;
  puVar17 = (uint *)0x0;
  if ((3 < uVar13 - 1 && uVar13 != 7) || (iVar10 = 1, 0x50 < *param_2)) {
    iVar10 = 0;
  }
  puVar7 = param_2 + 0xf9;
  bVar16 = (&DAT_10162368)[uVar13];
  bVar3 = (byte)*puVar7;
  *(byte *)puVar7 =
       (((bVar3 >> ((ulonglong)(bVar16 >> 6) << 1) & 3) << 2 |
        bVar3 >> (ulonglong)((bVar16 >> 4 & 3) << 1) & 3) << 2 |
       bVar3 >> (ulonglong)((bVar16 >> 2 & 3) << 1) & 3) << 2 |
       bVar3 >> (ulonglong)((bVar16 & 3) << 1) & 3;
  bVar16 = (byte)param_2[0x105];
  *(undefined1 *)(param_2 + 0x105) = 0;
  uStack_d8 = uStack_a8;
  local_bc = param_4;
  local_70 = param_1;
  puStack_6c = param_2;
  local_68 = param_3;
  if (7 < uVar13) goto LAB_1008cb7c;
  puVar15 = (ulonglong *)(uint)bVar2;
  uVar5 = (uint)local_e0;
  switch(uVar13) {
  case 0:
    local_80 = 0;
    local_90 = param_2[0x29];
    local_124 = param_2 + 0xcc;
    local_7c = 0;
    local_74 = 0x3f800000;
    local_8c = 0xe4;
    local_120 = &local_90;
    local_11c = (uint *)0x0;
    local_128 = 0x36;
    local_130 = param_2;
    uStack_12c = param_3;
    FUN_10122c20(&local_130,0x18);
    goto LAB_1008cb7c;
  case 2:
    puVar17 = param_2 + 0xcc;
    if ((iVar10 != 0) && ((*puVar17 & 0x3f00) != 0)) {
      uVar8 = (undefined1)param_2[0xcd];
      if (uVar5 == 0) {
        uVar6 = FUN_10121590(param_2,4,1);
        local_d0 = 0xffffffffffffffff;
        uStack_c8 = 0xffffffffffffffff;
        local_e0 = CONCAT44(local_e0._4_4_,uVar6);
      }
      local_e0._0_5_ = CONCAT14(uVar8,(uint)local_e0);
      puVar17 = (uint *)&local_e0;
    }
    local_b0 = FUN_101214c0(param_2,puVar15 + 2,1,puVar15 + 2);
    local_114 = param_2 + 0x110;
    uStack_ac = CONCAT31(uStack_ac._1_3_,bVar16);
    local_110 = param_2 + 0x11c;
    local_120 = param_2 + 0xf8;
    uStack_98 = 0xffffffffffffffff;
    local_a0 = 0xffffffffffffffff;
    puStack_10c = (uint *)0x0;
    local_128 = param_2[200] | local_bc;
    local_118 = local_ec;
    local_11c = &local_b0;
    local_130 = param_2;
    uStack_12c = param_3;
    local_124 = puVar17;
    FUN_10122c20(&local_130,0x28);
    break;
  case 3:
    if (*pcVar1 == '\x02') {
      if (uVar5 == 0) {
        uVar5 = FUN_10121590(param_2,4,1);
        local_d0 = 0xffffffffffffffff;
        uStack_c8 = 0xffffffffffffffff;
        local_e0 = CONCAT44(local_e0._4_4_,uVar5);
      }
      local_e0._0_5_ = CONCAT14(0xb,(uint)local_e0);
      local_c0 = (ulonglong *)(param_2 + 0xf8);
      if ((uint)*local_c0 != uVar5) {
        uVar5 = FUN_10123210((char)*puVar7,0xb);
        local_120 = (uint *)(uVar5 & 0xff);
        local_11c = (uint *)0x0;
        local_124 = (uint *)&local_e0;
        local_128 = 0x36;
        local_130 = param_2;
        uStack_12c = param_3;
        FUN_10122c20(&local_130,0x18);
      }
      local_b0 = param_2[0x28];
      uStack_98 = 0xffffffffffffffff;
      local_a0 = 0xffffffffffffffff;
      uStack_ac = CONCAT31(uStack_ac._1_3_,0xe4);
      local_11c = &local_b0;
      local_118 = (uint *)0x0;
      local_120 = (uint *)&local_e0;
      local_124 = (uint *)0x104;
      local_128 = 0x36;
      local_130 = param_2;
      uStack_12c = param_3;
      FUN_10122c20(&local_130,0x1c);
      local_c0[1] = uStack_d8;
      *local_c0 = local_e0;
      local_c0[3] = uStack_c8;
      local_c0[2] = local_d0;
    }
  default:
    if (uVar13 == 4) {
      bVar2 = bVar16 & 3;
      bVar16 = bVar2 | (bVar2 | (bVar2 | bVar16 << 2) << 2) << 2;
    }
    else if (uVar13 == 7) {
      bVar16 = bVar16 & 0xf0 | (bVar16 & 3) << 2 | bVar16 >> 2 & 3;
    }
    puVar17 = param_2 + 0xcc;
    if ((iVar10 != 0) && ((*puVar17 & 0x3f00) != 0)) {
      uVar8 = (undefined1)param_2[0xcd];
      if ((int)local_e0 == 0) {
        uVar6 = FUN_10121590(param_2,4,1);
        local_d0 = 0xffffffffffffffff;
        uStack_c8 = 0xffffffffffffffff;
        local_e0 = CONCAT44(local_e0._4_4_,uVar6);
      }
      local_e0._0_5_ = CONCAT14(uVar8,(uint)local_e0);
      puVar17 = (uint *)&local_e0;
    }
    iVar9 = 0x20;
    if (uVar13 != 3) {
      iVar9 = 0;
    }
    uVar6 = 2;
    if (uVar13 != 3) {
      uVar6 = 0;
    }
    local_b0 = FUN_101214c0(param_2,iVar9 + (int)puVar15,uVar6,iVar9 + (int)puVar15);
    local_114 = param_2 + 0x110;
    local_110 = param_2 + 0x11c;
    local_120 = param_2 + 0xf8;
    uStack_ac = CONCAT31(uStack_ac._1_3_,bVar16);
    uStack_98 = 0xffffffffffffffff;
    local_a0 = 0xffffffffffffffff;
    local_128 = param_2[200] | local_bc;
    puStack_10c = (uint *)0x0;
    local_118 = local_ec;
    local_11c = &local_b0;
    local_130 = param_2;
    uStack_12c = param_3;
    local_124 = puVar17;
    FUN_10122c20(&local_130,0x28);
    break;
  case 5:
  case 6:
    iVar10 = 0x10;
    if (uVar13 != 6) {
      iVar10 = 0;
    }
    local_b0 = FUN_101214c0(param_2,iVar10 + uVar11,uVar13 == 6,iVar10 + uVar11);
    puVar7 = param_2 + 0xf8;
    uStack_ac = CONCAT31(uStack_ac._1_3_,bVar16);
    uStack_98 = 0xffffffffffffffff;
    local_a0 = 0xffffffffffffffff;
    uStack_48 = 0xffffffffffffffff;
    local_50 = 0xffffffffffffffff;
    local_60 = *puVar7 | 0x10000000;
    uVar11 = 6;
    if (uVar13 != 6) {
      uVar11 = 4;
    }
    local_5c = (byte)(extraout_w11 >> (ulonglong)uVar11) & 3;
    uVar13 = (uint)(param_5 >> 0x20);
    uVar11 = uVar13 >> 0x12 & 1;
    uVar13 = (uVar13 >> 0x11 & 1) << 1 | uVar11;
    if ((uVar13 == 0) || (uVar13 == 1)) {
      bVar2 = (byte)param_2[0xcd];
      if ((bVar2 >> 3 & 1) == 0) goto LAB_1008c8c8;
      *(byte *)(param_2 + 0xcd) = bVar2 & 7;
      cVar12 = '\x01';
    }
    else {
LAB_1008c8c8:
      cVar12 = '\0';
    }
    if (uVar11 == 0) {
      if ((uVar13 == 2) || ((param_2[0xcd] & 7) != 0)) {
        local_110 = (uint *)0x0;
        local_118 = param_2 + 0x128;
        local_124 = param_2 + 0xcc;
        local_128 = param_2[200] | 0x46;
        local_114 = &local_60;
        local_11c = &local_b0;
        local_130 = param_2;
        uStack_12c = param_3;
        local_120 = puVar7;
        FUN_10122c20(&local_130,0x24);
        goto LAB_1008cb00;
      }
    }
    else if (((uVar13 - 1 & 0xfffffffd) == 0) && ((uVar13 == 3 || ((param_2[0xcd] & 7) != 0)))) {
      if ((uint *)*puVar7 == extraout_s16) {
        local_e0 = local_e0 & 0xffffffff00000000;
        uVar13 = 0;
        puVar17 = extraout_s16;
      }
      else {
        uVar13 = (uint)local_e0;
      }
      if (uVar13 == 0) {
        uVar6 = FUN_10121590(param_2,4,1);
        local_d0 = 0xffffffffffffffff;
        uStack_c8 = 0xffffffffffffffff;
        local_e0 = CONCAT44(local_e0._4_4_,uVar6);
      }
      local_e0._0_5_ = CONCAT14(0xe4,(uint)local_e0);
      uVar13 = 0;
      local_f0 = cVar12;
      local_ec = puVar17;
      local_c0 = puVar15;
      do {
        local_108 = 0;
        local_120 = (uint *)(1 << (ulonglong)(uVar13 & 0x1f) & 0xffU | 0x100);
        puStack_10c = &local_60;
        local_114 = &local_b0;
        local_124 = (uint *)(&DAT_101621a0)[uVar13];
        local_128 = 0x80000046;
        local_130 = param_2;
        uStack_12c = param_3;
        local_11c = (uint *)&local_e0;
        local_118 = puVar7;
        local_110 = param_2 + 0x128;
        FUN_10122c20(&local_130,0x2c);
        puVar14 = local_c0;
        puVar18 = local_ec;
        cVar12 = local_f0;
        uVar13 = uVar13 + 1;
      } while (uVar13 < 4);
      local_90 = param_2[0x28];
      local_7c = 0xffffffffffffffff;
      local_80 = 0x3e4ccccd;
      local_8c = 0xe4;
      local_74 = 0xffffffff;
      local_118 = &local_90;
      local_114 = (uint *)0x0;
      local_11c = (uint *)&local_e0;
      local_120 = (uint *)&local_e0;
      local_124 = (uint *)0x101;
      local_128 = 0x11;
      local_130 = param_2;
      uStack_12c = param_3;
      FUN_10122c20(&local_130,0x20);
      local_110 = &local_60;
      puStack_10c = (uint *)0x0;
      local_118 = &local_b0;
      local_120 = (uint *)&local_e0;
      local_124 = (uint *)0x102;
      local_128 = 0x46;
      local_130 = param_2;
      uStack_12c = param_3;
      local_11c = puVar7;
      local_114 = param_2 + 0x128;
      FUN_10122c20(&local_130,0x28);
      local_110 = (uint *)&local_e0;
      puStack_10c = (uint *)0x0;
      local_114 = (uint *)0x100;
      local_118 = &local_90;
      local_11c = (uint *)&local_e0;
      local_120 = (uint *)0x155;
      local_124 = param_2 + 0xcc;
      local_128 = 0x32;
      local_130 = param_2;
      uStack_12c = param_3;
      FUN_10122c20(&local_130,0x28);
LAB_1008cb00:
      pbVar4 = (byte *)((int)param_2 + ((int)puVar14 >> 3) + 0xac);
      *pbVar4 = *pbVar4 | (byte)(1 << (ulonglong)((uint)puVar14 & 7));
    }
    if (cVar12 != '\0') {
      local_90 = param_2[0x28];
      local_120 = param_2 + 0xcc;
      local_7c = 0xffffffffffffffff;
      local_80 = 0x3f800000;
      local_8c = 0xe4;
      local_74 = 0xffffffff;
      local_11c = &local_90;
      local_118 = (uint *)0x0;
      local_124 = (uint *)0x108;
      local_128 = 0x36;
      local_130 = param_2;
      uStack_12c = param_3;
      FUN_10122c20(&local_130,0x1c);
    }
    goto LAB_1008cb7c;
  }
  FUN_1008cbe0(&local_70,puVar17,puVar15,iVar10);
  pbVar4 = (byte *)((int)param_2 + ((int)puVar14 >> 3) + 0xac);
  *pbVar4 = *pbVar4 | (byte)(1 << (ulonglong)(uVar11 & 7));
LAB_1008cb7c:
  FUN_10121648(param_2,(uint)local_e0);
  FUN_10121648(param_2,puVar18);
  return;
}


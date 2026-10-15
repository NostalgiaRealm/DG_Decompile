/*
 * FUN_1008cdf0 at 1008cdf0
 * undefined FUN_1008cdf0(void)
 * Address ranges: 1008cdf0-1008f257
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1008cdf0(ulonglong param_1,undefined4 *param_2,int param_3,uint *param_4,
                      ulonglong param_5)

{
  ulonglong *puVar1;
  undefined1 *puVar2;
  char *pcVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint *puVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  char cVar18;
  char cVar19;
  longlong lVar20;
  int iVar21;
  uint *extraout_w14;
  uint *extraout_w14_00;
  uint *extraout_w14_01;
  uint *extraout_w15;
  ulonglong uVar22;
  uint *puVar23;
  uint *puVar24;
  undefined4 *local_170;
  int iStack_16c;
  uint *local_168;
  uint *local_164;
  uint *local_160;
  ulonglong *local_15c;
  ulonglong *local_158;
  uint *local_154;
  uint *local_150;
  uint *local_14c;
  int local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  uint *local_120;
  uint *local_11c;
  uint *local_118;
  uint local_110;
  uint uStack_10c;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  uint local_f0;
  char local_ec;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  uint local_c0;
  undefined1 local_bc;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint *local_a0;
  undefined4 *local_98;
  int iStack_94;
  uint local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_118 = param_2 + 0x138;
  puVar24 = param_2 + 0xcc;
  *local_118 = 0xffffffff;
  uVar16 = ZEXT48(param_4);
  *puVar24 = 0;
  local_120 = (uint *)*param_4;
  uVar10 = (uint)local_120 & 0xffff;
  local_11c = (uint *)param_1;
  local_d0 = param_5;
  local_a0 = local_118;
  local_98 = param_2;
  iStack_94 = param_3;
  if (0x5f < uVar10 - 1) goto switchD_1008ce7c_caseD_c;
  puVar23 = param_4 + 1;
  uVar22 = ZEXT48(puVar23);
  switch(uVar10) {
  case 1:
  case 0x23:
    *local_118 = 0;
    local_170 = (undefined4 *)CONCAT31(local_170._1_3_,uVar10 == 0x23);
    uVar22 = FUN_1008b810(param_1,uVar22,0xf0000,1,0,param_2,param_3,0);
    uVar16 = uVar22 & 0xffffffff;
    uVar10 = *local_118;
    uVar7 = (undefined1)(uVar10 >> 0x10);
    if ((uVar10 == 0xffffffff) || (uVar10 == 0)) {
      local_160 = param_2 + 0xf8;
      local_15c = (ulonglong *)0x0;
      local_168 = (uint *)(param_2[200] | 0x36);
      local_170 = param_2;
      iStack_16c = param_3;
      local_164 = puVar24;
      param_1 = FUN_10122c20(&local_170,0x18);
      puVar23 = local_118;
    }
    else {
      local_c0 = FUN_1008b610(uVar22,param_2);
      uStack_a8 = 0xffffffff;
      uStack_a4 = 0xffffffff;
      local_b0 = 0xffffffff;
      uStack_ac = 0xffffffff;
      local_bc = uVar7;
      uVar10 = FUN_10123210(0xe4,*(undefined1 *)(param_2 + 0xcd));
      local_15c = (ulonglong *)(param_2 + 0xf8);
      local_158 = (ulonglong *)(uVar10 & 0xff | 0x100);
      local_168 = (uint *)(param_2[200] | 0x37);
      local_160 = &local_c0;
      if ((*local_118 & 0xf000000) == 0xd000000) {
        local_150 = (uint *)0x0;
        local_170 = param_2;
        iStack_16c = param_3;
        local_164 = puVar24;
        local_154 = (uint *)local_15c;
        local_15c = local_158;
        local_158 = (ulonglong *)puVar24;
        param_1 = FUN_10122c20(&local_170,0x24);
        puVar23 = local_118;
      }
      else {
        local_150 = (uint *)0x0;
        local_170 = param_2;
        iStack_16c = param_3;
        local_164 = puVar24;
        local_154 = puVar24;
        param_1 = FUN_10122c20(&local_170,0x24);
        puVar23 = local_118;
      }
    }
    goto LAB_1008cf9c;
  case 2:
  case 3:
    local_170 = (undefined4 *)((uint)local_170._1_3_ << 8);
    uVar16 = FUN_1008b810(param_1,uVar22,0xf0000,2,0,param_2,param_3,0);
    local_15c = (ulonglong *)(param_2 + 0x104);
    if (uVar10 == 3) {
      *(uint *)local_15c = *(uint *)local_15c ^ 0x80000000;
    }
    local_158 = (ulonglong *)0x0;
    local_168 = (uint *)param_2[200];
    local_160 = param_2 + 0xf8;
    local_170 = param_2;
    iStack_16c = param_3;
    local_164 = puVar24;
    param_1 = FUN_10122c20(&local_170,0x1c);
    uVar16 = uVar16 & 0xffffffff;
    break;
  case 4:
    local_170 = (undefined4 *)((uint)local_170._1_3_ << 8);
    uVar16 = FUN_1008b810(param_1,uVar22,0xf0000,3,0,param_2,param_3,0);
    local_15c = (ulonglong *)(param_2 + 0x104);
    local_160 = param_2 + 0xf8;
    local_168 = (uint *)(param_2[200] | 0x32);
    local_158 = (ulonglong *)(param_2 + 0x110);
    local_154 = (uint *)0x0;
    local_170 = param_2;
    iStack_16c = param_3;
    local_164 = puVar24;
    param_1 = FUN_10122c20(&local_170,0x20);
    uVar16 = uVar16 & 0xffffffff;
    break;
  case 5:
    local_170 = (undefined4 *)((uint)local_170._1_3_ << 8);
    uVar16 = FUN_1008b810(param_1,uVar22,0xf0000,2,0,param_2,param_3,0);
    local_158 = (ulonglong *)0x0;
    local_15c = (ulonglong *)(param_2 + 0x104);
    local_160 = param_2 + 0xf8;
    local_168 = (uint *)(param_2[200] | 0x38);
    local_170 = param_2;
    iStack_16c = param_3;
    local_164 = puVar24;
    param_1 = FUN_10122c20(&local_170,0x1c);
    uVar16 = uVar16 & 0xffffffff;
    break;
  case 6:
    local_170 = (undefined4 *)((uint)local_170._1_3_ << 8);
    uVar16 = FUN_1008b810(param_1,uVar22,0xf0000,1,0,param_2,param_3,0);
    local_f0 = FUN_10121590(param_2,4,0);
    local_ec = '\x02';
    puVar1 = (ulonglong *)(param_2 + 0xf8);
    uStack_d8 = 0xffffffffffffffff;
    local_e0 = 0xffffffffffffffff;
    local_110 = param_2[0x29];
    local_100 = 0;
    uStack_f8 = 0;
    uStack_10c = CONCAT31(uStack_10c._1_3_,0xe4);
    local_80 = 0x7cf0bdc27cf0bdc2;
    uStack_78 = 0x7cf0bdc27cf0bdc2;
    uStack_68 = *(undefined8 *)(param_2 + 0xfa);
    uStack_58 = *(undefined8 *)(param_2 + 0xfe);
    uStack_60 = *(undefined8 *)(param_2 + 0xfc);
    uStack_8c = CONCAT31(uStack_8c._1_3_,0xe4);
    uStack_48 = *(undefined8 *)(param_2 + 0x102);
    local_50 = *(undefined8 *)(param_2 + 0x100);
    local_70 = *puVar1 & 0xffffffff7fffffff | 0x8000000;
    local_15c = &local_70;
    local_158 = (ulonglong *)0x0;
    local_160 = &local_110;
    local_164 = &local_f0;
    local_168 = (uint *)0x31;
    local_170 = param_2;
    iStack_16c = param_3;
    local_90 = local_110;
    FUN_10122c20(&local_170,0x1c);
    iVar9 = FUN_10122f60(*param_2);
    if (iVar9 - 0x40U < 2) {
      local_c0 = param_2[0x28];
      local_bc = 0xe4;
      uStack_a4 = 0xffffffff;
      local_b0 = 0x3f800000;
      local_154 = (uint *)0x0;
      uStack_ac = 0xffffffff;
      uStack_a8 = 0xffffffff;
      local_15c = (ulonglong *)&local_c0;
      local_160 = &local_f0;
      local_164 = (uint *)0x101;
      local_168 = (uint *)0xe;
      local_170 = param_2;
      iStack_16c = param_3;
      local_158 = puVar1;
      FUN_10122c20(&local_170,0x20);
    }
    else {
      local_160 = &local_f0;
      local_158 = (ulonglong *)0x0;
      local_164 = (uint *)0x101;
      local_168 = (uint *)0x81;
      local_170 = param_2;
      iStack_16c = param_3;
      local_15c = puVar1;
      FUN_10122c20(&local_170,0x1c);
    }
    local_168 = (uint *)(param_2[200] | 0x37);
    local_150 = &local_90;
    local_14c = (uint *)0x0;
    local_154 = &local_f0;
    local_158 = (ulonglong *)0x100;
    local_15c = (ulonglong *)&local_f0;
    local_160 = (uint *)0x155;
    local_170 = param_2;
    iStack_16c = param_3;
    local_164 = puVar24;
    param_1 = FUN_10122c20(&local_170,0x28);
    uVar16 = uVar16 & 0xffffffff;
    break;
  case 7:
    local_170 = (undefined4 *)CONCAT31(local_170._1_3_,1);
    uVar16 = FUN_1008b810(param_1,uVar22,0xf0000,1,0,param_2,param_3,1);
    local_f0 = FUN_10121590(param_2,4,0);
    local_ec = '\x02';
    local_110 = param_2[0x28];
    uStack_d8 = 0xffffffffffffffff;
    local_e0 = 0xffffffffffffffff;
    uStack_10c = CONCAT31(uStack_10c._1_3_,0xe4);
    local_100 = 0xffffffff7f800000;
    uStack_f8 = 0xffffffffffffffff;
    local_160 = param_2 + 0xf8;
    local_15c = (ulonglong *)0x0;
    local_164 = &local_f0;
    local_168 = (uint *)0x44;
    local_bc = 0xe4;
    local_b0 = 0x7cf0bdc2;
    uStack_ac = 0xffffffff;
    uStack_a8 = 0xffffffff;
    uStack_a4 = 0xffffffff;
    local_170 = param_2;
    iStack_16c = param_3;
    local_c0 = local_110;
    FUN_10122c20(&local_170,0x18);
    local_154 = &local_110;
    local_150 = (uint *)0x0;
    local_158 = (ulonglong *)&local_f0;
    local_160 = &local_f0;
    local_15c = (ulonglong *)0x155;
    local_164 = (uint *)0x101;
    local_168 = (uint *)0x20;
    local_170 = param_2;
    iStack_16c = param_3;
    FUN_10122c20(&local_170,0x24);
    local_168 = (uint *)(param_2[200] | 0x37);
    local_150 = &local_f0;
    local_14c = (uint *)0x0;
    local_158 = (ulonglong *)&local_c0;
    local_154 = (uint *)0x155;
    local_15c = (ulonglong *)&local_f0;
    local_160 = (uint *)0x100;
    local_170 = param_2;
    iStack_16c = param_3;
    local_164 = puVar24;
    param_1 = FUN_10122c20(&local_170,0x28);
    uVar16 = uVar16 & 0xffffffff;
    break;
  case 8:
  case 9:
    local_170 = (undefined4 *)((uint)local_170._1_3_ << 8);
    uVar16 = FUN_1008b810(param_1,uVar22,0xf0000,2,0,param_2,param_3,0);
    local_158 = (ulonglong *)0x0;
    uVar12 = 0x10;
    if (uVar10 != 8) {
      uVar12 = 0x11;
    }
    local_15c = (ulonglong *)(param_2 + 0x104);
    local_160 = param_2 + 0xf8;
    local_168 = (uint *)(uVar12 | param_2[200]);
    local_170 = param_2;
    iStack_16c = param_3;
    local_164 = puVar24;
    param_1 = FUN_10122c20(&local_170,0x1c);
    uVar16 = uVar16 & 0xffffffff;
    break;
  case 10:
  case 0xb:
    local_170 = (undefined4 *)((uint)local_170._1_3_ << 8);
    uVar16 = FUN_1008b810(param_1,uVar22,0xf0000,2,0,param_2,param_3,0);
    local_158 = (ulonglong *)0x0;
    uVar12 = 0x33;
    if (uVar10 != 10) {
      uVar12 = 0x34;
    }
    local_15c = (ulonglong *)(param_2 + 0x104);
    local_160 = param_2 + 0xf8;
    local_168 = (uint *)(uVar12 | param_2[200]);
    local_170 = param_2;
    iStack_16c = param_3;
    local_164 = puVar24;
    param_1 = FUN_10122c20(&local_170,0x1c);
    uVar16 = uVar16 & 0xffffffff;
    break;
  case 0xe:
    local_170 = (undefined4 *)((uint)local_170._1_3_ << 8);
    uVar16 = FUN_1008b810(param_1,uVar22,0xf0000,1,0,param_2,param_3,0);
    local_160 = param_2 + 0xf8;
    local_15c = (ulonglong *)0x0;
    local_168 = (uint *)(param_2[200] | 0x19);
    local_170 = param_2;
    iStack_16c = param_3;
    local_164 = puVar24;
    param_1 = FUN_10122c20(&local_170,0x18);
    uVar16 = uVar16 & 0xffffffff;
    break;
  case 0xf:
    local_170 = (undefined4 *)CONCAT31(local_170._1_3_,1);
    uVar16 = FUN_1008b810(param_1,uVar22,0xf0000,1,0,param_2,param_3,1);
    local_f0 = FUN_10121590(param_2,4,0);
    local_ec = '\x02';
    local_110 = param_2[0x28];
    uStack_d8 = 0xffffffffffffffff;
    local_e0 = 0xffffffffffffffff;
    local_100 = 0xffffffffff800000;
    uStack_f8 = 0xffffffffffffffff;
    local_160 = param_2 + 0xf8;
    local_15c = (ulonglong *)0x0;
    local_164 = &local_f0;
    local_168 = (uint *)0x2f;
    uStack_10c = CONCAT31(uStack_10c._1_3_,0xe4);
    local_bc = 0xe4;
    local_b0 = 0xfcf0bdc2;
    uStack_ac = 0xffffffff;
    uStack_a8 = 0xffffffff;
    uStack_a4 = 0xffffffff;
    local_170 = param_2;
    iStack_16c = param_3;
    local_c0 = local_110;
    FUN_10122c20(&local_170,0x18);
    local_154 = &local_110;
    local_150 = (uint *)0x0;
    local_158 = (ulonglong *)&local_f0;
    local_160 = &local_f0;
    local_15c = (ulonglong *)0x155;
    local_164 = (uint *)0x101;
    local_168 = (uint *)0x20;
    local_170 = param_2;
    iStack_16c = param_3;
    FUN_10122c20(&local_170,0x24);
    local_168 = (uint *)(param_2[200] | 0x37);
    local_150 = &local_f0;
    local_14c = (uint *)0x0;
    local_158 = (ulonglong *)&local_c0;
    local_154 = (uint *)0x155;
    local_15c = (ulonglong *)&local_f0;
    local_160 = (uint *)0x100;
    local_170 = param_2;
    iStack_16c = param_3;
    local_164 = puVar24;
    param_1 = FUN_10122c20(&local_170,0x28);
    uVar16 = uVar16 & 0xffffffff;
    break;
  case 0x12:
    local_170 = (undefined4 *)((uint)local_170._1_3_ << 8);
    uVar16 = FUN_1008b810(param_1,uVar22,0xf0000,3,0,param_2,param_3,0);
    uVar7 = *(undefined1 *)(param_2 + 0xcd);
    local_c0 = FUN_10121590(param_2,4,0);
    puVar23 = param_2 + 0x110;
    uStack_a8 = 0xffffffff;
    uStack_a4 = 0xffffffff;
    local_b0 = 0xffffffff;
    uStack_ac = 0xffffffff;
    local_158 = (ulonglong *)0x0;
    *puVar23 = *puVar23 ^ 0x80000000;
    local_160 = param_2 + 0x104;
    local_164 = &local_c0;
    local_168 = (uint *)0x0;
    local_170 = param_2;
    iStack_16c = param_3;
    local_15c = (ulonglong *)puVar23;
    local_bc = uVar7;
    FUN_10122c20(&local_170,0x1c);
    *puVar23 = *puVar23 ^ 0x80000000;
    uVar10 = FUN_10123210(0xe4,*(undefined1 *)(param_2 + 0xcd));
    local_150 = (uint *)0x0;
    local_15c = (ulonglong *)(uVar10 & 0xff | 0x100);
    local_168 = (uint *)(param_2[200] | 0x32);
    local_158 = (ulonglong *)&local_c0;
    local_170 = param_2;
    iStack_16c = param_3;
    local_164 = puVar24;
    local_160 = extraout_w14;
    local_154 = puVar23;
    param_1 = FUN_10122c20(&local_170,0x24);
    uVar16 = uVar16 & 0xffffffff;
    break;
  case 0x13:
    local_170 = (undefined4 *)((uint)local_170._1_3_ << 8);
    uVar16 = FUN_1008b810(param_1,uVar22,0xf0000,1,0,param_2,param_3,0);
    local_160 = param_2 + 0xf8;
    local_15c = (ulonglong *)0x0;
    local_168 = (uint *)(param_2[200] | 0x1a);
    local_170 = param_2;
    iStack_16c = param_3;
    local_164 = puVar24;
    param_1 = FUN_10122c20(&local_170,0x18);
    uVar16 = uVar16 & 0xffffffff;
    break;
  case 0x14:
  case 0x15:
    puVar14 = param_2 + 0xf8;
    local_11c = param_2 + 0x104;
    local_118 = (uint *)(param_2[200] | 0x11);
    if ((*puVar23 >> 0x10 & 1) != 0) {
      local_170 = (undefined4 *)((uint)local_170._1_3_ << 8);
      uVar16 = FUN_1008b810(param_1,uVar22,0x10000,2,0,param_2,param_3,0);
      uVar16 = uVar16 & 0xffffffff;
      local_154 = (uint *)0x0;
      local_158 = (ulonglong *)local_11c;
      local_164 = (uint *)0x101;
      local_168 = local_118;
      local_170 = param_2;
      iStack_16c = param_3;
      local_160 = puVar24;
      local_15c = (ulonglong *)puVar14;
      param_1 = FUN_10122c20(&local_170,0x20);
    }
    if ((*puVar23 >> 0x11 & 1) != 0) {
      local_170 = (undefined4 *)((uint)local_170 & 0xffffff00);
      uVar16 = FUN_1008b810(param_1,uVar22,0x20000,2,1,param_2,param_3,0);
      uVar16 = uVar16 & 0xffffffff;
      local_154 = (uint *)0x0;
      local_158 = (ulonglong *)local_11c;
      local_164 = (uint *)0x102;
      local_168 = local_118;
      local_170 = param_2;
      iStack_16c = param_3;
      local_160 = puVar24;
      local_15c = (ulonglong *)puVar14;
      param_1 = FUN_10122c20(&local_170,0x20);
    }
    if ((*puVar23 >> 0x12 & 1) != 0) {
      local_170 = (undefined4 *)((uint)local_170 & 0xffffff00);
      uVar16 = FUN_1008b810(param_1,uVar22,0x40000,2,2,param_2,param_3,0);
      uVar16 = uVar16 & 0xffffffff;
      local_154 = (uint *)0x0;
      local_158 = (ulonglong *)local_11c;
      local_164 = (uint *)0x104;
      local_168 = local_118;
      local_170 = param_2;
      iStack_16c = param_3;
      local_160 = puVar24;
      local_15c = (ulonglong *)puVar14;
      param_1 = FUN_10122c20(&local_170,0x20);
    }
    if ((*puVar23 & 0x80000) != 0 && uVar10 == 0x14) {
      local_170 = (undefined4 *)((uint)local_170 & 0xffffff00);
      uVar16 = FUN_1008b810(param_1,puVar23,0x80000,2,3,param_2,param_3,0);
      local_154 = (uint *)0x0;
      local_158 = (ulonglong *)local_11c;
      local_164 = (uint *)0x108;
      local_168 = local_118;
      local_170 = param_2;
      iStack_16c = param_3;
      local_160 = puVar24;
      local_15c = (ulonglong *)puVar14;
      param_1 = FUN_10122c20(&local_170,0x20);
      uVar16 = uVar16 & 0xffffffff;
    }
    break;
  case 0x16:
  case 0x17:
  case 0x18:
    local_d0._4_4_ = (undefined4)(param_5 >> 0x20);
    local_d0 = CONCAT44(local_d0._4_4_,param_2 + 0xf8);
    pbVar4 = (byte *)(param_2 + 0x105);
    local_120 = (uint *)(param_2[200] | 0x10);
    local_11c = param_2 + 0xf9;
    local_118 = param_2 + 0x104;
    if ((*puVar23 >> 0x10 & 1) != 0) {
      local_170 = (undefined4 *)((uint)local_170._1_3_ << 8);
      uVar16 = FUN_1008b810(param_1,uVar22,0x10000,2,0,param_2,param_3,0);
      uVar16 = uVar16 & 0xffffffff;
      local_14c = (uint *)0x0;
      local_154 = (uint *)((*pbVar4 >> 4 & 3) << 6 | *pbVar4 & 0x3f | 0x100);
      local_15c = (ulonglong *)
                  (((byte)((byte)*local_11c >> 4) & 3) << 6 | (byte)*local_11c & 0x3f | 0x100);
      local_150 = local_118;
      local_158 = (ulonglong *)(uint *)local_d0;
      local_164 = (uint *)0x101;
      local_168 = local_120;
      local_170 = param_2;
      iStack_16c = param_3;
      local_160 = puVar24;
      param_1 = FUN_10122c20(&local_170,0x28);
    }
    if ((*puVar23 >> 0x11 & 1) != 0) {
      local_170 = (undefined4 *)((uint)local_170 & 0xffffff00);
      uVar16 = FUN_1008b810(param_1,uVar22,0x20000,2,1,param_2,param_3,0);
      uVar16 = uVar16 & 0xffffffff;
      local_14c = (uint *)0x0;
      local_154 = (uint *)((*pbVar4 >> 4 & 3) << 6 | *pbVar4 & 0x3f | 0x100);
      local_15c = (ulonglong *)
                  (((byte)((byte)*local_11c >> 4) & 3) << 6 | (byte)*local_11c & 0x3f | 0x100);
      local_150 = local_118;
      local_158 = (ulonglong *)(uint *)local_d0;
      local_164 = (uint *)0x102;
      local_168 = local_120;
      local_170 = param_2;
      iStack_16c = param_3;
      local_160 = puVar24;
      param_1 = FUN_10122c20(&local_170,0x28);
    }
    if (((*puVar23 >> 0x12 & 1) != 0) && (uVar10 - 0x16 < 2)) {
      local_170 = (undefined4 *)((uint)local_170 & 0xffffff00);
      uVar16 = FUN_1008b810(param_1,uVar22,0x40000,2,2,param_2,param_3,0);
      uVar16 = uVar16 & 0xffffffff;
      local_14c = (uint *)0x0;
      local_154 = (uint *)((*pbVar4 >> 4 & 3) << 6 | *pbVar4 & 0x3f | 0x100);
      local_15c = (ulonglong *)
                  (((byte)((byte)*local_11c >> 4) & 3) << 6 | (byte)*local_11c & 0x3f | 0x100);
      local_150 = local_118;
      local_158 = (ulonglong *)(uint *)local_d0;
      local_164 = (uint *)0x104;
      local_168 = local_120;
      local_170 = param_2;
      iStack_16c = param_3;
      local_160 = puVar24;
      param_1 = FUN_10122c20(&local_170,0x28);
    }
    if ((*puVar23 & 0x80000) != 0 && uVar10 == 0x16) {
      local_170 = (undefined4 *)((uint)local_170 & 0xffffff00);
      uVar16 = FUN_1008b810(param_1,uVar22,0x80000,2,3,param_2,param_3,0);
      local_14c = (uint *)0x0;
      local_154 = (uint *)((*pbVar4 >> 4 & 3) << 6 | *pbVar4 & 0x3f | 0x100);
      local_15c = (ulonglong *)
                  (((byte)((byte)*local_11c >> 4) & 3) << 6 | (byte)*local_11c & 0x3f | 0x100);
      local_150 = local_118;
      local_158 = (ulonglong *)(uint *)local_d0;
      local_164 = (uint *)0x108;
      local_168 = local_120;
      local_170 = param_2;
      iStack_16c = param_3;
      local_160 = puVar24;
      param_1 = FUN_10122c20(&local_170,0x28);
      uVar16 = uVar16 & 0xffffffff;
    }
    break;
  case 0x19:
    FUN_1008f3f8(&local_98);
    local_158 = (ulonglong *)0x0;
    local_160 = (uint *)(*puVar23 & 0x7ff | 0x20410a00);
    local_15c = (ulonglong *)0x0;
    local_168 = (uint *)&DAT_00000004;
    local_164 = (uint *)0xffffffff;
    local_170 = param_2;
    iStack_16c = param_3;
    param_1 = FUN_10122a88(&local_170,0x1c);
    goto LAB_1008f1a4;
  case 0x1a:
    local_120 = param_4 + 2;
    uVar12 = *local_120;
    uVar11 = (uVar12 & 0x1800 | uVar12 >> 0x14 & 0x7ff) >> 8;
    uVar10 = uVar12 & 0xf000000;
    if (uVar11 == 0xe) {
      local_120 = (uint *)(uVar12 & 0x7ff);
      puVar23 = (uint *)(*puVar23 & 0x7ff | 0x20410a00);
      if ((*(char *)(param_2 + 0x3c) == '\0') ||
         (*(char *)((int)local_120 + param_2[0x3d] + 0x2a0) == '\0')) {
        FUN_1008f3f8(&local_98);
        local_168 = (uint *)0x40005;
        local_150 = (uint *)0x0;
        local_14c = (uint *)0x0;
        local_158 = (ulonglong *)((((uint)local_120 >> 2) + 0xe8) * 0x10);
        local_15c = (ulonglong *)((uint)local_120 & 3);
        local_160 = (uint *)(param_2[0x1c] | 0x10000000);
        if (uVar10 == 0xd000000) {
          local_168 = (uint *)&DAT_00000005;
        }
        local_164 = (uint *)0xffffffff;
        local_170 = param_2;
        iStack_16c = param_3;
        local_154 = puVar23;
        param_1 = FUN_10122a88(&local_170,0x28);
      }
      else {
        iVar9 = *(int *)(param_2[0x3d] + (int)local_120 * 4 + 0x2b0);
        if (uVar10 == 0xd000000) {
          bVar8 = iVar9 == 0;
        }
        else {
          bVar8 = iVar9 != 0;
        }
        if (bVar8) {
          FUN_1008f3f8(&local_98);
          local_158 = (ulonglong *)0x0;
          local_168 = (uint *)&DAT_00000004;
          local_164 = (uint *)0xffffffff;
          local_15c = (ulonglong *)0x0;
          local_170 = param_2;
          iStack_16c = param_3;
          local_160 = puVar23;
          param_1 = FUN_10122a88(&local_170,0x1c);
        }
      }
    }
    else if (uVar11 == 0x13) {
      uVar17 = FUN_1008f3f8(&local_98);
      puVar14 = (uint *)(*(ushort *)((int)local_120 + 2) & 3);
      uVar12 = *puVar23;
      uVar11 = FUN_1008b610(uVar17,param_2);
      local_150 = (uint *)0x0;
      local_168 = (uint *)0x40005;
      local_154 = (uint *)0x0;
      if (uVar10 == 0xd000000) {
        local_168 = (uint *)&DAT_00000005;
      }
      local_160 = (uint *)(uVar11 | 0x10000000);
      local_164 = (uint *)0xffffffff;
      local_170 = param_2;
      iStack_16c = param_3;
      local_15c = (ulonglong *)puVar14;
      local_158 = (ulonglong *)(uVar12 & 0x7ff | 0x20410a00);
      param_1 = FUN_10122a88(&local_170,0x24);
    }
    uVar16 = ZEXT48(param_4 + 3);
    break;
  case 0x1b:
  case 0x26:
    puVar14 = param_2 + 0x13a;
    if (3 < *puVar14) break;
    *(undefined1 *)((int)param_2 + *puVar14 + 0x4fc) = 0;
    if (param_2[*puVar14 + 0xb5] == 0) {
      puVar15 = param_2 + *puVar14 + 0xb5;
      uVar13 = FUN_10121590(param_2,4,1);
      *puVar15 = uVar13;
    }
    uVar12 = *puVar14;
    local_164 = (uint *)param_2[uVar12 + 0xb5];
    *puVar14 = uVar12 + 1;
    if (uVar10 == 0x1b) {
      uVar10 = param_4[2];
      param_2[uVar12 + 0x13b] = param_2[0x139];
      uVar12 = *puVar14;
      param_2[0x139] = uVar12;
      param_2[uVar12 + 0xb8] = 0xffffffff;
      param_4 = puVar23;
    }
    else {
      uVar10 = *puVar23;
    }
    uVar10 = uVar10 & 0x7ff;
    local_120 = local_164;
    if ((*(char *)(param_2 + 0x3c) == '\0') ||
       (iVar9 = param_2[0x3d], *(char *)(uVar10 + iVar9 + 400) == '\0')) {
      local_138 = 0;
      local_140 = 0x7f;
      uStack_13c = 0;
      local_144 = 0xff;
      local_14c = (uint *)0xe4;
      local_148 = 0xff;
      local_150 = (uint *)param_2[0x29];
      local_154 = (uint *)(uVar10 << 4);
      local_15c = (ulonglong *)param_2[0x20];
      local_158 = (ulonglong *)0xe4;
      local_160 = (uint *)0x7;
      local_168 = (uint *)0x25;
      local_170 = param_2;
      iStack_16c = param_3;
      FUN_10122a88(&local_170,0x3c);
    }
    else {
      iVar21 = iVar9 + uVar10 * 0x10;
      local_144 = 0;
      local_148 = 0;
      if (*(int *)(iVar21 + 0x1ac) < 0) {
        local_148 = *(int *)(iVar21 + 0x1ac);
      }
      iVar9 = *(int *)(iVar9 + (uVar10 + 0x1a) * 0x10);
      local_14c = (uint *)0x7f;
      if (*(int *)(iVar21 + 0x1a8) < 0x7f) {
        local_14c = (uint *)*(int *)(iVar21 + 0x1a8);
      }
      local_150 = (uint *)0xff;
      if (*(int *)(iVar21 + 0x1a4) < 0xff) {
        local_150 = (uint *)*(int *)(iVar21 + 0x1a4);
      }
      local_154 = (uint *)0xff;
      if (iVar9 < 0xff) {
        local_154 = (uint *)iVar9;
      }
      local_15c = (ulonglong *)param_2[0x29];
      local_158 = (ulonglong *)0xe4;
      local_160 = (uint *)0x7;
      local_168 = (uint *)0x36;
      local_170 = param_2;
      iStack_16c = param_3;
      FUN_10122a88(&local_170,0x30);
    }
    local_140 = 0;
    uStack_13c = 0;
    local_148 = 0;
    local_144 = 0xffffff80;
    local_150 = (uint *)&DAT_000000e4;
    local_14c = (uint *)0x0;
    local_154 = (uint *)param_2[0x29];
    local_158 = (ulonglong *)0xa4;
    local_160 = (uint *)0x7;
    local_15c = (ulonglong *)local_120;
    local_168 = (uint *)0x24;
    local_164 = local_120;
    local_170 = param_2;
    iStack_16c = param_3;
    FUN_10122a88(&local_170,0x38);
    local_168 = (uint *)0x30;
    local_164 = (uint *)0x0;
    local_170 = param_2;
    iStack_16c = param_3;
    FUN_10122a88(&local_170,0x10);
    local_158 = (ulonglong *)0x0;
    local_160 = (uint *)((uint)local_120 | 0x10000000);
    local_15c = (ulonglong *)0x0;
    local_168 = (uint *)0x3;
    local_164 = (uint *)0xffffffff;
    local_170 = param_2;
    iStack_16c = param_3;
    param_1 = FUN_10122a88(&local_170,0x1c);
    goto LAB_1008f1a4;
  case 0x1d:
  case 0x27:
    puVar23 = param_2 + 0x13a;
    uVar12 = *puVar23;
    uVar16 = uVar22;
    if (uVar12 < 5) {
      *puVar23 = uVar12 - 1;
      puVar14 = (uint *)param_2[uVar12 + 0xb4];
      local_14c = (uint *)0xffffffff;
      local_148 = 0;
      local_150 = (uint *)&DAT_000000e4;
      local_154 = (uint *)param_2[0x28];
      local_158 = (ulonglong *)0x0;
      local_160 = (uint *)0x1;
      local_168 = (uint *)0x1e;
      local_170 = param_2;
      iStack_16c = param_3;
      local_164 = puVar14;
      local_15c = (ulonglong *)puVar14;
      FUN_10122a88(&local_170,0x2c);
      if (uVar10 == 0x1d) {
        local_150 = (uint *)0xaa;
        local_14c = (uint *)0x0;
        local_158 = (ulonglong *)0x55;
        local_160 = (uint *)0x2;
        local_168 = (uint *)0x1e;
        local_170 = param_2;
        iStack_16c = param_3;
        local_164 = puVar14;
        local_15c = (ulonglong *)puVar14;
        local_154 = puVar14;
        FUN_10122a88(&local_170,0x28);
        param_2[0x139] = param_2[*puVar23 + 0x13b];
      }
      local_168 = (uint *)0x16;
      local_164 = (uint *)0x0;
      local_170 = param_2;
      iStack_16c = param_3;
      param_1 = FUN_10122a88(&local_170,0x10);
      if (*(char *)((int)param_2 + *puVar23 + 0x4fc) == '\0') {
        param_1 = FUN_10121648(param_2,puVar14);
        param_2[*puVar23 + 0xb5] = 0;
      }
      uVar10 = *puVar23;
      if (uVar10 != 0) {
        pbVar4 = (byte *)((int)param_2 + uVar10 + 0x4fb);
        *pbVar4 = *(byte *)((int)param_2 + uVar10 + 0x4fc) | *pbVar4;
      }
    }
    break;
  case 0x1e:
    local_158 = (ulonglong *)0x0;
    local_160 = (uint *)(*puVar23 & 0x7ff | 0x20410a00);
    local_15c = (ulonglong *)0x0;
    local_168 = (uint *)0x2c;
    local_164 = (uint *)0xffffffff;
    local_170 = param_2;
    iStack_16c = param_3;
    param_1 = FUN_10122a88(&local_170,0x1c);
    goto LAB_1008f1a4;
  case 0x20:
    local_170 = (undefined4 *)CONCAT31(local_170._1_3_,1);
    uVar16 = FUN_1008b810(param_1,uVar22,0xf0000,2,0,param_2,param_3,0);
    local_b0 = 0;
    local_c0 = param_2[0x28];
    uStack_a4 = 0xffffffff;
    local_bc = 0xe4;
    uStack_ac = 0xffffffff;
    uStack_a8 = 0xffffffff;
    local_f0 = FUN_10121590(param_2,4,0);
    local_160 = param_2 + 0xf8;
    local_15c = (ulonglong *)0x0;
    local_164 = &local_f0;
    local_168 = (uint *)0x2f;
    local_ec = '\x01';
    uStack_d8 = 0xffffffffffffffff;
    local_e0 = 0xffffffffffffffff;
    local_170 = param_2;
    iStack_16c = param_3;
    FUN_10122c20(&local_170,0x18);
    local_158 = (ulonglong *)(param_2 + 0x104);
    local_154 = (uint *)0x0;
    local_15c = (ulonglong *)&local_f0;
    local_164 = &local_f0;
    local_160 = (uint *)0x100;
    local_168 = (uint *)0x38;
    local_170 = param_2;
    iStack_16c = param_3;
    FUN_10122c20(&local_170,0x20);
    local_150 = &local_f0;
    local_14c = (uint *)0x0;
    local_158 = (ulonglong *)&local_f0;
    local_154 = (uint *)0x100;
    local_160 = &local_f0;
    local_15c = (ulonglong *)0x100;
    local_164 = (uint *)0x102;
    local_168 = (uint *)0x39;
    local_170 = param_2;
    iStack_16c = param_3;
    FUN_10122c20(&local_170,0x28);
    local_150 = &local_f0;
    local_14c = (uint *)0x0;
    local_158 = (ulonglong *)&local_c0;
    local_154 = (uint *)0x100;
    local_15c = (ulonglong *)&local_f0;
    local_160 = (uint *)0x155;
    local_164 = &local_f0;
    local_168 = (uint *)0x37;
    local_170 = param_2;
    iStack_16c = param_3;
    FUN_10122c20(&local_170,0x28);
    local_158 = (ulonglong *)0x0;
    local_168 = (uint *)(param_2[200] | 0x19);
    local_15c = (ulonglong *)&local_f0;
    local_160 = (uint *)0x100;
    local_170 = param_2;
    iStack_16c = param_3;
    local_164 = puVar24;
    param_1 = FUN_10122c20(&local_170,0x1c);
    uVar16 = uVar16 & 0xffffffff;
    break;
  case 0x21:
    local_170 = (undefined4 *)((uint)local_170._1_3_ << 8);
    uVar16 = FUN_1008b810(param_1,uVar22,0xf0000,2,0,param_2,param_3,0);
    local_90 = FUN_10121590(param_2,4,0);
    bVar6 = *(byte *)(param_2 + 0x105);
    uStack_8c = CONCAT31(uStack_8c._1_3_,7);
    bVar5 = *(byte *)(param_2 + 0xf9);
    puVar23 = param_2 + 0x104;
    uStack_78 = 0xffffffffffffffff;
    local_80 = 0xffffffffffffffff;
    local_150 = (uint *)0x0;
    local_158 = (ulonglong *)
                (((bVar6 & 0xc | bVar6 >> 2 & 3) << 2 | bVar6 & 3) << 2 |
                (bVar6 & 0x30 | 0x1000) >> 4);
    local_160 = (uint *)((bVar5 >> 4 & 3) << 6 | bVar5 & 0x3f | 0x100);
    local_164 = &local_90;
    local_168 = (uint *)0x38;
    local_170 = param_2;
    iStack_16c = param_3;
    local_15c = (ulonglong *)puVar23;
    local_154 = puVar23;
    FUN_10122c20(&local_170,0x24);
    bVar6 = *(byte *)(param_2 + 0x105);
    local_90 = local_90 ^ 0x80000000;
    bVar5 = *(byte *)(param_2 + 0xf9);
    local_158 = (ulonglong *)
                (((bVar6 & 0xc | bVar6 >> 2 & 3) << 2 | bVar6 & 3) << 2 |
                (bVar6 & 0x30 | 0x1000) >> 4);
    local_160 = (uint *)(((bVar5 & 0xfffffc03 | (bVar5 & 3) << 2) << 2 | bVar5 >> 4 & 3) << 2 |
                        (bVar5 & 0xc | 0x400) >> 2);
    local_168 = (uint *)(param_2[200] | 0x32);
    local_14c = &local_90;
    local_148 = 0;
    local_150 = (uint *)0x152;
    local_170 = param_2;
    iStack_16c = param_3;
    local_164 = puVar24;
    local_15c = (ulonglong *)puVar23;
    local_154 = puVar23;
    param_1 = FUN_10122c20(&local_170,0x2c);
    uVar16 = uVar16 & 0xffffffff;
    break;
  case 0x24:
    local_170 = (undefined4 *)((uint)local_170._1_3_ << 8);
    uVar16 = FUN_1008b810(param_1,uVar22,0xf0000,1,0,param_2,param_3,0);
    local_f0 = FUN_10121590(param_2,4,0);
    local_110 = param_2[0x28];
    puVar23 = param_2 + 0xf8;
    uStack_d8 = 0xffffffffffffffff;
    local_e0 = 0xffffffffffffffff;
    local_ec = '\x01';
    uStack_10c = CONCAT31(uStack_10c._1_3_,0xe4);
    local_100 = 0xffffffff7f800000;
    uStack_f8 = 0xffffffffffffffff;
    local_164 = &local_f0;
    local_168 = (uint *)0x10;
    local_158 = (ulonglong *)0x0;
    local_170 = param_2;
    iStack_16c = param_3;
    local_160 = puVar23;
    local_15c = (ulonglong *)puVar23;
    FUN_10122c20(&local_170,0x1c);
    local_15c = (ulonglong *)&local_f0;
    local_158 = (ulonglong *)0x0;
    local_164 = &local_f0;
    local_160 = (uint *)0x100;
    local_168 = (uint *)0x44;
    local_170 = param_2;
    iStack_16c = param_3;
    FUN_10122c20(&local_170,0x1c);
    local_154 = &local_110;
    local_150 = (uint *)0x0;
    local_158 = (ulonglong *)&local_f0;
    local_160 = &local_f0;
    local_15c = (ulonglong *)0x100;
    local_164 = (uint *)0x102;
    local_168 = (uint *)0x27;
    local_170 = param_2;
    iStack_16c = param_3;
    FUN_10122c20(&local_170,0x24);
    local_154 = &local_f0;
    local_150 = (uint *)0x0;
    local_158 = (ulonglong *)0x155;
    local_15c = (ulonglong *)&local_f0;
    local_160 = (uint *)0x100;
    local_164 = &local_f0;
    local_168 = (uint *)0x1;
    local_170 = param_2;
    iStack_16c = param_3;
    FUN_10122c20(&local_170,0x24);
    local_154 = (uint *)0x0;
    local_168 = (uint *)(param_2[200] | 0x38);
    local_15c = (ulonglong *)&local_f0;
    local_160 = (uint *)0x100;
    local_170 = param_2;
    iStack_16c = param_3;
    local_164 = puVar24;
    local_158 = (ulonglong *)puVar23;
    param_1 = FUN_10122c20(&local_170,0x20);
    uVar16 = uVar16 & 0xffffffff;
    break;
  case 0x25:
    local_170 = (undefined4 *)((uint)local_170._1_3_ << 8);
    uVar13 = 1;
    if (*(char *)(param_2[0x3d] + 0x126d) != '\x03') {
      uVar13 = 3;
    }
    uVar16 = FUN_1008b810(param_1,uVar22,0xf0000,uVar13,0,param_2,param_3,0);
    uVar16 = uVar16 & 0xffffffff;
    uVar10 = param_2[200];
    puVar14 = param_2 + 0xf8;
    local_15c = (ulonglong *)puVar14;
    if ((*puVar23 & 0xf0000) == 0x10000) {
      uStack_10c = (uint)uStack_10c._1_3_ << 8;
      local_110 = param_2[0x2a];
      local_158 = (ulonglong *)0x0;
      uStack_f8 = 0xffffffffffffffff;
      local_100 = 0xffffffffffffffff;
      local_168 = (uint *)(uVar10 | 0x4d);
      local_164 = &local_110;
      local_170 = param_2;
      iStack_16c = param_3;
      local_160 = puVar24;
      param_1 = FUN_10122c20(&local_170,0x1c);
    }
    else if ((*puVar23 & 0xf0000) == 0x20000) {
      uStack_10c = (uint)uStack_10c._1_3_ << 8;
      local_110 = param_2[0x2a];
      local_158 = (ulonglong *)0x0;
      uStack_f8 = 0xffffffffffffffff;
      local_100 = 0xffffffffffffffff;
      local_168 = (uint *)(uVar10 | 0x4d);
      local_160 = &local_110;
      local_170 = param_2;
      iStack_16c = param_3;
      local_164 = puVar24;
      param_1 = FUN_10122c20(&local_170,0x1c);
    }
    else {
      local_150 = (uint *)0x0;
      local_168 = (uint *)(uVar10 | 0x4d);
      local_15c = (ulonglong *)0x101;
      local_164 = (uint *)0x102;
      local_170 = param_2;
      iStack_16c = param_3;
      local_160 = puVar24;
      local_158 = (ulonglong *)puVar24;
      local_154 = puVar14;
      param_1 = FUN_10122c20(&local_170,0x24);
    }
    break;
  case 0x28:
    pbVar4 = (byte *)(param_2 + 0x148);
    uVar12 = *puVar23;
    cVar18 = *(char *)((int)param_2 + *pbVar4 + 0x500);
    uVar11 = (uVar12 & 0x1800 | uVar12 >> 0x14 & 0x7ff) >> 8;
    uVar10 = uVar12 & 0xf000000;
    if (uVar11 == 0xe) {
      uVar11 = uVar12 & 0x7ff;
      if ((*(char *)(param_2 + 0x3c) != '\0') && (*(char *)(uVar11 + param_2[0x3d] + 0x2a0) != '\0')
         ) {
        if ((cVar18 != '\x02') &&
           (cVar18 = '\x01', *(int *)(param_2[0x3d] + uVar11 * 4 + 0x2b0) == 0)) {
          cVar18 = '\x02';
        }
        uVar10 = *pbVar4 + 1;
        *pbVar4 = (byte)uVar10;
        uVar7 = cVar18 != '\x02';
        *(char *)((int)param_2 + (uVar10 & 0xff) + 0x500) = cVar18;
        puVar2 = (undefined1 *)(param_3 + 0xc);
        goto LAB_1008ebe8;
      }
      local_158 = (ulonglong *)(((uVar11 >> 2) + 0xe8) * 0x10);
      local_154 = (uint *)0x0;
      local_15c = (ulonglong *)(uVar12 & 3);
      local_168 = (uint *)0x4001f;
      local_160 = (uint *)(param_2[0x1c] | 0x10000000);
      if (uVar10 == 0xd000000) {
        local_168 = (uint *)0x1f;
      }
      local_164 = (uint *)0xffffffff;
      local_170 = param_2;
      iStack_16c = param_3;
      param_1 = FUN_10122a88(&local_170,0x20);
      bVar6 = *pbVar4;
      *pbVar4 = bVar6 + 1;
      *(char *)((int)param_2 + (byte)(bVar6 + 1) + 0x500) = cVar18;
    }
    else if (uVar11 == 0x13) {
      local_120 = (uint *)(uVar12 >> 0x10 & 3);
      uVar12 = FUN_1008b610(param_1,param_2);
      local_168 = (uint *)0x4001f;
      local_158 = (ulonglong *)0x0;
      if (uVar10 == 0xd000000) {
        local_168 = (uint *)0x1f;
      }
      local_160 = (uint *)(uVar12 | 0x10000000);
      local_164 = (uint *)0xffffffff;
      local_15c = (ulonglong *)local_120;
      local_170 = param_2;
      iStack_16c = param_3;
      param_1 = FUN_10122a88(&local_170,0x1c);
      bVar6 = *pbVar4;
      uVar7 = 2;
      if (cVar18 != '\x02') {
        uVar7 = 0;
      }
      *pbVar4 = bVar6 + 1;
      puVar2 = (undefined1 *)((int)param_2 + (byte)(bVar6 + 1) + 0x500);
LAB_1008ebe8:
      *puVar2 = uVar7;
    }
    goto LAB_1008f1a4;
  case 0x29:
    uVar16 = FUN_1008bd38(param_1,uVar22,2,0,param_2,param_3,0,0);
    local_110 = FUN_1008cce0(uVar16,local_120,param_2,param_3,0);
    local_164 = param_2 + 0x130;
    local_110 = local_110 | 0x10000000;
    uStack_10c = uStack_10c & 0xffffff00;
    local_160 = &local_110;
    uStack_f8 = 0xffffffffffffffff;
    local_100 = 0xffffffffffffffff;
    local_15c = (ulonglong *)0x0;
    local_168 = (uint *)0x4001f;
    local_170 = param_2;
    iStack_16c = param_3;
    param_1 = FUN_10122c20(&local_170,0x18);
    uVar10 = (uint)*(byte *)(param_2 + 0x148);
    cVar18 = *(char *)((int)param_2 + uVar10 + 0x500);
    uVar10 = uVar10 + 1;
    *(byte *)(param_2 + 0x148) = (byte)uVar10;
    uVar7 = 2;
    if (cVar18 != '\x02') {
      uVar7 = 0;
    }
    *(undefined1 *)((int)param_2 + (uVar10 & 0xff) + 0x500) = uVar7;
    uVar16 = uVar16 & 0xffffffff;
    break;
  case 0x2a:
    pcVar3 = (char *)((int)param_2 + *(byte *)(param_2 + 0x148) + 0x500);
    cVar18 = *pcVar3;
    if (cVar18 == '\0') {
      local_168 = (uint *)0x12;
      local_164 = (uint *)0x0;
      local_170 = param_2;
      iStack_16c = param_3;
      param_1 = FUN_10122a88(&local_170,0x10);
      uVar16 = uVar22;
      break;
    }
    cVar19 = '\x01';
    if (cVar18 == '\x01') {
      cVar19 = '\x02';
    }
    if (*(char *)((int)param_2 + *(byte *)(param_2 + 0x148) + 0x4ff) != '\x02') {
      cVar18 = cVar19;
    }
    *pcVar3 = cVar18;
    goto LAB_1008ed58;
  case 0x2b:
    pbVar4 = (byte *)(param_2 + 0x148);
    if (*(char *)((int)param_2 + *pbVar4 + 0x500) == '\0') {
      local_168 = (uint *)&DAT_00000015;
      local_164 = (uint *)0x0;
      local_170 = param_2;
      iStack_16c = param_3;
      param_1 = FUN_10122a88(&local_170,0x10);
    }
    bVar6 = *pbVar4;
    *pbVar4 = bVar6 - 1;
    cVar18 = *(char *)((int)param_2 + (byte)(bVar6 - 1) + 0x500);
LAB_1008ed58:
    *(bool *)(param_3 + 0xc) = cVar18 != '\x02';
    uVar16 = uVar22;
    break;
  case 0x2c:
    local_168 = (uint *)0x2;
    local_164 = (uint *)0x0;
    local_170 = param_2;
    iStack_16c = param_3;
    param_1 = FUN_10122a88(&local_170,0x10);
    uVar16 = uVar22;
    break;
  case 0x2d:
    uVar16 = FUN_1008bd38(param_1,uVar22,2,0,param_2,param_3,0,0);
    local_110 = FUN_1008cce0(uVar16,local_120,param_2,param_3,0);
    local_164 = param_2 + 0x130;
    local_110 = local_110 | 0x10000000;
    uStack_10c = uStack_10c & 0xffffff00;
    local_160 = &local_110;
    local_168 = (uint *)0x40003;
    uStack_f8 = 0xffffffffffffffff;
    local_100 = 0xffffffffffffffff;
    local_15c = (ulonglong *)0x0;
    local_170 = param_2;
    iStack_16c = param_3;
    param_1 = FUN_10122c20(&local_170,0x18);
    uVar16 = uVar16 & 0xffffffff;
    break;
  case 0x41:
    param_1 = FUN_1008c210(param_1,local_120,uVar22,param_2,param_3);
    local_120 = param_2 + 0xcd;
    cVar18 = (char)*local_120;
    uVar16 = param_1 & 0xffffffff;
    puVar23 = local_a0;
    if (cVar18 != '\0') {
      if (*local_118 - 1 < 0xfffffffe) {
        puVar23 = (uint *)0x1;
        if ((*local_118 & 0xf000000) == 0xd000000) {
          puVar23 = (uint *)0x2;
        }
      }
      else {
        puVar23 = (uint *)0x0;
      }
      local_f0 = FUN_10121590(param_2,4,0);
      local_c0 = param_2[0x28];
      local_160 = param_2 + 0xf8;
      uStack_d8 = 0xffffffffffffffff;
      local_e0 = 0xffffffffffffffff;
      local_b0 = 0;
      local_bc = 0xe4;
      uStack_ac = 0xffffffff;
      uStack_a8 = 0xffffffff;
      local_15c = (ulonglong *)&local_c0;
      uStack_a4 = 0xffffffff;
      local_158 = (ulonglong *)0x0;
      local_164 = &local_f0;
      local_168 = (uint *)(&DAT_10162358)[(int)puVar23];
      local_170 = param_2;
      iStack_16c = param_3;
      local_ec = cVar18;
      FUN_10122c20(&local_170,0x1c);
      local_d0 = CONCAT44(local_d0._4_4_,&DAT_10162348 + (int)puVar23);
      if ((&DAT_10162348)[(int)puVar23] != -1) {
        uVar17 = FUN_10123210(*(undefined1 *)((int)local_118 + 2),(char)*local_120);
        uVar7 = (undefined1)uVar17;
        local_110 = FUN_1008b610(uVar17,param_2);
        uStack_10c = CONCAT31(uStack_10c._1_3_,uVar7);
        uStack_f8 = 0xffffffffffffffff;
        local_100 = 0xffffffffffffffff;
        local_160 = (uint *)(*(byte *)(param_2 + 0xf9) | 0x100);
        local_158 = (ulonglong *)&local_110;
        local_154 = (uint *)0x0;
        local_15c = (ulonglong *)&local_f0;
        local_164 = &local_f0;
        local_168 = (uint *)*(uint *)local_d0;
        local_170 = param_2;
        iStack_16c = param_3;
        FUN_10122c20(&local_170,0x20);
      }
      bVar6 = (byte)*local_120;
      local_120 = (uint *)(uint)bVar6;
      uVar10 = ((uint)local_120 & 0xaaaaaaaa) >> 1 | ((uint)local_120 & 0x55555555) << 1;
      uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
      uVar12 = (bVar6 & 0xaaaaaaaa) >> 1 | (bVar6 & 0x55555555) << 1;
      uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
      lVar20 = LZCOUNT((uVar12 >> 4 | (uVar12 & 0xf0f0f0f) << 4) << 0x18);
      uVar10 = (uint)LZCOUNT((uVar10 >> 4 | (uVar10 & 0xf0f0f0f) << 4) << 0x18);
      uVar12 = (uint)lVar20;
      if ((1 - (uVar12 >> 5) & 0xff) != 0) {
        local_d0 = CONCAT44(local_d0._4_4_,(int)param_1);
        pbVar4 = (byte *)((int)&local_120 + ((int)uVar12 >> 3));
        *pbVar4 = *pbVar4 & ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
        local_11c = puVar24;
        local_118 = puVar23;
        while( true ) {
          if ((uint)lVar20 != uVar10) {
            local_154 = (uint *)(*(byte *)(uVar10 + 0x10162344) | 0x100);
            local_15c = (ulonglong *)(*(byte *)((uint)lVar20 + 0x10162344) | 0x100);
            local_150 = &local_f0;
            local_14c = (uint *)0x0;
            local_158 = (ulonglong *)&local_f0;
            local_160 = &local_f0;
            local_168 = *(uint **)((int)puVar23 * 4 + 0x10162338);
            local_170 = param_2;
            iStack_16c = param_3;
            local_164 = (uint *)(1 << (ulonglong)(uVar10 & 0x1f) & 0xffU | 0x100);
            FUN_10122c20(&local_170,0x28);
          }
          uVar12 = ((uint)local_120 & 0xaaaaaaaa) >> 1 | ((uint)local_120 & 0x55555555) << 1;
          uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
          lVar20 = LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10);
          uVar12 = (uint)lVar20;
          if ((1 - (uVar12 >> 5) & 0xff) == 0) break;
          pbVar4 = (byte *)((int)&local_120 + ((int)uVar12 >> 3));
          *pbVar4 = *pbVar4 & ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
        }
        uVar16 = local_d0 & 0xffffffff;
        puVar23 = local_118;
        puVar24 = local_11c;
      }
      local_160 = (uint *)(uVar10 | 0x100);
      local_158 = (ulonglong *)0x0;
      local_164 = param_2 + 0x130;
      local_f0 = local_f0 | 0x10000000;
      local_168 = (uint *)(((&DAT_10162328)[(int)puVar23] & 1) << 0x12 | 0xd);
      local_15c = (ulonglong *)&local_f0;
      local_170 = param_2;
      iStack_16c = param_3;
      param_1 = FUN_10122c20(&local_170,0x1c);
      puVar23 = local_a0;
    }
LAB_1008cf9c:
    *puVar23 = 0xffffffff;
    break;
  case 0x42:
    local_170 = (undefined4 *)((uint)local_170._1_3_ << 8);
    uVar16 = FUN_1008b810(param_1,uVar22,0xf0000,2,0,param_2,param_3,0);
    uVar16 = uVar16 & 0xffffffff;
    if (((uint)local_120 >> 0x10 & 1) == 0) {
      puVar14 = param_2 + 0x110;
      local_110 = 0;
      uStack_10c = uStack_10c & 0xffffff00;
      puVar23 = (uint *)0x0;
      if (((uint)local_120 >> 0x11 & 1) == 0) goto LAB_1008e6cc;
      uVar17 = 0x4a;
      *(undefined8 *)(param_2 + 0x112) = *(undefined8 *)(param_2 + 0xfa);
      *(undefined8 *)puVar14 = *(undefined8 *)(param_2 + 0xf8);
      *(undefined8 *)(param_2 + 0x116) = *(undefined8 *)(param_2 + 0xfe);
      *(undefined8 *)(param_2 + 0x114) = *(undefined8 *)(param_2 + 0xfc);
      *(undefined8 *)(param_2 + 0x11a) = *(undefined8 *)(param_2 + 0x102);
      *(undefined8 *)(param_2 + 0x118) = *(undefined8 *)(param_2 + 0x100);
      *puVar14 = *puVar14 | 0x10000000;
      *(undefined8 *)(param_2 + 0x11e) = uStack_108;
      *(ulonglong *)(param_2 + 0x11c) = (ulonglong)uStack_10c << 0x20;
      *(undefined8 *)(param_2 + 0x122) = 0xffffffffffffffff;
      *(undefined8 *)(param_2 + 0x120) = 0xffffffffffffffff;
      *(undefined1 *)(param_2 + 0x111) = 3;
    }
    else {
      local_90 = FUN_10121590(param_2,4,1);
      uStack_8c = CONCAT31(uStack_8c._1_3_,0xe4);
      bVar6 = *(byte *)(param_2 + 0xf9);
      local_15c = (ulonglong *)(param_2 + 0xf8);
      uStack_78 = 0xffffffffffffffff;
      local_80 = 0xffffffffffffffff;
      local_150 = (uint *)0x0;
      local_158 = (ulonglong *)
                  (((uint)(bVar6 >> 6) | (uint)(bVar6 >> 6) << 2) << 2 | (bVar6 | 0x4000) >> 6 |
                  bVar6 & 0xc0);
      local_160 = &local_90;
      local_164 = (uint *)0x10f;
      local_168 = (uint *)0xe;
      local_170 = param_2;
      iStack_16c = param_3;
      local_154 = (uint *)local_15c;
      FUN_10122c20(&local_170,0x24);
      uStack_10c = uStack_10c & 0xffffff00;
      puVar23 = &local_90;
      *(undefined8 *)(param_2 + 0xfa) = uStack_88;
      *(ulonglong *)(param_2 + 0xf8) = CONCAT44(uStack_8c,local_90);
      *(undefined8 *)(param_2 + 0xfe) = uStack_78;
      *(undefined8 *)(param_2 + 0xfc) = local_80;
LAB_1008e6cc:
      local_110 = 0;
      uVar17 = 0x45;
      *(undefined8 *)(param_2 + 0x11e) = uStack_108;
      *(ulonglong *)(param_2 + 0x11c) = (ulonglong)uStack_10c << 0x20;
      *(undefined8 *)(param_2 + 0x122) = 0xffffffffffffffff;
      *(undefined8 *)(param_2 + 0x120) = 0xffffffffffffffff;
      *(undefined8 *)(param_2 + 0x112) = *(undefined8 *)(param_2 + 0x11e);
      *(longlong *)(param_2 + 0x110) = *(longlong *)(param_2 + 0x11c);
      *(undefined8 *)(param_2 + 0x116) = *(undefined8 *)(param_2 + 0x122);
      *(undefined8 *)(param_2 + 0x114) = *(undefined8 *)(param_2 + 0x120);
    }
    goto LAB_1008e6e8;
  case 0x58:
    local_170 = (undefined4 *)((uint)local_170._1_3_ << 8);
    uVar16 = FUN_1008b810(param_1,uVar22,0xf0000,3,0,param_2,param_3,0);
    puVar23 = param_2 + 0xf8;
    uVar16 = uVar16 & 0xffffffff;
    if ((*puVar23 & 0x88000000) == 0x8000000) {
      local_15c = (ulonglong *)0x0;
      local_168 = (uint *)(param_2[200] | 0x36);
      local_170 = param_2;
      iStack_16c = param_3;
      local_164 = puVar24;
      local_160 = puVar23;
      param_1 = FUN_10122c20(&local_170,0x18);
    }
    else {
      puVar15 = param_2 + 0xcd;
      uVar7 = *(undefined1 *)puVar15;
      local_c0 = FUN_10121590(param_2,4,0);
      uStack_a8 = 0xffffffff;
      uStack_a4 = 0xffffffff;
      local_b0 = 0xffffffff;
      uStack_ac = 0xffffffff;
      local_bc = uVar7;
      uVar22 = FUN_10123278(*(undefined1 *)puVar15);
      FUN_10081210(0,uVar22,&local_110,param_2,uVar22 & 0xff);
      local_15c = (ulonglong *)&local_110;
      local_158 = (ulonglong *)0x0;
      local_164 = &local_c0;
      local_168 = (uint *)0x1d;
      local_170 = param_2;
      iStack_16c = param_3;
      local_160 = puVar23;
      FUN_10122c20(&local_170,0x1c);
      uVar10 = FUN_10123210(0xe4,*(undefined1 *)puVar15);
      local_150 = (uint *)0x0;
      local_160 = (uint *)(uVar10 & 0xff | 0x100);
      local_168 = (uint *)(param_2[200] | 0x37);
      local_15c = (ulonglong *)&local_c0;
      local_170 = param_2;
      iStack_16c = param_3;
      local_164 = puVar24;
      local_158 = (ulonglong *)extraout_w15;
      local_154 = extraout_w14_00;
      param_1 = FUN_10122c20(&local_170,0x24);
    }
    break;
  case 0x5a:
    local_170 = (undefined4 *)((uint)local_170._1_3_ << 8);
    uVar16 = FUN_1008b810(param_1,uVar22,0xf0000,3,0,param_2,param_3,0);
    uVar7 = *(undefined1 *)(param_2 + 0xcd);
    local_110 = FUN_10121590(param_2,4,0);
    local_160 = param_2 + 0xf8;
    local_15c = (ulonglong *)(param_2 + 0x104);
    local_164 = &local_110;
    local_168 = (uint *)0xf;
    uStack_10c = CONCAT31(uStack_10c._1_3_,uVar7);
    uStack_f8 = 0xffffffffffffffff;
    local_100 = 0xffffffffffffffff;
    local_158 = (ulonglong *)0x0;
    local_170 = param_2;
    iStack_16c = param_3;
    FUN_10122c20(&local_170,0x1c);
    uVar10 = FUN_10123210(0xe4,*(undefined1 *)(param_2 + 0xcd));
    local_154 = (uint *)0x0;
    local_160 = (uint *)(uVar10 & 0xff | 0x100);
    local_15c = (ulonglong *)&local_110;
    local_168 = (uint *)param_2[200];
    local_170 = param_2;
    iStack_16c = param_3;
    local_164 = puVar24;
    local_158 = (ulonglong *)extraout_w14_01;
    param_1 = FUN_10122c20(&local_170,0x20);
    uVar16 = uVar16 & 0xffffffff;
    break;
  case 0x5b:
  case 0x5c:
    local_170 = (undefined4 *)((uint)local_170._1_3_ << 8);
    uVar16 = FUN_1008b810(param_1,uVar22,0xf0000,1,0,param_2,param_3,0);
    uVar12 = 0xb;
    if (uVar10 != 0x5b) {
      uVar12 = 0xc;
    }
    local_160 = param_2 + 0xf8;
    local_15c = (ulonglong *)0x0;
    local_168 = (uint *)(uVar12 | param_2[200]);
    local_170 = param_2;
    iStack_16c = param_3;
    local_164 = puVar24;
    param_1 = FUN_10122c20(&local_170,0x18);
    uVar16 = uVar16 & 0xffffffff;
    break;
  case 0x5d:
    local_170 = (undefined4 *)((uint)local_170._1_3_ << 8);
    uVar16 = FUN_1008b810(param_1,uVar22,0xf0000,4,0,param_2,param_3,0);
    uVar17 = 0x49;
    goto LAB_1008e788;
  case 0x5e:
    local_170 = (undefined4 *)((uint)local_170._1_3_ << 8);
    uVar16 = FUN_1008b810(param_1,uVar22,0xf0000,2,0,param_2,param_3,0);
    param_1 = FUN_1008cce0(uVar16,local_120,param_2,param_3,1);
    uVar16 = uVar16 & 0xffffffff;
    break;
  case 0x5f:
    local_170 = (undefined4 *)((uint)local_170._1_3_ << 8);
    uVar16 = FUN_1008b810(param_1,uVar22,0xf0000,2,0,param_2,param_3,0);
    local_110 = 0;
    puVar23 = param_2 + 0x110;
    uStack_10c = uStack_10c & 0xffffff00;
    uVar17 = 0x48;
    *(undefined8 *)(param_2 + 0x112) = *(undefined8 *)(param_2 + 0xfa);
    *(undefined8 *)puVar23 = *(undefined8 *)(param_2 + 0xf8);
    *(undefined8 *)(param_2 + 0x116) = *(undefined8 *)(param_2 + 0xfe);
    *(undefined8 *)(param_2 + 0x114) = *(undefined8 *)(param_2 + 0xfc);
    *(undefined8 *)(param_2 + 0x11a) = *(undefined8 *)(param_2 + 0x102);
    *(undefined8 *)(param_2 + 0x118) = *(undefined8 *)(param_2 + 0x100);
    *puVar23 = *puVar23 | 0x10000000;
    *(undefined1 *)(param_2 + 0x111) = 3;
    *(undefined8 *)(param_2 + 0x11e) = uStack_108;
    *(ulonglong *)(param_2 + 0x11c) = (ulonglong)uStack_10c << 0x20;
    *(undefined8 *)(param_2 + 0x122) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x120) = 0xffffffffffffffff;
LAB_1008e788:
    uVar16 = uVar16 & 0xffffffff;
    puVar23 = (uint *)0x0;
LAB_1008e6e8:
    param_1 = FUN_1008c388(local_11c,param_2,param_3,uVar17,local_d0,puVar23);
    break;
  case 0x60:
    uVar10 = *puVar23;
    local_110 = FUN_1008b610(param_1,param_2);
    local_168 = (uint *)0x40003;
    local_110 = local_110 | 0x10000000;
    uStack_10c = CONCAT31(uStack_10c._1_3_,(char)(uVar10 >> 0x10)) & 0xffffff03;
    local_164 = param_2 + 0x130;
    uStack_f8 = 0xffffffffffffffff;
    local_100 = 0xffffffffffffffff;
    if ((uVar10 & 0xf000000) == 0xd000000) {
      local_168 = (uint *)0x3;
    }
    local_160 = &local_110;
    local_15c = (ulonglong *)0x0;
    local_170 = param_2;
    iStack_16c = param_3;
    param_1 = FUN_10122c20(&local_170,0x18);
LAB_1008f1a4:
    uVar16 = ZEXT48(param_4 + 2);
  }
switchD_1008ce7c_caseD_c:
  puVar23 = local_a0;
  uVar7 = (undefined1)(*local_a0 >> 0x10);
  if (*local_a0 != 0xffffffff) {
    local_110 = FUN_1008b610(param_1,param_2);
    uStack_10c = CONCAT31(uStack_10c._1_3_,uVar7);
    uStack_f8 = 0xffffffffffffffff;
    local_100 = 0xffffffffffffffff;
    local_154 = (uint *)0x0;
    bVar8 = (*puVar23 & 0xf000000) == 0xd000000;
    iVar21 = 0x3c0;
    iVar9 = 0x390;
    if (bVar8) {
      iVar9 = iVar21;
    }
    local_158 = (ulonglong *)(iVar9 + (int)param_2);
    if (bVar8) {
      iVar21 = 0x390;
    }
    local_15c = (ulonglong *)(iVar21 + (int)param_2);
    local_164 = param_2 + 0xd8;
    local_160 = &local_110;
    local_168 = (uint *)0x37;
    local_170 = param_2;
    iStack_16c = param_3;
    FUN_10122c20(&local_170,0x20);
    FUN_10121648(param_2,*puVar24);
    *puVar24 = 0;
  }
  return uVar16;
}


/*
 * FUN_180178450 at 180178450
 * undefined FUN_180178450(void)
 * Address ranges: 180178450-180178d17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180178450(undefined8 param_1,uint *param_2,undefined8 param_3,uint param_4,
                  ulonglong param_5,ulonglong *param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint *puVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  undefined1 extraout_w10;
  uint extraout_w11;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 local_130;
  uint *local_128;
  uint *local_120;
  uint *local_118;
  uint *local_110;
  uint *puStack_108;
  undefined8 local_100;
  undefined8 local_d0;
  ulonglong uStack_c8;
  ulonglong local_c0;
  ulonglong uStack_b8;
  uint local_b0;
  byte local_ac;
  int local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint local_90;
  uint *local_88;
  uint local_80;
  uint uStack_7c;
  ulonglong uStack_78;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  byte local_5c;
  int local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  local_88 = param_2 + 0x108;
  bVar5 = (byte)*local_88;
  uVar14 = (uint)((param_5 & 0xffffffffffff) >> ((ulonglong)((uint)bVar5 * 3) & 0x3f)) & 7;
  if (((&DAT_18022c440)[uVar14] !=
       *(char *)(*(longlong *)(param_2 + 0x40) + (ulonglong)bVar5 + 0x14f)) &&
     (*(char *)((longlong)param_2 + 0xfa) == '\0')) {
    uVar14 = 0;
  }
  if (param_6 == (ulonglong *)0x0) {
    local_80 = 0;
    local_c0 = 0xffffffffffffffff;
    uStack_b8 = 0xffffffffffffffff;
    uStack_7c = uStack_7c & 0xffffff00;
    uVar16 = (ulonglong)uStack_7c << 0x20;
  }
  else {
    uStack_78 = param_6[1];
    uVar16 = *param_6;
    uStack_b8 = param_6[3];
    local_c0 = param_6[2];
  }
  local_90 = 0;
  if ((3 < uVar14 - 1 && uVar14 != 7) || (bVar4 = true, 0x50 < *param_2)) {
    bVar4 = false;
  }
  bVar1 = (byte)param_2[0xfd];
  bVar3 = (&DAT_18022c438)[uVar14];
  bVar2 = (byte)param_2[0x109];
  *(undefined1 *)(param_2 + 0x109) = 0;
  *(byte *)(param_2 + 0xfd) =
       (((bVar1 >> ((ulonglong)(bVar3 >> 6) << 1) & 3) << 2 |
        bVar1 >> (ulonglong)((bVar3 >> 4 & 3) << 1) & 3) << 2 |
       bVar1 >> (ulonglong)((bVar3 >> 2 & 3) << 1) & 3) << 2 |
       bVar1 >> (ulonglong)((bVar3 & 3) << 1) & 3;
  uVar12 = (uint)bVar2;
  uVar15 = (uint)bVar5;
  local_d0 = uVar16;
  uStack_c8 = uStack_78;
  if ((0x92U >> (ulonglong)uVar14 & 1) == 0) {
    if (uVar14 - 5 < 2) {
      iVar13 = 0x10;
      if (uVar14 != 6) {
        iVar13 = 0;
      }
      iVar13 = iVar13 + (uint)bVar5;
      local_80 = FUN_180213690(param_2,iVar13,uVar14 == 6,iVar13);
      puVar9 = param_2 + 0xfc;
      uStack_7c = CONCAT31(uStack_7c._1_3_,extraout_w10);
      uStack_68 = 0xffffffff;
      uStack_64 = 0xffffffff;
      local_70 = -1;
      uStack_6c = 0xffffffff;
      local_60 = *puVar9 | 0x10000000;
      uStack_48 = 0xffffffff;
      uStack_44 = 0xffffffff;
      local_50 = -1;
      uStack_4c = 0xffffffff;
      uVar12 = 6;
      if (uVar14 != 6) {
        uVar12 = 4;
      }
      local_5c = (byte)(extraout_w11 >> (ulonglong)uVar12) & 3;
      uVar14 = (uint)(param_5 >> 0x20);
      uVar12 = uVar14 >> 0x12 & 1;
      uVar14 = (uVar14 >> 0x11 & 1) << 1 | uVar12;
      if (((uVar14 == 0) || (uVar14 == 1)) && (((byte)param_2[0xd1] >> 3 & 1) != 0)) {
        *(byte *)(param_2 + 0xd1) = (byte)param_2[0xd1] & 7;
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (uVar12 == 0) {
        if ((uVar14 == 2) || ((param_2[0xd1] & 7) != 0)) {
          local_110 = (uint *)0x0;
          local_120 = param_2 + 300;
          local_118 = &local_60;
          local_128 = &local_80;
          local_130 = puVar9;
          FUN_180214e10(param_2,param_3,param_2[0xcc] | 0x46,param_2 + 0xd0,&local_130,0x28);
          goto LAB_180178ae0;
        }
      }
      else if (((uVar14 - 1 & 0xfffffffd) == 0) && ((uVar14 == 3 || ((param_2[0xd1] & 7) != 0)))) {
        if (*puVar9 == (uint)uVar16) {
          local_d0 = local_d0 & 0xffffffff00000000;
          uVar14 = 0;
          local_90 = (uint)uVar16;
        }
        else {
          uVar14 = (uint)local_d0;
        }
        if (uVar14 == 0) {
          uVar7 = FUN_180213760(param_2,4,1);
          local_c0 = 0xffffffffffffffff;
          uStack_b8 = 0xffffffffffffffff;
          local_d0 = CONCAT44(local_d0._4_4_,uVar7);
        }
        local_d0._0_5_ = CONCAT14(0xe4,(uint)local_d0);
        uVar14 = 0;
        local_88 = param_2 + 300;
        do {
          local_100 = 0;
          local_130 = (uint *)((ulonglong)(byte)(1 << (ulonglong)(uVar14 & 0x1f)) | 0x100);
          puStack_108 = &local_60;
          local_118 = &local_80;
          local_128 = (uint *)&local_d0;
          local_120 = puVar9;
          local_110 = param_2 + 300;
          FUN_180214e10(param_2,param_3,0x80000046,(&DAT_18022c2a0)[uVar14],&local_130,0x38);
          uVar14 = uVar14 + 1;
        } while (uVar14 < 4);
        local_b0 = param_2[0x2a];
        local_ac = 0xe4;
        local_a0 = 0x3e4ccccd;
        uStack_94 = 0xffffffff;
        local_120 = &local_b0;
        local_118 = (uint *)0x0;
        local_128 = (uint *)&local_d0;
        local_130 = (uint *)&local_d0;
        uStack_9c = 0xffffffff;
        uStack_98 = 0xffffffff;
        FUN_180214e10(param_2,param_3,0x11,0x101,&local_130,0x20);
        local_110 = &local_60;
        puStack_108 = (uint *)0x0;
        local_118 = local_88;
        local_120 = &local_80;
        local_130 = (uint *)&local_d0;
        local_128 = puVar9;
        FUN_180214e10(param_2,param_3,0x46,0x102,&local_130,0x30);
        local_110 = (uint *)&local_d0;
        puStack_108 = (uint *)0x0;
        local_118 = (uint *)&DAT_00000100;
        local_120 = &local_b0;
        local_128 = (uint *)&local_d0;
        local_130 = (uint *)0x155;
        FUN_180214e10(param_2,param_3,0x32,param_2 + 0xd0,&local_130,0x30);
LAB_180178ae0:
        iVar13 = (int)(uint)bVar5 >> 3;
        *(byte *)((longlong)param_2 + (longlong)iVar13 + 0xb4) =
             *(byte *)((longlong)param_2 + (longlong)iVar13 + 0xb4) |
             (byte)(1 << (ulonglong)(bVar5 & 7));
      }
      if (bVar4) {
        local_b0 = param_2[0x2a];
        local_130 = param_2 + 0xd0;
        local_ac = 0xe4;
        uStack_9c = 0xffffffff;
        uStack_98 = 0xffffffff;
        local_a0 = 0x3f800000;
        uStack_94 = 0xffffffff;
        local_128 = &local_b0;
        local_120 = (uint *)0x0;
        FUN_180214e10(param_2,param_3,0x36,0x108,&local_130,0x18);
      }
      goto LAB_180178ce8;
    }
    uVar6 = (uint)uVar16;
    if (uVar14 != 2) {
      if (uVar14 != 3) {
        if (uVar14 == 0) {
          local_b0 = param_2[0x2b];
          local_ac = 0xe4;
          local_a0 = 0;
          uStack_9c = 0;
          uStack_98 = 0;
          local_130 = &local_b0;
          local_128 = (uint *)0x0;
          uStack_94 = 0x3f800000;
          FUN_180214e10(param_2,param_3,0x36,param_2 + 0xd0,&local_130,0x10);
        }
        goto LAB_180178ce8;
      }
      if (*(char *)(*(longlong *)(param_2 + 0x40) + (ulonglong)bVar5 + 0x14f) == '\x02') {
        if (uVar6 == 0) {
          uVar6 = FUN_180213760(param_2,4,1);
          local_c0 = 0xffffffffffffffff;
          uStack_b8 = 0xffffffffffffffff;
          local_d0 = CONCAT44(local_d0._4_4_,uVar6);
        }
        local_d0._0_5_ = CONCAT14(0xb,(uint)local_d0);
        if (param_2[0xfc] != uVar6) {
          uVar7 = FUN_180213268((char)param_2[0xfd],0xb);
          local_128 = (uint *)0x0;
          local_130 = (uint *)(CONCAT44(local_130._4_4_,uVar7) & 0xffffffff000000ff);
          FUN_180214e10(param_2,param_3,0x36,&local_d0,&local_130,0x10);
        }
        local_80 = param_2[0x2a];
        uStack_7c = CONCAT31(uStack_7c._1_3_,0xe4);
        uStack_68 = 0xffffffff;
        uStack_64 = 0xffffffff;
        local_70 = -1;
        uStack_6c = 0xffffffff;
        local_128 = &local_80;
        local_120 = (uint *)0x0;
        local_130 = (uint *)&local_d0;
        FUN_180214e10(param_2,param_3,0x36,0x104,&local_130,0x18);
        *(ulonglong *)(param_2 + 0xfe) = uStack_c8;
        *(ulonglong *)(param_2 + 0xfc) = local_d0;
        *(ulonglong *)(param_2 + 0x102) = uStack_b8;
        *(ulonglong *)(param_2 + 0x100) = local_c0;
      }
      goto LAB_1801786a8;
    }
    if ((bVar4) && ((param_2[0xd0] & 0x3f00) != 0)) {
      uVar11 = (undefined1)param_2[0xd1];
      if (uVar6 == 0) {
        uVar7 = FUN_180213760(param_2,4,1);
        local_c0 = 0xffffffffffffffff;
        uStack_b8 = 0xffffffffffffffff;
        local_d0 = CONCAT44(local_d0._4_4_,uVar7);
      }
      local_d0._0_5_ = CONCAT14(uVar11,(uint)local_d0);
      puVar9 = (uint *)&local_d0;
    }
    else {
      puVar9 = param_2 + 0xd0;
    }
    local_80 = FUN_180213690(param_2,bVar5 + 0x10,1,uVar15 + 0x10);
    local_110 = param_2 + 0x120;
    local_130 = param_2 + 0xfc;
    puStack_108 = (uint *)0x0;
    uStack_68 = 0xffffffff;
    uStack_64 = 0xffffffff;
    local_70 = -1;
    uStack_6c = 0xffffffff;
    uStack_7c = CONCAT31(uStack_7c._1_3_,bVar2);
    local_118 = param_2 + 0x114;
    local_120 = local_88;
    local_128 = &local_80;
    FUN_180214e10(param_2,param_3,param_2[0xcc] | param_4,puVar9,&local_130,0x30);
    if (bVar4) {
      local_b0 = param_2[0x1a];
      local_a0 = (uint)bVar5 * 0x20 + 0x2c0;
      local_ac = 0xe4;
      local_50 = (uint)bVar5 * 0x20 + 0x2d0;
      uStack_9c = 0xffffffff;
      uStack_98 = 0xffffffff;
      uStack_94 = 0xffffffff;
      local_5c = 0xe4;
      uStack_4c = 0xffffffff;
      uStack_48 = 0xffffffff;
      uStack_44 = 0xffffffff;
      local_60 = local_b0;
      bVar5 = FUN_180213268(0xe4,(char)puVar9[1]);
      local_120 = &local_b0;
      local_118 = (uint *)0x0;
      local_130 = (uint *)((ulonglong)bVar5 | 0x100);
      local_128 = puVar9;
      FUN_180214e10(param_2,param_3,1,puVar9,&local_130,0x20);
      local_120 = &local_60;
      local_118 = (uint *)0x0;
      local_130 = (uint *)((ulonglong)bVar5 | 0x100);
      local_128 = puVar9;
      FUN_180214e10(param_2,param_3,0x3c,param_2 + 0xd0,&local_130,0x20);
    }
  }
  else {
LAB_1801786a8:
    if (uVar14 == 4) {
      uVar6 = uVar12 & 3;
      local_ac = (byte)uVar6 | (byte)((uVar6 | (uVar6 | uVar12 << 2) << 2) << 2);
    }
    else {
      local_ac = bVar2;
      if (uVar14 == 7) {
        local_ac = bVar2 & 0xf0 | (byte)((uVar12 & 3) << 2) | bVar2 >> 2 & 3;
      }
    }
    if ((bVar4) && ((param_2[0xd0] & 0x3f00) != 0)) {
      uVar11 = (undefined1)param_2[0xd1];
      if ((int)local_d0 == 0) {
        uVar7 = FUN_180213760(param_2,4,1);
        local_c0 = 0xffffffffffffffff;
        uStack_b8 = 0xffffffffffffffff;
        local_d0 = CONCAT44(local_d0._4_4_,uVar7);
      }
      local_d0._0_5_ = CONCAT14(uVar11,(uint)local_d0);
      puVar9 = (uint *)&local_d0;
    }
    else {
      puVar9 = param_2 + 0xd0;
    }
    iVar13 = 0x20;
    if (uVar14 != 3) {
      iVar13 = 0;
    }
    uVar7 = 2;
    if (uVar14 != 3) {
      uVar7 = 0;
    }
    local_b0 = FUN_180213690(param_2,iVar13 + uVar15,uVar7,iVar13 + uVar15);
    local_118 = param_2 + 0x114;
    local_110 = param_2 + 0x120;
    local_130 = param_2 + 0xfc;
    puStack_108 = (uint *)0x0;
    uStack_98 = 0xffffffff;
    uStack_94 = 0xffffffff;
    local_a0 = -1;
    uStack_9c = 0xffffffff;
    local_120 = local_88;
    local_128 = &local_b0;
    FUN_180214e10(param_2,param_3,param_2[0xcc] | param_4,puVar9,&local_130,0x30);
    if (bVar4) {
      local_80 = param_2[0x1a];
      local_70 = (uint)bVar5 * 0x20 + 0x2c0;
      uStack_7c = CONCAT31(uStack_7c._1_3_,0xe4);
      local_50 = (uint)bVar5 * 0x20 + 0x2d0;
      uStack_6c = 0xffffffff;
      uStack_68 = 0xffffffff;
      local_5c = 0xe4;
      uStack_64 = 0xffffffff;
      uStack_4c = 0xffffffff;
      uStack_48 = 0xffffffff;
      uStack_44 = 0xffffffff;
      puVar10 = puVar9;
      local_60 = local_80;
      bVar5 = FUN_180213268(0xe4,(char)puVar9[1]);
      local_120 = &local_80;
      local_118 = (uint *)0x0;
      local_130 = (uint *)((ulonglong)bVar5 | 0x100);
      local_128 = puVar10;
      FUN_180214e10(param_2,param_3,1);
      local_120 = &local_60;
      local_118 = (uint *)0x0;
      local_130 = (uint *)((ulonglong)bVar5 | 0x100);
      local_128 = puVar9;
      FUN_180214e10(param_2,param_3,0x3c,param_2 + 0xd0,&local_130,0x20);
    }
  }
  *(byte *)((longlong)param_2 + (longlong)((int)uVar15 >> 3) + 0xb4) =
       *(byte *)((longlong)param_2 + (longlong)((int)uVar15 >> 3) + 0xb4) |
       (byte)(1 << (ulonglong)(uVar15 & 7));
LAB_180178ce8:
  uVar8 = FUN_180213800(param_2,local_d0 & 0xffffffff);
  FUN_180213800(uVar8,local_90);
  return;
}


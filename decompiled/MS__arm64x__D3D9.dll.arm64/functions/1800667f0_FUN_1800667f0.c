/*
 * FUN_1800667f0 at 1800667f0
 * undefined FUN_1800667f0(void)
 * Address ranges: 1800667f0-180066fbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800667f0(undefined8 param_1,uint *param_2,undefined8 param_3,uint param_4,
                  ulonglong param_5,ulonglong *param_6)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint extraout_w10;
  uint uVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  uint extraout_s16;
  uint *puVar16;
  uint *puVar17;
  undefined8 local_e0;
  ulonglong uStack_d8;
  ulonglong local_d0;
  ulonglong uStack_c8;
  uint local_c0;
  byte local_bc;
  int local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint local_a0;
  uint local_90;
  uint uStack_8c;
  ulonglong uStack_88;
  int local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  byte local_6c;
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  bVar5 = (byte)param_2[0x108];
  uVar12 = (uint)((param_5 & 0xffffffffffff) >> ((ulonglong)((uint)bVar5 * 3) & 0x3f)) & 7;
  uVar6 = (uint)bVar5;
  if (((&DAT_18022c440)[uVar12] !=
       *(char *)(*(longlong *)(param_2 + 0x40) + (ulonglong)bVar5 + 0x14f)) &&
     (*(char *)((longlong)param_2 + 0xfa) == '\0')) {
    uVar12 = 0;
  }
  if (param_6 == (ulonglong *)0x0) {
    local_90 = 0;
    local_d0 = 0xffffffffffffffff;
    uStack_c8 = 0xffffffffffffffff;
    uStack_8c = uStack_8c & 0xffffff00;
    local_e0 = (ulonglong)uStack_8c << 0x20;
  }
  else {
    uStack_88 = param_6[1];
    local_e0 = *param_6;
    uStack_c8 = param_6[3];
    local_d0 = param_6[2];
  }
  uVar15 = 0;
  if ((3 < uVar12 - 1 && uVar12 != 7) || (bVar3 = true, 0x50 < *param_2)) {
    bVar3 = false;
  }
  bVar1 = (byte)param_2[0xfd];
  bVar2 = (&DAT_18022c438)[uVar12];
  bVar14 = (byte)param_2[0x109];
  *(undefined1 *)(param_2 + 0x109) = 0;
  *(byte *)(param_2 + 0xfd) =
       (((bVar1 >> ((ulonglong)(bVar2 >> 6) << 1) & 3) << 2 |
        bVar1 >> (ulonglong)((bVar2 >> 4 & 3) << 1) & 3) << 2 |
       bVar1 >> (ulonglong)((bVar2 >> 2 & 3) << 1) & 3) << 2 |
       bVar1 >> (ulonglong)((bVar2 & 3) << 1) & 3;
  uVar10 = (uint)bVar5;
  uStack_d8 = uStack_88;
  local_a0 = param_4;
  if ((0x92U >> (ulonglong)uVar12 & 1) == 0) {
    if (uVar12 - 5 < 2) {
      iVar11 = 0x10;
      if (uVar12 != 6) {
        iVar11 = 0;
      }
      local_90 = func_0x000180213690(param_2,iVar11 + uVar6,uVar12 == 6,iVar11 + uVar6);
      uStack_8c = CONCAT31(uStack_8c._1_3_,bVar14);
      local_70 = param_2[0xfc] | 0x10000000;
      uStack_78 = 0xffffffff;
      uStack_74 = 0xffffffff;
      local_80 = -1;
      uStack_7c = 0xffffffff;
      uVar10 = 6;
      if (uVar12 != 6) {
        uVar10 = 4;
      }
      uStack_58 = 0xffffffff;
      uStack_54 = 0xffffffff;
      local_60 = -1;
      uStack_5c = 0xffffffff;
      local_6c = (byte)(extraout_w10 >> (ulonglong)uVar10) & 3;
      uVar12 = (uint)(param_5 >> 0x20);
      uVar10 = uVar12 >> 0x12 & 1;
      uVar12 = (uVar12 >> 0x11 & 1) << 1 | uVar10;
      if (((uVar12 == 0) || (uVar12 == 1)) && (((byte)param_2[0xd1] >> 3 & 1) != 0)) {
        *(byte *)(param_2 + 0xd1) = (byte)param_2[0xd1] & 7;
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (uVar10 == 0) {
        if ((uVar12 == 2) || ((param_2[0xd1] & 7) != 0)) {
          FUN_1800f58b8(param_2,param_3,param_2[0xcc] | 0x46,param_2 + 0xd0,param_2 + 0xfc,&local_90
                        ,param_2 + 300,&local_70,0);
          goto LAB_180066db0;
        }
      }
      else if (((uVar12 - 1 & 0xfffffffd) == 0) && ((uVar12 == 3 || ((param_2[0xd1] & 7) != 0)))) {
        if (param_2[0xfc] == extraout_s16) {
          iVar11 = 0;
          local_e0 = local_e0 & 0xffffffff00000000;
          uVar15 = extraout_s16;
        }
        else {
          iVar11 = (int)local_e0;
        }
        if (iVar11 == 0) {
          uVar7 = FUN_1800f42d0(param_2,4,1);
          local_d0 = 0xffffffffffffffff;
          uStack_c8 = 0xffffffffffffffff;
          local_e0 = CONCAT44(local_e0._4_4_,uVar7);
        }
        local_e0._0_5_ = CONCAT14(0xe4,(uint)local_e0);
        uVar12 = 0;
        puVar9 = param_2 + 300;
        do {
          uVar8 = 0;
          puVar16 = puVar9;
          puVar17 = &local_70;
          FUN_1800f58b8(param_2,param_3,0x80000046,(&DAT_18022c2a0)[uVar12],
                        (ulonglong)(byte)(1 << (ulonglong)(uVar12 & 0x1f)) | 0x100,&local_e0,
                        param_2 + 0xfc,&local_90,puVar9,&local_70,0);
          uVar12 = uVar12 + 1;
        } while (uVar12 < 4);
        local_c0 = param_2[0x2a];
        local_bc = 0xe4;
        local_b0 = 0x3e4ccccd;
        uStack_a4 = 0xffffffff;
        uStack_ac = 0xffffffff;
        uStack_a8 = 0xffffffff;
        FUN_1800f58b8(param_2,param_3,0x11,0x101,&local_e0,&local_e0,&local_c0,0,puVar16,puVar17,
                      uVar8);
        FUN_1800f58b8(param_2,param_3,0x46,0x102,&local_e0,param_2 + 0xfc,&local_90,puVar9,&local_70
                      ,0);
        FUN_1800f58b8(param_2,param_3,0x32,param_2 + 0xd0,0x155,&local_e0,&local_c0,0x100,&local_e0,
                      0);
LAB_180066db0:
        *(byte *)((longlong)param_2 + (longlong)((int)uVar6 >> 3) + 0xb4) =
             *(byte *)((longlong)param_2 + (longlong)((int)uVar6 >> 3) + 0xb4) |
             (byte)(1 << (ulonglong)(uVar6 & 7));
      }
      if (bVar3) {
        local_c0 = param_2[0x2a];
        local_bc = 0xe4;
        uStack_ac = 0xffffffff;
        uStack_a8 = 0xffffffff;
        local_b0 = 0x3f800000;
        uStack_a4 = 0xffffffff;
        FUN_1800f58b8(param_2,param_3,0x36,0x108,param_2 + 0xd0,&local_c0,0);
      }
      goto LAB_180066f8c;
    }
    uVar6 = (uint)local_e0;
    if (uVar12 != 2) {
      if (uVar12 != 3) {
        if (uVar12 == 0) {
          local_c0 = param_2[0x2b];
          local_bc = 0xe4;
          local_b0 = 0;
          uStack_ac = 0;
          uStack_a8 = 0;
          uStack_a4 = 0x3f800000;
          FUN_1800f58b8(param_2,param_3,0x36,param_2 + 0xd0,&local_c0,0);
        }
        goto LAB_180066f8c;
      }
      if (*(char *)(*(longlong *)(param_2 + 0x40) + (ulonglong)bVar5 + 0x14f) == '\x02') {
        if (uVar6 == 0) {
          uVar6 = FUN_1800f42d0(param_2,4,1);
          local_d0 = 0xffffffffffffffff;
          uStack_c8 = 0xffffffffffffffff;
          local_e0 = CONCAT44(local_e0._4_4_,uVar6);
        }
        local_e0._0_5_ = CONCAT14(0xb,(uint)local_e0);
        if (param_2[0xfc] != uVar6) {
          uVar4 = FUN_1800f5ea8((char)param_2[0xfd],0xb);
          FUN_1800f58b8(param_2,param_3,0x36,&local_e0,uVar4,0);
        }
        local_90 = param_2[0x2a];
        uStack_8c = CONCAT31(uStack_8c._1_3_,0xe4);
        uStack_78 = 0xffffffff;
        uStack_74 = 0xffffffff;
        local_80 = -1;
        uStack_7c = 0xffffffff;
        FUN_1800f58b8(param_2,param_3,0x36,0x104,&local_e0,&local_90,0);
        *(ulonglong *)(param_2 + 0xfe) = uStack_d8;
        *(ulonglong *)(param_2 + 0xfc) = local_e0;
        *(ulonglong *)(param_2 + 0x102) = uStack_c8;
        *(ulonglong *)(param_2 + 0x100) = local_d0;
      }
      goto LAB_180066a20;
    }
    if ((bVar3) && ((param_2[0xd0] & 0x3f00) != 0)) {
      uVar4 = (undefined1)param_2[0xd1];
      if (uVar6 == 0) {
        uVar7 = FUN_1800f42d0(param_2,4,1);
        local_d0 = 0xffffffffffffffff;
        uStack_c8 = 0xffffffffffffffff;
        local_e0 = CONCAT44(local_e0._4_4_,uVar7);
      }
      local_e0._0_5_ = CONCAT14(uVar4,(uint)local_e0);
      puVar9 = (uint *)&local_e0;
    }
    else {
      puVar9 = param_2 + 0xd0;
    }
    local_90 = func_0x000180213690(param_2,uVar10 + 0x10,1,uVar10 + 0x10);
    puVar16 = param_2 + 0x120;
    uStack_8c = CONCAT31(uStack_8c._1_3_,bVar14);
    uStack_78 = 0xffffffff;
    uStack_74 = 0xffffffff;
    local_80 = -1;
    uStack_7c = 0xffffffff;
    uVar8 = 0;
    FUN_1800f58b8(param_2,param_3,param_2[0xcc] | local_a0,puVar9,param_2 + 0xfc,&local_90,
                  param_2 + 0x108,param_2 + 0x114,puVar16,0);
    if (bVar3) {
      local_c0 = param_2[0x1a];
      local_b0 = (uint)bVar5 * 0x20 + 0x2c0;
      local_bc = 0xe4;
      local_60 = (uint)bVar5 * 0x20 + 0x2d0;
      uStack_ac = 0xffffffff;
      uStack_a8 = 0xffffffff;
      uStack_a4 = 0xffffffff;
      local_6c = 0xe4;
      uStack_5c = 0xffffffff;
      uStack_58 = 0xffffffff;
      uStack_54 = 0xffffffff;
      local_70 = local_c0;
      bVar5 = FUN_1800f5ea8(0xe4,(char)puVar9[1]);
      uVar13 = (ulonglong)bVar5 | 0x100;
      FUN_1800f58b8(param_2,param_3,1,puVar9,uVar13,puVar9,&local_c0,0,puVar16,uVar8);
      goto LAB_180066f4c;
    }
  }
  else {
LAB_180066a20:
    if (uVar12 == 4) {
      bVar1 = bVar14 & 3;
      bVar14 = bVar1 | (bVar1 | (bVar1 | bVar14 << 2) << 2) << 2;
    }
    else if (uVar12 == 7) {
      bVar14 = bVar14 & 0xf0 | (bVar14 & 3) << 2 | bVar14 >> 2 & 3;
    }
    if ((bVar3) && ((param_2[0xd0] & 0x3f00) != 0)) {
      uVar4 = (undefined1)param_2[0xd1];
      if ((int)local_e0 == 0) {
        uVar7 = FUN_1800f42d0(param_2,4,1);
        local_d0 = 0xffffffffffffffff;
        uStack_c8 = 0xffffffffffffffff;
        local_e0 = CONCAT44(local_e0._4_4_,uVar7);
      }
      local_e0._0_5_ = CONCAT14(uVar4,(uint)local_e0);
      puVar9 = (uint *)&local_e0;
    }
    else {
      puVar9 = param_2 + 0xd0;
    }
    iVar11 = 0x20;
    if (uVar12 != 3) {
      iVar11 = 0;
    }
    uVar7 = 2;
    if (uVar12 != 3) {
      uVar7 = 0;
    }
    local_c0 = func_0x000180213690(param_2,iVar11 + uVar10,uVar7,iVar11 + uVar10);
    puVar16 = param_2 + 0x120;
    uStack_a8 = 0xffffffff;
    uStack_a4 = 0xffffffff;
    local_b0 = -1;
    uStack_ac = 0xffffffff;
    uVar8 = 0;
    local_bc = bVar14;
    FUN_1800f58b8(param_2,param_3,param_2[0xcc] | local_a0,puVar9,param_2 + 0xfc,&local_c0,
                  param_2 + 0x108,param_2 + 0x114,puVar16,0);
    if (bVar3) {
      local_90 = param_2[0x1a];
      local_80 = (uint)bVar5 * 0x20 + 0x2c0;
      uStack_8c = CONCAT31(uStack_8c._1_3_,0xe4);
      local_60 = (uint)bVar5 * 0x20 + 0x2d0;
      uStack_7c = 0xffffffff;
      uStack_78 = 0xffffffff;
      uStack_74 = 0xffffffff;
      local_6c = 0xe4;
      uStack_5c = 0xffffffff;
      uStack_58 = 0xffffffff;
      uStack_54 = 0xffffffff;
      local_70 = local_90;
      bVar5 = FUN_1800f5ea8(0xe4,(char)puVar9[1]);
      uVar13 = (ulonglong)bVar5 | 0x100;
      FUN_1800f58b8(param_2,param_3,1,puVar9,uVar13,puVar9,&local_90,0,puVar16,uVar8);
LAB_180066f4c:
      FUN_1800f58b8(param_2,param_3,0x3c,param_2 + 0xd0,uVar13,puVar9,&local_70,0,puVar16,uVar8);
    }
  }
  *(byte *)((longlong)param_2 + (longlong)((int)uVar10 >> 3) + 0xb4) =
       *(byte *)((longlong)param_2 + (longlong)((int)uVar10 >> 3) + 0xb4) |
       (byte)(1 << (ulonglong)(uVar10 & 7));
LAB_180066f8c:
  uVar8 = FUN_1800f4370(param_2,local_e0 & 0xffffffff);
  FUN_1800f4370(uVar8,uVar15);
  return;
}


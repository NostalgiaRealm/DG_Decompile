/*
 * FUN_100438a0 at 100438a0
 * undefined FUN_100438a0(void)
 * Address ranges: 100438a0-10044713
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_100438a0(undefined8 param_1,int param_2,int param_3,uint param_4,undefined4 param_5,
                      byte param_6,undefined4 param_7,ulonglong param_8)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined8 *extraout_w11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 local_e0;
  uint local_d8;
  uint *puStack_d4;
  undefined8 local_d0;
  uint *local_c8;
  uint local_c4;
  uint local_c0;
  undefined4 *local_bc;
  undefined4 local_b8;
  uint local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined1 local_90;
  uint *local_8c;
  undefined4 *local_88;
  ulonglong local_80;
  byte local_78;
  uint local_74;
  undefined4 local_70;
  ulonglong local_68;
  uint *local_60;
  ulonglong local_58;
  undefined4 local_50;
  
  if (((param_8 >> 0x2e & 1) == 0) && ((param_8 >> 0x2d & 1) == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  local_60 = (uint *)0x1;
  if (!bVar3) {
    local_60 = (uint *)0x4;
  }
  local_88 = (undefined4 *)param_5;
  local_78 = param_6;
  uVar7 = FUN_10079948(param_2,local_60,1);
  uVar13 = uVar7 & 0xffffffff;
  uVar12 = (uint)uVar7;
  if (!bVar3) {
    local_e0 = CONCAT44(param_7,param_2);
    local_c8 = (uint *)0xff;
    local_c4 = 0;
    local_d8 = 0x36;
    local_d0 = CONCAT44(param_4,8);
    puStack_d4 = (uint *)uVar12;
    FUN_1007a868(&local_e0,0x20);
  }
  bVar4 = local_78;
  local_e0 = CONCAT44(param_7,param_2);
  uVar5 = local_78 & 3;
  local_c8 = (uint *)((uVar5 | (uVar5 | (local_78 & 3) << 2) << 2) << 2 | uVar5);
  local_68 = CONCAT44(local_68._4_4_,local_c8);
  local_c4 = 0;
  local_d0 = CONCAT44(local_88,8);
  local_d8 = 0x36;
  puStack_d4 = (uint *)param_4;
  FUN_1007a868(&local_e0,0x20);
  local_58 = param_8 & 0xc000000;
  local_74 = 0;
  local_70 = 0;
  iVar2 = param_3 * 0x120;
  local_8c = (uint *)0x0;
  if (local_58 == 0xc000000) {
    local_88 = (undefined4 *)iVar2;
    if (bVar4 == 0) {
      uVar7 = (ulonglong)*(uint *)(param_2 + 0x238);
    }
    else {
      uVar7 = FUN_10079948(param_2,4,1);
      uVar7 = uVar7 & 0xffffffff;
    }
    uVar8 = FUN_10079948(param_2,4,1);
    local_e0 = CONCAT71(local_e0._1_7_,1);
    local_80 = CONCAT44(local_80._4_4_,(int)uVar8);
    local_d8 = param_7;
    local_d0 = param_8;
    FUN_10043090(uVar8,param_2,param_4,0xf4,uVar7,0x410718,uVar8 & 0xffffffff,uVar13);
    if (!bVar3) {
      local_8c = (uint *)FUN_10079948(param_2,4,1);
      local_e0 = CONCAT71(local_e0._1_7_,2);
      local_d8 = param_7;
      local_d0 = param_8;
      FUN_10043090(local_8c,param_2,param_4,0xf6,local_8c,0x410718,(undefined4)local_80,uVar13);
      local_e0 = CONCAT44(param_7,param_2);
      local_d0 = CONCAT44(uVar12,2);
      local_c8 = (uint *)0xff;
      local_c4 = 0;
      local_d8 = 0x36;
      puStack_d4 = (uint *)param_4;
      FUN_1007a868(&local_e0,0x20);
      uVar8 = FUN_10079948(param_2,4,1);
      local_70 = (undefined4)uVar8;
      local_e0._0_1_ = 4;
      local_d8 = param_7;
      local_d0 = param_8;
      uVar9 = FUN_10043090(uVar8,param_2,param_4,0xf4,uVar8 & 0xffffffff,0x410718,
                           (undefined4)local_80,uVar13);
      local_e0 = CONCAT71(local_e0._1_7_,8);
      local_d8 = param_7;
      local_d0 = param_8;
      local_74 = param_4;
      FUN_10043090(uVar9,param_2,param_4,0xf6,param_4,0x410718,(undefined4)local_80,uVar13);
      param_4 = 0;
    }
    FUN_10079a60(param_2,(undefined4)local_80);
    local_80 = CONCAT44(local_80._4_4_,(int)local_88 + 0xaec);
    local_88 = (undefined4 *)((int)local_88 + 0xacc);
  }
  else {
    local_c0 = 0;
    local_bc = (undefined4 *)0x0;
    local_e0 = CONCAT44(param_7,param_2);
    local_88 = (undefined4 *)(iVar2 + 0xb08);
    local_c8 = (uint *)0xf4;
    local_c4 = 0x410718;
    local_d8 = 0x2d;
    local_80 = CONCAT44(local_80._4_4_,iVar2 + 0xb0c);
    local_d0 = CONCAT44(param_4,1);
    uVar7 = 0;
    puStack_d4 = (uint *)uVar12;
    FUN_1007a868(&local_e0,0x28);
    if (!bVar3) {
      local_c0 = 0;
      local_bc = (undefined4 *)0x0;
      local_e0 = CONCAT44(param_7,param_2);
      local_c8 = (uint *)0xf6;
      local_c4 = 0x410718;
      local_d0 = CONCAT44(param_4,2);
      local_d8 = 0x2d;
      puStack_d4 = (uint *)uVar12;
      FUN_1007a868(&local_e0,0x28);
      local_e0 = CONCAT44(param_7,param_2);
      local_d0 = CONCAT44(uVar12,2);
      local_c8 = (uint *)0xff;
      local_c4 = 0;
      local_d8 = 0x36;
      puStack_d4 = (uint *)param_4;
      FUN_1007a868(&local_e0,0x20);
      local_c0 = 0;
      local_bc = (undefined4 *)0x0;
      local_e0 = CONCAT44(param_7,param_2);
      local_c8 = (uint *)0xf4;
      local_c4 = 0x410718;
      local_d0 = CONCAT44(param_4,4);
      local_d8 = 0x2d;
      puStack_d4 = (uint *)uVar12;
      FUN_1007a868(&local_e0,0x28);
      local_c0 = 0;
      local_bc = (undefined4 *)0x0;
      local_e0 = CONCAT44(param_7,param_2);
      local_c8 = (uint *)0xf6;
      local_c4 = 0x410718;
      local_d0 = CONCAT44(param_4,8);
      local_d8 = 0x2d;
      puStack_d4 = (uint *)uVar12;
      FUN_1007a868(&local_e0,0x28);
    }
  }
  FUN_10079a60(param_2,param_4);
  uVar5 = uVar12;
  if (local_58 != 0xc000000) {
    uVar5 = FUN_10079948(param_2,local_60,1);
  }
  local_e0 = CONCAT44(param_7,param_2);
  local_60 = (uint *)(param_2 + 0x8c);
  local_c4 = *local_60;
  local_c8 = (uint *)0x0;
  if (!bVar3) {
    local_c8 = (uint *)0xe4;
  }
  puVar6 = (uint *)0x1;
  if (!bVar3) {
    puVar6 = (uint *)0xf;
  }
  local_d0 = CONCAT44(uVar12,puVar6);
  local_bc = (undefined4 *)(undefined4)local_80;
  local_b8 = 0;
  local_c0 = 0xff;
  local_d8 = 1;
  puStack_d4 = (uint *)uVar5;
  local_50 = local_c8;
  local_58._0_4_ = puVar6;
  FUN_1007a868(&local_e0,0x2c);
  local_80 = param_8 >> 0x30 & 1;
  if (((param_8 >> 0x31 & 1) == 0) && (local_80 == 0)) {
    local_d8 = 0x20;
  }
  else {
    local_d8 = 0x27;
  }
  local_b8 = 0;
  local_e0 = CONCAT44(param_7,param_2);
  local_d0._0_4_ = (uint *)local_58;
  local_c0 = (uint)*(byte *)(((uint)local_88 >> 2 & 3) + 0x1009ec18);
  local_bc = local_88;
  local_c4 = *local_60;
  local_c8 = (uint *)local_50;
  puStack_d4 = (uint *)uVar5;
  local_d0._4_4_ = uVar5;
  uVar8 = FUN_1007a868(&local_e0,0x2c);
  puVar6 = (uint *)(param_2 + 0x244);
  if (*(uint *)(param_2 + 0x240) != 0) {
    puStack_d4 = (uint *)*puVar6;
    local_bc = (undefined4 *)0x0;
    local_e0 = CONCAT44(param_7,param_2);
    local_c0 = (uint)(uint *)local_68;
    local_c8 = (uint *)0x154;
    local_d0._0_4_ = (uint *)0x3;
    local_d8 = 1;
    local_c4 = *(uint *)(param_2 + 0x240);
    local_58._0_4_ = puVar6;
    local_d0._4_4_ = (uint)puStack_d4;
    uVar8 = FUN_1007a868(&local_e0,0x28);
    puVar6 = (uint *)local_58;
  }
  if (local_80 == 0) {
    if (!bVar3) {
      puStack_d4 = (uint *)FUN_10079948(param_2,2,0);
      local_bc = (undefined4 *)0x0;
      local_b8 = 0;
      local_b0 = 0x154;
      uStack_ac = 0;
      local_b4 = *puVar6;
      local_80 = CONCAT44(local_80._4_4_,puStack_d4);
      local_c4 = 0;
      local_c0 = 0;
      local_e0 = CONCAT44(param_7,param_2);
      local_c8 = (uint *)0xe4;
      local_d0 = CONCAT44(*(undefined4 *)(param_2 + 0x94),3);
      local_d8 = 0x1d;
      FUN_1007a868(&local_e0,0x38);
      local_d0 = CONCAT44(uVar5,10);
      local_c0 = 0;
      local_bc = (undefined4 *)0x0;
      local_d8 = 0x3c;
      local_c8 = (uint *)0xe4;
      local_c4 = (undefined4)local_80;
      local_e0 = CONCAT44(param_7,param_2);
      puStack_d4 = (uint *)uVar5;
      FUN_1007a868(&local_e0,0x28);
      local_c0 = 0x55;
      local_bc = (undefined4 *)0x0;
      local_d0 = CONCAT44(uVar5,0xc);
      local_e0 = CONCAT44(param_7,param_2);
      local_d8 = 0x3c;
      local_c8 = (uint *)0xe4;
      local_c4 = (undefined4)local_80;
      puStack_d4 = (uint *)uVar5;
      FUN_1007a868(&local_e0,0x28);
      local_e0 = CONCAT44(param_7,param_2);
      local_c0 = 0xfe;
      local_bc = (undefined4 *)0x0;
      local_c8 = (uint *)0x54;
      local_d8 = 1;
      local_d0 = CONCAT44(uVar5,3);
      puStack_d4 = (uint *)uVar5;
      local_c4 = uVar5;
      FUN_1007a868(&local_e0,0x28);
      local_c8 = (uint *)0x0;
      local_d0 = CONCAT44(uVar5,1);
      local_c0 = 0x55;
      local_bc = (undefined4 *)0x0;
      local_d8 = 1;
      local_e0 = CONCAT44(param_7,param_2);
      puStack_d4 = (uint *)uVar5;
      local_c4 = uVar5;
      FUN_1007a868(&local_e0,0x28);
    }
    local_c8 = (uint *)0x0;
    local_e0 = CONCAT44(param_7,param_2);
    local_d8 = ~((uint)(param_8 >> 0x31) << 0x12) & 0x40000 | 0xd;
    local_d0._0_4_ = (uint *)(uVar5 | 0x10000000);
    puStack_d4 = (uint *)0xffffffff;
    local_d0._4_4_ = 0;
    uVar8 = FUN_1007a868(&local_e0,0x1c);
    if (uVar5 != uVar12) {
      uVar8 = FUN_10079a60(param_2,uVar5);
    }
    uVar5 = 0;
  }
  local_68 = param_8 >> 0x30;
  switch((uint)(param_8 >> 0x1a) & 3) {
  case 0:
    if (local_78 == 0) {
      uVar7 = (ulonglong)*(uint *)(param_2 + 0x238);
    }
    else {
      uVar8 = FUN_10079948(param_2,4,1);
      uVar7 = uVar8 & 0xffffffff;
    }
    local_e0 = CONCAT44(local_e0._4_4_,param_7);
    FUN_100432b8(uVar8,param_2,param_3,uVar7,uVar13,0,0x41071a,uVar5);
    if (bVar3) goto switchD_10043f0c_default;
    puVar6 = (uint *)FUN_10079948(param_2,4,1);
    local_e0._0_4_ = param_7;
    uVar9 = FUN_100432b8(puVar6,param_2,param_3,puVar6,uVar13,1,0x41071a,uVar5);
    local_88 = (undefined4 *)(param_2 + 0x244);
    local_d8 = local_d8 & 0xffffff00;
    local_e0._0_4_ = *local_88;
    uVar9 = FUN_10042500(uVar9,param_2,param_7,uVar7,0xf,puVar6,uVar7,puVar6);
    local_e0 = CONCAT44(local_e0._4_4_,param_7);
    uVar10 = FUN_100432b8(uVar9,param_2,param_3,puVar6,uVar13,2,0x41071a,uVar5);
    uVar8 = uVar13;
    if (uVar12 == 0) {
      uVar10 = FUN_10079948(param_2,4,1);
      uVar8 = uVar10 & 0xffffffff;
    }
    local_e0._0_4_ = param_7;
    FUN_100432b8(uVar10,param_2,param_3,uVar8,uVar13,3,0x41071a,uVar5);
    uVar13 = 0;
    uVar9 = FUN_10079a60(param_2,uVar5);
    local_d8 = local_d8 & 0xffffff00;
    local_e0._0_4_ = *local_88;
    uVar9 = FUN_10042500(uVar9,param_2,param_7,puVar6,0xf,uVar8,puVar6,uVar8);
    local_d8 = CONCAT31(local_d8._1_3_,0x55);
    local_e0 = CONCAT44(local_e0._4_4_,*local_88);
    FUN_10042500(uVar9,param_2,param_7,uVar7,0xf,uVar8,uVar7,puVar6);
    FUN_10079a60(param_2,uVar8);
    break;
  case 1:
    if (local_78 == 0) {
      uVar7 = (ulonglong)*(uint *)(param_2 + 0x238);
    }
    else {
      uVar7 = FUN_10079948(param_2,4,1);
      uVar7 = uVar7 & 0xffffffff;
    }
    puStack_d4 = (uint *)FUN_10079948(param_2,4,1);
    local_b8 = 0;
    local_68 = CONCAT44(local_68._4_4_,(undefined4 *)(param_2 + 0x90));
    local_c4 = *(undefined4 *)(param_2 + 0x90);
    local_c8 = (uint *)0x0;
    if (!bVar3) {
      local_c8 = (uint *)0xe4;
    }
    local_e0 = CONCAT44(param_7,param_2);
    uVar11 = 1;
    if (!bVar3) {
      uVar11 = 0xf;
    }
    local_d0 = CONCAT44(uVar12,uVar11);
    local_d8 = 0x55;
    local_c0 = 0xe4;
    local_bc = (undefined4 *)0x8;
    local_8c = puStack_d4;
    local_58._0_4_ = local_c8;
    FUN_1007a868(&local_e0,0x2c);
    local_b8 = 0;
    local_c0 = 0xe4;
    local_bc = (undefined4 *)0xff;
    local_c4 = *(uint *)local_68;
    local_d8 = 1;
    local_c8 = (uint *)local_58;
    puStack_d4 = (uint *)uVar12;
    local_d0._0_4_ = (uint *)uVar11;
    local_d0._4_4_ = uVar12;
    local_e0._0_4_ = param_2;
    local_e0._4_4_ = param_7;
    uVar9 = FUN_1007a868(&local_e0,0x2c);
    local_d0._0_4_ = local_8c;
    if (!bVar3) {
      local_d0._0_4_ = (uint *)0x0;
    }
    local_e0 = CONCAT44(local_e0._4_4_,0x41071b);
    local_d8 = uVar5;
    local_c8 = (uint *)param_7;
    FUN_10043360(uVar9,param_2,param_3,uVar7,uVar13,local_8c,0,0x41071a);
    puVar6 = local_8c;
    if (!bVar3) {
      uVar8 = FUN_10079948(param_2,4,1);
      uVar14 = uVar8 & 0xffffffff;
      local_d0._0_4_ = (uint *)0x0;
      local_e0._0_4_ = 0x41071b;
      local_d8 = uVar5;
      local_c8 = (uint *)param_7;
      uVar9 = FUN_10043360(uVar8,param_2,param_3,uVar14,uVar13,local_8c,1,0x41071a);
      local_88 = (undefined4 *)(param_2 + 0x244);
      local_d8 = local_d8 & 0xffffff00;
      local_e0._0_4_ = *local_88;
      uVar9 = FUN_10042500(uVar9,param_2,param_7,uVar7,0xf,uVar14,uVar7,uVar14);
      local_d0 = (ulonglong)local_d0._4_4_ << 0x20;
      local_e0 = CONCAT44(local_e0._4_4_,0x41071b);
      local_d8 = uVar5;
      local_c8 = (uint *)param_7;
      uVar10 = FUN_10043360(uVar9,param_2,param_3,uVar14,uVar13,local_8c,2,0x41071a);
      uVar8 = uVar13;
      if (uVar12 == 0) {
        uVar10 = FUN_10079948(param_2,4,1);
        uVar8 = uVar10 & 0xffffffff;
      }
      local_e0._0_4_ = 0x41071b;
      local_d0._0_4_ = local_8c;
      local_d8 = uVar5;
      local_c8 = (uint *)param_7;
      FUN_10043360(uVar10,param_2,param_3,uVar8,uVar13,local_8c,3,0x41071a);
      uVar13 = 0;
      uVar9 = FUN_10079a60(param_2,uVar5);
      local_d8 = local_d8 & 0xffffff00;
      local_e0._0_4_ = *local_88;
      uVar9 = FUN_10042500(uVar9,param_2,param_7,uVar14,0xf,uVar8,uVar14,uVar8);
      local_d8 = CONCAT31(local_d8._1_3_,0x55);
      local_e0 = CONCAT44(local_e0._4_4_,*local_88);
      FUN_10042500(uVar9,param_2,param_7,uVar7,0xf,uVar8,uVar7,uVar14);
      FUN_10079a60(param_2,uVar8);
      FUN_10079a60(param_2,uVar14);
      puVar6 = local_8c;
    }
    break;
  case 2:
    if ((local_68 & 1) == 0) {
      local_90 = *(undefined1 *)(param_2 + 0x24c);
    }
    else {
      local_90 = 0xf;
    }
    if (local_78 == 0) {
      uVar7 = (ulonglong)*(uint *)(param_2 + 0x238);
    }
    else {
      uVar8 = FUN_10079948(param_2,4,1);
      uVar7 = uVar8 & 0xffffffff;
    }
    local_e0 = param_8;
    FUN_100434a8(uVar8,param_2,param_3,uVar7,uVar13,0,uVar5,param_7);
    uVar8 = local_68;
    if (!bVar3) {
      local_8c = (uint *)FUN_10079948(param_2,4,1);
      local_e0 = param_8;
      uVar9 = FUN_100434a8(local_8c,param_2,param_3,local_8c,uVar13,1,uVar5,param_7);
      local_88 = (undefined4 *)(param_2 + 0x244);
      local_d8 = local_d8 & 0xffffff00;
      local_e0 = CONCAT44(local_e0._4_4_,*local_88);
      uVar9 = FUN_10042500(uVar9,param_2,param_7,uVar7,local_90,local_8c,uVar7,local_8c);
      local_e0 = param_8;
      uVar10 = FUN_100434a8(uVar9,param_2,param_3,local_8c,uVar13,2,uVar5,param_7);
      uVar8 = uVar13;
      if (uVar12 == 0) {
        uVar10 = FUN_10079948(param_2,4,1);
        uVar8 = uVar10 & 0xffffffff;
      }
      local_e0 = param_8;
      FUN_100434a8(uVar10,param_2,param_3,uVar8,uVar13,3,uVar5,param_7);
      uVar13 = 0;
      uVar9 = FUN_10079a60(param_2,uVar5);
      local_d8 = local_d8 & 0xffffff00;
      local_e0._0_4_ = *local_88;
      uVar9 = FUN_10042500(uVar9,param_2,param_7,local_8c,local_90,uVar8,local_8c,uVar8);
      local_d8 = CONCAT31(local_d8._1_3_,0x55);
      local_e0 = CONCAT44(local_e0._4_4_,*local_88);
      FUN_10042500(uVar9,param_2,param_7,uVar7,local_90,uVar8,uVar7,local_8c);
      FUN_10079a60(param_2,uVar8);
      FUN_10079a60(param_2,local_8c);
      uVar8 = param_8 >> 0x30;
    }
    goto LAB_100446b0;
  case 3:
    if ((local_68 & 1) == 0) {
      local_90 = *(undefined1 *)(param_2 + 0x24c);
    }
    else {
      local_90 = 0xf;
    }
    uVar9 = FUN_100437b8(uVar8,param_2,param_3,uVar7,uVar5,0,param_7,param_8);
    uVar8 = local_68;
    if (!bVar3) {
      uVar9 = FUN_100437b8(uVar9,param_2,param_3,local_8c,uVar5,1,param_7,param_8);
      puVar1 = (undefined4 *)(param_2 + 0x244);
      local_d8 = local_d8 & 0xffffff00;
      local_e0._0_4_ = *puVar1;
      uVar9 = FUN_10042500(uVar9,param_2,param_7,uVar7,local_90,local_8c,uVar7,local_8c);
      uVar9 = FUN_100437b8(uVar9,param_2,param_3,local_70,uVar5,2,param_7,param_8);
      FUN_100437b8(uVar9,param_2,param_3,local_74,uVar5,3,param_7,param_8);
      uVar9 = FUN_10079a60(param_2,uVar5);
      local_e0._0_4_ = *puVar1;
      local_d8 = local_d8 & 0xffffff00;
      uVar9 = FUN_10042500(uVar9,param_2,param_7,local_8c,local_90,local_74,local_70,local_74);
      local_d8 = CONCAT31(local_d8._1_3_,0x55);
      local_e0 = CONCAT44(local_e0._4_4_,*puVar1);
      FUN_10042500(uVar9,param_2,param_7,uVar7,local_90,local_8c,uVar7,local_8c);
      FUN_10079a60(param_2,local_74);
      FUN_10079a60(param_2,local_70);
      FUN_10079a60(param_2,local_8c);
      uVar8 = local_68;
    }
LAB_100446b0:
    if ((uVar8 & 1) != 0) {
      *(undefined1 *)(param_2 + 0x24c) = 0xf;
    }
  default:
    goto switchD_10043f0c_default;
  }
  FUN_10079a60(param_2,puVar6);
switchD_10043f0c_default:
  FUN_10079a60(param_2,uVar13);
  FUN_10079a60(param_2,*(undefined4 *)(param_2 + 0x244));
  FUN_10079a60(param_2,*(undefined4 *)(param_2 + 0x248));
  *extraout_w11 = 0;
  return uVar7;
}


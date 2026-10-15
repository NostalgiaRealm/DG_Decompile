/*
 * FUN_10048f70 at 10048f70
 * undefined FUN_10048f70(void)
 * Address ranges: 10048f70-100499f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048f70(int param_1,int param_2,uint param_3)

{
  ushort *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ushort uVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  int iVar22;
  int local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  int local_b4;
  undefined4 local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  byte local_70;
  byte local_6f;
  int local_6c;
  uint local_68;
  undefined4 *local_64;
  byte *local_60;
  byte *local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  local_60 = (byte *)(param_2 + 0x120);
  local_5c = (byte *)(param_2 + 0x121);
  local_6f = *local_60;
  local_70 = *local_5c;
  local_54 = param_2 + 0xe4;
  local_58 = param_2 + 0xac;
  local_50 = param_2 + 0xa8;
  local_4c = param_2 + 0xab;
  local_48 = param_2 + 0xa5;
  iVar22 = 4;
  local_64 = (undefined4 *)0x38;
  local_6c = param_1;
  do {
    uVar15 = 1 << (ulonglong)(iVar22 - 1U & 0x1f);
    uVar21 = (uint)local_6f;
    uVar19 = (uint)local_70;
    if ((uVar21 == (uVar15 & 0xff)) || (bVar5 = false, *local_60 == 0 && iVar22 == 1)) {
      bVar5 = true;
    }
    if (((uint)local_70 == (uVar15 & 0xff)) || (bVar6 = false, *local_5c == 0 && iVar22 == 1)) {
      bVar6 = true;
    }
    local_6f = local_6f & ((byte)uVar15 ^ 0xff);
    local_70 = local_70 & ((byte)uVar15 ^ 0xff);
    if (((bVar5) && (*(char *)(param_2 + 0x1b4) == '\0')) && (*(char *)(param_2 + 0x1b7) == '\0')) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if ((uVar15 & 0xff & uVar21) != 0) {
      bVar7 = true;
    }
    if ((bVar6) && (*(char *)(param_2 + 0x1b6) == '\0')) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if ((uVar15 & 0xff & uVar19) != 0) {
      bVar8 = true;
    }
    if (bVar7 || iVar22 == 1) {
      FUN_10048de0(local_6c,param_2,param_3,iVar22 + -1,0);
    }
    iVar4 = local_6c;
    if ((bVar8 || iVar22 == 1) &&
       (FUN_10048de0(local_6c,param_2,param_3,iVar22 + -1,1), iVar22 == 1)) {
      iVar3 = *(int *)(iVar4 + 0x864);
      iVar4 = *(int *)(iVar4 + 0x4c);
      if ((iVar4 != 0) || (iVar3 != 0)) {
        uVar13 = 0x880;
        if (iVar3 == 0) {
          uVar13 = 0;
        }
        uVar14 = 0x870;
        if (iVar3 == 0) {
          uVar14 = 0;
        }
        uVar20 = 0x40;
        if (iVar4 == 0) {
          uVar20 = 0;
        }
        FUN_10045940(param_2 + 0xb0,*(undefined2 *)(param_2 + 0xbc),0,uVar20,uVar14,uVar13,param_2,
                     param_3);
      }
    }
    puVar2 = local_64;
    if ((bVar6) && (*(char *)(param_2 + 0x1b6) == '\0')) {
      uVar18 = 0x70;
    }
    else {
      uVar18 = 0xf0;
    }
    local_68 = CONCAT22(local_68._2_2_,uVar18);
    if (((bVar5) && (*(char *)(param_2 + 0x1b4) == '\0')) && (*(char *)(param_2 + 0x1b7) == '\0')) {
      uVar15 = 0x70;
    }
    else {
      uVar15 = 0xf0;
    }
    if (((((*(ushort *)(local_58 + (int)local_64) ^ *(ushort *)(local_54 + (int)local_64)) & 0xefff)
          == 0) &&
        (puVar1 = (ushort *)((int)local_64 + param_2 + 0xa2),
        ((*(ushort *)((int)local_64 + param_2 + 0xda) ^ *puVar1) & 0xefff) == 0)) &&
       ((((*(ushort *)((int)local_64 + param_2 + 0xdc) ^ *(ushort *)((int)local_64 + param_2 + 0xa4)
          ) & 0xefff) == 0 &&
        ((((*(ushort *)((int)local_64 + param_2 + 0xde) ^
           *(ushort *)((int)local_64 + param_2 + 0xa6)) & 0xefff) == 0 &&
         (((*(ushort *)(param_2 + (iVar22 + 0x10) * 0xe) ^
           *(ushort *)(param_2 + (iVar22 + 0xc) * 0xe)) & 0xefff) == 0)))))) {
      if (!bVar7) goto LAB_100492c0;
      if (!bVar8 || uVar18 != uVar15) goto LAB_100492a4;
      uVar17 = 1;
      uVar16 = 1;
LAB_100492d4:
      FUN_10045478(puVar1,param_2,param_3,uVar15,uVar16,uVar17);
    }
    else {
      if (bVar7) {
LAB_100492a4:
        FUN_10045478((int)local_64 + param_2 + 0xa2,param_2,param_3,uVar15,1,0);
      }
LAB_100492c0:
      if (bVar8) {
        uVar15 = local_68 & 0xffff;
        puVar1 = (ushort *)((int)puVar2 + param_2 + 0xda);
        uVar17 = 0;
        uVar16 = 0;
        goto LAB_100492d4;
      }
    }
    if (bVar6) {
      if (*(char *)(param_2 + 0x1b6) != '\0') {
        FUN_10041df8(param_2,*(undefined2 *)((int)puVar2 + param_2 + 0xe4),0x70,0,8,param_3,1);
      }
      FUN_10047178(local_6c,param_2,param_3,*(undefined2 *)((int)puVar2 + param_2 + 0xe4));
    }
    if (bVar5) {
      puVar1 = (ushort *)((int)puVar2 + param_2 + 0xac);
      uVar11 = FUN_10047410(local_6c,param_2,param_3,*puVar1,*(undefined1 *)(param_2 + 0x1b7));
      uVar18 = uVar11;
      if ((uVar11 & 0xf0) != 0x80 && (uVar11 & 0xf0) != 0xf0) {
        uVar18 = *puVar1;
      }
      FUN_10048ac0(local_6c,param_2,param_3,uVar18);
      FUN_10041a38(param_2,uVar11);
    }
    iVar10 = local_48;
    iVar3 = local_4c;
    iVar4 = local_50;
    uVar15 = 0;
    uVar19 = iVar22 - 1;
    local_68 = param_3;
    local_44 = iVar22;
    do {
      if (*(byte *)(iVar4 + uVar15) == uVar19) {
        puVar2 = (undefined4 *)(uVar15 * 4 + param_2 + 0x78);
        FUN_10077bb0(param_2,*puVar2);
        *puVar2 = 0;
      }
      if (*(byte *)(iVar3 + uVar15) == uVar19) {
        puVar2 = (undefined4 *)(uVar15 * 4 + param_2 + 0x6c);
        FUN_10077bb0(param_2,*puVar2);
        *puVar2 = 0;
      }
      if (*(byte *)(iVar10 + uVar15) == uVar19) {
        puVar2 = (undefined4 *)(uVar15 * 4 + param_2 + 0x84);
        FUN_10077bb0(param_2,*puVar2);
        *puVar2 = 0;
      }
      uVar21 = local_68;
      iVar9 = local_6c;
      uVar15 = uVar15 + 1;
    } while (uVar15 < 3);
    local_64 = (undefined4 *)((int)local_64 + -0xe);
    iVar22 = local_44 + -1;
    param_3 = local_68;
  } while (iVar22 != 0);
  FUN_10045410(param_2,*(char *)(param_2 + 0x1b9));
  bVar5 = false;
  if (*(char *)(param_2 + 0x1b9) == '\0') {
    uVar15 = *(uint *)(iVar9 + 0x28) & *(uint *)(iVar9 + 0x24);
    if ((uVar15 - 1 & 0xfffffffd) == 0) {
      uVar13 = FUN_10077af0(param_2,1,1);
      local_a8 = 0;
      local_a4 = 0;
      local_b0 = 1;
      local_ac = 0x190100;
      uStack_bc = uVar21;
      local_b8 = 0x2036;
      local_c0 = param_2;
      local_b4 = uVar13;
      FUN_10078c60(&local_c0,0x20);
      local_a4 = *(undefined4 *)(param_2 + 0x50);
      local_98 = 0;
      local_a8 = 0;
      local_9c = 0x497ffff0;
      uStack_bc = uVar21;
      local_a0 = 0xe4;
      local_b4 = 0x110201;
      local_b0 = 1;
      local_b8 = 0x38;
      local_c0 = param_2;
      local_ac = uVar13;
      FUN_10078c60(&local_c0,0x2c);
    }
    else {
      if ((uVar15 - 2 & 0xfffffffd) != 0) goto LAB_10049838;
      uVar13 = FUN_10077af0(param_2,1,1);
      uVar14 = FUN_10077af0(param_2,1,1);
      local_68 = uVar14;
      local_6c = FUN_10077af0(param_2,1,1);
      FUN_10045380(param_2,uVar21,0x110101);
      puVar2 = (undefined4 *)(param_2 + 0x50);
      local_a4 = *puVar2;
      local_98 = 0;
      local_9c = 0x3f800000;
      local_a0 = 0xe4;
      local_a8 = 0;
      local_b8 = 0x34;
      local_b0 = 1;
      uStack_bc = uVar21;
      local_c0 = param_2;
      local_b4 = uVar13;
      local_ac = uVar13;
      local_64 = puVar2;
      FUN_10078c60(&local_c0,0x2c);
      local_a4 = *puVar2;
      local_98 = 0;
      local_a0 = 0xe4;
      local_b0 = 1;
      local_a8 = 0;
      local_b8 = 0x33;
      local_9c = 0x477ff800;
      uStack_bc = uVar21;
      local_c0 = param_2;
      local_b4 = uVar13;
      local_ac = uVar13;
      FUN_10078c60(&local_c0,0x2c);
      local_b8 = 0x2f;
      local_a8 = 0;
      local_a4 = 0;
      local_b0 = 1;
      uStack_bc = uVar21;
      local_c0 = param_2;
      local_b4 = uVar14;
      local_ac = uVar13;
      FUN_10078c60(&local_c0,0x20);
      local_b8 = 0x43;
      local_a8 = 0;
      local_a4 = 0;
      local_b0 = 1;
      uStack_bc = uVar21;
      local_c0 = param_2;
      local_b4 = uVar14;
      local_ac = uVar14;
      FUN_10078c60(&local_c0,0x20);
      local_a8 = 0;
      local_a4 = 0;
      uStack_bc = uVar21;
      local_b0 = 1;
      local_b8 = 0x1c;
      local_b4 = local_6c;
      local_c0 = param_2;
      local_ac = uVar14;
      FUN_10078c60(&local_c0,0x20);
      local_a8 = 0;
      local_a4 = 0;
      local_b8 = 0x19;
      local_b0 = 1;
      uStack_bc = uVar21;
      local_c0 = param_2;
      local_b4 = uVar14;
      local_ac = uVar14;
      FUN_10078c60(&local_c0,0x20);
      local_a0 = 0;
      local_9c = 0;
      local_b8 = 0xe;
      local_a8 = 0;
      local_b0 = 1;
      uStack_bc = uVar21;
      local_c0 = param_2;
      local_b4 = uVar13;
      local_ac = uVar13;
      local_a4 = uVar14;
      FUN_10078c60(&local_c0,0x28);
      local_a4 = *puVar2;
      local_8c = 0;
      local_a0 = 0xe4;
      local_9c = 0x49800000;
      uStack_94 = 0xe4;
      local_a8 = 0;
      local_b8 = 0x32;
      local_90 = 0xc9800000;
      local_b0 = 1;
      uStack_bc = uVar21;
      local_c0 = param_2;
      local_b4 = uVar13;
      local_ac = uVar13;
      local_98 = local_a4;
      FUN_10078c60(&local_c0,0x38);
      local_a0 = 0xe4;
      local_9c = 0x14;
      local_a4 = *puVar2;
      local_98 = 0;
      uStack_bc = uVar21;
      local_a8 = 0;
      local_b8 = 0x29;
      local_b4 = local_6c;
      local_b0 = 1;
      local_ac = local_6c;
      local_c0 = param_2;
      FUN_10078c60(&local_c0,0x2c);
      local_a8 = 0;
      local_a4 = 0;
      local_b8 = 0x1c;
      local_b0 = 1;
      uStack_bc = uVar21;
      local_c0 = param_2;
      local_b4 = uVar13;
      local_ac = uVar13;
      FUN_10078c60(&local_c0,0x20);
      local_a0 = 0;
      local_9c = 0;
      local_a8 = 0;
      local_b8 = 0x3c;
      local_b0 = 1;
      local_ac = local_6c;
      uStack_bc = uVar21;
      local_c0 = param_2;
      local_b4 = uVar13;
      local_a4 = uVar13;
      FUN_10078c60(&local_c0,0x28);
      local_a0 = 0xe4;
      local_9c = 0x90;
      local_a4 = *(undefined4 *)(param_2 + 0x40);
      local_98 = 0;
      local_b0 = 1;
      uStack_bc = uVar21;
      local_a8 = 0;
      local_b8 = 0x1e;
      local_c0 = param_2;
      local_b4 = uVar13;
      local_ac = uVar13;
      FUN_10078c60(&local_c0,0x2c);
      puVar2 = local_64;
      local_98 = 0;
      local_a0 = 0xe4;
      local_9c = 0;
      local_b0 = 1;
      local_a4 = *local_64;
      local_a8 = 0;
      local_b8 = 0x24;
      uStack_bc = uVar21;
      local_c0 = param_2;
      local_b4 = uVar13;
      local_ac = uVar13;
      FUN_10078c60(&local_c0,0x2c);
      local_98 = 0;
      local_a0 = 0xe4;
      local_9c = 0xfffff;
      local_a4 = *puVar2;
      local_b0 = 1;
      uStack_bc = uVar21;
      local_a8 = 0;
      local_b8 = 0x25;
      local_c0 = param_2;
      local_b4 = uVar13;
      local_ac = uVar13;
      FUN_10078c60(&local_c0,0x2c);
      local_b4 = 0x110201;
      local_b0 = 1;
      local_b8 = 0x56;
      local_a4 = 0;
      local_a8 = 0;
      uStack_bc = uVar21;
      local_c0 = param_2;
      local_ac = uVar13;
      FUN_10078c60(&local_c0,0x20);
      FUN_10077bb0(param_2,local_6c);
      FUN_10077bb0(param_2,local_68);
      FUN_10077bb0(param_2,uVar13);
    }
    bVar5 = true;
  }
LAB_10049838:
  if ((*(int *)(iVar9 + 0x1c) - 0x400U & 0xfffffffb) == 0) {
    uVar18 = *(ushort *)(param_2 + 0xf2);
    if ((uVar18 & 0xf0) == 0) {
      local_a4 = 0x477f0000;
      local_a0 = 0;
      uStack_bc = uVar21;
      local_ac = *(undefined4 *)(param_2 + 0x50);
      if ((uVar18 & 0xff0) != 0x100) {
        local_a4 = 0;
      }
      local_a8 = 0xe4;
      local_b4 = 0x110201;
      local_b0 = 1;
      local_b8 = 0x36;
      local_c0 = param_2;
      FUN_10078c60(&local_c0,0x24);
    }
    else {
      uVar12 = FUN_10041930(param_2,0,0,0,0,1,0);
      FUN_10044fb0(0x3c23d70a,param_2,uVar21,uVar18,0xff,uVar12,uVar12,1,0);
      FUN_10041340(param_2,0x71,8);
      FUN_100414d0(param_2,0,uVar12,0,0,0);
      *(undefined8 *)(param_2 + 0x174) = 0x400100000002;
      *(undefined4 *)(param_2 + 0x188) = 0x43800000;
      *(undefined4 *)(param_2 + 0x184) = 0x43800000;
      *(undefined4 *)(param_2 + 0x180) = 0x43800000;
      *(undefined4 *)(param_2 + 0x17c) = 0x43800000;
      FUN_10078f18(uVar21,(*(int *)(param_2 + 0x134) + *(int *)(param_2 + 0x154) + 3U & 0x7f) <<
                          0x18 | 0x38,(int *)(param_2 + 0x134),(int *)(param_2 + 0x154),
                   (undefined8 *)(param_2 + 0x174),0);
    }
  }
  else if (!bVar5) {
    local_a4 = 0;
    local_a0 = 0;
    local_ac = *(undefined4 *)(param_2 + 0x50);
    uStack_bc = uVar21;
    local_a8 = 0xe4;
    local_b4 = 0x110201;
    local_b0 = 1;
    local_b8 = 0x36;
    local_c0 = param_2;
    FUN_10078c60(&local_c0,0x24);
  }
  FUN_10077bb0(param_2,*(undefined4 *)(param_2 + 0xa0));
  *(undefined4 *)(param_2 + 0xa0) = 0;
  return;
}


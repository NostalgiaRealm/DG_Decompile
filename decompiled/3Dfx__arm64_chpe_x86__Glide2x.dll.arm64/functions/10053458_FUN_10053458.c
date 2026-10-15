/*
 * FUN_10053458 at 10053458
 * undefined FUN_10053458(void)
 * Address ranges: 10053458-10053de3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10053458(int param_1,int param_2,uint param_3)

{
  ushort *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ushort uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
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
  undefined4 *local_68;
  uint local_64;
  byte *local_60;
  byte *local_5c;
  int local_58;
  int local_54;
  int local_50;
  int iStack_4c;
  int local_48;
  int local_44;
  
  local_60 = (byte *)(param_2 + 0x120);
  local_5c = (byte *)(param_2 + 0x121);
  local_6f = *local_60;
  local_70 = *local_5c;
  local_58 = param_2 + 0xe4;
  local_54 = param_2 + 0xac;
  local_50 = param_2 + 0xa8;
  iStack_4c = param_2 + 0xab;
  local_48 = param_2 + 0xa5;
  iVar20 = 4;
  local_68 = (undefined4 *)0x38;
  local_6c = param_1;
  do {
    uVar14 = 1 << (ulonglong)(iVar20 - 1U & 0x1f);
    uVar19 = (uint)local_6f;
    uVar18 = (uint)local_70;
    if ((uVar19 == (uVar14 & 0xff)) || (bVar3 = false, *local_60 == 0 && iVar20 == 1)) {
      bVar3 = true;
    }
    if (((uint)local_70 == (uVar14 & 0xff)) || (bVar4 = false, *local_5c == 0 && iVar20 == 1)) {
      bVar4 = true;
    }
    local_6f = local_6f & ((byte)uVar14 ^ 0xff);
    local_70 = local_70 & ((byte)uVar14 ^ 0xff);
    if (((bVar3) && (*(char *)(param_2 + 0x1b4) == '\0')) && (*(char *)(param_2 + 0x1b7) == '\0')) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if ((uVar14 & 0xff & uVar19) != 0) {
      bVar5 = true;
    }
    if ((bVar4) && (*(char *)(param_2 + 0x1b6) == '\0')) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if ((uVar14 & 0xff & uVar18) != 0) {
      bVar6 = true;
    }
    if (bVar5 || iVar20 == 1) {
      FUN_10053328(local_6c,param_2,param_3,iVar20 + -1,0);
    }
    iVar7 = local_6c;
    if (((bVar6 || iVar20 == 1) &&
        (FUN_10053328(local_6c,param_2,param_3,iVar20 + -1,1), iVar20 == 1)) &&
       (*(int *)(iVar7 + 0x4c) != 0)) {
      FUN_10050f30(param_2 + 0xb0,*(undefined2 *)(param_2 + 0xbc));
    }
    puVar2 = local_68;
    if ((bVar4) && (*(char *)(param_2 + 0x1b6) == '\0')) {
      uVar17 = 0x70;
    }
    else {
      uVar17 = 0xf0;
    }
    local_64 = CONCAT22(local_64._2_2_,uVar17);
    if (((bVar3) && (*(char *)(param_2 + 0x1b4) == '\0')) && (*(char *)(param_2 + 0x1b7) == '\0')) {
      uVar14 = 0x70;
    }
    else {
      uVar14 = 0xf0;
    }
    if (((((*(ushort *)((int)local_68 + local_58) ^ *(ushort *)((int)local_68 + local_54)) & 0xefff)
          == 0) &&
        (puVar1 = (ushort *)((int)local_68 + param_2 + 0xa2),
        ((*(ushort *)((int)local_68 + param_2 + 0xda) ^ *puVar1) & 0xefff) == 0)) &&
       ((((*(ushort *)((int)local_68 + param_2 + 0xdc) ^ *(ushort *)((int)local_68 + param_2 + 0xa4)
          ) & 0xefff) == 0 &&
        ((((*(ushort *)((int)local_68 + param_2 + 0xde) ^
           *(ushort *)((int)local_68 + param_2 + 0xa6)) & 0xefff) == 0 &&
         (((*(ushort *)(param_2 + (iVar20 + 0x10) * 0xe) ^
           *(ushort *)(param_2 + (iVar20 + 0xc) * 0xe)) & 0xefff) == 0)))))) {
      if (!bVar5) goto LAB_10053778;
      if (!bVar6 || uVar17 != uVar14) goto LAB_1005375c;
      uVar16 = 1;
      uVar15 = 1;
LAB_1005378c:
      FUN_10050a68(puVar1,param_2,param_3,uVar14,uVar15,uVar16);
    }
    else {
      if (bVar5) {
LAB_1005375c:
        FUN_10050a68((int)local_68 + param_2 + 0xa2,param_2,param_3,uVar14,1,0);
      }
LAB_10053778:
      if (bVar6) {
        uVar14 = local_64 & 0xffff;
        puVar1 = (ushort *)((int)puVar2 + param_2 + 0xda);
        uVar16 = 0;
        uVar15 = 0;
        goto LAB_1005378c;
      }
    }
    if (bVar4) {
      if (*(char *)(param_2 + 0x1b6) != '\0') {
        FUN_1004d750(param_2,*(undefined2 *)((int)puVar2 + param_2 + 0xe4),0x70,0,8,param_3,1);
      }
      FUN_100517b8(local_6c,param_2,param_3,*(undefined2 *)((int)puVar2 + param_2 + 0xe4));
    }
    if (bVar3) {
      puVar1 = (ushort *)((int)puVar2 + param_2 + 0xac);
      uVar11 = FUN_10051a50(local_6c,param_2,param_3,*puVar1,*(undefined1 *)(param_2 + 0x1b7));
      uVar17 = uVar11;
      if ((uVar11 & 0xf0) != 0x80 && (uVar11 & 0xf0) != 0xf0) {
        uVar17 = *puVar1;
      }
      FUN_10052fe8(local_6c,param_2,param_3,uVar17);
      FUN_1004d390(param_2,uVar11);
    }
    iVar10 = local_48;
    iVar9 = iStack_4c;
    iVar7 = local_50;
    uVar14 = 0;
    uVar18 = iVar20 - 1;
    local_64 = param_3;
    local_44 = iVar20;
    do {
      iVar20 = uVar14 * 4;
      if (*(byte *)(iVar7 + uVar14) == uVar18) {
        puVar2 = (undefined4 *)(iVar20 + param_2 + 0x78);
        FUN_1006e870(param_2,*puVar2);
        *puVar2 = 0;
      }
      if (*(byte *)(iVar9 + uVar14) == uVar18) {
        puVar2 = (undefined4 *)(iVar20 + param_2 + 0x6c);
        FUN_1006e870(param_2,*puVar2);
        *puVar2 = 0;
      }
      if (*(byte *)(iVar10 + uVar14) == uVar18) {
        puVar2 = (undefined4 *)(iVar20 + param_2 + 0x84);
        FUN_1006e870(param_2,*puVar2);
        *puVar2 = 0;
      }
      uVar19 = local_64;
      iVar8 = local_6c;
      uVar14 = uVar14 + 1;
    } while (uVar14 < 3);
    local_68 = (undefined4 *)((int)local_68 + -0xe);
    iVar20 = local_44 + -1;
    param_3 = local_64;
  } while (iVar20 != 0);
  FUN_10050a00(param_2,*(char *)(param_2 + 0x1b9));
  bVar3 = false;
  if (*(char *)(param_2 + 0x1b9) == '\0') {
    uVar14 = *(uint *)(iVar8 + 0x28) & *(uint *)(iVar8 + 0x24);
    if ((uVar14 - 1 & 0xfffffffd) == 0) {
      uVar12 = FUN_1006e7b0(param_2,1,1);
      local_a8 = 0;
      local_a4 = 0;
      local_b0 = 1;
      local_ac = 0x190100;
      uStack_bc = uVar19;
      local_b8 = 0x2036;
      local_c0 = param_2;
      local_b4 = uVar12;
      FUN_1006f920(&local_c0,0x20);
      local_a4 = *(undefined4 *)(param_2 + 0x50);
      local_98 = 0;
      local_a0 = 0xe4;
      local_9c = 0x477fff00;
      local_b0 = 1;
      local_a8 = 0;
      local_b8 = 0x38;
      uStack_bc = uVar19;
      local_c0 = param_2;
      local_b4 = uVar12;
      local_ac = uVar12;
      FUN_1006f920(&local_c0,0x2c);
      local_b4 = 0x110201;
      local_b0 = 1;
      local_b8 = 0x1c;
      local_a4 = 0;
      local_a8 = 0;
      uStack_bc = uVar19;
      local_c0 = param_2;
      local_ac = uVar12;
      FUN_1006f920(&local_c0,0x20);
    }
    else {
      if ((uVar14 - 2 & 0xfffffffd) != 0) goto LAB_10053ce8;
      uVar12 = FUN_1006e7b0(param_2,1,1);
      uVar13 = FUN_1006e7b0(param_2,1,1);
      local_6c = FUN_1006e7b0(param_2,1,1);
      FUN_10050970(param_2,uVar19,0x110101);
      puVar2 = (undefined4 *)(param_2 + 0x50);
      local_a4 = *puVar2;
      local_98 = 0;
      local_9c = 0x3f800000;
      local_a0 = 0xe4;
      local_a8 = 0;
      local_b8 = 0x34;
      local_b0 = 1;
      uStack_bc = uVar19;
      local_c0 = param_2;
      local_b4 = uVar12;
      local_ac = uVar12;
      local_68 = puVar2;
      FUN_1006f920(&local_c0,0x2c);
      local_a4 = *puVar2;
      local_98 = 0;
      local_a0 = 0xe4;
      local_b0 = 1;
      local_a8 = 0;
      local_b8 = 0x33;
      local_9c = 0x477ff800;
      uStack_bc = uVar19;
      local_c0 = param_2;
      local_b4 = uVar12;
      local_ac = uVar12;
      FUN_1006f920(&local_c0,0x2c);
      local_b8 = 0x2f;
      local_a8 = 0;
      local_a4 = 0;
      local_b0 = 1;
      uStack_bc = uVar19;
      local_c0 = param_2;
      local_b4 = uVar13;
      local_ac = uVar12;
      FUN_1006f920(&local_c0,0x20);
      local_b8 = 0x43;
      local_a8 = 0;
      local_a4 = 0;
      local_b0 = 1;
      uStack_bc = uVar19;
      local_c0 = param_2;
      local_b4 = uVar13;
      local_ac = uVar13;
      FUN_1006f920(&local_c0,0x20);
      local_a8 = 0;
      local_a4 = 0;
      local_b0 = 1;
      uStack_bc = uVar19;
      local_b8 = 0x1c;
      local_b4 = local_6c;
      local_c0 = param_2;
      local_ac = uVar13;
      FUN_1006f920(&local_c0,0x20);
      local_a8 = 0;
      local_a4 = 0;
      local_b8 = 0x19;
      local_b0 = 1;
      uStack_bc = uVar19;
      local_c0 = param_2;
      local_b4 = uVar13;
      local_ac = uVar13;
      FUN_1006f920(&local_c0,0x20);
      local_a0 = 0;
      local_9c = 0;
      local_b8 = 0xe;
      local_a8 = 0;
      local_b0 = 1;
      uStack_bc = uVar19;
      local_c0 = param_2;
      local_b4 = uVar12;
      local_ac = uVar12;
      local_a4 = uVar13;
      FUN_1006f920(&local_c0,0x28);
      local_a4 = *puVar2;
      local_8c = 0;
      local_a0 = 0xe4;
      local_9c = 0x45800000;
      uStack_94 = 0xe4;
      local_a8 = 0;
      local_b8 = 0x32;
      local_90 = 0xc5800000;
      local_b0 = 1;
      uStack_bc = uVar19;
      local_c0 = param_2;
      local_b4 = uVar12;
      local_ac = uVar12;
      local_98 = local_a4;
      FUN_1006f920(&local_c0,0x38);
      local_a0 = 0xe4;
      local_9c = 0xc;
      local_a4 = *puVar2;
      local_98 = 0;
      uStack_bc = uVar19;
      local_a8 = 0;
      local_b8 = 0x29;
      local_b4 = local_6c;
      local_b0 = 1;
      local_ac = local_6c;
      local_c0 = param_2;
      FUN_1006f920(&local_c0,0x2c);
      local_a8 = 0;
      local_a4 = 0;
      local_b8 = 0x1c;
      local_b0 = 1;
      uStack_bc = uVar19;
      local_c0 = param_2;
      local_b4 = uVar12;
      local_ac = uVar12;
      FUN_1006f920(&local_c0,0x20);
      local_a0 = 0;
      local_9c = 0;
      local_a8 = 0;
      local_b8 = 0x3c;
      local_b0 = 1;
      local_ac = local_6c;
      uStack_bc = uVar19;
      local_c0 = param_2;
      local_b4 = uVar12;
      local_a4 = uVar12;
      FUN_1006f920(&local_c0,0x28);
      local_a0 = 0xe4;
      local_9c = 0x90;
      local_a4 = *(undefined4 *)(param_2 + 0x40);
      local_98 = 0;
      local_b0 = 1;
      uStack_bc = uVar19;
      local_a8 = 0;
      local_b8 = 0x1e;
      local_c0 = param_2;
      local_b4 = uVar12;
      local_ac = uVar12;
      FUN_1006f920(&local_c0,0x2c);
      puVar2 = local_68;
      local_98 = 0;
      local_a0 = 0xe4;
      local_9c = 0;
      local_b0 = 1;
      local_a4 = *local_68;
      uStack_bc = uVar19;
      local_a8 = 0;
      local_b8 = 0x24;
      local_c0 = param_2;
      local_b4 = uVar12;
      local_ac = uVar12;
      FUN_1006f920(&local_c0,0x2c);
      local_a8 = 0;
      local_9c = 0xffff;
      local_98 = 0;
      local_a4 = *puVar2;
      uStack_bc = uVar19;
      local_a0 = 0xe4;
      local_b4 = 0x110201;
      local_b0 = 1;
      local_b8 = 0x25;
      local_c0 = param_2;
      local_ac = uVar12;
      FUN_1006f920(&local_c0,0x2c);
      FUN_1006e870(param_2,local_6c);
      FUN_1006e870(param_2,uVar13);
      FUN_1006e870(param_2,uVar12);
    }
    bVar3 = true;
  }
LAB_10053ce8:
  if ((*(int *)(iVar8 + 0x1c) - 0x400U & 0xfffffffb) == 0) {
    uVar17 = *(ushort *)(param_2 + 0xf2);
    if ((uVar17 & 0xf0) == 0) {
      uStack_bc = uVar19;
      local_a4 = 0xff;
      if ((uVar17 & 0xff0) != 0x100) {
        local_a4 = 0;
      }
      local_a0 = 0;
      local_ac = *(undefined4 *)(param_2 + 0x50);
      local_a8 = 0xe4;
      local_b4 = 0x110201;
      local_b0 = 1;
      local_b8 = 0x36;
      local_c0 = param_2;
      FUN_1006f920(&local_c0,0x24);
    }
    else {
      FUN_100505a0(0x3c23d70a,param_2,uVar19,uVar17,0xff,uVar17,0x71,1,1);
    }
  }
  else if (!bVar3) {
    local_a4 = 0;
    local_a0 = 0;
    local_ac = *(undefined4 *)(param_2 + 0x50);
    uStack_bc = uVar19;
    local_a8 = 0xe4;
    local_b4 = 0x110201;
    local_b0 = 1;
    local_b8 = 0x36;
    local_c0 = param_2;
    FUN_1006f920(&local_c0,0x24);
  }
  FUN_1006e870(param_2,*(undefined4 *)(param_2 + 0xa0));
  *(undefined4 *)(param_2 + 0xa0) = 0;
  return;
}


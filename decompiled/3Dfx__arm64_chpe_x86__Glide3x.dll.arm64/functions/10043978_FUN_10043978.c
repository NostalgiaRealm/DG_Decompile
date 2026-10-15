/*
 * FUN_10043978 at 10043978
 * undefined FUN_10043978(void)
 * Address ranges: 10043978-10044333
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10043978(int param_1,int param_2,uint param_3)

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
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ushort uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  int iVar21;
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
  iVar21 = 4;
  local_68 = (undefined4 *)0x38;
  local_6c = param_1;
  do {
    uVar14 = 1 << (ulonglong)(iVar21 - 1U & 0x1f);
    uVar20 = (uint)local_6f;
    uVar18 = (uint)local_70;
    if ((uVar20 == (uVar14 & 0xff)) || (bVar5 = false, *local_60 == 0 && iVar21 == 1)) {
      bVar5 = true;
    }
    if (((uint)local_70 == (uVar14 & 0xff)) || (bVar6 = false, *local_5c == 0 && iVar21 == 1)) {
      bVar6 = true;
    }
    local_6f = local_6f & ((byte)uVar14 ^ 0xff);
    local_70 = local_70 & ((byte)uVar14 ^ 0xff);
    if (((bVar5) && (*(char *)(param_2 + 0x1b4) == '\0')) && (*(char *)(param_2 + 0x1b7) == '\0')) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if ((uVar14 & 0xff & uVar20) != 0) {
      bVar7 = true;
    }
    if ((bVar6) && (*(char *)(param_2 + 0x1b6) == '\0')) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if ((uVar14 & 0xff & uVar18) != 0) {
      bVar8 = true;
    }
    if (bVar7 || iVar21 == 1) {
      FUN_100437e8(local_6c,param_2,param_3,iVar21 + -1,0);
    }
    iVar4 = local_6c;
    if ((bVar8 || iVar21 == 1) &&
       (FUN_100437e8(local_6c,param_2,param_3,iVar21 + -1,1), iVar21 == 1)) {
      iVar3 = *(int *)(iVar4 + 0x634);
      iVar4 = *(int *)(iVar4 + 0x4c);
      if ((iVar4 != 0) || (iVar3 != 0)) {
        uVar12 = 0x650;
        if (iVar3 == 0) {
          uVar12 = 0;
        }
        uVar13 = 0x640;
        if (iVar3 == 0) {
          uVar13 = 0;
        }
        uVar19 = 0x40;
        if (iVar4 == 0) {
          uVar19 = 0;
        }
        FUN_10040720(param_2 + 0xb0,*(undefined2 *)(param_2 + 0xbc),0,uVar19,uVar13,uVar12,param_2,
                     param_3);
      }
    }
    puVar2 = local_68;
    if ((bVar6) && (*(char *)(param_2 + 0x1b6) == '\0')) {
      uVar17 = 0x70;
    }
    else {
      uVar17 = 0xf0;
    }
    local_64 = CONCAT22(local_64._2_2_,uVar17);
    if (((bVar5) && (*(char *)(param_2 + 0x1b4) == '\0')) && (*(char *)(param_2 + 0x1b7) == '\0')) {
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
         (((*(ushort *)(param_2 + (iVar21 + 0x10) * 0xe) ^
           *(ushort *)(param_2 + (iVar21 + 0xc) * 0xe)) & 0xefff) == 0)))))) {
      if (!bVar7) goto LAB_10043cc8;
      if (!bVar8 || uVar17 != uVar14) goto LAB_10043cac;
      uVar16 = 1;
      uVar15 = 1;
LAB_10043cdc:
      FUN_10040258(puVar1,param_2,param_3,uVar14,uVar15,uVar16);
    }
    else {
      if (bVar7) {
LAB_10043cac:
        FUN_10040258((int)local_68 + param_2 + 0xa2,param_2,param_3,uVar14,1,0);
      }
LAB_10043cc8:
      if (bVar8) {
        uVar14 = local_64 & 0xffff;
        puVar1 = (ushort *)((int)puVar2 + param_2 + 0xda);
        uVar16 = 0;
        uVar15 = 0;
        goto LAB_10043cdc;
      }
    }
    if (bVar6) {
      if (*(char *)(param_2 + 0x1b6) != '\0') {
        FUN_1003cf40(param_2,*(undefined2 *)((int)puVar2 + param_2 + 0xe4),0x70,0,8,param_3,1);
      }
      FUN_10041cc8(local_6c,param_2,param_3,*(undefined2 *)((int)puVar2 + param_2 + 0xe4));
    }
    if (bVar5) {
      puVar1 = (ushort *)((int)puVar2 + param_2 + 0xac);
      uVar11 = FUN_10041f60(local_6c,param_2,param_3,*puVar1,*(undefined1 *)(param_2 + 0x1b7));
      uVar17 = uVar11;
      if ((uVar11 & 0xf0) != 0x80 && (uVar11 & 0xf0) != 0xf0) {
        uVar17 = *puVar1;
      }
      FUN_100434a8(local_6c,param_2,param_3,uVar17);
      FUN_1003cb80(param_2,uVar11);
    }
    iVar10 = local_48;
    iVar3 = iStack_4c;
    iVar4 = local_50;
    uVar14 = 0;
    uVar18 = iVar21 - 1;
    local_64 = param_3;
    local_44 = iVar21;
    do {
      if (*(byte *)(iVar4 + uVar14) == uVar18) {
        puVar2 = (undefined4 *)(uVar14 * 4 + param_2 + 0x78);
        FUN_10072510(param_2,*puVar2);
        *puVar2 = 0;
      }
      if (*(byte *)(iVar3 + uVar14) == uVar18) {
        puVar2 = (undefined4 *)(uVar14 * 4 + param_2 + 0x6c);
        FUN_10072510(param_2,*puVar2);
        *puVar2 = 0;
      }
      if (*(byte *)(iVar10 + uVar14) == uVar18) {
        puVar2 = (undefined4 *)(uVar14 * 4 + param_2 + 0x84);
        FUN_10072510(param_2,*puVar2);
        *puVar2 = 0;
      }
      uVar20 = local_64;
      iVar9 = local_6c;
      uVar14 = uVar14 + 1;
    } while (uVar14 < 3);
    local_68 = (undefined4 *)((int)local_68 + -0xe);
    iVar21 = local_44 + -1;
    param_3 = local_64;
  } while (iVar21 != 0);
  FUN_100401f0(param_2,*(char *)(param_2 + 0x1b9));
  bVar5 = false;
  if (*(char *)(param_2 + 0x1b9) == '\0') {
    uVar14 = *(uint *)(iVar9 + 0x28) & *(uint *)(iVar9 + 0x24);
    if ((uVar14 - 1 & 0xfffffffd) == 0) {
      uVar12 = FUN_10072450(param_2,1,1);
      local_a8 = 0;
      local_a4 = 0;
      local_b0 = 1;
      local_ac = 0x190100;
      uStack_bc = uVar20;
      local_b8 = 0x2036;
      local_c0 = param_2;
      local_b4 = uVar12;
      FUN_100735c0(&local_c0,0x20);
      local_a4 = *(undefined4 *)(param_2 + 0x50);
      local_98 = 0;
      local_a0 = 0xe4;
      local_9c = 0x477fff00;
      local_b0 = 1;
      local_a8 = 0;
      local_b8 = 0x38;
      uStack_bc = uVar20;
      local_c0 = param_2;
      local_b4 = uVar12;
      local_ac = uVar12;
      FUN_100735c0(&local_c0,0x2c);
      local_b4 = 0x110201;
      local_b0 = 1;
      local_b8 = 0x1c;
      local_a4 = 0;
      local_a8 = 0;
      uStack_bc = uVar20;
      local_c0 = param_2;
      local_ac = uVar12;
      FUN_100735c0(&local_c0,0x20);
    }
    else {
      if ((uVar14 - 2 & 0xfffffffd) != 0) goto LAB_10044238;
      uVar12 = FUN_10072450(param_2,1,1);
      uVar13 = FUN_10072450(param_2,1,1);
      local_6c = FUN_10072450(param_2,1,1);
      FUN_10040160(param_2,uVar20,0x110101);
      puVar2 = (undefined4 *)(param_2 + 0x50);
      local_a4 = *puVar2;
      local_98 = 0;
      local_9c = 0x3f800000;
      local_a0 = 0xe4;
      local_a8 = 0;
      local_b8 = 0x34;
      local_b0 = 1;
      uStack_bc = uVar20;
      local_c0 = param_2;
      local_b4 = uVar12;
      local_ac = uVar12;
      local_68 = puVar2;
      FUN_100735c0(&local_c0,0x2c);
      local_a4 = *puVar2;
      local_98 = 0;
      local_a0 = 0xe4;
      local_b0 = 1;
      local_a8 = 0;
      local_b8 = 0x33;
      local_9c = 0x477ff800;
      uStack_bc = uVar20;
      local_c0 = param_2;
      local_b4 = uVar12;
      local_ac = uVar12;
      FUN_100735c0(&local_c0,0x2c);
      local_b8 = 0x2f;
      local_a8 = 0;
      local_a4 = 0;
      local_b0 = 1;
      uStack_bc = uVar20;
      local_c0 = param_2;
      local_b4 = uVar13;
      local_ac = uVar12;
      FUN_100735c0(&local_c0,0x20);
      local_b8 = 0x43;
      local_a8 = 0;
      local_a4 = 0;
      local_b0 = 1;
      uStack_bc = uVar20;
      local_c0 = param_2;
      local_b4 = uVar13;
      local_ac = uVar13;
      FUN_100735c0(&local_c0,0x20);
      local_a8 = 0;
      local_a4 = 0;
      local_b0 = 1;
      uStack_bc = uVar20;
      local_b8 = 0x1c;
      local_b4 = local_6c;
      local_c0 = param_2;
      local_ac = uVar13;
      FUN_100735c0(&local_c0,0x20);
      local_a8 = 0;
      local_a4 = 0;
      local_b8 = 0x19;
      local_b0 = 1;
      uStack_bc = uVar20;
      local_c0 = param_2;
      local_b4 = uVar13;
      local_ac = uVar13;
      FUN_100735c0(&local_c0,0x20);
      local_a0 = 0;
      local_9c = 0;
      local_b8 = 0xe;
      local_a8 = 0;
      local_b0 = 1;
      uStack_bc = uVar20;
      local_c0 = param_2;
      local_b4 = uVar12;
      local_ac = uVar12;
      local_a4 = uVar13;
      FUN_100735c0(&local_c0,0x28);
      local_a4 = *puVar2;
      local_8c = 0;
      local_a0 = 0xe4;
      local_9c = 0x45800000;
      uStack_94 = 0xe4;
      local_a8 = 0;
      local_b8 = 0x32;
      local_90 = 0xc5800000;
      local_b0 = 1;
      uStack_bc = uVar20;
      local_c0 = param_2;
      local_b4 = uVar12;
      local_ac = uVar12;
      local_98 = local_a4;
      FUN_100735c0(&local_c0,0x38);
      local_a0 = 0xe4;
      local_9c = 0xc;
      local_a4 = *puVar2;
      local_98 = 0;
      uStack_bc = uVar20;
      local_a8 = 0;
      local_b8 = 0x29;
      local_b4 = local_6c;
      local_b0 = 1;
      local_ac = local_6c;
      local_c0 = param_2;
      FUN_100735c0(&local_c0,0x2c);
      local_a8 = 0;
      local_a4 = 0;
      local_b8 = 0x1c;
      local_b0 = 1;
      uStack_bc = uVar20;
      local_c0 = param_2;
      local_b4 = uVar12;
      local_ac = uVar12;
      FUN_100735c0(&local_c0,0x20);
      local_a0 = 0;
      local_9c = 0;
      local_a8 = 0;
      local_b8 = 0x3c;
      local_b0 = 1;
      local_ac = local_6c;
      uStack_bc = uVar20;
      local_c0 = param_2;
      local_b4 = uVar12;
      local_a4 = uVar12;
      FUN_100735c0(&local_c0,0x28);
      local_a0 = 0xe4;
      local_9c = 0x90;
      local_a4 = *(undefined4 *)(param_2 + 0x40);
      local_98 = 0;
      local_b0 = 1;
      uStack_bc = uVar20;
      local_a8 = 0;
      local_b8 = 0x1e;
      local_c0 = param_2;
      local_b4 = uVar12;
      local_ac = uVar12;
      FUN_100735c0(&local_c0,0x2c);
      puVar2 = local_68;
      local_98 = 0;
      local_a0 = 0xe4;
      local_9c = 0;
      local_b0 = 1;
      local_a4 = *local_68;
      uStack_bc = uVar20;
      local_a8 = 0;
      local_b8 = 0x24;
      local_c0 = param_2;
      local_b4 = uVar12;
      local_ac = uVar12;
      FUN_100735c0(&local_c0,0x2c);
      local_a8 = 0;
      local_9c = 0xffff;
      local_98 = 0;
      local_a4 = *puVar2;
      uStack_bc = uVar20;
      local_a0 = 0xe4;
      local_b4 = 0x110201;
      local_b0 = 1;
      local_b8 = 0x25;
      local_c0 = param_2;
      local_ac = uVar12;
      FUN_100735c0(&local_c0,0x2c);
      FUN_10072510(param_2,local_6c);
      FUN_10072510(param_2,uVar13);
      FUN_10072510(param_2,uVar12);
    }
    bVar5 = true;
  }
LAB_10044238:
  if ((*(int *)(iVar9 + 0x1c) - 0x400U & 0xfffffffb) == 0) {
    uVar17 = *(ushort *)(param_2 + 0xf2);
    if ((uVar17 & 0xf0) == 0) {
      uStack_bc = uVar20;
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
      FUN_100735c0(&local_c0,0x24);
    }
    else {
      FUN_1003fd90(0x3c23d70a,param_2,uVar20,uVar17,0xff,uVar17,0x71,1,1);
    }
  }
  else if (!bVar5) {
    local_a4 = 0;
    local_a0 = 0;
    local_ac = *(undefined4 *)(param_2 + 0x50);
    uStack_bc = uVar20;
    local_a8 = 0xe4;
    local_b4 = 0x110201;
    local_b0 = 1;
    local_b8 = 0x36;
    local_c0 = param_2;
    FUN_100735c0(&local_c0,0x24);
  }
  FUN_10072510(param_2,*(undefined4 *)(param_2 + 0xa0));
  *(undefined4 *)(param_2 + 0xa0) = 0;
  return;
}


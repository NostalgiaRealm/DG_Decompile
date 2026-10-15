/*
 * FUN_10041f60 at 10041f60
 * undefined FUN_10041f60(void)
 * Address ranges: 10041f60-1004345f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10041f60(int param_1,int *param_2,undefined4 param_3,ushort param_4,undefined1 param_5)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined2 uVar6;
  byte *pbVar7;
  bool bVar8;
  undefined1 uVar9;
  ushort uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  int *local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  int *piStack_b4;
  undefined4 local_b0;
  int *piStack_ac;
  undefined4 local_a8;
  int *local_a4;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined2 local_70;
  ushort local_6e;
  char local_6c;
  undefined4 local_68;
  int *local_64;
  int *local_60;
  int *local_5c;
  int *local_58;
  int *local_54;
  uint *local_50;
  int *local_4c;
  
  local_50 = (uint *)(param_1 + 0x8c);
  local_70 = CONCAT11(local_70._1_1_,param_5);
  local_6e = param_4;
  local_68 = param_3;
  switch(*(undefined1 *)local_50) {
  case 1:
    uVar13 = FUN_10072450(param_2,1,0);
    uVar4 = 0x150101;
    break;
  case 2:
    uVar13 = FUN_10072450(param_2,1,0);
    uVar4 = 0x110101;
    break;
  case 3:
    bVar8 = false;
    uVar13 = 0x190101;
    goto LAB_1004201c;
  default:
    return 0;
  }
  FUN_10040160(param_2,param_3,uVar4);
  bVar8 = true;
  if (uVar13 == 0) {
    return 0;
  }
LAB_1004201c:
  local_6c = '\0';
  local_4c = (int *)(uint)local_6e;
  if (((*local_50 & 0x300) == 0x200) && ((local_6e & 0xdf0) == 0)) {
    bVar8 = false;
  }
  if (bVar8) {
    piVar11 = (int *)FUN_10072450(param_2,4,1);
    local_5c = piVar11;
    uVar12 = FUN_10072450(param_2,2,1);
    uVar4 = local_68;
    piVar1 = param_2 + 0x14;
    local_6c = '\x01';
    local_a4 = (int *)*piVar1;
    local_98 = 0;
    local_9c = 0x3f800000;
    local_a0 = 0;
    local_a8 = 0;
    local_b8 = 0x34;
    local_b0 = 1;
    uStack_bc = local_68;
    local_c0 = param_2;
    piStack_b4 = (int *)uVar12;
    piStack_ac = (int *)uVar13;
    local_60 = piVar1;
    FUN_100735c0(&local_c0,0x2c);
    local_a4 = (int *)*piVar1;
    local_98 = 0;
    local_a0 = 0;
    local_b0 = 1;
    local_a8 = 0;
    local_b8 = 0x33;
    local_9c = 0x47800000;
    uStack_bc = uVar4;
    local_c0 = param_2;
    piStack_b4 = (int *)uVar12;
    piStack_ac = (int *)uVar12;
    FUN_100735c0(&local_c0,0x2c);
    local_b8 = 0x1c;
    local_a8 = 0;
    local_a4 = (int *)0x0;
    local_b0 = 2;
    uStack_bc = uVar4;
    local_c0 = param_2;
    piStack_b4 = (int *)uVar12;
    piStack_ac = (int *)uVar12;
    FUN_100735c0(&local_c0,0x20);
    local_a0 = 0;
    local_9c = 0xffffffff;
    local_a4 = (int *)*piVar1;
    local_98 = 0;
    local_b0 = 2;
    uStack_bc = uVar4;
    local_a8 = 0x55;
    local_b8 = 0x1e;
    local_c0 = param_2;
    piStack_b4 = (int *)uVar12;
    piStack_ac = (int *)uVar12;
    FUN_100735c0(&local_c0,0x2c);
    local_90 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_98 = 0x110708;
    local_94 = 0;
    local_a4 = (int *)*piVar1;
    piStack_ac = (int *)(uVar12 | 0x10000000);
    uStack_bc = uVar4;
    local_b0 = 2;
    local_b8 = 0xa7;
    local_a8 = 1;
    local_c0 = param_2;
    piStack_b4 = (int *)uVar12;
    local_58 = piStack_ac;
    FUN_100735c0(&local_c0,0x34);
    uStack_bc = uVar4;
    local_90 = 4;
    uStack_8c = 0;
    local_54 = param_2 + 0x15;
    local_98 = 2;
    local_94 = 3;
    local_a4 = (int *)*local_54;
    local_a0 = 0xe4;
    local_9c = 1;
    local_a8 = 0x55;
    local_b0 = 0xf;
    local_b8 = 0x1e;
    local_c0 = param_2;
    piStack_b4 = piVar11;
    piStack_ac = (int *)uVar12;
    FUN_100735c0(&local_c0,0x38);
    local_98 = 0x110709;
    local_94 = 0;
    local_a4 = (int *)*piVar1;
    piStack_ac = (int *)((uint)piVar11 | 0x10000000);
    local_90 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_a8 = 0;
    local_b0 = 1;
    local_b8 = 0xa7;
    uStack_bc = uVar4;
    local_c0 = param_2;
    piStack_b4 = piVar11;
    local_64 = piStack_ac;
    FUN_100735c0(&local_c0,0x34);
    local_98 = 0x110709;
    local_94 = 0;
    local_a4 = (int *)*piVar1;
    local_90 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_b8 = 0xa7;
    local_b0 = 2;
    piStack_ac = local_64;
    local_a8 = 1;
    uStack_bc = uVar4;
    local_c0 = param_2;
    piStack_b4 = piVar11;
    FUN_100735c0(&local_c0,0x34);
    piVar1 = local_60;
    local_90 = 0;
    local_98 = 0x110709;
    local_94 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_a4 = (int *)*local_60;
    local_b8 = 0xa7;
    uStack_bc = uVar4;
    local_a8 = 2;
    local_b0 = 4;
    piStack_ac = local_64;
    local_c0 = param_2;
    piStack_b4 = piVar11;
    FUN_100735c0(&local_c0,0x34);
    local_9c = 0;
    local_98 = 0x110709;
    local_a4 = (int *)*piVar1;
    local_94 = 0;
    local_90 = 0;
    local_b8 = 0xa7;
    uStack_bc = uVar4;
    local_a0 = 0;
    local_a8 = 3;
    local_b0 = 8;
    piStack_ac = local_64;
    local_c0 = param_2;
    piStack_b4 = piVar11;
    FUN_100735c0(&local_c0,0x34);
    local_a0 = 0xe4;
    local_9c = 0;
    local_b0 = 0xf;
    local_a8 = 0;
    uStack_bc = uVar4;
    local_b8 = 0x1d;
    local_c0 = param_2;
    piStack_b4 = piVar11;
    piStack_ac = (int *)uVar12;
    local_a4 = piVar11;
    FUN_100735c0(&local_c0,0x28);
    local_90 = 1;
    uStack_8c = 0;
    local_98 = 1;
    local_94 = 1;
    local_a0 = 0xe4;
    local_9c = 1;
    local_a4 = (int *)*local_54;
    local_b8 = 1;
    uStack_bc = uVar4;
    local_a8 = 0xe4;
    local_b0 = 0xf;
    local_c0 = param_2;
    piStack_b4 = piVar11;
    piStack_ac = piVar11;
    FUN_100735c0(&local_c0,0x38);
    local_a8 = 0x55;
    local_b8 = 0x1e;
    local_a0 = 0;
    local_9c = 0;
    local_b0 = 2;
    uStack_bc = uVar4;
    local_c0 = param_2;
    piStack_b4 = (int *)uVar12;
    piStack_ac = (int *)uVar12;
    local_a4 = piVar11;
    FUN_100735c0(&local_c0,0x28);
    local_a0 = 0x55;
    local_9c = 0;
    local_a8 = 0x55;
    local_b8 = 0x1e;
    local_b0 = 2;
    uStack_bc = uVar4;
    local_c0 = param_2;
    piStack_b4 = (int *)uVar12;
    piStack_ac = (int *)uVar12;
    local_a4 = piVar11;
    FUN_100735c0(&local_c0,0x28);
    local_a0 = 0xaa;
    local_9c = 0;
    local_a8 = 0x55;
    local_b8 = 0x1e;
    local_b0 = 2;
    uStack_bc = uVar4;
    local_c0 = param_2;
    piStack_b4 = (int *)uVar12;
    piStack_ac = (int *)uVar12;
    local_a4 = piVar11;
    FUN_100735c0(&local_c0,0x28);
    local_a0 = 0xff;
    local_9c = 0;
    local_b0 = 2;
    local_b8 = 0x1e;
    local_a8 = 0x55;
    uStack_bc = uVar4;
    local_c0 = param_2;
    piStack_b4 = (int *)uVar12;
    piStack_ac = (int *)uVar12;
    local_a4 = piVar11;
    FUN_100735c0(&local_c0,0x28);
    local_98 = 0x110709;
    local_94 = 0;
    local_a4 = (int *)*piVar1;
    local_90 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_b0 = 1;
    piStack_ac = local_58;
    local_b8 = 0xa7;
    local_a8 = 1;
    uStack_bc = uVar4;
    local_c0 = param_2;
    piStack_b4 = piVar11;
    FUN_100735c0(&local_c0,0x34);
    local_90 = 0;
    uStack_8c = 0;
    local_98 = 0;
    local_94 = 1;
    local_a0 = 0xe4;
    local_9c = 0;
    uStack_bc = uVar4;
    local_a4 = (int *)*local_54;
    local_a8 = 0x55;
    local_b0 = 6;
    local_b8 = 0x1e;
    local_c0 = param_2;
    piStack_b4 = piVar11;
    piStack_ac = (int *)uVar12;
    FUN_100735c0(&local_c0,0x38);
    local_98 = 0x110709;
    local_94 = 0;
    local_a4 = (int *)*piVar1;
    local_90 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_b8 = 0xa7;
    local_b0 = 2;
    piStack_ac = local_64;
    local_a8 = 2;
    uStack_bc = uVar4;
    local_c0 = param_2;
    piStack_b4 = (int *)uVar12;
    FUN_100735c0(&local_c0,0x34);
    local_a4 = (int *)((uint)piVar11 | 0x80000000);
    local_a0 = 0;
    local_a8 = 0x154;
    local_b0 = 3;
    local_9c = 0;
    local_b8 = 0;
    uStack_bc = uVar4;
    local_c0 = param_2;
    piStack_b4 = (int *)uVar12;
    piStack_ac = (int *)uVar12;
    FUN_100735c0(&local_c0,0x28);
    local_a0 = 0x55;
    local_9c = 0;
    local_b8 = 0xe;
    local_a8 = 0;
    local_b0 = 1;
    uStack_bc = uVar4;
    local_c0 = param_2;
    piStack_b4 = (int *)uVar12;
    piStack_ac = (int *)uVar12;
    local_a4 = (int *)uVar12;
    FUN_100735c0(&local_c0,0x28);
    piVar1 = local_60;
    local_90 = 0;
    local_98 = 0x11070a;
    local_94 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_a4 = (int *)*local_60;
    local_b0 = 1;
    piStack_ac = local_64;
    local_b8 = 0xa7;
    uStack_bc = uVar4;
    local_a8 = 2;
    local_c0 = param_2;
    piStack_b4 = piVar11;
    FUN_100735c0(&local_c0,0x34);
    local_98 = 0x11070a;
    local_94 = 0;
    local_a4 = (int *)*piVar1;
    local_90 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_b8 = 0xa7;
    local_b0 = 2;
    piStack_ac = local_64;
    local_a8 = 1;
    uStack_bc = uVar4;
    local_c0 = param_2;
    piStack_b4 = (int *)uVar12;
    FUN_100735c0(&local_c0,0x34);
    local_a4 = (int *)(uVar12 | 0x80000000);
    local_a8 = 0;
    local_a0 = 0x55;
    local_9c = 0;
    local_b0 = 1;
    local_b8 = 0;
    uStack_bc = uVar4;
    local_c0 = param_2;
    piStack_b4 = piVar11;
    piStack_ac = piVar11;
    FUN_100735c0(&local_c0,0x28);
    FUN_10072510(param_2,uVar12);
    FUN_10072510(param_2,piVar11);
    uVar13 = FUN_10072450(param_2,1,1);
    local_a0 = 0;
    local_98 = 0x55;
    local_94 = 0;
    local_a8 = 0;
    local_b8 = 0x32;
    local_b0 = 1;
    uStack_bc = uVar4;
    local_c0 = param_2;
    piStack_b4 = (int *)uVar13;
    piStack_ac = piVar11;
    local_a4 = (int *)uVar12;
    local_9c = uVar12;
    FUN_100735c0(&local_c0,0x30);
    param_2[3] = param_2[3] | 0x700;
  }
  if ((*local_50 & 0x300) == 0x100) {
LAB_10043340:
    if ((char)local_70 == '\0') {
      uVar12 = 0x70;
    }
    else {
      uVar12 = FUN_1003ca78(param_2,0,0,0,0,7,0);
      uVar12 = uVar12 & 0xffff;
    }
    FUN_1003c500(param_2,uVar12,7);
    iVar14 = FUN_10072aa0(param_2,param_2 + 0x56,uVar13,0,0,0);
    param_2[0x55] = iVar14;
    uVar9 = FUN_1003cbc0(param_2,uVar12,0xa4);
    iVar14 = FUN_10072590(param_2,param_2 + 0x5e,param_2[0x12],0x80,uVar9,0,0);
    param_2[0x5d] = iVar14;
    uVar16 = (iVar14 + param_2[0x4d] + param_2[0x55] + 1U & 0x7f) << 0x18 | 0x2038;
LAB_10043410:
    FUN_10073878(local_68,uVar16,param_2 + 0x4d,param_2 + 0x55,param_2 + 0x5d,0);
    goto LAB_10043428;
  }
  if ((*local_50 & 0x300) == 0x200) {
    if (((uint)local_4c & 0xff0) == 0 || ((uint)local_4c & 0xff0) == 0x200) {
      uVar12 = 0x70;
      FUN_1003cf40(param_2,0,0x70,0,7,local_68,0);
      goto LAB_10043428;
    }
    if (((uint)local_4c & 0xff0) == 0x100) {
      if ((char)local_70 == '\0') {
        uVar12 = 0x70;
      }
      else {
        uVar10 = FUN_1003ca78(param_2,0,0,0,0,7,0);
        uVar12 = (uint)uVar10;
      }
      FUN_1003c500(param_2,uVar12,7);
      iVar14 = FUN_10072aa0(param_2,param_2 + 0x56,uVar13 | 0x80000000,0,0,0);
      param_2[0x55] = iVar14;
      param_2[0x5d] = 5;
      param_2[0x5e] = 0x4006;
      param_2[0x62] = 0x3f800000;
      param_2[0x61] = 0x3f800000;
      param_2[0x60] = 0x3f800000;
      param_2[0x5f] = 0x3f800000;
      uVar16 = (param_2[0x4d] + param_2[0x55] + 0xbU & 0x7f) << 0x18 | 0x2000;
      goto LAB_10043410;
    }
    if ((char)local_70 == '\0') {
      uVar12 = 0x70;
    }
    else {
      uVar10 = FUN_1003ca78(param_2,0,0,0,0,7,0);
      uVar12 = (uint)uVar10;
    }
    uVar15 = FUN_1003cc48(param_2,local_6e,uVar12,0,0,0,7,local_68);
    uVar16 = uVar15 & 0xffff;
    if (((uVar15 & 0x2000) != 0) || ((uVar15 & 0xf00) == 0x100)) {
      uVar16 = uVar15 & 0xffff;
      if ((uVar15 & 0xf0) != 0xf0 && (uVar15 & 0xf0) != 0x80) {
        uVar16 = FUN_1003ca78(param_2,0,0,0,0,7,0);
        uVar16 = uVar16 & 0xffff;
      }
      FUN_1003cf40(param_2,uVar15 & 0xffff,uVar16,0,7,local_68,1);
    }
    FUN_1003c500(param_2,uVar12,7);
    piVar1 = param_2 + 0x55;
    iVar14 = FUN_10072aa0(param_2,param_2 + 0x56,uVar13 | 0x80000000,0,0,0);
    *piVar1 = iVar14;
    bVar8 = false;
    uVar15 = FUN_1003cbc0(param_2,uVar12,0xa4);
    piVar11 = param_2 + 0x5d;
    if ((uVar16 & 0xff0) != 0x100) {
      bVar8 = (uVar16 & 0xf00) != 0x600 && ((uVar16 & 0xf00) - 0x100 & 0xfffffaff) == 0;
    }
    uVar15 = uVar15 & 0xff;
    if ((uVar16 & 0x1000) != 0) {
      uVar15 = 0xff;
    }
    uVar17 = uVar16 & 0xf0;
    uVar18 = uVar16 & 0xf;
    local_5c = piVar11;
    if (uVar17 < 0x40) {
      if ((uVar17 - 0x20 & 0xffffffef) == 0) {
        iVar14 = 0x78;
        if (uVar17 == 0x20) {
          iVar14 = 0x6c;
        }
        local_58 = *(int **)(iVar14 + uVar18 * 4 + (int)param_2);
        if (local_58 != (int *)0x0) {
          *piVar11 = 2;
          iVar14 = FUN_10072e80(local_58,0,1,4,0,0);
          param_2[0x5e] = iVar14;
          param_2[0x5f] = (uint)local_58 & 0xff;
          goto LAB_10042a08;
        }
      }
      else if (uVar17 != 0) {
        if (uVar17 != 0x10) goto LAB_10042a08;
        *piVar11 = 2;
        param_2[0x5e] = uVar15 << 4 | 0x100006;
        bVar5 = *(byte *)(param_2 + uVar18 + 0x21);
        goto LAB_100429a4;
      }
      fVar21 = -0.5;
      if ((uVar16 & 0xf00) != 0x300) {
        fVar21 = 0.0;
      }
      fVar20 = 1.0;
      if ((uVar16 & 0xf00) != 0x100) {
        fVar20 = fVar21;
      }
      if ((uVar16 & 0x2000) != 0) {
        fVar20 = fVar20 * 255.0;
      }
      fVar21 = -fVar20;
      if (!bVar8) {
        fVar21 = fVar20;
      }
      bVar8 = uVar15 == 0xff;
      iVar14 = 5;
      if (bVar8) {
        iVar14 = 2;
      }
      *piVar11 = iVar14;
      iVar14 = 0x4000;
      if (bVar8) {
        iVar14 = 0x4001;
      }
      iVar19 = 0x4006;
      if (bVar8) {
        iVar19 = iVar14;
      }
      param_2[0x5e] = iVar19;
      param_2[0x62] = (int)fVar21;
      param_2[0x61] = (int)fVar21;
      param_2[0x60] = (int)fVar21;
      param_2[0x5f] = (int)fVar21;
    }
    else {
      if (uVar17 < 0x41) {
        *piVar11 = 2;
        param_2[0x5e] = uVar15 << 4 | 0x101006;
        param_2[0x5f] = 2;
      }
      else if (uVar17 == 0x50) {
        param_2[2] = param_2[2] | 1;
        if (*param_2 == 0x51) {
          param_2[0x61] = 5;
          uVar15 = uVar15 << 4 | 0x308006;
          iVar19 = 0;
          iVar14 = 4;
        }
        else {
          uVar15 = uVar15 << 4 | 0x208006;
          iVar19 = 5;
          iVar14 = 3;
        }
        *piVar11 = iVar14;
        param_2[0x5e] = uVar15;
        param_2[0x5f] = 0;
        param_2[0x60] = iVar19;
      }
      else {
        if (uVar17 == 0x80) {
          *piVar11 = 2;
          pbVar7 = (byte *)(param_2 + uVar18 + 0x24);
        }
        else {
          if (uVar17 != 0xf0) goto LAB_10042a08;
          *piVar11 = 2;
          pbVar7 = (byte *)(param_2 + 0x28);
        }
        iVar14 = FUN_10072e80(*(int *)pbVar7,(char)uVar15,1,4,0,0);
        param_2[0x5e] = iVar14;
        bVar5 = *pbVar7;
LAB_100429a4:
        param_2[0x5f] = (uint)bVar5;
      }
LAB_10042a08:
      if (bVar8) {
        for (iVar14 = *piVar11; iVar14 != 0; iVar14 = iVar14 + -1) {
          param_2[iVar14 + 0x5e] = piVar11[iVar14];
        }
        param_2[0x5e] = param_2[0x5e] | 0x80000000;
        param_2[0x5f] = 0x41;
        *piVar11 = *piVar11 + 1;
      }
    }
    FUN_10073878(local_68,(*piVar1 + *local_5c * 2 + param_2[0x4d] + 1U & 0x7f) << 0x18 | 0x2032,
                 param_2 + 0x4d,piVar1,local_5c,local_5c);
  }
  else {
    if (((uint)local_4c & 0xdf0) == 0) goto LAB_10043340;
    if ((char)local_70 == '\0') {
      uVar12 = 0x70;
    }
    else {
      uVar12 = FUN_1003ca78(param_2,0,0,0,0,7,0);
      uVar12 = uVar12 & 0xffff;
    }
    uVar15 = FUN_1003cc48(param_2,local_6e,uVar12,0,0,0,7,local_68);
    uVar16 = uVar15 & 0xffff;
    if (((uVar15 & 0x2000) != 0) || ((uVar15 & 0xf00) == 0x100)) {
      uVar16 = uVar15 & 0xffff;
      if ((uVar15 & 0xf0) != 0xf0 && (uVar15 & 0xf0) != 0x80) {
        uVar16 = FUN_1003ca78(param_2,0,0,0,0,7,0);
        uVar16 = uVar16 & 0xffff;
      }
      FUN_1003cf40(param_2,uVar15 & 0xffff,uVar16,0,7,local_68,1);
    }
    uVar17 = FUN_1003ca78(param_2,uVar16,0,0,0,7,0);
    uVar6 = (undefined2)uVar17;
    local_70 = uVar6;
    FUN_1003c500(param_2,uVar6,7);
    uVar9 = FUN_1003cbc0(param_2,uVar17 & 0xffff,0xa4);
    FUN_1003c690(param_2,0,uVar16,uVar9,1,0);
    uVar9 = FUN_1003cbc0(param_2,uVar6,0xa4);
    iVar14 = FUN_10072590(param_2,param_2 + 0x5e,param_2[0x12],0x80,uVar9,0,0);
    local_64 = param_2 + 0x4d;
    piVar1 = param_2 + 0x55;
    piVar11 = param_2 + 0x5d;
    *piVar11 = iVar14;
    local_60 = piVar1;
    local_5c = piVar1;
    local_58 = piVar11;
    local_54 = piVar11;
    local_4c = local_64;
    FUN_10073878(local_68,(iVar14 + *local_64 + *piVar1 + 1U & 0x7f) << 0x18,local_64,piVar1,piVar11
                 ,0);
    FUN_1003c500(param_2,uVar12,7);
    iVar14 = FUN_10072aa0(param_2,param_2 + 0x56,uVar13,0,0,0);
    *piVar1 = iVar14;
    bVar8 = false;
    uVar15 = FUN_1003cbc0(param_2,uVar12,0xa4);
    if ((uVar17 & 0xff0) != 0x100) {
      bVar8 = (uVar17 & 0xf00) != 0x600 && ((uVar17 & 0xf00) - 0x100 & 0xfffffaff) == 0;
    }
    uVar15 = uVar15 & 0xff;
    if ((uVar17 & 0x1000) != 0) {
      uVar15 = 0xff;
    }
    uVar18 = uVar17 & 0xf0;
    uVar3 = uVar17 & 0xf;
    if (uVar18 < 0x40) {
      if ((uVar18 - 0x20 & 0xffffffef) == 0) {
        iVar14 = 0x78;
        if (uVar18 == 0x20) {
          iVar14 = 0x6c;
        }
        uVar18 = *(uint *)(iVar14 + uVar3 * 4 + (int)param_2);
        if (uVar18 == 0) goto LAB_10042f94;
        *piVar11 = 2;
        iVar14 = FUN_10072e80(uVar18,0,1,4,0,0);
        param_2[0x5e] = iVar14;
        uVar18 = uVar18 & 0xff;
LAB_10042f38:
        param_2[0x5f] = uVar18;
        goto LAB_10042f40;
      }
      if (uVar18 != 0) {
        if (uVar18 != 0x10) goto LAB_10042f40;
        *piVar11 = 2;
        param_2[0x5e] = uVar15 << 4 | 0x100006;
        uVar18 = (uint)*(byte *)(param_2 + uVar3 + 0x21);
        goto LAB_10042f38;
      }
LAB_10042f94:
      fVar21 = -0.5;
      if ((uVar17 & 0xf00) != 0x300) {
        fVar21 = 0.0;
      }
      fVar20 = 1.0;
      if ((uVar17 & 0xf00) != 0x100) {
        fVar20 = fVar21;
      }
      if ((uVar17 & 0x2000) != 0) {
        fVar20 = fVar20 * 255.0;
      }
      fVar21 = -fVar20;
      if (!bVar8) {
        fVar21 = fVar20;
      }
      bVar8 = uVar15 == 0xff;
      iVar14 = 5;
      if (bVar8) {
        iVar14 = 2;
      }
      *piVar11 = iVar14;
      iVar14 = 0x4000;
      if (bVar8) {
        iVar14 = 0x4001;
      }
      iVar19 = 0x4006;
      if (bVar8) {
        iVar19 = iVar14;
      }
      param_2[0x5e] = iVar19;
      param_2[0x62] = (int)fVar21;
      param_2[0x61] = (int)fVar21;
      param_2[0x60] = (int)fVar21;
      param_2[0x5f] = (int)fVar21;
    }
    else {
      if (uVar18 < 0x41) {
        *piVar11 = 2;
        param_2[0x5e] = uVar15 << 4 | 0x101006;
        param_2[0x5f] = 2;
      }
      else {
        if (uVar18 != 0x50) {
          if (uVar18 == 0x80) {
            pbVar7 = (byte *)(param_2 + uVar3 + 0x24);
          }
          else {
            if (uVar18 != 0xf0) goto LAB_10042f40;
            pbVar7 = (byte *)(param_2 + 0x28);
          }
          *piVar11 = 2;
          iVar14 = FUN_10072e80(*(int *)pbVar7,(char)uVar15,1,4,0,0);
          param_2[0x5e] = iVar14;
          uVar18 = (uint)*pbVar7;
          goto LAB_10042f38;
        }
        param_2[2] = param_2[2] | 1;
        if (*param_2 == 0x51) {
          param_2[0x61] = 5;
          uVar15 = uVar15 << 4 | 0x308006;
          iVar19 = 0;
          iVar14 = 4;
        }
        else {
          uVar15 = uVar15 << 4 | 0x208006;
          iVar19 = 5;
          iVar14 = 3;
        }
        *piVar11 = iVar14;
        param_2[0x5e] = uVar15;
        param_2[0x5f] = 0;
        param_2[0x60] = iVar19;
      }
LAB_10042f40:
      if (bVar8) {
        for (iVar14 = *piVar11; iVar14 != 0; iVar14 = iVar14 + -1) {
          param_2[iVar14 + 0x5e] = piVar11[iVar14];
        }
        param_2[0x5e] = param_2[0x5e] | 0x80000000;
        param_2[0x5f] = 0x41;
        *piVar11 = *piVar11 + 1;
      }
    }
    bVar8 = false;
    uVar15 = FUN_1003cbc0(param_2,uVar12,0xa4);
    puVar2 = (uint *)(param_2 + 0x65);
    if ((uVar16 & 0xff0) != 0x100) {
      bVar8 = (uVar16 & 0xf00) != 0x600 && ((uVar16 & 0xf00) - 0x100 & 0xfffffaff) == 0;
    }
    uVar15 = uVar15 & 0xff;
    if ((uVar16 & 0x1000) != 0) {
      uVar15 = 0xff;
    }
    uVar17 = uVar16 & 0xf0;
    uVar18 = uVar16 & 0xf;
    local_50 = puVar2;
    if (uVar17 < 0x40) {
      if ((uVar17 - 0x20 & 0xffffffef) == 0) {
        iVar14 = 0x78;
        if (uVar17 == 0x20) {
          iVar14 = 0x6c;
        }
        uVar17 = *(uint *)(iVar14 + uVar18 * 4 + (int)param_2);
        if (uVar17 == 0) goto LAB_1004325c;
        *puVar2 = 2;
        iVar14 = FUN_10072e80(uVar17,0,1,4,0,0);
        param_2[0x66] = iVar14;
        uVar17 = uVar17 & 0xff;
LAB_10043200:
        param_2[0x67] = uVar17;
        goto LAB_10043208;
      }
      if ((uVar16 & 0xf0) != 0) {
        if (uVar17 != 0x10) goto LAB_10043208;
        *puVar2 = 2;
        param_2[0x66] = uVar15 << 4 | 0x100006;
        uVar17 = (uint)*(byte *)(param_2 + uVar18 + 0x21);
        goto LAB_10043200;
      }
LAB_1004325c:
      fVar21 = -0.5;
      if ((uVar16 & 0xf00) != 0x300) {
        fVar21 = 0.0;
      }
      fVar20 = 1.0;
      if ((uVar16 & 0xf00) != 0x100) {
        fVar20 = fVar21;
      }
      if ((uVar16 & 0x2000) != 0) {
        fVar20 = fVar20 * 255.0;
      }
      fVar21 = -fVar20;
      if (!bVar8) {
        fVar21 = fVar20;
      }
      bVar8 = uVar15 == 0xff;
      uVar15 = 5;
      if (bVar8) {
        uVar15 = 2;
      }
      *puVar2 = uVar15;
      iVar14 = 0x4000;
      if (bVar8) {
        iVar14 = 0x4001;
      }
      iVar19 = 0x4006;
      if (bVar8) {
        iVar19 = iVar14;
      }
      param_2[0x66] = iVar19;
      param_2[0x6a] = (int)fVar21;
      param_2[0x69] = (int)fVar21;
      param_2[0x68] = (int)fVar21;
      param_2[0x67] = (int)fVar21;
    }
    else {
      if (uVar17 < 0x41) {
        *puVar2 = 2;
        param_2[0x66] = uVar15 << 4 | 0x101006;
        param_2[0x67] = 2;
      }
      else {
        if (uVar17 != 0x50) {
          if (uVar17 == 0x80) {
            *puVar2 = 2;
            pbVar7 = (byte *)(param_2 + uVar18 + 0x24);
          }
          else {
            if (uVar17 != 0xf0) goto LAB_10043208;
            *puVar2 = 2;
            pbVar7 = (byte *)(param_2 + 0x28);
          }
          iVar14 = FUN_10072e80(*(int *)pbVar7,(char)uVar15,1,4,0,0);
          param_2[0x66] = iVar14;
          uVar17 = (uint)*pbVar7;
          goto LAB_10043200;
        }
        param_2[2] = param_2[2] | 1;
        if (*param_2 == 0x51) {
          param_2[0x69] = 5;
          uVar15 = uVar15 << 4 | 0x308006;
          iVar14 = 0;
          uVar17 = 4;
        }
        else {
          uVar15 = uVar15 << 4 | 0x208006;
          iVar14 = 5;
          uVar17 = 3;
        }
        *puVar2 = uVar17;
        param_2[0x66] = uVar15;
        param_2[0x67] = 0;
        param_2[0x68] = iVar14;
      }
LAB_10043208:
      if (bVar8) {
        for (uVar15 = *puVar2; uVar15 != 0; uVar15 = uVar15 - 1) {
          param_2[uVar15 + 0x66] = puVar2[uVar15];
        }
        param_2[0x66] = param_2[0x66] | 0x80000000;
        param_2[0x67] = 0x41;
        *puVar2 = *puVar2 + 1;
      }
    }
    FUN_10073878(local_68,(*local_58 + *local_5c + *local_4c + *local_50 + 1 & 0x7f) << 0x18 |
                          0x2032,local_64,local_60,local_54,local_50);
    FUN_1003cb80(param_2,local_70);
  }
  if (uVar16 != local_6e && uVar16 != uVar12) {
    FUN_1003cb80(param_2,uVar16);
  }
LAB_10043428:
  if (local_6c != '\0') {
    FUN_10072510(param_2,uVar13);
  }
  return uVar12;
}


/*
 * FUN_10047410 at 10047410
 * undefined FUN_10047410(void)
 * Address ranges: 10047410-10048a7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10047410(int param_1,int *param_2,undefined4 param_3,ushort param_4,undefined1 param_5)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  bool bVar7;
  undefined1 uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  int *local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 local_b0;
  int *piStack_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  uint local_70;
  undefined2 local_6c;
  ushort local_6a;
  char local_68;
  undefined4 local_64;
  uint *local_60;
  int *local_5c;
  int *local_58;
  uint *local_54;
  int *local_50;
  int *local_4c;
  
  local_54 = (uint *)(param_1 + 0x8c);
  local_6c = CONCAT11(local_6c._1_1_,param_5);
  local_6a = param_4;
  local_64 = param_3;
  switch(*(undefined1 *)local_54) {
  case 1:
    local_70 = FUN_10077af0(param_2,1,0);
    uVar5 = 0x150101;
    break;
  case 2:
    local_70 = FUN_10077af0(param_2,1,0);
    uVar5 = 0x110101;
    break;
  case 3:
    local_70 = 0x190101;
    bVar7 = false;
    goto LAB_100474d4;
  default:
    return 0;
  }
  FUN_10045380(param_2,param_3,uVar5);
  bVar7 = true;
  if (local_70 == 0) {
    return 0;
  }
LAB_100474d4:
  local_68 = '\0';
  local_50 = (int *)(uint)local_6a;
  if (((*local_54 & 0x300) == 0x200) && ((local_6a & 0xdf0) == 0)) {
    bVar7 = false;
  }
  if (bVar7) {
    uVar10 = FUN_10077af0(param_2,4,1);
    uVar11 = FUN_10077af0(param_2,2,1);
    uVar5 = local_64;
    puVar1 = (uint *)(param_2 + 0x14);
    local_68 = '\x01';
    local_a4 = *puVar1;
    local_98 = 0;
    local_9c = 0x3f800000;
    local_a0 = 0;
    local_a8 = 0;
    local_b0 = 1;
    piStack_ac = (int *)local_70;
    local_b8 = 0x34;
    uStack_bc = local_64;
    local_c0 = param_2;
    uStack_b4 = uVar11;
    local_60 = puVar1;
    FUN_10078c60(&local_c0,0x2c);
    local_a4 = *puVar1;
    local_98 = 0;
    local_a0 = 0;
    local_b0 = 1;
    local_a8 = 0;
    local_b8 = 0x33;
    local_9c = 0x47800000;
    uStack_bc = uVar5;
    local_c0 = param_2;
    uStack_b4 = uVar11;
    piStack_ac = (int *)uVar11;
    FUN_10078c60(&local_c0,0x2c);
    local_b8 = 0x1c;
    local_a8 = 0;
    local_a4 = 0;
    local_b0 = 2;
    uStack_bc = uVar5;
    local_c0 = param_2;
    uStack_b4 = uVar11;
    piStack_ac = (int *)uVar11;
    FUN_10078c60(&local_c0,0x20);
    local_a0 = 0;
    local_9c = 0xffffffff;
    local_a4 = *puVar1;
    local_98 = 0;
    local_b0 = 2;
    uStack_bc = uVar5;
    local_a8 = 0x55;
    local_b8 = 0x1e;
    local_c0 = param_2;
    uStack_b4 = uVar11;
    piStack_ac = (int *)uVar11;
    FUN_10078c60(&local_c0,0x2c);
    local_90 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_98 = 0x110708;
    local_94 = 0;
    local_a4 = *puVar1;
    piStack_ac = (int *)(uVar11 | 0x10000000);
    uStack_bc = uVar5;
    local_b0 = 2;
    local_a8 = 1;
    local_b8 = 0xa7;
    local_c0 = param_2;
    uStack_b4 = uVar11;
    local_5c = piStack_ac;
    FUN_10078c60(&local_c0,0x34);
    uStack_bc = uVar5;
    local_90 = 4;
    uStack_8c = 0;
    local_58 = param_2 + 0x15;
    local_98 = 2;
    local_94 = 3;
    local_a4 = *local_58;
    local_a0 = 0xe4;
    local_9c = 1;
    local_a8 = 0x55;
    local_b8 = 0x1e;
    local_b0 = 0xf;
    local_c0 = param_2;
    uStack_b4 = uVar10;
    piStack_ac = (int *)uVar11;
    FUN_10078c60(&local_c0,0x38);
    local_98 = 0x110709;
    local_94 = 0;
    local_a4 = *puVar1;
    piStack_ac = (int *)(uVar10 | 0x10000000);
    local_90 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_a8 = 0;
    local_b8 = 0xa7;
    local_b0 = 1;
    uStack_bc = uVar5;
    local_c0 = param_2;
    uStack_b4 = uVar10;
    local_70 = (uint)piStack_ac;
    FUN_10078c60(&local_c0,0x34);
    local_98 = 0x110709;
    local_94 = 0;
    local_a4 = *puVar1;
    local_90 = 0;
    local_a0 = 0;
    local_9c = 0;
    uStack_bc = uVar5;
    local_a8 = 1;
    local_b8 = 0xa7;
    local_b0 = 2;
    piStack_ac = (int *)local_70;
    local_c0 = param_2;
    uStack_b4 = uVar10;
    FUN_10078c60(&local_c0,0x34);
    puVar1 = local_60;
    local_90 = 0;
    local_98 = 0x110709;
    local_94 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_a4 = *local_60;
    uStack_bc = uVar5;
    local_a8 = 2;
    local_b0 = 4;
    piStack_ac = (int *)local_70;
    local_b8 = 0xa7;
    local_c0 = param_2;
    uStack_b4 = uVar10;
    FUN_10078c60(&local_c0,0x34);
    local_9c = 0;
    local_98 = 0x110709;
    local_a4 = *puVar1;
    local_94 = 0;
    local_90 = 0;
    uStack_bc = uVar5;
    local_a0 = 0;
    local_a8 = 3;
    local_b0 = 8;
    piStack_ac = (int *)local_70;
    local_b8 = 0xa7;
    local_c0 = param_2;
    uStack_b4 = uVar10;
    FUN_10078c60(&local_c0,0x34);
    local_a0 = 0xe4;
    local_9c = 0;
    local_a8 = 0;
    local_b8 = 0x1d;
    local_b0 = 0xf;
    uStack_bc = uVar5;
    local_c0 = param_2;
    uStack_b4 = uVar10;
    piStack_ac = (int *)uVar11;
    local_a4 = uVar10;
    FUN_10078c60(&local_c0,0x28);
    local_90 = 1;
    uStack_8c = 0;
    local_98 = 1;
    local_94 = 1;
    local_a0 = 0xe4;
    local_9c = 1;
    local_a4 = *local_58;
    local_b0 = 0xf;
    local_b8 = 1;
    uStack_bc = uVar5;
    local_a8 = 0xe4;
    local_c0 = param_2;
    uStack_b4 = uVar10;
    piStack_ac = (int *)uVar10;
    FUN_10078c60(&local_c0,0x38);
    local_b8 = 0x1e;
    local_a8 = 0x55;
    local_a0 = 0;
    local_9c = 0;
    local_b0 = 2;
    uStack_bc = uVar5;
    local_c0 = param_2;
    uStack_b4 = uVar11;
    piStack_ac = (int *)uVar11;
    local_a4 = uVar10;
    FUN_10078c60(&local_c0,0x28);
    local_b8 = 0x1e;
    local_a0 = 0x55;
    local_9c = 0;
    local_a8 = 0x55;
    local_b0 = 2;
    uStack_bc = uVar5;
    local_c0 = param_2;
    uStack_b4 = uVar11;
    piStack_ac = (int *)uVar11;
    local_a4 = uVar10;
    FUN_10078c60(&local_c0,0x28);
    local_a0 = 0xaa;
    local_9c = 0;
    local_b8 = 0x1e;
    local_a8 = 0x55;
    local_b0 = 2;
    uStack_bc = uVar5;
    local_c0 = param_2;
    uStack_b4 = uVar11;
    piStack_ac = (int *)uVar11;
    local_a4 = uVar10;
    FUN_10078c60(&local_c0,0x28);
    local_a0 = 0xff;
    local_9c = 0;
    local_b8 = 0x1e;
    local_a8 = 0x55;
    local_b0 = 2;
    uStack_bc = uVar5;
    local_c0 = param_2;
    uStack_b4 = uVar11;
    piStack_ac = (int *)uVar11;
    local_a4 = uVar10;
    FUN_10078c60(&local_c0,0x28);
    local_98 = 0x110709;
    local_94 = 0;
    local_a4 = *puVar1;
    local_90 = 0;
    local_a0 = 0;
    local_9c = 0;
    uStack_bc = uVar5;
    local_b0 = 1;
    piStack_ac = local_5c;
    local_a8 = 1;
    local_b8 = 0xa7;
    local_c0 = param_2;
    uStack_b4 = uVar10;
    FUN_10078c60(&local_c0,0x34);
    local_90 = 0;
    uStack_8c = 0;
    local_98 = 0;
    local_94 = 1;
    local_a0 = 0xe4;
    local_9c = 0;
    uStack_bc = uVar5;
    local_a4 = *local_58;
    local_a8 = 0x55;
    local_b0 = 6;
    local_b8 = 0x1e;
    local_c0 = param_2;
    uStack_b4 = uVar10;
    piStack_ac = (int *)uVar11;
    FUN_10078c60(&local_c0,0x38);
    local_98 = 0x110709;
    local_94 = 0;
    local_a4 = *puVar1;
    local_90 = 0;
    local_a0 = 0;
    local_9c = 0;
    uStack_bc = uVar5;
    local_a8 = 2;
    local_b8 = 0xa7;
    local_b0 = 2;
    piStack_ac = (int *)local_70;
    local_c0 = param_2;
    uStack_b4 = uVar11;
    FUN_10078c60(&local_c0,0x34);
    local_a4 = uVar10 | 0x80000000;
    local_a0 = 0;
    local_a8 = 0x154;
    local_b0 = 3;
    local_9c = 0;
    local_b8 = 0;
    uStack_bc = uVar5;
    local_c0 = param_2;
    uStack_b4 = uVar11;
    piStack_ac = (int *)uVar11;
    FUN_10078c60(&local_c0,0x28);
    local_b8 = 0xe;
    local_a0 = 0x55;
    local_9c = 0;
    local_a8 = 0;
    local_b0 = 1;
    uStack_bc = uVar5;
    local_c0 = param_2;
    uStack_b4 = uVar11;
    piStack_ac = (int *)uVar11;
    local_a4 = uVar11;
    FUN_10078c60(&local_c0,0x28);
    puVar1 = local_60;
    local_90 = 0;
    local_98 = 0x11070a;
    local_94 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_a4 = *local_60;
    uStack_bc = uVar5;
    local_b0 = 1;
    piStack_ac = (int *)local_70;
    local_a8 = 2;
    local_b8 = 0xa7;
    local_c0 = param_2;
    uStack_b4 = uVar10;
    FUN_10078c60(&local_c0,0x34);
    local_a4 = *puVar1;
    local_90 = 0;
    local_98 = 0x11070a;
    local_94 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_a8 = 1;
    local_b8 = 0xa7;
    local_b0 = 2;
    piStack_ac = (int *)local_70;
    uStack_bc = uVar5;
    local_c0 = param_2;
    uStack_b4 = uVar11;
    FUN_10078c60(&local_c0,0x34);
    local_a4 = uVar11 | 0x80000000;
    local_a8 = 0;
    local_a0 = 0x55;
    local_9c = 0;
    local_b0 = 1;
    local_b8 = 0;
    uStack_bc = uVar5;
    local_c0 = param_2;
    uStack_b4 = uVar10;
    piStack_ac = (int *)uVar10;
    FUN_10078c60(&local_c0,0x28);
    FUN_10077bb0(param_2,uVar11);
    FUN_10077bb0(param_2,uVar10);
    uStack_b4 = FUN_10077af0(param_2,1,1);
    local_98 = 0x55;
    local_94 = 0;
    local_b8 = 0x32;
    local_a0 = 0;
    local_a8 = 0;
    local_b0 = 1;
    uStack_bc = uVar5;
    local_c0 = param_2;
    piStack_ac = (int *)uVar10;
    local_a4 = uVar11;
    local_9c = uVar11;
    local_70 = uStack_b4;
    FUN_10078c60(&local_c0,0x30);
    param_2[3] = param_2[3] | 0x700;
  }
  if ((*local_54 & 0x300) == 0x100) {
LAB_1004895c:
    if ((char)local_6c == '\0') {
      uVar10 = 0x70;
    }
    else {
      uVar10 = FUN_10041930(param_2,0,0,0,0,7,0);
      uVar10 = uVar10 & 0xffff;
    }
    FUN_10041340(param_2,uVar10,7);
    iVar12 = FUN_10078140(param_2,param_2 + 0x56,local_70,0,0,0);
    param_2[0x55] = iVar12;
    uVar8 = FUN_10041a78(param_2,uVar10,0xa4);
    iVar12 = FUN_10077c30(param_2,param_2 + 0x5e,param_2[0x12],0x80,uVar8,0,0);
    param_2[0x5d] = iVar12;
    uVar11 = (iVar12 + param_2[0x4d] + param_2[0x55] + 1U & 0x7f) << 0x18 | 0x2038;
LAB_10048a2c:
    FUN_10078f18(local_64,uVar11,param_2 + 0x4d,param_2 + 0x55,param_2 + 0x5d,0);
    goto LAB_10048a44;
  }
  if ((*local_54 & 0x300) == 0x200) {
    if (((uint)local_50 & 0xff0) == 0 || ((uint)local_50 & 0xff0) == 0x200) {
      uVar10 = 0x70;
      FUN_10041df8(param_2,0,0x70,0,7,local_64,0);
      goto LAB_10048a44;
    }
    if (((uint)local_50 & 0xff0) == 0x100) {
      if ((char)local_6c == '\0') {
        uVar10 = 0x70;
      }
      else {
        uVar9 = FUN_10041930(param_2,0,0,0,0,7,0);
        uVar10 = (uint)uVar9;
      }
      FUN_10041340(param_2,uVar10,7);
      iVar12 = FUN_10078140(param_2,param_2 + 0x56,local_70 | 0x80000000,0,0,0);
      param_2[0x55] = iVar12;
      param_2[0x5d] = 5;
      param_2[0x5e] = 0x4006;
      param_2[0x62] = 0x3f800000;
      param_2[0x61] = 0x3f800000;
      param_2[0x60] = 0x3f800000;
      param_2[0x5f] = 0x3f800000;
      uVar11 = (param_2[0x4d] + param_2[0x55] + 0xbU & 0x7f) << 0x18 | 0x2000;
      goto LAB_10048a2c;
    }
    if ((char)local_6c == '\0') {
      uVar10 = 0x70;
    }
    else {
      uVar9 = FUN_10041930(param_2,0,0,0,0,7,0);
      uVar10 = (uint)uVar9;
    }
    uVar13 = FUN_10041b00(param_2,local_6a,uVar10,0,0,0,7,local_64);
    uVar11 = uVar13 & 0xffff;
    if (((uVar13 & 0x2000) != 0) || ((uVar13 & 0xf00) == 0x100)) {
      uVar11 = uVar13 & 0xffff;
      if ((uVar13 & 0xf0) != 0xf0 && (uVar13 & 0xf0) != 0x80) {
        uVar11 = FUN_10041930(param_2,0,0,0,0,7,0);
        uVar11 = uVar11 & 0xffff;
      }
      FUN_10041df8(param_2,uVar13 & 0xffff,uVar11,0,7,local_64,1);
    }
    FUN_10041340(param_2,uVar10,7);
    piVar2 = param_2 + 0x55;
    iVar12 = FUN_10078140(param_2,param_2 + 0x56,local_70 | 0x80000000,0,0,0);
    *piVar2 = iVar12;
    bVar7 = false;
    uVar13 = FUN_10041a78(param_2,uVar10,0xa4);
    piVar3 = param_2 + 0x5d;
    if ((uVar11 & 0xff0) != 0x100) {
      bVar7 = (uVar11 & 0xf00) != 0x600 && ((uVar11 & 0xf00) - 0x100 & 0xfffffaff) == 0;
    }
    uVar13 = uVar13 & 0xff;
    if ((uVar11 & 0x1000) != 0) {
      uVar13 = 0xff;
    }
    uVar15 = uVar11 & 0xf0;
    uVar16 = uVar11 & 0xf;
    local_5c = piVar3;
    if (uVar15 < 0x40) {
      if ((uVar15 - 0x20 & 0xffffffef) == 0) {
        iVar12 = 0x78;
        if (uVar15 == 0x20) {
          iVar12 = 0x6c;
        }
        uVar15 = *(uint *)(iVar12 + uVar16 * 4 + (int)param_2);
        if (uVar15 == 0) goto LAB_10047f88;
        *piVar3 = 2;
        iVar12 = FUN_10078520(uVar15,0,1,4,0,0);
        param_2[0x5e] = iVar12;
        uVar15 = uVar15 & 0xff;
LAB_10047f2c:
        param_2[0x5f] = uVar15;
        goto LAB_10047f34;
      }
      if (uVar15 != 0) {
        if (uVar15 != 0x10) goto LAB_10047f34;
        *piVar3 = 2;
        param_2[0x5e] = uVar13 << 4 | 0x100006;
        uVar15 = (uint)*(byte *)(param_2 + uVar16 + 0x21);
        goto LAB_10047f2c;
      }
LAB_10047f88:
      fVar18 = -0.5;
      if ((uVar11 & 0xf00) != 0x300) {
        fVar18 = 0.0;
      }
      fVar17 = 1.0;
      if ((uVar11 & 0xf00) != 0x100) {
        fVar17 = fVar18;
      }
      if ((uVar11 & 0x2000) != 0) {
        fVar17 = fVar17 * 255.0;
      }
      fVar18 = -fVar17;
      if (!bVar7) {
        fVar18 = fVar17;
      }
      bVar7 = uVar13 == 0xff;
      iVar12 = 5;
      if (bVar7) {
        iVar12 = 2;
      }
      *piVar3 = iVar12;
      iVar12 = 0x4000;
      if (bVar7) {
        iVar12 = 0x4001;
      }
      iVar14 = 0x4006;
      if (bVar7) {
        iVar14 = iVar12;
      }
      param_2[0x5e] = iVar14;
      param_2[0x62] = (int)fVar18;
      param_2[0x61] = (int)fVar18;
      param_2[0x60] = (int)fVar18;
      param_2[0x5f] = (int)fVar18;
    }
    else {
      if (uVar15 < 0x41) {
        *piVar3 = 2;
        param_2[0x5e] = uVar13 << 4 | 0x101006;
        param_2[0x5f] = 2;
      }
      else {
        if (0x7f < uVar15) {
          if (uVar15 < 0x81) {
            *piVar3 = 2;
            iVar12 = (uVar16 + 0x24) * 4;
          }
          else {
            if (uVar15 != 0xf0) goto LAB_10047f34;
            *piVar3 = 2;
            iVar12 = 0xa0;
          }
          iVar14 = FUN_10078520(*(undefined4 *)((int)param_2 + iVar12),(char)uVar13,1,4,0,0);
          param_2[0x5e] = iVar14;
          uVar15 = (uint)*(byte *)((int)param_2 + iVar12);
          goto LAB_10047f2c;
        }
        if (uVar15 == 0x50) {
          param_2[2] = param_2[2] | 1;
          if (*param_2 == 0x51) {
            param_2[0x61] = 5;
            uVar13 = uVar13 << 4 | 0x308006;
            iVar14 = 0;
            iVar12 = 4;
          }
          else {
            uVar13 = uVar13 << 4 | 0x208006;
            iVar14 = 5;
            iVar12 = 3;
          }
          *piVar3 = iVar12;
          param_2[0x5e] = uVar13;
          param_2[0x5f] = 0;
          param_2[0x60] = iVar14;
        }
        else if (uVar15 == 0x60) {
          param_2[2] = param_2[2] | 1;
          uVar15 = uVar16 * 0x250 + 0x180 >> 4;
          if (*param_2 == 0x51) {
            param_2[0x61] = uVar15;
            uVar15 = 0;
            iVar12 = 4;
          }
          else {
            iVar12 = 3;
          }
          *piVar3 = iVar12;
          param_2[0x5e] = uVar13 << 4 | 0x208006;
          param_2[0x5f] = 0;
          param_2[0x60] = uVar15;
        }
      }
LAB_10047f34:
      if (bVar7) {
        for (iVar12 = *piVar3; iVar12 != 0; iVar12 = iVar12 + -1) {
          param_2[iVar12 + 0x5e] = piVar3[iVar12];
        }
        param_2[0x5e] = param_2[0x5e] | 0x80000000;
        param_2[0x5f] = 0x41;
        *piVar3 = *piVar3 + 1;
      }
    }
    FUN_10078f18(local_64,(*piVar2 + *local_5c * 2 + param_2[0x4d] + 1U & 0x7f) << 0x18 | 0x2032,
                 param_2 + 0x4d,piVar2,local_5c,local_5c);
  }
  else {
    if (((uint)local_50 & 0xdf0) == 0) goto LAB_1004895c;
    if ((char)local_6c == '\0') {
      uVar10 = 0x70;
    }
    else {
      uVar10 = FUN_10041930(param_2,0,0,0,0,7,0);
      uVar10 = uVar10 & 0xffff;
    }
    uVar13 = FUN_10041b00(param_2,local_6a,uVar10,0,0,0,7,local_64);
    uVar11 = uVar13 & 0xffff;
    if (((uVar13 & 0x2000) != 0) || ((uVar13 & 0xf00) == 0x100)) {
      uVar11 = uVar13 & 0xffff;
      if ((uVar13 & 0xf0) != 0xf0 && (uVar13 & 0xf0) != 0x80) {
        uVar11 = FUN_10041930(param_2,0,0,0,0,7,0);
        uVar11 = uVar11 & 0xffff;
      }
      FUN_10041df8(param_2,uVar13 & 0xffff,uVar11,0,7,local_64,1);
    }
    uVar15 = FUN_10041930(param_2,uVar11,0,0,0,7,0);
    uVar6 = (undefined2)uVar15;
    local_6c = uVar6;
    FUN_10041340(param_2,uVar6,7);
    uVar8 = FUN_10041a78(param_2,uVar15 & 0xffff,0xa4);
    FUN_100414d0(param_2,0,uVar11,uVar8,1,0);
    uVar8 = FUN_10041a78(param_2,uVar6,0xa4);
    iVar12 = FUN_10077c30(param_2,param_2 + 0x5e,param_2[0x12],0x80,uVar8,0,0);
    local_5c = param_2 + 0x4d;
    puVar1 = (uint *)(param_2 + 0x55);
    piVar2 = param_2 + 0x5d;
    *piVar2 = iVar12;
    local_60 = puVar1;
    local_58 = piVar2;
    local_54 = puVar1;
    local_50 = piVar2;
    local_4c = local_5c;
    FUN_10078f18(local_64,(iVar12 + *local_5c + *puVar1 + 1 & 0x7f) << 0x18,local_5c,puVar1,piVar2,0
                );
    FUN_10041340(param_2,uVar10,7);
    uVar13 = FUN_10078140(param_2,param_2 + 0x56,local_70,0,0,0);
    *puVar1 = uVar13;
    bVar7 = false;
    uVar13 = FUN_10041a78(param_2,uVar10,0xa4);
    if ((uVar15 & 0xff0) != 0x100) {
      bVar7 = (uVar15 & 0xf00) != 0x600 && ((uVar15 & 0xf00) - 0x100 & 0xfffffaff) == 0;
    }
    uVar13 = uVar13 & 0xff;
    if ((uVar15 & 0x1000) != 0) {
      uVar13 = 0xff;
    }
    uVar16 = uVar15 & 0xf0;
    uVar4 = uVar15 & 0xf;
    if (uVar16 < 0x40) {
      if ((uVar16 - 0x20 & 0xffffffef) == 0) {
        iVar12 = 0x78;
        if (uVar16 == 0x20) {
          iVar12 = 0x6c;
        }
        uVar16 = *(uint *)(iVar12 + uVar4 * 4 + (int)param_2);
        if (uVar16 == 0) goto LAB_10048534;
        *piVar2 = 2;
        iVar12 = FUN_10078520(uVar16,0,1,4,0,0);
        param_2[0x5e] = iVar12;
        uVar16 = uVar16 & 0xff;
LAB_100484d8:
        param_2[0x5f] = uVar16;
        goto LAB_100484e0;
      }
      if (uVar16 != 0) {
        if (uVar16 != 0x10) goto LAB_100484e0;
        *piVar2 = 2;
        param_2[0x5e] = uVar13 << 4 | 0x100006;
        uVar16 = (uint)*(byte *)(param_2 + uVar4 + 0x21);
        goto LAB_100484d8;
      }
LAB_10048534:
      fVar18 = -0.5;
      if ((uVar15 & 0xf00) != 0x300) {
        fVar18 = 0.0;
      }
      fVar17 = 1.0;
      if ((uVar15 & 0xf00) != 0x100) {
        fVar17 = fVar18;
      }
      if ((uVar15 & 0x2000) != 0) {
        fVar17 = fVar17 * 255.0;
      }
      fVar18 = -fVar17;
      if (!bVar7) {
        fVar18 = fVar17;
      }
      bVar7 = uVar13 == 0xff;
      iVar12 = 5;
      if (bVar7) {
        iVar12 = 2;
      }
      *piVar2 = iVar12;
      iVar12 = 0x4000;
      if (bVar7) {
        iVar12 = 0x4001;
      }
      iVar14 = 0x4006;
      if (bVar7) {
        iVar14 = iVar12;
      }
      param_2[0x5e] = iVar14;
      param_2[0x62] = (int)fVar18;
      param_2[0x61] = (int)fVar18;
      param_2[0x60] = (int)fVar18;
      param_2[0x5f] = (int)fVar18;
    }
    else {
      if (uVar16 < 0x41) {
        *piVar2 = 2;
        param_2[0x5e] = uVar13 << 4 | 0x101006;
        param_2[0x5f] = 2;
      }
      else {
        if (0x7f < uVar16) {
          if (uVar16 < 0x81) {
            iVar12 = (uVar4 + 0x24) * 4;
          }
          else {
            if (uVar16 != 0xf0) goto LAB_100484e0;
            iVar12 = 0xa0;
          }
          *piVar2 = 2;
          iVar14 = FUN_10078520(*(undefined4 *)((int)param_2 + iVar12),(char)uVar13,1,4,0,0);
          param_2[0x5e] = iVar14;
          uVar16 = (uint)*(byte *)((int)param_2 + iVar12);
          goto LAB_100484d8;
        }
        if (uVar16 == 0x50) {
          param_2[2] = param_2[2] | 1;
          if (*param_2 == 0x51) {
            param_2[0x61] = 5;
            uVar13 = uVar13 << 4 | 0x308006;
            iVar14 = 0;
            iVar12 = 4;
          }
          else {
            uVar13 = uVar13 << 4 | 0x208006;
            iVar14 = 5;
            iVar12 = 3;
          }
          *piVar2 = iVar12;
          param_2[0x5e] = uVar13;
          param_2[0x5f] = 0;
          param_2[0x60] = iVar14;
        }
        else if (uVar16 == 0x60) {
          param_2[2] = param_2[2] | 1;
          uVar15 = uVar4 * 0x250 + 0x180 >> 4;
          if (*param_2 == 0x51) {
            param_2[0x61] = uVar15;
            uVar15 = 0;
            iVar12 = 4;
          }
          else {
            iVar12 = 3;
          }
          *piVar2 = iVar12;
          param_2[0x5e] = uVar13 << 4 | 0x208006;
          param_2[0x5f] = 0;
          param_2[0x60] = uVar15;
        }
      }
LAB_100484e0:
      if (bVar7) {
        for (iVar12 = *piVar2; iVar12 != 0; iVar12 = iVar12 + -1) {
          param_2[iVar12 + 0x5e] = piVar2[iVar12];
        }
        param_2[0x5e] = param_2[0x5e] | 0x80000000;
        param_2[0x5f] = 0x41;
        *piVar2 = *piVar2 + 1;
      }
    }
    bVar7 = false;
    uVar13 = FUN_10041a78(param_2,uVar10,0xa4);
    piVar2 = param_2 + 0x65;
    if ((uVar11 & 0xff0) != 0x100) {
      bVar7 = (uVar11 & 0xf00) != 0x600 && ((uVar11 & 0xf00) - 0x100 & 0xfffffaff) == 0;
    }
    uVar13 = uVar13 & 0xff;
    if ((uVar11 & 0x1000) != 0) {
      uVar13 = 0xff;
    }
    uVar15 = uVar11 & 0xf0;
    uVar16 = uVar11 & 0xf;
    if (uVar15 < 0x40) {
      if ((uVar15 - 0x20 & 0xffffffef) == 0) {
        iVar12 = 0x78;
        if (uVar15 == 0x20) {
          iVar12 = 0x6c;
        }
        uVar15 = *(uint *)(iVar12 + uVar16 * 4 + (int)param_2);
        if (uVar15 == 0) goto LAB_10048878;
        *piVar2 = 2;
        iVar12 = FUN_10078520(uVar15,0,1,4,0,0);
        param_2[0x66] = iVar12;
        uVar15 = uVar15 & 0xff;
LAB_1004881c:
        param_2[0x67] = uVar15;
        goto LAB_10048824;
      }
      if ((uVar11 & 0xf0) != 0) {
        if (uVar15 != 0x10) goto LAB_10048824;
        *piVar2 = 2;
        param_2[0x66] = uVar13 << 4 | 0x100006;
        uVar15 = (uint)*(byte *)(param_2 + uVar16 + 0x21);
        goto LAB_1004881c;
      }
LAB_10048878:
      fVar18 = -0.5;
      if ((uVar11 & 0xf00) != 0x300) {
        fVar18 = 0.0;
      }
      fVar17 = 1.0;
      if ((uVar11 & 0xf00) != 0x100) {
        fVar17 = fVar18;
      }
      if ((uVar11 & 0x2000) != 0) {
        fVar17 = fVar17 * 255.0;
      }
      fVar18 = -fVar17;
      if (!bVar7) {
        fVar18 = fVar17;
      }
      bVar7 = uVar13 == 0xff;
      iVar12 = 5;
      if (bVar7) {
        iVar12 = 2;
      }
      *piVar2 = iVar12;
      iVar12 = 0x4000;
      if (bVar7) {
        iVar12 = 0x4001;
      }
      iVar14 = 0x4006;
      if (bVar7) {
        iVar14 = iVar12;
      }
      param_2[0x66] = iVar14;
      param_2[0x6a] = (int)fVar18;
      param_2[0x69] = (int)fVar18;
      param_2[0x68] = (int)fVar18;
      param_2[0x67] = (int)fVar18;
    }
    else {
      if (uVar15 < 0x41) {
        *piVar2 = 2;
        param_2[0x66] = uVar13 << 4 | 0x101006;
        param_2[0x67] = 2;
      }
      else {
        if (0x7f < uVar15) {
          if (uVar15 < 0x81) {
            *piVar2 = 2;
            iVar12 = (uVar16 + 0x24) * 4;
          }
          else {
            if (uVar15 != 0xf0) goto LAB_10048824;
            *piVar2 = 2;
            iVar12 = 0xa0;
          }
          iVar14 = FUN_10078520(*(undefined4 *)((int)param_2 + iVar12),(char)uVar13,1,4,0,0);
          param_2[0x66] = iVar14;
          uVar15 = (uint)*(byte *)((int)param_2 + iVar12);
          goto LAB_1004881c;
        }
        if (uVar15 == 0x50) {
          param_2[2] = param_2[2] | 1;
          if (*param_2 == 0x51) {
            param_2[0x69] = 5;
            uVar13 = uVar13 << 4 | 0x308006;
            iVar14 = 0;
            iVar12 = 4;
          }
          else {
            uVar13 = uVar13 << 4 | 0x208006;
            iVar14 = 5;
            iVar12 = 3;
          }
          *piVar2 = iVar12;
          param_2[0x66] = uVar13;
          param_2[0x67] = 0;
          param_2[0x68] = iVar14;
        }
        else if (uVar15 == 0x60) {
          param_2[2] = param_2[2] | 1;
          uVar15 = uVar16 * 0x250 + 0x180 >> 4;
          if (*param_2 == 0x51) {
            param_2[0x69] = uVar15;
            uVar15 = 0;
            iVar12 = 4;
          }
          else {
            iVar12 = 3;
          }
          *piVar2 = iVar12;
          param_2[0x66] = uVar13 << 4 | 0x208006;
          param_2[0x67] = 0;
          param_2[0x68] = uVar15;
        }
      }
LAB_10048824:
      if (bVar7) {
        for (iVar12 = *piVar2; iVar12 != 0; iVar12 = iVar12 + -1) {
          param_2[iVar12 + 0x66] = piVar2[iVar12];
        }
        param_2[0x66] = param_2[0x66] | 0x80000000;
        param_2[0x67] = 0x41;
        *piVar2 = *piVar2 + 1;
      }
    }
    FUN_10078f18(local_64,(*local_5c + *local_50 + *piVar2 + *local_54 + 1 & 0x7f) << 0x18 | 0x2032,
                 local_4c,local_60,local_58,piVar2);
    FUN_10041a38(param_2,local_6c);
  }
  if (uVar11 != local_6a && uVar11 != uVar10) {
    FUN_10041a38(param_2,uVar11);
  }
LAB_10048a44:
  if (local_68 != '\0') {
    FUN_10077bb0(param_2,local_70);
  }
  return uVar10;
}


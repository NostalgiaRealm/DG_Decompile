/*
 * FUN_10051a50 at 10051a50
 * undefined FUN_10051a50(void)
 * Address ranges: 10051a50-10052f97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10051a50(int param_1,int *param_2,undefined4 param_3,ushort param_4,undefined1 param_5)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  undefined2 uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 uVar8;
  ushort uVar9;
  int *piVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
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
  uint *puStack_b4;
  undefined4 local_b0;
  uint *puStack_ac;
  undefined4 local_a8;
  uint *local_a4;
  undefined4 local_a0;
  uint *local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  char local_70;
  undefined2 local_6e;
  ushort local_6c;
  undefined4 local_68;
  uint local_64;
  int *local_60;
  uint *local_5c;
  int *local_58;
  int *local_54;
  uint *local_50;
  int *local_4c;
  int *local_48;
  
  local_50 = (uint *)(param_1 + 0x8c);
  local_6e = CONCAT11(local_6e._1_1_,param_5);
  uVar17 = 0;
  local_70 = '\0';
  bVar7 = false;
  local_6c = param_4;
  local_68 = param_3;
  switch(*(undefined1 *)local_50) {
  case 1:
    uVar12 = FUN_1006e7b0(param_2,1,1);
    local_70 = '\x01';
    local_a4 = (uint *)param_2[0x14];
    local_98 = 0;
    local_9c = (uint *)0x3b808081;
    local_a0 = 0;
    local_a8 = 0xff;
    local_b0 = 1;
    puStack_ac = (uint *)0x410102;
    local_b8 = 0x38;
    local_c0 = param_2;
    uStack_bc = param_3;
    puStack_b4 = (uint *)uVar12;
    FUN_1006f920(&local_c0,0x2c);
    break;
  case 2:
    uVar12 = FUN_1006e7b0(param_2,1,0);
    FUN_10050970(param_2,param_3,0x110101);
    bVar7 = true;
    break;
  case 3:
    uVar12 = 0x190101;
    goto LAB_10051b5c;
  default:
    goto switchD_10051ac0_default;
  }
  if (uVar12 != 0) {
LAB_10051b5c:
    local_4c = (int *)(uint)local_6c;
    if (((*local_50 & 0x300) == 0x200) && ((local_6c & 0xdf0) == 0)) {
      bVar7 = false;
    }
    if (bVar7) {
      piVar10 = (int *)FUN_1006e7b0(param_2,4,1);
      local_48 = piVar10;
      puVar11 = (uint *)FUN_1006e7b0(param_2,2,1);
      uVar6 = local_68;
      piVar1 = param_2 + 0x14;
      local_70 = '\x01';
      local_a4 = (uint *)*piVar1;
      local_98 = 0;
      local_9c = (uint *)0x3f800000;
      local_a0 = 0;
      local_a8 = 0;
      local_b8 = 0x34;
      local_b0 = 1;
      uStack_bc = local_68;
      local_c0 = param_2;
      puStack_b4 = puVar11;
      puStack_ac = (uint *)uVar12;
      local_60 = piVar1;
      local_5c = puVar11;
      FUN_1006f920(&local_c0,0x2c);
      local_a4 = (uint *)*piVar1;
      local_98 = 0;
      local_a0 = 0;
      local_b0 = 1;
      local_a8 = 0;
      local_b8 = 0x33;
      local_9c = (uint *)0x47800000;
      uStack_bc = uVar6;
      local_c0 = param_2;
      puStack_b4 = puVar11;
      puStack_ac = puVar11;
      FUN_1006f920(&local_c0,0x2c);
      local_b8 = 0x1c;
      local_a8 = 0;
      local_a4 = (uint *)0x0;
      local_b0 = 2;
      uStack_bc = uVar6;
      local_c0 = param_2;
      puStack_b4 = puVar11;
      puStack_ac = puVar11;
      FUN_1006f920(&local_c0,0x20);
      local_a0 = 0;
      local_9c = (uint *)0xffffffff;
      local_a4 = (uint *)*piVar1;
      local_98 = 0;
      local_b0 = 2;
      uStack_bc = uVar6;
      local_a8 = 0x55;
      local_b8 = 0x1e;
      local_c0 = param_2;
      puStack_b4 = puVar11;
      puStack_ac = puVar11;
      FUN_1006f920(&local_c0,0x2c);
      local_98 = 0x110708;
      local_94 = 0;
      local_a4 = (uint *)*piVar1;
      puStack_ac = (uint *)((uint)puVar11 | 0x10000000);
      local_90 = 0;
      local_a0 = 0;
      local_9c = (uint *)0x0;
      local_b0 = 2;
      local_a8 = 1;
      local_b8 = 0xa7;
      uStack_bc = uVar6;
      local_c0 = param_2;
      puStack_b4 = puVar11;
      local_58 = (int *)puStack_ac;
      FUN_1006f920(&local_c0,0x34);
      local_54 = param_2 + 0x15;
      local_90 = 4;
      uStack_8c = 0;
      local_98 = 2;
      local_94 = 3;
      local_a4 = (uint *)*local_54;
      local_a0 = 0xe4;
      local_9c = (uint *)0x1;
      uStack_bc = uVar6;
      local_a8 = 0x55;
      local_b0 = 0xf;
      local_b8 = 0x1e;
      local_c0 = param_2;
      puStack_b4 = (uint *)piVar10;
      puStack_ac = puVar11;
      FUN_1006f920(&local_c0,0x38);
      local_98 = 0x110709;
      local_94 = 0;
      local_a4 = (uint *)*piVar1;
      puStack_ac = (uint *)((uint)piVar10 | 0x10000000);
      local_90 = 0;
      local_a0 = 0;
      local_9c = (uint *)0x0;
      local_a8 = 0;
      local_b0 = 1;
      local_b8 = 0xa7;
      uStack_bc = uVar6;
      local_c0 = param_2;
      puStack_b4 = (uint *)piVar10;
      local_64 = (uint)puStack_ac;
      FUN_1006f920(&local_c0,0x34);
      local_98 = 0x110709;
      local_94 = 0;
      local_a4 = (uint *)*piVar1;
      local_90 = 0;
      local_a0 = 0;
      local_9c = (uint *)0x0;
      local_b8 = 0xa7;
      local_b0 = 2;
      puStack_ac = (uint *)local_64;
      local_a8 = 1;
      uStack_bc = uVar6;
      local_c0 = param_2;
      puStack_b4 = (uint *)piVar10;
      FUN_1006f920(&local_c0,0x34);
      piVar1 = local_60;
      local_90 = 0;
      local_98 = 0x110709;
      local_94 = 0;
      local_a0 = 0;
      local_9c = (uint *)0x0;
      local_a4 = (uint *)*local_60;
      local_b8 = 0xa7;
      uStack_bc = uVar6;
      local_a8 = 2;
      local_b0 = 4;
      puStack_ac = (uint *)local_64;
      local_c0 = param_2;
      puStack_b4 = (uint *)piVar10;
      FUN_1006f920(&local_c0,0x34);
      local_9c = (uint *)0x0;
      local_98 = 0x110709;
      local_a4 = (uint *)*piVar1;
      local_94 = 0;
      local_90 = 0;
      local_b8 = 0xa7;
      uStack_bc = uVar6;
      local_a0 = 0;
      local_a8 = 3;
      local_b0 = 8;
      puStack_ac = (uint *)local_64;
      local_c0 = param_2;
      puStack_b4 = (uint *)piVar10;
      FUN_1006f920(&local_c0,0x34);
      local_b0 = 0xf;
      local_a0 = 0xe4;
      local_9c = (uint *)0x0;
      local_a8 = 0;
      local_b8 = 0x1d;
      uStack_bc = uVar6;
      local_c0 = param_2;
      puStack_b4 = (uint *)piVar10;
      puStack_ac = puVar11;
      local_a4 = (uint *)piVar10;
      FUN_1006f920(&local_c0,0x28);
      local_90 = 1;
      uStack_8c = 0;
      local_98 = 1;
      local_94 = 1;
      local_a0 = 0xe4;
      local_9c = (uint *)0x1;
      local_a4 = (uint *)*local_54;
      local_b8 = 1;
      uStack_bc = uVar6;
      local_a8 = 0xe4;
      local_b0 = 0xf;
      local_c0 = param_2;
      puStack_b4 = (uint *)piVar10;
      puStack_ac = (uint *)piVar10;
      FUN_1006f920(&local_c0,0x38);
      local_a8 = 0x55;
      local_b8 = 0x1e;
      local_a0 = 0;
      local_9c = (uint *)0x0;
      local_b0 = 2;
      uStack_bc = uVar6;
      local_c0 = param_2;
      puStack_b4 = puVar11;
      puStack_ac = puVar11;
      local_a4 = (uint *)piVar10;
      FUN_1006f920(&local_c0,0x28);
      local_a0 = 0x55;
      local_9c = (uint *)0x0;
      local_a8 = 0x55;
      local_b8 = 0x1e;
      local_b0 = 2;
      uStack_bc = uVar6;
      local_c0 = param_2;
      puStack_b4 = puVar11;
      puStack_ac = puVar11;
      local_a4 = (uint *)piVar10;
      FUN_1006f920(&local_c0,0x28);
      local_a0 = 0xaa;
      local_9c = (uint *)0x0;
      local_a8 = 0x55;
      local_b8 = 0x1e;
      local_b0 = 2;
      uStack_bc = uVar6;
      local_c0 = param_2;
      puStack_b4 = puVar11;
      puStack_ac = puVar11;
      local_a4 = (uint *)piVar10;
      FUN_1006f920(&local_c0,0x28);
      local_a0 = 0xff;
      local_9c = (uint *)0x0;
      uStack_bc = uVar6;
      local_b8 = 0x1e;
      local_a8 = 0x55;
      local_b0 = 2;
      local_c0 = param_2;
      puStack_b4 = puVar11;
      puStack_ac = puVar11;
      local_a4 = (uint *)piVar10;
      FUN_1006f920(&local_c0,0x28);
      local_98 = 0x110709;
      local_94 = 0;
      local_a4 = (uint *)*piVar1;
      local_90 = 0;
      local_a0 = 0;
      local_9c = (uint *)0x0;
      local_b0 = 1;
      puStack_ac = (uint *)local_58;
      local_b8 = 0xa7;
      local_a8 = 1;
      uStack_bc = uVar6;
      local_c0 = param_2;
      puStack_b4 = (uint *)piVar10;
      FUN_1006f920(&local_c0,0x34);
      local_90 = 0;
      uStack_8c = 0;
      local_98 = 0;
      local_94 = 1;
      local_a0 = 0xe4;
      local_9c = (uint *)0x0;
      uStack_bc = uVar6;
      local_a4 = (uint *)*local_54;
      local_a8 = 0x55;
      local_b0 = 6;
      local_b8 = 0x1e;
      local_c0 = param_2;
      puStack_b4 = (uint *)piVar10;
      puStack_ac = puVar11;
      FUN_1006f920(&local_c0,0x38);
      local_98 = 0x110709;
      local_94 = 0;
      local_a4 = (uint *)*piVar1;
      local_90 = 0;
      local_a0 = 0;
      local_9c = (uint *)0x0;
      local_b8 = 0xa7;
      local_b0 = 2;
      puStack_ac = (uint *)local_64;
      local_a8 = 2;
      uStack_bc = uVar6;
      local_c0 = param_2;
      puStack_b4 = puVar11;
      FUN_1006f920(&local_c0,0x34);
      local_a4 = (uint *)((uint)piVar10 | 0x80000000);
      local_a0 = 0;
      local_a8 = 0x154;
      local_b0 = 3;
      local_9c = (uint *)0x0;
      local_b8 = 0;
      uStack_bc = uVar6;
      local_c0 = param_2;
      puStack_b4 = puVar11;
      puStack_ac = puVar11;
      FUN_1006f920(&local_c0,0x28);
      local_a0 = 0x55;
      local_9c = (uint *)0x0;
      local_b8 = 0xe;
      local_a8 = 0;
      local_b0 = 1;
      uStack_bc = uVar6;
      local_c0 = param_2;
      puStack_b4 = puVar11;
      puStack_ac = puVar11;
      local_a4 = puVar11;
      FUN_1006f920(&local_c0,0x28);
      piVar1 = local_60;
      local_90 = 0;
      local_98 = 0x11070a;
      local_94 = 0;
      local_a0 = 0;
      local_9c = (uint *)0x0;
      local_a4 = (uint *)*local_60;
      local_b0 = 1;
      puStack_ac = (uint *)local_64;
      local_b8 = 0xa7;
      uStack_bc = uVar6;
      local_a8 = 2;
      local_c0 = param_2;
      puStack_b4 = (uint *)piVar10;
      FUN_1006f920(&local_c0,0x34);
      local_98 = 0x11070a;
      local_94 = 0;
      local_a4 = (uint *)*piVar1;
      local_90 = 0;
      local_a0 = 0;
      local_9c = (uint *)0x0;
      local_b8 = 0xa7;
      local_b0 = 2;
      puStack_ac = (uint *)local_64;
      local_a8 = 1;
      uStack_bc = uVar6;
      local_c0 = param_2;
      puStack_b4 = puVar11;
      FUN_1006f920(&local_c0,0x34);
      local_a4 = (uint *)((uint)puVar11 | 0x80000000);
      local_a8 = 0;
      local_a0 = 0x55;
      local_9c = (uint *)0x0;
      local_b0 = 1;
      local_b8 = 0;
      uStack_bc = uVar6;
      local_c0 = param_2;
      puStack_b4 = (uint *)piVar10;
      puStack_ac = (uint *)piVar10;
      FUN_1006f920(&local_c0,0x28);
      FUN_1006e870(param_2,puVar11);
      FUN_1006e870(param_2,piVar10);
      uVar12 = FUN_1006e7b0(param_2,1,1);
      local_a0 = 0;
      local_98 = 0x55;
      local_94 = 0;
      local_a8 = 0;
      local_b8 = 0x32;
      local_b0 = 1;
      uStack_bc = uVar6;
      local_c0 = param_2;
      puStack_b4 = (uint *)uVar12;
      puStack_ac = (uint *)piVar10;
      local_a4 = puVar11;
      local_9c = puVar11;
      FUN_1006f920(&local_c0,0x30);
      param_2[3] = param_2[3] | 0x700;
    }
    if ((*local_50 & 0x300) == 0x100) {
LAB_10052e78:
      if ((char)local_6e == '\0') {
        uVar17 = 0x70;
      }
      else {
        uVar17 = FUN_1004d288(param_2,0,0,0,0,7,0);
        uVar17 = uVar17 & 0xffff;
      }
      FUN_1004cd90(param_2,uVar17,7);
      iVar13 = FUN_1006ee00(param_2,param_2 + 0x56,uVar12,0,0,0);
      param_2[0x55] = iVar13;
      uVar8 = FUN_1004d3d0(param_2,uVar17,0xa4);
      iVar13 = FUN_1006e8f0(param_2,param_2 + 0x5e,param_2[0x12],0x80,uVar8,0,0);
      param_2[0x5d] = iVar13;
      uVar15 = (iVar13 + param_2[0x4d] + param_2[0x55] + 1U & 0x7f) << 0x18 | 0x2038;
LAB_10052f48:
      FUN_1006fbd8(local_68,uVar15,param_2 + 0x4d,param_2 + 0x55,param_2 + 0x5d,0);
    }
    else {
      if ((*local_50 & 0x300) == 0x200) {
        if (((uint)local_4c & 0xff0) == 0 || ((uint)local_4c & 0xff0) == 0x200) {
          uVar17 = 0x70;
          FUN_1004d750(param_2,0,0x70,0,7,local_68,0);
          goto LAB_10052f60;
        }
        if (((uint)local_4c & 0xff0) == 0x100) {
          if ((char)local_6e == '\0') {
            uVar17 = 0x70;
          }
          else {
            uVar9 = FUN_1004d288(param_2,0,0,0,0,7,0);
            uVar17 = (uint)uVar9;
          }
          FUN_1004cd90(param_2,uVar17,7);
          iVar13 = FUN_1006ee00(param_2,param_2 + 0x56,uVar12 | 0x80000000,0,0,0);
          param_2[0x55] = iVar13;
          param_2[0x5d] = 5;
          param_2[0x5e] = 0x4006;
          param_2[0x62] = 0x3f800000;
          param_2[0x61] = 0x3f800000;
          param_2[0x60] = 0x3f800000;
          param_2[0x5f] = 0x3f800000;
          uVar15 = (param_2[0x4d] + param_2[0x55] + 0xbU & 0x7f) << 0x18 | 0x2000;
          goto LAB_10052f48;
        }
        if ((char)local_6e == '\0') {
          uVar17 = 0x70;
        }
        else {
          uVar9 = FUN_1004d288(param_2,0,0,0,0,7,0);
          uVar17 = (uint)uVar9;
        }
        uVar14 = FUN_1004d458(param_2,local_6c,uVar17,0,0,0,7,local_68);
        uVar15 = uVar14 & 0xffff;
        if (((uVar14 & 0x2000) != 0) || ((uVar14 & 0xf00) == 0x100)) {
          uVar15 = uVar14 & 0xffff;
          if ((uVar14 & 0xf0) != 0xf0 && (uVar14 & 0xf0) != 0x80) {
            uVar15 = FUN_1004d288(param_2,0,0,0,0,7,0);
            uVar15 = uVar15 & 0xffff;
          }
          FUN_1004d750(param_2,uVar14 & 0xffff,uVar15,0,7,local_68,1);
        }
        FUN_1004cd90(param_2,uVar17,7);
        piVar1 = param_2 + 0x55;
        iVar13 = FUN_1006ee00(param_2,param_2 + 0x56,uVar12 | 0x80000000,0,0,0);
        *piVar1 = iVar13;
        bVar7 = false;
        uVar14 = FUN_1004d3d0(param_2,uVar17,0xa4);
        puVar11 = (uint *)(param_2 + 0x5d);
        if ((uVar15 & 0xff0) != 0x100) {
          bVar7 = (uVar15 & 0xf00) != 0x600 && ((uVar15 & 0xf00) - 0x100 & 0xfffffaff) == 0;
        }
        uVar14 = uVar14 & 0xff;
        if ((uVar15 & 0x1000) != 0) {
          uVar14 = 0xff;
        }
        uVar16 = uVar15 & 0xf0;
        uVar18 = uVar15 & 0xf;
        local_5c = puVar11;
        if (uVar16 < 0x40) {
          if ((uVar16 - 0x20 & 0xffffffef) == 0) {
            iVar13 = 0x78;
            if (uVar16 == 0x20) {
              iVar13 = 0x6c;
            }
            local_58 = *(int **)(iVar13 + uVar18 * 4 + (int)param_2);
            if (local_58 != (int *)0x0) {
              *puVar11 = 2;
              iVar13 = FUN_1006f1e0(local_58,0,1,4,0,0);
              param_2[0x5e] = iVar13;
              param_2[0x5f] = (uint)local_58 & 0xff;
              goto LAB_1005253c;
            }
          }
          else if (uVar16 != 0) {
            if (uVar16 != 0x10) goto LAB_1005253c;
            *puVar11 = 2;
            param_2[0x5e] = uVar14 << 4 | 0x100006;
            bVar3 = *(byte *)(param_2 + uVar18 + 0x21);
            goto LAB_100524d8;
          }
          fVar21 = -0.5;
          if ((uVar15 & 0xf00) != 0x300) {
            fVar21 = 0.0;
          }
          fVar20 = 1.0;
          if ((uVar15 & 0xf00) != 0x100) {
            fVar20 = fVar21;
          }
          if ((uVar15 & 0x2000) != 0) {
            fVar20 = fVar20 * 255.0;
          }
          fVar21 = -fVar20;
          if (!bVar7) {
            fVar21 = fVar20;
          }
          bVar7 = uVar14 == 0xff;
          uVar14 = 5;
          if (bVar7) {
            uVar14 = 2;
          }
          *puVar11 = uVar14;
          iVar13 = 0x4000;
          if (bVar7) {
            iVar13 = 0x4001;
          }
          iVar19 = 0x4006;
          if (bVar7) {
            iVar19 = iVar13;
          }
          param_2[0x5e] = iVar19;
          param_2[0x62] = (int)fVar21;
          param_2[0x61] = (int)fVar21;
          param_2[0x60] = (int)fVar21;
          param_2[0x5f] = (int)fVar21;
        }
        else {
          if (uVar16 < 0x41) {
            *puVar11 = 2;
            param_2[0x5e] = uVar14 << 4 | 0x101006;
            param_2[0x5f] = 2;
          }
          else if (uVar16 == 0x50) {
            param_2[2] = param_2[2] | 1;
            if (*param_2 == 0x51) {
              param_2[0x61] = 5;
              uVar14 = uVar14 << 4 | 0x308006;
              iVar13 = 0;
              uVar16 = 4;
            }
            else {
              uVar14 = uVar14 << 4 | 0x208006;
              iVar13 = 5;
              uVar16 = 3;
            }
            *puVar11 = uVar16;
            param_2[0x5e] = uVar14;
            param_2[0x5f] = 0;
            param_2[0x60] = iVar13;
          }
          else {
            if (uVar16 == 0x80) {
              *puVar11 = 2;
              pbVar5 = (byte *)(param_2 + uVar18 + 0x24);
            }
            else {
              if (uVar16 != 0xf0) goto LAB_1005253c;
              *puVar11 = 2;
              pbVar5 = (byte *)(param_2 + 0x28);
            }
            iVar13 = FUN_1006f1e0(*(int *)pbVar5,(char)uVar14,1,4,0,0);
            param_2[0x5e] = iVar13;
            bVar3 = *pbVar5;
LAB_100524d8:
            param_2[0x5f] = (uint)bVar3;
          }
LAB_1005253c:
          if (bVar7) {
            for (uVar14 = *puVar11; uVar14 != 0; uVar14 = uVar14 - 1) {
              param_2[uVar14 + 0x5e] = puVar11[uVar14];
            }
            param_2[0x5e] = param_2[0x5e] | 0x80000000;
            param_2[0x5f] = 0x41;
            *puVar11 = *puVar11 + 1;
          }
        }
        FUN_1006fbd8(local_68,(*piVar1 + *local_5c * 2 + param_2[0x4d] + 1 & 0x7f) << 0x18 | 0x2032,
                     param_2 + 0x4d,piVar1,local_5c,local_5c);
      }
      else {
        if (((uint)local_4c & 0xdf0) == 0) goto LAB_10052e78;
        if ((char)local_6e == '\0') {
          uVar17 = 0x70;
        }
        else {
          uVar17 = FUN_1004d288(param_2,0,0,0,0,7,0);
          uVar17 = uVar17 & 0xffff;
        }
        uVar14 = FUN_1004d458(param_2,local_6c,uVar17,0,0,0,7,local_68);
        uVar15 = uVar14 & 0xffff;
        if (((uVar14 & 0x2000) != 0) || ((uVar14 & 0xf00) == 0x100)) {
          uVar15 = uVar14 & 0xffff;
          if ((uVar14 & 0xf0) != 0xf0 && (uVar14 & 0xf0) != 0x80) {
            uVar15 = FUN_1004d288(param_2,0,0,0,0,7,0);
            uVar15 = uVar15 & 0xffff;
          }
          FUN_1004d750(param_2,uVar14 & 0xffff,uVar15,0,7,local_68,1);
        }
        uVar16 = FUN_1004d288(param_2,uVar15,0,0,0,7,0);
        uVar4 = (undefined2)uVar16;
        local_6e = uVar4;
        FUN_1004cd90(param_2,uVar4,7);
        uVar8 = FUN_1004d3d0(param_2,uVar16 & 0xffff,0xa4);
        FUN_1004cea0(param_2,0,uVar15,uVar8,1,0);
        uVar8 = FUN_1004d3d0(param_2,uVar4,0xa4);
        uVar14 = FUN_1006e8f0(param_2,param_2 + 0x5e,param_2[0x12],0x80,uVar8,0,0);
        puVar11 = (uint *)(param_2 + 0x5d);
        local_60 = param_2 + 0x4d;
        piVar1 = param_2 + 0x55;
        *puVar11 = uVar14;
        local_5c = puVar11;
        local_58 = piVar1;
        local_54 = piVar1;
        local_50 = puVar11;
        local_4c = local_60;
        FUN_1006fbd8(local_68,(uVar14 + *local_60 + *piVar1 + 1 & 0x7f) << 0x18,local_60,piVar1,
                     puVar11,0);
        FUN_1004cd90(param_2,uVar17,7);
        iVar13 = FUN_1006ee00(param_2,param_2 + 0x56,uVar12,0,0,0);
        *piVar1 = iVar13;
        bVar7 = false;
        uVar14 = FUN_1004d3d0(param_2,uVar17,0xa4);
        if ((uVar16 & 0xff0) != 0x100) {
          bVar7 = (uVar16 & 0xf00) != 0x600 && ((uVar16 & 0xf00) - 0x100 & 0xfffffaff) == 0;
        }
        uVar14 = uVar14 & 0xff;
        if ((uVar16 & 0x1000) != 0) {
          uVar14 = 0xff;
        }
        uVar18 = uVar16 & 0xf0;
        uVar2 = uVar16 & 0xf;
        if (uVar18 < 0x40) {
          if ((uVar18 - 0x20 & 0xffffffef) == 0) {
            iVar13 = 0x78;
            if (uVar18 == 0x20) {
              iVar13 = 0x6c;
            }
            uVar18 = *(uint *)(iVar13 + uVar2 * 4 + (int)param_2);
            if (uVar18 == 0) goto LAB_10052ac8;
            *puVar11 = 2;
            iVar13 = FUN_1006f1e0(uVar18,0,1,4,0,0);
            param_2[0x5e] = iVar13;
            uVar18 = uVar18 & 0xff;
LAB_10052a6c:
            param_2[0x5f] = uVar18;
            goto LAB_10052a74;
          }
          if (uVar18 != 0) {
            if (uVar18 != 0x10) goto LAB_10052a74;
            *puVar11 = 2;
            param_2[0x5e] = uVar14 << 4 | 0x100006;
            uVar18 = (uint)*(byte *)(param_2 + uVar2 + 0x21);
            goto LAB_10052a6c;
          }
LAB_10052ac8:
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
          if (!bVar7) {
            fVar21 = fVar20;
          }
          bVar7 = uVar14 == 0xff;
          uVar14 = 5;
          if (bVar7) {
            uVar14 = 2;
          }
          *puVar11 = uVar14;
          iVar13 = 0x4000;
          if (bVar7) {
            iVar13 = 0x4001;
          }
          iVar19 = 0x4006;
          if (bVar7) {
            iVar19 = iVar13;
          }
          param_2[0x5e] = iVar19;
          param_2[0x62] = (int)fVar21;
          param_2[0x61] = (int)fVar21;
          param_2[0x60] = (int)fVar21;
          param_2[0x5f] = (int)fVar21;
        }
        else {
          if (uVar18 < 0x41) {
            *puVar11 = 2;
            param_2[0x5e] = uVar14 << 4 | 0x101006;
            param_2[0x5f] = 2;
          }
          else {
            if (uVar18 != 0x50) {
              if (uVar18 == 0x80) {
                pbVar5 = (byte *)(param_2 + uVar2 + 0x24);
              }
              else {
                if (uVar18 != 0xf0) goto LAB_10052a74;
                pbVar5 = (byte *)(param_2 + 0x28);
              }
              *puVar11 = 2;
              iVar13 = FUN_1006f1e0(*(int *)pbVar5,(char)uVar14,1,4,0,0);
              param_2[0x5e] = iVar13;
              uVar18 = (uint)*pbVar5;
              goto LAB_10052a6c;
            }
            param_2[2] = param_2[2] | 1;
            if (*param_2 == 0x51) {
              param_2[0x61] = 5;
              uVar14 = uVar14 << 4 | 0x308006;
              iVar13 = 0;
              uVar16 = 4;
            }
            else {
              uVar14 = uVar14 << 4 | 0x208006;
              iVar13 = 5;
              uVar16 = 3;
            }
            *puVar11 = uVar16;
            param_2[0x5e] = uVar14;
            param_2[0x5f] = 0;
            param_2[0x60] = iVar13;
          }
LAB_10052a74:
          if (bVar7) {
            for (uVar14 = *puVar11; uVar14 != 0; uVar14 = uVar14 - 1) {
              param_2[uVar14 + 0x5e] = puVar11[uVar14];
            }
            param_2[0x5e] = param_2[0x5e] | 0x80000000;
            param_2[0x5f] = 0x41;
            *puVar11 = *puVar11 + 1;
          }
        }
        bVar7 = false;
        uVar14 = FUN_1004d3d0(param_2,uVar17,0xa4);
        piVar1 = param_2 + 0x65;
        if ((uVar15 & 0xff0) != 0x100) {
          bVar7 = (uVar15 & 0xf00) != 0x600 && ((uVar15 & 0xf00) - 0x100 & 0xfffffaff) == 0;
        }
        uVar14 = uVar14 & 0xff;
        if ((uVar15 & 0x1000) != 0) {
          uVar14 = 0xff;
        }
        uVar16 = uVar15 & 0xf0;
        uVar18 = uVar15 & 0xf;
        local_48 = piVar1;
        if (uVar16 < 0x40) {
          if ((uVar16 - 0x20 & 0xffffffef) == 0) {
            iVar13 = 0x78;
            if (uVar16 == 0x20) {
              iVar13 = 0x6c;
            }
            uVar16 = *(uint *)(iVar13 + uVar18 * 4 + (int)param_2);
            if (uVar16 == 0) goto LAB_10052d90;
            *piVar1 = 2;
            iVar13 = FUN_1006f1e0(uVar16,0,1,4,0,0);
            param_2[0x66] = iVar13;
            uVar16 = uVar16 & 0xff;
LAB_10052d34:
            param_2[0x67] = uVar16;
            goto LAB_10052d3c;
          }
          if ((uVar15 & 0xf0) != 0) {
            if (uVar16 != 0x10) goto LAB_10052d3c;
            *piVar1 = 2;
            param_2[0x66] = uVar14 << 4 | 0x100006;
            uVar16 = (uint)*(byte *)(param_2 + uVar18 + 0x21);
            goto LAB_10052d34;
          }
LAB_10052d90:
          fVar21 = -0.5;
          if ((uVar15 & 0xf00) != 0x300) {
            fVar21 = 0.0;
          }
          fVar20 = 1.0;
          if ((uVar15 & 0xf00) != 0x100) {
            fVar20 = fVar21;
          }
          if ((uVar15 & 0x2000) != 0) {
            fVar20 = fVar20 * 255.0;
          }
          fVar21 = -fVar20;
          if (!bVar7) {
            fVar21 = fVar20;
          }
          bVar7 = uVar14 == 0xff;
          iVar13 = 5;
          if (bVar7) {
            iVar13 = 2;
          }
          *piVar1 = iVar13;
          iVar13 = 0x4000;
          if (bVar7) {
            iVar13 = 0x4001;
          }
          iVar19 = 0x4006;
          if (bVar7) {
            iVar19 = iVar13;
          }
          param_2[0x66] = iVar19;
          param_2[0x6a] = (int)fVar21;
          param_2[0x69] = (int)fVar21;
          param_2[0x68] = (int)fVar21;
          param_2[0x67] = (int)fVar21;
        }
        else {
          if (uVar16 < 0x41) {
            *piVar1 = 2;
            param_2[0x66] = uVar14 << 4 | 0x101006;
            param_2[0x67] = 2;
          }
          else {
            if (uVar16 != 0x50) {
              if (uVar16 == 0x80) {
                *piVar1 = 2;
                pbVar5 = (byte *)(param_2 + uVar18 + 0x24);
              }
              else {
                if (uVar16 != 0xf0) goto LAB_10052d3c;
                *piVar1 = 2;
                pbVar5 = (byte *)(param_2 + 0x28);
              }
              iVar13 = FUN_1006f1e0(*(int *)pbVar5,(char)uVar14,1,4,0,0);
              param_2[0x66] = iVar13;
              uVar16 = (uint)*pbVar5;
              goto LAB_10052d34;
            }
            param_2[2] = param_2[2] | 1;
            if (*param_2 == 0x51) {
              param_2[0x69] = 5;
              uVar14 = uVar14 << 4 | 0x308006;
              iVar19 = 0;
              iVar13 = 4;
            }
            else {
              uVar14 = uVar14 << 4 | 0x208006;
              iVar19 = 5;
              iVar13 = 3;
            }
            *piVar1 = iVar13;
            param_2[0x66] = uVar14;
            param_2[0x67] = 0;
            param_2[0x68] = iVar19;
          }
LAB_10052d3c:
          if (bVar7) {
            for (iVar13 = *piVar1; iVar13 != 0; iVar13 = iVar13 + -1) {
              param_2[iVar13 + 0x66] = piVar1[iVar13];
            }
            param_2[0x66] = param_2[0x66] | 0x80000000;
            param_2[0x67] = 0x41;
            *piVar1 = *piVar1 + 1;
          }
        }
        FUN_1006fbd8(local_68,(*local_58 + *local_5c + *local_48 + *local_4c + 1 & 0x7f) << 0x18 |
                              0x2032,local_60,local_54,local_50,local_48);
        FUN_1004d390(param_2,local_6e);
      }
      if (uVar15 != local_6c && uVar15 != uVar17) {
        FUN_1004d390(param_2,uVar15);
      }
    }
  }
LAB_10052f60:
  if (local_70 != '\0') {
    FUN_1006e870(param_2,uVar12);
  }
switchD_10051ac0_default:
  return uVar17;
}


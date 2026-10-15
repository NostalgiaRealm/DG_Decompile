/*
 * FUN_1800670e0 at 1800670e0
 * undefined FUN_1800670e0(void)
 * Address ranges: 1800670e0-18006901f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1800670e0(undefined8 param_1,uint *param_2,longlong param_3,uint *param_4,
                    undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint *puVar16;
  undefined8 uVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  char cVar22;
  char cVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  uint *in_stack_fffffffffffffea0;
  uint7 uVar27;
  undefined4 uVar28;
  undefined8 in_stack_fffffffffffffeb8;
  undefined8 uVar29;
  undefined4 uVar30;
  uint local_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  uint local_f0;
  uint uStack_ec;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  longlong lStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint local_b0;
  undefined1 local_ac;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint local_90 [4];
  ulonglong local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffeb8 >> 0x20);
  param_2[0xd0] = 0;
  param_2[0x13c] = 0xffffffff;
  uVar11 = *param_4;
  uVar15 = uVar11 & 0xffff;
  uVar26 = (ulonglong)uVar15;
  uVar27 = (uint7)((ulonglong)in_stack_fffffffffffffea0 >> 8);
  puVar16 = param_4;
  local_d0 = param_2;
  lStack_c8 = param_3;
  if (uVar15 - 0x16 < 3) {
    uVar11 = param_2[0xcc] | 0x10;
    if ((param_4[1] >> 0x10 & 1) != 0) {
      puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0x10000,2,0,param_2,param_3,0,
                                      (ulonglong)uVar27 << 8);
      in_stack_fffffffffffffea0 = param_2 + 0x108;
      param_1 = FUN_1800f58b8(param_2,param_3,uVar11,0x101,param_2 + 0xd0,
                              ((byte)((byte)param_2[0xfd] >> 4) & 3) << 6 |
                              (byte)param_2[0xfd] & 0x3f | 0x100,param_2 + 0xfc,
                              ((byte)((byte)param_2[0x109] >> 4) & 3) << 6 |
                              (byte)param_2[0x109] & 0x3f | 0x100,in_stack_fffffffffffffea0,0);
    }
    puVar21 = param_2 + 0x108;
    if ((param_4[1] >> 0x11 & 1) != 0) {
      puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0x20000,2,1,param_2,param_3,0,
                                      (ulonglong)in_stack_fffffffffffffea0 & 0xffffffffffffff00);
      in_stack_fffffffffffffea0 = puVar21;
      param_1 = FUN_1800f58b8(param_2,param_3,uVar11,0x102,param_2 + 0xd0,
                              ((byte)((byte)param_2[0xfd] >> 4) & 3) << 6 |
                              (byte)param_2[0xfd] & 0x3f | 0x100,param_2 + 0xfc,
                              ((byte)((byte)param_2[0x109] >> 4) & 3) << 6 |
                              (byte)param_2[0x109] & 0x3f | 0x100,puVar21,0);
    }
    if (((param_4[1] >> 0x12 & 1) != 0) && (uVar15 - 0x16 < 2)) {
      puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0x40000,2,2,param_2,param_3,0,
                                      (ulonglong)in_stack_fffffffffffffea0 & 0xffffffffffffff00);
      in_stack_fffffffffffffea0 = puVar21;
      param_1 = FUN_1800f58b8(param_2,param_3,uVar11,0x104,param_2 + 0xd0,
                              ((byte)((byte)param_2[0xfd] >> 4) & 3) << 6 |
                              (byte)param_2[0xfd] & 0x3f | 0x100,param_2 + 0xfc,
                              ((byte)((byte)param_2[0x109] >> 4) & 3) << 6 |
                              (byte)param_2[0x109] & 0x3f | 0x100,puVar21,0);
    }
    if (((param_4[1] >> 0x13 & 1) != 0) && (uVar15 == 0x16)) {
      puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0x80000,2,3,param_2,param_3,0,
                                      (ulonglong)in_stack_fffffffffffffea0 & 0xffffffffffffff00);
      FUN_1800f58b8(param_2,param_3,uVar11,0x108,param_2 + 0xd0,
                    ((byte)((byte)param_2[0xfd] >> 4) & 3) << 6 | (byte)param_2[0xfd] & 0x3f | 0x100
                    ,param_2 + 0xfc,
                    ((byte)((byte)param_2[0x109] >> 4) & 3) << 6 | (byte)param_2[0x109] & 0x3f |
                    0x100,puVar21,0);
    }
    goto LAB_180068f70;
  }
  if ((uVar15 < 0x24) && ((0x800000002U >> (uVar26 & 0x3f) & 1) != 0)) {
    param_2[0x13c] = 0;
    puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0xf0000,1,0,param_2,param_3,0,
                                    CONCAT71(uVar27,uVar15 == 0x23));
    uVar15 = param_2[0x13c];
    if ((uVar15 == 0xffffffff) || (uVar15 == 0)) {
      FUN_1800f58b8(param_2,param_3,param_2[0xcc] | 0x36,param_2 + 0xd0,param_2 + 0xfc,0);
    }
    else {
      local_b0 = param_2[0xc3];
      local_ac = (undefined1)(uVar15 >> 0x10);
      if (local_b0 == 0) {
        local_b0 = FUN_1800f42d0(param_2,4,1);
        param_2[0xc3] = local_b0;
      }
      uStack_98 = 0xffffffff;
      uStack_94 = 0xffffffff;
      local_a0 = 0xffffffff;
      uStack_9c = 0xffffffff;
      bVar9 = FUN_1800f5ea8(0xe4,(char)param_2[0xd1]);
      if ((param_2[0x13c] & 0xf000000) == 0xd000000) {
        FUN_1800f58b8(param_2,param_3,param_2[0xcc] | 0x37,param_2 + 0xd0,&local_b0,
                      (ulonglong)bVar9 | 0x100,param_2 + 0xd0,param_2 + 0xfc,0);
      }
      else {
        FUN_1800f58b8(param_2,param_3,param_2[0xcc] | 0x37,param_2 + 0xd0,&local_b0,param_2 + 0xfc,
                      (ulonglong)bVar9 | 0x100,param_2 + 0xd0,0);
      }
    }
LAB_18006725c:
    param_2[0x13c] = 0xffffffff;
    goto LAB_180068f70;
  }
  if (uVar15 - 2 < 2) {
    puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0xf0000,2,0,param_2,param_3,0,
                                    (ulonglong)uVar27 << 8);
    if (uVar15 == 3) {
      param_2[0x108] = param_2[0x108] ^ 0x80000000;
    }
    uVar15 = param_2[0xcc];
LAB_180068d4c:
    puVar20 = param_2 + 0xfc;
    puVar21 = param_2 + 0x108;
LAB_180068d54:
    puVar19 = param_2 + 0xd0;
  }
  else {
    if (uVar15 - 8 < 2) {
      puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0xf0000,2,0,param_2,param_3,0,
                                      (ulonglong)uVar27 << 8);
      bVar8 = uVar15 == 8;
      uVar15 = 0x10;
LAB_180068cc8:
      if (!bVar8) {
        uVar15 = uVar15 + 1;
      }
      uVar15 = uVar15 | param_2[0xcc];
      goto LAB_180068d4c;
    }
    if (uVar15 - 10 < 2) {
      puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0xf0000,2,0,param_2,param_3,0,
                                      (ulonglong)uVar27 << 8);
      bVar8 = uVar15 == 10;
      uVar15 = 0x33;
      goto LAB_180068cc8;
    }
    if (uVar15 - 0x14 < 2) {
      uVar11 = param_2[0xcc] | 0x11;
      if ((param_4[1] >> 0x10 & 1) != 0) {
        in_stack_fffffffffffffea0 = (uint *)((ulonglong)uVar27 << 8);
        puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0x10000,2,0,param_2,param_3,0,
                                        in_stack_fffffffffffffea0);
        param_1 = FUN_1800f58b8(param_2,param_3,uVar11,0x101,param_2 + 0xd0,param_2 + 0xfc,
                                param_2 + 0x108,0);
      }
      if ((param_4[1] >> 0x11 & 1) != 0) {
        in_stack_fffffffffffffea0 =
             (uint *)((ulonglong)in_stack_fffffffffffffea0 & 0xffffffffffffff00);
        puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0x20000,2,1,param_2,param_3,0,
                                        in_stack_fffffffffffffea0);
        param_1 = FUN_1800f58b8(param_2,param_3,uVar11,0x102,param_2 + 0xd0,param_2 + 0xfc,
                                param_2 + 0x108,0);
      }
      if ((param_4[1] >> 0x12 & 1) != 0) {
        in_stack_fffffffffffffea0 =
             (uint *)((ulonglong)in_stack_fffffffffffffea0 & 0xffffffffffffff00);
        puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0x40000,2,2,param_2,param_3,0,
                                        in_stack_fffffffffffffea0);
        param_1 = FUN_1800f58b8(param_2,param_3,uVar11,0x104,param_2 + 0xd0,param_2 + 0xfc,
                                param_2 + 0x108,0);
      }
      if (((param_4[1] >> 0x13 & 1) == 0) || (uVar15 != 0x14)) goto LAB_180068f70;
      uVar26 = (ulonglong)in_stack_fffffffffffffea0 & 0xffffffffffffff00;
      puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0x80000,2,3,param_2,param_3,0,uVar26);
      puVar19 = param_2 + 0x108;
      puVar21 = param_2 + 0xfc;
      puVar20 = param_2 + 0xd0;
      puVar18 = (uint *)0x108;
LAB_180067e84:
      FUN_1800f58b8(param_2,param_3,uVar11,puVar18,puVar20,puVar21,puVar19,0,uVar26);
      goto LAB_180068f70;
    }
    if (uVar15 < 0x27) {
      if ((0x4008000000U >> (uVar26 & 0x3f) & 1) == 0) goto LAB_180067488;
      if (3 < param_2[0x13e]) goto LAB_180068f70;
      *(undefined1 *)((longlong)param_2 + (ulonglong)param_2[0x13e] + 0x50c) = 0;
      if (param_2[(ulonglong)param_2[0x13e] + 0xb9] == 0) {
        uVar11 = FUN_1800f42d0(param_2,4,1);
        param_2[(ulonglong)param_2[0x13e] + 0xb9] = uVar11;
      }
      uVar11 = param_2[0x13e];
      uVar13 = param_2[(ulonglong)uVar11 + 0xb9];
      param_2[0x13e] = uVar11 + 1;
      if (uVar15 == 0x1b) {
        uVar15 = param_4[2];
        param_2[(ulonglong)uVar11 + 0x13f] = param_2[0x13d];
        param_2[0x13d] = param_2[0x13e];
        param_2[(ulonglong)(param_2[0x13e] - 1) + 0xbd] = 0xffffffff;
        param_4 = param_4 + 1;
      }
      else {
        uVar15 = param_4[1];
      }
      uVar15 = uVar15 & 0x7ff;
      uVar28 = (undefined4)((ulonglong)in_stack_fffffffffffffea0 >> 0x20);
      if (((char)param_2[0x3e] == '\0') ||
         (lVar25 = *(longlong *)(param_2 + 0x40),
         *(char *)(lVar25 + (ulonglong)uVar15 + 400) == '\0')) {
        uVar29 = CONCAT44(uVar14,0xff);
        uVar17 = CONCAT44(uVar28,param_2[0x2b]);
        FUN_1800f5730(param_2,param_3,0x25,uVar13,7,param_2[0x22],0xe4,(ulonglong)uVar15 << 4,uVar17
                      ,0xe4,0xff,uVar29,0x7f,0,0);
        uVar14 = (undefined4)((ulonglong)uVar17 >> 0x20);
        uVar30 = (undefined4)((ulonglong)uVar29 >> 0x20);
      }
      else {
        uVar15 = uVar15 * 4;
        uVar30 = 0;
        iVar1 = *(int *)(lVar25 + (ulonglong)(uVar15 + 3) * 4 + 0x1a0);
        iVar2 = *(int *)(lVar25 + (ulonglong)(uVar15 + 2) * 4 + 0x1a0);
        iVar3 = *(int *)(lVar25 + (ulonglong)(uVar15 + 1) * 4 + 0x1a0);
        iVar12 = 0;
        if (iVar1 < 0) {
          iVar12 = iVar1;
        }
        iVar4 = *(int *)(lVar25 + (ulonglong)uVar15 * 4 + 0x1a0);
        iVar1 = 0x7f;
        if (iVar2 < 0x7f) {
          iVar1 = iVar2;
        }
        iVar2 = 0xff;
        if (iVar3 < 0xff) {
          iVar2 = iVar3;
        }
        iVar3 = 0xff;
        if (iVar4 < 0xff) {
          iVar3 = iVar4;
        }
        uVar17 = CONCAT44(uVar28,iVar2);
        FUN_1800f5730(param_2,param_3,0x36,uVar13,7,param_2[0x2b],0xe4,iVar3,uVar17,iVar1,iVar12,0);
        uVar14 = (undefined4)((ulonglong)uVar17 >> 0x20);
      }
      FUN_1800f5730(param_2,param_3,0x24,uVar13,7,uVar13,0xa4,param_2[0x2b],CONCAT44(uVar14,0xe4),0,
                    0,CONCAT44(uVar30,0xffffff80),0,0);
      FUN_1800f5730(param_2,param_3,0x30,0);
      uVar13 = uVar13 | 0x10000000;
      uVar17 = 3;
LAB_180067800:
      FUN_1800f5730(param_2,param_3,uVar17,0xffffffff,uVar13,0,0);
LAB_180067880:
      puVar16 = param_4 + 2;
      goto LAB_180068f70;
    }
    if (uVar15 < 0x28) {
LAB_180067488:
      if ((0x8020000000U >> (uVar26 & 0x3f) & 1) == 0) goto LAB_180067598;
      if (param_2[0x13e] < 5) {
        uVar11 = param_2[0x13e] - 1;
        param_2[0x13e] = uVar11;
        uVar17 = 0;
        uVar11 = param_2[(ulonglong)uVar11 + 0xb9];
        FUN_1800f5730(param_2,param_3,0x1e,uVar11,1,uVar11,0,param_2[0x2a],0xe4,0xffffffff,0);
        if (uVar15 == 0x1d) {
          FUN_1800f5730(param_2,param_3,0x1e,uVar11,2,uVar11,0x55,uVar11,0xaa,0,uVar17);
          param_2[0x13d] = param_2[(ulonglong)param_2[0x13e] + 0x13f];
        }
        FUN_1800f5730(param_2,param_3,0x16,0);
        if (*(char *)((longlong)param_2 + (ulonglong)param_2[0x13e] + 0x50c) == '\0') {
          FUN_1800f4370(param_2,uVar11);
          param_2[(ulonglong)param_2[0x13e] + 0xb9] = 0;
        }
        uVar15 = param_2[0x13e];
        if (uVar15 != 0) {
          *(byte *)((longlong)param_2 + (ulonglong)(uVar15 - 1) + 0x50c) =
               *(byte *)((longlong)param_2 + (ulonglong)(uVar15 - 1) + 0x50c) |
               *(byte *)((longlong)param_2 + (ulonglong)uVar15 + 0x50c);
        }
      }
LAB_180068440:
      puVar16 = param_4 + 1;
      goto LAB_180068f70;
    }
LAB_180067598:
    if (uVar15 - 0x5b < 2) {
      puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0xf0000,1,0,param_2,param_3,0,
                                      (ulonglong)uVar27 << 8);
      uVar11 = 0xb;
      if (uVar15 != 0x5b) {
        uVar11 = 0xc;
      }
      uVar15 = param_2[0xcc];
LAB_180067b94:
      uVar11 = uVar11 | uVar15;
      puVar21 = param_2 + 0xfc;
      puVar20 = param_2 + 0xd0;
      goto LAB_180067ba8;
    }
    if (uVar15 == 0x1e) {
      uVar17 = 0x2c;
LAB_1800677f0:
      uVar13 = param_4[1] & 0x7ff | 0x20410a00;
      goto LAB_180067800;
    }
    if (uVar15 == 0x20) {
      puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0xf0000,2,0,param_2,param_3,0,
                                      CONCAT71(uVar27,1));
      local_b0 = param_2[0x2a];
      local_a0 = 0;
      uStack_94 = 0xffffffff;
      local_ac = 0xe4;
      uStack_9c = 0xffffffff;
      uStack_98 = 0xffffffff;
      uVar14 = FUN_1800f42d0(param_2,4,0);
      local_d0._0_5_ = CONCAT14(1,uVar14);
      uStack_b8 = 0xffffffff;
      uStack_b4 = 0xffffffff;
      local_c0 = 0xffffffff;
      uStack_bc = 0xffffffff;
      FUN_1800f58b8(param_2,param_3,0x2f,&local_d0,param_2 + 0xfc,0);
      FUN_1800f58b8(param_2,param_3,0x38,&local_d0,0x100,&local_d0,param_2 + 0x108,0);
      FUN_1800f58b8(param_2,param_3,0x39,0x102,&local_d0,0x100,&local_d0,0x100,&local_d0,0);
      FUN_1800f58b8(param_2,param_3,0x37,&local_d0,0x155,&local_d0,&local_b0,0x100,&local_d0,0);
      puVar21 = (uint *)&local_d0;
      puVar20 = (uint *)&DAT_00000100;
      uVar15 = param_2[0xcc] | 0x19;
      goto LAB_180068d54;
    }
    if (uVar15 == 0x21) {
      puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0xf0000,2,0,param_2,param_3,0,
                                      (ulonglong)uVar27 << 8);
      local_110 = FUN_1800f42d0(param_2,4,0);
      bVar9 = (byte)param_2[0x109];
      uStack_10c = CONCAT31(uStack_10c._1_3_,7);
      uStack_f8 = 0xffffffffffffffff;
      local_100 = 0xffffffffffffffff;
      FUN_1800f58b8(param_2,param_3,0x38,&local_110,
                    ((byte)((byte)param_2[0xfd] >> 4) & 3) << 6 | (byte)param_2[0xfd] & 0x3f | 0x100
                    ,param_2 + 0x108,
                    ((bVar9 & 0xc | bVar9 >> 2 & 3) << 2 | bVar9 & 3) << 2 | bVar9 >> 4 & 3 | 0x100,
                    param_2 + 0x108,0);
      bVar9 = (byte)param_2[0x109];
      local_110 = local_110 ^ 0x80000000;
      bVar5 = (byte)param_2[0xfd];
      FUN_1800f58b8(param_2,param_3,param_2[0xcc] | 0x32,param_2 + 0xd0,
                    ((bVar5 & 0xfffffc03 | (bVar5 & 3) << 2) << 2 | bVar5 >> 4 & 3) << 2 |
                    bVar5 >> 2 & 3 | 0x100,param_2 + 0x108,
                    ((bVar9 & 0xc | bVar9 >> 2 & 3) << 2 | bVar9 & 3) << 2 | bVar9 >> 4 & 3 | 0x100,
                    param_2 + 0x108,0x152,&local_110,0);
      goto LAB_180068f70;
    }
    if (uVar15 == 0x24) {
      puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0xf0000,1,0,param_2,param_3,0,
                                      (ulonglong)uVar27 << 8);
      local_110 = FUN_1800f42d0(param_2,4,0);
      uStack_10c = CONCAT31(uStack_10c._1_3_,1);
      local_f0 = param_2[0x2a];
      uStack_f8 = 0xffffffffffffffff;
      local_100 = 0xffffffffffffffff;
      uStack_ec = CONCAT31(uStack_ec._1_3_,0xe4);
      local_e0 = 0xffffffff7f800000;
      uStack_d8 = 0xffffffffffffffff;
      FUN_1800f58b8(param_2,param_3,0x10,&local_110,param_2 + 0xfc,param_2 + 0xfc,0);
      FUN_1800f58b8(param_2,param_3,0x44,&local_110,0x100,&local_110,0);
      FUN_1800f58b8(param_2,param_3,0x27,0x102,&local_110,0x100,&local_110,&local_f0,0);
      uVar26 = 0;
      FUN_1800f58b8(param_2,param_3,1,&local_110,0x100,&local_110,0x155,&local_110,0);
      puVar19 = param_2 + 0xfc;
      puVar21 = &local_110;
      puVar20 = (uint *)&DAT_00000100;
      uVar11 = param_2[0xcc] | 0x38;
LAB_180067e80:
      puVar18 = param_2 + 0xd0;
      goto LAB_180067e84;
    }
    if (uVar15 != 0x25) {
      if (uVar15 == 0x28) {
        bVar9 = (byte)param_2[0x14c];
        uVar11 = param_4[1];
        cVar22 = *(char *)((longlong)param_2 + (ulonglong)bVar9 + 0x510);
        uVar13 = (uVar11 & 0x1800 | uVar11 >> 0x14 & 0x7ff) >> 8;
        uVar15 = uVar11 & 0xf000000;
        if (uVar13 == 0xe) {
          uVar13 = uVar11 & 0x7ff;
          if (((char)param_2[0x3e] == '\0') ||
             (*(char *)(*(longlong *)(param_2 + 0x40) + (ulonglong)uVar13 + 0x2a0) == '\0')) {
            uVar14 = 0x4001f;
            if (uVar15 == 0xd000000) {
              uVar14 = 0x1f;
            }
            FUN_1800f5730(param_2,param_3,uVar14,0xffffffff,param_2[0x1e] | 0x10000000,uVar11 & 3,
                          (uVar13 >> 2) * 0x10 + 0xe80,0);
            bVar9 = (char)param_2[0x14c] + 1;
            *(byte *)(param_2 + 0x14c) = bVar9;
            *(char *)((longlong)param_2 + (ulonglong)bVar9 + 0x510) = cVar22;
          }
          else {
            if ((cVar22 != '\x02') &&
               (cVar22 = '\x01',
               *(int *)(*(longlong *)(param_2 + 0x40) + (ulonglong)uVar13 * 4 + 0x2b0) == 0)) {
              cVar22 = '\x02';
            }
            *(byte *)(param_2 + 0x14c) = bVar9 + 1;
            *(char *)((longlong)param_2 + (ulonglong)(byte)(bVar9 + 1) + 0x510) = cVar22;
            *(bool *)(param_3 + 0x18) = cVar22 != '\x02';
          }
        }
        else if (uVar13 == 0x13) {
          uVar13 = param_2[0xc3];
          if (uVar13 == 0) {
            uVar13 = FUN_1800f42d0(param_2,4,1,param_4,param_5,uVar11 >> 0x10 & 3);
            param_2[0xc3] = uVar13;
          }
          uVar14 = 0x4001f;
          if (uVar15 == 0xd000000) {
            uVar14 = 0x1f;
          }
          FUN_1800f5730(param_2,param_3,uVar14,0xffffffff,uVar13 | 0x10000000);
          uVar10 = 2;
          if (cVar22 != '\x02') {
            uVar10 = 0;
          }
          bVar9 = (char)param_2[0x14c] + 1;
          *(byte *)(param_2 + 0x14c) = bVar9;
          *(undefined1 *)((longlong)param_2 + (ulonglong)bVar9 + 0x510) = uVar10;
        }
        goto LAB_180067880;
      }
      if (uVar15 == 0x29) {
        puVar16 = (uint *)FUN_180065f48(param_1,param_4 + 1,2,0,param_2,param_3,0,0);
        local_f0 = FUN_180066fc8(puVar16,uVar11,param_2,param_3,0);
        local_f0 = local_f0 | 0x10000000;
        uStack_ec = uStack_ec & 0xffffff00;
        uStack_d8 = 0xffffffffffffffff;
        local_e0 = 0xffffffffffffffff;
        FUN_1800f58b8(param_2,param_3,0x4001f,param_2 + 0x134,&local_f0,0);
        bVar9 = (byte)param_2[0x14c];
        cVar22 = *(char *)((longlong)param_2 + (ulonglong)bVar9 + 0x510);
        *(byte *)(param_2 + 0x14c) = bVar9 + 1;
        uVar10 = 2;
        if (cVar22 != '\x02') {
          uVar10 = 0;
        }
        *(undefined1 *)((longlong)param_2 + (ulonglong)(byte)(bVar9 + 1) + 0x510) = uVar10;
        goto LAB_180068f70;
      }
      if (uVar15 == 0x2a) {
        bVar9 = (byte)param_2[0x14c];
        cVar22 = *(char *)((longlong)param_2 + (ulonglong)bVar9 + 0x510);
        if (cVar22 == '\0') {
          uVar17 = 0x12;
LAB_180068430:
          FUN_1800f5730(param_2,param_3,uVar17,0);
          goto LAB_180068440;
        }
        cVar23 = '\x01';
        if (cVar22 == '\x01') {
          cVar23 = '\x02';
        }
        if (*(char *)((longlong)param_2 + (ulonglong)bVar9 + 0x50f) != '\x02') {
          cVar22 = cVar23;
        }
        *(char *)((longlong)param_2 + (ulonglong)bVar9 + 0x510) = cVar22;
      }
      else {
        if (uVar15 != 0x2b) {
          if (uVar15 == 0x2c) {
            uVar17 = 2;
            goto LAB_180068430;
          }
          if (uVar15 == 0x2d) {
            puVar16 = (uint *)FUN_180065f48(param_1,param_4 + 1,2,0,param_2,param_3,0,0);
            local_f0 = FUN_180066fc8(puVar16,uVar11,param_2,param_3,0);
            local_f0 = local_f0 | 0x10000000;
            uStack_ec = uStack_ec & 0xffffff00;
            puVar21 = &local_f0;
            uStack_d8 = 0xffffffffffffffff;
            local_e0 = 0xffffffffffffffff;
            puVar20 = param_2 + 0x134;
            uVar11 = 0x40003;
LAB_180067ba8:
            FUN_1800f58b8(param_2,param_3,uVar11,puVar20,puVar21,0);
            goto LAB_180068f70;
          }
          if (uVar15 == 0x41) {
            puVar16 = (uint *)FUN_1800666c8(param_1,uVar11,param_4 + 1,param_2,param_3);
            cVar22 = (char)param_2[0xd1];
            if (cVar22 != '\0') {
              if (param_2[0x13c] - 1 < 0xfffffffe) {
                lVar25 = 1;
                if ((param_2[0x13c] & 0xf000000) == 0xd000000) {
                  lVar25 = 2;
                }
              }
              else {
                lVar25 = 0;
              }
              local_110 = FUN_1800f42d0(param_2,4,0);
              local_b0 = param_2[0x2a];
              uStack_10c = CONCAT31(uStack_10c._1_3_,cVar22);
              uStack_f8 = 0xffffffffffffffff;
              local_100 = 0xffffffffffffffff;
              local_ac = 0xe4;
              uStack_9c = 0xffffffff;
              uStack_98 = 0xffffffff;
              local_a0 = 0;
              uStack_94 = 0xffffffff;
              FUN_1800f58b8(param_2,param_3,(&DAT_18022c428)[lVar25],&local_110,param_2 + 0xfc,
                            &local_b0,0);
              iVar12 = (&DAT_18022c418)[lVar25];
              if (iVar12 != -1) {
                uVar10 = FUN_1800f5ea8(param_2[0x13c] >> 0x10 & 0xff,(char)param_2[0xd1]);
                local_f0 = param_2[0xc3];
                if (local_f0 == 0) {
                  local_f0 = FUN_1800f42d0(param_2,4,1);
                  param_2[0xc3] = local_f0;
                }
                uStack_ec = CONCAT31(uStack_ec._1_3_,uVar10);
                uStack_d8 = 0xffffffffffffffff;
                local_e0 = 0xffffffffffffffff;
                FUN_1800f58b8(param_2,param_3,iVar12,&local_110,
                              (ulonglong)(byte)param_2[0xfd] | 0x100,&local_110,&local_f0,0);
              }
              bVar9 = (byte)param_2[0xd1];
              local_90[0] = (uint)bVar9;
              uVar15 = (local_90[0] & 0xaaaaaaaa) >> 1 | (local_90[0] & 0x55555555) << 1;
              uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
              uVar26 = LZCOUNT((uVar15 >> 4 | (uVar15 & 0xf0f0f0f) << 4) << 0x18);
              uVar15 = (bVar9 & 0xaaaaaaaa) >> 1 | (bVar9 & 0x55555555) << 1;
              uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
              lVar24 = LZCOUNT((uVar15 >> 4 | (uVar15 & 0xf0f0f0f) << 4) << 0x18);
              uVar15 = (uint)lVar24;
              if ((1 - (uVar15 >> 5) & 0xff) != 0) {
                *(byte *)((longlong)local_90 + (longlong)((int)uVar15 >> 3)) =
                     *(byte *)((longlong)local_90 + (longlong)((int)uVar15 >> 3)) &
                     ((byte)(1 << (ulonglong)(uVar15 & 7)) ^ 0xff);
                local_d0 = puVar16;
                while( true ) {
                  if ((uint)lVar24 != (uint)uVar26) {
                    FUN_1800f58b8(param_2,param_3,(&DAT_18022c408)[lVar25],
                                  (ulonglong)(byte)(1 << (ulonglong)((uint)uVar26 & 0x1f)) | 0x100,
                                  &local_110,(ulonglong)(byte)(&DAT_18022c414)[lVar24] | 0x100,
                                  &local_110,(ulonglong)(byte)(&DAT_18022c414)[uVar26] | 0x100,
                                  &local_110,0);
                  }
                  uVar15 = (local_90[0] & 0xaaaaaaaa) >> 1 | (local_90[0] & 0x55555555) << 1;
                  uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
                  uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
                  uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
                  lVar24 = LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10);
                  uVar15 = (uint)lVar24;
                  puVar16 = local_d0;
                  if ((1 - (uVar15 >> 5) & 0xff) == 0) break;
                  *(byte *)((longlong)local_90 + (longlong)((int)uVar15 >> 3)) =
                       *(byte *)((longlong)local_90 + (longlong)((int)uVar15 >> 3)) &
                       ((byte)(1 << (ulonglong)(uVar15 & 7)) ^ 0xff);
                }
              }
              local_110 = local_110 | 0x10000000;
              FUN_1800f58b8(param_2,param_3,((&DAT_18022c3f8)[lVar25] & 1) << 0x12 | 0xd,
                            param_2 + 0x134,uVar26 | 0x100,&local_110,0);
            }
            goto LAB_18006725c;
          }
          if (uVar15 != 0x42) {
            if (uVar15 != 0x58) {
              if (uVar15 == 0x5a) {
                uVar26 = (ulonglong)uVar27 << 8;
                puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0xf0000,3,0,param_2,param_3,0,
                                                uVar26);
                uVar10 = (undefined1)param_2[0xd1];
                local_f0 = FUN_1800f42d0(param_2,4,0);
                uStack_ec = CONCAT31(uStack_ec._1_3_,uVar10);
                uStack_d8 = 0xffffffffffffffff;
                local_e0 = 0xffffffffffffffff;
                FUN_1800f58b8(param_2,param_3,0xf,&local_f0,param_2 + 0xfc,param_2 + 0x108,0);
                bVar9 = FUN_1800f5ea8(0xe4,(char)param_2[0xd1]);
                uVar11 = param_2[0xcc];
                puVar21 = &local_f0;
                puVar20 = (uint *)((ulonglong)bVar9 | 0x100);
              }
              else {
                if (uVar15 != 4) {
                  if (uVar15 == 5) {
                    puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0xf0000,2,0,param_2,param_3,
                                                    0,(ulonglong)uVar27 << 8);
                    uVar15 = param_2[0xcc] | 0x38;
                    goto LAB_180068d4c;
                  }
                  if (uVar15 == 6) {
                    puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0xf0000,1,0,param_2,param_3,
                                                    0,(ulonglong)uVar27 << 8);
                    local_110 = FUN_1800f42d0(param_2,4,0);
                    uStack_10c = CONCAT31(uStack_10c._1_3_,2);
                    local_f0 = param_2[0x2b];
                    uStack_f8 = 0xffffffffffffffff;
                    local_100 = 0xffffffffffffffff;
                    uStack_ec = CONCAT31(uStack_ec._1_3_,0xe4);
                    local_c0 = 0x7cf0bdc2;
                    uStack_bc = 0x7cf0bdc2;
                    uStack_b8 = 0x7cf0bdc2;
                    uStack_b4 = 0x7cf0bdc2;
                    uStack_78 = *(undefined8 *)(param_2 + 0xfe);
                    uStack_68 = *(undefined8 *)(param_2 + 0x102);
                    uStack_70 = *(undefined8 *)(param_2 + 0x100);
                    local_e0 = 0;
                    uStack_d8 = 0;
                    local_d0._0_5_ = CONCAT14(0xe4,local_f0);
                    uStack_58 = *(undefined8 *)(param_2 + 0x106);
                    local_60 = *(undefined8 *)(param_2 + 0x104);
                    local_80 = *(ulonglong *)(param_2 + 0xfc) & 0xffffffff7fffffff | 0x8000000;
                    FUN_1800f58b8(param_2,param_3,0x31,&local_110,&local_f0,&local_80,0);
                    iVar12 = func_0x000180213038(*param_2);
                    if (iVar12 - 0x40U < 2) {
                      local_b0 = param_2[0x2a];
                      local_ac = 0xe4;
                      uStack_94 = 0xffffffff;
                      local_a0 = 0x3f800000;
                      uStack_9c = 0xffffffff;
                      uStack_98 = 0xffffffff;
                      FUN_1800f58b8(param_2,param_3,0xe,0x101,&local_110,&local_b0,param_2 + 0xfc,0)
                      ;
                    }
                    else {
                      FUN_1800f58b8(param_2,param_3,0x81,0x101,&local_110,param_2 + 0xfc,0);
                    }
                    FUN_1800f58b8(param_2,param_3,param_2[0xcc] | 0x37,param_2 + 0xd0,0x155,
                                  &local_110,0x100,&local_110,&local_d0,0);
                    goto LAB_180068f70;
                  }
                  if (uVar15 == 7) {
                    puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0xf0000,1,0,param_2,param_3,
                                                    1,CONCAT71(uVar27,1));
                    local_110 = FUN_1800f42d0(param_2,4,0);
                    uStack_10c = CONCAT31(uStack_10c._1_3_,2);
                    local_b0 = param_2[0x2a];
                    uStack_f8 = 0xffffffffffffffff;
                    local_100 = 0xffffffffffffffff;
                    local_ac = 0xe4;
                    local_a0 = 0x7f800000;
                    uStack_9c = 0xffffffff;
                    uStack_98 = 0xffffffff;
                    uStack_94 = 0xffffffff;
                    local_c0 = 0x7cf0bdc2;
                    local_d0._0_5_ = CONCAT14(0xe4,local_b0);
                    uStack_bc = 0xffffffff;
                    uStack_b8 = 0xffffffff;
                    uStack_b4 = 0xffffffff;
                    FUN_1800f58b8(param_2,param_3,0x44,&local_110,param_2 + 0xfc,0);
                    FUN_1800f58b8(param_2,param_3,0x20,0x101,&local_110,0x155,&local_110,&local_b0,0
                                 );
                    FUN_1800f58b8(param_2,param_3,param_2[0xcc] | 0x37,param_2 + 0xd0,0x100,
                                  &local_110,&local_d0,0x155,&local_110,0);
                    goto LAB_180068f70;
                  }
                  if (uVar15 == 0xe) {
                    puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0xf0000,1,0,param_2,param_3,
                                                    0,(ulonglong)uVar27 << 8);
                    uVar15 = 0x19;
                  }
                  else {
                    if (uVar15 == 0xf) {
                      puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0xf0000,1,0,param_2,
                                                      param_3,1,CONCAT71(uVar27,1));
                      local_110 = FUN_1800f42d0(param_2,4,0);
                      local_b0 = param_2[0x2a];
                      uStack_10c = CONCAT31(uStack_10c._1_3_,2);
                      uStack_f8 = 0xffffffffffffffff;
                      local_100 = 0xffffffffffffffff;
                      local_ac = 0xe4;
                      local_a0 = 0xff800000;
                      uStack_9c = 0xffffffff;
                      uStack_98 = 0xffffffff;
                      uStack_94 = 0xffffffff;
                      local_c0 = 0xfcf0bdc2;
                      local_d0._0_5_ = CONCAT14(0xe4,local_b0);
                      uStack_bc = 0xffffffff;
                      uStack_b8 = 0xffffffff;
                      uStack_b4 = 0xffffffff;
                      FUN_1800f58b8(param_2,param_3,0x2f,&local_110,param_2 + 0xfc,0);
                      FUN_1800f58b8(param_2,param_3,0x20,0x101,&local_110,0x155,&local_110,&local_b0
                                    ,0);
                      FUN_1800f58b8(param_2,param_3,param_2[0xcc] | 0x37,param_2 + 0xd0,0x100,
                                    &local_110,&local_d0,0x155,&local_110,0);
                      goto LAB_180068f70;
                    }
                    if (uVar15 == 0x12) {
                      puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0xf0000,3,0,param_2,
                                                      param_3,0,(ulonglong)uVar27 << 8);
                      local_ac = (undefined1)param_2[0xd1];
                      local_b0 = FUN_1800f42d0(param_2,4,0);
                      uStack_98 = 0xffffffff;
                      uStack_94 = 0xffffffff;
                      local_a0 = 0xffffffff;
                      uStack_9c = 0xffffffff;
                      param_2[0x114] = param_2[0x114] ^ 0x80000000;
                      FUN_1800f58b8(param_2,param_3,0,&local_b0,param_2 + 0x108,param_2 + 0x114,0);
                      param_2[0x114] = param_2[0x114] ^ 0x80000000;
                      bVar9 = FUN_1800f5ea8(0xe4,(char)param_2[0xd1]);
                      FUN_1800f58b8(param_2,param_3,param_2[0xcc] | 0x32,param_2 + 0xd0,
                                    param_2 + 0xfc,(ulonglong)bVar9 | 0x100,&local_b0,
                                    param_2 + 0x114,0);
                      goto LAB_180068f70;
                    }
                    if (uVar15 != 0x13) {
                      if (uVar15 == 0x5d) {
                        puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0xf0000,4,0,param_2,
                                                        param_3,0,(ulonglong)uVar27 << 8);
                        uVar17 = 0x49;
                      }
                      else {
                        if (uVar15 == 0x5e) {
                          puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0xf0000,2,0,param_2,
                                                          param_3,0,(ulonglong)uVar27 << 8);
                          FUN_180066fc8(puVar16,uVar11,param_2,param_3,1);
                          goto LAB_180068f70;
                        }
                        if (uVar15 != 0x5f) {
                          if (uVar15 != 0x60) {
                            if (uVar15 != 0x19) {
                              if (uVar15 == 0x1a) {
                                uVar11 = param_4[2];
                                uVar13 = (uVar11 & 0x1800 | uVar11 >> 0x14 & 0x7ff) >> 8;
                                uVar15 = uVar11 & 0xf000000;
                                if (uVar13 == 0xe) {
                                  uVar13 = uVar11 & 0x7ff;
                                  uVar6 = param_4[1] & 0x7ff | 0x20410a00;
                                  if (((char)param_2[0x3e] == '\0') ||
                                     (*(char *)(*(longlong *)(param_2 + 0x40) + (ulonglong)uVar13 +
                                               0x2a0) == '\0')) {
                                    FUN_180069058(&local_d0);
                                    uVar14 = 0x40005;
                                    if (uVar15 == 0xd000000) {
                                      uVar14 = 5;
                                    }
                                    FUN_1800f5730(param_2,param_3,uVar14,0xffffffff,
                                                  param_2[0x1e] | 0x10000000,uVar11 & 3,
                                                  (uVar13 >> 2) * 0x10 + 0xe80,uVar6,0,0);
                                  }
                                  else {
                                    bVar7 = *(int *)(*(longlong *)(param_2 + 0x40) +
                                                     (ulonglong)uVar13 * 4 + 0x2b0) == 0;
                                    bVar8 = !bVar7;
                                    if (uVar15 == 0xd000000) {
                                      bVar8 = bVar7;
                                    }
                                    if (bVar8) {
                                      FUN_180069058(&local_d0);
                                      FUN_1800f5730(param_2,param_3,4,0xffffffff,uVar6,0,0);
                                    }
                                  }
                                }
                                else if (uVar13 == 0x13) {
                                  FUN_180069058(&local_d0);
                                  uVar11 = param_2[0xc3];
                                  if (uVar11 == 0) {
                                    uVar11 = FUN_1800f42d0(param_2,4,1);
                                    param_2[0xc3] = uVar11;
                                  }
                                  uVar14 = 0x40005;
                                  if (uVar15 == 0xd000000) {
                                    uVar14 = 5;
                                  }
                                  FUN_1800f5730(param_2,param_3,uVar14,0xffffffff,
                                                uVar11 | 0x10000000);
                                }
                                puVar16 = param_4 + 3;
                              }
                              goto LAB_180068f70;
                            }
                            FUN_180069058(&local_d0);
                            uVar17 = 4;
                            goto LAB_1800677f0;
                          }
                          local_f0 = param_2[0xc3];
                          uVar15 = param_4[1] & 0xf000000;
                          bVar9 = (byte)(param_4[1] >> 0x10) & 3;
                          if (local_f0 == 0) {
                            local_f0 = FUN_1800f42d0(param_2,4,1);
                            param_2[0xc3] = local_f0;
                          }
                          local_f0 = local_f0 | 0x10000000;
                          uStack_ec = CONCAT31(uStack_ec._1_3_,bVar9);
                          uVar14 = 0x40003;
                          if (uVar15 == 0xd000000) {
                            uVar14 = 3;
                          }
                          uStack_d8 = 0xffffffffffffffff;
                          local_e0 = 0xffffffffffffffff;
                          FUN_1800f58b8(param_2,param_3,uVar14,param_2 + 0x134,&local_f0,0);
                          goto LAB_180067880;
                        }
                        puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0xf0000,2,0,param_2,
                                                        param_3,0,(ulonglong)uVar27 << 8);
                        puVar21 = param_2 + 0x114;
                        local_f0 = 0;
                        uVar17 = 0x48;
                        uStack_ec = uStack_ec & 0xffffff00;
                        *(undefined8 *)(param_2 + 0x116) = *(undefined8 *)(param_2 + 0xfe);
                        *(undefined8 *)puVar21 = *(undefined8 *)(param_2 + 0xfc);
                        *(undefined8 *)(param_2 + 0x11a) = *(undefined8 *)(param_2 + 0x102);
                        *(undefined8 *)(param_2 + 0x118) = *(undefined8 *)(param_2 + 0x100);
                        *(undefined8 *)(param_2 + 0x11e) = *(undefined8 *)(param_2 + 0x106);
                        *(undefined8 *)(param_2 + 0x11c) = *(undefined8 *)(param_2 + 0x104);
                        *puVar21 = *puVar21 | 0x10000000;
                        *(undefined1 *)(param_2 + 0x115) = 3;
                        *(undefined8 *)(param_2 + 0x122) = uStack_e8;
                        *(ulonglong *)(param_2 + 0x120) = (ulonglong)uStack_ec << 0x20;
                        param_2[0x126] = 0xffffffff;
                        param_2[0x127] = 0xffffffff;
                        param_2[0x124] = 0xffffffff;
                        param_2[0x125] = 0xffffffff;
                      }
                      puVar21 = (uint *)0x0;
                      goto LAB_180068170;
                    }
                    puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0xf0000,1,0,param_2,param_3,
                                                    0,(ulonglong)uVar27 << 8);
                    uVar15 = 0x1a;
                  }
                  uVar11 = param_2[0xcc];
                  goto LAB_180067b94;
                }
                uVar26 = (ulonglong)uVar27 << 8;
                puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0xf0000,3,0,param_2,param_3,0,
                                                uVar26);
                puVar21 = param_2 + 0x108;
                puVar20 = param_2 + 0xfc;
                uVar11 = param_2[0xcc] | 0x32;
              }
              puVar19 = param_2 + 0x114;
              goto LAB_180067e80;
            }
            puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0xf0000,3,0,param_2,param_3,0,
                                            (ulonglong)uVar27 << 8);
            if ((param_2[0xfc] & 0x88000000) != 0x8000000) {
              uVar10 = (undefined1)param_2[0xd1];
              local_f0 = FUN_1800f42d0(param_2,4,0);
              uStack_ec = CONCAT31(uStack_ec._1_3_,uVar10);
              uStack_d8 = 0xffffffffffffffff;
              local_e0 = 0xffffffffffffffff;
              uVar26 = func_0x0001802132c8((char)param_2[0xd1]);
              FUN_18005dd50(0,uVar26,&local_b0,param_2,uVar26 & 0xffffffff);
              FUN_1800f58b8(param_2,param_3,0x1d,&local_f0,param_2 + 0xfc,&local_b0,0);
              bVar9 = FUN_1800f5ea8(0xe4,(char)param_2[0xd1]);
              FUN_1800f58b8(param_2,param_3,param_2[0xcc] | 0x37,param_2 + 0xd0,
                            (ulonglong)bVar9 | 0x100,&local_f0,param_2 + 0x108,param_2 + 0x114,0);
              goto LAB_180068f70;
            }
            puVar21 = param_2 + 0xfc;
            puVar20 = param_2 + 0xd0;
            uVar11 = param_2[0xcc] | 0x36;
            goto LAB_180067ba8;
          }
          puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0xf0000,2,0,param_2,param_3,0,
                                          (ulonglong)uVar27 << 8);
          if ((uVar11 >> 0x10 & 1) == 0) {
            puVar20 = param_2 + 0x114;
            local_f0 = 0;
            puVar19 = param_2 + 0x120;
            uStack_ec = uStack_ec & 0xffffff00;
            puVar21 = (uint *)0x0;
            if ((uVar11 >> 0x11 & 1) == 0) {
              *(undefined8 *)(param_2 + 0x122) = uStack_e8;
              *(ulonglong *)puVar19 = (ulonglong)uStack_ec << 0x20;
              param_2[0x126] = 0xffffffff;
              param_2[0x127] = 0xffffffff;
              param_2[0x124] = 0xffffffff;
              param_2[0x125] = 0xffffffff;
              *(undefined8 *)(param_2 + 0x116) = *(undefined8 *)(param_2 + 0x122);
              *(undefined8 *)puVar20 = *(undefined8 *)puVar19;
              *(undefined8 *)(param_2 + 0x11a) = *(undefined8 *)(param_2 + 0x126);
              *(undefined8 *)(param_2 + 0x118) = *(undefined8 *)(param_2 + 0x124);
              goto LAB_18006816c;
            }
            uVar17 = 0x4a;
            *(undefined8 *)(param_2 + 0x116) = *(undefined8 *)(param_2 + 0xfe);
            *(undefined8 *)puVar20 = *(undefined8 *)(param_2 + 0xfc);
            *(undefined8 *)(param_2 + 0x11a) = *(undefined8 *)(param_2 + 0x102);
            *(undefined8 *)(param_2 + 0x118) = *(undefined8 *)(param_2 + 0x100);
            *(undefined8 *)(param_2 + 0x11e) = *(undefined8 *)(param_2 + 0x106);
            *(undefined8 *)(param_2 + 0x11c) = *(undefined8 *)(param_2 + 0x104);
            *puVar20 = *puVar20 | 0x10000000;
            *(undefined1 *)(param_2 + 0x115) = 3;
            *(undefined8 *)(param_2 + 0x122) = uStack_e8;
            *(ulonglong *)puVar19 = (ulonglong)uStack_ec << 0x20;
            param_2[0x126] = 0xffffffff;
            param_2[0x127] = 0xffffffff;
            param_2[0x124] = 0xffffffff;
            param_2[0x125] = 0xffffffff;
          }
          else {
            local_110 = FUN_1800f42d0(param_2,4,1);
            uStack_10c = CONCAT31(uStack_10c._1_3_,0xe4);
            uStack_f8 = 0xffffffffffffffff;
            local_100 = 0xffffffffffffffff;
            uVar15 = (uint)(byte)((byte)param_2[0xfd] >> 6);
            FUN_1800f58b8(param_2,param_3,0xe,0x10f,&local_110,param_2 + 0xfc,
                          (byte)param_2[0xfd] & 0xc0 | (uVar15 | uVar15 << 2) << 2 | uVar15 | 0x100,
                          param_2 + 0xfc,0);
            uStack_ec = uStack_ec & 0xffffff00;
            puVar21 = &local_110;
            *(undefined8 *)(param_2 + 0xfe) = uStack_108;
            *(ulonglong *)(param_2 + 0xfc) = CONCAT44(uStack_10c,local_110);
            *(undefined8 *)(param_2 + 0x102) = uStack_f8;
            *(undefined8 *)(param_2 + 0x100) = local_100;
            *(undefined8 *)(param_2 + 0x122) = uStack_e8;
            *(ulonglong *)(param_2 + 0x120) = (ulonglong)uStack_ec << 0x20;
            param_2[0x126] = 0xffffffff;
            param_2[0x127] = 0xffffffff;
            param_2[0x124] = 0xffffffff;
            param_2[0x125] = 0xffffffff;
            *(undefined8 *)(param_2 + 0x116) = *(undefined8 *)(param_2 + 0x122);
            *(undefined8 *)(param_2 + 0x114) = *(undefined8 *)(param_2 + 0x120);
            *(undefined8 *)(param_2 + 0x11a) = *(undefined8 *)(param_2 + 0x126);
            *(undefined8 *)(param_2 + 0x118) = *(undefined8 *)(param_2 + 0x124);
LAB_18006816c:
            local_f0 = 0;
            uVar17 = 0x45;
          }
LAB_180068170:
          FUN_1800667f0(param_1,param_2,param_3,uVar17,param_5,puVar21);
          goto LAB_180068f70;
        }
        if (*(char *)((longlong)param_2 + (ulonglong)(byte)param_2[0x14c] + 0x510) == '\0') {
          FUN_1800f5730(param_2,param_3,0x15,0);
        }
        bVar9 = (char)param_2[0x14c] - 1;
        *(byte *)(param_2 + 0x14c) = bVar9;
        cVar22 = *(char *)((longlong)param_2 + (ulonglong)bVar9 + 0x510);
      }
      *(bool *)(param_3 + 0x18) = cVar22 != '\x02';
      goto LAB_180068440;
    }
    uVar14 = 1;
    if (*(char *)(*(longlong *)(param_2 + 0x40) + 0x126d) != '\x03') {
      uVar14 = 3;
    }
    puVar16 = (uint *)FUN_180065b00(param_1,param_4 + 1,0xf0000,uVar14,0,param_2,param_3,0,
                                    (ulonglong)uVar27 << 8);
    uVar15 = param_2[0xcc];
    if ((param_4[1] & 0xf0000) == 0x10000) {
      local_f0 = param_2[0x2c];
      uStack_ec = (uint)uStack_ec._1_3_ << 8;
      puVar21 = param_2 + 0xfc;
      puVar20 = param_2 + 0xd0;
      uStack_d8 = 0xffffffffffffffff;
      local_e0 = 0xffffffffffffffff;
      puVar19 = &local_f0;
      uVar15 = uVar15 | 0x4d;
    }
    else {
      if ((param_4[1] & 0xf0000) != 0x20000) {
        FUN_1800f58b8(param_2,param_3,uVar15 | 0x4d,0x102,param_2 + 0xd0,0x101,param_2 + 0xd0,
                      param_2 + 0xfc,0);
        goto LAB_180068f70;
      }
      local_f0 = param_2[0x2c];
      uStack_ec = (uint)uStack_ec._1_3_ << 8;
      puVar21 = param_2 + 0xfc;
      puVar20 = &local_f0;
      uStack_d8 = 0xffffffffffffffff;
      local_e0 = 0xffffffffffffffff;
      puVar19 = param_2 + 0xd0;
      uVar15 = uVar15 | 0x4d;
    }
  }
  FUN_1800f58b8(param_2,param_3,uVar15,puVar19,puVar20,puVar21,0);
LAB_180068f70:
  if (param_2[0x13c] != 0xffffffff) {
    uVar15 = param_2[0xc3];
    uVar10 = (undefined1)(param_2[0x13c] >> 0x10);
    if (uVar15 == 0) {
      uVar15 = FUN_1800f42d0(param_2,4,1);
      param_2[0xc3] = uVar15;
    }
    uStack_ec = CONCAT31(uStack_ec._1_3_,uVar10);
    uStack_d8 = 0xffffffffffffffff;
    local_e0 = 0xffffffffffffffff;
    bVar8 = (param_2[0x13c] & 0xf000000) == 0xd000000;
    lVar25 = 0x3a0;
    if (bVar8) {
      lVar25 = 0x3d0;
    }
    lVar24 = 0x3d0;
    if (bVar8) {
      lVar24 = 0x3a0;
    }
    local_f0 = uVar15;
    FUN_1800f58b8(param_2,param_3,0x37,param_2 + 0xdc,&local_f0,(longlong)param_2 + lVar24,
                  (longlong)param_2 + lVar25,0);
    FUN_1800f4370(param_2,param_2[0xd0]);
    param_2[0xd0] = 0;
  }
  return puVar16;
}


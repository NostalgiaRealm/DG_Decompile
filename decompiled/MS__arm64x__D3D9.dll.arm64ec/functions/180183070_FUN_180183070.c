/*
 * FUN_180183070 at 180183070
 * undefined FUN_180183070(void)
 * Address ranges: 180183070-18018451f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_180183070(undefined8 param_1,uint *param_2,longlong param_3,longlong param_4,
                    undefined1 *param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  uint *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  char cVar16;
  char cVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined1 uVar20;
  byte *pbVar21;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  uint *local_100;
  undefined8 local_f8;
  uint *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  uint local_b0;
  undefined1 local_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  byte local_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uVar2 = *param_2;
  uVar18 = uVar2 & 0xffff;
  uVar19 = local_120._4_4_;
  if (uVar18 < 0x27) {
    if ((0x4008000000U >> ((ulonglong)uVar18 & 0x3f) & 1) != 0) {
      uVar2 = *(uint *)(param_3 + 0x2ec);
      if (3 < uVar2) {
        return param_2;
      }
      uVar3 = *(undefined4 *)(param_3 + (ulonglong)uVar2 * 4 + 0x2b4);
      *(uint *)(param_3 + 0x2ec) = uVar2 + 1;
      if (uVar18 == 0x1b) {
        uVar18 = param_2[2];
        *(uint *)(param_3 + 0x2f0) = uVar2 + 1;
        param_2 = param_2 + 1;
      }
      else {
        uVar18 = param_2[1];
      }
      uVar18 = uVar18 & 0x7ff;
      if ((*(char *)(param_3 + 0xdc) == '\0') ||
         (lVar15 = *(longlong *)(param_3 + 0x10),
         *(char *)(lVar15 + (ulonglong)uVar18 + 0x48c5) == '\0')) {
        local_d8 = 0;
        uStack_d0 = 0;
        local_e0 = CONCAT44(local_e0._4_4_,0x7f);
        local_e8 = CONCAT44(local_e8._4_4_,0xff);
        local_108 = (uint *)((ulonglong)uVar18 << 4);
        local_f0 = (uint *)CONCAT44(local_f0._4_4_,0xff);
        local_f8 = CONCAT44(local_f8._4_4_,0xe4);
        local_110 = (uint *)CONCAT44(local_110._4_4_,0xe4);
        local_100 = (uint *)CONCAT44(local_100._4_4_,*(undefined4 *)(param_3 + 0xbc));
        local_120 = (uint *)CONCAT44(uVar19,7);
        local_118 = (uint *)CONCAT44(local_118._4_4_,*(undefined4 *)(param_3 + 0x2dc));
        FUN_180214c88(param_3 + 0x20,param_4,0x25,uVar3,&local_120,0x58);
      }
      else {
        uVar18 = uVar18 * 4;
        local_e8 = 0;
        iVar4 = *(int *)(lVar15 + (ulonglong)(uVar18 + 3) * 4 + 0x48d8);
        local_110 = (uint *)CONCAT44(local_110._4_4_,0xe4);
        local_120 = (uint *)CONCAT44(uVar19,7);
        iVar5 = *(int *)(lVar15 + (ulonglong)(uVar18 + 2) * 4 + 0x48d8);
        iVar1 = 0;
        if (iVar4 < 0) {
          iVar1 = iVar4;
        }
        local_f0 = (uint *)CONCAT44(local_f0._4_4_,iVar1);
        iVar4 = *(int *)(lVar15 + (ulonglong)(uVar18 + 1) * 4 + 0x48d8);
        iVar6 = *(int *)(lVar15 + (ulonglong)uVar18 * 4 + 0x48d8);
        iVar1 = 0x7f;
        if (iVar5 < 0x7f) {
          iVar1 = iVar5;
        }
        local_f8 = CONCAT44(local_f8._4_4_,iVar1);
        iVar1 = 0xff;
        if (iVar4 < 0xff) {
          iVar1 = iVar4;
        }
        iVar4 = 0xff;
        if (iVar6 < 0xff) {
          iVar4 = iVar6;
        }
        local_100 = (uint *)CONCAT44(local_100._4_4_,iVar1);
        local_108 = (uint *)CONCAT44(local_108._4_4_,iVar4);
        local_118 = (uint *)CONCAT44(local_118._4_4_,*(undefined4 *)(param_3 + 0xbc));
        FUN_180214c88(param_3 + 0x20,param_4,0x36,uVar3,&local_120,0x40);
      }
      local_e0 = 0;
      local_d8 = 0;
      local_e8 = CONCAT44(local_e8._4_4_,0xffffff80);
      local_f8 = 0;
      local_f0 = (uint *)0x0;
      local_100 = (uint *)CONCAT44(local_100._4_4_,0xe4);
      local_118 = (uint *)CONCAT44(local_118._4_4_,uVar3);
      local_108 = (uint *)CONCAT44(local_108._4_4_,*(undefined4 *)(param_3 + 0xbc));
      local_110 = (uint *)CONCAT44(local_110._4_4_,0xa4);
      local_120._0_4_ = 7;
      FUN_180214c88(param_3 + 0x20,param_4,0x24,uVar3,&local_120,0x50);
      FUN_180214c88(param_3 + 0x20,param_4,0x30,0,&local_120,0);
      local_118 = (uint *)0x0;
      local_110 = (uint *)0x0;
      local_120 = (uint *)(CONCAT44(local_120._4_4_,uVar3) | 0x10000000);
      FUN_180214c88(param_3 + 0x20,param_4,3,0xffffffff,&local_120,0x18);
      return param_2 + 2;
    }
LAB_1801832b8:
    if ((0x8020000000U >> ((ulonglong)uVar18 & 0x3f) & 1) == 0) {
      if (uVar18 == 0x1e) {
        local_118 = (uint *)0x0;
        local_110 = (uint *)0x0;
        local_120 = (uint *)(CONCAT44(uVar19,param_2[1]) & 0xffffffff000007ff | 0x20410a00);
        FUN_180214c88(param_3 + 0x20,param_4,0x2c,0xffffffff,&local_120,0x18);
        goto LAB_1801844fc;
      }
      if (uVar18 == 0x1f) goto LAB_180183c98;
      if (uVar18 == 0x20) {
        local_120 = (uint *)CONCAT71(local_120._1_7_,1);
        puVar13 = (uint *)FUN_18018b280(param_1,param_2 + 1,0xf0000,2,0,param_3,param_4,0);
        local_b0 = FUN_180213760(param_3 + 0x20,4,0);
        local_60 = *(uint *)(param_3 + 0xb8);
        local_ac = 1;
        uStack_98 = 0xffffffffffffffff;
        local_a0 = 0xffffffffffffffff;
        uStack_4c = 0xffffffff;
        uStack_48 = 0xffffffff;
        local_120 = (uint *)(param_3 + 0x3d0);
        local_118 = (uint *)0x0;
        local_5c = 0;
        local_50 = 0;
        uStack_44 = 0xffffffff;
        FUN_180214e10(param_3 + 0x20,param_4,0x2f,&local_b0,&local_120,0x10);
        local_110 = (uint *)(param_3 + 0x400);
        local_108 = (uint *)0x0;
        local_118 = &local_b0;
        local_120 = (uint *)0x100;
        FUN_180214e10(param_3 + 0x20,param_4,0x38,&local_b0,&local_120,0x20);
        local_100 = &local_b0;
        local_f8 = 0;
        local_110 = &local_b0;
        local_108 = (uint *)0x100;
        local_120 = &local_b0;
        local_118 = (uint *)0x100;
        FUN_180214e10(param_3 + 0x20,param_4,0x39,0x102,&local_120,0x30);
        local_100 = &local_b0;
        local_f8 = 0;
        local_110 = &local_60;
        local_108 = (uint *)0x100;
        local_118 = &local_b0;
        local_120 = (uint *)0x155;
        FUN_180214e10(param_3 + 0x20,param_4,0x37,&local_b0,&local_120,0x30);
        local_120 = (uint *)(param_3 + 800);
        local_110 = &local_b0;
        local_108 = (uint *)0x0;
        local_118 = (uint *)0x100;
        FUN_18018dcf8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x19,&local_120,0x20);
        return puVar13;
      }
      if (uVar18 == 0x21) {
        local_120 = (uint *)((ulonglong)local_120._1_7_ << 8);
        puVar13 = (uint *)FUN_18018b280(param_1,param_2 + 1,0xf0000,2,0,param_3,param_4,0);
        local_60 = FUN_180213760(param_3 + 0x20,4,0);
        local_5c = 7;
        bVar11 = *(byte *)(param_3 + 0x404);
        uStack_48 = 0xffffffff;
        uStack_44 = 0xffffffff;
        local_50 = 0xffffffff;
        uStack_4c = 0xffffffff;
        local_108 = (uint *)0x0;
        local_118 = (uint *)((ulonglong)(((bVar11 & 0xc | bVar11 >> 2 & 3) << 2 | bVar11 & 3) << 2)
                             | (ulonglong)(bVar11 >> 4) & 3 | 0x100);
        local_120 = (uint *)(param_3 + 0x3d0);
        local_110 = (uint *)(param_3 + 0x400);
        FUN_180214e10(param_3 + 0x20,param_4,0x38,&local_60,&local_120,0x20);
        bVar11 = *(byte *)(param_3 + 0x404);
        local_60 = local_60 | 0x80000000;
        bVar7 = *(byte *)(param_3 + 0x3d4);
        local_118 = (uint *)((ulonglong)
                             (((bVar7 & 0xfffffc03 | (bVar7 & 3) << 2) << 2 | bVar7 >> 4 & 3) << 2)
                             | (ulonglong)(bVar7 >> 2) & 3 | 0x100);
        local_108 = (uint *)((ulonglong)(((bVar11 & 0xc | bVar11 >> 2 & 3) << 2 | bVar11 & 3) << 2)
                             | (ulonglong)(bVar11 >> 4) & 3 | 0x100);
        local_120 = (uint *)(param_3 + 800);
        local_f0 = &local_60;
        local_e8 = 0;
        local_f8 = 0x152;
        local_110 = (uint *)(param_3 + 0x3d0);
        local_100 = (uint *)(param_3 + 0x400);
        FUN_18018dcf8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x32,&local_120,0x40);
        return puVar13;
      }
      if (uVar18 == 0x22) {
        local_120 = (uint *)CONCAT71(local_120._1_7_,1);
        puVar13 = (uint *)FUN_18018b280(param_1,param_2 + 1,0xf0000,3,0,param_3,param_4,0);
        local_b0 = FUN_180213760(param_3 + 0x20,4,1);
        local_ac = 0xf;
        uStack_98 = 0xffffffffffffffff;
        local_a0 = 0xffffffffffffffff;
        local_90._0_5_ = CONCAT14(0xe4,*(undefined4 *)(param_3 + 0xbc));
        local_120 = (uint *)&local_90;
        local_80 = 0;
        uStack_78 = 0;
        local_110 = (uint *)0x0;
        local_118 = (uint *)(param_3 + 0x3d0);
        FUN_180214e10(param_3 + 0x20,param_4,0x31,&local_b0,&local_120,0x18);
        local_b0 = local_b0 | 0x80000000;
        if (*(int *)(param_3 + 0x480) == 0) {
          local_60 = FUN_180213760(param_3 + 0x20,4,0);
          local_118 = (uint *)&local_90;
          local_5c = 0xf;
          uStack_48 = 0xffffffff;
          uStack_44 = 0xffffffff;
          local_50 = 0xffffffff;
          uStack_4c = 0xffffffff;
          local_110 = (uint *)0x0;
          local_120 = (uint *)(param_3 + 0x3d0);
          FUN_180214e10(param_3 + 0x20,param_4,0x31,&local_60,&local_120,0x18);
          local_110 = (uint *)&local_90;
          local_108 = (uint *)0x0;
          local_118 = &local_60;
          local_120 = &local_b0;
          FUN_180214e10(param_3 + 0x20,param_4,0x1e,&local_60,&local_120,0x20);
          local_120 = &local_60;
          local_118 = (uint *)0x0;
          FUN_180214e10(param_3 + 0x20,param_4,0x2b,param_3 + 800,&local_120,0x10);
        }
        else {
          local_120 = &local_b0;
          local_118 = (uint *)0x0;
          FUN_180214e10(param_3 + 0x20,param_4,0x2b,param_3 + 800,&local_120,0x10);
        }
        FUN_180213800(param_3 + 0x20,local_b0);
        return puVar13;
      }
      if (uVar18 == 0x23) {
        *(undefined4 *)(param_3 + 0x484) = 0;
        local_120 = (uint *)CONCAT71(local_120._1_7_,1);
        puVar13 = (uint *)FUN_18018b280(param_1,param_2 + 1,0xf0000,1,0,param_3,param_4,0);
        FUN_18018b6b8(param_1,param_3,param_4);
        return puVar13;
      }
      if (uVar18 == 0x24) {
        local_120 = (uint *)((ulonglong)local_120._1_7_ << 8);
        puVar13 = (uint *)FUN_18018b280(param_1,param_2 + 1,0xf0000,1,0,param_3,param_4,0);
        local_b0 = FUN_180213760(param_3 + 0x20,4,0);
        local_ac = 1;
        lVar15 = param_3 + 0x3d0;
        local_100 = (uint *)0x0;
        uStack_98 = 0xffffffffffffffff;
        local_a0 = 0xffffffffffffffff;
        local_120 = (uint *)((ulonglong)((*(byte *)(param_3 + 0x3d4) >> 4 & 3) << 6) |
                             (ulonglong)*(byte *)(param_3 + 0x3d4) & 0x3f | 0x100);
        local_118 = (uint *)lVar15;
        local_110 = local_120;
        local_108 = (uint *)lVar15;
        FUN_180214e10(param_3 + 0x20,param_4,0x10,&local_b0,&local_120,0x28);
        local_118 = &local_b0;
        local_110 = (uint *)0x0;
        local_120 = (uint *)0x100;
        FUN_180214e10(param_3 + 0x20,param_4,0x44,&local_b0,&local_120,0x18);
        local_60 = *(uint *)(param_3 + 0xb8);
        local_5c = 0xe4;
        local_50 = 0x7f800000;
        uStack_4c = 0xffffffff;
        uStack_48 = 0xffffffff;
        uStack_44 = 0xffffffff;
        local_108 = &local_60;
        local_100 = (uint *)0x0;
        local_110 = &local_b0;
        local_120 = &local_b0;
        local_118 = (uint *)0x100;
        FUN_180214e10(param_3 + 0x20,param_4,0x27,0x102,&local_120,0x28);
        local_108 = &local_b0;
        local_100 = (uint *)0x0;
        local_110 = (uint *)0x155;
        local_118 = &local_b0;
        local_120 = (uint *)0x100;
        FUN_180214e10(param_3 + 0x20,param_4,1,&local_b0,&local_120,0x28);
        local_120 = (uint *)(param_3 + 800);
        local_100 = (uint *)0x0;
        local_110 = &local_b0;
        local_118 = (uint *)0x100;
        local_108 = (uint *)lVar15;
        FUN_18018dcf8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x38,&local_120,0x28);
        return puVar13;
      }
      if (uVar18 == 0x25) {
        local_120 = (uint *)((ulonglong)local_120._1_7_ << 8);
        uVar19 = 1;
        if (*(char *)(*(longlong *)(param_3 + 0x10) + 0x4a6c) != '\x03') {
          uVar19 = 3;
        }
        puVar12 = (uint *)FUN_18018b280(param_1,param_2 + 1,0xf0000,uVar19,0,param_3,param_4,0);
        lVar15 = param_3 + 0x3d0;
        puVar13 = (uint *)(param_3 + 800);
        local_118 = puVar13;
        local_110 = (uint *)lVar15;
        if ((param_2[1] & 0xf0000) == 0x10000) {
          local_60 = *(uint *)(param_3 + 0xc0);
          local_108 = (uint *)0x0;
          local_5c = 0;
          uStack_48 = 0xffffffff;
          uStack_44 = 0xffffffff;
          local_50 = 0xffffffff;
          uStack_4c = 0xffffffff;
          local_120 = &local_60;
          FUN_18018dcf8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x4d,&local_120,0x20);
          return puVar12;
        }
        if ((param_2[1] & 0xf0000) == 0x20000) {
          local_60 = *(uint *)(param_3 + 0xc0);
          local_108 = (uint *)0x0;
          local_5c = 0;
          uStack_48 = 0xffffffff;
          uStack_44 = 0xffffffff;
          local_50 = 0xffffffff;
          uStack_4c = 0xffffffff;
          local_118 = &local_60;
          local_120 = puVar13;
          FUN_18018dcf8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x4d,&local_120,0x20);
          return puVar12;
        }
        if ((*puVar13 >> 0x1e & 1) != 0) {
          local_60 = FUN_180213760(param_3 + 0x20,4,0);
          local_5c = 0x54;
          local_f8 = 0;
          uStack_48 = 0xffffffff;
          uStack_44 = 0xffffffff;
          local_50 = 0xffffffff;
          uStack_4c = 0xffffffff;
          local_108 = &local_60;
          local_110 = (uint *)0x101;
          local_118 = &local_60;
          local_120 = (uint *)0x102;
          local_100 = (uint *)lVar15;
          FUN_18018dcf8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x4d,&local_120,0x30);
          local_118 = &local_60;
          local_110 = (uint *)0x0;
          local_120 = puVar13;
          FUN_18018dcf8(param_1,param_3,param_4,0x36,&local_120,0x18);
          return puVar12;
        }
        local_f8 = 0;
        local_110 = (uint *)0x101;
        local_120 = (uint *)0x102;
        local_108 = puVar13;
        local_100 = (uint *)lVar15;
        FUN_18018dcf8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x4d,&local_120,0x30);
        return puVar12;
      }
      goto LAB_180183b80;
    }
    if (4 < *(uint *)(param_3 + 0x2ec)) goto LAB_18018424c;
    uVar2 = *(uint *)(param_3 + 0x2ec) - 1;
    local_f0 = (uint *)0x0;
    *(uint *)(param_3 + 0x2ec) = uVar2;
    local_110 = (uint *)0x0;
    uVar3 = *(undefined4 *)(param_3 + (ulonglong)uVar2 * 4 + 0x2b4);
    local_f8 = CONCAT44(local_f8._4_4_,0xffffffff);
    local_100 = (uint *)CONCAT44(local_100._4_4_,0xe4);
    local_118 = (uint *)CONCAT44(local_118._4_4_,uVar3);
    local_108 = (uint *)CONCAT44(local_108._4_4_,*(undefined4 *)(param_3 + 0xb8));
    local_120 = (uint *)CONCAT44(uVar19,1);
    FUN_180214c88(param_3 + 0x20,param_4,0x1e,uVar3,&local_120,0x38);
    if (uVar18 == 0x1d) {
      local_f8 = 0;
      local_100 = (uint *)CONCAT44(local_100._4_4_,0xaa);
      local_110 = (uint *)CONCAT44(local_110._4_4_,0x55);
      local_120 = (uint *)CONCAT44(local_120._4_4_,2);
      local_108 = (uint *)CONCAT44(local_108._4_4_,uVar3);
      local_118 = (uint *)CONCAT44(local_118._4_4_,uVar3);
      FUN_180214c88(param_3 + 0x20,param_4,0x1e,uVar3,&local_120,0x30);
    }
    uVar14 = 0x16;
    goto LAB_180184234;
  }
  if (uVar18 < 0x28) goto LAB_1801832b8;
LAB_180183b80:
  if (uVar18 == 0x28) {
    bVar11 = *(byte *)(param_3 + 0x314);
    uVar18 = param_2[1];
    cVar17 = *(char *)((ulonglong)bVar11 + param_3 + 0x2f4);
    uVar2 = (uVar18 & 0x1800 | uVar18 >> 0x14 & 0x7ff) >> 8;
    if (uVar2 == 0xe) {
      uVar2 = uVar18 & 0x7ff;
      if ((*(char *)(param_3 + 0xdc) == '\0') ||
         (*(char *)(*(longlong *)(param_3 + 0x10) + (ulonglong)uVar2 + 0x49d8) == '\0')) {
        local_110 = (uint *)((ulonglong)(uVar2 >> 2) * 0x10 + 0x100);
        local_108 = (uint *)0x0;
        uVar3 = 0x4001f;
        local_118 = (uint *)(CONCAT44(local_118._4_4_,uVar18) & 0xffffffff00000003);
        local_120 = (uint *)(CONCAT44(uVar19,*(undefined4 *)(param_3 + 0x2dc)) | 0x10000000);
        if ((uVar18 & 0xf000000) == 0xd000000) {
          uVar3 = 0x1f;
        }
        FUN_180214c88(param_3 + 0x20,param_4,uVar3,0xffffffff,&local_120,0x20);
        bVar11 = *(char *)(param_3 + 0x314) + 1;
        *(byte *)(param_3 + 0x314) = bVar11;
        *(char *)((ulonglong)bVar11 + param_3 + 0x2f4) = cVar17;
      }
      else {
        if ((cVar17 != '\x02') &&
           (cVar17 = '\x01',
           *(int *)(*(longlong *)(param_3 + 0x10) + (ulonglong)uVar2 * 4 + 0x49e8) == 0)) {
          cVar17 = '\x02';
        }
        *(byte *)(param_3 + 0x314) = bVar11 + 1;
        *(char *)((ulonglong)(byte)(bVar11 + 1) + param_3 + 0x2f4) = cVar17;
        *(bool *)(param_4 + 0x18) = cVar17 != '\x02';
      }
    }
    else if (uVar2 == 0x13) {
      uVar3 = 0x4001f;
      local_110 = (uint *)0x0;
      local_118 = (uint *)(CONCAT44(local_118._4_4_,uVar18 >> 0x10) & 0xffffffff00000003);
      local_120 = (uint *)(CONCAT44(uVar19,*(undefined4 *)(param_3 + 0x2c4)) | 0x10000000);
      if ((uVar18 & 0xf000000) == 0xd000000) {
        uVar3 = 0x1f;
      }
      FUN_180214c88(param_3 + 0x20,param_4,uVar3,0xffffffff,&local_120,0x18);
      uVar20 = 2;
      if (cVar17 != '\x02') {
        uVar20 = 0;
      }
      bVar11 = *(char *)(param_3 + 0x314) + 1;
      *(byte *)(param_3 + 0x314) = bVar11;
      *(undefined1 *)((ulonglong)bVar11 + param_3 + 0x2f4) = uVar20;
    }
LAB_1801844fc:
    return param_2 + 2;
  }
  if (uVar18 == 0x29) {
    puVar13 = (uint *)FUN_180182a88(param_1,param_2 + 1,2,0,param_3,0,0);
    local_60 = FUN_180182f48(puVar13,uVar2,param_3,param_4,0);
    local_60 = local_60 | 0x10000000;
    local_5c = 0;
    local_120 = &local_60;
    local_118 = (uint *)0x0;
    uStack_48 = 0xffffffff;
    uStack_44 = 0xffffffff;
    local_50 = 0xffffffff;
    uStack_4c = 0xffffffff;
    FUN_180214e10(param_3 + 0x20,param_4,0x4001f,param_3 + 0x460,&local_120,0x10);
    bVar11 = *(byte *)(param_3 + 0x314);
    cVar17 = *(char *)((ulonglong)bVar11 + param_3 + 0x2f4);
    *(byte *)(param_3 + 0x314) = bVar11 + 1;
    uVar20 = 2;
    if (cVar17 != '\x02') {
      uVar20 = 0;
    }
    *(undefined1 *)((ulonglong)(byte)(bVar11 + 1) + param_3 + 0x2f4) = uVar20;
    return puVar13;
  }
  if (uVar18 == 0x2a) {
    lVar15 = (ulonglong)*(byte *)(param_3 + 0x314) + param_3;
    cVar17 = *(char *)(lVar15 + 0x2f4);
    if (cVar17 != '\0') {
      cVar16 = '\x01';
      if (cVar17 == '\x01') {
        cVar16 = '\x02';
      }
      if (*(char *)(lVar15 + 0x2f3) != '\x02') {
        cVar17 = cVar16;
      }
      *(char *)(lVar15 + 0x2f4) = cVar17;
      goto LAB_1801842d4;
    }
    uVar14 = 0x12;
  }
  else {
    if (uVar18 == 0x2b) {
      if (*(char *)((ulonglong)*(byte *)(param_3 + 0x314) + param_3 + 0x2f4) == '\0') {
        FUN_180214c88(param_3 + 0x20,param_4,0x15,0,&local_120,0);
      }
      bVar11 = *(char *)(param_3 + 0x314) - 1;
      *(byte *)(param_3 + 0x314) = bVar11;
      cVar17 = *(char *)((ulonglong)bVar11 + param_3 + 0x2f4);
LAB_1801842d4:
      *(bool *)(param_4 + 0x18) = cVar17 != '\x02';
      goto LAB_18018424c;
    }
    if (uVar18 != 0x2c) {
      if (uVar18 == 0x2d) {
        puVar13 = (uint *)FUN_180182a88(param_1,param_2 + 1,2,0,param_3,0,0);
        local_60 = FUN_180182f48(puVar13,uVar2,param_3,param_4,0);
        local_60 = local_60 | 0x10000000;
        local_5c = 0;
        local_120 = &local_60;
        local_118 = (uint *)0x0;
        uStack_48 = 0xffffffff;
        uStack_44 = 0xffffffff;
        local_50 = 0xffffffff;
        uStack_4c = 0xffffffff;
        FUN_180214e10(param_3 + 0x20,param_4,0x40003,param_3 + 0x460,&local_120,0x10);
        return puVar13;
      }
      if (uVar18 == 0x2e) {
        local_120 = (uint *)((ulonglong)local_120._1_7_ << 8);
        puVar13 = (uint *)FUN_18018b280(param_1,param_2 + 1,0xf0000,1,0,param_3,param_4,0);
        lVar15 = param_3 + 800;
        local_120 = (uint *)(param_3 + 0x3d0);
        local_118 = (uint *)0x0;
        FUN_180214e10(param_3 + 0x20,param_4,0x40,lVar15,&local_120,0x10);
        local_110 = (uint *)0x0;
        local_120 = (uint *)0x1e4;
        local_118 = (uint *)lVar15;
        FUN_180214e10(param_3 + 0x20,param_4,0x1b,lVar15,&local_120,0x18);
        return puVar13;
      }
      if (uVar18 == 0x2f) {
LAB_180183c98:
        return param_2 + 3;
      }
      if (uVar18 == 0x30) {
        return param_2 + 6;
      }
      if (uVar18 == 0x4e) {
        if (*(byte *)(*(longlong *)(param_3 + 0x10) + 0x4a6c) < 2) {
          return param_2;
        }
        local_120 = (uint *)CONCAT71(local_120._1_7_,1);
        puVar13 = (uint *)FUN_18018b280(param_1,param_2 + 1,0xf0000,1,0,param_3,param_4,0);
        local_110 = (uint *)0x0;
        local_118 = (uint *)(param_3 + 0x3d0);
        local_120 = (uint *)(param_3 + 800);
        FUN_18018dcf8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x19,&local_120,0x18);
        return puVar13;
      }
      if (uVar18 == 0x5e) {
        local_120 = (uint *)((ulonglong)local_120._1_7_ << 8);
        puVar13 = (uint *)FUN_180182740(param_1,param_2 + 1,0xf0000,2,0,param_3,param_4,0);
        FUN_180182f48(puVar13,uVar2,param_3,param_4,1);
        return puVar13;
      }
      if (uVar18 == 0x5f) {
        uVar2 = param_2[3];
        local_120 = (uint *)((ulonglong)local_120._1_7_ << 8);
        uVar18 = uVar2 & 0x7ff;
        puVar13 = (uint *)FUN_180182740(param_1,param_2 + 1,0xf0000,2,0,param_3,param_4,0);
        bVar11 = *(byte *)(*(longlong *)(param_3 + 0x10) + (ulonglong)uVar18 + 0x4880);
        if ((bVar11 & 0x1f) == 2) {
          local_60 = FUN_180213690(param_3 + 0x20,uVar18,0,uVar18);
          pbVar21 = &DAT_18022c532;
        }
        else {
          if ((bVar11 & 0x1f) == 3) {
            iVar1 = 5;
            uVar14 = 1;
            iVar4 = 4;
          }
          else {
            if ((bVar11 & 0x1f) != 4) {
              pbVar21 = &DAT_18022c532;
              local_60 = 0;
              goto LAB_180183fc0;
            }
            iVar1 = 10;
            uVar14 = 2;
            iVar4 = 8;
          }
          local_60 = FUN_180213690(param_3 + 0x20,uVar18 + iVar4,uVar14,uVar18 + iVar1);
          pbVar21 = &DAT_18022c533;
        }
LAB_180183fc0:
        local_118 = (uint *)(param_3 + 0x3d0);
        bVar11 = *pbVar21;
        uStack_48 = 0xffffffff;
        uStack_44 = 0xffffffff;
        local_50 = 0xffffffff;
        uStack_4c = 0xffffffff;
        uStack_88 = *(undefined8 *)(param_3 + 0x3d8);
        uStack_78 = *(undefined8 *)(param_3 + 1000);
        local_80 = *(undefined8 *)(param_3 + 0x3e0);
        uStack_68 = *(undefined8 *)(param_3 + 0x3f8);
        local_70 = *(undefined8 *)(param_3 + 0x3f0);
        bVar7 = *(byte *)(param_3 + 0x3d4);
        local_90._5_3_ = (undefined3)((ulonglong)*(undefined8 *)local_118 >> 0x28);
        local_90 = CONCAT35(local_90._5_3_,CONCAT14(bVar7 >> 6,(int)*(undefined8 *)local_118)) |
                   0x10000000;
        local_120 = (uint *)((ulonglong)
                             ((((bVar7 >> ((ulonglong)(bVar11 >> 6) << 1) & 3) << 2 |
                               bVar7 >> (ulonglong)((bVar11 >> 4 & 3) << 1) & 3) << 2 |
                              bVar7 >> (ulonglong)((bVar11 >> 2 & 3) << 1) & 3) << 2) |
                             (ulonglong)(bVar7 >> (((ulonglong)bVar11 & 3) << 1)) & 3 | 0x100);
        local_100 = (uint *)&local_90;
        local_f8 = 0;
        local_108 = (uint *)(param_3 + 0x400);
        local_110 = &local_60;
        local_5c = (char)(uVar2 >> 0x10);
        FUN_180214e10(param_3 + 0x20,param_4,0x48,param_3 + 800,&local_120,0x30);
        return puVar13;
      }
      if (uVar18 == 0x60) {
        uVar19 = 0x40003;
        uStack_48 = 0xffffffff;
        uStack_44 = 0xffffffff;
        local_50 = 0xffffffff;
        uStack_4c = 0xffffffff;
        local_60 = *(uint *)(param_3 + 0x2c4) | 0x10000000;
        local_5c = (byte)(param_2[1] >> 0x10) & 3;
        if ((param_2[1] & 0xf000000) == 0xd000000) {
          uVar19 = 3;
        }
        local_120 = &local_60;
        local_118 = (uint *)0x0;
        FUN_180214e10(param_3 + 0x20,param_4,uVar19,param_3 + 0x460,&local_120,0x10);
        goto LAB_1801844fc;
      }
      if (uVar18 == 0x12) {
        local_120 = (uint *)((ulonglong)local_120._1_7_ << 8);
        puVar12 = (uint *)FUN_18018b280(param_1,param_2 + 1,0xf0000,3,0,param_3,param_4,0);
        local_5c = *(undefined1 *)(param_3 + 0x324);
        local_60 = FUN_180213760(param_3 + 0x20,4,0);
        puVar13 = (uint *)(param_3 + 0x430);
        uStack_48 = 0xffffffff;
        uStack_44 = 0xffffffff;
        local_50 = 0xffffffff;
        uStack_4c = 0xffffffff;
        local_110 = (uint *)0x0;
        *puVar13 = *puVar13 ^ 0x80000000;
        local_118 = (uint *)(param_3 + 0x400);
        local_120 = puVar13;
        FUN_180214e10(param_3 + 0x20,param_4,0,&local_60,&local_120,0x18);
        *puVar13 = *puVar13 ^ 0x80000000;
        bVar11 = FUN_180213268(0xe4,*(undefined1 *)(param_3 + 0x324));
        local_f8 = 0;
        local_110 = (uint *)((ulonglong)bVar11 | 0x100);
        local_108 = &local_60;
        local_118 = (uint *)(param_3 + 0x3d0);
        local_120 = (uint *)(param_3 + 800);
        local_100 = puVar13;
        FUN_18018dcf8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x32,&local_120,0x30);
        return puVar12;
      }
      if (uVar18 != 0x19) {
        if (uVar18 != 0x1a) {
          if (uVar18 != 0x1c) {
            return param_2;
          }
          *param_5 = 1;
          return param_2 + 1;
        }
        uVar2 = param_2[2];
        uVar8 = (uVar2 & 0x1800 | uVar2 >> 0x14 & 0x7ff) >> 8;
        uVar18 = uVar2 & 0xf000000;
        if (uVar8 == 0xe) {
          uVar8 = uVar2 & 0x7ff;
          if ((*(char *)(param_3 + 0xdc) == '\0') ||
             (*(char *)(*(longlong *)(param_3 + 0x10) + (ulonglong)uVar8 + 0x49d8) == '\0')) {
            local_100 = (uint *)0x0;
            local_f8 = 0;
            local_108 = (uint *)(CONCAT44(local_108._4_4_,param_2[1]) & 0xffffffff000007ff |
                                0x20410a00);
            local_118 = (uint *)(CONCAT44(local_118._4_4_,uVar2) & 0xffffffff00000003);
            local_110 = (uint *)((ulonglong)(uVar8 >> 2) * 0x10 + 0x100);
            local_120 = (uint *)(CONCAT44(uVar19,*(undefined4 *)(param_3 + 0x2dc)) | 0x10000000);
            uVar19 = 0x40005;
            if (uVar18 == 0xd000000) {
              uVar19 = 5;
            }
            FUN_180214c88(param_3 + 0x20,param_4,uVar19,0xffffffff,&local_120,0x30);
          }
          else {
            bVar10 = *(int *)(*(longlong *)(param_3 + 0x10) + (ulonglong)uVar8 * 4 + 0x49e8) == 0;
            bVar9 = !bVar10;
            if (uVar18 == 0xd000000) {
              bVar9 = bVar10;
            }
            if (bVar9) {
              local_118 = (uint *)0x0;
              local_110 = (uint *)0x0;
              local_120 = (uint *)(CONCAT44(uVar19,param_2[1]) & 0xffffffff000007ff | 0x20410a00);
              FUN_180214c88(param_3 + 0x20,param_4,4,0xffffffff,&local_120,0x18);
            }
          }
        }
        else if (uVar8 == 0x13) {
          local_108 = (uint *)0x0;
          local_100 = (uint *)0x0;
          uVar3 = 0x40005;
          local_118 = (uint *)(CONCAT44(local_118._4_4_,uVar2 >> 0x10) & 0xffffffff00000003);
          local_110 = (uint *)(CONCAT44(local_110._4_4_,param_2[1]) & 0xffffffff000007ff |
                              0x20410a00);
          local_120 = (uint *)(CONCAT44(uVar19,*(undefined4 *)(param_3 + 0x2c4)) | 0x10000000);
          if (uVar18 == 0xd000000) {
            uVar3 = 5;
          }
          FUN_180214c88(param_3 + 0x20,param_4,uVar3,0xffffffff,&local_120,0x28);
        }
        goto LAB_180183c98;
      }
      local_118 = (uint *)0x0;
      local_110 = (uint *)0x0;
      local_120 = (uint *)(CONCAT44(uVar19,param_2[1]) & 0xffffffff000007ff | 0x20410a00);
      FUN_180214c88(param_3 + 0x20,param_4,4,0xffffffff,&local_120,0x18);
      goto LAB_18018424c;
    }
    uVar14 = 2;
  }
LAB_180184234:
  FUN_180214c88(param_3 + 0x20,param_4,uVar14,0,&local_120,0);
LAB_18018424c:
  return param_2 + 1;
}


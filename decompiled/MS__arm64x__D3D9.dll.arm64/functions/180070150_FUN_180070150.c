/*
 * FUN_180070150 at 180070150
 * undefined FUN_180070150(void)
 * Address ranges: 180070150-180071373
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_180070150(undefined8 param_1,uint *param_2,longlong param_3,longlong param_4,
                    undefined1 *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  uint *puVar17;
  char cVar18;
  char cVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined1 uVar22;
  byte *pbVar23;
  longlong lVar24;
  undefined8 in_stack_ffffffffffffff00;
  uint7 uVar25;
  undefined8 in_stack_ffffffffffffff18;
  undefined8 uVar26;
  undefined4 uVar27;
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
  uVar20 = uVar2 & 0xffff;
  uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
  uVar25 = (uint7)((ulonglong)in_stack_ffffffffffffff00 >> 8);
  if (uVar20 < 0x27) {
    if ((0x4008000000U >> ((ulonglong)uVar20 & 0x3f) & 1) != 0) {
      uVar2 = *(uint *)(param_3 + 0x2ec);
      if (3 < uVar2) {
        return param_2;
      }
      uVar3 = *(uint *)(param_3 + (ulonglong)uVar2 * 4 + 0x2b4);
      *(uint *)(param_3 + 0x2ec) = uVar2 + 1;
      if (uVar20 == 0x1b) {
        uVar20 = param_2[2];
        *(uint *)(param_3 + 0x2f0) = uVar2 + 1;
        param_2 = param_2 + 1;
      }
      else {
        uVar20 = param_2[1];
      }
      uVar20 = uVar20 & 0x7ff;
      if ((*(char *)(param_3 + 0xdc) == '\0') ||
         (lVar24 = *(longlong *)(param_3 + 0x10),
         *(char *)(lVar24 + (ulonglong)uVar20 + 0x48c5) == '\0')) {
        uVar26 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffff18 >> 0x20),0xff);
        uVar16 = CONCAT44(uVar21,*(undefined4 *)(param_3 + 0xbc));
        FUN_1800f5730(param_3 + 0x20,param_4,0x25,uVar3,7,*(undefined4 *)(param_3 + 0x2dc),0xe4,
                      (ulonglong)uVar20 << 4,uVar16,0xe4,0xff,uVar26,0x7f,0,0);
        uVar21 = (undefined4)((ulonglong)uVar16 >> 0x20);
        uVar27 = (undefined4)((ulonglong)uVar26 >> 0x20);
      }
      else {
        uVar20 = uVar20 * 4;
        uVar27 = 0;
        iVar4 = *(int *)(lVar24 + (ulonglong)(uVar20 + 3) * 4 + 0x48d8);
        iVar5 = *(int *)(lVar24 + (ulonglong)(uVar20 + 2) * 4 + 0x48d8);
        iVar6 = *(int *)(lVar24 + (ulonglong)(uVar20 + 1) * 4 + 0x48d8);
        iVar7 = *(int *)(lVar24 + (ulonglong)uVar20 * 4 + 0x48d8);
        iVar1 = 0;
        if (iVar4 < 0) {
          iVar1 = iVar4;
        }
        iVar4 = 0x7f;
        if (iVar5 < 0x7f) {
          iVar4 = iVar5;
        }
        iVar5 = 0xff;
        if (iVar6 < 0xff) {
          iVar5 = iVar6;
        }
        iVar6 = 0xff;
        if (iVar7 < 0xff) {
          iVar6 = iVar7;
        }
        uVar16 = CONCAT44(uVar21,iVar5);
        FUN_1800f5730(param_3 + 0x20,param_4,0x36,uVar3,7,*(undefined4 *)(param_3 + 0xbc),0xe4,iVar6
                      ,uVar16,iVar4,iVar1,0);
        uVar21 = (undefined4)((ulonglong)uVar16 >> 0x20);
      }
      FUN_1800f5730(param_3 + 0x20,param_4,0x24,uVar3,7,uVar3,0xa4,*(undefined4 *)(param_3 + 0xbc),
                    CONCAT44(uVar21,0xe4),0,0,CONCAT44(uVar27,0xffffff80),0,0);
      FUN_1800f5730(param_3 + 0x20,param_4,0x30,0);
      FUN_1800f5730(param_3 + 0x20,param_4,3,0xffffffff,uVar3 | 0x10000000,0,0);
      return param_2 + 2;
    }
LAB_18007034c:
    if ((0x8020000000U >> ((ulonglong)uVar20 & 0x3f) & 1) == 0) {
      if (uVar20 == 0x1e) {
        FUN_1800f5730(param_3 + 0x20,param_4,0x2c,0xffffffff,param_2[1] & 0x7ff | 0x20410a00,0,0);
        goto LAB_180071350;
      }
      if (uVar20 == 0x1f) goto LAB_180070ba0;
      if (uVar20 == 0x20) {
        puVar13 = (uint *)FUN_180077158(param_1,param_2 + 1,0xf0000,2,0,param_3,param_4,0,
                                        CONCAT71(uVar25,1));
        local_b0 = FUN_1800f42d0(param_3 + 0x20,4,0);
        local_60 = *(uint *)(param_3 + 0xb8);
        local_ac = 1;
        uStack_98 = 0xffffffffffffffff;
        local_a0 = 0xffffffffffffffff;
        uStack_4c = 0xffffffff;
        uStack_48 = 0xffffffff;
        local_5c = 0;
        local_50 = 0;
        uStack_44 = 0xffffffff;
        FUN_1800f58b8(param_3 + 0x20,param_4,0x2f,&local_b0,param_3 + 0x3d0,0);
        FUN_1800f58b8(param_3 + 0x20,param_4,0x38,&local_b0,0x100,&local_b0,param_3 + 0x400,0);
        FUN_1800f58b8(param_3 + 0x20,param_4,0x39,0x102,&local_b0,0x100,&local_b0,0x100,&local_b0,0)
        ;
        FUN_1800f58b8(param_3 + 0x20,param_4,0x37,&local_b0,0x155,&local_b0,&local_60,0x100,
                      &local_b0,0);
        uVar20 = 0x19;
        puVar15 = &local_b0;
        puVar14 = (uint *)&DAT_00000100;
      }
      else {
        if (uVar20 == 0x21) {
          puVar15 = (uint *)FUN_180077158(param_1,param_2 + 1,0xf0000,2,0,param_3,param_4,0,
                                          (ulonglong)uVar25 << 8);
          local_60 = FUN_1800f42d0(param_3 + 0x20,4,0);
          local_5c = 7;
          bVar12 = *(byte *)(param_3 + 0x404);
          uStack_48 = 0xffffffff;
          uStack_44 = 0xffffffff;
          local_50 = 0xffffffff;
          uStack_4c = 0xffffffff;
          FUN_1800f58b8(param_3 + 0x20,param_4,0x38,&local_60,param_3 + 0x3d0,
                        ((bVar12 & 0xc | bVar12 >> 2 & 3) << 2 | bVar12 & 3) << 2 | bVar12 >> 4 & 3
                        | 0x100,param_3 + 0x400,0);
          bVar12 = *(byte *)(param_3 + 0x404);
          local_60 = local_60 | 0x80000000;
          bVar8 = *(byte *)(param_3 + 0x3d4);
          FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x32,param_3 + 800,
                        ((bVar8 & 0xfffffc03 | (bVar8 & 3) << 2) << 2 | bVar8 >> 4 & 3) << 2 |
                        bVar8 >> 2 & 3 | 0x100,param_3 + 0x3d0,
                        ((bVar12 & 0xc | bVar12 >> 2 & 3) << 2 | bVar12 & 3) << 2 | bVar12 >> 4 & 3
                        | 0x100,param_3 + 0x400,0x152,&local_60,0);
          return puVar15;
        }
        if (uVar20 == 0x22) {
          puVar15 = (uint *)FUN_180077158(param_1,param_2 + 1,0xf0000,3,0,param_3,param_4,0,
                                          CONCAT71(uVar25,1));
          local_b0 = FUN_1800f42d0(param_3 + 0x20,4,1);
          local_ac = 0xf;
          uStack_98 = 0xffffffffffffffff;
          local_a0 = 0xffffffffffffffff;
          local_90._0_5_ = CONCAT14(0xe4,*(undefined4 *)(param_3 + 0xbc));
          local_80 = 0;
          uStack_78 = 0;
          FUN_1800f58b8(param_3 + 0x20,param_4,0x31,&local_b0,&local_90,param_3 + 0x3d0,0);
          local_b0 = local_b0 | 0x80000000;
          if (*(int *)(param_3 + 0x480) == 0) {
            local_60 = FUN_1800f42d0(param_3 + 0x20,4,0);
            local_5c = 0xf;
            uStack_48 = 0xffffffff;
            uStack_44 = 0xffffffff;
            local_50 = 0xffffffff;
            uStack_4c = 0xffffffff;
            FUN_1800f58b8(param_3 + 0x20,param_4,0x31,&local_60,param_3 + 0x3d0,&local_90,0);
            FUN_1800f58b8(param_3 + 0x20,param_4,0x1e,&local_60,&local_b0,&local_60,&local_90,0);
            puVar14 = &local_60;
          }
          else {
            puVar14 = &local_b0;
          }
          FUN_1800f58b8(param_3 + 0x20,param_4,0x2b,param_3 + 800,puVar14,0);
          FUN_1800f4370(param_3 + 0x20,local_b0);
          return puVar15;
        }
        if (uVar20 == 0x23) {
          *(undefined4 *)(param_3 + 0x484) = 0;
          puVar15 = (uint *)FUN_180077158(param_1,param_2 + 1,0xf0000,1,0,param_3,param_4,0,
                                          CONCAT71(uVar25,1));
          FUN_180077568(param_1,param_3,param_4);
          return puVar15;
        }
        if (uVar20 == 0x24) {
          puVar15 = (uint *)FUN_180077158(param_1,param_2 + 1,0xf0000,1,0,param_3,param_4,0,
                                          (ulonglong)uVar25 << 8);
          local_b0 = FUN_1800f42d0(param_3 + 0x20,4,0);
          local_ac = 1;
          uStack_98 = 0xffffffffffffffff;
          local_a0 = 0xffffffffffffffff;
          uVar20 = (*(byte *)(param_3 + 0x3d4) >> 4 & 3) << 6 | *(byte *)(param_3 + 0x3d4) & 0x3f |
                   0x100;
          FUN_1800f58b8(param_3 + 0x20,param_4,0x10,&local_b0,uVar20,param_3 + 0x3d0,uVar20,
                        param_3 + 0x3d0,0);
          FUN_1800f58b8(param_3 + 0x20,param_4,0x44,&local_b0,0x100,&local_b0,0);
          local_60 = *(uint *)(param_3 + 0xb8);
          local_5c = 0xe4;
          local_50 = 0x7f800000;
          uStack_4c = 0xffffffff;
          uStack_48 = 0xffffffff;
          uStack_44 = 0xffffffff;
          FUN_1800f58b8(param_3 + 0x20,param_4,0x27,0x102,&local_b0,0x100,&local_b0,&local_60,0);
          FUN_1800f58b8(param_3 + 0x20,param_4,1,&local_b0,0x100,&local_b0,0x155,&local_b0,0);
          FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x38,param_3 + 800,
                        0x100,&local_b0,param_3 + 0x3d0,0);
          return puVar15;
        }
        if (uVar20 != 0x25) goto LAB_180070a98;
        uVar21 = 1;
        if (*(char *)(*(longlong *)(param_3 + 0x10) + 0x4a6c) != '\x03') {
          uVar21 = 3;
        }
        puVar13 = (uint *)FUN_180077158(param_1,param_2 + 1,0xf0000,uVar21,0,param_3,param_4,0,
                                        (ulonglong)uVar25 << 8);
        puVar15 = (uint *)(param_3 + 0x3d0);
        if ((param_2[1] & 0xf0000) == 0x10000) {
          local_60 = *(uint *)(param_3 + 0xc0);
          local_5c = 0;
          puVar14 = (uint *)(param_3 + 800);
          puVar17 = &local_60;
          uStack_48 = 0xffffffff;
          uStack_44 = 0xffffffff;
          local_50 = 0xffffffff;
          uStack_4c = 0xffffffff;
          uVar20 = 0x4d;
          goto LAB_1800709b4;
        }
        if ((param_2[1] & 0xf0000) != 0x20000) {
          if ((*(uint *)(param_3 + 800) >> 0x1e & 1) == 0) {
            FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x4d,0x102,
                          param_3 + 800,0x101,param_3 + 800,puVar15,0);
            return puVar13;
          }
          local_60 = FUN_1800f42d0(param_3 + 0x20,4,0);
          local_5c = 0x54;
          uStack_48 = 0xffffffff;
          uStack_44 = 0xffffffff;
          local_50 = 0xffffffff;
          uStack_4c = 0xffffffff;
          FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x4d,0x102,&local_60,
                        0x101,&local_60,puVar15,0);
          puVar15 = &local_60;
          uVar20 = 0x36;
          goto LAB_180070fc8;
        }
        local_60 = *(uint *)(param_3 + 0xc0);
        local_5c = 0;
        puVar14 = &local_60;
        uStack_48 = 0xffffffff;
        uStack_44 = 0xffffffff;
        local_50 = 0xffffffff;
        uStack_4c = 0xffffffff;
        uVar20 = 0x4d;
      }
      puVar17 = (uint *)(param_3 + 800);
LAB_1800709b4:
      FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | uVar20,puVar17,puVar14,
                    puVar15,0);
      return puVar13;
    }
    if (4 < *(uint *)(param_3 + 0x2ec)) goto LAB_1800710d0;
    uVar2 = *(uint *)(param_3 + 0x2ec) - 1;
    *(uint *)(param_3 + 0x2ec) = uVar2;
    uVar16 = 0;
    uVar27 = *(undefined4 *)(param_3 + (ulonglong)uVar2 * 4 + 0x2b4);
    FUN_1800f5730(param_3 + 0x20,param_4,0x1e,uVar27,1,uVar27,0,*(undefined4 *)(param_3 + 0xb8),
                  CONCAT44(uVar21,0xe4),0xffffffff,0);
    if (uVar20 == 0x1d) {
      FUN_1800f5730(param_3 + 0x20,param_4,0x1e,uVar27,2,uVar27,0x55,uVar27,0xaa,0,uVar16);
    }
    uVar16 = 0x16;
    goto LAB_1800710c0;
  }
  if (uVar20 < 0x28) goto LAB_18007034c;
LAB_180070a98:
  if (uVar20 == 0x28) {
    bVar12 = *(byte *)(param_3 + 0x314);
    uVar20 = param_2[1];
    cVar19 = *(char *)((ulonglong)bVar12 + param_3 + 0x2f4);
    uVar2 = (uVar20 & 0x1800 | uVar20 >> 0x14 & 0x7ff) >> 8;
    if (uVar2 == 0xe) {
      uVar2 = uVar20 & 0x7ff;
      if ((*(char *)(param_3 + 0xdc) == '\0') ||
         (*(char *)(*(longlong *)(param_3 + 0x10) + (ulonglong)uVar2 + 0x49d8) == '\0')) {
        uVar21 = 0x4001f;
        if ((uVar20 & 0xf000000) == 0xd000000) {
          uVar21 = 0x1f;
        }
        FUN_1800f5730(param_3 + 0x20,param_4,uVar21,0xffffffff,
                      *(uint *)(param_3 + 0x2dc) | 0x10000000,uVar20 & 3,(uVar2 >> 2) * 0x10 + 0x100
                      ,0);
        bVar12 = *(char *)(param_3 + 0x314) + 1;
        *(byte *)(param_3 + 0x314) = bVar12;
        *(char *)((ulonglong)bVar12 + param_3 + 0x2f4) = cVar19;
      }
      else {
        if ((cVar19 != '\x02') &&
           (cVar19 = '\x01',
           *(int *)(*(longlong *)(param_3 + 0x10) + (ulonglong)uVar2 * 4 + 0x49e8) == 0)) {
          cVar19 = '\x02';
        }
        *(byte *)(param_3 + 0x314) = bVar12 + 1;
        *(char *)((ulonglong)(byte)(bVar12 + 1) + param_3 + 0x2f4) = cVar19;
        *(bool *)(param_4 + 0x18) = cVar19 != '\x02';
      }
    }
    else if (uVar2 == 0x13) {
      uVar21 = 0x4001f;
      if ((uVar20 & 0xf000000) == 0xd000000) {
        uVar21 = 0x1f;
      }
      FUN_1800f5730(param_3 + 0x20,param_4,uVar21,0xffffffff,*(uint *)(param_3 + 0x2c4) | 0x10000000
                    ,uVar20 >> 0x10 & 3,0);
      uVar22 = 2;
      if (cVar19 != '\x02') {
        uVar22 = 0;
      }
      bVar12 = *(char *)(param_3 + 0x314) + 1;
      *(byte *)(param_3 + 0x314) = bVar12;
      *(undefined1 *)((ulonglong)bVar12 + param_3 + 0x2f4) = uVar22;
    }
LAB_180071350:
    return param_2 + 2;
  }
  if (uVar20 == 0x29) {
    puVar15 = (uint *)FUN_18006fb88(param_1,param_2 + 1,2,0,param_3,0,0);
    local_60 = FUN_180070038(puVar15,uVar2,param_3,param_4,0);
    local_60 = local_60 | 0x10000000;
    local_5c = 0;
    uStack_48 = 0xffffffff;
    uStack_44 = 0xffffffff;
    local_50 = 0xffffffff;
    uStack_4c = 0xffffffff;
    FUN_1800f58b8(param_3 + 0x20,param_4,0x4001f,param_3 + 0x460,&local_60,0);
    bVar12 = *(byte *)(param_3 + 0x314);
    cVar19 = *(char *)((ulonglong)bVar12 + param_3 + 0x2f4);
    *(byte *)(param_3 + 0x314) = bVar12 + 1;
    uVar22 = 2;
    if (cVar19 != '\x02') {
      uVar22 = 0;
    }
    *(undefined1 *)((ulonglong)(byte)(bVar12 + 1) + param_3 + 0x2f4) = uVar22;
    return puVar15;
  }
  if (uVar20 == 0x2a) {
    lVar24 = (ulonglong)*(byte *)(param_3 + 0x314) + param_3;
    cVar19 = *(char *)(lVar24 + 0x2f4);
    if (cVar19 != '\0') {
      cVar18 = '\x01';
      if (cVar19 == '\x01') {
        cVar18 = '\x02';
      }
      if (*(char *)(lVar24 + 0x2f3) != '\x02') {
        cVar19 = cVar18;
      }
      *(char *)(lVar24 + 0x2f4) = cVar19;
      goto LAB_180071150;
    }
    uVar16 = 0x12;
  }
  else {
    if (uVar20 == 0x2b) {
      if (*(char *)((ulonglong)*(byte *)(param_3 + 0x314) + param_3 + 0x2f4) == '\0') {
        FUN_1800f5730(param_3 + 0x20,param_4,0x15,0);
      }
      bVar12 = *(char *)(param_3 + 0x314) - 1;
      *(byte *)(param_3 + 0x314) = bVar12;
      cVar19 = *(char *)((ulonglong)bVar12 + param_3 + 0x2f4);
LAB_180071150:
      *(bool *)(param_4 + 0x18) = cVar19 != '\x02';
      goto LAB_1800710d0;
    }
    if (uVar20 != 0x2c) {
      if (uVar20 == 0x2d) {
        puVar15 = (uint *)FUN_18006fb88(param_1,param_2 + 1,2,0,param_3,0,0);
        local_60 = FUN_180070038(puVar15,uVar2,param_3,param_4,0);
        local_60 = local_60 | 0x10000000;
        local_5c = 0;
        uStack_48 = 0xffffffff;
        uStack_44 = 0xffffffff;
        local_50 = 0xffffffff;
        uStack_4c = 0xffffffff;
        FUN_1800f58b8(param_3 + 0x20,param_4,0x40003,param_3 + 0x460,&local_60,0);
        return puVar15;
      }
      if (uVar20 == 0x2e) {
        puVar15 = (uint *)FUN_180077158(param_1,param_2 + 1,0xf0000,1,0,param_3,param_4,0,
                                        (ulonglong)uVar25 << 8);
        FUN_1800f58b8(param_3 + 0x20,param_4,0x40,param_3 + 800,param_3 + 0x3d0,0);
        FUN_1800f58b8(param_3 + 0x20,param_4,0x1b,param_3 + 800,0x1e4,param_3 + 800,0);
        return puVar15;
      }
      if (uVar20 == 0x2f) {
LAB_180070ba0:
        return param_2 + 3;
      }
      if (uVar20 == 0x30) {
        return param_2 + 6;
      }
      if (uVar20 == 0x4e) {
        if (*(byte *)(*(longlong *)(param_3 + 0x10) + 0x4a6c) < 2) {
          return param_2;
        }
        puVar13 = (uint *)FUN_180077158(param_1,param_2 + 1,0xf0000,1,0,param_3,param_4,0,
                                        CONCAT71(uVar25,1));
        puVar15 = (uint *)(param_3 + 0x3d0);
        uVar20 = *(uint *)(param_3 + 0x480) | 0x19;
LAB_180070fc8:
        FUN_1800796a8(param_1,param_3,param_4,uVar20,param_3 + 800,puVar15,0);
        return puVar13;
      }
      if (uVar20 == 0x5e) {
        puVar15 = (uint *)FUN_18006f870(param_1,param_2 + 1,0xf0000,2,0,param_3,param_4,0,
                                        (ulonglong)uVar25 << 8);
        FUN_180070038(puVar15,uVar2,param_3,param_4,1);
        return puVar15;
      }
      if (uVar20 == 0x5f) {
        uVar2 = param_2[3];
        uVar20 = uVar2 & 0x7ff;
        puVar15 = (uint *)FUN_18006f870(param_1,param_2 + 1,0xf0000,2,0,param_3,param_4,0,
                                        (ulonglong)uVar25 << 8);
        bVar12 = *(byte *)(*(longlong *)(param_3 + 0x10) + (ulonglong)uVar20 + 0x4880);
        if ((bVar12 & 0x1f) == 2) {
          local_60 = func_0x000180213690(param_3 + 0x20,uVar20,0,uVar20);
          pbVar23 = &DAT_18022c532;
        }
        else {
          if ((bVar12 & 0x1f) == 3) {
            iVar1 = 5;
            uVar16 = 1;
            iVar4 = 4;
          }
          else {
            if ((bVar12 & 0x1f) != 4) {
              pbVar23 = &DAT_18022c532;
              local_60 = 0;
              goto LAB_180070e84;
            }
            iVar1 = 10;
            uVar16 = 2;
            iVar4 = 8;
          }
          local_60 = func_0x000180213690(param_3 + 0x20,uVar20 + iVar4,uVar16,uVar20 + iVar1);
          pbVar23 = &DAT_18022c533;
        }
LAB_180070e84:
        bVar12 = *pbVar23;
        uStack_48 = 0xffffffff;
        uStack_44 = 0xffffffff;
        local_50 = 0xffffffff;
        uStack_4c = 0xffffffff;
        uStack_88 = *(undefined8 *)(param_3 + 0x3d8);
        uStack_78 = *(undefined8 *)(param_3 + 1000);
        local_80 = *(undefined8 *)(param_3 + 0x3e0);
        uStack_68 = *(undefined8 *)(param_3 + 0x3f8);
        local_70 = *(undefined8 *)(param_3 + 0x3f0);
        bVar8 = *(byte *)(param_3 + 0x3d4);
        local_90._5_3_ = (undefined3)((ulonglong)*(undefined8 *)(param_3 + 0x3d0) >> 0x28);
        local_90 = CONCAT35(local_90._5_3_,
                            CONCAT14(bVar8 >> 6,(int)*(undefined8 *)(param_3 + 0x3d0))) | 0x10000000
        ;
        local_5c = (char)(uVar2 >> 0x10);
        FUN_1800f58b8(param_3 + 0x20,param_4,0x48,param_3 + 800,
                      (((bVar8 >> ((ulonglong)(bVar12 >> 6) << 1) & 3) << 2 |
                       bVar8 >> (ulonglong)((bVar12 >> 4 & 3) << 1) & 3) << 2 |
                      bVar8 >> (ulonglong)((bVar12 >> 2 & 3) << 1) & 3) << 2 |
                      bVar8 >> (((ulonglong)bVar12 & 3) << 1) & 3 | 0x100,param_3 + 0x3d0,&local_60,
                      param_3 + 0x400,&local_90,0);
        return puVar15;
      }
      if (uVar20 == 0x60) {
        uVar21 = 0x40003;
        uStack_48 = 0xffffffff;
        uStack_44 = 0xffffffff;
        local_50 = 0xffffffff;
        uStack_4c = 0xffffffff;
        local_60 = *(uint *)(param_3 + 0x2c4) | 0x10000000;
        local_5c = (byte)(param_2[1] >> 0x10) & 3;
        if ((param_2[1] & 0xf000000) == 0xd000000) {
          uVar21 = 3;
        }
        FUN_1800f58b8(param_3 + 0x20,param_4,uVar21,param_3 + 0x460,&local_60,0);
        goto LAB_180071350;
      }
      if (uVar20 == 0x12) {
        puVar14 = (uint *)FUN_180077158(param_1,param_2 + 1,0xf0000,3,0,param_3,param_4,0,
                                        (ulonglong)uVar25 << 8);
        local_5c = *(undefined1 *)(param_3 + 0x324);
        local_60 = FUN_1800f42d0(param_3 + 0x20,4,0);
        puVar15 = (uint *)(param_3 + 0x430);
        uStack_48 = 0xffffffff;
        uStack_44 = 0xffffffff;
        local_50 = 0xffffffff;
        uStack_4c = 0xffffffff;
        *puVar15 = *puVar15 ^ 0x80000000;
        FUN_1800f58b8(param_3 + 0x20,param_4,0,&local_60,puVar15,param_3 + 0x400,0);
        *puVar15 = *puVar15 ^ 0x80000000;
        bVar12 = FUN_1800f5ea8(0xe4,*(undefined1 *)(param_3 + 0x324));
        FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x32,param_3 + 800,
                      param_3 + 0x3d0,(ulonglong)bVar12 | 0x100,&local_60,puVar15,0);
        return puVar14;
      }
      if (uVar20 != 0x19) {
        if (uVar20 != 0x1a) {
          if (uVar20 != 0x1c) {
            return param_2;
          }
          *param_5 = 1;
          return param_2 + 1;
        }
        uVar2 = param_2[2];
        uVar3 = (uVar2 & 0x1800 | uVar2 >> 0x14 & 0x7ff) >> 8;
        uVar20 = uVar2 & 0xf000000;
        if (uVar3 == 0xe) {
          uVar3 = uVar2 & 0x7ff;
          uVar9 = param_2[1] & 0x7ff | 0x20410a00;
          if ((*(char *)(param_3 + 0xdc) == '\0') ||
             (*(char *)(*(longlong *)(param_3 + 0x10) + (ulonglong)uVar3 + 0x49d8) == '\0')) {
            uVar21 = 0x40005;
            if (uVar20 == 0xd000000) {
              uVar21 = 5;
            }
            FUN_1800f5730(param_3 + 0x20,param_4,uVar21,0xffffffff,
                          *(uint *)(param_3 + 0x2dc) | 0x10000000,uVar2 & 3,
                          (uVar3 >> 2) * 0x10 + 0x100,uVar9,0,0);
          }
          else {
            bVar11 = *(int *)(*(longlong *)(param_3 + 0x10) + (ulonglong)uVar3 * 4 + 0x49e8) == 0;
            bVar10 = !bVar11;
            if (uVar20 == 0xd000000) {
              bVar10 = bVar11;
            }
            if (bVar10) {
              FUN_1800f5730(param_3 + 0x20,param_4,4,0xffffffff,uVar9,0,0);
            }
          }
        }
        else if (uVar3 == 0x13) {
          uVar21 = 0x40005;
          if (uVar20 == 0xd000000) {
            uVar21 = 5;
          }
          FUN_1800f5730(param_3 + 0x20,param_4,uVar21,0xffffffff,
                        *(uint *)(param_3 + 0x2c4) | 0x10000000,uVar2 >> 0x10 & 3,
                        param_2[1] & 0x7ff | 0x20410a00,0,0);
        }
        goto LAB_180070ba0;
      }
      FUN_1800f5730(param_3 + 0x20,param_4,4,0xffffffff,param_2[1] & 0x7ff | 0x20410a00,0,0);
      goto LAB_1800710d0;
    }
    uVar16 = 2;
  }
LAB_1800710c0:
  FUN_1800f5730(param_3 + 0x20,param_4,uVar16,0);
LAB_1800710d0:
  return param_2 + 1;
}


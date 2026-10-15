/*
 * FUN_10070270 at 10070270
 * undefined FUN_10070270(void)
 * Address ranges: 10070270-10070b47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_10070270(int param_1,int param_2,undefined1 *param_3,ulonglong param_4,longlong param_5,
            undefined4 param_6,int *param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,char param_11,undefined4 param_12,undefined1 param_13)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  undefined8 *local_3c0;
  undefined4 *local_3bc;
  undefined4 local_3b8;
  uint local_3b4;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined8 local_390;
  undefined1 uStack_388;
  undefined1 uStack_387;
  undefined1 uStack_386;
  undefined1 uStack_385;
  undefined1 uStack_384;
  undefined1 uStack_383;
  undefined2 uStack_382;
  undefined2 uStack_380;
  undefined1 local_37e;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined1 local_364;
  undefined1 local_360 [8];
  int *local_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined8 local_340;
  uint local_338;
  undefined1 *local_310;
  undefined2 local_30c;
  uint local_308;
  undefined8 local_304;
  undefined8 uStack_2fc;
  undefined2 local_2f4;
  undefined1 local_2f2;
  undefined1 auStack_2a0 [64];
  undefined1 local_260;
  undefined1 local_25f;
  undefined1 local_25e;
  undefined1 *local_25c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int local_100;
  undefined8 local_80;
  undefined8 uStack_78;
  uint auStack_60 [8];
  
  uVar10 = FUN_100ff690(&local_340,0,0x2e0);
  local_310 = auStack_2a0;
  local_30c = 0x40;
  local_340._0_4_ = param_6;
  uVar10 = FUN_10068d18(uVar10,&local_340);
  uStack_388 = 0;
  uStack_387 = 0;
  uStack_386 = 0;
  uStack_385 = 0;
  uStack_384 = 0;
  uStack_383 = 0;
  uStack_382 = 0;
  local_390 = 0;
  uStack_380 = 0;
  local_37e = 0;
  local_308 = (uint)CONCAT11(param_3[0x125],param_3[0x126]);
  uVar11 = FUN_10068db8(uVar10,&local_390,param_4);
  uVar10 = local_390;
  local_260 = 0;
  local_390._4_4_ = SUB84(uVar10,4);
  local_390._0_4_ = CONCAT13(param_3[1],CONCAT12(*param_3,(undefined2)local_390));
  local_390 = CONCAT17(param_3[0x2c],
                       CONCAT16(param_3[0x2b],CONCAT15(param_3[0x2a],(undefined5)local_390)));
  uStack_388 = param_3[0x2d];
  uStack_387 = param_3[0x2e];
  uStack_386 = param_3[0x2f];
  uStack_385 = param_3[0x30];
  uStack_384 = param_3[0x31];
  uStack_382 = 0xff00;
  uStack_380 = 0xffff;
  uStack_2fc = CONCAT26(0xff00,CONCAT15(uStack_383,*(undefined5 *)(param_3 + 0x2d)));
  local_304 = local_390;
  local_2f2 = 1;
  if (param_3[0x40] == '\0') {
    local_2f2 = 0xff;
  }
  local_2f4 = 0xffff;
  local_25f = param_11 != '\0' || param_5 == 0;
  local_25e = param_13;
  local_25c = param_3;
  uVar12 = FUN_10068e08(uVar11,param_7,&local_340);
  if ((uVar12 & 1) == 0) {
    return 0;
  }
  uStack_388 = 0;
  uStack_387 = 2;
  uStack_386 = 0;
  uStack_385 = 0;
  uStack_384 = 1;
  uVar6 = FUN_100fece0(0x200);
  local_390 = CONCAT44(uVar6,uVar6);
  uVar6 = FUN_100efa80(&local_390,(undefined4)local_340);
  local_364 = 1;
  local_368 = 0x80;
  uVar10 = FUN_100fece0(0x80);
  local_370 = (undefined4)uVar10;
  uStack_36c = local_370;
  if (local_25c[0x125] != '\x03') {
    FUN_100693b0(uVar10,&local_340,&local_370,param_4);
  }
  if (local_25c[0x125] == '\x01') {
    uStack_140 = 0;
    local_148 = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_78 = 0;
    local_80 = 0;
  }
  if (local_25c[0x125] == '\x01') {
    iVar17 = 0;
    puVar8 = (uint *)(param_2 + 4);
    puVar14 = local_25c;
    local_358 = param_7;
    uStack_354 = param_8;
    local_350 = uVar6;
LAB_100704c0:
    while (uVar6 = local_350, param_8 = uStack_354, param_7 = local_358,
          *(int *)(puVar14 + iVar17 * 4 + 0xd4) == (int)puVar8 - param_2 >> 2) {
      bVar3 = puVar14[iVar17 + 0x114];
      iVar17 = iVar17 + 1;
      iVar7 = 0;
      uVar16 = bVar3 & 0xf0;
      if ((bVar3 & 0xf0) == 0) {
LAB_100706b0:
        puVar8 = (uint *)FUN_10071a58(param_1,&local_340,&local_370,puVar8,param_4,0);
        puVar9 = puVar8;
        iVar13 = local_100;
      }
      else if (uVar16 == 0x10) {
        uVar2 = bVar3 & 0xf;
        uVar4 = uVar2 >> 1;
        puVar9 = auStack_60;
        uVar16 = 0;
        puVar15 = puVar8;
        if (uVar4 != 0) {
          do {
            uVar10 = *(undefined8 *)puVar15;
            uVar16 = uVar16 + 1;
            puVar15 = puVar15 + 2;
            *(undefined8 *)puVar9 = uVar10;
            puVar9 = puVar9 + 2;
          } while (uVar16 < uVar4);
        }
        if ((bVar3 & 1) != 0) {
          *puVar9 = *puVar15;
        }
        puVar8 = puVar8 + uVar2;
        uVar16 = *puVar8;
        while ((uVar16 & 0xffff) == 0xfffe) {
          puVar8 = puVar8 + (uVar16 >> 0x10) + 1;
          uVar16 = *puVar8;
        }
        puVar8 = (uint *)FUN_10071a58(param_1,&local_340,&local_370,puVar8,param_4,0);
        FUN_10073b40(puVar8,&local_340,&local_370,local_360,local_100,uStack_110,uStack_10c,0);
        puVar9 = (uint *)FUN_10071a58(param_1,&local_340,&local_370,auStack_60,param_4,0);
        iVar13 = local_100;
      }
      else {
        if (uVar16 != 0x20) goto LAB_100706b0;
        uVar16 = puVar8[1];
        iVar7 = FUN_100ee580(&local_340,4,1);
        puVar8 = (uint *)FUN_10071a58(param_1,&local_340,&local_370,puVar8,param_4,iVar7);
        uVar2 = *puVar8;
        while ((uVar2 & 0xffff) == 0xfffe) {
          puVar8 = puVar8 + (uVar2 >> 0x10) + 1;
          uVar2 = *puVar8;
        }
        puVar8 = (uint *)FUN_10071a58(param_1,&local_340,&local_370,puVar8,param_4,0);
        uVar10 = FUN_10073b40(puVar8,&local_340,&local_370,local_360,local_100,uStack_110,uStack_10c
                              ,0);
        puVar9 = (uint *)FUN_10070c20(uVar10,&local_340,uVar16,0);
        iVar13 = local_100;
        if (iVar7 != 0) {
          iVar13 = iVar7;
        }
      }
      FUN_10073b40(puVar9,&local_340,&local_370,local_360,iVar13,uStack_110,uStack_10c,iVar7 != 0);
      FUN_100ee638(&local_340,iVar7);
      puVar14 = local_25c;
    }
    uVar16 = *puVar8 & 0xffff;
    if (uVar16 < 0xfffd) {
      if (uVar16 == 0) goto LAB_10070b1c;
      if (uVar16 == 0x51) {
        puVar8 = puVar8 + 6;
        goto LAB_100704c0;
      }
    }
    else {
      if (uVar16 < 0xfffe) {
LAB_10070b1c:
        puVar8 = puVar8 + 1;
        goto LAB_100704c0;
      }
      if (uVar16 == 0xfffe) {
        puVar8 = puVar8 + (*puVar8 >> 0x10) + 1;
        goto LAB_100704c0;
      }
      if (uVar16 == 0xffff) goto code_r0x10070740;
    }
    puVar8 = (uint *)FUN_10071a58(param_1,&local_340,&local_370,puVar8,param_4,0);
    FUN_10073b40(puVar8,&local_340,&local_370,local_360,local_100,uStack_110,uStack_10c,0);
    puVar14 = local_25c;
    goto LAB_100704c0;
  }
LAB_10070860:
  uVar10 = FUN_100efd30((undefined4)local_340,&local_390,0);
  if ((local_338 >> 3 & 1) != 0) {
    uVar10 = FUN_100efe18((undefined4)local_340,&local_390,3,1,0x440,0);
  }
  if ((local_338 >> 4 & 1) != 0) {
    uVar10 = FUN_100efe18((undefined4)local_340,&local_390,4,1,0x80,0);
  }
  if (local_25c[0x125] == '\x01') {
    FUN_10069d68(uVar10,&local_340,&local_390,param_4);
    if ((char)local_304 != '\0') {
      FUN_100efff8(&local_390,0,(char)local_304,4);
    }
    if (local_304._1_1_ != '\0') {
      FUN_100effa0(&local_390,1,local_304._1_1_,2);
    }
    uVar16 = 0;
    puVar14 = local_25c;
    do {
      if (puVar14[uVar16] != '\0') {
        FUN_100effa0(&local_390,uVar16 + 2,puVar14[uVar16],(~(uint)(param_4 >> 0x1e) & 1) + 1);
        puVar14 = local_25c;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < 2);
    if (local_304._4_1_ != '\0') {
      FUN_100effa0(&local_390,4,local_304._4_1_,2);
      puVar14 = local_25c;
    }
    uVar16 = 0;
    do {
      if (puVar14[uVar16 + 0x2a] != '\0') {
        FUN_100effa0(&local_390,uVar16 + 5,puVar14[uVar16 + 0x2a],2);
        puVar14 = local_25c;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < 6);
    FUN_100f0050(&local_390,0,0xf);
    if (local_25c[0x40] != '\0') {
      local_3b4 = 0xc001;
      local_3b8 = 0x2000065;
      local_3c0 = &local_390;
      local_3bc = (undefined4 *)0x2;
      FUN_100ef760(&local_3c0,0x10);
    }
  }
  if (local_30c._1_1_ != 0) {
    local_3b8 = 0x2000068;
    local_3c0 = &local_390;
    local_3bc = (undefined4 *)0x2;
    local_3b4 = (uint)local_30c._1_1_;
    FUN_100ef760(&local_3c0,0x10);
  }
  FUN_100efae8(&local_390,&local_370,uVar6);
  iVar17 = (int)local_390;
  FUN_100ef6d8(param_7,(int)local_390,local_390._4_4_ - (int)local_390);
  FUN_100fed00(local_370);
  FUN_100fed00(iVar17);
  if (*(int *)(param_1 + 8) != 0) {
    pbVar1 = (byte *)(*param_7 + ((uint)(param_7[1] - *param_7) >> 1));
    *pbVar1 = *pbVar1 ^ 0x2a;
  }
  uVar10 = FUN_100ef888(param_7);
  FUN_1006ac20(uVar10,&local_340,param_8);
  return 1;
code_r0x10070740:
  uVar16 = 1;
  uVar12 = ZEXT48(&local_148);
  do {
    FUN_100ee638(&local_340,*(undefined4 *)((int)uVar12 + uVar16 * 4));
    uVar16 = uVar16 + 1;
  } while (uVar16 < 6);
  uVar16 = 0;
  uVar12 = ZEXT48(&uStack_130);
  do {
    FUN_100ee638(&local_340,*(undefined4 *)((int)uVar12 + uVar16 * 4));
    uVar16 = uVar16 + 1;
  } while (uVar16 < 6);
  uVar16 = 0;
  uVar12 = ZEXT48(&uStack_118);
  do {
    uVar10 = FUN_100ee638(&local_340,*(undefined4 *)((int)uVar12 + uVar16 * 4));
    uVar16 = uVar16 + 1;
  } while (uVar16 < 2);
  uVar5 = (undefined4)local_148;
  uVar10 = FUN_10069630(uVar10,&local_340,&local_370,(undefined4)local_148,param_4);
  uVar10 = FUN_100698f8(uVar10,&local_340,&local_370,uVar5,param_4);
  FUN_10069bf0(uVar10,&local_340,&local_370,uVar5,param_4);
  local_3a8 = 0xe4;
  uStack_3a4 = 0;
  local_3b0 = 0xf;
  uStack_3ac = uVar5;
  local_3b4 = 0x410200;
  local_3b8 = 0x2036;
  local_3bc = &local_370;
  local_3c0 = &local_340;
  FUN_100ef510(&local_3c0,0x20);
  local_3b8 = 0x3e;
  local_3b4 = 0;
  local_3bc = &local_370;
  local_3c0 = &local_340;
  FUN_100ef510(&local_3c0,0x10);
  FUN_100ee638(&local_340,(undefined4)local_148);
  goto LAB_10070860;
}


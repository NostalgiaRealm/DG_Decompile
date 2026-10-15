/*
 * FUN_1006fcc8 at 1006fcc8
 * undefined FUN_1006fcc8(void)
 * Address ranges: 1006fcc8-10070263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1006fcc8(int param_1,undefined4 param_2,ulonglong param_3,undefined1 param_4,uint param_5,
            int *param_6,undefined4 param_7)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong extraout_x14;
  int *local_390;
  undefined4 *local_38c;
  undefined4 local_388;
  uint local_384;
  undefined4 local_380;
  uint local_37c;
  uint local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 uStack_368;
  undefined4 local_364;
  undefined4 uStack_360;
  int local_340;
  int iStack_33c;
  undefined4 local_338;
  undefined1 local_334;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined1 local_324;
  undefined8 local_320;
  ulonglong uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e4;
  undefined6 uStack_2dc;
  undefined2 uStack_2d6;
  undefined2 uStack_2d4;
  undefined1 local_2d2;
  undefined4 local_2c4;
  byte abStack_284 [4];
  undefined1 auStack_280 [324];
  byte local_13c;
  undefined1 local_13b;
  char acStack_13a [8];
  byte local_132;
  undefined1 local_12e;
  undefined1 local_12d;
  undefined8 local_128;
  undefined8 uStack_120;
  uint local_118;
  
  uVar7 = FUN_100ff690(&local_2e4,0,0x2a4);
  local_2e8 = 0;
  uStack_318 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  local_2f0 = (ulonglong)CONCAT24(0x40,auStack_280);
  uStack_2f8 = 0;
  local_300 = 0;
  local_320 = (ulonglong)param_5;
  FUN_10068d18(uVar7,&local_320);
  uVar7 = FUN_1006b598(param_1,param_2,&local_320,param_4);
  uStack_2dc = 0;
  uStack_2d6 = 0;
  local_2e4 = 0;
  uStack_2d4 = 0;
  local_2d2 = 0;
  FUN_10068db8(uVar7,&local_2e4,param_3);
  local_13c = local_13c | local_132 ^ 0xff;
  local_2e4 = CONCAT53(local_2e4._3_5_,CONCAT12(local_13c,(undefined2)local_2e4)) &
              0xffffffffff0fffff;
  local_2e4 = CONCAT44(local_2e4._4_4_,CONCAT13(local_13b,(undefined3)local_2e4)) &
              0xffffffff08ffffff | 0x7000000;
  local_12e = FUN_100efc98(0xe4,local_13c & 0xf);
  uVar7 = FUN_100efc98(0xe4,extraout_x14 & 0xffffffff);
  uVar9 = 0;
  local_12d = (undefined1)uVar7;
  do {
    if (acStack_13a[uVar9] != '\0') {
      *(undefined1 *)((int)&local_2e4 + uVar9 + 5) = 0xf;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 8);
  uStack_2d6 = 0xff00;
  uStack_2d4 = 0xffff;
  local_2d2 = 0xff;
  uVar8 = FUN_10068e08(uVar7,param_6,&local_320);
  if ((uVar8 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    local_338 = 0x200;
    local_334 = 1;
    local_340 = FUN_100fece0(0x200);
    iStack_33c = local_340;
    uVar4 = FUN_100efa80(&local_340,param_5);
    local_324 = 1;
    local_328 = 0x80;
    uVar7 = FUN_100fece0(0x80);
    local_330 = (undefined4)uVar7;
    uStack_32c = local_330;
    FUN_100693b0(uVar7,&local_320,&local_330,param_3);
    local_118 = 0;
    local_128 = 0;
    uStack_120 = 0;
    uVar7 = FUN_1006f7b8(param_1,param_2,&local_320,&local_330,param_3);
    uVar7 = FUN_1006be68(uVar7,&local_320,&local_330);
    FUN_1006bf08(uVar7,&local_320,&local_330);
    uVar9 = local_118;
    if ((local_118 & 0x3f00) == 0) {
      FUN_100ee638(&local_320,local_118);
    }
    uVar5 = FUN_100ee580(&local_320,3,0);
    uVar3 = (undefined4)local_128;
    uVar6 = FUN_100efc98(local_12d,7);
    local_378 = uVar6 & 0xff | 0x100;
    local_374 = uVar3;
    local_370 = 0x1a4;
    local_36c = 0;
    local_380 = 7;
    local_388 = 0x2000;
    local_38c = &local_330;
    local_390 = (int *)&local_320;
    local_384 = uVar5;
    local_37c = uVar9;
    FUN_100ef510(&local_390,0x28);
    local_364 = 0xa4;
    uStack_360 = 0;
    local_36c = 0xa4;
    uStack_368 = uVar3;
    local_374 = 0x9c;
    local_378 = 0xff;
    local_37c = local_2c4;
    local_380 = 7;
    local_388 = 0x37;
    local_384 = uVar3;
    local_38c = &local_330;
    local_390 = (int *)&local_320;
    local_370 = uVar5;
    uVar7 = FUN_100ef510(&local_390,0x34);
    uVar7 = FUN_10069630(uVar7,&local_320,&local_330,(undefined4)local_128,param_3);
    uVar7 = FUN_100698f8(uVar7,&local_320,&local_330,(undefined4)local_128,param_3);
    FUN_10069bf0(uVar7,&local_320,&local_330,(undefined4)local_128,param_3);
    local_378 = 0xe4;
    local_374 = 0;
    local_380 = 0xf;
    local_37c = uVar3;
    local_384 = 0x410200;
    local_388 = 0x2036;
    local_38c = &local_330;
    local_390 = (int *)&local_320;
    FUN_100ef510(&local_390,0x20);
    local_388 = 0x3e;
    local_384 = 0;
    local_38c = &local_330;
    local_390 = (int *)&local_320;
    FUN_100ef510(&local_390,0x10);
    FUN_100efd30((int)local_320,&local_340,0);
    if ((uStack_318 & 1) != 0) {
      FUN_100efe18((int)local_320,&local_340,0,0,0xbc0,local_320._4_4_ & 1);
    }
    uVar7 = FUN_100efe18((int)local_320,&local_340,3,1,0x440,0);
    uVar9 = 0;
    do {
      if (acStack_13a[uVar9] != '\0') {
        abStack_284[(int)uVar9 >> 3] =
             abStack_284[(int)uVar9 >> 3] | (byte)(1 << (ulonglong)(uVar9 & 7));
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 8);
    FUN_10069d68(uVar7,&local_320,&local_340,param_3);
    if ((char)local_2e4 != '\0') {
      FUN_100efff8(&local_340,0,(char)local_2e4,4);
    }
    if (local_2e4._1_1_ != '\0') {
      FUN_100effa0(&local_340,1,local_2e4._1_1_,2);
    }
    uVar9 = (uint)(param_3 >> 0x1e);
    if (local_2e4._2_1_ != '\0') {
      FUN_100effa0(&local_340,2,local_2e4._2_1_,(~uVar9 & 1) + 1);
    }
    if (local_2e4._3_1_ != '\0') {
      FUN_100effa0(&local_340,3,local_2e4._3_1_,(~uVar9 & 1) + 1);
    }
    if (local_2e4._4_1_ != '\0') {
      FUN_100effa0(&local_340,4,local_2e4._4_1_,2);
    }
    uVar9 = 0;
    do {
      if (acStack_13a[uVar9] != '\0') {
        FUN_100effa0(&local_340,uVar9 + 5,0xf,2);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 8);
    FUN_100f0050(&local_340,0,0xf);
    if (local_2f0._5_1_ != 0) {
      local_388 = 0x2000068;
      local_38c = (undefined4 *)0x2;
      local_390 = &local_340;
      local_384 = (uint)local_2f0._5_1_;
      FUN_100ef760(&local_390,0x10);
    }
    FUN_100ee638(&local_320,(undefined4)local_128);
    FUN_100efae8(&local_340,&local_330,uVar4);
    iVar2 = local_340;
    FUN_100ef6d8(param_6,local_340,iStack_33c - local_340);
    if (*(int *)(param_1 + 8) != 0) {
      pbVar1 = (byte *)(*param_6 + ((uint)(param_6[1] - *param_6) >> 1));
      *pbVar1 = *pbVar1 ^ 0x2a;
    }
    uVar7 = FUN_100ef888(param_6);
    FUN_1006ac20(uVar7,&local_320,param_7);
    FUN_100fed00(local_330);
    FUN_100fed00(iVar2);
    uVar7 = 1;
  }
  return uVar7;
}


/*
 * FUN_1007f598 at 1007f598
 * undefined FUN_1007f598(void)
 * Address ranges: 1007f598-1007f97b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1007f598(undefined4 param_1,int param_2,undefined8 param_3,uint param_4,int *param_5,
            undefined1 param_6,undefined8 *param_7)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  char cVar8;
  undefined8 uVar9;
  ulonglong *local_550;
  undefined4 *local_54c;
  undefined4 local_548;
  uint local_544;
  int local_530;
  int iStack_52c;
  undefined4 local_528;
  undefined1 local_524;
  undefined4 local_520;
  undefined4 uStack_51c;
  undefined4 local_518;
  undefined1 local_514;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined4 local_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  ulonglong local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined1 auStack_490 [20];
  undefined1 local_47c;
  undefined1 local_47b;
  undefined1 auStack_47a [66];
  undefined8 local_438;
  undefined4 local_430;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  ulonglong uStack_348;
  undefined8 local_340;
  undefined7 uStack_338;
  char cStack_331;
  undefined4 local_330;
  undefined1 auStack_f0 [176];
  
  local_510 = CONCAT44(local_510._4_4_,auStack_f0);
  uStack_500 = 0;
  local_4d0 = 0;
  local_4e0 = local_510;
  uStack_508 = param_3;
  uStack_4d8 = param_3;
  FUN_100ff690(auStack_490,0,0x3a0);
  uStack_358 = 0;
  local_360 = 0;
  uStack_350 = 0;
  local_340 = 0;
  uStack_418 = 0;
  local_420 = 0;
  uStack_408 = 0;
  local_410 = 0;
  uStack_3f8 = 0;
  local_400 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_348 = CONCAT44(param_2,*(undefined4 *)(param_2 + 0x44)) & 0xffffffff000fffff;
  uStack_3d8 = 0;
  local_3e0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  local_3c0 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  cStack_331 = (param_4 - 0x10051 & 0xfffeffff) != 0;
  uStack_398 = 0;
  local_3a0 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  local_380 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_338 = 0;
  local_330 = 0;
  uVar3 = FUN_100ef9e8(param_4);
  local_47b = uVar3 < 0x50;
  local_47c = 0;
  local_4f0 = 0;
  local_4c0 = 0;
  uStack_4b0 = 0;
  uStack_4b8 = 0;
  local_4a0 = 0;
  uStack_4a8 = 0;
  local_4c8 = (ulonglong)param_4;
  uStack_418 = 0x11080000210800;
  local_420 = 0x31080000410800;
  local_498 = (ulonglong)CONCAT24(0x40,auStack_47a);
  local_4e8 = 0;
  local_410 = CONCAT44(local_410._4_4_,0x410802);
  local_438 = 0x41040000110400;
  local_430 = 0x20000d00;
  local_510 = 0x43425844;
  uStack_508 = 0;
  uStack_500 = 0x100000000;
  uStack_4f8 = 0x300000000;
  FUN_100ef6d8(param_5,&local_510,0x2c);
  piVar1 = param_5 + 1;
  uVar9 = 0;
  *(int *)(*param_5 + 0x20) = *piVar1 - *param_5;
  uStack_508 = CONCAT35(uStack_508._5_3_,0x100000800);
  uVar4 = FUN_100fece0(0x800);
  local_510 = CONCAT44(uVar4,uVar4);
  if (cStack_331 != '\0') {
    cVar8 = '\0';
    uVar3 = 0;
    do {
      iVar2 = uVar3 + 6;
      uVar3 = uVar3 + 1;
      *(char *)((int)&uStack_3b0 + iVar2) = cVar8;
      cVar8 = cVar8 + '\x01';
    } while (uVar3 < 0x11);
  }
  local_524 = 1;
  local_528 = 0x200;
  local_530 = FUN_100fece0(0x200);
  iStack_52c = local_530;
  uVar4 = FUN_100efa80(&local_530,(undefined4)local_4c8);
  FUN_100efd30((undefined4)local_4c8,&local_530,0);
  local_514 = 1;
  local_518 = 0x80;
  local_520 = FUN_100fece0(0x80);
  uStack_51c = local_520;
  FUN_1007e300(param_1,&local_520,&local_4e0,param_6);
  local_548 = 0x3e;
  local_544 = 0;
  local_54c = &local_520;
  local_550 = &local_4c8;
  uVar6 = FUN_100ef510(&local_550,0x10);
  uVar6 = FUN_100795f0(uVar6,&local_530,&local_4e0);
  uVar3 = 0;
  if (cStack_331 == '\0') {
    if ((uint)uStack_398 != 0) {
      do {
        uVar6 = FUN_100eff00(&local_530,uVar3,
                             *(undefined1 *)
                              ((int)&local_3c0 + *(byte *)((int)&uStack_3b0 + uVar3 + 6) + 4));
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)uStack_398);
    }
  }
  else {
    do {
      cVar8 = *(char *)((int)&local_3c0 + uVar3 + 4);
      if (cVar8 != '\0') {
        uVar6 = FUN_100eff00(&local_530,*(undefined1 *)((int)&uStack_3b0 + uVar3 + 6),cVar8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x11);
  }
  FUN_10079348(uVar6,&local_530,&local_4e0);
  if (local_498._5_1_ != 0) {
    local_548 = 0x2000068;
    local_54c = (undefined4 *)0x2;
    local_550 = (ulonglong *)&local_530;
    local_544 = (uint)local_498._5_1_;
    FUN_100ef760(&local_550,0x10);
  }
  FUN_100efae8(&local_530,&local_520,uVar4);
  iVar2 = local_530;
  FUN_100ef6d8(&local_510,local_530,iStack_52c - local_530);
  FUN_100fed00(local_520);
  uVar6 = FUN_100fed00(iVar2);
  uVar7 = FUN_10079830(uVar6,param_5,&local_4e0);
  iVar2 = (int)local_510;
  if ((uVar7 & 1) != 0) {
    *(int *)(*param_5 + 0x24) = *piVar1 - *param_5;
    iVar5 = FUN_10078fa0(uVar7,param_5,&local_4e0);
    if (iVar5 != 0) {
      *(int *)(*param_5 + 0x28) = *piVar1 - *param_5;
      FUN_100ef6d8(param_5,iVar2,local_510._4_4_ - iVar2);
      FUN_100ef888(param_5);
      if (param_7 != (undefined8 *)0x0) {
        param_7[1] = uStack_4b8;
        *param_7 = local_4c0;
        param_7[3] = uStack_4a8;
        param_7[2] = uStack_4b0;
        param_7[4] = local_4a0;
      }
      uVar9 = 1;
    }
  }
  FUN_100fed00(iVar2);
  return uVar9;
}


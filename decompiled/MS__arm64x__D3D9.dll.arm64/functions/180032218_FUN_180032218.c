/*
 * FUN_180032218 at 180032218
 * undefined FUN_180032218(void)
 * Address ranges: 180032218-18003283b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180032218(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
             undefined8 param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong extraout_x14;
  longlong lVar14;
  undefined4 uVar15;
  longlong local_610;
  longlong lStack_608;
  undefined8 local_600;
  undefined1 local_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined1 local_5d8;
  undefined8 local_5d0;
  longlong local_5c8;
  longlong lStack_5c0;
  undefined8 local_5b8;
  undefined1 local_5b0;
  int local_5a0;
  uint uStack_59c;
  uint local_598;
  undefined1 *local_570;
  undefined2 local_568;
  undefined8 local_55c;
  undefined6 uStack_554;
  undefined2 uStack_54e;
  undefined2 uStack_54c;
  undefined1 local_54a;
  undefined5 uStack_549;
  undefined8 uStack_544;
  undefined2 local_53c;
  byte local_53a;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined4 local_4f0;
  byte local_4ec [4];
  undefined1 auStack_4e8 [328];
  byte local_3a0;
  undefined1 local_39f;
  char local_39e [8];
  byte local_396;
  undefined1 local_392;
  undefined1 local_391;
  ulonglong local_388;
  undefined8 uStack_380;
  uint local_378;
  
  local_5d0 = 0;
  local_5b8 = 0x100;
  local_5b0 = 1;
  local_5c8 = thunk_FUN_180102f80(0x100);
  if (param_6 == 0x40) {
    param_4 = param_4 & 0xfffeffffffffffff;
  }
  lStack_5c0 = local_5c8;
  func_0x000180222c50(&local_5a0,0,0x550);
  local_570 = auStack_4e8;
  uStack_530 = 0x11080300210803;
  uStack_538 = 0x31080300410803;
  uStack_520 = 0x11080400210804;
  uStack_528 = 0x31080400410804;
  local_568 = 0x40;
  uStack_510 = 0x11080500210805;
  uStack_518 = 0x31080500410805;
  local_4f8 = 0x41040000110400;
  uStack_500 = 0x11080000210800;
  uStack_508 = 0x31080000410800;
  local_4f0 = 0x20000d00;
  local_5a0 = param_6;
  FUN_18005ea08(param_1 + 0x38,param_1 + 0x48,&local_5a0,*(undefined1 *)(param_1 + 0x80));
  uStack_554 = 0;
  uStack_54e = 0;
  local_55c = 0;
  uStack_544 = 0;
  uStack_54c = 0;
  local_54a = 0;
  uStack_549 = 0;
  local_53c = 0;
  local_53a = 0;
  if ((param_4 >> 0x39 & 1) != 0) {
    uVar13 = param_4 >> 0x3a & 3;
    if (uVar13 - 1 < 3) {
      local_55c = 0xc;
    }
    else if (uVar13 == 0) {
      local_55c = 0x100000000;
    }
  }
  uVar10 = 0xf;
  if ((param_4 >> 0x38 & 1) != 0) {
    local_55c._0_2_ = CONCAT11(0xf,(byte)local_55c);
  }
  local_55c = CONCAT53(local_55c._3_5_,CONCAT12(local_396 ^ 0xf | local_3a0,(undefined2)local_55c))
              & 0xffffffffff0fffff;
  local_55c = CONCAT44(local_55c._4_4_,CONCAT13(local_39f,(undefined3)local_55c)) &
              0xffffffff0fffffff | 0x7000000;
  local_392 = FUN_1800f5ea8(0xe4);
  uVar8 = FUN_1800f5ea8(0xe4,extraout_x14 & 0xffffffff);
  uVar13 = 0;
  local_391 = (char)uVar8;
  do {
    if (local_39e[uVar13] != '\0') {
      *(undefined1 *)((longlong)&local_55c + (ulonglong)((int)uVar13 + 5)) = uVar10;
    }
    uVar11 = (int)uVar13 + 1;
    uVar13 = (ulonglong)uVar11;
  } while (uVar11 < 8);
  uStack_54e = 0xff00;
  uStack_54c = 0xffff;
  local_54a = 0xff;
  local_53a = (byte)(param_4 >> 0x30) & 1;
  uVar13 = FUN_18005cd50(uVar8,&local_5c8,&local_5a0);
  lVar14 = local_5c8;
  if ((uVar13 & 1) != 0) {
    local_5f8 = 1;
    local_600 = 0x200;
    local_610 = thunk_FUN_180102f80(0x200);
    lStack_608 = local_610;
    uVar6 = FUN_1800f5ce8(&local_610,param_6);
    local_5f0 = 0;
    uStack_5e8 = 0;
    local_5e0 = 0x80;
    local_5d8 = 1;
    local_5f0 = thunk_FUN_180102f80(0x80);
    uStack_5e8 = local_5f0;
    FUN_18005cdf8(local_5f0,&local_5a0,&local_5f0,param_4);
    local_378 = 0;
    local_388 = 0;
    uStack_380 = 0;
    uVar8 = FUN_180062948(param_1 + 0x38,param_1 + 0x48,&local_5a0,&local_5f0,param_4);
    uVar8 = FUN_18005ef80(uVar8,&local_5a0,&local_5f0);
    FUN_18005f000(uVar8,&local_5a0,&local_5f0);
    if ((local_378 & 0x3f00) == 0) {
      FUN_1800f4370(&local_5a0,local_378);
    }
    uVar7 = FUN_1800f42d0(&local_5a0,3,0);
    uVar13 = local_388;
    uVar2 = (undefined4)local_388;
    FUN_1800f5ea8(local_391,7);
    uVar15 = 0;
    FUN_1800f5730(&local_5a0,&local_5f0,0x2000,uVar7,7);
    uVar8 = FUN_1800f5730(&local_5a0,&local_5f0,0x37,uVar13 & 0xffffffff,7,uStack_530._4_4_,0xff,
                          0x9c,uVar7,CONCAT44(uVar15,0xa4),uVar2,0xa4,0);
    uVar8 = FUN_18005d058(uVar8,&local_5a0,&local_5f0,local_388 & 0xffffffff,param_4);
    uVar8 = FUN_18005d2f8(uVar8,&local_5a0,&local_5f0,local_388 & 0xffffffff,param_4);
    FUN_18005d5d0(uVar8,&local_5a0,&local_5f0,local_388 & 0xffffffff,param_4);
    FUN_1800f5730(&local_5a0,&local_5f0,0x2036,0x410200,0xf,uVar13 & 0xffffffff,0xe4,0);
    FUN_1800f5730(&local_5a0,&local_5f0,0x3e,0);
    FUN_1800f5f08(local_5a0,&local_610,0);
    if ((local_598 & 1) != 0) {
      FUN_1800f5fb8(local_5a0,&local_610,0,0,0xc20,uStack_59c & 1);
    }
    uVar8 = FUN_1800f5fb8(local_5a0,&local_610,3,1,0x4d0,0);
    uVar13 = 0;
    do {
      uVar11 = (uint)uVar13;
      if (local_39e[uVar13] != '\0') {
        local_4ec[(int)uVar11 >> 3] =
             local_4ec[(int)uVar11 >> 3] | (byte)(1 << (ulonglong)(uVar11 & 7));
      }
      uVar13 = (ulonglong)(uVar11 + 1);
    } while (uVar11 + 1 < 8);
    FUN_18005d750(uVar8,&local_5a0,&local_610,param_4);
    bVar5 = local_53a;
    iVar12 = 6;
    if (local_53a == 0) {
      iVar12 = 2;
    }
    if ((byte)local_55c != 0) {
      uVar2 = 0x4003864;
      if (local_53a == 0) {
        uVar2 = 0x4002064;
      }
      FUN_1800f5b00(&local_610,4,uVar2,(uint)(byte)local_55c << 4 | 0x101002,0,1);
    }
    uVar2 = 0x3003062;
    uVar7 = 0x3001062;
    if (local_55c._1_1_ != 0) {
      uVar15 = uVar2;
      if (bVar5 == 0) {
        uVar15 = uVar7;
      }
      FUN_1800f5b00(&local_610,3,uVar15,(uint)local_55c._1_1_ << 4 | 0x101002,1);
    }
    if (local_55c._2_1_ != 0) {
      iVar1 = iVar12;
      if ((param_4 & 0x80000000000000) != 0) {
        iVar1 = 1;
      }
      FUN_1800f5b00(&local_610,3,iVar1 << 0xb | 0x3000062,(uint)local_55c._2_1_ << 4 | 0x101002,2);
    }
    if (local_55c._3_1_ != 0) {
      if ((param_4 & 0x80000000000000) != 0) {
        iVar12 = 1;
      }
      FUN_1800f5b00(&local_610,3,iVar12 << 0xb | 0x3000062,(uint)local_55c._3_1_ << 4 | 0x101002,3);
    }
    if (local_55c._4_1_ != 0) {
      uVar15 = uVar2;
      if (bVar5 == 0) {
        uVar15 = uVar7;
      }
      FUN_1800f5b00(&local_610,3,uVar15,(uint)local_55c._4_1_ << 4 | 0x101002,4);
    }
    if (bVar5 == 0) {
      uVar2 = uVar7;
    }
    uVar13 = 0;
    do {
      if (local_39e[uVar13] != '\0') {
        FUN_1800f5b00(&local_610,3,uVar2,0x1010f2,(int)uVar13 + 5);
      }
      uVar11 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar11;
    } while (uVar11 < 8);
    FUN_1800f5b00(&local_610,3,0x3000065,0x1020f2,0);
    if (local_568._1_1_ != '\0') {
      FUN_1800f5b00(&local_610,2,0x2000068);
    }
    FUN_1800f4370(&local_5a0,local_388 & 0xffffffff);
    FUN_1800f5d48(&local_610,&local_5f0,uVar6);
    lVar3 = local_610;
    FUN_1800f5a90(&local_5c8,local_610,lStack_608 - local_610);
    lVar4 = lStack_5c0;
    lVar14 = local_5c8;
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar13 = (ulonglong)(lStack_5c0 - local_5c8) >> 1;
      *(byte *)(uVar13 + local_5c8) = *(byte *)(uVar13 + local_5c8) ^ 0x2a;
    }
    FUN_1800f5ba0(&local_5c8);
    thunk_FUN_180102fc0(local_5f0);
    thunk_FUN_180102fc0(lVar3);
    plVar9 = *(longlong **)(param_2 + (param_3 & 0xffffffff) * 0x18c0 + 0x6b0);
    (**(code **)(*plVar9 + 0x78))(plVar9,lVar14,lVar4 - lVar14,0,&local_5d0);
  }
  uVar8 = local_5d0;
  thunk_FUN_180102fc0(lVar14);
  return uVar8;
}


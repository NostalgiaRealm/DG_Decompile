/*
 * FUN_18004fd48 at 18004fd48
 * undefined FUN_18004fd48(void)
 * Address ranges: 18004fd48-180050343
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18004fd48(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong extraout_x14;
  longlong lVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  longlong local_600;
  longlong lStack_5f8;
  undefined8 local_5f0;
  undefined1 local_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined1 local_5c8;
  longlong local_5c0;
  longlong lStack_5b8;
  undefined8 local_5b0;
  undefined1 local_5a8;
  undefined4 local_5a0;
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
  
  local_5b0 = 0x100;
  local_5a8 = 1;
  uVar14 = 0;
  local_5c0 = thunk_FUN_180102f80(0x100);
  lStack_5b8 = local_5c0;
  func_0x000180222c50(&local_5a0,0,0x550);
  local_5a0 = 0x51;
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
  FUN_18005ea08(param_1 + 0x3c,param_1 + 0x50,&local_5a0,*(undefined1 *)(param_1 + 0x88));
  uStack_554 = 0;
  uStack_54e = 0;
  local_55c = 0;
  uStack_544 = 0;
  uStack_54c = 0;
  local_54a = 0;
  uStack_549 = 0;
  local_53c = 0;
  local_53a = 0;
  if ((param_2 >> 0x39 & 1) != 0) {
    uVar12 = param_2 >> 0x3a & 3;
    if (uVar12 - 1 < 3) {
      local_55c = 0xc;
    }
    else if (uVar12 == 0) {
      local_55c = 0x100000000;
    }
  }
  uVar9 = 0xf;
  if ((param_2 >> 0x38 & 1) != 0) {
    local_55c._0_2_ = CONCAT11(0xf,(byte)local_55c);
  }
  local_55c = CONCAT53(local_55c._3_5_,CONCAT12(local_396 ^ 0xf | local_3a0,(undefined2)local_55c))
              & 0xffffffffff0fffff;
  local_55c = CONCAT44(local_55c._4_4_,CONCAT13(local_39f,(undefined3)local_55c)) &
              0xffffffff0fffffff | 0x7000000;
  local_392 = FUN_1800f5ea8(0xe4);
  uVar8 = FUN_1800f5ea8(0xe4,extraout_x14 & 0xffffffff);
  uVar12 = 0;
  local_391 = (char)uVar8;
  do {
    if (local_39e[uVar12] != '\0') {
      *(undefined1 *)((longlong)&local_55c + (ulonglong)((int)uVar12 + 5)) = uVar9;
    }
    uVar10 = (int)uVar12 + 1;
    uVar12 = (ulonglong)uVar10;
  } while (uVar10 < 8);
  uStack_54e = 0xff00;
  uStack_54c = 0xffff;
  local_54a = 0xff;
  local_53a = (byte)(param_2 >> 0x30) & 1;
  uVar12 = FUN_18005cd50(uVar8,&local_5c0,&local_5a0);
  lVar13 = local_5c0;
  if ((uVar12 & 1) != 0) {
    local_5e8 = 1;
    local_5f0 = 0x200;
    local_600 = thunk_FUN_180102f80(0x200);
    lStack_5f8 = local_600;
    uVar6 = FUN_1800f5ce8(&local_600,0x51);
    local_5e0 = 0;
    uStack_5d8 = 0;
    local_5d0 = 0x80;
    local_5c8 = 1;
    local_5e0 = thunk_FUN_180102f80(0x80);
    uStack_5d8 = local_5e0;
    FUN_18005cdf8(local_5e0,&local_5a0,&local_5e0,param_2);
    local_378 = 0;
    local_388 = 0;
    uStack_380 = 0;
    uVar14 = FUN_180062948(param_1 + 0x3c,param_1 + 0x50,&local_5a0,&local_5e0,param_2);
    uVar14 = FUN_18005ef80(uVar14,&local_5a0,&local_5e0);
    FUN_18005f000(uVar14,&local_5a0,&local_5e0);
    if ((local_378 & 0x3f00) == 0) {
      FUN_1800f4370(&local_5a0,local_378);
    }
    uVar7 = FUN_1800f42d0(&local_5a0,3,0);
    uVar12 = local_388;
    uVar2 = (undefined4)local_388;
    FUN_1800f5ea8(local_391,7);
    uVar15 = 0;
    FUN_1800f5730(&local_5a0,&local_5e0,0x2000,uVar7,7);
    uVar14 = FUN_1800f5730(&local_5a0,&local_5e0,0x37,uVar12 & 0xffffffff,7,uStack_530._4_4_,0xff,
                           0x9c,uVar7,CONCAT44(uVar15,0xa4),uVar2,0xa4,0);
    uVar14 = FUN_18005d058(uVar14,&local_5a0,&local_5e0,local_388 & 0xffffffff,param_2);
    uVar14 = FUN_18005d2f8(uVar14,&local_5a0,&local_5e0,local_388 & 0xffffffff,param_2);
    FUN_18005d5d0(uVar14,&local_5a0,&local_5e0,local_388 & 0xffffffff,param_2);
    FUN_1800f5730(&local_5a0,&local_5e0,0x2036,0x410200,0xf,uVar12 & 0xffffffff,0xe4,0);
    FUN_1800f5730(&local_5a0,&local_5e0,0x3e,0);
    FUN_1800f5f08(local_5a0,&local_600,0);
    if ((local_598 & 1) != 0) {
      FUN_1800f5fb8(local_5a0,&local_600,0,0,0xc20,uStack_59c & 1);
    }
    uVar14 = FUN_1800f5fb8(local_5a0,&local_600,3,1,0x4d0,0);
    uVar12 = 0;
    do {
      uVar10 = (uint)uVar12;
      if (local_39e[uVar12] != '\0') {
        local_4ec[(int)uVar10 >> 3] =
             local_4ec[(int)uVar10 >> 3] | (byte)(1 << (ulonglong)(uVar10 & 7));
      }
      uVar12 = (ulonglong)(uVar10 + 1);
    } while (uVar10 + 1 < 8);
    FUN_18005d750(uVar14,&local_5a0,&local_600,param_2);
    bVar5 = local_53a;
    iVar11 = 6;
    if (local_53a == 0) {
      iVar11 = 2;
    }
    if ((byte)local_55c != 0) {
      uVar2 = 0x4003864;
      if (local_53a == 0) {
        uVar2 = 0x4002064;
      }
      FUN_1800f5b00(&local_600,4,uVar2,(uint)(byte)local_55c << 4 | 0x101002,0,1);
    }
    uVar2 = 0x3003062;
    uVar7 = 0x3001062;
    if (local_55c._1_1_ != 0) {
      uVar15 = uVar2;
      if (bVar5 == 0) {
        uVar15 = uVar7;
      }
      FUN_1800f5b00(&local_600,3,uVar15,(uint)local_55c._1_1_ << 4 | 0x101002,1);
    }
    if (local_55c._2_1_ != 0) {
      iVar1 = iVar11;
      if ((param_2 & 0x80000000000000) != 0) {
        iVar1 = 1;
      }
      FUN_1800f5b00(&local_600,3,iVar1 << 0xb | 0x3000062,(uint)local_55c._2_1_ << 4 | 0x101002,2);
    }
    if (local_55c._3_1_ != 0) {
      if ((param_2 & 0x80000000000000) != 0) {
        iVar11 = 1;
      }
      FUN_1800f5b00(&local_600,3,iVar11 << 0xb | 0x3000062,(uint)local_55c._3_1_ << 4 | 0x101002,3);
    }
    if (local_55c._4_1_ != 0) {
      uVar15 = uVar2;
      if (bVar5 == 0) {
        uVar15 = uVar7;
      }
      FUN_1800f5b00(&local_600,3,uVar15,(uint)local_55c._4_1_ << 4 | 0x101002,4);
    }
    if (bVar5 == 0) {
      uVar2 = uVar7;
    }
    uVar12 = 0;
    do {
      if (local_39e[uVar12] != '\0') {
        FUN_1800f5b00(&local_600,3,uVar2,0x1010f2,(int)uVar12 + 5);
      }
      uVar10 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar10;
    } while (uVar10 < 8);
    FUN_1800f5b00(&local_600,3,0x3000065,0x1020f2,0);
    if (local_568._1_1_ != '\0') {
      FUN_1800f5b00(&local_600,2,0x2000068);
    }
    FUN_1800f4370(&local_5a0,local_388 & 0xffffffff);
    FUN_1800f5d48(&local_600,&local_5e0,uVar6);
    lVar3 = local_600;
    FUN_1800f5a90(&local_5c0,local_600,lStack_5f8 - local_600);
    lVar4 = lStack_5b8;
    lVar13 = local_5c0;
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar12 = (ulonglong)(lStack_5b8 - local_5c0) >> 1;
      *(byte *)(uVar12 + local_5c0) = *(byte *)(uVar12 + local_5c0) ^ 0x2a;
    }
    uVar14 = FUN_1800f5ba0(&local_5c0);
    FUN_18005e480(uVar14,&local_5a0,param_4);
    thunk_FUN_180102fc0(local_5e0);
    uVar14 = thunk_FUN_180102fc0(lVar3);
    uVar14 = FUN_1800f41c8(uVar14,lVar4 - lVar13,lVar13);
  }
  thunk_FUN_180102fc0(lVar13);
  return uVar14;
}


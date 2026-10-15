/*
 * FUN_18015fa30 at 18015fa30
 * undefined FUN_18015fa30(void)
 * Address ranges: 18015fa30-180160017
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18015fa30(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 local_650 [2];
  uint local_648;
  uint local_640;
  undefined8 local_638;
  undefined4 local_630;
  undefined8 local_628;
  undefined4 local_620;
  undefined4 local_618;
  undefined8 local_610;
  longlong local_5f0;
  longlong lStack_5e8;
  undefined8 local_5e0;
  undefined1 local_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined1 local_5b8;
  longlong local_5b0;
  longlong lStack_5a8;
  undefined8 local_5a0;
  undefined1 local_598;
  undefined4 local_590;
  uint uStack_58c;
  uint local_588;
  undefined1 *local_560;
  undefined2 local_558;
  undefined8 local_54c;
  undefined6 uStack_544;
  undefined2 uStack_53e;
  undefined2 uStack_53c;
  undefined1 local_53a;
  undefined5 uStack_539;
  undefined8 uStack_534;
  undefined2 local_52c;
  byte local_52a;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined4 local_4e0;
  byte local_4dc [4];
  undefined1 auStack_4d8 [328];
  byte local_390;
  byte local_38f;
  char local_38e [8];
  byte local_386;
  undefined1 local_382;
  undefined1 local_381;
  ulonglong local_378;
  undefined8 uStack_370;
  uint local_368;
  
  local_5a0 = 0x100;
  local_598 = 1;
  uVar11 = 0;
  local_5b0 = FUN_1802229a8(0x100);
  lStack_5a8 = local_5b0;
  FUN_180222c50(&local_590,0,0x550);
  local_590 = 0x51;
  local_560 = auStack_4d8;
  uStack_520 = 0x11080300210803;
  uStack_528 = 0x31080300410803;
  uStack_510 = 0x11080400210804;
  uStack_518 = 0x31080400410804;
  local_558 = 0x40;
  uStack_500 = 0x11080500210805;
  uStack_508 = 0x31080500410805;
  local_4e8 = 0x41040000110400;
  uStack_4f0 = 0x11080000210800;
  uStack_4f8 = 0x31080000410800;
  local_4e0 = 0x20000d00;
  FUN_18016f798(param_1 + 0x3c,param_1 + 0x50,&local_590,*(undefined1 *)(param_1 + 0x88));
  uStack_544 = 0;
  uStack_53e = 0;
  local_54c = 0;
  uStack_534 = 0;
  uStack_53c = 0;
  local_53a = 0;
  uStack_539 = 0;
  local_52c = 0;
  local_52a = 0;
  if ((param_2 >> 0x39 & 1) != 0) {
    uVar9 = param_2 >> 0x3a & 3;
    if (uVar9 - 1 < 3) {
      local_54c = 0xc;
    }
    else if (uVar9 == 0) {
      local_54c = 0x100000000;
    }
  }
  if ((param_2 >> 0x38 & 1) != 0) {
    local_54c._0_2_ = CONCAT11(0xf,(char)local_54c);
  }
  local_54c = CONCAT53(local_54c._3_5_,CONCAT12(local_386 ^ 0xf | local_390,(undefined2)local_54c))
              & 0xffffffffff0fffff;
  uVar7 = local_38f & 0xf | 7;
  uVar9 = (ulonglong)uVar7;
  local_54c._0_4_ = CONCAT13((char)uVar7,(undefined3)local_54c);
  local_382 = FUN_180213268(0xe4);
  uVar6 = FUN_180213268(0xe4,uVar9 & 0xffffffff);
  uVar9 = 0;
  local_381 = (char)uVar6;
  do {
    if (local_38e[uVar9] != '\0') {
      *(undefined1 *)((longlong)&local_54c + (ulonglong)((int)uVar9 + 5)) = 0xf;
    }
    uVar7 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar7;
  } while (uVar7 < 8);
  uStack_53e = 0xff00;
  uStack_53c = 0xffff;
  local_53a = 0xff;
  local_52a = (byte)(param_2 >> 0x30) & 1;
  uVar9 = FUN_18016d490(uVar6,&local_5b0,&local_590);
  lVar10 = local_5b0;
  if ((uVar9 & 1) != 0) {
    local_5d8 = 1;
    local_5e0 = 0x200;
    local_5f0 = FUN_1802229a8(0x200);
    lStack_5e8 = local_5f0;
    uVar3 = FUN_1802130a8(&local_5f0,0x51);
    local_5d0 = 0;
    uStack_5c8 = 0;
    local_5c0 = 0x80;
    local_5b8 = 1;
    local_5d0 = FUN_1802229a8(0x80);
    uStack_5c8 = local_5d0;
    FUN_18016d538(local_5d0,&local_590,&local_5d0,param_2);
    local_368 = 0;
    local_378 = 0;
    uStack_370 = 0;
    uVar11 = FUN_180173fe8(param_1 + 0x3c,param_1 + 0x50,&local_590,&local_5d0,param_2);
    uVar11 = FUN_18016fff0(uVar11,&local_590,&local_5d0);
    FUN_180170090(uVar11,&local_590,&local_5d0);
    uVar7 = local_368;
    if ((local_368 & 0x3f00) == 0) {
      FUN_180213800(&local_590,local_368);
    }
    uVar4 = FUN_180213760(&local_590,3,0);
    uVar9 = local_378;
    uVar8 = (undefined4)local_378;
    uVar5 = FUN_180213268(local_381,7);
    local_628 = 0;
    local_640 = uVar5 & 0xff | 0x100;
    local_638._0_4_ = uVar8;
    local_630 = 0x1a4;
    local_650[0] = 7;
    local_648 = uVar7;
    FUN_180214c88(&local_590,&local_5d0,0x2000,uVar4,local_650,0x30);
    local_610 = 0;
    local_618 = 0xa4;
    local_628 = CONCAT44(local_628._4_4_,0xa4);
    local_638 = CONCAT44(local_638._4_4_,0x9c);
    local_640 = 0xff;
    local_620 = uVar8;
    local_648 = uStack_520._4_4_;
    local_650[0] = 7;
    local_630 = uVar4;
    uVar11 = FUN_180214c88(&local_590,&local_5d0,0x37,uVar9 & 0xffffffff,local_650,0x48);
    uVar11 = FUN_18016d818(uVar11,&local_590,&local_5d0,local_378 & 0xffffffff,param_2);
    uVar11 = FUN_18016db68(uVar11,&local_590,&local_5d0,local_378 & 0xffffffff,param_2);
    FUN_18016ded8(uVar11,&local_590,&local_5d0,local_378 & 0xffffffff,param_2);
    local_638 = 0;
    local_640 = 0xe4;
    local_650[0] = 0xf;
    local_648 = uVar8;
    FUN_180214c88(&local_590,&local_5d0,0x2036,0x410200,local_650,0x20);
    FUN_180214c88(&local_590,&local_5d0,0x3e,0,local_650,0);
    FUN_1802132f0(local_590,&local_5f0,0);
    if ((local_588 & 1) != 0) {
      FUN_1802133a8(local_590,&local_5f0,0,0,0xc20,uStack_58c & 1);
    }
    uVar11 = FUN_1802133a8(local_590,&local_5f0,3,1,0x4d0,0);
    uVar9 = 0;
    do {
      uVar7 = (uint)uVar9;
      if (local_38e[uVar9] != '\0') {
        local_4dc[(int)uVar7 >> 3] =
             local_4dc[(int)uVar7 >> 3] | (byte)(1 << (ulonglong)(uVar7 & 7));
      }
      uVar9 = (ulonglong)(uVar7 + 1);
    } while (uVar7 + 1 < 8);
    FUN_18016e098(uVar11,&local_590,&local_5f0,param_2);
    uVar8 = 6;
    if (local_52a == 0) {
      uVar8 = 2;
    }
    if ((char)local_54c != '\0') {
      uVar4 = 7;
      if (local_52a == 0) {
        uVar4 = 4;
      }
      FUN_180213588(&local_5f0,0,local_54c & 0xff,uVar4);
    }
    if (local_54c._1_1_ != '\0') {
      FUN_180213538(&local_5f0,1,local_54c._1_1_,uVar8);
    }
    if (local_54c._2_1_ != '\0') {
      uVar4 = uVar8;
      if ((param_2 & 0x80000000000000) != 0) {
        uVar4 = 1;
      }
      FUN_180213538(&local_5f0,2,local_54c._2_1_,uVar4);
    }
    if (local_54c._3_1_ != '\0') {
      uVar4 = uVar8;
      if ((param_2 & 0x80000000000000) != 0) {
        uVar4 = 1;
      }
      FUN_180213538(&local_5f0,3,local_54c._3_1_,uVar4);
    }
    if (local_54c._4_1_ != '\0') {
      FUN_180213538(&local_5f0,4,local_54c._4_1_,uVar8);
    }
    uVar9 = 0;
    do {
      if (local_38e[uVar9] != '\0') {
        FUN_180213538(&local_5f0,(int)uVar9 + 5,0xf,uVar8);
      }
      uVar7 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar7;
    } while (uVar7 < 8);
    FUN_1802135e0(&local_5f0,0,0xf);
    if (local_558._1_1_ != '\0') {
      FUN_180215058(&local_5f0,2,0x2000068,local_558._1_1_,local_650,0);
    }
    FUN_180213800(&local_590,local_378 & 0xffffffff);
    FUN_180213108(&local_5f0,&local_5d0,uVar3);
    lVar1 = local_5f0;
    FUN_180214fe8(&local_5b0,local_5f0,lStack_5e8 - local_5f0);
    lVar2 = lStack_5a8;
    lVar10 = local_5b0;
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar9 = (ulonglong)(lStack_5a8 - local_5b0) >> 1;
      *(byte *)(uVar9 + local_5b0) = *(byte *)(uVar9 + local_5b0) ^ 0x2a;
    }
    uVar11 = FUN_180212ef0(&local_5b0);
    FUN_18016ef50(uVar11,&local_590,param_4);
    FUN_1802229d8(local_5d0);
    uVar11 = FUN_1802229d8(lVar1);
    uVar11 = FUN_180212d48(uVar11,lVar2 - lVar10,lVar10);
  }
  FUN_1802229d8(lVar10);
  return uVar11;
}


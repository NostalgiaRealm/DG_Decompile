/*
 * FUN_18013ffc8 at 18013ffc8
 * undefined FUN_18013ffc8(void)
 * Address ranges: 18013ffc8-1801405e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18013ffc8(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
             undefined8 param_5,int param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  uint uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  code *extraout_x11;
  longlong lVar9;
  undefined4 local_660 [2];
  uint local_658;
  uint local_650;
  undefined8 local_648;
  undefined4 local_640;
  undefined8 local_638;
  undefined4 local_630;
  undefined4 local_628;
  undefined8 local_620;
  longlong local_600;
  longlong lStack_5f8;
  undefined8 local_5f0;
  undefined1 local_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined1 local_5c8;
  undefined4 local_5c0;
  undefined8 local_5b8;
  longlong local_5b0;
  longlong lStack_5a8;
  undefined8 local_5a0;
  undefined1 local_598;
  int local_590;
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
  
  local_5b8 = 0;
  local_5a0 = 0x100;
  local_598 = 1;
  local_5b0 = FUN_1802229a8(0x100);
  if (param_6 == 0x40) {
    param_4 = param_4 & 0xfffeffffffffffff;
  }
  lStack_5a8 = local_5b0;
  FUN_180222c50(&local_590,0,0x550);
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
  local_590 = param_6;
  FUN_18016f798(param_1 + 0x38,param_1 + 0x48,&local_590,*(undefined1 *)(param_1 + 0x80));
  uStack_544 = 0;
  uStack_53e = 0;
  local_54c = 0;
  uStack_534 = 0;
  uStack_53c = 0;
  local_53a = 0;
  uStack_539 = 0;
  local_52c = 0;
  local_52a = 0;
  if ((param_4 >> 0x39 & 1) != 0) {
    uVar8 = param_4 >> 0x3a & 3;
    if (uVar8 - 1 < 3) {
      local_54c = 0xc;
    }
    else if (uVar8 == 0) {
      local_54c = 0x100000000;
    }
  }
  if ((param_4 >> 0x38 & 1) != 0) {
    local_54c._0_2_ = CONCAT11(0xf,(char)local_54c);
  }
  local_54c = CONCAT53(local_54c._3_5_,CONCAT12(local_386 ^ 0xf | local_390,(undefined2)local_54c))
              & 0xffffffffff0fffff;
  uVar6 = local_38f & 0xf | 7;
  uVar8 = (ulonglong)uVar6;
  local_54c._0_4_ = CONCAT13((char)uVar6,(undefined3)local_54c);
  local_382 = FUN_180213268(0xe4);
  uVar5 = FUN_180213268(0xe4,uVar8 & 0xffffffff);
  uVar8 = 0;
  local_381 = (char)uVar5;
  do {
    if (local_38e[uVar8] != '\0') {
      *(undefined1 *)((longlong)&local_54c + (ulonglong)((int)uVar8 + 5)) = 0xf;
    }
    uVar6 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar6;
  } while (uVar6 < 8);
  uStack_53e = 0xff00;
  uStack_53c = 0xffff;
  local_53a = 0xff;
  local_52a = (byte)(param_4 >> 0x30) & 1;
  uVar8 = FUN_18016d490(uVar5,&local_5b0,&local_590);
  lVar9 = local_5b0;
  if ((uVar8 & 1) != 0) {
    local_5e8 = 1;
    local_5f0 = 0x200;
    local_600 = FUN_1802229a8(0x200);
    lStack_5f8 = local_600;
    local_5c0 = FUN_1802130a8(&local_600,param_6);
    local_5e0 = 0;
    uStack_5d8 = 0;
    local_5d0 = 0x80;
    local_5c8 = 1;
    local_5e0 = FUN_1802229a8(0x80);
    uStack_5d8 = local_5e0;
    FUN_18016d538(local_5e0,&local_590,&local_5e0,param_4);
    local_368 = 0;
    local_378 = 0;
    uStack_370 = 0;
    uVar5 = FUN_180173fe8(param_1 + 0x38,param_1 + 0x48,&local_590,&local_5e0,param_4);
    uVar5 = FUN_18016fff0(uVar5,&local_590,&local_5e0);
    FUN_180170090(uVar5,&local_590,&local_5e0);
    uVar6 = local_368;
    if ((local_368 & 0x3f00) == 0) {
      FUN_180213800(&local_590,local_368);
    }
    uVar3 = FUN_180213760(&local_590,3,0);
    uVar8 = local_378;
    uVar7 = (undefined4)local_378;
    uVar4 = FUN_180213268(local_381,7);
    local_638 = 0;
    local_650 = uVar4 & 0xff | 0x100;
    local_648._0_4_ = uVar7;
    local_640 = 0x1a4;
    local_660[0] = 7;
    local_658 = uVar6;
    FUN_180214c88(&local_590,&local_5e0,0x2000,uVar3,local_660,0x30);
    local_620 = 0;
    local_628 = 0xa4;
    local_638 = CONCAT44(local_638._4_4_,0xa4);
    local_648 = CONCAT44(local_648._4_4_,0x9c);
    local_650 = 0xff;
    local_630 = uVar7;
    local_658 = uStack_520._4_4_;
    local_660[0] = 7;
    local_640 = uVar3;
    uVar5 = FUN_180214c88(&local_590,&local_5e0,0x37,uVar8 & 0xffffffff,local_660,0x48);
    uVar5 = FUN_18016d818(uVar5,&local_590,&local_5e0,local_378 & 0xffffffff,param_4);
    uVar5 = FUN_18016db68(uVar5,&local_590,&local_5e0,local_378 & 0xffffffff,param_4);
    FUN_18016ded8(uVar5,&local_590,&local_5e0,local_378 & 0xffffffff,param_4);
    local_648 = 0;
    local_650 = 0xe4;
    local_660[0] = 0xf;
    local_658 = uVar7;
    FUN_180214c88(&local_590,&local_5e0,0x2036,0x410200,local_660,0x20);
    FUN_180214c88(&local_590,&local_5e0,0x3e,0,local_660,0);
    FUN_1802132f0(local_590,&local_600,0);
    if ((local_588 & 1) != 0) {
      FUN_1802133a8(local_590,&local_600,0,0,0xc20,uStack_58c & 1);
    }
    uVar5 = FUN_1802133a8(local_590,&local_600,3,1,0x4d0,0);
    uVar8 = 0;
    do {
      uVar6 = (uint)uVar8;
      if (local_38e[uVar8] != '\0') {
        local_4dc[(int)uVar6 >> 3] =
             local_4dc[(int)uVar6 >> 3] | (byte)(1 << (ulonglong)(uVar6 & 7));
      }
      uVar8 = (ulonglong)(uVar6 + 1);
    } while (uVar6 + 1 < 8);
    FUN_18016e098(uVar5,&local_590,&local_600,param_4);
    uVar7 = 6;
    if (local_52a == 0) {
      uVar7 = 2;
    }
    if ((char)local_54c != '\0') {
      uVar3 = 7;
      if (local_52a == 0) {
        uVar3 = 4;
      }
      FUN_180213588(&local_600,0,local_54c & 0xff,uVar3);
    }
    if (local_54c._1_1_ != '\0') {
      FUN_180213538(&local_600,1,local_54c._1_1_,uVar7);
    }
    if (local_54c._2_1_ != '\0') {
      uVar3 = uVar7;
      if ((param_4 & 0x80000000000000) != 0) {
        uVar3 = 1;
      }
      FUN_180213538(&local_600,2,local_54c._2_1_,uVar3);
    }
    if (local_54c._3_1_ != '\0') {
      uVar3 = uVar7;
      if ((param_4 & 0x80000000000000) != 0) {
        uVar3 = 1;
      }
      FUN_180213538(&local_600,3,local_54c._3_1_,uVar3);
    }
    if (local_54c._4_1_ != '\0') {
      FUN_180213538(&local_600,4,local_54c._4_1_,uVar7);
    }
    uVar8 = 0;
    do {
      if (local_38e[uVar8] != '\0') {
        FUN_180213538(&local_600,(int)uVar8 + 5,0xf,uVar7);
      }
      uVar6 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar6;
    } while (uVar6 < 8);
    FUN_1802135e0(&local_600,0,0xf);
    if (local_558._1_1_ != '\0') {
      FUN_180215058(&local_600,2,0x2000068,local_558._1_1_,local_660,0);
    }
    FUN_180213800(&local_590,local_378 & 0xffffffff);
    FUN_180213108(&local_600,&local_5e0,local_5c0);
    lVar1 = local_600;
    FUN_180214fe8(&local_5b0,local_600,lStack_5f8 - local_600);
    lVar2 = lStack_5a8;
    lVar9 = local_5b0;
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar8 = (ulonglong)(lStack_5a8 - local_5b0) >> 1;
      *(byte *)(uVar8 + local_5b0) = *(byte *)(uVar8 + local_5b0) ^ 0x2a;
    }
    FUN_180212ef0(&local_5b0);
    FUN_1802229d8(local_5e0);
    FUN_1802229d8(lVar1);
    uVar5 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                      (0x180224000,
                       *(undefined8 *)(param_2 + (param_3 & 0xffffffff) * 0x18c0 + 0x6b0),
                       extraout_x1,lVar2 - lVar9);
    (*extraout_x11)(uVar5,lVar9);
  }
  uVar5 = local_5b8;
  FUN_1802229d8(lVar9);
  return uVar5;
}


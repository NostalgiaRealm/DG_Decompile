/*
 * FUN_180032d48 at 180032d48
 * undefined FUN_180032d48(void)
 * Address ranges: 180032d48-1800333e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180032d48(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong local_598;
  longlong lStack_590;
  undefined8 local_588;
  undefined1 local_580;
  longlong local_578;
  longlong local_570;
  undefined8 local_568;
  undefined1 local_560;
  longlong local_558;
  longlong lStack_550;
  undefined8 local_548;
  undefined1 local_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined1 local_520;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined4 local_4e8;
  longlong local_4e0;
  undefined8 uStack_4d8;
  longlong local_4d0;
  ulonglong uStack_4c8;
  ulonglong local_4c0 [6];
  undefined1 *local_490;
  undefined8 local_488;
  undefined4 local_480 [4];
  uint local_470;
  undefined1 local_46c;
  undefined1 local_46b;
  undefined1 auStack_46a [66];
  undefined8 local_428;
  undefined4 local_420;
  longlong local_410;
  undefined4 local_408;
  undefined1 local_404;
  undefined1 local_403;
  int local_3e0 [76];
  ulonglong local_2b0;
  undefined4 local_2a8;
  uint local_2a4 [35];
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar12 = *(uint *)(param_1 + 0x10);
  uVar8 = param_1 + 0x50;
  lVar11 = *(longlong *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x38);
  lVar2 = *(longlong *)(param_1 + 0x40);
  local_580 = 1;
  lVar10 = *(longlong *)(param_1 + 0x18) + 0x18;
  *param_2 = 0;
  param_2[1] = 0;
  lVar11 = lVar11 + (ulonglong)uVar12 * 0x18c0;
  local_588 = 0x100;
  local_598 = thunk_FUN_180102f80(0x100);
  iVar4 = *(int *)(lVar11 + 0x6d0);
  lStack_590 = local_598;
  if (((uint)param_3 >> 8 & 1) == 0) {
    uVar12 = 0x10050;
    if (*(int *)(lVar11 + 0x6cc) < 0xb000) {
      uVar12 = 0x10040;
    }
    local_4e0 = lVar10;
    uStack_4d8 = param_3;
    local_4d0 = lVar1;
    uStack_4c8 = uVar8;
    func_0x000180222c50(local_480,0,0x430);
    local_410 = lVar2 + 4;
    local_404 = 1;
    local_408 = *(undefined4 *)(param_1 + 0x48);
    local_3e0[2] = 0;
    local_3e0[3] = 0;
    local_3e0[0] = 0;
    local_3e0[1] = 0;
    local_3e0[6] = 0;
    local_3e0[7] = 0;
    local_3e0[4] = 0;
    local_3e0[5] = 0;
    local_3e0[10] = 0;
    local_3e0[0xb] = 0;
    local_3e0[8] = 0;
    local_3e0[9] = 0;
    local_3e0[0xe] = 0;
    local_3e0[0xf] = 0;
    local_3e0[0xc] = 0;
    local_3e0[0xd] = 0;
    local_3e0[0x12] = 0;
    local_3e0[0x13] = 0;
    local_3e0[0x10] = 0;
    local_3e0[0x11] = 0;
    local_3e0[0x16] = 0;
    local_3e0[0x17] = 0;
    local_3e0[0x14] = 0;
    local_3e0[0x15] = 0;
    local_403 = *(undefined1 *)(param_1 + 0x4d);
    local_3e0[0x1a] = 0;
    local_3e0[0x1b] = 0;
    local_3e0[0x18] = 0;
    local_3e0[0x19] = 0;
    local_3e0[0x1e] = 0;
    local_3e0[0x1f] = 0;
    local_3e0[0x1c] = 0;
    local_3e0[0x1d] = 0;
    local_3e0[0x22] = 0;
    local_3e0[0x23] = 0;
    local_3e0[0x20] = 0;
    local_3e0[0x21] = 0;
    local_3e0[0x26] = 0;
    local_3e0[0x27] = 0;
    local_3e0[0x24] = 0;
    local_3e0[0x25] = 0;
    local_3e0[0x2a] = 0;
    local_3e0[0x2b] = 0;
    local_3e0[0x28] = 0;
    local_3e0[0x29] = 0;
    local_3e0[0x2e] = 0;
    local_3e0[0x2f] = 0;
    local_3e0[0x2c] = 0;
    local_3e0[0x2d] = 0;
    local_3e0[0x32] = 0;
    local_3e0[0x33] = 0;
    local_3e0[0x30] = 0;
    local_3e0[0x31] = 0;
    local_3e0[0x36] = 0;
    local_3e0[0x37] = 0;
    local_3e0[0x34] = 0;
    local_3e0[0x35] = 0;
    local_3e0[0x3a] = 0;
    local_3e0[0x3b] = 0;
    local_3e0[0x38] = 0;
    local_3e0[0x39] = 0;
    local_3e0[0x3e] = 0;
    local_3e0[0x3f] = 0;
    local_3e0[0x3c] = 0;
    local_3e0[0x3d] = 0;
    local_3e0[0x42] = 0;
    local_3e0[0x43] = 0;
    local_3e0[0x40] = 0;
    local_3e0[0x41] = 0;
    local_3e0[0x46] = 0;
    local_3e0[0x47] = 0;
    local_3e0[0x44] = 0;
    local_3e0[0x45] = 0;
    local_3e0[0x4a] = 0;
    local_3e0[0x4b] = 0;
    local_3e0[0x48] = 0;
    local_3e0[0x49] = 0;
    local_2a8 = 0;
    local_2a4[0] = 0;
    local_2b0 = 0;
    local_2a4[3] = 0;
    local_2a4[4] = 0;
    local_2a4[1] = 0;
    local_2a4[2] = 0;
    local_2a4[7] = 0;
    local_2a4[8] = 0;
    local_2a4[5] = 0;
    local_2a4[6] = 0;
    local_2a4[0xb] = 0;
    local_2a4[0xc] = 0;
    local_2a4[9] = 0;
    local_2a4[10] = 0;
    local_2a4[0xf] = 0;
    local_2a4[0x10] = 0;
    local_2a4[0xd] = 0;
    local_2a4[0xe] = 0;
    local_2a4[0x13] = 0;
    local_2a4[0x14] = 0;
    local_2a4[0x11] = 0;
    local_2a4[0x12] = 0;
    local_2a4[0x17] = 0;
    local_2a4[0x18] = 0;
    local_2a4[0x15] = 0;
    local_2a4[0x16] = 0;
    local_2a4[0x1b] = 0;
    local_2a4[0x1c] = 0;
    local_2a4[0x19] = 0;
    local_2a4[0x1a] = 0;
    local_2a4[0x1f] = 0;
    local_2a4[0x20] = 0;
    local_2a4[0x1d] = 0;
    local_2a4[0x1e] = 0;
    uStack_218 = 0;
    uStack_214 = 0;
    local_2a4[0x21] = 0;
    local_2a4[0x22] = 0;
    uStack_208 = 0;
    uStack_204 = 0;
    uStack_210 = 0;
    uStack_20c = 0;
    local_200 = 0;
    uStack_1fc = 0;
    local_1f8 = 0;
    uVar5 = func_0x000180213038(uVar12);
    local_46b = uVar5 < 0x50;
    local_490 = auStack_46a;
    local_4c0[5] = 0;
    local_4c0[4] = 0;
    local_4c0[1] = 0;
    local_4c0[3] = 0;
    local_4c0[2] = 0;
    local_488 = 0x40;
    local_4c0[0] = (ulonglong)uVar12;
    local_510 = 0x43425844;
    uStack_508 = 0;
    local_4f0 = 0;
    local_500 = 0x100000000;
    uStack_4f8 = 0x300000000;
    local_4e8 = 0;
    local_46c = iVar4 == 0x1002;
    uVar9 = FUN_1800f5a90(&local_598,&local_510,0x2c);
    *(int *)(local_598 + 0x20) = (int)lStack_590 - (int)local_598;
    uVar7 = FUN_180076f20(uVar9,&local_598,&local_4e0);
    lVar14 = local_598;
    if ((uVar7 & 1) != 0) {
      *(int *)(local_598 + 0x24) = (int)lStack_590 - (int)local_598;
      iVar4 = FUN_18006e6c8(uVar7,&local_598,&local_4e0);
      lVar14 = local_598;
      if (iVar4 != 0) {
        local_540 = 1;
        *(int *)(local_598 + 0x28) = (int)lStack_590 - (int)local_598;
        local_548 = 0x200;
        local_558 = thunk_FUN_180102f80(0x200);
        lStack_550 = local_558;
        uVar6 = FUN_1800f5ce8(&local_558,local_4c0[0] & 0xffffffff);
        FUN_1800f5f08(local_4c0[0] & 0xffffffff,&local_558,0);
        local_538 = 0;
        uStack_530 = 0;
        local_528 = 0x80;
        local_520 = 1;
        uVar9 = thunk_FUN_180102f80(0x80);
        uVar7 = (ulonglong)local_510 >> 0x20;
        local_428 = 0x41040000110400;
        uStack_218 = 0;
        local_2a4[0x21] = 0;
        local_2a4[0x22] = 0;
        uVar12 = 1;
        uVar13 = 0;
        local_3e0[2] = 0;
        local_3e0[3] = 0;
        local_3e0[0] = 0;
        local_3e0[1] = 0;
        local_3e0[6] = 0;
        local_3e0[7] = 0;
        local_3e0[4] = 0;
        local_3e0[5] = 0;
        local_3e0[10] = 0;
        local_3e0[0xb] = 0;
        local_3e0[8] = 0;
        local_3e0[9] = 0;
        local_3e0[0xe] = 0;
        local_3e0[0xf] = 0;
        local_3e0[0xc] = 0;
        local_3e0[0xd] = 0;
        local_3e0[0x32] = 0;
        local_3e0[0x33] = 0;
        local_3e0[0x30] = 0;
        local_3e0[0x31] = 0;
        local_3e0[0x36] = 0;
        local_3e0[0x37] = 0;
        local_3e0[0x34] = 0;
        local_3e0[0x35] = 0;
        local_3e0[0x3a] = 0;
        local_3e0[0x3b] = 0;
        local_3e0[0x38] = 0;
        local_3e0[0x39] = 0;
        local_3e0[0x3e] = 0;
        local_3e0[0x3f] = 0;
        local_3e0[0x3c] = 0;
        local_3e0[0x3d] = 0;
        local_3e0[0x42] = 0;
        local_3e0[0x43] = 0;
        local_3e0[0x40] = 0;
        local_3e0[0x41] = 0;
        local_3e0[0x46] = 0;
        local_3e0[0x47] = 0;
        local_3e0[0x44] = 0;
        local_3e0[0x45] = 0;
        local_3e0[0x4a] = 0;
        local_3e0[0x4b] = 0;
        local_3e0[0x48] = 0;
        local_3e0[0x49] = 0;
        local_2a8 = 0;
        local_2a4[0] = 0;
        local_2b0 = 0;
        local_2a4[3] = 0;
        local_2a4[4] = 0;
        local_2a4[1] = 0;
        local_2a4[2] = 0;
        local_2a4[7] = 0;
        local_2a4[8] = 0;
        local_2a4[5] = 0;
        local_2a4[6] = 0;
        local_2a4[0xb] = 0;
        local_2a4[0xc] = 0;
        local_2a4[9] = 0;
        local_2a4[10] = 0;
        local_2a4[0xf] = 0;
        local_2a4[0x10] = 0;
        local_2a4[0xd] = 0;
        local_2a4[0xe] = 0;
        local_2a4[0x13] = 0;
        local_2a4[0x14] = 0;
        local_2a4[0x11] = 0;
        local_2a4[0x12] = 0;
        local_2a4[0x17] = 0;
        local_2a4[0x18] = 0;
        local_2a4[0x15] = 0;
        local_2a4[0x16] = 0;
        local_2a4[0x1b] = 0;
        local_2a4[0x1c] = 0;
        local_2a4[0x19] = 0;
        local_2a4[0x1a] = 0;
        local_2a4[0x1f] = 0;
        local_2a4[0x20] = 0;
        local_2a4[0x1d] = 0;
        local_2a4[0x1e] = 0;
        uStack_20c = 0x210803;
        uStack_208 = 0x110803;
        uStack_214 = 0x410803;
        uStack_210 = 0x310803;
        uStack_1fc = 0x210804;
        local_1f8 = 0x110804;
        uStack_204 = 0x410804;
        local_200 = 0x310804;
        local_420 = 0x20000d00;
        local_510 = CONCAT44((uint)uVar7 & 0xffffff00,0xffffffff);
        local_3e0[0x12] = 0;
        local_3e0[0x13] = 0;
        local_3e0[0x10] = 0;
        local_3e0[0x11] = 0;
        local_3e0[0x16] = 0;
        local_3e0[0x17] = 0;
        local_3e0[0x14] = 0;
        local_3e0[0x15] = 0;
        local_3e0[0x1a] = 0;
        local_3e0[0x1b] = 0;
        local_3e0[0x18] = 0;
        local_3e0[0x19] = 0;
        local_3e0[0x1e] = 0;
        local_3e0[0x1f] = 0;
        local_3e0[0x1c] = 0;
        local_3e0[0x1d] = 0;
        local_3e0[0x22] = 0;
        local_3e0[0x23] = 0;
        local_3e0[0x20] = 0;
        local_3e0[0x21] = 0;
        local_3e0[0x26] = 0;
        local_3e0[0x27] = 0;
        local_3e0[0x24] = 0;
        local_3e0[0x25] = 0;
        local_3e0[0x2a] = 0;
        local_3e0[0x2b] = 0;
        local_3e0[0x28] = 0;
        local_3e0[0x29] = 0;
        local_3e0[0x2e] = 0;
        local_3e0[0x2f] = 0;
        local_3e0[0x2c] = 0;
        local_3e0[0x2d] = 0;
        uStack_78 = uStack_508;
        local_80 = local_510;
        uStack_68 = 0xffffffffffffffff;
        uStack_70 = 0xffffffffffffffff;
        lVar10 = local_4d0;
        local_538 = uVar9;
        uStack_530 = uVar9;
        do {
          cVar3 = ((char *)(lVar10 + uVar13))[0x10];
          if ((cVar3 != '\0') && (*(char *)(lVar10 + uVar13) != -1)) {
            uVar9 = FUN_180076c30(param_1 + 0x20,&local_4e0,&local_538,uVar13,cVar3,0);
            uVar12 = (uint)uVar9 & 0xff & uVar12;
            lVar10 = local_4d0;
          }
          uVar5 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar5;
        } while (uVar5 < 0x10);
        local_2b0 = uVar8 & 0xffffff0000000000;
        uVar9 = FUN_180076cd8(uVar9,&local_4e0,&local_538,0xffffffff);
        if (*(char *)(local_4d0 + 0x4a6c) == '\x02') {
          FUN_18006ee30(uVar9,&local_4e0);
        }
        else if ((*(char *)(local_4d0 + 0x4a6c) == '\x03') &&
                (FUN_18006ee30(uVar9,&local_4e0), *(char *)(local_4d0 + 0x4884) != '\0')) {
          if (uVar12 == 0) {
            uVar8 = 0;
            do {
              if (local_3e0[uVar8] != 0) {
                local_2a4[uVar8] = (uint)uVar8 | local_470 << 0xe | 0x420300;
                FUN_1800f5ea8(0xe4,*(undefined1 *)(local_4d0 + uVar8 + 0x10));
                FUN_1800f5730(local_4c0,&local_538,0x36);
              }
              uVar12 = (uint)uVar8 + 1;
              uVar8 = (ulonglong)uVar12;
            } while (uVar12 < 0x10);
            local_480[local_470] = 0x10;
            local_470 = local_470 + 1;
          }
          else {
            local_2a4[2] = (uint)local_3e0._8_8_;
            local_2a4[3] = SUB84(local_3e0._8_8_,4);
            local_2a4[0] = (uint)local_3e0._0_8_;
            local_2a4[1] = SUB84(local_3e0._0_8_,4);
            local_2a4[6] = (uint)local_3e0._24_8_;
            local_2a4[7] = SUB84(local_3e0._24_8_,4);
            local_2a4[4] = (uint)local_3e0._16_8_;
            local_2a4[5] = SUB84(local_3e0._16_8_,4);
            local_2a4[10] = (uint)local_3e0._40_8_;
            local_2a4[0xb] = SUB84(local_3e0._40_8_,4);
            local_2a4[8] = (uint)local_3e0._32_8_;
            local_2a4[9] = SUB84(local_3e0._32_8_,4);
            local_2a4[0xe] = (uint)local_3e0._56_8_;
            local_2a4[0xf] = SUB84(local_3e0._56_8_,4);
            local_2a4[0xc] = (uint)local_3e0._48_8_;
            local_2a4[0xd] = SUB84(local_3e0._48_8_,4);
            uStack_218 = CONCAT31(uStack_218._1_3_,1);
          }
        }
        if (*(char *)(local_4d0 + 0x40) == '\0') {
          local_2a8 = 0;
        }
        else {
          local_2a8 = FUN_1800f42d0(local_4c0,4,1);
        }
        FUN_180077660(param_1 + 0x20,local_410,&local_4e0,&local_538);
        local_578 = 0;
        local_570 = 0;
        local_568 = 0x80;
        local_560 = 1;
        local_578 = thunk_FUN_180102f80(0x80);
        local_570 = local_578;
        uVar9 = FUN_1800713a0(param_1 + 0x20,local_410,&local_4e0,&local_578);
        FUN_180079260(uVar9,&local_4e0,&local_538);
        FUN_1800f5730(local_4c0,&local_538,0x3e,0);
        uVar9 = FUN_1800f5a90(&local_538,local_578,local_570 - local_578);
        uVar9 = FUN_1800795d0(uVar9,&local_558,&local_4e0);
        uVar9 = FUN_18006f730(uVar9,&local_4e0,&local_558);
        uVar9 = FUN_1800794b0(uVar9,&local_558,&local_4e0);
        FUN_18006ead8(uVar9,&local_558,&local_4e0);
        if (local_488._1_1_ != '\0') {
          FUN_1800f5b00(&local_558,2,0x2000068);
        }
        uVar8 = 0;
        if (local_470 != 0) {
          do {
            FUN_1800f5b00(&local_558,4,0x4000069,uVar8,local_480[uVar8],4);
            uVar12 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar12;
          } while (uVar12 < local_470);
        }
        FUN_1800f5d48(&local_558,&local_538,uVar6);
        lVar10 = local_558;
        FUN_1800f5a90(&local_598,local_558,lStack_550 - local_558);
        thunk_FUN_180102fc0(local_578);
        thunk_FUN_180102fc0(local_538);
        thunk_FUN_180102fc0(lVar10);
        FUN_1800f5ba0(&local_598);
        lVar14 = local_598;
        (**(code **)(**(longlong **)(lVar11 + 0x6b0) + 0x60))
                  (*(longlong **)(lVar11 + 0x6b0),local_598,lStack_590 - local_598,0,param_2);
      }
    }
  }
  else {
    uVar7 = FUN_18006db00(param_1 + 0x20,param_3,lVar1,lVar10,0x10050,&local_598);
    lVar14 = local_598;
    if (((uVar7 & 1) != 0) &&
       (iVar4 = (**(code **)(**(longlong **)(lVar11 + 0x6b0) + 0x60))
                          (*(longlong **)(lVar11 + 0x6b0),local_598,lStack_590 - local_598,0,param_2
                          ), -1 < iVar4)) {
      local_560 = 1;
      local_568 = 0x100;
      local_578 = thunk_FUN_180102f80(0x100);
      local_570 = local_578;
      uVar8 = FUN_18006dcf8(param_1 + 0x20,param_3,lVar1,*(undefined4 *)(param_1 + 0x48),lVar10,
                            lVar2,uVar8,0x20050,&local_578,0);
      lVar10 = local_578;
      if (((uVar8 & 1) == 0) ||
         (iVar4 = (**(code **)(**(longlong **)(lVar11 + 0x6b0) + 0x68))
                            (*(longlong **)(lVar11 + 0x6b0),local_578,local_570 - local_578,0,
                             param_2 + 1), iVar4 < 0)) {
        (**(code **)(*(longlong *)*param_2 + 0x10))();
        *param_2 = 0;
      }
      thunk_FUN_180102fc0(lVar10);
    }
  }
  thunk_FUN_180102fc0(lVar14);
  return param_2;
}


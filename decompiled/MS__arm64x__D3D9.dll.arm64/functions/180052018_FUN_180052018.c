/*
 * FUN_180052018 at 180052018
 * undefined FUN_180052018(void)
 * Address ranges: 180052018-18005269f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_180052018(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong local_5a0;
  longlong lStack_598;
  undefined8 local_590;
  undefined1 local_588;
  longlong local_580;
  longlong local_578;
  undefined8 local_570;
  undefined1 local_568;
  longlong local_560;
  longlong lStack_558;
  undefined8 local_550;
  undefined1 local_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined1 local_528;
  undefined4 local_520;
  uint uStack_51c;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined4 local_4e8;
  longlong local_4e0;
  undefined8 uStack_4d8;
  longlong local_4d0;
  longlong lStack_4c8;
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
  longlong local_2b0;
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
  
  lVar12 = *(longlong *)(param_1 + 0x18);
  lVar8 = *(longlong *)(param_1 + 0x38);
  lVar1 = *(longlong *)(param_1 + 0x40);
  lVar13 = *(longlong *)(param_1 + 8);
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  lVar12 = lVar12 + 0x18;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xb] = 0;
  param_2[10] = 0;
  local_588 = 1;
  local_590 = 0x100;
  local_5a0 = thunk_FUN_180102f80(0x100);
  iVar4 = *(int *)(lVar13 + (ulonglong)*(uint *)(param_1 + 0x10) * 0x1ac0 + 0x904);
  lStack_598 = local_5a0;
  if (((uint)param_3 >> 8 & 1) == 0) {
    local_4e0 = lVar12;
    uStack_4d8 = param_3;
    local_4d0 = lVar8;
    lStack_4c8 = param_1 + 0x50;
    func_0x000180222c50(local_480,0,0x430);
    local_410 = lVar1 + 4;
    local_408 = *(undefined4 *)(param_1 + 0x48);
    uVar11 = 0x10051;
    local_404 = 1;
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
    local_403 = *(undefined1 *)(param_1 + 0x4d);
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
    uVar3 = func_0x000180213038(0x10051);
    local_46b = uVar3 < 0x50;
    local_490 = auStack_46a;
    local_4c0[5] = 0;
    local_4c0[4] = 0;
    local_4c0[1] = 0;
    local_4c0[3] = 0;
    local_4c0[2] = 0;
    local_488 = 0x40;
    local_4c0[0] = (ulonglong)uVar11;
    local_510 = 0x43425844;
    uStack_508 = 0;
    local_4f0 = 0;
    local_500 = 0x100000000;
    uStack_4f8 = 0x300000000;
    local_4e8 = 0;
    local_46c = iVar4 == 0x1002;
    uVar10 = FUN_1800f5a90(&local_5a0,&local_510,0x2c);
    *(int *)(local_5a0 + 0x20) = (int)lStack_598 - (int)local_5a0;
    uVar6 = FUN_180076f20(uVar10,&local_5a0,&local_4e0);
    lVar13 = local_5a0;
    if ((uVar6 & 1) != 0) {
      *(int *)(local_5a0 + 0x24) = (int)lStack_598 - (int)local_5a0;
      iVar4 = FUN_18006e6c8(uVar6,&local_5a0,&local_4e0);
      lVar13 = local_5a0;
      if (iVar4 != 0) {
        local_548 = 1;
        *(int *)(local_5a0 + 0x28) = (int)lStack_598 - (int)local_5a0;
        local_550 = 0x200;
        local_560 = thunk_FUN_180102f80(0x200);
        lStack_558 = local_560;
        uVar5 = FUN_1800f5ce8(&local_560,local_4c0[0] & 0xffffffff);
        FUN_1800f5f08(local_4c0[0] & 0xffffffff,&local_560,0);
        local_540 = 0;
        uStack_538 = 0;
        local_530 = 0x80;
        local_528 = 1;
        uVar10 = thunk_FUN_180102f80(0x80);
        uVar6 = (ulonglong)local_510 >> 0x20;
        local_428 = 0x41040000110400;
        uStack_218 = 0;
        local_2a4[0x21] = 0;
        local_2a4[0x22] = 0;
        uVar3 = 1;
        uVar14 = 0;
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
        local_510 = CONCAT44((uint)uVar6 & 0xffffff00,0xffffffff);
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
        lVar12 = local_4d0;
        local_540 = uVar10;
        uStack_538 = uVar10;
        do {
          cVar2 = ((char *)(lVar12 + uVar14))[0x10];
          if ((cVar2 != '\0') && (*(char *)(lVar12 + uVar14) != -1)) {
            uVar10 = FUN_180076c30(param_1 + 0xb8,&local_4e0,&local_540,uVar14,cVar2,0);
            uVar3 = (uint)uVar10 & 0xff & uVar3;
            lVar12 = local_4d0;
          }
          uVar11 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar11;
        } while (uVar11 < 0x10);
        local_520 = 0;
        uStack_51c = uStack_51c & 0xffffff00;
        local_2b0 = (ulonglong)uStack_51c << 0x20;
        uVar10 = FUN_180076cd8(uVar10,&local_4e0,&local_540,0xffffffff);
        if (*(char *)(local_4d0 + 0x4a6c) == '\x02') {
          FUN_18006ee30(uVar10,&local_4e0);
        }
        else if ((*(char *)(local_4d0 + 0x4a6c) == '\x03') &&
                (FUN_18006ee30(uVar10,&local_4e0), *(char *)(local_4d0 + 0x4884) != '\0')) {
          if (uVar3 == 0) {
            uVar6 = 0;
            do {
              if (local_3e0[uVar6] != 0) {
                local_2a4[uVar6] = (uint)uVar6 | local_470 << 0xe | 0x420300;
                FUN_1800f5ea8(0xe4,*(undefined1 *)(local_4d0 + uVar6 + 0x10));
                FUN_1800f5730(local_4c0,&local_540,0x36);
              }
              uVar3 = (uint)uVar6 + 1;
              uVar6 = (ulonglong)uVar3;
            } while (uVar3 < 0x10);
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
        FUN_180077660(param_1 + 0xb8,local_410,&local_4e0,&local_540);
        local_580 = 0;
        local_578 = 0;
        local_570 = 0x80;
        local_568 = 1;
        local_580 = thunk_FUN_180102f80(0x80);
        local_578 = local_580;
        uVar10 = FUN_1800713a0(param_1 + 0xb8,local_410,&local_4e0,&local_580);
        FUN_180079260(uVar10,&local_4e0,&local_540);
        FUN_1800f5730(local_4c0,&local_540,0x3e,0);
        uVar10 = FUN_1800f5a90(&local_540,local_580,local_578 - local_580);
        uVar10 = FUN_1800795d0(uVar10,&local_560,&local_4e0);
        uVar10 = FUN_18006f730(uVar10,&local_4e0,&local_560);
        uVar10 = FUN_1800794b0(uVar10,&local_560,&local_4e0);
        FUN_18006ead8(uVar10,&local_560,&local_4e0);
        if (local_488._1_1_ != '\0') {
          FUN_1800f5b00(&local_560,2,0x2000068);
        }
        uVar6 = 0;
        if (local_470 != 0) {
          do {
            FUN_1800f5b00(&local_560,4,0x4000069,uVar6,local_480[uVar6],4);
            uVar3 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar3;
          } while (uVar3 < local_470);
        }
        FUN_1800f5d48(&local_560,&local_540,uVar5);
        lVar12 = local_560;
        FUN_1800f5a90(&local_5a0,local_560,lStack_558 - local_560);
        thunk_FUN_180102fc0(local_580);
        thunk_FUN_180102fc0(local_540);
        thunk_FUN_180102fc0(lVar12);
        uVar10 = FUN_1800f5ba0(&local_5a0);
        uVar10 = FUN_180079638(uVar10,&local_4e0,param_2 + 1);
        lVar13 = local_5a0;
        lVar12 = FUN_1800f41c8(uVar10,(int)lStack_598 - (int)local_5a0,local_5a0);
        *param_2 = lVar12;
      }
    }
    goto LAB_180052674;
  }
  uVar6 = FUN_18006db00(param_1 + 0xb8,param_3,lVar8,lVar12,0x10051,&local_5a0);
  lVar13 = local_5a0;
  if ((uVar6 & 1) == 0) goto LAB_180052674;
  lVar7 = FUN_1800f41c8(uVar6,(int)lStack_598 - (int)local_5a0,local_5a0);
  *param_2 = lVar7;
  if (lVar7 == 0) goto LAB_180052674;
  local_568 = 1;
  local_570 = 0x100;
  local_580 = thunk_FUN_180102f80(0x100);
  local_578 = local_580;
  uVar6 = FUN_18006dcf8(param_1 + 0xb8,param_3,lVar8,*(undefined4 *)(param_1 + 0x48),lVar12,lVar1,
                        param_1 + 0x50,0x20051,&local_580,param_2 + 7);
  lVar12 = local_580;
  if ((uVar6 & 1) == 0) {
    plVar9 = (longlong *)*param_2;
    lVar8 = *plVar9;
LAB_180052168:
    (**(code **)(lVar8 + 0x10))(plVar9);
    *param_2 = 0;
  }
  else {
    lVar8 = FUN_1800f41c8(uVar6,(int)local_578 - (int)local_580,local_580);
    param_2[6] = lVar8;
    if (*param_2 == 0) {
      plVar9 = (longlong *)0x0;
      lVar8 = _Reset;
      goto LAB_180052168;
    }
  }
  thunk_FUN_180102fc0(lVar12);
LAB_180052674:
  thunk_FUN_180102fc0(lVar13);
  return param_2;
}


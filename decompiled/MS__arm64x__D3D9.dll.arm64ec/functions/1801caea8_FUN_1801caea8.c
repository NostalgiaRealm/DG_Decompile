/*
 * FUN_1801caea8 at 1801caea8
 * undefined FUN_1801caea8(void)
 * Address ranges: 1801caea8-1801cb087;1801cb09c-1801cb0d7;1801cb0dc-1801cb127;1801cb138-1801cb7e7;1801cb7ec-1801cb967
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1801caea8(longlong param_1,undefined4 param_2,int param_3,int param_4,longlong param_5,
             longlong param_6,uint param_7)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  uint *puVar24;
  int *piVar25;
  longlong *plVar26;
  uint in_stack_fffffffffffff958;
  uint local_670;
  int local_66c;
  uint local_668;
  longlong local_660;
  int local_658;
  int local_654;
  undefined4 local_650;
  int local_64c;
  longlong local_648;
  longlong local_640;
  undefined4 local_638;
  longlong local_630;
  longlong local_628;
  uint local_620;
  int local_61c;
  undefined4 local_618;
  longlong local_610;
  undefined8 local_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined4 local_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined4 local_5d8;
  longlong local_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  uint local_428;
  uint uStack_424;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined2 local_410;
  undefined8 local_408;
  longlong local_400;
  undefined8 local_3f8;
  undefined1 auStack_3f0 [16];
  undefined8 local_3e0 [38];
  undefined8 local_2b0;
  undefined1 local_2a8;
  undefined1 auStack_2a0 [608];
  
  local_66c = 0x8876086c;
  local_668 = param_7;
  local_658 = param_4;
  local_654 = param_3;
  local_650 = param_2;
  local_628 = param_5;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    local_64c = 0;
  }
  else {
    iVar11 = thunk_FUN_1802236e4(DAT_180258900);
    local_64c = 1;
    if (iVar11 == 0) {
      FUN_1801085c8();
      local_64c = 1;
    }
  }
  iVar11 = local_66c;
  if ((local_628 == 0 || 1 < local_668) ||
     (uVar13 = FUN_1801cead8(param_1 + -0x6838), iVar11 = local_66c, (uVar13 & 1) == 0))
  goto LAB_1801cb920;
  local_660 = 0;
  if (*(longlong *)(param_1 + 0x5c58) != 0) {
    local_660 = FUN_1801dbb48(param_1 + 0x80);
  }
  lVar16 = local_628;
  iVar22 = local_658;
  iVar11 = local_66c;
  if (param_6 == 0) {
    uVar15 = *(uint *)(local_628 + -0x3c);
    uVar13 = (ulonglong)uVar15;
    if (uVar15 == 0) goto LAB_1801cb920;
    uVar3 = *(uint *)(param_1 + -0x5ae4);
    uVar21 = 0;
    if (uVar3 == 0) {
LAB_1801cb02c:
      if (uVar3 == *(uint *)(param_1 + -0x5ae8)) {
        uVar20 = CONCAT44(0,*(uint *)(param_1 + -0x5ae8) << 1);
        lVar16 = uVar20 * 0x260;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar20;
        if (SUB168(auVar7 * ZEXT816(0x260),8) != 0) {
          lVar16 = -1;
        }
        lVar16 = FUN_1802229a8(lVar16);
        if (lVar16 != 0) {
          if (*(int *)(param_1 + -0x5ae8) != 0) {
            local_670 = uVar21;
                    /* WARNING: Subroutine does not return */
            thunk_FUN_180104c48(lVar16,*(undefined8 *)(param_1 + -0x5af0),0x260);
          }
          FUN_1802229d8(*(undefined8 *)(param_1 + -0x5af0));
          *(longlong *)(param_1 + -0x5af0) = lVar16;
          *(int *)(param_1 + -0x5ae8) = *(int *)(param_1 + -0x5ae8) << 1;
        }
      }
      uVar3 = *(uint *)(param_1 + -0x5ae4);
      lVar16 = *(longlong *)(param_1 + -0x5af0);
      if (uVar21 < uVar3) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar16 + (ulonglong)uVar3 * 0x260,
                            lVar16 + (ulonglong)(uVar3 - 1) * 0x260,0x260);
      }
      lVar18 = (ulonglong)uVar21 * 0x260;
      *(ulonglong *)(lVar16 + lVar18) = uVar13;
      *(uint *)(lVar18 + *(longlong *)(param_1 + -0x5af0) + 8) = uVar15;
      FUN_18018de88(uVar15,*(undefined1 *)(param_1 + -0x5ae0),auStack_2a0);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(lVar18 + *(longlong *)(param_1 + -0x5af0) + 0xc,auStack_2a0,0x254);
    }
    uVar17 = 0;
    uVar14 = uVar3;
    do {
      uVar21 = uVar14 + uVar17 >> 1;
      uVar20 = *(ulonglong *)(*(longlong *)(param_1 + -0x5af0) + (ulonglong)uVar21 * 0x260);
      uVar10 = uVar21;
      if (uVar20 <= uVar13) {
        if (uVar13 <= uVar20) break;
        uVar17 = uVar21 + 1;
        uVar21 = uVar21 + 1;
        uVar10 = uVar14;
      }
      uVar14 = uVar10;
    } while (uVar14 != uVar17);
    if ((uVar21 == uVar3) ||
       (*(ulonglong *)(*(longlong *)(param_1 + -0x5af0) + (ulonglong)uVar21 * 0x260) != uVar13))
    goto LAB_1801cb02c;
    lVar18 = ((ulonglong)uVar21 * 0x260 | 0xc) + *(longlong *)(param_1 + -0x5af0);
  }
  else {
    if ((local_660 == 0) || (*(char *)(*(longlong *)(local_660 + 0x868) + 1) != '\x03')) {
      cVar4 = *(char *)(param_6 + 0x290);
    }
    else {
      cVar4 = *(char *)(param_6 + 0x291);
    }
    lVar18 = 0;
    if (cVar4 != '\0') {
      lVar18 = param_6 + 0x20;
    }
  }
  local_630 = lVar18;
  if (lVar18 == 0) goto LAB_1801cb920;
  iVar11 = 0x8876086c;
  if ((local_660 == 0) || (*(longlong *)(local_660 + 0x870) == 0)) {
    bVar9 = false;
LAB_1801cb184:
    bVar8 = false;
  }
  else {
    bVar9 = true;
    if (*(byte *)(*(longlong *)(local_660 + 0x868) + 1) < 3) goto LAB_1801cb184;
    bVar8 = true;
  }
  if ((((*(int *)(lVar18 + 4) != 4) &&
       (local_66c = local_654,
       (uint)((local_654 + local_658) * *(int *)(lVar18 + 0xc)) <= *(uint *)(local_628 + -0x70))) &&
      (*(char *)(lVar18 + 0x15) == '\x04' || bVar8)) &&
     (lVar23 = *(longlong *)(param_1 + 0x5cb0),
     (*(uint *)(lVar23 + 0x10) & (*(uint *)(param_1 + -0x70) ^ 0xffffffff)) == 0)) {
    uStack_5c8 = 0;
    local_5d0 = 0;
    uStack_5b8 = 0;
    uStack_5c0 = 0;
    uStack_5a8 = 0;
    local_5b0 = 0;
    uStack_598 = 0;
    uStack_5a0 = 0;
    uStack_588 = 0;
    local_590 = 0;
    uStack_578 = 0;
    uStack_580 = 0;
    uStack_568 = 0;
    local_570 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
    uStack_548 = 0;
    local_550 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
    uStack_528 = 0;
    local_530 = 0;
    uStack_518 = 0;
    uStack_520 = 0;
    uStack_508 = 0;
    local_510 = 0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    uStack_4e8 = 0;
    local_4f0 = 0;
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_4c8 = 0;
    local_4d0 = 0;
    local_618 = FUN_180224358(0);
    FUN_1802243a0(0x3fc0);
    local_608 = 0;
    local_670 = local_668;
    iVar12 = FUN_18011a6c8(lVar16 + -0x90,0,0,&local_608,local_668 & 0xfffffffe);
    if (-1 < iVar12) {
      iVar11 = *(int *)(param_1 + -0x61a0);
      local_620 = (uint)(iVar11 != 0);
      local_61c = iVar11;
      if (bVar9) {
        lVar18 = *(longlong *)(local_660 + 0x10);
        lVar16 = 0;
        do {
          if ((*(char *)(lVar18 + 0x10 + lVar16) != '\0') && (*(uint *)(lVar23 + 8) != 0)) {
            uVar13 = 0;
            do {
              lVar2 = lVar23 + (ulonglong)*(byte *)(lVar23 + 0x214 + uVar13) * 8;
              if (*(char *)(lVar18 + lVar16) == *(char *)(lVar2 + 0x19)) {
                lVar1 = param_1 + ((longlong)*(char *)(lVar2 + 0x14) & 0xffffffffU) * 4;
                (&local_5d0)[lVar16 * 2] =
                     (ulonglong)*(byte *)(lVar2 + 0x17) * 4 + (ulonglong)*(uint *)(lVar1 + -0xb0) +
                     *(longlong *)
                      (*(longlong *)
                        (param_1 + ((longlong)*(char *)(lVar2 + 0x14) & 0xffffffffU) * 8 + -0x170) +
                      8);
                uVar5 = *(undefined1 *)(lVar2 + 0x15);
                *(undefined1 *)((longlong)&uStack_5c8 + lVar16 * 0x10 + 4) =
                     *(undefined1 *)(lVar2 + 0x18);
                *(undefined1 *)((longlong)&uStack_5c8 + lVar16 * 0x10 + 5) = uVar5;
                *(undefined4 *)(&uStack_5c8 + lVar16 * 2) = *(undefined4 *)(lVar1 + -0xf0);
                break;
              }
              uVar15 = (int)uVar13 + 1;
              uVar13 = (ulonglong)uVar15;
            } while (uVar15 < *(uint *)(lVar23 + 8));
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 != 0x10);
        local_610 = *(longlong *)(local_660 + 0x870);
        lVar16 = *(longlong *)(local_660 + 0x878);
        if (lVar16 == 0) {
          local_638 = 0x100;
          local_648 = FUN_1802229a8(0x100);
          local_408 = 0;
          local_400 = 0;
          puVar19 = auStack_3f0;
          lVar16 = 4;
          local_3f8 = 0;
          do {
            *(undefined8 *)(puVar19 + 0x10) = 0;
            *(undefined8 *)(puVar19 + 0x18) = 0;
            lVar16 = lVar16 + -1;
            puVar19 = puVar19 + 0x20;
          } while (lVar16 != 0);
          local_2b0 = 0;
          local_2a8 = 0;
          local_4c0 = 0x200000001;
          uStack_4b8 = 0x11600000008;
          local_410 = 0xffff;
          local_420 = 0;
          uStack_418 = 0xffffffffffffffff;
          local_4b0 = 0;
          local_640 = local_648;
          FUN_180113ec8(&local_4c0);
          local_5f0 = 0x80;
          local_600 = 0;
          uStack_5f8 = 0;
          local_600 = FUN_1802229a8(0x80);
          local_5e8 = 0;
          uStack_5e0 = 0;
          local_5d8 = 0x80;
          uStack_5f8 = local_600;
          local_5e8 = FUN_1802229a8(0x80);
          lVar16 = local_610;
          uVar13 = 0;
          uStack_5e0 = local_5e8;
LAB_1801cb3c4:
          lVar18 = local_610;
          bVar6 = *(byte *)(uVar13 * 0x14 + lVar16);
          if (bVar6 != 0xff) {
            if ((bVar6 & 0x7f) != 0x1e) goto code_r0x0001801cb3e8;
            local_2a8 = 1;
            do {
              if (*(char *)(uVar13 * 0x14 + lVar18) < '\0') {
                FUN_1801139b0();
              }
              else {
                FUN_180113008(&local_4c0,&local_5e8,uVar13 * 0x14 + lVar18);
              }
              uVar13 = (ulonglong)((int)uVar13 + 1);
            } while (*(char *)(lVar18 + uVar13 * 0x14) != -1);
          }
          FUN_180113dc0(&local_4c0,&local_600,1);
          uVar15 = 0;
          iVar11 = 0;
          uVar21 = 0;
          local_670 = local_428 | (uint)local_420;
          local_420 = CONCAT44(uStack_424 | local_420._4_4_,local_670);
          do {
            if (((*(byte *)((longlong)&local_670 + (longlong)((int)uVar21 >> 3)) >>
                  (ulonglong)(uVar21 & 7) & 1) != 0) && ((&DAT_180229d20)[uVar21] != '\0')) {
              FUN_1801060c0(&local_648,0x30ff0200000000,uVar21,0xffffffff,0,0);
              uVar15 = uVar15 + 1;
              local_670 = (uint)local_420;
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 < 0x10);
          uVar21 = 0;
          do {
            local_670 = local_420._4_4_;
            if (((*(byte *)((longlong)&local_670 + (longlong)((int)uVar21 >> 3)) >>
                  (ulonglong)(uVar21 & 7) & 1) != 0) && (5 < uVar21)) {
              iVar11 = iVar11 + 1;
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 < 0x10);
          local_668 = uVar15;
          if (iVar11 != 0) {
            FUN_1801060c0(&local_648,0x28810200012013,4,0xffffffff,0,
                          uVar15 * -8 - 8 & 0xf | iVar11 << 4);
            iVar22 = 0;
            uVar15 = 0;
            uVar21 = local_420._4_4_;
            do {
              local_670 = uVar21;
              if (((*(byte *)((longlong)&local_670 + (longlong)((int)uVar15 >> 3)) >>
                    (ulonglong)(uVar15 & 7) & 1) != 0) && (5 < uVar15)) {
                FUN_1801060c0(&local_648,0x290200100100,0x80000004,uVar15,iVar22 << 4,0);
                iVar22 = iVar22 + 1;
                uVar21 = local_420._4_4_;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < 0x10);
          }
          local_66c = (int)local_640 - (int)local_648;
          FUN_180105fe0(&local_648,local_600,(int)uStack_5f8 - (int)local_600);
          if (iVar11 != 0) {
            iVar22 = iVar11 + -1;
            uVar15 = 0x10;
            uVar21 = local_420._4_4_;
            do {
              local_670 = uVar21;
              if (((*(byte *)((longlong)&local_670 + (longlong)((int)uVar15 >> 3)) >>
                    (ulonglong)(uVar15 & 7) & 1) != 0) && (5 < uVar15)) {
                FUN_1801060c0(&local_648,0x290200100100,uVar15,0x80000004,iVar22 << 4,0);
                iVar22 = iVar22 + -1;
                uVar21 = local_420._4_4_;
              }
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
            FUN_1801060c0(&local_648,0x810200012013,4,0xffffffff,0,
                          local_668 * -8 - 8 & 0xf | iVar11 << 4);
          }
          iVar11 = 0x10;
          uVar15 = (uint)local_420;
          do {
            local_670 = uVar15;
            if (((*(byte *)((longlong)&local_670 + (longlong)((int)(iVar11 - 1U) >> 3)) >>
                  (ulonglong)(iVar11 - 1U & 7) & 1) != 0) && ((&DAT_180229d20)[iVar11 - 1] != '\0'))
            {
              FUN_1801060c0(&local_648,0x8f0200000000,(ulonglong)(iVar11 - 1),0xffffffff,0,0);
              uVar15 = (uint)local_420;
            }
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          FUN_1801060c0(&local_648,0xc30100000000,0xffffffff,0xffffffff,0,0);
          iVar11 = (int)local_640 - (int)local_648;
          FUN_180105fe0(&local_648,local_5e8,(int)uStack_5e0 - (int)local_5e8);
          lVar16 = local_648;
          uVar13 = 0;
          if ((uint)local_3f8 != 0) {
            if ((uint)local_3f8 == 0) {
              puVar24 = (uint *)&DAT_00000018;
              plVar26 = (longlong *)&DAT_00000010;
              piVar25 = (int *)&DAT_00000008;
              goto LAB_1801cb73c;
            }
            do {
              lVar18 = local_400 + uVar13 * 0x28;
              puVar24 = (uint *)(lVar18 + 0x20);
              plVar26 = (longlong *)(lVar18 + 0x18);
              piVar25 = (int *)(lVar18 + 0x10);
LAB_1801cb73c:
              uVar20 = 0;
              if (*puVar24 != 0) {
                do {
                  uVar21 = *(uint *)(*plVar26 + uVar20 * 4);
                  uVar15 = (int)uVar20 + 1;
                  uVar20 = (ulonglong)uVar15;
                  iVar22 = uVar21 + local_66c;
                  if ((int)uVar21 < 0) {
                    iVar22 = (uVar21 & 0x7fffffff) + iVar11;
                  }
                  *(int *)(local_648 + (ulonglong)(iVar22 - 4)) = (*piVar25 - iVar22) + iVar11;
                } while (uVar15 < *puVar24);
              }
              uVar15 = (int)uVar13 + 1;
              uVar13 = (ulonglong)uVar15;
            } while (uVar15 < (uint)local_3f8);
          }
          FUN_1802229d8(local_5e8);
          FUN_1802229d8(local_600);
          FUN_180113f18(&local_4c0);
          iVar11 = (int)local_640 - (int)lVar16;
          lVar18 = thunk_FUN_180223734(0,iVar11,0x1000,0x40);
          if (lVar18 != 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_180104c48(lVar18,lVar16,iVar11);
          }
          FUN_1802229d8(lVar16);
          lVar16 = 0;
          *(undefined8 *)(local_660 + 0x878) = 0;
        }
        if (*(byte *)(*(longlong *)(local_660 + 0x868) + 1) < 3) {
          lVar18 = 0;
        }
        else {
          lVar18 = *(longlong *)(local_660 + 0x10) + 0x4850;
        }
        FUN_180114bc8(param_1 + -0x6838,local_610,lVar16,*(undefined8 *)(local_660 + 0x10),
                      &local_5d0,param_1 + 0x748,lVar18,local_608,local_630,local_654,local_658,
                      local_650,(undefined1)local_620,0);
      }
      else {
        uVar13 = FUN_18010c078(param_1 + -0x6838,lVar23,&local_5d0);
        if ((uVar13 & 1) != 0) {
          uVar15 = 3;
          if (iVar11 == 0) {
            uVar15 = 1;
          }
          FUN_18011e588(param_1 + -0x6838,&local_5d0,local_608,lVar18,
                        uVar15 | (uint)(*(int *)(param_1 + -0x619c) != 0) << 2,local_66c,iVar22,
                        local_650,local_670 == 1,in_stack_fffffffffffff958 & 0xffffff00);
        }
      }
      lVar16 = local_628;
      FUN_18011a978(local_628 + -0x90);
      if (local_61c != 0) {
        *(byte *)(lVar16 + -4) =
             ~(byte)(*(uint *)(lVar16 + -0x40) >> 5) & 1 | *(byte *)(lVar16 + -4);
      }
      iVar11 = 0;
    }
    FUN_1802243a0(local_618);
  }
LAB_1801cb920:
  local_66c = iVar11;
  if (local_64c == 0) {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  else {
    thunk_FUN_18022370c(DAT_180258900);
  }
  return local_66c;
code_r0x0001801cb3e8:
  if ((char)bVar6 < '\0') {
    FUN_1801139b0();
  }
  else {
    FUN_180113008(&local_4c0,&local_600,uVar13 * 0x14 + lVar16);
  }
  uVar13 = (ulonglong)((int)uVar13 + 1);
  goto LAB_1801cb3c4;
}


/*
 * FUN_18001f9e8 at 18001f9e8
 * undefined FUN_18001f9e8(void)
 * Address ranges: 18001f9e8-180020063
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18001f9e8(undefined8 param_1,ulonglong param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  int *piVar14;
  undefined8 *puVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong extraout_x10;
  int iVar19;
  longlong lVar20;
  int iVar21;
  uint extraout_w12;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  uint local_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined8 *local_90;
  uint local_88;
  uint uStack_84;
  undefined8 local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  int local_60;
  undefined4 uStack_5c;
  
  param_2 = param_2 & 0xffffffff;
  local_90 = &DAT_180253a88;
  thunk_FUN_180102fc0((&DAT_180253a78)[param_2 * 0x4b]);
  (&DAT_180253a78)[param_2 * 0x4b] = 0;
  (&DAT_180253a80)[param_2 * 0x4b] = 0;
  thunk_FUN_180102fc0((&DAT_180253a88)[param_2 * 0x4b]);
  (&DAT_180253a88)[param_2 * 0x4b] = 0;
  (&DAT_180253a90)[param_2 * 0x4b] = 0;
  uVar10 = (**(code **)(*DAT_18024de58 + 0xa0))
                     (DAT_18024de58,(&DAT_18025386c)[param_2 * 0x96],
                      (&DAT_180253870)[param_2 * 0x96],*(undefined4 *)(DAT_18024de60 + 0x818));
  if (uVar10 != 0) {
    iVar19 = *(int *)(DAT_18024de60 + 0x9df);
    if (iVar19 != 0) {
      if (uVar10 != 0) {
        uVar24 = 0;
        do {
          (**(code **)(*DAT_18024de58 + 0xa8))
                    (DAT_18024de58,&local_70,(&DAT_18025386c)[param_2 * 0x96],
                     (&DAT_180253870)[param_2 * 0x96],*(undefined4 *)(DAT_18024de60 + 0x818),uVar24)
          ;
          if ((((int)local_70 != 0) && (local_70._4_4_ != 0)) &&
             (uVar12 = FUN_180020cd8(&DAT_180253a78 + param_2 * 0x4b,&local_70), (uVar12 & 1) == 0))
          {
            thunk_FUN_180102fc0((&DAT_180253a78)[param_2 * 0x4b]);
            (&DAT_180253a78)[param_2 * 0x4b] = 0;
            (&DAT_180253a80)[param_2 * 0x4b] = 0;
            break;
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 < uVar10);
      }
      if (*(int *)(&DAT_180253a80 + param_2 * 0x4b) != 0) {
        if (iVar19 == 1) {
          thunk_FUN_180102fc0((&DAT_180253a78)[param_2 * 0x4b]);
          (&DAT_180253a78)[param_2 * 0x4b] = 0;
          (&DAT_180253a80)[param_2 * 0x4b] = 0;
          uVar12 = 0;
          do {
            local_80 = 0x10000003c;
            local_78 = 0x3c;
            local_88 = (uint)(ushort)(&DAT_1802338f0)[uVar12 * 2];
            uStack_84 = (uint)(ushort)(&DAT_1802338f2)[uVar12 * 2];
            FUN_180020cd8(&DAT_180253a78 + param_2 * 0x4b,&local_88);
            uVar12 = (ulonglong)((int)uVar12 + 1);
          } while ((&DAT_1802338f0)[uVar12 * 2] != 0);
        }
        else {
          uVar12 = 0;
          do {
            uVar10 = *(uint *)(&DAT_180253a80 + param_2 * 0x4b);
            uVar18 = 0;
            if (uVar10 != 0) {
              do {
                if ((*(uint *)((&DAT_180253a78)[param_2 * 0x4b] + uVar18 * 0x18) ==
                     (uint)(ushort)(&DAT_1802338f0)[uVar12 * 2]) &&
                   (*(uint *)((&DAT_180253a78)[param_2 * 0x4b] + 4 + uVar18 * 0x18) ==
                    (uint)(ushort)(&DAT_1802338f2)[uVar12 * 2])) goto LAB_18001fc40;
                uVar24 = (int)uVar18 + 1;
                uVar18 = (ulonglong)uVar24;
              } while (uVar24 < uVar10);
            }
            if (((uint)uVar18 == uVar10) && (uVar10 != 0)) {
              uVar6 = (&DAT_1802338f0)[uVar12 * 2];
              uVar18 = 0;
              do {
                uVar24 = *(uint *)((&DAT_180253a78)[param_2 * 0x4b] + uVar18 * 0x18);
                if ((uVar6 < uVar24) ||
                   ((uVar24 == uVar6 &&
                    ((uint)(ushort)(&DAT_1802338f2)[uVar12 * 2] <
                     *(uint *)((&DAT_180253a78)[param_2 * 0x4b] + 4 + uVar18 * 0x18))))) {
                  local_80 = 0x10000003c;
                  local_78 = 0x3c;
                  local_88 = (uint)uVar6;
                  uStack_84 = (uint)(ushort)(&DAT_1802338f2)[uVar12 * 2];
                  FUN_180020dc0(&DAT_180253a78 + param_2 * 0x4b,uVar18,&local_88);
                  break;
                }
                uVar24 = (int)uVar18 + 1;
                uVar18 = (ulonglong)uVar24;
              } while (uVar24 < uVar10);
            }
LAB_18001fc40:
            uVar12 = (ulonglong)((int)uVar12 + 1);
          } while ((&DAT_1802338f0)[uVar12 * 2] != 0);
        }
      }
    }
    uVar10 = *(uint *)(&DAT_1802539c8 + param_2 * 0x4b);
    uVar24 = *(uint *)((longlong)&DAT_1802539c8 + param_2 * 600 + 4);
    lVar23 = 0;
    local_a0 = uVar10;
    uStack_9c = uVar24;
    do {
      lVar22 = DAT_18024de60 + lVar23 * 0xc;
      uVar13 = *(uint *)(lVar22 + 0x90b);
      if ((uVar13 != 0) && (uVar11 = *(uint *)(lVar22 + 0x90f), uVar11 != 0)) {
        uVar1 = uVar10;
        if (uVar13 != 0xffffffff || uVar11 != 0xffffffff) {
          uVar1 = uVar13;
        }
        uVar12 = (ulonglong)uVar1;
        uVar17 = uVar24;
        if ((uVar13 != 0xffffffff || uVar11 != 0xffffffff) && (uVar17 = uVar11, uVar1 == 0xffffffff)
           ) {
          if (uVar11 == 0x100) {
            local_98 = 0x300000004;
          }
          else {
            if (uVar11 != 0x101) goto LAB_18001fcd4;
            local_98 = 0x900000010;
          }
          uVar12 = FUN_1801002d0(&local_98,&local_a0,0);
          uVar17 = (uint)(uVar12 >> 0x20);
        }
LAB_18001fcd4:
        uVar13 = *(uint *)(&DAT_180253a80 + param_2 * 0x4b);
        uVar18 = 0;
        uVar11 = (uint)uVar12;
        if (uVar13 != 0) {
          lVar20 = (&DAT_180253a78)[param_2 * 0x4b];
          do {
            lVar16 = uVar18 * 0x18;
            if (((*(uint *)(lVar20 + lVar16) == uVar11) &&
                (*(uint *)(lVar20 + 4 + lVar16) == uVar17)) &&
               ((*(int *)(lVar22 + 0x913) == 0 ||
                (*(int *)(lVar22 + 0x913) == *(int *)(lVar20 + 0x10 + lVar16))))) break;
            uVar1 = (int)uVar18 + 1;
            uVar18 = (ulonglong)uVar1;
          } while (uVar1 < uVar13);
        }
        if ((uint)uVar18 == uVar13) {
          uVar12 = 0;
          bVar8 = uVar13 == 0;
          do {
            if (bVar8) {
LAB_18001fd84:
              uVar13 = *(uint *)(lVar22 + 0x913);
              if (uVar13 == 0) {
                local_80 = 0x10000003c;
                local_78 = 0x3c;
              }
              else {
                local_78 = (ulonglong)uVar13;
                local_80 = CONCAT44(1,uVar13);
              }
              local_88 = uVar11;
              uStack_84 = uVar17;
              FUN_180020dc0(&DAT_180253a78 + param_2 * 0x4b,uVar12,&local_88);
              break;
            }
            puVar2 = (uint *)((&DAT_180253a78)[param_2 * 0x4b] + uVar12 * 0x18);
            uVar1 = *puVar2;
            if ((uVar11 < uVar1) || ((uVar1 == uVar11 && (uVar17 < puVar2[1])))) goto LAB_18001fd84;
            uVar1 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar1;
            bVar8 = uVar1 == uVar13;
          } while (uVar1 <= uVar13);
        }
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 != 0x10);
    if (*(int *)(&DAT_180253a80 + param_2 * 0x4b) != 0) {
      uVar12 = 0;
      do {
        uVar10 = *(uint *)(&DAT_180253a80 + param_2 * 0x4b);
        if (uVar10 != 0) {
          lVar23 = (&DAT_180253a78)[param_2 * 0x4b];
          uVar18 = 0xffffffff;
          piVar14 = (int *)(lVar23 + (ulonglong)(uVar10 - 1) * 0x18);
          iVar19 = *piVar14;
          iVar21 = piVar14[1];
          bVar8 = false;
          do {
            uVar13 = (uint)uVar18;
            uVar24 = uVar10 - 1;
            uVar25 = (ulonglong)uVar24;
            piVar14 = (int *)(lVar23 + uVar25 * 0x18);
            if ((iVar19 != *piVar14) || (iVar21 != piVar14[1])) {
              if ((!bVar8) && (uVar13 != 0xffffffff)) {
                puVar3 = (undefined8 *)(lVar23 + (ulonglong)(uVar13 - 1) * 0x18);
                uStack_68 = puVar3[1];
                local_70 = *puVar3;
                uStack_5c = (undefined4)((ulonglong)puVar3[2] >> 0x20);
                _local_60 = CONCAT44(uStack_5c,(&DAT_18022a790)[uVar12]);
                FUN_180020dc0(&DAT_180253a78 + param_2 * 0x4b,uVar18,&local_70);
              }
              lVar23 = (&DAT_180253a78)[param_2 * 0x4b];
              uVar13 = 0xffffffff;
              piVar14 = (int *)(lVar23 + uVar25 * 0x18);
              iVar19 = *piVar14;
              iVar21 = piVar14[1];
              bVar8 = false;
            }
            iVar5 = (&DAT_18022a790)[uVar12];
            iVar4 = *(int *)(lVar23 + uVar25 * 0x18 + 0x10);
            bVar9 = iVar4 != iVar5 + -1;
            uVar11 = uVar10;
            if (bVar9) {
              uVar11 = uVar13;
            }
            uVar18 = (ulonglong)uVar11;
            if ((bVar9) && (iVar4 == iVar5)) {
              bVar8 = true;
            }
            uVar10 = uVar24;
          } while (uVar24 != 0);
          if ((!bVar8) && (uVar11 != 0xffffffff)) {
            puVar3 = (undefined8 *)(lVar23 + uVar18 * 0x18);
            uStack_68 = puVar3[1];
            local_70 = *puVar3;
            uStack_5c = (undefined4)((ulonglong)puVar3[2] >> 0x20);
            _local_60 = CONCAT44(uStack_5c,iVar5);
            FUN_180020dc0(&DAT_180253a78 + param_2 * 0x4b,uVar18,&local_70);
          }
        }
        uVar12 = (ulonglong)((int)uVar12 + 1);
      } while ((&DAT_18022a790)[uVar12] != 0);
    }
    puVar3 = local_90;
    for (uVar12 = 0; (uint)uVar12 < *(uint *)(&DAT_180253a80 + param_2 * 0x4b);
        uVar12 = (ulonglong)((uint)uVar12 + 1)) {
      uVar18 = 0;
      if (*(uint *)(&DAT_180253a90 + param_2 * 0x4b) != 0) {
        piVar14 = (int *)((&DAT_180253a78)[param_2 * 0x4b] + uVar12 * 0x18);
        lVar23 = (&DAT_180253a88)[param_2 * 0x4b];
        do {
          lVar22 = uVar18 * 0x18;
          puVar15 = (undefined8 *)(lVar22 + lVar23);
          if ((*(int *)(lVar22 + lVar23) == *piVar14) &&
             (*(int *)(lVar23 + 4 + lVar22) == piVar14[1])) {
            if (piVar14[4] != 0) {
              auVar27 = FUN_18001f9b8();
              uVar18 = auVar27._8_8_;
              if ((auVar27._0_8_ & 1) == 0) {
                uVar24 = *(uint *)(&DAT_1802539d8 + param_2 * 0x4b);
                uVar13 = *(uint *)(puVar15 + 2);
                uVar10 = uVar24 - uVar13;
                if (uVar24 <= uVar13 && uVar13 - uVar24 != 0) {
                  uVar10 = uVar13 - uVar24;
                }
                uVar13 = uVar24 - extraout_w12;
                if (uVar24 <= extraout_w12 && extraout_w12 - uVar24 != 0) {
                  uVar13 = extraout_w12 - uVar24;
                }
                if (uVar13 < uVar10) {
                  uVar26 = *(undefined8 *)piVar14;
                  puVar15[1] = *(undefined8 *)(piVar14 + 2);
                  *puVar15 = uVar26;
                  puVar15[2] = *(undefined8 *)(piVar14 + 4);
                }
              }
            }
            break;
          }
          uVar10 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar10;
        } while (uVar10 < *(uint *)(&DAT_180253a90 + param_2 * 0x4b));
      }
      if ((int)uVar18 == *(int *)(&DAT_180253a90 + param_2 * 0x4b)) {
        local_78 = local_78 & 0xffffffff;
        puVar2 = (uint *)((&DAT_180253a78)[param_2 * 0x4b] + uVar12 * 0x18);
        local_88 = *puVar2;
        uStack_84 = puVar2[1];
        uVar18 = FUN_18001f9b8();
        if ((uVar18 & 1) == 0) {
          local_80 = *(undefined8 *)(extraout_x10 + 8);
          uVar10 = *(uint *)(extraout_x10 + 0x10);
        }
        else {
          uVar24 = *(uint *)(DAT_18024de60 + 0x874);
          local_80 = *(undefined8 *)(DAT_18024de60 + 0x870);
          if (uVar24 == 0) {
            uVar10 = 0;
          }
          else {
            if (uVar24 == 0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x18001ffe8);
              (*pcVar7)();
            }
            uVar10 = 0;
            if (uVar24 != 0) {
              uVar10 = *(uint *)(DAT_18024de60 + 0x870) / uVar24;
            }
          }
        }
        local_78 = CONCAT44(local_78._4_4_,uVar10);
        uVar18 = FUN_180020cd8(puVar3 + param_2 * 0x4b,&local_88);
        if ((uVar18 & 1) == 0) {
          thunk_FUN_180102fc0((&DAT_180253a78)[param_2 * 0x4b]);
          (&DAT_180253a78)[param_2 * 0x4b] = 0;
          (&DAT_180253a80)[param_2 * 0x4b] = 0;
          thunk_FUN_180102fc0((&DAT_180253a88)[param_2 * 0x4b]);
          (&DAT_180253a88)[param_2 * 0x4b] = 0;
          (&DAT_180253a90)[param_2 * 0x4b] = 0;
          break;
        }
      }
    }
  }
  return *(int *)(&DAT_180253a80 + param_2 * 0x4b) != 0;
}


/*
 * FUN_1800f2fc8 at 1800f2fc8
 * undefined FUN_1800f2fc8(void)
 * Address ranges: 1800f2fc8-1800f354f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800f2fc8(longlong param_1,uint param_2,longlong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  int *piVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  uint uStack_54;
  
  pcVar5 = __imp_KERNEL32_dll_EnterCriticalSection;
  param_3[1] = 0;
  *param_3 = 0;
  param_3[2] = 0;
  uVar7 = (*pcVar5)();
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar22 = 0;
    if (*(int *)(param_1 + 0x48) == 0) goto LAB_1800f3094;
    do {
      lVar24 = *(longlong *)(param_1 + 0x40);
      uVar8 = uVar22 << 6;
      if (((uVar8 | 8) + lVar24 != 0) &&
         ((ulonglong)param_2 <= *(ulonglong *)((uVar8 | 0x18) + lVar24))) {
        uVar12 = *(uint *)(param_1 + 0x28);
        if (uVar12 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1800f3064);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = ((uVar12 + param_2) - 1 & -uVar12) / uVar12;
        }
        if (uVar11 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_1800fba78(uVar7,*(undefined8 *)((uVar8 | 0x20) + lVar24),
                                *(undefined8 *)((uVar8 | 0x28) + lVar24),
                                *(undefined4 *)((uVar8 | 0x34) + lVar24));
          if ((int)uVar7 == -1) goto LAB_1800f3094;
          *(uint *)((uVar8 | 0x38) + lVar24) = *(int *)((uVar8 | 0x38) + lVar24) + uVar11;
        }
        *param_3 = *(longlong *)((uVar8 | 0x10) + lVar24) +
                   (ulonglong)(uint)(*(int *)(param_1 + 0x28) * (int)uVar7);
        lVar24 = *(longlong *)((uVar8 | 0x10) + lVar24);
        *(uint *)(param_3 + 2) = param_2;
        param_3[1] = lVar24;
        break;
      }
LAB_1800f3094:
      uVar12 = (int)uVar22 + 1;
      uVar22 = (ulonglong)uVar12;
    } while (uVar12 < *(uint *)(param_1 + 0x48));
  }
  if (*param_3 == 0) {
    do {
      uVar12 = *(uint *)(param_1 + 0x2c);
      if (uVar12 < param_2 << 1) {
        iVar6 = 2;
        if (param_2 <= uVar12 * 3) {
          iVar6 = 3;
        }
        uVar12 = iVar6 * param_2;
      }
      uVar11 = *(uint *)(param_1 + 0x28);
      uVar12 = (uVar11 + uVar12) - 1 & -uVar11;
      uVar22 = (ulonglong)uVar12;
      if ((*(uint *)(param_1 + 0x30) == 0) ||
         (*(int *)(param_1 + 0x34) + uVar12 <= *(uint *)(param_1 + 0x30))) {
        if (uVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1800f3144);
          (*pcVar5)();
        }
        uVar16 = 0;
        if (uVar11 != 0) {
          uVar16 = uVar12 / uVar11;
        }
        lVar24 = -1L << ((ulonglong)uVar16 & 0x3f);
        if ((uVar16 & 0x3f) == 0) {
          lVar24 = 0;
        }
        uVar16 = uVar16 + 0x3f;
        uVar11 = uVar16 >> 6;
        uVar14 = (uVar16 & 0xffffffc0) >> 3;
        lVar15 = -1L << ((ulonglong)uVar11 & 0x3f);
        if ((uVar11 & 0x3f) == 0) {
          lVar15 = 0;
        }
        uVar2 = uVar11 + 0x3f >> 3;
        uVar8 = thunk_FUN_180102f80(uVar14);
        uVar9 = thunk_FUN_180102f80(uVar2 & 0x1ffffff8);
        if ((uVar8 != 0) && (uVar9 != 0)) {
          func_0x000180222c50(uVar8,0,uVar14);
          func_0x000180222c50(uVar9,0,uVar2 & 0x1ffffff8);
          *(longlong *)(uVar8 + (ulonglong)(uVar16 >> 6) * 8 + -8) = lVar24;
          *(longlong *)(uVar9 + (ulonglong)(uVar11 + 0x3f >> 6) * 8 + -8) = lVar15;
          uVar10 = thunk_FUN_180102f80(uVar22);
          if (uVar10 != 0) {
            uVar11 = *(uint *)(param_1 + 0x48);
            uVar21 = 0;
            if (uVar11 == 0) {
LAB_1800f3280:
              plVar23 = (longlong *)(param_1 + 0x40);
              uVar16 = *(uint *)(param_1 + 0x4c);
              if (uVar16 == uVar11) {
                uVar11 = 0x10;
                if (uVar16 != 0) {
                  uVar11 = uVar16 << 1;
                }
                lVar24 = thunk_FUN_180102f80((ulonglong)uVar11 << 6);
                if (lVar24 != 0) {
                  uVar17 = 0;
                  if (*(int *)(param_1 + 0x48) != 0) {
                    do {
                      uVar16 = (int)uVar17 + 1;
                      puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + uVar17 * 0x40);
                      puVar26 = (undefined8 *)(lVar24 + uVar17 * 0x40);
                      uVar28 = *puVar20;
                      uVar27 = puVar20[3];
                      uVar7 = puVar20[2];
                      puVar26[1] = puVar20[1];
                      *puVar26 = uVar28;
                      puVar26[3] = uVar27;
                      puVar26[2] = uVar7;
                      uVar28 = puVar20[4];
                      uVar27 = puVar20[7];
                      uVar7 = puVar20[6];
                      puVar26[5] = puVar20[5];
                      puVar26[4] = uVar28;
                      puVar26[7] = uVar27;
                      puVar26[6] = uVar7;
                      uVar17 = (ulonglong)uVar16;
                    } while (uVar16 < *(uint *)(param_1 + 0x48));
                  }
                  thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x38));
                  *(longlong *)(param_1 + 0x38) = lVar24;
                  *(longlong *)(param_1 + 0x40) = lVar24;
                  *(uint *)(param_1 + 0x4c) = uVar11;
                }
              }
              uVar17 = (ulonglong)*(uint *)(param_1 + 0x48);
              if (*(uint *)(param_1 + 0x4c) != *(uint *)(param_1 + 0x48)) {
                while ((uint)uVar21 < (uint)uVar17) {
                  uVar19 = (ulonglong)((uint)uVar17 - 1);
                  puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + uVar17 * 0x40);
                  puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + uVar19 * 0x40);
                  uVar28 = *puVar26;
                  uVar27 = puVar26[3];
                  uVar7 = puVar26[2];
                  puVar20[1] = puVar26[1];
                  *puVar20 = uVar28;
                  puVar20[3] = uVar27;
                  puVar20[2] = uVar7;
                  uVar28 = puVar26[4];
                  uVar27 = puVar26[7];
                  uVar7 = puVar26[6];
                  puVar20[5] = puVar26[5];
                  puVar20[4] = uVar28;
                  puVar20[7] = uVar27;
                  puVar20[6] = uVar7;
                  uVar17 = uVar19;
                }
                lVar15 = uVar21 * 0x40;
                *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
                *(ulonglong *)(lVar15 + *plVar23 + 8) = uVar10;
                lVar24 = lVar15 + *plVar23;
                *(ulonglong *)(lVar24 + 0x18) = uVar22;
                *(ulonglong *)(lVar24 + 0x10) = uVar10;
                *(ulonglong *)(lVar24 + 0x28) = uVar9;
                *(ulonglong *)(lVar24 + 0x20) = uVar8;
                *(ulonglong *)(lVar24 + 0x38) = (ulonglong)uStack_54 << 0x20;
                *(ulonglong *)(lVar24 + 0x30) = CONCAT44(uVar2,uVar14) & 0x1ffffff8ffffffff;
                *(ulonglong *)(*plVar23 + lVar15) = uVar10;
              }
            }
            else {
              uVar16 = 0;
              uVar13 = uVar11;
              do {
                uVar3 = uVar13 + uVar16 >> 1;
                uVar21 = (ulonglong)uVar3;
                uVar17 = *(ulonglong *)(*(longlong *)(param_1 + 0x40) + uVar21 * 0x40);
                if (uVar17 <= uVar10) {
                  if (uVar10 <= uVar17) break;
                  uVar16 = uVar3 + 1;
                  uVar21 = (ulonglong)(uVar3 + 1);
                  uVar3 = uVar13;
                }
                uVar13 = uVar3;
              } while (uVar13 != uVar16);
              if (((uint)uVar21 == uVar11) ||
                 (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x40) + uVar21 * 0x40),
                 *puVar1 != uVar10)) goto LAB_1800f3280;
              puVar1[3] = uVar22;
              puVar1[2] = uVar10;
              puVar1[5] = uVar9;
              puVar1[4] = uVar8;
              puVar1[7] = (ulonglong)uStack_54 << 0x20;
              puVar1[6] = CONCAT44(uVar2,uVar14) & 0x1ffffff8ffffffff;
            }
            uVar11 = *(uint *)(param_1 + 0x48);
            if (uVar11 != 0) {
              uVar16 = 0;
              uVar14 = uVar11;
              do {
                uVar2 = uVar14 + uVar16 >> 1;
                uVar22 = (ulonglong)uVar2;
                uVar21 = *(ulonglong *)(*(longlong *)(param_1 + 0x40) + uVar22 * 0x40);
                if (uVar21 <= uVar10) {
                  if (uVar10 <= uVar21) break;
                  uVar16 = uVar2 + 1;
                  uVar22 = (ulonglong)(uVar2 + 1);
                  uVar2 = uVar14;
                }
                uVar14 = uVar2;
              } while (uVar14 != uVar16);
              if ((uint)uVar22 != uVar11) {
                lVar24 = *(longlong *)(param_1 + 0x40);
                if ((*(ulonglong *)(lVar24 + uVar22 * 0x40) == uVar10) &&
                   (plVar23 = (longlong *)(lVar24 + (uVar22 * 0x40 | 0x10)),
                   plVar23 != (longlong *)0x0)) {
                  *(uint *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + uVar12;
                  iVar6 = FUN_1800f2f60(param_1,plVar23,(ulonglong)param_2);
                  if (iVar6 != -1) {
                    *param_3 = *plVar23 + (ulonglong)(uint)(*(int *)(param_1 + 0x28) * iVar6);
                    lVar24 = *plVar23;
                    *(uint *)(param_3 + 2) = param_2;
                    param_3[1] = lVar24;
                  }
                  break;
                }
              }
            }
            thunk_FUN_180102fc0(uVar10);
          }
        }
        thunk_FUN_180102fc0(uVar8);
        thunk_FUN_180102fc0(uVar9);
      }
      uVar12 = *(uint *)(param_1 + 0x48);
      if (uVar12 == 0) break;
      bVar4 = false;
      uVar11 = uVar12;
      do {
        uVar16 = uVar11 - 1;
        if (uVar16 < uVar12) {
          lVar24 = *(longlong *)(param_1 + 0x40);
          uVar22 = (ulonglong)uVar16 << 6;
          puVar20 = (undefined8 *)((uVar22 | 0x10) + lVar24);
          piVar18 = (int *)((uVar22 | 0x38) + lVar24);
          puVar26 = (undefined8 *)((uVar22 | 0x20) + lVar24);
          puVar25 = (undefined8 *)((uVar22 | 0x28) + lVar24);
        }
        else {
          puVar20 = (undefined8 *)&DAT_00000008;
          piVar18 = (int *)&DAT_00000030;
          puVar26 = (undefined8 *)&DAT_00000018;
          puVar25 = (undefined8 *)&DAT_00000020;
        }
        if (*piVar18 == 0) {
          thunk_FUN_180102fc0(*puVar20);
          thunk_FUN_180102fc0(*puVar26);
          thunk_FUN_180102fc0(*puVar25);
          while( true ) {
            if (*(uint *)(param_1 + 0x48) <= uVar11) break;
            puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)(uVar11 - 1) * 0x40)
            ;
            puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar11 * 0x40);
            uVar11 = uVar11 + 1;
            uVar28 = *puVar26;
            uVar27 = puVar26[3];
            uVar7 = puVar26[2];
            puVar20[1] = puVar26[1];
            *puVar20 = uVar28;
            puVar20[3] = uVar27;
            puVar20[2] = uVar7;
            uVar28 = puVar26[4];
            uVar27 = puVar26[7];
            uVar7 = puVar26[6];
            puVar20[5] = puVar26[5];
            puVar20[4] = uVar28;
            puVar20[7] = uVar27;
            puVar20[6] = uVar7;
          }
          uVar12 = *(uint *)(param_1 + 0x48) - 1;
          *(uint *)(param_1 + 0x48) = uVar12;
          bVar4 = true;
        }
        uVar11 = uVar16;
      } while (uVar16 != 0);
    } while (bVar4);
  }
  lVar24 = *param_3;
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1);
  return lVar24 != 0;
}


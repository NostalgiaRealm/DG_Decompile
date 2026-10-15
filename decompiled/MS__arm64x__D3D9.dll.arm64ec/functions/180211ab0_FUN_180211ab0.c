/*
 * FUN_180211ab0 at 180211ab0
 * undefined FUN_180211ab0(void)
 * Address ranges: 180211ab0-18021204b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180211ab0(longlong param_1,uint param_2,longlong *param_3)

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
  ulonglong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  int *piVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  uint uStack_54;
  
  param_3[1] = 0;
  *param_3 = 0;
  param_3[2] = 0;
  uVar7 = thunk_FUN_1802236f8();
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar22 = 0;
    if (*(int *)(param_1 + 0x48) == 0) goto LAB_180211b70;
    do {
      lVar24 = *(longlong *)(param_1 + 0x40);
      uVar8 = uVar22 << 6;
      if (((uVar8 | 8) + lVar24 != 0) &&
         ((ulonglong)param_2 <= *(ulonglong *)((uVar8 | 0x18) + lVar24))) {
        uVar14 = *(uint *)(param_1 + 0x28);
        if (uVar14 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x180211b40);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar14 != 0) {
          uVar11 = ((uVar14 + param_2) - 1 & -uVar14) / uVar14;
        }
        if (uVar11 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_18021cf30(uVar7,*(undefined8 *)((uVar8 | 0x20) + lVar24),
                                *(undefined8 *)((uVar8 | 0x28) + lVar24),
                                *(undefined4 *)((uVar8 | 0x34) + lVar24));
          if ((int)uVar7 == -1) goto LAB_180211b70;
          *(uint *)((uVar8 | 0x38) + lVar24) = *(int *)((uVar8 | 0x38) + lVar24) + uVar11;
        }
        *param_3 = *(longlong *)((uVar8 | 0x10) + lVar24) +
                   (ulonglong)(uint)(*(int *)(param_1 + 0x28) * (int)uVar7);
        lVar24 = *(longlong *)((uVar8 | 0x10) + lVar24);
        *(uint *)(param_3 + 2) = param_2;
        param_3[1] = lVar24;
        break;
      }
LAB_180211b70:
      uVar14 = (int)uVar22 + 1;
      uVar22 = (ulonglong)uVar14;
    } while (uVar14 < *(uint *)(param_1 + 0x48));
  }
  if (*param_3 == 0) {
    do {
      uVar14 = *(uint *)(param_1 + 0x2c);
      if (uVar14 < param_2 << 1) {
        iVar6 = 2;
        if (param_2 <= uVar14 * 3) {
          iVar6 = 3;
        }
        uVar14 = iVar6 * param_2;
      }
      uVar11 = *(uint *)(param_1 + 0x28);
      uVar14 = (uVar11 + uVar14) - 1 & -uVar11;
      uVar22 = (ulonglong)uVar14;
      if ((*(uint *)(param_1 + 0x30) == 0) ||
         (*(int *)(param_1 + 0x34) + uVar14 <= *(uint *)(param_1 + 0x30))) {
        if (uVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x180211c2c);
          (*pcVar5)();
        }
        uVar18 = 0;
        if (uVar11 != 0) {
          uVar18 = uVar14 / uVar11;
        }
        lVar24 = -1L << ((ulonglong)uVar18 & 0x3f);
        if ((uVar18 & 0x3f) == 0) {
          lVar24 = 0;
        }
        uVar18 = uVar18 + 0x3f;
        uVar11 = uVar18 >> 6;
        uVar16 = (uVar18 & 0xffffffc0) >> 3;
        lVar17 = -1L << ((ulonglong)uVar11 & 0x3f);
        if ((uVar11 & 0x3f) == 0) {
          lVar17 = 0;
        }
        uVar2 = uVar11 + 0x3f >> 3;
        uVar8 = FUN_1802229a8(uVar16);
        uVar9 = FUN_1802229a8(uVar2 & 0x1ffffff8);
        if ((uVar8 != 0) && (uVar9 != 0)) {
          FUN_180222c50(uVar8,0,uVar16);
          FUN_180222c50(uVar9,0,uVar2 & 0x1ffffff8);
          *(longlong *)(uVar8 + (ulonglong)(uVar18 >> 6) * 8 + -8) = lVar24;
          *(longlong *)(uVar9 + (ulonglong)(uVar11 + 0x3f >> 6) * 8 + -8) = lVar17;
          uVar10 = FUN_1802229a8(uVar22);
          if (uVar10 != 0) {
            uVar11 = *(uint *)(param_1 + 0x48);
            uVar21 = 0;
            if (uVar11 == 0) {
LAB_180211d7c:
              plVar23 = (longlong *)(param_1 + 0x40);
              uVar18 = *(uint *)(param_1 + 0x4c);
              if (uVar18 == uVar11) {
                uVar11 = 0x10;
                if (uVar18 != 0) {
                  uVar11 = uVar18 << 1;
                }
                lVar24 = FUN_1802229a8((ulonglong)uVar11 << 6);
                if (lVar24 != 0) {
                  uVar19 = 0;
                  if (*(int *)(param_1 + 0x48) != 0) {
                    do {
                      uVar18 = (int)uVar19 + 1;
                      puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + uVar19 * 0x40);
                      puVar26 = (undefined8 *)(lVar24 + uVar19 * 0x40);
                      uVar7 = *puVar13;
                      uVar28 = puVar13[3];
                      uVar27 = puVar13[2];
                      puVar26[1] = puVar13[1];
                      *puVar26 = uVar7;
                      puVar26[3] = uVar28;
                      puVar26[2] = uVar27;
                      uVar7 = puVar13[4];
                      uVar28 = puVar13[7];
                      uVar27 = puVar13[6];
                      puVar26[5] = puVar13[5];
                      puVar26[4] = uVar7;
                      puVar26[7] = uVar28;
                      puVar26[6] = uVar27;
                      uVar19 = (ulonglong)uVar18;
                    } while (uVar18 < *(uint *)(param_1 + 0x48));
                  }
                  FUN_1802229d8(*(undefined8 *)(param_1 + 0x38));
                  *(longlong *)(param_1 + 0x38) = lVar24;
                  *(longlong *)(param_1 + 0x40) = lVar24;
                  *(uint *)(param_1 + 0x4c) = uVar11;
                }
              }
              uVar19 = (ulonglong)*(uint *)(param_1 + 0x48);
              if (*(uint *)(param_1 + 0x4c) != *(uint *)(param_1 + 0x48)) {
                while ((uint)uVar21 < (uint)uVar19) {
                  uVar12 = (ulonglong)((uint)uVar19 - 1);
                  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + uVar19 * 0x40);
                  puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + uVar12 * 0x40);
                  uVar7 = *puVar26;
                  uVar28 = puVar26[3];
                  uVar27 = puVar26[2];
                  puVar13[1] = puVar26[1];
                  *puVar13 = uVar7;
                  puVar13[3] = uVar28;
                  puVar13[2] = uVar27;
                  uVar7 = puVar26[4];
                  uVar28 = puVar26[7];
                  uVar27 = puVar26[6];
                  puVar13[5] = puVar26[5];
                  puVar13[4] = uVar7;
                  puVar13[7] = uVar28;
                  puVar13[6] = uVar27;
                  uVar19 = uVar12;
                }
                lVar17 = uVar21 * 0x40;
                *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
                *(ulonglong *)(lVar17 + *plVar23 + 8) = uVar10;
                lVar24 = lVar17 + *plVar23;
                *(ulonglong *)(lVar24 + 0x18) = uVar22;
                *(ulonglong *)(lVar24 + 0x10) = uVar10;
                *(ulonglong *)(lVar24 + 0x28) = uVar9;
                *(ulonglong *)(lVar24 + 0x20) = uVar8;
                *(ulonglong *)(lVar24 + 0x38) = (ulonglong)uStack_54 << 0x20;
                *(ulonglong *)(lVar24 + 0x30) = CONCAT44(uVar2,uVar16) & 0x1ffffff8ffffffff;
                *(ulonglong *)(*plVar23 + lVar17) = uVar10;
              }
            }
            else {
              uVar18 = 0;
              uVar15 = uVar11;
              do {
                uVar3 = uVar15 + uVar18 >> 1;
                uVar21 = (ulonglong)uVar3;
                uVar19 = *(ulonglong *)(*(longlong *)(param_1 + 0x40) + uVar21 * 0x40);
                if (uVar19 <= uVar10) {
                  if (uVar10 <= uVar19) break;
                  uVar18 = uVar3 + 1;
                  uVar21 = (ulonglong)(uVar3 + 1);
                  uVar3 = uVar15;
                }
                uVar15 = uVar3;
              } while (uVar15 != uVar18);
              if (((uint)uVar21 == uVar11) ||
                 (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x40) + uVar21 * 0x40),
                 *puVar1 != uVar10)) goto LAB_180211d7c;
              puVar1[3] = uVar22;
              puVar1[2] = uVar10;
              puVar1[5] = uVar9;
              puVar1[4] = uVar8;
              puVar1[7] = (ulonglong)uStack_54 << 0x20;
              puVar1[6] = CONCAT44(uVar2,uVar16) & 0x1ffffff8ffffffff;
            }
            uVar11 = *(uint *)(param_1 + 0x48);
            if (uVar11 != 0) {
              uVar18 = 0;
              uVar16 = uVar11;
              do {
                uVar2 = uVar16 + uVar18 >> 1;
                uVar22 = (ulonglong)uVar2;
                uVar21 = *(ulonglong *)(*(longlong *)(param_1 + 0x40) + uVar22 * 0x40);
                if (uVar21 <= uVar10) {
                  if (uVar10 <= uVar21) break;
                  uVar18 = uVar2 + 1;
                  uVar22 = (ulonglong)(uVar2 + 1);
                  uVar2 = uVar16;
                }
                uVar16 = uVar2;
              } while (uVar16 != uVar18);
              if ((uint)uVar22 != uVar11) {
                lVar24 = *(longlong *)(param_1 + 0x40);
                if ((*(ulonglong *)(lVar24 + uVar22 * 0x40) == uVar10) &&
                   (plVar23 = (longlong *)(lVar24 + (uVar22 * 0x40 | 0x10)),
                   plVar23 != (longlong *)0x0)) {
                  *(uint *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + uVar14;
                  iVar6 = FUN_180211a48(param_1,plVar23,param_2);
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
            FUN_1802229d8(uVar10);
          }
        }
        FUN_1802229d8(uVar8);
        FUN_1802229d8(uVar9);
      }
      uVar14 = *(uint *)(param_1 + 0x48);
      if (uVar14 == 0) break;
      bVar4 = false;
      uVar11 = uVar14;
      do {
        uVar18 = uVar11 - 1;
        if (uVar18 < uVar14) {
          lVar24 = *(longlong *)(param_1 + 0x40);
          uVar22 = (ulonglong)uVar18 << 6;
          puVar13 = (undefined8 *)((uVar22 | 0x10) + lVar24);
          piVar20 = (int *)((uVar22 | 0x38) + lVar24);
          puVar26 = (undefined8 *)((uVar22 | 0x20) + lVar24);
          puVar25 = (undefined8 *)((uVar22 | 0x28) + lVar24);
        }
        else {
          puVar13 = (undefined8 *)&DAT_00000008;
          piVar20 = (int *)&DAT_00000030;
          puVar26 = (undefined8 *)&DAT_00000018;
          puVar25 = (undefined8 *)&DAT_00000020;
        }
        if (*piVar20 == 0) {
          FUN_1802229d8(*puVar13);
          FUN_1802229d8(*puVar26);
          FUN_1802229d8(*puVar25);
          while( true ) {
            if (*(uint *)(param_1 + 0x48) <= uVar11) break;
            puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)(uVar11 - 1) * 0x40)
            ;
            puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar11 * 0x40);
            uVar11 = uVar11 + 1;
            uVar7 = *puVar26;
            uVar28 = puVar26[3];
            uVar27 = puVar26[2];
            puVar13[1] = puVar26[1];
            *puVar13 = uVar7;
            puVar13[3] = uVar28;
            puVar13[2] = uVar27;
            uVar7 = puVar26[4];
            uVar28 = puVar26[7];
            uVar27 = puVar26[6];
            puVar13[5] = puVar26[5];
            puVar13[4] = uVar7;
            puVar13[7] = uVar28;
            puVar13[6] = uVar27;
          }
          uVar14 = *(uint *)(param_1 + 0x48) - 1;
          *(uint *)(param_1 + 0x48) = uVar14;
          bVar4 = true;
        }
        uVar11 = uVar18;
      } while (uVar18 != 0);
    } while (bVar4);
  }
  lVar24 = *param_3;
  thunk_FUN_18022370c(param_1);
  return lVar24 != 0;
}


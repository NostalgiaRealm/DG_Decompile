/*
 * FUN_18011af00 at 18011af00
 * undefined FUN_18011af00(void)
 * Address ranges: 18011af00-18011b947;18011b9c4-18011ba3f;18011be44-18011c12f;18011c13c-18011c15b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18011af00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  int *piVar11;
  undefined8 uVar12;
  byte bVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  uint uVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined4 uVar26;
  byte bVar27;
  undefined4 uVar28;
  uint uVar29;
  byte bVar30;
  longlong extraout_x15;
  undefined1 *puVar31;
  uint *puVar32;
  uint uVar33;
  longlong lVar34;
  int iVar35;
  ulonglong uVar36;
  uint uVar37;
  undefined1 auVar38 [16];
  longlong lStack_8;
  uint uVar21;
  
  auVar38 = FUN_180104f10();
  uVar12 = auVar38._8_8_;
  piVar11 = auVar38._0_8_;
  lVar5 = extraout_x15 * -0x10;
  FUN_180222c50(&stack0x00000048 + lVar5,0,0x1328);
  iVar35 = *piVar11;
  puVar32 = (uint *)(piVar11 + 1);
  (&stack0x000012b6)[lVar5] = (char)iVar35;
  bVar8 = iVar35 + 0xff00U < 5;
  uVar22 = (uint)bVar8;
  (&stack0x000012b5)[lVar5] = (char)((uint)iVar35 >> 8);
  *(undefined8 *)(&stack0x0000126c + lVar5) = 0xffffffffffffffff;
  *(undefined8 *)(&stack0x00001264 + lVar5) = 0xffffffffffffffff;
  *(undefined8 *)(&stack0x0000127c + lVar5) = 0xffffffffffffffff;
  *(undefined8 *)(&stack0x00001274 + lVar5) = 0xffffffffffffffff;
  *(undefined8 *)(&stack0x0000128c + lVar5) = 0xffffffffffffffff;
  *(undefined8 *)(&stack0x00001284 + lVar5) = 0xffffffffffffffff;
  *(undefined8 *)(&stack0x0000129c + lVar5) = 0xffffffffffffffff;
  *(undefined8 *)(&stack0x00001294 + lVar5) = 0xffffffffffffffff;
  if (iVar35 == -0xfefc) {
    uVar16 = 1;
    puVar23 = puVar32;
LAB_18011afb0:
    do {
      while( true ) {
        uVar2 = (ushort)*puVar23;
        uVar24 = (uint)uVar2;
        if ((9 < uVar2) || ((0x32cU >> (ulonglong)(uVar24 & 0x1f) & 1) == 0)) break;
LAB_18011b05c:
        puVar23 = puVar23 + 4;
      }
      if ((uVar24 - 1 < 0x40) &&
         ((0x8000000000000001U >> ((ulonglong)(uVar24 - 1) & 0x3f) & 1) != 0)) {
LAB_18011b044:
        puVar23 = puVar23 + 3;
        goto LAB_18011afb0;
      }
      uVar19 = (uint)uVar2;
      if ((0x12 < uVar19) || ((0x40010U >> (ulonglong)(uVar24 & 0x1f) & 1) == 0)) {
        if ((uVar24 - 0x41 < 0x17) && ((0x400001U >> (ulonglong)(uVar24 - 0x41 & 0x1f) & 1) != 0)) {
          puVar23 = puVar23 + 2;
          goto LAB_18011afb0;
        }
        if ((uVar19 - 0x50 & 0xfffffff7) != 0) {
          if (uVar19 == 0x51) {
            puVar23 = puVar23 + 6;
            goto LAB_18011afb0;
          }
          if (uVar19 == 0x59) goto LAB_18011b05c;
          if (uVar19 == 0xfffd) break;
          if (uVar19 == 0xfffe) {
            puVar23 = puVar23 + *(ushort *)((longlong)puVar23 + 2);
          }
          else {
            if (uVar19 == 0xffff) goto LAB_18011b078;
            if (uVar24 != 0) {
              if (uVar24 == 0x42) goto LAB_18011b044;
              goto LAB_18011b078;
            }
          }
          puVar23 = puVar23 + 1;
          goto LAB_18011afb0;
        }
      }
      puVar23 = puVar23 + 5;
    } while( true );
  }
  uVar16 = 0;
LAB_18011b078:
  if (bVar8) {
    cVar9 = (&stack0x0000136c)[lVar5];
    uVar28 = *(undefined4 *)(&stack0x00001354 + lVar5);
    *(undefined4 *)(&stack0xffffffffffffffe8 + lVar5) = 0;
    uVar26 = *(undefined4 *)(&stack0x0000134c + lVar5);
    *(undefined4 *)(&stack0xffffffffffffffb8 + lVar5) = uVar16;
    (&lStack_8)[extraout_x15 * -2] = 0;
    uVar16 = *(undefined4 *)(&stack0x00001344 + lVar5);
    *(undefined8 *)(&stack0x00000028 + lVar5) = uVar12;
    *(undefined8 *)(&stack0x00000030 + lVar5) = param_3;
    bVar18 = (&stack0x00001340)[lVar5];
    *(int **)(&stack0x00000008 + lVar5) = piVar11;
    bVar30 = (&stack0x0000133e)[lVar5];
    uVar15 = 1;
    do {
      uVar22 = (uint)uVar15;
      if (*(int *)(&stack0xffffffffffffffe8 + lVar5) != 0) break;
      uVar37 = *puVar32;
      *(uint **)(&stack0x00000018 + lVar5) = puVar32;
      *(uint **)(&stack0x00000020 + lVar5) = puVar32;
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar5) = 0;
      *(undefined4 *)(&stack0xffffffffffffffb0 + lVar5) = 0;
      *(undefined4 *)(&stack0xffffffffffffffc8 + lVar5) = 0;
      uVar24 = uVar37 & 0xffff0000;
      *(uint *)(&stack0xffffffffffffffe0 + lVar5) = uVar24;
      *(uint *)(&stack0xffffffffffffffe4 + lVar5) = uVar37;
      uVar19 = uVar37 & 0xffff;
      if (uVar19 == 0) {
        if ((uVar24 == 0) && (cVar9 == '\0')) {
          uVar15 = 1;
        }
        else {
          uVar15 = 0;
        }
LAB_18011c094:
        puVar32 = puVar32 + 1;
        goto LAB_18011c098;
      }
      uVar22 = uVar22 & 0xff & ~uVar37 >> 0x1f;
      uVar15 = (ulonglong)uVar22;
      if (uVar19 == 0x51) {
        uVar19 = puVar32[1];
        if (bVar30 == 0 && uVar24 == 0) {
          uVar22 = uVar22 & uVar19 >> 0x1f;
        }
        else {
          uVar22 = 0;
        }
        if (uVar22 == 0) {
          uVar15 = 0;
        }
        else {
          if ((uVar19 & 0x7f8) != 0) {
            uVar22 = 0;
          }
          uVar24 = (uint)((uVar19 & 0xf0000) == 0xf0000 || (uVar19 & 0xf0000) == 0);
          if ((uVar19 & 0xf00000) != 0) {
            uVar24 = 0;
          }
          uVar22 = (uVar19 & 0x1800 | uVar19 >> 0x14 & 0x7ff) >> 8 == 2 & uVar24 & uVar22;
          uVar15 = (ulonglong)uVar22;
          if (uVar22 != 0) {
            uVar24 = puVar32[2];
            uVar37 = puVar32[3];
            (&stack0x00000379)[(ulonglong)(uVar19 & 0x7ff) + lVar5] = 1;
            uVar22 = (uVar19 & 0x7ff) * 4;
            *(uint *)(&stack0x0000045c + (ulonglong)uVar22 * 4 + lVar5) = uVar24;
            *(uint *)(&stack0x0000045c + (ulonglong)(uVar22 + 1) * 4 + lVar5) = uVar37;
            puVar23 = puVar32 + 4;
            uVar24 = puVar32[5];
            puVar32 = puVar32 + 6;
            *(uint *)(&stack0x0000045c + (ulonglong)(uVar22 + 2) * 4 + lVar5) = *puVar23;
            *(uint *)(&stack0x0000045c + (ulonglong)(uVar22 + 3) * 4 + lVar5) = uVar24;
LAB_18011c04c:
            cVar9 = (&stack0x0000136c)[lVar5];
            uVar28 = *(undefined4 *)(&stack0x00001354 + lVar5);
            uVar26 = *(undefined4 *)(&stack0x0000134c + lVar5);
            uVar16 = *(undefined4 *)(&stack0x00001344 + lVar5);
            bVar18 = (&stack0x00001340)[lVar5];
            bVar30 = (&stack0x0000133e)[lVar5];
          }
        }
LAB_18011c098:
        *(undefined4 *)(&stack0x00001350 + lVar5) = uVar26;
        *(undefined4 *)(&stack0x00001358 + lVar5) = uVar28;
        *(undefined4 *)(&stack0x00001348 + lVar5) = uVar16;
        uVar16 = **(undefined4 **)(&stack0x00000018 + lVar5);
        *(undefined4 *)(&stack0x00001344 + lVar5) = uVar16;
        uVar26 = *(undefined4 *)(*(longlong *)(&stack0x00000020 + lVar5) + 4);
        uVar28 = *(undefined4 *)(*(longlong *)(&stack0x00000020 + lVar5) + 8);
        *(undefined4 *)(&stack0x0000134c + lVar5) = uVar26;
        *(undefined4 *)(&stack0x00001354 + lVar5) = uVar28;
      }
      else {
        if (uVar19 == 0xfffd) {
          if (((&stack0x000012b6)[lVar5] != '\x04') ||
             (*(int *)(&stack0xffffffffffffffb8 + lVar5) != 0 || uVar24 != 0)) {
            uVar15 = 0;
          }
          lVar34 = 0;
          do {
            (&stack0x00000052)[lVar34 + lVar5] = (&stack0x00000052)[lVar34 + lVar5] & 7;
            lVar34 = lVar34 + 1;
          } while (lVar34 != 6);
          bVar18 = 0;
          uVar28 = *(undefined4 *)(&stack0x00001354 + lVar5);
          (&stack0x00001340)[lVar5] = 0;
          bVar30 = 0;
          uVar26 = *(undefined4 *)(&stack0x0000134c + lVar5);
          *(undefined2 *)(&stack0x0000133e + lVar5) = 0;
          uVar16 = *(undefined4 *)(&stack0x00001344 + lVar5);
          *(int *)(&stack0xffffffffffffffb8 + lVar5) =
               *(int *)(&stack0xffffffffffffffb8 + lVar5) + 1;
          cVar9 = (&stack0x0000136c)[lVar5];
          goto LAB_18011c094;
        }
        if (uVar19 == 0xfffe) {
          puVar32 = puVar32 + ((uVar37 >> 0x10) + 1);
        }
        else {
          if (uVar19 != 0xffff) {
            cVar10 = (&DAT_180229fc0)[uVar19];
            uVar36 = (ulonglong)cVar10;
            uVar15 = (ulonglong)(cVar10 != -1);
            if (cVar10 == -1) goto LAB_18011c098;
            uVar37 = puVar32[1];
            *(undefined4 *)(&stack0xfffffffffffffff0 + lVar5) = 0x8040201;
            (&stack0xfffffffffffffff4)[lVar5] = 0x10;
            iVar35 = (int)cVar10;
            lVar34 = ((-(uVar36 >> 0x1f & 1) & 0xfffffff800000000 | (uVar36 & 0xffffffff) << 3) -
                     (longlong)iVar35) * 4;
            bVar27 = (&stack0x000012b6)[lVar5];
            uVar25 = (ulonglong)bVar27;
            uVar29 = (uint)bVar27;
            *(longlong *)(&stack0x00000010 + lVar5) = lVar34;
            uVar22 = (uint)(((&DAT_18022a024)[lVar34] & (&stack0xfffffffffffffff0)[uVar25 + lVar5])
                            != 0 && cVar10 != -1);
            if (uVar24 == 0) {
              bVar13 = (&stack0x0000133f)[lVar5];
              if ((&DAT_18022a020)[lVar34] == '\0') {
                if ((&DAT_18022a021)[lVar34] != '\0') {
                  bVar7 = bVar18 <= (byte)(&DAT_18022a389)[uVar25 * 3];
                  bVar8 = (&DAT_18022a389)[uVar25 * 3] == bVar18;
                  goto LAB_18011b1dc;
                }
              }
              else {
                bVar7 = bVar13 <= (byte)(&DAT_18022a388)[uVar25 * 3];
                bVar8 = (&DAT_18022a388)[uVar25 * 3] == bVar13;
LAB_18011b1dc:
                if (!bVar7 || bVar8) {
                  uVar22 = 0;
                }
              }
              if ((byte)(&DAT_18022a38a)[uVar25 * 3] <= bVar30) {
                uVar22 = 0;
              }
              if ((&DAT_18022a020)[lVar34] == '\0') {
                if ((&DAT_18022a021)[lVar34] != '\0') {
                  (&stack0x00001340)[lVar5] = bVar18 + 1;
                  *(int *)(&stack0x00001260 + lVar5) = *(int *)(&stack0x00001260 + lVar5) + 1;
                  uVar22 = bVar13 == 0 & uVar22;
                }
              }
              else {
                bVar13 = bVar13 + 1;
                (&stack0x0000133f)[lVar5] = bVar13;
              }
              (&stack0x0000133e)[lVar5] = bVar30 + 1;
            }
            else {
              bVar13 = (&stack0x0000133f)[lVar5];
            }
            *(undefined8 *)(&stack0x00000000 + lVar5) = 0x18020104;
            uVar4 = (uVar37 & 0x1800 | uVar37 >> 0x14 & 0x7ff) >> 8;
            uVar24 = uVar37 & 0x7ff;
            uVar33 = 0;
            uVar17 = (uint)((uVar37 & 0xe00000) == 0);
            if ((byte)(&DAT_18022a3a0)[uVar4 * 5 + (uint)bVar27] <= uVar24) {
              uVar17 = 0;
            }
            if (((((((uVar37 & 0xf000000) == 0) || ((uVar37 & 0xf000000) == 0x1000000)) ||
                  ((uVar37 & 0xf000000) == 0x2000000)) ||
                 (((uVar37 & 0xf000000) == 0x3000000 || ((uVar37 & 0xf000000) == 0xd000000)))) ||
                ((uVar37 & 0xf000000) == 0xe000000)) || ((uVar37 & 0xf000000) == 0xf000000)) {
              uVar17 = uVar17 & uVar22;
              uVar15 = (ulonglong)(byte)uVar17;
              if (uVar17 != 0) {
                (&stack0xffffffffffffffc1)[lVar5] = (char)uVar24;
                bVar18 = (&stack0x00000000)[(ulonglong)uVar4 + lVar5];
                uVar33 = (uint)bVar18;
                (&stack0xffffffffffffffc0)[lVar5] = bVar18;
                if (bVar18 == 0x18) {
                  if (((&stack0x0000007a)[(ulonglong)uVar24 + lVar5] == '\0') &&
                     ((&DAT_18022a020)
                      [((-(uVar36 >> 0x1f & 1) & 0xfffffff800000000 | (uVar36 & 0xffffffff) << 3) -
                       (longlong)iVar35) * 4] == '\0')) {
                    uVar33 = 0x10;
                  }
                  else {
                    uVar33 = 8;
                  }
                }
                if (((byte)(&DAT_18022a025)
                           [uVar25 + ((-(uVar36 >> 0x1f & 1) & 0xfffffff800000000 |
                                      (uVar36 & 0xffffffff) << 3) - (longlong)(int)cVar10) * 4] &
                    uVar33) == 0) {
                  uVar17 = 0;
                }
                uVar15 = (ulonglong)uVar17;
              }
            }
            else {
              uVar15 = 0;
            }
            uVar22 = uVar37 & 0xf0000;
            if (bVar27 != 4) {
              uVar15 = (ulonglong)
                       ((uint)(((uVar22 == 0x80000 || uVar22 == 0x70000) || uVar22 == 0xf0000) ||
                              uVar22 == 0) & (uint)uVar15);
            }
            if ((&DAT_18022a021)
                [((-(uVar36 >> 0x1f & 1) & 0xfffffff800000000 | (uVar36 & 0xffffffff) << 3) -
                 (longlong)(int)cVar10) * 4] != '\0') {
              uVar17 = (uint)uVar15;
              if (uVar22 != 0xf0000) {
                uVar17 = 0;
              }
              uVar4 = (uint)uVar15;
              if (uVar33 == 0x10) {
                uVar4 = uVar17;
              }
              uVar15 = (ulonglong)uVar4;
            }
            uVar17 = uVar22;
            if (uVar22 == 0) {
              uVar17 = 0xf0000;
            }
            lVar34 = ((-(uVar36 >> 0x1f & 1) & 0xfffffff800000000 | (uVar36 & 0xffffffff) << 3) -
                     (longlong)iVar35) * 4 +
                     (ulonglong)(*(int *)(&stack0xffffffffffffffb8 + lVar5) + (uint)bVar27);
            bVar18 = (byte)(uVar17 >> 0x10);
            (&stack0xffffffffffffffc2)[lVar5] = bVar18;
            (&stack0xffffffffffffffb4)[lVar5] = (&DAT_18022a02a)[lVar34];
            uVar1 = (&DAT_18022a036)[lVar34];
            (&stack0xffffffffffffffb5)[lVar5] = (&DAT_18022a030)[lVar34];
            (&stack0xffffffffffffffb6)[lVar5] = uVar1;
            if ((int)uVar15 == 0) {
              uVar15 = 0;
            }
            else {
              *(uint *)(&stack0xffffffffffffffd0 + lVar5) = uVar33;
              *(uint *)(&stack0xffffffffffffffd4 + lVar5) = uVar24;
              lVar34 = ((-(uVar36 >> 0x1f & 1) & 0xfffffff800000000 | (uVar36 & 0xffffffff) << 3) -
                       (longlong)iVar35) * 4;
              *(uint *)(&stack0xffffffffffffffd8 + lVar5) = uVar22;
              *(uint *)(&stack0xffffffffffffffdc + lVar5) = uVar17;
              *(uint *)(&stack0xffffffffffffffb0 + lVar5) = uVar37;
              uVar36 = 0;
              do {
                uVar29 = (uint)uVar25;
                uVar22 = (uint)uVar36;
                if ((2 < uVar22) ||
                   (bVar30 = (&stack0xffffffffffffffb4)[uVar36 + lVar5], bVar30 == 0)) break;
                uVar33 = puVar32[uVar22 + 2];
                uVar4 = (uVar33 & 0x1800 | uVar33 >> 0x14 & 0x7ff) >> 8;
                uVar24 = uVar33 & 0x7ff;
                uVar37 = uVar33 >> 0x1f;
                if ((byte)(&DAT_18022a3a0)[uVar4 * 5 + uVar29] <= uVar24) {
                  uVar37 = 0;
                }
                uVar37 = uVar37 & (uint)uVar15;
                uVar21 = 0;
                uVar20 = 0;
                uVar14 = 0;
                if (uVar37 != 0) {
                  lVar6 = uVar36 * 3;
                  bVar27 = (&stack0x00000000)[(ulonglong)uVar4 + lVar5];
                  (&stack0xffffffffffffffc3)[lVar6 + lVar5] = bVar27;
                  (&stack0xffffffffffffffc4)[lVar6 + lVar5] = (char)uVar24;
                  if ((bVar27 == 0x18) &&
                     (bVar27 = 8, (&stack0x0000007a)[(ulonglong)uVar24 + lVar5] == '\0')) {
                    bVar27 = 0x10;
                  }
                  if ((bVar30 & bVar27) == 0) {
                    uVar37 = 0;
                  }
                  uVar4 = uVar33 & 0xff0000;
                  uVar14 = uVar37;
                  if (uVar19 == 0x42) {
                    if (uVar29 == 4) {
                      if ((uVar4 == 0xe40000) || (uVar4 == 0xa40000)) {
                        bVar8 = (uVar33 & 0xf000000) == 0x9000000;
                      }
                      else {
LAB_18011b55c:
                        if (uVar4 != 0xf40000) {
                          uVar14 = 0;
                          uVar20 = 0;
                          goto LAB_18011b5dc;
                        }
                        bVar8 = (uVar33 & 0xf000000) == 0xa000000;
                      }
                      uVar14 = 0;
                      uVar20 = 0;
                      if (bVar8 || (uVar33 & 0xf000000) == 0) {
                        uVar14 = uVar37;
                        uVar20 = uVar37;
                      }
                    }
                    else {
LAB_18011b594:
                      uVar20 = uVar21;
                      if ((((uVar4 != 0xff0000 && uVar4 != 0xe40000) &&
                           ((uVar4 != 0xaa0000 || (uVar29 == 0)))) &&
                          ((uVar4 != 0x550000 || (uVar29 != 4)))) && ((uVar4 != 0 || (uVar29 != 4)))
                         ) {
                        uVar14 = 0;
                      }
                    }
                  }
                  else {
                    if ((uVar19 != 0x40) || (uVar29 != 4)) goto LAB_18011b594;
                    if ((uVar4 - 0xa40000 & 0xffbfffff) != 0) goto LAB_18011b55c;
                    uVar14 = (uVar33 & 0xf000000) == 0 & uVar37;
                    uVar20 = uVar14;
                  }
LAB_18011b5dc:
                  uVar37 = (uint)(byte)(&DAT_18022a023)[lVar34];
                  if ((&DAT_18022a022)[lVar34] != '\0') {
                    uVar37 = (uint)(byte)(&DAT_18022a023)[lVar34] & uVar17 >> 0x10;
                  }
                  uVar29 = 1 << (ulonglong)(uVar4 >> 0x14 & 3);
                  if ((uVar37 & 4) == 0) {
                    uVar29 = 0;
                  }
                  uVar21 = 1 << (ulonglong)(uVar4 >> 0x12 & 3);
                  if ((uVar37 & 2) == 0) {
                    uVar21 = 0;
                  }
                  uVar3 = 1 << (ulonglong)(uVar4 >> 0x10 & 3);
                  if ((uVar37 & 1) == 0) {
                    uVar3 = 0;
                  }
                  uVar4 = 1 << (ulonglong)(uVar4 >> 0x16);
                  if ((uVar37 & 8) == 0) {
                    uVar4 = 0;
                  }
                  uVar4 = uVar29 | uVar21 | uVar3 | uVar4;
                  uVar37 = uVar4 & 0xff;
                  bVar30 = (byte)uVar4;
                  if (bVar27 == 1) {
                    puVar31 = &stack0x00000048 + lVar5;
LAB_18011b6b4:
                    uVar29 = 0xf;
                    puVar31[uVar24] = puVar31[uVar24] | bVar30;
                    uVar25 = (ulonglong)(byte)(&stack0x000012b6)[lVar5];
                  }
                  else {
                    if (bVar27 == 2) {
                      puVar31 = &stack0x00000080 + lVar5;
                      goto LAB_18011b6b4;
                    }
                    if (bVar27 == 4) {
                      uVar29 = (uint)(byte)(&stack0x00000052)[(ulonglong)uVar24 + lVar5];
                    }
                    else if (bVar27 == 8) {
                      uVar29 = (uint)(byte)(&stack0x0000007a)[(ulonglong)uVar24 + lVar5];
                      uVar14 = (&stack0x000012b8)[(ulonglong)uVar24 + lVar5] == '\0' & uVar14;
                    }
                    else {
                      if (bVar27 == 0x10) {
                        puVar31 = &stack0x00000072 + lVar5;
                        goto LAB_18011b6b4;
                      }
                      uVar29 = 0;
                    }
                  }
                  uVar14 = uVar37 == (uVar37 & uVar29) & uVar14;
                  (&stack0xffffffffffffffc5)[lVar6 + lVar5] = bVar30;
                }
                uVar29 = (uint)uVar25;
                *(undefined8 *)(&stack0x00000038 + lVar5) = 0x101010101010101;
                *(undefined8 *)(&stack0x00000040 + lVar5) = 0x10101;
                if ((((uVar33 & 0xb000000) == 0) || (uVar20 != 0)) ||
                   ((&DAT_18022a020)[lVar34] != '\0')) {
                  uVar15 = (ulonglong)
                           ((byte)(&stack0x00000038)
                                  [(ulonglong)((uVar33 & 0xf000000) >> 0x18) + lVar5] & uVar14);
                }
                else {
                  uVar15 = 0;
                }
                uVar36 = (ulonglong)(uVar22 + 1);
              } while ((int)uVar15 != 0);
              uVar37 = *(uint *)(&stack0xffffffffffffffb0 + lVar5);
              uVar33 = *(uint *)(&stack0xffffffffffffffd0 + lVar5);
              uVar24 = *(uint *)(&stack0xffffffffffffffd4 + lVar5);
              uVar22 = *(uint *)(&stack0xffffffffffffffd8 + lVar5);
              uVar17 = *(uint *)(&stack0xffffffffffffffdc + lVar5);
              cVar9 = (&stack0x0000136c)[lVar5];
              *(undefined4 *)(&stack0xffffffffffffffb0 + lVar5) =
                   *(undefined4 *)(&stack0xffffffffffffffc8 + lVar5);
              bVar13 = (&stack0x0000133f)[lVar5];
            }
            uVar36 = (ulonglong)uVar24;
            if (uVar33 == 4) {
              puVar31 = &stack0x00000052;
LAB_18011b7c8:
              puVar31[uVar36 + lVar5] = puVar31[uVar36 + lVar5] | bVar18;
              uVar29 = (uint)(byte)(&stack0x000012b6)[lVar5];
              bVar13 = (&stack0x0000133f)[lVar5];
              cVar9 = (&stack0x0000136c)[lVar5];
            }
            else if (uVar33 == 8) {
              if (((&DAT_18022a020)[*(longlong *)(&stack0x00000010 + lVar5)] != '\0') &&
                 ((&stack0x000012b8)[uVar36 + lVar5] != '\0')) {
                (&stack0x000012b8)[uVar36 + lVar5] = 0;
                (&stack0x0000007a)[uVar36 + lVar5] = 0;
              }
              puVar31 = &stack0x0000007a;
              goto LAB_18011b7c8;
            }
            if (*(int *)(&stack0xffffffffffffffe0 + lVar5) == 0x40000000) {
              *(int *)(&stack0x00001264 + (ulonglong)(byte)(&stack0x00001341)[lVar5] * 4 + lVar5) =
                   (int)((&lStack_8)[extraout_x15 * -2] - *(longlong *)(&stack0x00000008 + lVar5) >>
                        2);
              uVar24 = *(uint *)(&stack0x0000134c + lVar5) & 0xf0000;
              if (uVar24 == 0) {
                uVar24 = 0xf0000;
              }
              if ((uVar24 & 0x80000) == 0 && uVar17 == 0x80000) {
LAB_18011b874:
                uVar22 = 1;
              }
              else {
                uVar29 = uVar37 & 0x80000;
                if (uVar22 == 0) {
                  uVar29 = 0x80000;
                }
                uVar22 = 0;
                if (uVar24 == 0x80000 && uVar29 == 0) goto LAB_18011b874;
              }
              uVar15 = (ulonglong)(uVar22 & (uint)uVar15);
              cVar9 = FUN_18011ae90(&stack0xffffffffffffffc0 + lVar5,&stack0x0000135c + lVar5);
              if (cVar9 == '\0') {
                cVar9 = '\0';
              }
              else {
                cVar10 = FUN_18011ae90(&stack0x0000135c + lVar5,&stack0xffffffffffffffc0 + lVar5);
                if (cVar10 != '\0') {
                  cVar9 = '\x02';
                }
              }
              (&stack0x000012a4)[(ulonglong)(byte)(&stack0x00001341)[lVar5] + lVar5] =
                   (byte)*(undefined4 *)(&stack0x00001368 + lVar5) | cVar9 << 4;
              (&stack0x00001341)[lVar5] = (&stack0x00001341)[lVar5] + '\x01';
              bVar13 = (&stack0x0000133f)[lVar5];
              cVar9 = (&stack0x0000136c)[lVar5];
              uVar29 = (uint)(byte)(&stack0x000012b6)[lVar5];
            }
            if ((*(uint *)(&stack0xffffffffffffffe4 + lVar5) & 0xffc0) == 0) {
              if (((uVar19 == 1) || (uVar19 == 2)) ||
                 ((uVar19 == 3 || (((uVar19 == 4 || (uVar19 == 5)) || (uVar19 == 8)))))) {
LAB_18011b9c4:
                uVar15 = (ulonglong)((uint)(cVar9 == '\0') & (uint)uVar15);
              }
              else if (uVar19 == 9) {
                uVar22 = (uint)(*(int *)(&stack0xffffffffffffffe0 + lVar5) == 0) & (uint)uVar15;
                if ((uVar29 - 2 & 0xff) < 2) {
                  (&stack0x0000133f)[lVar5] = bVar13 + 1;
                  if (((uVar37 & 0x70001800) == (puVar32[2] & 0x70001800)) ||
                     ((uVar37 & 0x70001800) == (puVar32[3] & 0x70001800))) {
                    uVar22 = 0;
                  }
                }
                if (cVar9 != '\0') {
                  uVar22 = 0;
                }
                uVar15 = (ulonglong)uVar22;
              }
              else if (uVar19 == 0x12) goto LAB_18011b9c4;
            }
            else if (uVar19 < 0x5a) {
                    /* WARNING: Could not emulate address calculation at 0x00018011b938 */
                    /* WARNING: Treating indirect jump as call */
              uVar12 = (*(code *)(&UNK_18011bc78 +
                                 (longlong)*(int *)(&DAT_18011c15c + (ulonglong)(uVar19 - 0x40) * 4)
                                 * 4))(uVar37 & 0x7ff);
              return uVar12;
            }
            (&lStack_8)[extraout_x15 * -2] = (longlong)puVar32;
            uVar36 = 0;
            do {
              if ((&stack0xffffffffffffffb4)[uVar36 + lVar5] == '\0') break;
              uVar22 = (int)uVar36 + 1;
              uVar36 = (ulonglong)uVar22;
              puVar32 = puVar32 + 1;
            } while (uVar22 < 3);
            puVar32 = puVar32 + 2;
            *(int *)(&stack0x00001368 + lVar5) =
                 (int)((longlong)puVar32 - (&lStack_8)[extraout_x15 * -2] >> 2);
            *(undefined8 *)(&stack0x0000135c + lVar5) =
                 *(undefined8 *)(&stack0xffffffffffffffc0 + lVar5);
            *(undefined4 *)(&stack0x00001364 + lVar5) =
                 *(undefined4 *)(&stack0xffffffffffffffb0 + lVar5);
            if ((int)uVar15 != 0) {
              (&stack0x000012be)[(ulonglong)*(ushort *)(&stack0xffffffffffffffe4 + lVar5) + lVar5] =
                   (&stack0x000012be)
                   [(ulonglong)*(ushort *)(&stack0xffffffffffffffe4 + lVar5) + lVar5] + '\x01';
            }
            goto LAB_18011c04c;
          }
          if ((uVar24 == 0) && (cVar9 == '\0')) {
            uVar15 = 1;
          }
          else {
            uVar15 = 0;
          }
          *(undefined4 *)(&stack0xffffffffffffffe8 + lVar5) = 1;
          puVar32 = puVar32 + 1;
        }
      }
      uVar22 = 0;
    } while ((int)uVar15 != 0);
    uVar12 = *(undefined8 *)(&stack0x00000028 + lVar5);
  }
  uVar24 = (uint)(byte)(&stack0x000012b4)[lVar5];
  uVar15 = 0;
  do {
    if ((&stack0x00000072)[uVar15 + lVar5] != '\0') {
      uVar24 = 1 << (ulonglong)((uint)uVar15 & 0x1f) | uVar24;
      (&stack0x000012b4)[lVar5] = (char)uVar24;
    }
    uVar19 = (uint)uVar15 + 1;
    uVar15 = (ulonglong)uVar19;
  } while (uVar19 < 8);
  if ((((&stack0x00000052)[lVar5] & 0xf) == 0xf & uVar22) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48(uVar12,&stack0x00000048 + lVar5,0x1270);
  }
  return 0;
}


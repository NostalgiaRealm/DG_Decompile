/*
 * FUN_1800bafe8 at 1800bafe8
 * undefined FUN_1800bafe8(void)
 * Address ranges: 1800bafe8-1800bbc8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800bafe8(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  int iVar16;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined8 uVar22;
  uint uVar23;
  uint uVar24;
  byte bVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  ulonglong uVar30;
  uint *puVar31;
  undefined2 uVar32;
  ulonglong uVar33;
  uint uVar34;
  longlong extraout_x15;
  longlong lVar35;
  undefined4 uVar36;
  ulonglong uVar37;
  byte bVar38;
  uint *puVar39;
  ulonglong uVar40;
  longlong lVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  undefined1 auVar46 [16];
  longlong lVar17;
  
  auVar46 = FUN_180001640();
  puVar39 = auVar46._8_8_;
  lVar17 = auVar46._0_8_;
  lVar8 = extraout_x15 * -0x10;
  *(longlong *)(&stack0x00000048 + lVar8) = param_3;
  *(undefined4 *)(&stack0xffffffffffffffb8 + lVar8) = 0x8876086c;
  if ((puVar39 == (uint *)0x0) || (param_3 == 0)) goto LAB_1800bbc68;
  if (((*(uint *)(lVar17 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    uVar36 = 0;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
LAB_1800bb058:
    *(undefined4 *)(&stack0xffffffffffffffb4 + lVar8) = uVar36;
  }
  else {
    uVar36 = 1;
    iVar16 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar16 != 0) goto LAB_1800bb058;
    FUN_180003398();
    *(undefined4 *)(&stack0xffffffffffffffb4 + lVar8) = 1;
  }
  uVar3 = *puVar39;
  if ((uVar3 + 0x1ff00 < 2) || (uVar3 + 0x1fe00 < 2 || uVar3 == 0xfffe0300)) {
    func_0x000180222c50(&stack0x000008f8 + lVar8,0,0x4a70);
    lVar29 = *(longlong *)(lVar17 + 0x60);
    *(undefined4 *)(&stack0xffffffffffffffa0 + lVar8) = 0;
    uVar24 = *(uint *)(lVar29 + 0xc4);
    if (uVar24 < uVar3) {
      uVar36 = 0x7fffffff;
    }
    else {
      uVar36 = *(undefined4 *)(lVar29 + 0x128);
    }
    if ((uVar3 & 0xff00) == 0x100) {
      uVar32 = *(undefined2 *)(lVar17 + -0x59bc);
      *(undefined8 *)(&stack0x00000064 + lVar8) = 0x8000800020002;
      *(undefined8 *)(&stack0x0000005c + lVar8) = 0x3000300010000;
      *(undefined8 *)(&stack0x00000050 + lVar8) = 0x100010000c000c;
      bVar14 = uVar3 + 0x1ff00 < 2;
      *(undefined2 *)(&stack0x00000058 + lVar8) = uVar32;
      bVar11 = uVar3 != 0xfffe0100;
      *(undefined2 *)(&stack0x0000005a + lVar8) = uVar32;
      *(undefined8 *)(&stack0x00000008 + lVar8) = 0;
      *(undefined8 *)(&stack0x00000000 + lVar8) = 0;
      *(undefined8 *)(&stack0x00000010 + lVar8) = 0;
      uVar26 = 0;
      puVar31 = puVar39 + 1;
      iVar16 = 0;
      (&stack0x00005365)[lVar8] = (char)uVar3;
      bVar10 = true;
      (&stack0x00005364)[lVar8] = 1;
      if (bVar14) {
        *(undefined4 *)(&stack0xffffffffffffffbc + lVar8) = 0;
        *(undefined4 *)(&stack0xffffffffffffffb0 + lVar8) = 0;
        *(uint *)(&stack0xffffffffffffffa8 + lVar8) = uVar24;
        *(undefined1 **)(&stack0x00000038 + lVar8) = &stack0x000048f8 + lVar8;
        *(uint **)(&stack0x00000040 + lVar8) = puVar39;
LAB_1800bb1c0:
        if (iVar16 != 0) goto LAB_1800bb83c;
        *(undefined8 *)(&stack0x00000008 + lVar8) = 0x100000000;
        uVar42 = *puVar31;
        *(undefined2 *)(&stack0x00000010 + lVar8) = 0xf0f;
        bVar12 = true;
        uVar24 = uVar42 & 0xffff;
        uVar26 = uVar42 & 0xffff0000;
        *(int *)(*(longlong *)(&stack0x00000038 + lVar8) + 0xa68) =
             *(int *)(*(longlong *)(&stack0x00000038 + lVar8) + 0xa68) + 1;
        bVar13 = bVar10;
        switch(uVar24) {
        case 0:
          puVar31 = puVar31 + 1;
LAB_1800bb2c4:
          bVar12 = true;
          goto LAB_1800bb834;
        case 1:
          goto switchD_1800bb20c_caseD_1;
        case 2:
        case 5:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
          goto switchD_1800bb20c_caseD_2;
        case 3:
        case 0x12:
switchD_1800bb20c_caseD_3:
          uVar42 = *(uint *)(&stack0x00000008 + lVar8);
          bVar14 = false;
          bVar12 = bVar10;
          break;
        case 4:
          uVar42 = 3;
          break;
        case 6:
        case 7:
        case 0xe:
        case 0xf:
switchD_1800bb20c_caseD_6:
          *(undefined2 *)(&stack0x00000011 + lVar8) = 8;
          goto LAB_1800bb3e8;
        case 8:
          uVar32 = 7;
          goto LAB_1800bb224;
        case 9:
          goto switchD_1800bb20c_caseD_9;
        case 0x10:
          *(undefined2 *)(&stack0x00000011 + lVar8) = 0xb;
LAB_1800bb3e8:
          bVar13 = false;
switchD_1800bb20c_caseD_1:
          uVar42 = 1;
          bVar12 = bVar13;
          break;
        case 0x11:
          uVar32 = 0xe;
LAB_1800bb224:
          *(undefined2 *)(&stack0x00000011 + lVar8) = uVar32;
          bVar12 = false;
          uVar42 = 2;
          break;
        case 0x13:
          *(undefined2 *)(&stack0x00000010 + lVar8) = 0x303;
          bVar15 = 3;
          uVar42 = 1;
          bVar12 = bVar10;
          goto LAB_1800bb3f4;
        case 0x14:
          *(undefined8 *)(&stack0x00000008 + lVar8) = 0x400000002;
          bVar13 = false;
          goto switchD_1800bb20c_caseD_2;
        case 0x15:
          goto LAB_1800bb270;
        case 0x16:
          *(undefined2 *)(&stack0x00000011 + lVar8) = 7;
          *(undefined8 *)(&stack0x00000008 + lVar8) = 0x400000002;
          goto switchD_1800bb20c_caseD_9;
        case 0x17:
          *(undefined2 *)(&stack0x00000010 + lVar8) = 0x707;
LAB_1800bb270:
          bVar15 = 7;
          uVar22 = 0x300000002;
LAB_1800bb274:
          *(undefined8 *)(&stack0x00000008 + lVar8) = uVar22;
          uVar42 = 2;
          bVar12 = false;
          goto LAB_1800bb3f4;
        case 0x18:
          *(undefined2 *)(&stack0x00000010 + lVar8) = 0x703;
          bVar15 = 3;
          uVar22 = 0x200000002;
          goto LAB_1800bb274;
        default:
          if (uVar24 == 0x1f) {
            if ((((((uVar26 == 0) && (uVar24 = puVar31[2], (int)uVar24 < 0)) &&
                  ((uVar24 & 0x70000000) == 0x10000000)) &&
                 (((uVar24 & 0xf000000) == 0 && ((uVar24 & 0xf0000) == 0xf0000)))) &&
                ((uVar24 & 0xf00000) == 0)) &&
               ((((uVar24 & 0x7ff) <
                  (uint)*(ushort *)
                         (&stack0x00000050 +
                         (ulonglong)((uint)bVar11 | (uVar24 >> 0x1c & 7) << 1) * 2 + lVar8) &&
                 (uVar26 = puVar31[1], (uVar26 & 0xfff0fff0) == 0x80000000)) &&
                ((uVar26 & 0xf) < 0xe)))) {
              (&stack0x000008f8)[(ulonglong)(uVar24 & 0x7ff) + lVar8] =
                   (byte)((uVar26 & 0xf) << 4) | (byte)(uVar26 >> 0x10) & 0xf;
              bVar12 = true;
              *(uint *)(&stack0xffffffffffffffb0 + lVar8) =
                   1 << (ulonglong)(uVar24 & 0x1f) | *(uint *)(&stack0xffffffffffffffb0 + lVar8);
            }
            else {
              bVar12 = false;
            }
            puVar31 = puVar31 + 3;
          }
          else {
            if ((uVar24 == 0x4e) || (uVar24 == 0x4f)) goto switchD_1800bb20c_caseD_6;
            if (uVar24 == 0x51) {
              if (((((uVar26 == 0) && (uVar24 = puVar31[1], (int)uVar24 < 0)) &&
                   ((uVar24 & 0x70000000) == 0x20000000)) &&
                  (((uVar24 & 0xf000000) == 0 && ((uVar24 & 0xf0000) == 0xf0000)))) &&
                 (((uVar24 & 0xf00000) == 0 &&
                  (uVar26 = uVar24 & 0x7ff,
                  uVar26 < *(ushort *)
                            (&stack0x00000050 +
                            (ulonglong)((uint)bVar11 | (uVar24 >> 0x1c & 7) << 1) * 2 + lVar8))))) {
                uVar45 = puVar31[2];
                uVar44 = puVar31[3];
                uVar43 = puVar31[4];
                uVar42 = puVar31[5];
                uVar24 = uVar26 * 4;
                (&stack0x00000d47)[(ulonglong)uVar26 + lVar8] = 1;
                bVar12 = true;
                *(uint *)(&stack0x00001148 + (ulonglong)uVar24 * 4 + lVar8) = uVar45;
                *(uint *)(&stack0x00001148 + (ulonglong)(uVar24 + 1) * 4 + lVar8) = uVar44;
                *(uint *)(&stack0x00001148 + (ulonglong)(uVar24 + 2) * 4 + lVar8) = uVar43;
                *(uint *)(&stack0x00001148 + (ulonglong)(uVar24 + 3) * 4 + lVar8) = uVar42;
              }
              else {
                bVar12 = false;
              }
              puVar31 = puVar31 + 6;
            }
            else {
              if (uVar24 == 0xfffe) {
                puVar31 = puVar31 + ((uVar42 >> 0x10) + 1);
                goto LAB_1800bb2c4;
              }
              if (uVar24 != 0xffff) goto switchD_1800bb20c_caseD_3;
              bVar12 = uVar26 == 0;
              puVar31 = puVar31 + 1;
              iVar16 = 1;
              bVar14 = bVar12;
            }
          }
LAB_1800bb834:
          bVar14 = (bool)(bVar14 & bVar12);
          goto LAB_1800bb838;
        }
LAB_1800bb3f0:
        bVar15 = (&stack0x00000010)[lVar8];
LAB_1800bb3f4:
        uVar4 = puVar31[1];
        bVar13 = uVar26 == 0;
        iVar5 = *(int *)(&stack0xffffffffffffffbc + lVar8);
        uVar45 = uVar4 & 0x1800 | uVar4 >> 0x14 & 0x700;
        uVar34 = uVar45 >> 8;
        *(uint *)(&stack0xffffffffffffffbc + lVar8) = iVar5 + 1U;
        uVar43 = uVar4 & 0x7ff;
        uVar44 = uVar4 >> 0x10 & 0xf;
        if ((uVar26 == 0) && (iVar5 + 1U < 0x81 && (int)uVar4 < 0)) {
          if ((uVar45 < 0x100) || (bVar9 = false, uVar34 - 3 < 4)) {
            bVar9 = true;
          }
          uVar26 = uVar4 & 0xf0000;
          if ((uVar26 == 0) || (bVar38 = 1, uVar26 != 0x10000 && uVar34 == 3)) {
            bVar38 = 0;
          }
          if ((uVar24 != 0x13) || (bVar25 = 0, (uVar26 - 0x20000 & 0xfffeffff) == 0)) {
            bVar25 = 1;
          }
          if ((((!bVar9) || (!(bool)(bVar25 & bVar38))) || ((uVar4 & 0xff00000) != 0)) ||
             (*(ushort *)(&stack0x00000050 + (ulonglong)((uint)bVar11 | uVar34 << 1) * 2 + lVar8) <=
              uVar43)) goto LAB_1800bb4f4;
          if (0xff < uVar45) {
            uVar44 = uVar4 >> 0x10 & 0xf & (uint)bVar15;
          }
          if (bVar12) {
            uVar24 = uVar44 & (byte)(&stack0x00000011)[lVar8];
          }
          else {
            uVar24 = (uint)(byte)(&stack0x00000011)[lVar8];
          }
          bVar13 = true;
        }
        else {
LAB_1800bb4f4:
          uVar24 = (uint)(byte)(&stack0x00000011)[lVar8];
        }
        if (uVar42 != 0) {
          uVar4 = *(uint *)(&stack0x0000000c + lVar8);
          uVar26 = 0;
          *(uint *)(&stack0x00000020 + lVar8) = uVar44;
          *(uint *)(&stack0x00000030 + lVar8) = uVar43;
          *(uint *)(&stack0x00000028 + lVar8) = uVar45;
          *(uint *)(&stack0x0000002c + lVar8) = uVar34;
          *(undefined4 *)(&stack0xffffffffffffffc0 + lVar8) = 0;
          do {
            if (bVar13 == false) {
              iVar16 = *(int *)(&stack0xffffffffffffffc0 + lVar8);
              bVar13 = false;
              goto LAB_1800bb780;
            }
            uVar43 = puVar31[uVar26 + 2];
            bVar13 = false;
            if ((int)uVar43 < 0) {
              uVar44 = uVar43 & 0x1800 | uVar43 >> 0x14 & 0x700;
              uVar45 = uVar44 >> 8;
              if ((uVar44 < 0x100) || (uVar45 - 1 < 3)) {
                bVar15 = 1;
                if (uVar45 != 2) goto LAB_1800bb568;
LAB_1800bb574:
                bVar12 = true;
              }
              else {
                bVar15 = 0;
LAB_1800bb568:
                if ((uVar43 >> 0xd & 1) == 0) goto LAB_1800bb574;
                bVar12 = false;
              }
              uVar34 = uVar43 & 0xff0000;
              uVar28 = 1 << (ulonglong)(uVar34 >> 0x14 & 3);
              if ((uVar24 & 4) == 0) {
                uVar28 = 0;
              }
              uVar6 = 1 << (ulonglong)(uVar34 >> 0x12 & 3);
              if ((uVar24 & 2) == 0) {
                uVar6 = 0;
              }
              uVar23 = 1 << (ulonglong)(uVar34 >> 0x10 & 3);
              if ((uVar24 & 1) == 0) {
                uVar23 = 0;
              }
              uVar7 = 1 << (ulonglong)(uVar34 >> 0x16);
              if ((uVar24 & 8) == 0) {
                uVar7 = 0;
              }
              if ((((bool)((uVar45 != 3 || uVar34 == 0) & bVar15)) && (bVar12)) &&
                 (((uVar43 & 0xe000000) == 0 &&
                  (uVar34 = uVar43 & 0x7ff,
                  uVar34 < *(ushort *)
                            (&stack0x00000050 + (ulonglong)((uint)bVar11 | uVar45 << 1) * 2 + lVar8)
                  )))) {
                uVar7 = uVar28 | uVar6 | uVar23 | uVar7;
                uVar28 = 0xff;
                uVar23 = uVar7 & 0xff;
                uVar6 = 1;
                if ((uVar26 != uVar42 - 1) || (uVar6 = uVar4, uVar4 != 0)) {
                  uVar27 = 0;
                  do {
                    if (uVar44 < 0x100) {
                      bVar15 = (&stack0x00000918)[(ulonglong)(uVar27 + uVar34) + lVar8];
LAB_1800bb6a0:
                      uVar28 = bVar15 & uVar28;
                    }
                    else {
                      bVar15 = (byte)uVar7;
                      if (uVar45 == 1) {
                        lVar29 = (ulonglong)(uVar27 + uVar34) + lVar8;
                        uVar28 = uVar28 & 0xf;
                        (&stack0x00000908)[lVar29] = (&stack0x00000908)[lVar29] | bVar15;
                      }
                      else if (uVar45 == 2) {
                        lVar29 = (ulonglong)(uVar27 + uVar34) + lVar8;
                        uVar28 = uVar28 & 0xf;
                        (&stack0x00000939)[lVar29] = (&stack0x00000939)[lVar29] | bVar15;
                      }
                      else if (uVar45 == 3) {
                        bVar15 = (&stack0x00000938)[(ulonglong)(uVar27 + uVar34) + lVar8];
                        goto LAB_1800bb6a0;
                      }
                    }
                    uVar27 = uVar27 + 1;
                  } while (uVar27 < uVar6);
                }
                if (uVar23 == (uVar23 & uVar28)) {
                  if ((uVar43 >> 0xd & 1) != 0) {
                    (&stack0x00000d46)[lVar8] = 1;
                  }
                  bVar13 = true;
                }
              }
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < uVar42);
          iVar16 = *(int *)(&stack0xffffffffffffffc0 + lVar8);
          uVar45 = *(uint *)(&stack0x00000028 + lVar8);
          uVar34 = *(uint *)(&stack0x0000002c + lVar8);
          uVar43 = *(uint *)(&stack0x00000030 + lVar8);
          uVar44 = *(uint *)(&stack0x00000020 + lVar8);
        }
        if (bVar13 != false) {
          bVar15 = (byte)uVar44;
          if (uVar45 < 0x100) {
            (&stack0x00000918)[(ulonglong)uVar43 + lVar8] =
                 (&stack0x00000918)[(ulonglong)uVar43 + lVar8] | bVar15;
          }
          else if (uVar34 == 3) {
            (&stack0x00000938)[(ulonglong)uVar43 + lVar8] =
                 (&stack0x00000938)[(ulonglong)uVar43 + lVar8] | bVar15;
          }
          else if (uVar34 == 4) {
            (&stack0x00000d39)[(ulonglong)uVar43 + lVar8] =
                 (&stack0x00000d39)[(ulonglong)uVar43 + lVar8] | bVar15;
          }
          else if (uVar34 == 5) {
            (&stack0x00000d3c)[(ulonglong)uVar43 + lVar8] =
                 (&stack0x00000d3c)[(ulonglong)uVar43 + lVar8] | bVar15;
          }
          else if (uVar34 == 6) {
            (&stack0x00000d3e)[(ulonglong)uVar43 + lVar8] =
                 (&stack0x00000d3e)[(ulonglong)uVar43 + lVar8] | bVar15;
          }
        }
LAB_1800bb780:
        puVar31 = puVar31 + (uVar42 + 2);
        bVar14 = (bool)(bVar14 & bVar13);
LAB_1800bb838:
        if (bVar14 == false) goto LAB_1800bb83c;
        goto LAB_1800bb1c0;
      }
      goto LAB_1800bb84c;
    }
    if ((uVar3 & 0xff00) == 0x200) {
      bVar15 = FUN_1800cea48(puVar39,*(undefined4 *)(lVar17 + -0x59bc),&stack0x000008f8 + lVar8,
                             &stack0xffffffffffffffa0 + lVar8);
    }
    else {
      if ((uVar3 & 0xff00) != 0x300) goto LAB_1800bbc44;
      bVar15 = FUN_1800cfce0(puVar39,*(undefined4 *)(lVar17 + -0x59bc),uVar36,
                             &stack0x000008f8 + lVar8,&stack0xffffffffffffffa0 + lVar8);
    }
    goto LAB_1800bb8e4;
  }
LAB_1800bbc44:
  if (*(int *)(&stack0xffffffffffffffb4 + lVar8) == 0) {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  else {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
LAB_1800bbc68:
  return *(undefined4 *)(&stack0xffffffffffffffb8 + lVar8);
switchD_1800bb20c_caseD_9:
  bVar13 = false;
switchD_1800bb20c_caseD_2:
  uVar42 = 2;
  bVar12 = bVar13;
  goto LAB_1800bb3f0;
LAB_1800bb83c:
  puVar39 = *(uint **)(&stack0x00000040 + lVar8);
  uVar24 = *(uint *)(&stack0xffffffffffffffa8 + lVar8);
  uVar26 = *(uint *)(&stack0xffffffffffffffb0 + lVar8);
LAB_1800bb84c:
  if (uVar26 == 0) {
    lVar29 = 0;
    do {
      if ((&stack0x00000908)[lVar29 + lVar8] != '\0') {
        (&stack0x000008f8)[lVar29 + lVar8] = (&DAT_18022c628)[lVar29];
      }
      lVar29 = lVar29 + 1;
    } while (lVar29 != 0x10);
  }
  else {
    for (uVar42 = 0; (bVar14 != false && (uVar42 < 0x10)); uVar42 = uVar42 + 1) {
      if (((&stack0x00000908)[(ulonglong)uVar42 + lVar8] == '\0') ||
         (bVar15 = 0, (1 << (ulonglong)(uVar42 & 0x1f) & uVar26) != 0)) {
        bVar15 = 1;
      }
      bVar14 = (bool)(bVar15 & bVar14);
    }
  }
  bVar15 = ((&stack0x00000d39)[lVar8] & 3) == 3 & bVar14;
  if (bVar15 != 0) {
    *(int *)(&stack0xffffffffffffffa0 + lVar8) = (int)((longlong)puVar31 - (longlong)puVar39 >> 2);
  }
LAB_1800bb8e4:
  if ((bVar15 != 0 && uVar3 <= uVar24) &&
     (puVar18 = (undefined8 *)FUN_180102f80(0x30), puVar18 != (undefined8 *)0x0)) {
    *puVar18 = &PTR_FUN_180236c60;
    puVar18[1] = 0;
    puVar18[4] = 0;
    *(undefined4 *)(puVar18 + 5) = 0;
    lVar29 = 0;
    puVar18[2] = puVar18;
    puVar18[3] = lVar17 + -0x6838;
    uVar40 = 0;
    uVar3 = *(uint *)(&stack0xffffffffffffffa0 + lVar8);
    uVar37 = CONCAT44(0,uVar3);
    *(undefined8 **)(&stack0x00000020 + lVar8) = puVar18;
    uVar30 = 0;
    if (uVar3 != 0) {
      do {
        puVar31 = puVar39 + uVar30;
        uVar33 = uVar30 & 1;
        uVar24 = (int)uVar30 + 1;
        uVar30 = (ulonglong)uVar24;
        uVar40 = ((ulonglong)*puVar31 << (uVar33 << 5)) + uVar40;
      } while (uVar24 < uVar3);
    }
    uVar24 = *(uint *)(lVar17 + 0x90);
    if (uVar24 != 0) {
      uVar26 = 0;
      uVar42 = uVar24;
      do {
        uVar43 = uVar42 + uVar26 >> 1;
        uVar30 = (ulonglong)uVar43;
        uVar33 = *(ulonglong *)(*(longlong *)(lVar17 + 0x88) + uVar30 * 0x18);
        if (uVar33 <= uVar40) {
          if (uVar40 <= uVar33) break;
          uVar26 = uVar43 + 1;
          uVar30 = (ulonglong)(uVar43 + 1);
          uVar43 = uVar42;
        }
        uVar42 = uVar43;
      } while (uVar42 != uVar26);
      if ((((uint)uVar30 != uVar24) &&
          (puVar1 = (ulonglong *)(*(longlong *)(lVar17 + 0x88) + uVar30 * 0x18), *puVar1 == uVar40))
         && (puVar1 = puVar1 + 2, puVar1 != (ulonglong *)0x0)) {
        uVar24 = *(uint *)((longlong *)*puVar1 + 1);
        if (uVar24 != 0) {
          lVar29 = *(longlong *)*puVar1;
          *(ulonglong **)(&stack0x00000040 + lVar8) = puVar1;
          *(ulonglong *)(&stack0xffffffffffffffa8 + lVar8) = uVar40;
          uVar40 = 0;
          *(undefined8 *)(&stack0x00000030 + lVar8) = 0;
          *(longlong *)(&stack0x00000038 + lVar8) = lVar29;
LAB_1800bb9f4:
          lVar35 = uVar40 * 0x888;
          uVar26 = (uint)uVar40;
          if ((*(uint *)(lVar29 + 0x864 + lVar35) != uVar3) ||
             (iVar16 = func_0x000180222c00(puVar39,*(undefined8 *)(lVar29 + 0x868 + lVar35),
                                           uVar37 << 2), iVar16 != 0)) goto LAB_1800bba18;
          lVar29 = *(longlong *)(&stack0x00000038 + lVar8);
          puVar2 = *(undefined8 **)(&stack0x00000040 + lVar8);
          uVar40 = *(ulonglong *)(&stack0xffffffffffffffa8 + lVar8);
          *(undefined8 **)(lVar35 + lVar29) = puVar18;
          lVar29 = FUN_1800c0c00(lVar17 + 0xa0,&stack0x00000020 + lVar8,lVar35 + lVar29);
          plVar21 = (longlong *)*puVar2;
          lVar29 = lVar29 + 8;
          uVar24 = *(uint *)(plVar21 + 1);
          if (uVar26 < uVar24) {
            uVar26 = uVar26 + 1;
            if (uVar26 < uVar24) {
              do {
                thunk_FUN_180001218(*plVar21 + (ulonglong)(uVar26 - 1) * 0x888,
                                    *plVar21 + (ulonglong)uVar26 * 0x888,0x888);
                uVar24 = *(uint *)(plVar21 + 1);
                uVar26 = uVar26 + 1;
              } while (uVar26 < uVar24);
            }
            *(uint *)(plVar21 + 1) = uVar24 - 1;
          }
          if (lVar29 == 0) goto LAB_1800bba30;
          goto LAB_1800bbbf8;
        }
      }
    }
    goto LAB_1800bba30;
  }
  goto LAB_1800bbc44;
LAB_1800bba18:
  uVar40 = (ulonglong)(uVar26 + 1);
  if (uVar24 <= uVar26 + 1) goto code_r0x0001800bba24;
  goto LAB_1800bb9f4;
code_r0x0001800bba24:
  lVar29 = *(longlong *)(&stack0x00000030 + lVar8);
  uVar40 = *(ulonglong *)(&stack0xffffffffffffffa8 + lVar8);
LAB_1800bba30:
  auVar46._8_8_ = 0;
  auVar46._0_8_ = uVar37;
  lVar35 = uVar37 << 2;
  lVar41 = 0;
  if (SUB168(auVar46 * ZEXT816(4),8) != 0) {
    lVar35 = -1;
  }
  lVar19 = thunk_FUN_180102f80(lVar35);
  lVar35 = FUN_180102f80(0x4a70);
  *(longlong *)(&stack0xffffffffffffffa8 + lVar8) = lVar35;
  if ((lVar19 == 0) || (lVar35 == 0)) {
    lVar20 = 0;
    bVar14 = false;
  }
  else {
    lVar20 = FUN_1800091c8(*(undefined8 *)(lVar17 + 0x98),puVar39,&stack0x000008f8 + lVar8);
    bVar14 = lVar20 != 0;
    lVar35 = 0;
    if (lVar20 != 0) {
      thunk_FUN_180001218(lVar19,puVar39,uVar37 << 2);
      thunk_FUN_180001218(*(undefined8 *)(&stack0xffffffffffffffa8 + lVar8),&stack0x000008f8 + lVar8
                          ,0x4a70);
      plVar21 = *(longlong **)(*(longlong *)(lVar17 + 0x98) + 0x28);
      lVar35 = (**(code **)(*plVar21 + 0x108))
                         (plVar21,lVar19,*(undefined8 *)(&stack0xffffffffffffffa8 + lVar8),0);
      bVar14 = lVar35 != 0;
      lVar41 = lVar35;
    }
  }
  if (bVar14) {
    *(undefined8 **)(&stack0x00000070 + lVar8) = puVar18;
    *(longlong *)(&stack0x00000078 + lVar8) = lVar41;
    *(uint *)(&stack0x000008d4 + lVar8) = uVar3;
    *(longlong *)(&stack0x000008d8 + lVar8) = lVar19;
    *(longlong *)(&stack0x000008e0 + lVar8) = lVar20;
    *(undefined8 *)(&stack0x00000080 + lVar8) = *(undefined8 *)(&stack0xffffffffffffffa8 + lVar8);
    *(undefined2 *)(&stack0x00000088 + lVar8) = 0xffff;
    *(undefined8 *)(&stack0x000008e8 + lVar8) = 0;
    *(ulonglong *)(&stack0x000008f0 + lVar8) = uVar40;
    uVar22 = func_0x00018010a4a8(lVar35,&stack0x00000d47 + lVar8,&stack0x00000088 + lVar8,0x400);
    uVar22 = func_0x00018010a4a8(uVar22,&stack0x000051bd + lVar8,&stack0x0000088c + lVar8,0x10);
    func_0x00018010a4a8(uVar22,&stack0x000052d0 + lVar8,&stack0x000008b0 + lVar8);
    lVar29 = FUN_1800c0c00(lVar17 + 0xa0,&stack0x00000020 + lVar8,&stack0x00000070 + lVar8);
    lVar29 = lVar29 + 8;
  }
  if (lVar29 == 0) {
    FUN_180102fc0(lVar20,0);
    thunk_FUN_180102fc0(lVar19);
    FUN_180102fc0(*(undefined8 *)(&stack0xffffffffffffffa8 + lVar8),0x4a70);
  }
  else {
LAB_1800bbbf8:
    uVar36 = *(undefined4 *)(&stack0xffffffffffffffa0 + lVar8);
    uVar22 = *(undefined8 *)(&stack0x00000048 + lVar8);
    puVar18[4] = *(undefined8 *)(lVar29 + 0x868);
    *(undefined4 *)(puVar18 + 5) = uVar36;
    iVar16 = FUN_1800c8fd0(puVar18,&DAT_180229538,uVar22);
    *(int *)(&stack0xffffffffffffffb8 + lVar8) = iVar16;
    if (-1 < iVar16) goto LAB_1800bbc44;
    puVar18[4] = 0;
    *(undefined4 *)(puVar18 + 5) = 0;
  }
  *puVar18 = &PTR_FUN_180236c60;
  FUN_180102fc0(puVar18,0x30);
  goto LAB_1800bbc44;
}


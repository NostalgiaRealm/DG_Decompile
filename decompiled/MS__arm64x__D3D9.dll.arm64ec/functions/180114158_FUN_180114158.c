/*
 * FUN_180114158 at 180114158
 * undefined FUN_180114158(void)
 * Address ranges: 180114158-180114a93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180114158(undefined8 param_1,uint *param_2,longlong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  char cVar9;
  undefined2 uVar10;
  uint extraout_w1;
  uint uVar11;
  ulonglong extraout_x1;
  byte *pbVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 uVar18;
  byte bVar19;
  longlong lVar20;
  uint extraout_w10;
  ulonglong uVar21;
  longlong extraout_x10;
  longlong extraout_x10_00;
  longlong extraout_x10_01;
  int extraout_w11;
  uint extraout_w11_00;
  uint extraout_w12;
  byte extraout_w15;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint local_c0 [32];
  
  uVar21 = CONCAT44(0,*(uint *)(param_3 + 0x4a68));
  lVar20 = uVar21 * 0x14;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar21;
  if (SUB168(auVar7 * ZEXT816(0x14),8) != 0) {
    lVar20 = -1;
  }
  lVar20 = FUN_1802229a8(lVar20);
  if (lVar20 == 0) {
    return 0;
  }
  FUN_180222c50(lVar20,0,(ulonglong)*(uint *)(param_3 + 0x4a68) * 0x14);
  bVar5 = *(byte *)(param_3 + 0x4a6c);
  local_c0[0] = 0;
  uVar21 = 0;
  uVar23 = 0;
  uVar25 = 1;
  if (bVar5 < 3) {
    uVar25 = 3;
  }
LAB_1801141d8:
  param_2 = param_2 + 1;
LAB_1801141dc:
  uVar14 = *param_2;
  uVar13 = 0;
  bVar8 = true;
  uVar11 = uVar14 & 0xffff;
  uVar26 = 1;
  uVar22 = (uint)uVar23;
  if ((uVar11 < 0x12) && ((0x23f24U >> (ulonglong)(uVar14 & 0x1f) & 1) != 0)) {
LAB_1801147cc:
    uVar13 = 2;
    goto LAB_1801147d0;
  }
  if ((uVar11 < 0x14) && ((0x9c0c2U >> (ulonglong)(uVar14 & 0x1f) & 1) != 0)) {
LAB_1801147c4:
    uVar13 = 1;
    goto LAB_1801147d0;
  }
  if ((uVar11 - 0x14 < 5) ||
     ((uVar11 - 0x20 < 0x3f &&
      ((0x4000000000000003U >> ((ulonglong)(uVar11 - 0x20) & 0x3f) & 1) != 0)))) goto LAB_1801147cc;
  if ((uVar11 < 0x2f) && ((0x401800000000U >> ((ulonglong)uVar11 & 0x3f) & 1) != 0))
  goto LAB_1801147c4;
  if ((uVar11 - 0x12 & 0xffffffef) == 0) {
LAB_180114334:
    uVar13 = 3;
    goto LAB_1801147d0;
  }
  if (uVar11 - 0x4e < 2) goto LAB_1801147c4;
  if (uVar11 == 0x25) {
    uVar13 = (ulonglong)uVar25;
LAB_1801147d0:
    bVar19 = (byte)uVar14;
    uVar23 = uVar23 * 0x14;
    pbVar12 = (byte *)(uVar23 + lVar20);
    *(byte *)(uVar23 + lVar20) = bVar19;
    if ((uVar14 & 0xff) == 0x4e) {
      if (*(byte *)(param_3 + 0x4a6c) < 2) {
        bVar19 = 0x4e;
      }
      else {
        bVar19 = 0xe;
        *pbVar12 = 0xe;
      }
    }
    if (bVar8) {
      uVar4 = param_2[1];
      uVar2 = uVar4 & 0x2000;
      uVar16 = (ulonglong)(uVar2 != 0);
      lVar17 = lVar20 + 0x13;
      if ((uVar14 >> 0x1c & 1) == 0) {
        *(undefined1 *)(lVar17 + uVar23) = 0xc3;
      }
      else {
        cVar9 = (char)(param_2[2] >> 0x10);
        *(char *)(lVar17 + uVar23) = cVar9;
        lVar3 = 2;
        if (uVar2 != 0) {
          lVar3 = 3;
        }
        if ((param_2[lVar3] & 0xf000000) == 0xd000000) {
          *(char *)(lVar17 + uVar23) = cVar9 + '\x01';
        }
        if (uVar2 != 0) {
          uVar26 = 2;
        }
        uVar16 = (ulonglong)uVar26;
      }
      iVar24 = (int)uVar16;
      if (uVar11 == 0x5e) {
        pbVar12[9] = (byte)(uVar14 >> 0x10) & 7;
      }
      uVar11 = 0;
      uVar26 = 0;
      if ((int)uVar13 != 0) {
        lVar17 = (uVar23 | 1) + lVar20;
        uVar15 = 0x1000000;
        uVar18 = 0xb000000;
        do {
          uVar10 = FUN_180113fa0(param_2[uVar11 + (int)uVar16 + 2]);
          uVar26 = (uint)uVar13;
          uVar11 = extraout_w12 & 0xf000000;
          *(undefined2 *)(lVar17 + (extraout_x1 & 0xffffffff) * 2) = uVar10;
          if (uVar11 == (uint)uVar15) {
            pbVar12[(extraout_x1 & 0xffffffff) + 10] = 1;
          }
          else if (uVar11 == (uint)uVar18) {
            pbVar12[(extraout_x1 & 0xffffffff) + 10] = extraout_w15;
          }
          else if (uVar11 == extraout_w10) {
            pbVar12[(extraout_x1 & 0xffffffff) + 10] = 3;
          }
          else {
            pbVar12[(extraout_x1 & 0xffffffff) + 10] = 0;
          }
          uVar1 = extraout_x1 & 0xffffffff;
          if (bVar5 < 2) {
            pbVar12[uVar1 + 0xd] = (byte)(extraout_w12 >> 0xd) & 1;
          }
          else {
            pbVar12[uVar1 + 0xd] = 0;
            if ((extraout_w12 >> 0xd & 1) != 0) {
              uVar11 = param_2[extraout_w11 + 3];
              uVar14 = (uVar11 & 0x1800 | uVar11 >> 0x14 & 0x7ff) >> 8;
              if (uVar14 == 3) {
                uVar11 = uVar11 & 0xff0000;
                if (uVar11 == 0) {
                  pbVar12[uVar1 + 0xd] = 1;
                }
                else if (uVar11 == 0x550000) {
                  pbVar12[uVar1 + 0xd] = extraout_w15;
                }
                else if (uVar11 == 0xaa0000) {
                  pbVar12[uVar1 + 0xd] = 3;
                }
                else if (uVar11 == 0xff0000) {
                  bVar19 = 4;
                  goto LAB_180114974;
                }
              }
              else if (uVar14 == 0xf) {
                bVar19 = 5;
LAB_180114974:
                pbVar12[uVar1 + 0xd] = bVar19;
              }
              uVar16 = (ulonglong)((int)uVar16 + 1);
            }
          }
          iVar24 = (int)uVar16;
          uVar11 = (int)extraout_x1 + 1;
          pbVar12[uVar1 + 7] = (byte)(extraout_w12 >> 0x10);
        } while (uVar11 < uVar26);
      }
      param_2 = param_2 + (iVar24 + uVar26 + 2);
      if (uVar26 < 3) {
        FUN_180222c50((uVar23 | 1) + lVar20 + (ulonglong)uVar26 * 2,0xffff,
                      (ulonglong)(3 - uVar26) << 1);
      }
      uVar10 = FUN_180113fa0(uVar4);
      *(undefined2 *)(extraout_x10_01 + uVar23) = uVar10;
      *(byte *)(lVar20 + 0x10 + uVar23) = (byte)(extraout_w11_00 >> 0x10) & 0xf;
      if ((2 < *(byte *)(param_3 + 0x4a6c)) &&
         ((extraout_w11_00 & 0x1800 | extraout_w11_00 >> 0x14 & 0x7ff) >> 8 == 6)) {
        uVar6 = ((ushort)extraout_w11_00 & 0x7ff) + 0x44d;
        *(ushort *)(extraout_x10_01 + uVar23) = uVar6;
        if (uVar2 != 0) {
          *(ushort *)(extraout_x10_01 + uVar23) = uVar6 | 0x8000;
        }
      }
    }
    else {
      *pbVar12 = bVar19 | 0x80;
    }
    uVar23 = (ulonglong)(uVar22 + 1);
    goto LAB_1801141dc;
  }
  iVar24 = (int)uVar21;
  if (uVar11 == 0x26) {
    uVar16 = uVar21 & 0xff;
    uVar21 = (ulonglong)(iVar24 + 1);
    lVar17 = lVar20 + uVar23 * 0x14;
    local_c0[uVar16] = uVar22;
    *(undefined4 *)(lVar17 + 4) = 0;
    uVar2 = param_2[1];
    *(undefined2 *)(lVar17 + 0x12) = 0;
    *(undefined8 *)(lVar17 + 8) = 0;
    *(undefined1 *)(lVar17 + 1) = 0;
    *(ushort *)(lVar17 + 0x10) = ((ushort)uVar2 & 0x7ff) + 0x42b;
  }
  else {
    if (uVar11 == 0x27) {
      uVar4 = uVar22 - 1;
      uVar2 = local_c0[(uVar21 & 0xff) - 1];
      if (uVar2 < uVar4) {
        do {
          bVar19 = *(byte *)(lVar20 + (ulonglong)uVar4 * 0x14) & 0x7f;
          if (bVar19 == 0x27 || bVar19 == 0x1d) break;
          if ((byte)(bVar19 - 0x2c) < 2 || bVar19 == 0x60) {
            *(uint *)(lVar20 + 4 + (ulonglong)uVar4 * 0x14) = uVar22;
          }
          uVar4 = uVar4 - 1;
        } while (uVar2 < uVar4);
      }
LAB_180114464:
      uVar21 = (ulonglong)(byte)((char)uVar21 - 1);
      uVar2 = local_c0[uVar21];
      *(uint *)(lVar20 + 4 + (ulonglong)uVar2 * 0x14) = uVar22;
      *(uint *)(lVar20 + 4 + uVar23 * 0x14) = uVar2;
      goto LAB_180114494;
    }
    if (uVar11 == 0x28) {
      local_c0[uVar21 & 0xff] = uVar22;
      lVar17 = lVar20 + uVar23 * 0x14;
      uVar21 = (ulonglong)(iVar24 + 1);
      *(undefined4 *)(lVar17 + 0x10) = 0xffffffff;
      *(undefined4 *)(lVar17 + 4) = 0;
      uVar2 = param_2[1];
      uVar4 = (uVar2 & 0x1800 | uVar2 >> 0x14 & 0x7ff) >> 8;
      if (uVar4 == 0xe) {
        *(ushort *)(lVar17 + 0x10) = ((ushort)uVar2 & 0x7ff) + 0x43b;
      }
      else if (uVar4 == 0x13) {
        *(undefined2 *)(lVar17 + 0x10) = 0x42a;
        *(undefined1 *)(lVar17 + 3) = 1;
      }
      *(uint *)(lVar17 + 8) = (uint)*(byte *)((longlong)param_2 + 6);
      *(undefined4 *)(lVar17 + 0xc) = 0;
      *(bool *)(lVar17 + 1) = (param_2[1] & 0xf000000) == 0xd000000;
      goto LAB_18011459c;
    }
    if (uVar11 == 0x29) {
      uVar16 = uVar21 & 0xff;
      uVar21 = (ulonglong)(iVar24 + 1);
      local_c0[uVar16] = uVar22;
LAB_180114648:
      *(undefined4 *)(lVar20 + uVar23 * 0x14 + 4) = 0;
      uVar10 = FUN_180113fa0(param_2[1]);
      *(undefined2 *)(extraout_x10 + 0x10) = uVar10;
      uVar10 = FUN_180113fa0(param_2[2]);
      *(undefined2 *)(extraout_x10_00 + 0x12) = uVar10;
      *(uint *)(extraout_x10_00 + 8) = (uint)*(byte *)((longlong)param_2 + 6);
      *(uint *)(extraout_x10_00 + 0xc) = (uint)*(byte *)((longlong)param_2 + 10);
      *(byte *)(extraout_x10_00 + 2) = (byte)(*param_2 >> 0x10) & 7;
      lVar17 = extraout_x10_00;
      uVar11 = extraout_w1;
LAB_180114680:
      *(undefined1 *)(lVar17 + 1) = 0;
LAB_180114564:
      bVar8 = false;
      param_2 = param_2 + 3;
      goto LAB_1801147d0;
    }
    if (uVar11 == 0x2a) {
      uVar16 = uVar21 & 0xff;
      uVar2 = local_c0[uVar16 - 1];
      local_c0[uVar16 - 1] = uVar22;
      *(uint *)(lVar20 + 4 + (ulonglong)uVar2 * 0x14) = uVar22;
      local_c0[uVar16] = uVar22;
LAB_180114494:
      bVar8 = false;
      param_2 = param_2 + 1;
      goto LAB_1801147d0;
    }
    if (uVar11 == 0x2b) {
      uVar21 = (ulonglong)(byte)((char)uVar21 - 1);
      *(uint *)(lVar20 + 4 + (ulonglong)local_c0[uVar21] * 0x14) = uVar22;
      goto LAB_180114494;
    }
    if (uVar11 == 0x2c) {
      lVar17 = lVar20 + uVar23 * 0x14;
      *(undefined1 *)(lVar17 + 1) = 0;
      *(undefined8 *)(lVar17 + 4) = 0;
      *(undefined8 *)(lVar17 + 0xc) = 0xffffffff00000000;
      goto LAB_180114494;
    }
    if (uVar11 == 0x2d) goto LAB_180114648;
    if (uVar11 == 0x2f) {
LAB_180114394:
      param_2 = param_2 + 3;
      goto LAB_1801141dc;
    }
    if (uVar11 == 0x30) {
LAB_18011438c:
      param_2 = param_2 + 6;
      goto LAB_1801141dc;
    }
    if (uVar11 == 0x19) {
      lVar17 = lVar20 + uVar23 * 0x14;
      *(undefined8 *)(lVar17 + 4) = 0;
      *(undefined4 *)(lVar17 + 0xc) = 0;
      uVar2 = param_2[1];
      *(undefined1 *)(lVar17 + 1) = 0;
      *(ushort *)(lVar17 + 0x10) = (ushort)uVar2 & 0x7ff;
      *(undefined2 *)(lVar17 + 0x12) = 0xffff;
    }
    else {
      if (uVar11 == 0x1a) {
        lVar17 = lVar20 + uVar23 * 0x14;
        *(undefined8 *)(lVar17 + 4) = 0;
        *(undefined4 *)(lVar17 + 0xc) = 0;
        *(ushort *)(lVar17 + 0x10) = (ushort)param_2[1] & 0x7ff;
        *(undefined2 *)(lVar17 + 0x12) = 0xffff;
        uVar2 = param_2[2];
        uVar4 = (uVar2 & 0x1800 | uVar2 >> 0x14 & 0x7ff) >> 8;
        if (uVar4 == 0xe) {
          *(ushort *)(lVar17 + 0x12) = ((ushort)uVar2 & 0x7ff) + 0x43b;
        }
        else if (uVar4 == 0x13) {
          *(undefined2 *)(lVar17 + 0x12) = 0x42a;
          *(undefined1 *)(lVar17 + 3) = 1;
        }
        *(uint *)(lVar17 + 0xc) = (uint)*(byte *)((longlong)param_2 + 10);
        *(bool *)(lVar17 + 1) = (param_2[2] & 0xf000000) == 0xd000000;
        goto LAB_180114564;
      }
      if (uVar11 == 0x1b) {
        uVar16 = uVar21 & 0xff;
        uVar21 = (ulonglong)(iVar24 + 1);
        lVar17 = lVar20 + uVar23 * 0x14;
        local_c0[uVar16] = uVar22;
        *(undefined4 *)(lVar17 + 4) = 0;
        uVar2 = param_2[2];
        *(undefined2 *)(lVar17 + 0x12) = 0;
        *(undefined8 *)(lVar17 + 8) = 0;
        *(ushort *)(lVar17 + 0x10) = ((ushort)uVar2 & 0x7ff) + 0x42b;
        goto LAB_180114680;
      }
      if (uVar11 == 0x1c) goto LAB_180114494;
      if (uVar11 == 0x1d) {
        uVar4 = uVar22 - 1;
        uVar2 = local_c0[(uVar21 & 0xff) - 1];
        if (uVar2 < uVar4) {
          do {
            bVar19 = *(byte *)(lVar20 + (ulonglong)uVar4 * 0x14) & 0x7f;
            if (bVar19 == 0x27 || bVar19 == 0x1d) break;
            if ((byte)(bVar19 - 0x2c) < 2 || bVar19 == 0x60) {
              *(uint *)(lVar20 + 4 + (ulonglong)uVar4 * 0x14) = uVar22;
            }
            uVar4 = uVar4 - 1;
          } while (uVar2 < uVar4);
        }
        goto LAB_180114464;
      }
      if (uVar11 != 0x1e) {
        if (uVar11 == 0x1f) goto LAB_180114394;
        if (uVar11 == 0x51) goto LAB_18011438c;
        if (uVar11 == 0x5f) goto LAB_1801147cc;
        if (uVar11 == 0x60) {
          lVar17 = lVar20 + uVar23 * 0x14;
          *(undefined4 *)(lVar17 + 0x10) = 0xffff042a;
          *(undefined4 *)(lVar17 + 4) = 0;
          bVar19 = *(byte *)((longlong)param_2 + 6);
          *(undefined1 *)(lVar17 + 2) = 0;
          *(uint *)(lVar17 + 8) = (uint)bVar19;
          *(undefined4 *)(lVar17 + 0xc) = 0;
          *(bool *)(lVar17 + 1) = (param_2[1] & 0xf000000) == 0xd000000;
          goto LAB_18011459c;
        }
        if (uVar11 == 0xfffe) {
          param_2 = param_2 + ((uVar14 >> 0x10) + 1);
          goto LAB_1801141dc;
        }
        if (uVar11 == 0xffff) {
          *(undefined1 *)(lVar20 + uVar23 * 0x14) = 0xff;
          return lVar20;
        }
        if (uVar11 != 0) {
          if (uVar11 == 4) goto LAB_180114334;
          goto LAB_1801147d0;
        }
        goto LAB_1801141d8;
      }
      uVar2 = param_2[1];
      uVar16 = uVar23;
      uVar4 = uVar22;
      while (uVar4 != 0) {
        pbVar12 = (byte *)(lVar20 + uVar16 * 0x14);
        if (((byte)((*pbVar12 & 0x7f) - 0x19) < 2) &&
           ((uint)*(ushort *)(pbVar12 + 0x10) == (uVar2 & 0x7ff))) {
          *(uint *)(pbVar12 + 4) = uVar22;
        }
        uVar4 = (int)uVar16 - 1;
        uVar16 = (ulonglong)uVar4;
      }
      *(short *)(lVar20 + 0x10 + uVar23 * 0x14) = (short)(uVar2 & 0x7ff);
    }
  }
LAB_18011459c:
  bVar8 = false;
  param_2 = param_2 + 2;
  goto LAB_1801147d0;
}


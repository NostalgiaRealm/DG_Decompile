/*
 * FUN_1801e7400 at 1801e7400
 * undefined FUN_1801e7400(void)
 * Address ranges: 1801e7400-1801e87b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1801e7400(uint *param_1,uint *param_2,longlong param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint *puVar12;
  uint *extraout_x1;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  int extraout_w9;
  uint uVar21;
  uint uVar22;
  int iVar23;
  ulonglong extraout_x10;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong extraout_x11;
  uint extraout_w12;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ulonglong extraout_x15;
  ulonglong uVar30;
  longlong lVar31;
  uint uVar32;
  longlong lVar33;
  uint *puVar34;
  uint local_1f0;
  int local_1ec;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  byte local_1dc [4];
  undefined *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  byte local_1c0;
  longlong local_1b8;
  uint local_1b0;
  uint local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  uint *local_198;
  undefined8 local_190;
  int local_188 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  uint *local_f0;
  uint local_e8 [5];
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  undefined4 local_c4;
  int iStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  uint local_b4;
  uint uStack_b0;
  undefined4 local_ac;
  longlong local_a8;
  longlong local_a0;
  uint local_98 [4];
  uint *local_88;
  uint *local_80;
  uint *local_78;
  uint *local_70;
  longlong local_68;
  undefined4 *local_60;
  uint local_58 [6];
  
  local_68 = param_3 + 0x1000;
  local_80 = param_1;
  local_60 = param_4;
  FUN_180222c50(param_3,0,0x1270);
  uVar20 = *param_1;
  local_1b0 = 0;
  local_1ac = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  bVar10 = uVar20 + 0xfe00 < 2;
  uVar14 = (ulonglong)bVar10;
  local_1c0 = 0xffff0200 < uVar20;
  param_1 = param_1 + 1;
  local_190 = 0;
  local_188[2] = 0;
  local_188[3] = 0;
  local_188[6] = 0;
  local_188[7] = 0;
  local_188[4] = 0;
  local_188[5] = 0;
  local_188[10] = 0;
  local_188[0xb] = 0;
  local_188[8] = 0;
  local_188[9] = 0;
  local_188[0xe] = 0;
  local_188[0xf] = 0;
  local_188[0xc] = 0;
  local_188[0xd] = 0;
  local_188[0x12] = 0;
  local_188[0x13] = 0;
  local_188[0x10] = 0;
  local_188[0x11] = 0;
  local_188[0x16] = 0;
  local_188[0x17] = 0;
  local_188[0x14] = 0;
  local_188[0x15] = 0;
  local_188[0x1a] = 0;
  local_188[0x1b] = 0;
  local_188[0x18] = 0;
  local_188[0x19] = 0;
  local_188[0x1e] = 0;
  local_188[0x1f] = 0;
  local_188[0x1c] = 0;
  local_188[0x1d] = 0;
  local_188[0] = 0;
  local_188[1] = 0;
  uStack_100 = 0;
  local_108 = 0;
  local_f0 = (uint *)0x0;
  local_f8 = 0;
  *(char *)(param_3 + 0x126e) = (char)uVar20;
  *(undefined1 *)(param_3 + 0x126d) = 2;
  *(undefined1 *)(param_3 + 0x14a) = 1;
  *(undefined8 *)(param_3 + 0x1224) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x121c) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x1234) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x122c) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x1244) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x123c) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x1254) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x124c) = 0xffffffffffffffff;
  if (param_2 == (uint *)0x0) {
    uVar20 = 0x200;
    uVar25 = 0x200;
    uVar17 = 0x200;
  }
  else {
    uVar20 = param_2[4];
    uVar25 = uVar20;
    uVar17 = uVar20;
    if ((*param_2 >> 4 & 1) == 0) {
      uVar25 = 0x200;
      uVar17 = 0x20;
    }
  }
  puVar12 = (uint *)0x0;
  uVar15 = (ulonglong)local_1c0;
  bVar9 = *(char *)(param_3 + 0x126e) == '\0';
  uVar18 = 0x200;
  uVar28 = 0x200;
  if (bVar9) {
    uVar18 = uVar17;
    uVar28 = uVar25;
  }
  uVar25 = 0x200;
  if (bVar9) {
    uVar25 = uVar20;
  }
  lVar31 = param_3;
  local_1b8 = param_3;
  local_198 = param_1;
  if (!bVar10) {
LAB_1801e86e8:
    puVar34 = local_80;
    lVar33 = 0;
    do {
      if ((*(int *)(lVar31 + 0x2f0 + lVar33 * 4) == 0) ||
         (*(char *)(lVar31 + 0x180 + lVar33) != '\0')) {
        uVar20 = 1;
      }
      else {
        uVar20 = 0;
      }
      lVar33 = lVar33 + 1;
      uVar20 = uVar20 & (uint)uVar14;
      uVar14 = (ulonglong)uVar20;
    } while (lVar33 != 0x10);
    uVar19 = 0;
    do {
      if (*(char *)(lVar31 + 0x2a + uVar19) != '\0') {
        *(byte *)(local_68 + 0x26c) =
             *(byte *)(local_68 + 0x26c) | (byte)(1 << (ulonglong)((uint)uVar19 & 0x1f));
      }
      uVar25 = (uint)uVar19 + 1;
      uVar19 = (ulonglong)uVar25;
    } while (uVar25 < 8);
    if (uVar20 != 0) {
      local_1ec = 0;
      puVar2 = &DAT_18022fba8;
      if ((uVar15 & 0xff) == 0) {
        puVar2 = &DAT_18022fb90;
      }
      uVar14 = FUN_1801e9e98(local_80,puVar12,lVar31 + 0x2f0,puVar2,&local_1ec);
      uVar14 = uVar14 & 0xffffffff;
      *(undefined1 *)(lVar31 + 0x149) = (undefined1)local_1ec;
      *local_60 = (int)((longlong)param_1 - (longlong)puVar34 >> 2);
    }
    return uVar14;
  }
  uVar19 = 0;
  uVar26 = 0;
  uVar20 = 0;
  uVar24 = 0;
  local_1f0 = 0;
  local_1ec = 0;
  local_e8[4] = uVar28;
  local_d4 = uVar18;
  local_d0 = uVar25;
  local_a0 = param_3;
LAB_1801e754c:
  lVar31 = local_a0;
  if (local_1ec != 0) goto LAB_1801e86e8;
  uVar21 = *param_1;
  local_1e8 = uVar21 & 0xe0ff0000;
  uStack_100 = CONCAT44(1,local_1e8);
  uVar18 = uVar21 & 0x10000000;
  bVar10 = uVar18 != 0;
  uVar28 = uVar21 & 0xc0000000;
  local_f8._0_4_ = CONCAT13(bVar10,0x10f0f);
  uVar25 = uVar21 & 0xffff;
  local_108 = CONCAT44(uVar21,uVar21) & 0xffffffffffff;
  uVar17 = (uint)uVar14;
  if (uVar25 == 0x1f) {
    uVar25 = param_1[1];
    uVar21 = param_1[2];
    uVar11 = (uVar21 & 0x1800 | uVar21 >> 0x14 & 0x7ff) >> 8;
    uVar18 = uVar21 >> 0x1f;
    if ((uVar25 & 0x87ffffff) != 0x80000000) {
      uVar18 = 0;
    }
    if ((uVar20 == 0) && (local_1e8 == 0)) {
      uVar32 = 1;
    }
    else {
      uVar32 = 0;
    }
    if (uVar28 != 0) {
      uVar32 = 0;
    }
    if ((uVar11 < 0xb) && ((0x40aU >> (ulonglong)uVar11 & 1) != 0)) {
      uVar18 = uVar18 & uVar32 & uVar17;
      uVar14 = (ulonglong)uVar18;
      if (uVar18 != 0) {
        uVar17 = uVar21 & 0x7ff;
        if ((byte)(&DAT_18022f7a0)[(uint)((uVar15 & 0xff) != 0) | uVar11 << 1] <= uVar17) {
          uVar18 = 0;
        }
        uVar14 = (ulonglong)uVar18;
        uVar1 = (undefined1)((uVar21 & 0xf0000) >> 0x10);
        if ((uVar21 & 0xf0000) == 0) {
          uVar1 = 0xf;
        }
        if (uVar11 == 1) {
          *(undefined1 *)((longlong)&local_1a8 + (ulonglong)uVar17 + 4) = uVar1;
          uVar19 = local_190 >> 0x20;
          uVar14 = (ulonglong)(((uVar21 & 0xf00000) == 0 && (uVar25 & 0x78000000) == 0) & uVar18);
        }
        else {
          if (uVar11 != 3) {
            local_198 = param_1;
            if (uVar11 == 10) {
              uVar25 = uVar25 & 0x78000000;
              *(byte *)(param_3 + (ulonglong)uVar17 + 0x14f) = (byte)(uVar25 >> 0x1b);
              uVar14 = (ulonglong)
                       (((uVar21 & 0xf00000) == 0 &&
                        ((uVar25 + 0xf0000000 & 0xe7ffffff) == 0 && uVar25 != 0x28000000)) &
                       (byte)uVar18);
            }
            goto LAB_1801e8520;
          }
          *(undefined1 *)((longlong)&local_1a8 + (ulonglong)uVar17 + 6) = uVar1;
          uVar19 = local_190 >> 0x20;
          uVar14 = (ulonglong)
                   (((uVar25 & 0x78000000) == 0 && (uVar21 & 0x900000) == 0) & (byte)uVar18);
          if ((uVar21 >> 0x16 & 1) != 0) {
            *(byte *)(local_1b8 + 0x140 + (longlong)((int)uVar17 >> 3)) =
                 *(byte *)(local_1b8 + 0x140 + (longlong)((int)uVar17 >> 3)) |
                 (byte)(1 << (ulonglong)(uVar21 & 7));
          }
        }
        uVar15 = (ulonglong)local_1c0;
        local_1f0 = local_f8._4_4_;
        uVar24 = (ulonglong)local_1ac;
        uVar26 = local_1a8 & 0xffffffff;
        puVar12 = local_f0;
        param_3 = local_1b8;
        uVar20 = local_1b0;
        goto LAB_1801e8520;
      }
    }
    else {
      uVar14 = 0;
    }
  }
  else if (uVar25 == 0x2f) {
    if ((uVar20 != 0) || (bVar10)) {
      uVar25 = 0;
    }
    else {
      uVar25 = 1;
    }
    if (uVar28 != 0) {
      uVar25 = 0;
    }
    if (((((local_1e8 == 0) && (uVar18 = param_1[1], (int)uVar18 < 0)) &&
         ((uVar18 & 0x1800 | uVar18 >> 0x14 & 0x7ff) >> 8 == 0xe)) &&
        (((uVar18 & 0xf000000) == 0 && ((uVar18 & 0xf0000) == 0xf0000)))) &&
       ((uVar18 & 0xf007f0) == 0)) {
      uVar14 = (ulonglong)(byte)(uVar25 & uVar17);
      local_198 = param_1;
      if ((uVar25 & uVar17) != 0) {
        *(undefined1 *)(param_3 + (ulonglong)(uVar18 & 0x7ff) + 0x2a0) = 1;
        *(uint *)(param_3 + (ulonglong)(uVar18 & 0x7ff) * 4 + 0x2b0) = param_1[2];
      }
    }
    else {
      uVar14 = 0;
      local_198 = param_1;
    }
LAB_1801e8520:
    param_1 = local_198 + 3;
    local_198 = param_1;
  }
  else {
    if (uVar25 == 0x30) {
      if ((uVar20 != 0) || (bVar10)) {
        uVar25 = 0;
      }
      else {
        uVar25 = 1;
      }
      if (uVar28 != 0) {
        uVar25 = 0;
      }
      if (((((local_1e8 != 0) || (uVar18 = param_1[1], -1 < (int)uVar18)) ||
           ((uVar18 & 0x1800 | uVar18 >> 0x14 & 0x7ff) >> 8 != 7)) ||
          ((((uVar18 & 0xf000000) != 0 || ((uVar18 & 0xf0000) != 0xf0000)) ||
           (((uVar18 & 0xf00000) != 0 || ((param_1[3] != 0 || (param_1[4] != 0)))))))) ||
         (param_1[5] != 0 || (uVar18 & 0x7f0) != 0)) goto LAB_1801e83a0;
      uVar14 = (ulonglong)(byte)(uVar25 & uVar17);
      if ((uVar25 & uVar17) != 0) {
        uVar25 = (uVar18 & 0x7ff) * 4;
        *(undefined1 *)(param_3 + (ulonglong)(uVar18 & 0x7ff) + 400) = 1;
        *(uint *)(param_3 + (ulonglong)uVar25 * 4 + 0x1a0) = param_1[2];
        *(uint *)(param_3 + (ulonglong)(uVar25 + 1) * 4 + 0x1a0) = param_1[3];
        *(uint *)(param_3 + (ulonglong)(uVar25 + 2) * 4 + 0x1a0) = param_1[4];
        *(uint *)(param_3 + (ulonglong)(uVar25 + 3) * 4 + 0x1a0) = param_1[5];
      }
    }
    else {
      if (uVar25 != 0x51) {
        uVar17 = uVar28 == 0 & uVar17;
        if (uVar25 == 0xfffe) {
          if (uVar18 != 0) {
            uVar17 = 0;
          }
          uVar14 = (ulonglong)uVar17;
          param_1 = param_1 + ((uVar21 >> 0x10) + 1);
          local_198 = param_1;
        }
        else {
          if (uVar25 == 0xffff) {
            uVar25 = (uint)(uVar18 == 0 && local_1e8 == 0);
            if ((int)uVar19 != 0) {
              uVar25 = 0;
            }
            uVar14 = 0;
            do {
              if (*(int *)(param_3 + uVar14 * 4 + 0x2f0) != 0) {
                uVar14 = (ulonglong)(local_1f0 == 0x1c);
                goto LAB_1801e8298;
              }
              uVar18 = (int)uVar14 + 1;
              uVar14 = (ulonglong)uVar18;
            } while (uVar18 < 0x10);
            uVar14 = (ulonglong)(uVar25 & uVar17);
LAB_1801e8298:
            param_1 = param_1 + 1;
            local_1ec = 1;
            local_1e4 = uVar17;
            local_198 = param_1;
            goto LAB_1801e86d0;
          }
          if (0x60 < uVar25) {
            uVar17 = 0;
          }
          uVar18 = uVar21 & 0xff0000;
          if (((uVar18 == 0) ||
              ((uVar25 - 0x29 < 0x36 &&
               ((0x20000000000011U >> ((ulonglong)(uVar25 - 0x29) & 0x3f) & 1) != 0 &&
                uVar18 < 0x60001)))) || ((uVar25 == 0x42 && ((uVar18 - 0x10000 & 0xfffeffff) == 0)))
             ) {
            uVar18 = 1;
          }
          else {
            uVar18 = 0;
          }
          if ((uVar21 & 0xe0000000) != 0) {
            uVar18 = 0;
          }
          cVar8 = (&DAT_18022f490)[uVar25];
          uVar14 = (ulonglong)cVar8;
          if (cVar8 == -1) {
LAB_1801e7698:
            uVar18 = 0;
          }
          else {
            lVar33 = ((-(uVar14 >> 0x1f & 1) & 0xfffffff800000000 | (uVar14 & 0xffffffff) << 3) -
                     (longlong)(int)cVar8) * 2;
            if (((((byte)(&DAT_18022f500)[lVar33] >> 3 & 1) != 0) && ((uVar15 & 0xff) == 0)) ||
               ((bVar10 &&
                ((((byte)(&DAT_18022f500)[lVar33] >> 2 & 1) != 0 ||
                 ((*(short *)(&DAT_18022f506 + lVar33) == 0 &&
                  (*(short *)(&DAT_18022f504 + lVar33) == 0)))))))) goto LAB_1801e7698;
            uVar18 = uVar18 & uVar17;
          }
          uVar17 = param_1[1];
          local_a8 = ((-(uVar14 >> 0x1f & 1) & 0xfffffff800000000 | (uVar14 & 0xffffffff) << 3) -
                     (longlong)(int)cVar8) * 2;
          local_1d8 = &DAT_18022f500 + local_a8;
          if ((bVar10) && ((uVar15 & 0xff) == 0)) {
            uVar14 = 0;
            goto LAB_1801e86e8;
          }
          uVar18 = uVar18 & (*(short *)(&DAT_18022f504 + local_a8) == 0 || (int)uVar17 < 0);
          if (uVar18 == 0) {
            uVar14 = 0;
            goto LAB_1801e86e8;
          }
          local_f0 = param_1;
          if (uVar20 != 0) {
            local_f0 = puVar12;
          }
          bVar5 = (&DAT_18022f500)[local_a8];
          uVar28 = (uint)bVar5;
          if ((bVar5 & 1) == 0) {
            if ((bVar5 >> 1 & 1) != 0) {
              *(int *)(param_3 + 0x1218) = *(int *)(param_3 + 0x1218) + 1;
              bVar9 = local_d4 <= (uint)uVar26;
              uVar28 = (uint)(byte)(&DAT_18022f500)[local_a8];
              goto LAB_1801e772c;
            }
          }
          else {
            bVar9 = local_e8[4] <= (uint)uVar24;
LAB_1801e772c:
            if (bVar9) {
              uVar18 = 0;
            }
          }
          if (local_d0 <= uVar20) {
            uVar18 = 0;
          }
          uVar14 = (ulonglong)uVar18;
          if ((uVar28 & 1) == 0) {
            if ((uVar28 >> 1 & 1) != 0) {
              local_1a8 = CONCAT44(local_1a8._4_4_,
                                   (uint)(byte)(&DAT_18022f501)[local_a8] + (uint)uVar26);
            }
          }
          else {
            local_1ac = (uint)(byte)(&DAT_18022f501)[local_a8] + (uint)uVar24;
          }
          local_1b0 = (byte)(&DAT_18022f501)[local_a8] + uVar20;
          if (*(ushort *)(&DAT_18022f504 + local_a8) == 0) {
            uVar17 = 0;
            uVar18 = 0;
            puVar34 = param_1 + 1;
          }
          else {
            uVar20 = (uVar17 & 0x1800 | uVar17 >> 0x14 & 0x7ff) >> 8;
            puVar34 = param_1 + 2;
            if (((uint)(byte)(&DAT_18022f7a0)[(uint)((uVar15 & 0xff) != 0) | uVar20 << 1] <=
                 (uVar17 & 0x7ff)) || (uVar28 = 1, (uVar17 & 0xf000000) != 0)) {
              uVar28 = 0;
            }
            if (0x700000 < (uVar17 & 0xf00000)) {
              uVar28 = 0;
            }
            uVar28 = uVar28 & uVar18;
            uVar14 = (ulonglong)(byte)uVar28;
            if (uVar28 != 0) {
              if ((*(ushort *)(&DAT_18022f504 + local_a8) &
                  *(ushort *)(&DAT_18022f460 + (ulonglong)uVar20 * 2)) == 0) {
                uVar28 = 0;
              }
              uVar14 = (ulonglong)uVar28;
            }
            uVar17 = uVar17 & 0xf0000;
            if (uVar17 == 0) {
              uVar17 = 0xf0000;
            }
            if (uVar25 == 0x41) {
              uVar18 = 7;
            }
            else {
              uVar18 = uVar17 >> 0x10;
            }
          }
          if (bVar10) {
            uVar28 = *puVar34;
            uVar20 = uVar28 & 0xff0000;
            if (((-1 < (int)uVar28) || ((uVar28 & 0x1800 | uVar28 >> 0x14 & 0x7ff) >> 8 != 0x13)) ||
               (uVar21 = 1, (uVar28 & 0x7ff) != 0)) {
              uVar21 = 0;
            }
            uVar11 = 0;
            if ((uVar28 & 0xf000000) == 0xd000000 || (uVar28 & 0xf000000) == 0) {
              uVar11 = uVar21 & (uint)uVar14;
            }
            uVar11 = uVar11 & ((((uVar20 == 0xe40000 || uVar20 == 0) || uVar20 == 0x550000) ||
                               uVar20 == 0xaa0000) || uVar20 == 0xff0000);
            uVar14 = (ulonglong)uVar11;
            if (uVar11 != 0) {
              param_1 = param_1 + 1;
              puVar34 = puVar34 + 1;
              local_198 = param_1;
            }
          }
          uVar20 = local_1b0;
          uVar11 = FUN_1801e9df8(uVar25);
          local_e8[0] = 0;
          local_e8[1] = 0;
          local_e8[2] = 0;
          local_e8[3] = 0;
          uVar32 = 0;
          uStack_100 = CONCAT44(uVar11,(undefined4)uStack_100);
          uVar28 = 0;
          local_1d0 = 0;
          uStack_1c8 = 0;
          local_98[0] = 0;
          local_98[1] = 0;
          local_58[0] = 0;
          local_58[1] = 0;
          local_58[2] = 0;
          local_58[3] = 0;
          local_1dc[0] = 0;
          puVar12 = extraout_x1;
          uVar24 = extraout_x10;
          uVar26 = extraout_x11;
          uVar30 = extraout_x15;
          uVar21 = extraout_w12;
          iVar23 = extraout_w9;
          if ((int)uVar14 != 0) {
            local_bc = (int)extraout_x11;
            uStack_b8 = (int)extraout_x10;
            local_cc = uVar11;
            local_ac = (int)extraout_x15;
            local_b4 = uVar20;
            uStack_b0 = extraout_w12;
            local_88 = param_1;
            local_c4 = (int)uVar19;
            iStack_c0 = extraout_w9;
            local_78 = puVar34;
            local_70 = extraout_x1;
            do {
              if (3 < uVar28) break;
              uVar6 = *(ushort *)(&DAT_18022f506 + (ulonglong)uVar28 * 2 + local_a8);
              if (uVar6 == 0) break;
              uVar3 = puVar34[uVar28];
              uVar13 = uVar3 & 0x1800 | uVar3 >> 0x14 & 0x700;
              uVar29 = uVar13 >> 8;
              bVar5 = (&DAT_18022f7a0)[(uint)((uVar15 & 0xff) != 0) | uVar29 << 1];
              uVar21 = uVar3 & 0xf000000;
              local_98[uVar28] = uVar21;
              uVar32 = uVar3 & 0xff0000;
              *(uint *)((longlong)&local_1d0 + (ulonglong)uVar28 * 4) = uVar3 & 0x7ff;
              uVar27 = uVar3 >> 0x1f;
              local_58[uVar28] = uVar32;
              if ((uint)bVar5 <= (uVar3 & 0x7ff)) {
                uVar27 = 0;
              }
              if (uVar21 == 0) {
LAB_1801e79cc:
                uVar27 = uVar27 & (uint)uVar14;
                uVar13 = 0;
                if (uVar27 != 0) {
                  uVar7 = *(ushort *)(&DAT_18022f460 + (ulonglong)uVar29 * 2);
                  local_e8[uVar28] = (uint)uVar7;
                  if ((uVar7 & uVar6) == 0) {
                    uVar27 = 0;
                  }
                  uVar13 = 0;
                  if ((uVar6 & 0x2000) == 0 || uVar21 == 0) {
                    uVar13 = uVar27;
                  }
                  uVar21 = uVar3 & 0xff0000;
                  bVar10 = ((uVar21 == 0x550000 || uVar21 == 0) || uVar21 == 0xaa0000) ||
                           uVar21 == 0xff0000;
                  local_1dc[uVar28] = bVar10;
                  if ((uVar15 & 0xff) != 0 ||
                      ((((uVar32 == 0xe40000 || uVar32 == 0xc90000) || uVar32 == 0xd20000) ||
                       uVar32 == 0x1b0000) || bVar10)) {
                    uVar13 = uVar13 & (uVar32 == 0xe40000 || (uVar6 & 0x1000) == 0);
                  }
                  else {
                    uVar13 = 0;
                  }
                  bVar10 = false;
                  if ((uVar6 & 0x800) != 0) {
                    bVar10 = ((uVar21 != 0x550000 && uVar21 != 0) && uVar21 != 0xaa0000) &&
                             uVar21 != 0xff0000;
                  }
                  uVar13 = uVar13 & !bVar10;
                }
              }
              else {
                if (uVar21 == 0x1000000) {
                  if ((uVar13 < 0x100) || (uVar29 - 1 < 3)) goto LAB_1801e79cc;
                }
                else if ((uVar21 == 0xd000000) && (uVar29 == 0x13 || uVar29 == 0xe))
                goto LAB_1801e79cc;
                uVar13 = 0;
              }
              uVar21 = (uint)(byte)local_1d8[3];
              if (uVar25 == 0x5a) {
                if (uVar28 < 2) {
                  uVar21 = 3;
                }
              }
              else if ((uVar25 == 0x42 && uVar28 == 0) || ((uVar25 == 0x5d && (uVar28 != 1)))) {
                bVar5 = *(byte *)(((ulonglong)param_1[3] & 0x7ff) + param_3 + 0x14f);
                uVar21 = 7;
                if ((bVar5 & 0x1f) == 2) {
                  uVar21 = 3;
                }
                if ((local_1e8 != 0) && (uVar21 = 0xf, (bVar5 & 0x1f) == 2)) {
                  uVar21 = 0xb;
                }
              }
              uVar32 = local_58[uVar28];
              if (local_1d8[2] != '\0') {
                uVar21 = uVar18 & uVar21;
              }
              uVar27 = 1 << (ulonglong)(uVar32 >> 0x16 & 3);
              if ((uVar21 & 8) == 0) {
                uVar27 = 0;
              }
              uVar29 = 1 << (ulonglong)(uVar32 >> 0x14 & 3);
              if ((uVar21 & 4) == 0) {
                uVar29 = 0;
              }
              uVar22 = 1 << (ulonglong)(uVar32 >> 0x12 & 3);
              if ((uVar21 & 2) == 0) {
                uVar22 = 0;
              }
              uVar32 = 1 << (ulonglong)(uVar32 >> 0x10 & 3);
              if ((uVar21 & 1) == 0) {
                uVar32 = 0;
              }
              uVar32 = uVar27 | uVar29 | uVar22 | uVar32;
              uVar21 = 0;
              uVar27 = uVar32 & 0xff;
              if (uVar25 != 0x1e) {
                if ((uVar28 == 2) ||
                   (*(short *)(&DAT_18022f506 + (ulonglong)(uVar28 + 1) * 2 + local_a8) == 0)) {
                  uVar29 = local_cc;
                  if (uVar11 == 0) goto LAB_1801e7d20;
                }
                else {
                  uVar29 = 1;
                }
                local_c8 = uVar13;
                uVar4 = local_e8[uVar28];
                uVar22 = 0;
                do {
                  bVar5 = (byte)uVar32;
                  if (uVar4 == 1) {
                    uVar21 = uVar22 + *(int *)((longlong)&local_1d0 + (ulonglong)uVar28 * 4);
                    bVar16 = *(byte *)((longlong)&local_1a8 + (ulonglong)uVar21 + 4);
                    *(byte *)(param_3 + (ulonglong)uVar21) =
                         *(byte *)(param_3 + (ulonglong)uVar21) | bVar5;
                    uVar21 = (uint)bVar16;
                  }
                  else if (uVar4 == 2) {
                    lVar31 = param_3 + (ulonglong)
                                       (uVar22 + *(int *)((longlong)&local_1d0 +
                                                         (ulonglong)uVar28 * 4));
                    *(byte *)(lVar31 + 0x38) = *(byte *)(lVar31 + 0x38) | bVar5;
                    uVar21 = 0xf;
                  }
                  else if (uVar4 == 4) {
                    lVar31 = param_3 + (ulonglong)
                                       (uVar22 + *(int *)((longlong)&local_1d0 +
                                                         (ulonglong)uVar28 * 4));
                    bVar16 = *(byte *)(lVar31 + 10);
                    *(byte *)(lVar31 + 10) = bVar16 | bVar5;
                    uVar21 = (uint)bVar16;
                  }
                  else if (uVar4 == 8) {
                    lVar31 = param_3 + (ulonglong)
                                       (uVar22 + *(int *)((longlong)&local_1d0 +
                                                         (ulonglong)uVar28 * 4));
                    *(byte *)(lVar31 + 0x15f) = *(byte *)(lVar31 + 0x15f) | bVar5;
                    uVar21 = 0xf;
                  }
                  else if (uVar4 == 0x10) {
                    *(undefined1 *)
                     (param_3 + (ulonglong)
                                (uVar22 + *(int *)((longlong)&local_1d0 + (ulonglong)uVar28 * 4)) +
                     0x16f) = 1;
                    uVar21 = 0xf;
                  }
                  else if (uVar4 == 0x20) {
                    lVar31 = param_3 + (ulonglong)
                                       (uVar22 + *(int *)((longlong)&local_1d0 +
                                                         (ulonglong)uVar28 * 4));
                    *(byte *)(lVar31 + 0x17f) = *(byte *)(lVar31 + 0x17f) | bVar5;
                    uVar21 = 0xf;
                  }
                  else if (uVar4 == 0x40) {
                    uVar21 = 0xf;
                    if (*(char *)(param_3 + (ulonglong)
                                            (uVar22 + *(int *)((longlong)&local_1d0 +
                                                              (ulonglong)uVar28 * 4)) + 0x14f) ==
                        '\0') {
                      uVar21 = 0;
                    }
                  }
                  else if (uVar4 == 0x80) {
                    uVar21 = uVar22 + *(int *)((longlong)&local_1d0 + (ulonglong)uVar28 * 4);
                    bVar16 = *(byte *)((longlong)&local_1a8 + (ulonglong)uVar21 + 6);
                    lVar31 = param_3 + (ulonglong)uVar21;
                    *(byte *)(lVar31 + 0x2a) = *(byte *)(lVar31 + 0x2a) | bVar5;
                    uVar21 = (uint)bVar16;
                  }
                  else if (uVar4 == 0x400) {
                    *(undefined1 *)
                     (param_3 + (ulonglong)
                                (uVar22 + *(int *)((longlong)&local_1d0 + (ulonglong)uVar28 * 4)) +
                     0x180) = 1;
                    uVar21 = 0xf;
                  }
                  uVar22 = uVar22 + 1;
                } while (uVar22 < uVar29);
              }
LAB_1801e7d20:
              uVar13 = uVar13 & (uVar3 >> 0xd ^ 0xffffffff);
              if ((uVar25 != 0x58 || uVar28 == 0) && (uVar27 != (uVar21 & uVar27))) {
                uVar13 = 0;
              }
              uVar14 = (ulonglong)uVar13;
              uVar28 = uVar28 + 1;
            } while (uVar13 != 0);
            uVar19 = uVar19 & 0xffffffff;
            uVar26 = extraout_x11 & 0xffffffff;
            uVar24 = extraout_x10 & 0xffffffff;
            uVar30 = extraout_x15 & 0xffffffff;
            uVar32 = (uint)local_1dc[0];
            puVar12 = local_70;
            param_1 = local_88;
            uVar21 = uStack_b0;
            iVar23 = iStack_c0;
            local_1e4 = uVar17;
            local_1e0 = uVar18;
          }
          bVar5 = (byte)uVar18;
          if (uVar21 == 4) {
            lVar31 = param_3 + (uVar30 & 0xffffffff);
            *(byte *)(lVar31 + 10) = *(byte *)(lVar31 + 10) | bVar5;
          }
          else if (uVar21 == 0x20) {
LAB_1801e7dd4:
            lVar31 = param_3 + (uVar30 & 0xffffffff);
            *(byte *)(lVar31 + 0x17f) = *(byte *)(lVar31 + 0x17f) | bVar5;
          }
          else if (uVar21 == 0x80) {
            lVar31 = param_3 + (uVar30 & 0xffffffff);
            *(byte *)(lVar31 + 0x2a) = *(byte *)(lVar31 + 0x2a) | bVar5;
          }
          else if (uVar21 == 0x100) {
            lVar31 = param_3 + (uVar30 & 0xffffffff);
            *(byte *)(lVar31 + 0x14b) = *(byte *)(lVar31 + 0x14b) | bVar5;
          }
          else if (uVar21 == 0x200) {
            if (((uVar17 == 0xf0000) && (uVar32 != 0)) && (local_98[0] == 0)) {
              bVar16 = 1;
            }
            else {
              bVar16 = 0;
            }
            if (*(char *)(param_3 + 0x330) != '\0') {
              bVar16 = 0;
            }
            uVar14 = (ulonglong)(bVar16 & (byte)uVar14);
            *(undefined1 *)(param_3 + 0x330) = 1;
            goto LAB_1801e7dd4;
          }
          if (((4 < uVar25 - 0x58) || ((0x1dU >> (ulonglong)(uVar25 - 0x58 & 0x1f) & 1) == 0)) &&
             (5 < uVar25)) {
            uVar18 = (uint)uVar14;
            if (uVar25 == 6) {
              uVar14 = (ulonglong)(uVar32 & uVar18 & 0xff);
            }
            else if (uVar25 == 7) {
LAB_1801e81d8:
              uVar14 = (ulonglong)(uVar18 & 0xff & uVar32);
            }
            else if (3 < uVar25 - 8) {
              if ((uVar25 == 0xe) || (uVar25 == 0xf)) goto LAB_1801e81d8;
              if (uVar25 - 0x12 < 2) goto LAB_1801e81ec;
              if (uVar25 == 0x14) {
LAB_1801e81b4:
                bVar10 = uVar17 == 0xf0000;
LAB_1801e81b8:
                if ((bVar10) && (local_98[1] == 0)) {
LAB_1801e81c4:
                  uVar17 = 1;
                }
                else {
                  uVar17 = 0;
                }
              }
              else {
                if (uVar25 == 0x15) {
LAB_1801e81ac:
                  bVar10 = uVar17 == 0x70000;
                  goto LAB_1801e81b8;
                }
                if (uVar25 == 0x16) goto LAB_1801e81b4;
                if (uVar25 == 0x17) goto LAB_1801e81ac;
                if (uVar25 == 0x18) {
                  bVar10 = uVar17 == 0x30000;
                  goto LAB_1801e81b8;
                }
                if ((uVar25 == 0x19) || (uVar25 == 0x1a)) {
LAB_1801e8184:
                  *(undefined1 *)(param_3 + 0x14a) = 0;
                  goto LAB_1801e81ec;
                }
                uVar28 = (uint)uVar19;
                if (uVar25 == 0x1c) {
                  bVar10 = local_188[uVar19 & 0xffffffff] == 0;
LAB_1801e8198:
                  uVar14 = (ulonglong)(bVar10 & uVar18);
                  goto LAB_1801e81ec;
                }
                if (uVar25 == 0x1e) {
                  uVar14 = (ulonglong)(local_1f0 == 0x1c & uVar18);
                  *(int *)(param_3 + (local_1d0 & 0xffffffff) * 4 + 0x2f0) =
                       (int)((longlong)param_1 - (longlong)local_80 >> 2);
                  goto LAB_1801e8184;
                }
                if (uVar25 == 0x20) goto LAB_1801e81ec;
                uVar11 = (uint)uVar30;
                if (uVar25 == 0x21) {
                  uVar18 = uVar18 & ((uVar17 - 0x10000 & 0xfff8ffff) == 0 && uVar17 != 0x80000);
                  if (((uVar21 == local_e8[0]) && (uVar11 == (uint)local_1d0)) ||
                     ((uVar21 == local_e8[1] && (uVar11 == local_1d0._4_4_)))) {
                    uVar17 = 0;
                  }
                  else {
LAB_1801e80dc:
                    uVar17 = 1;
                  }
LAB_1801e80e0:
                  uVar14 = (ulonglong)(uVar18 & uVar17);
                  goto LAB_1801e81ec;
                }
                if (uVar25 == 0x23) goto LAB_1801e81ec;
                if (uVar25 != 0x24) {
                  if (uVar25 == 0x25) {
                    uVar18 = uVar18 & ((uVar17 - 0x10000 & 0xfffcffff) == 0 && uVar17 != 0x40000);
                    if (local_e8[1] == local_e8[2]) {
                      uVar17 = 0;
                      if (local_1d0._4_4_ == (uint)uStack_1c8) goto LAB_1801e80e0;
                    }
                    goto LAB_1801e80dc;
                  }
                  if (uVar25 == 0x26) {
                    iVar23 = 2;
                  }
                  else {
                    if (uVar25 == 0x27) {
                      bVar10 = local_188[uVar19 & 0xffffffff] == 2;
LAB_1801e8038:
                      uVar19 = (ulonglong)(uVar28 - 1);
                      uVar14 = (ulonglong)(bVar10 & uVar18);
                      local_190 = CONCAT44(uVar28 - 1,iVar23 + -1);
                      goto LAB_1801e81ec;
                    }
                    if ((uVar25 != 0x28) && (uVar25 != 0x29)) {
                      if (uVar25 == 0x2a) {
                        bVar10 = local_188[uVar19 & 0xffffffff] == 3;
                        goto LAB_1801e8198;
                      }
                      if (uVar25 == 0x2b) {
                        bVar10 = local_188[uVar19 & 0xffffffff] == 3;
                        goto LAB_1801e8038;
                      }
                      if (uVar25 == 0x2c) {
                        uVar21 = 0;
                        uVar17 = 1;
                        do {
                          if (uVar28 < uVar17) break;
                          uVar14 = (ulonglong)uVar17;
                          uVar17 = uVar17 + 1;
                          bVar10 = local_188[uVar14] - 1U < 2;
                          uVar21 = (uint)bVar10;
                        } while (!bVar10);
                      }
                      else {
                        if (uVar25 != 0x2d) {
                          if (uVar25 != 0x41) {
                            if ((uVar25 != 0x42) && (uVar25 != 0x5d)) {
                              if (uVar25 != 0x60) goto LAB_1801e81ec;
                              uVar21 = 0;
                              uVar17 = 1;
                              do {
                                if (uVar28 < uVar17) break;
                                uVar14 = (ulonglong)uVar17;
                                uVar17 = uVar17 + 1;
                                bVar10 = local_188[uVar14] - 1U < 2;
                                uVar21 = (uint)bVar10;
                              } while (!bVar10);
                              goto LAB_1801e7ff0;
                            }
                            *(uint *)(param_3 + 0x1214) =
                                 1 << (ulonglong)(local_1d0._4_4_ & 0x1f) |
                                 *(uint *)(param_3 + 0x1214);
                          }
                          bVar10 = uVar17 == 0xf0000;
                          goto LAB_1801e8198;
                        }
                        uVar21 = 0;
                        uVar17 = 1;
                        do {
                          if (uVar28 < uVar17) break;
                          uVar14 = (ulonglong)uVar17;
                          uVar17 = uVar17 + 1;
                          bVar10 = local_188[uVar14] - 1U < 2;
                          uVar21 = (uint)bVar10;
                        } while (!bVar10);
                      }
LAB_1801e7ff0:
                      uVar14 = (ulonglong)(uVar21 & uVar18);
                      goto LAB_1801e81ec;
                    }
                    iVar23 = 3;
                  }
                  uVar14 = (ulonglong)(uVar28 < 0x20 & uVar18);
                  uVar28 = uVar28 + 1;
                  local_188[uVar28] = iVar23;
                  uVar19 = (ulonglong)uVar28;
                  local_190 = CONCAT44(uVar28,(int)local_190 + 1);
                  uVar26 = local_1a8 & 0xffffffff;
                  uVar24 = (ulonglong)local_1ac;
                  *(undefined1 *)(local_1b8 + 0x14a) = 0;
                  uVar15 = (ulonglong)local_1c0;
                  puVar12 = local_f0;
                  param_3 = local_1b8;
                  param_1 = local_198;
                  uVar25 = local_108._4_4_;
                  uVar20 = local_1b0;
                  goto LAB_1801e81ec;
                }
                if ((uVar21 != local_e8[0]) || (uVar17 = 0, uVar11 != (uint)local_1d0))
                goto LAB_1801e81c4;
              }
              uVar14 = (ulonglong)(uVar18 & uVar17);
            }
          }
LAB_1801e81ec:
          if (*(short *)(local_1d8 + 4) != 0) {
            param_1 = param_1 + 1;
          }
          uVar17 = 0;
          if ((int)uVar14 != 0) {
            while ((uVar17 < 4 &&
                   (*(short *)(&DAT_18022f506 + (ulonglong)uVar17 * 2 + local_a8) != 0))) {
              param_1 = param_1 + 1;
              uVar17 = uVar17 + 1;
            }
          }
          param_1 = param_1 + 1;
          local_f8 = CONCAT44(uVar25,(undefined4)local_f8);
          local_1f0 = uVar25;
          local_198 = param_1;
        }
        goto LAB_1801e86d0;
      }
      if ((uVar20 != 0) || (bVar10)) {
        uVar25 = 0;
      }
      else {
        uVar25 = 1;
      }
      if (uVar28 != 0) {
        uVar25 = 0;
      }
      if (((((local_1e8 == 0) && (uVar18 = param_1[1], (int)uVar18 < 0)) &&
           ((uVar18 & 0x1800 | uVar18 >> 0x14 & 0x7ff) >> 8 == 2)) &&
          (((uVar18 & 0xf000000) == 0 && ((uVar18 & 0xf0000) == 0xf0000)))) &&
         ((uVar18 & 0xf00000) == 0)) {
        uVar28 = 0xe0;
        if ((uVar15 & 0xff) == 0) {
          uVar28 = 0x20;
        }
        uVar18 = uVar18 & 0x7ff;
        if (uVar18 < uVar28) {
          uVar14 = (ulonglong)(byte)(uVar25 & uVar17);
          if ((uVar25 & uVar17) != 0) {
            *(undefined1 *)(param_3 + (ulonglong)uVar18 + 0x331) = 1;
            uVar18 = uVar18 * 4;
            *(uint *)(param_3 + (ulonglong)uVar18 * 4 + 0x414) = param_1[2];
            *(uint *)(param_3 + (ulonglong)(uVar18 + 1) * 4 + 0x414) = param_1[3];
            *(uint *)(param_3 + (ulonglong)(uVar18 + 2) * 4 + 0x414) = param_1[4];
            *(uint *)(param_3 + (ulonglong)(uVar18 + 3) * 4 + 0x414) = param_1[5];
          }
          goto LAB_1801e83a4;
        }
      }
LAB_1801e83a0:
      uVar14 = 0;
    }
LAB_1801e83a4:
    param_1 = param_1 + 6;
    local_198 = param_1;
  }
LAB_1801e86d0:
  lVar31 = local_a0;
  if ((int)uVar14 == 0) goto LAB_1801e86e8;
  goto LAB_1801e754c;
}


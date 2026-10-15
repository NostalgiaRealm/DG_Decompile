/*
 * FUN_1800cbb58 at 1800cbb58
 * undefined FUN_1800cbb58(void)
 * Address ranges: 1800cbb58-1800cce5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800cbb58(uint *param_1,uint *param_2,longlong param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  undefined1 uVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint *puVar11;
  uint *extraout_x1;
  ulonglong uVar12;
  int iVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  int extraout_w9;
  uint uVar24;
  uint uVar25;
  int iVar26;
  undefined *extraout_x10;
  undefined *puVar27;
  uint uVar28;
  ulonglong extraout_x11;
  uint uVar29;
  ulonglong uVar30;
  ulonglong extraout_x12;
  int extraout_w13;
  int iVar31;
  uint extraout_w14;
  uint uVar32;
  longlong extraout_x15;
  uint uVar33;
  longlong lVar34;
  uint uVar35;
  uint *puVar36;
  uint uVar37;
  int local_1e0;
  uint local_1dc;
  byte local_1d8 [8];
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
  uint *puStack_f0;
  uint local_e8 [5];
  uint local_d4;
  uint local_d0;
  uint local_cc;
  int local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  longlong local_a8;
  uint local_a0 [4];
  longlong local_90;
  uint *local_88;
  uint *local_80;
  longlong local_78;
  undefined4 *local_70;
  uint local_68 [6];
  
  local_78 = param_3 + 0x1000;
  local_88 = param_1;
  local_70 = param_4;
  func_0x000180222c50(param_3,0,0x1270);
  uVar23 = *param_1;
  local_1b0 = 0;
  local_1ac = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  uVar14 = 1;
  iVar26 = 1;
  bVar9 = uVar23 + 0xfe00 < 2;
  uVar12 = (ulonglong)bVar9;
  local_1c0 = 0xffff0200 < uVar23;
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
  puStack_f0 = (uint *)0x0;
  local_f8._0_4_ = 0;
  local_f8._4_4_ = 0;
  uVar20 = local_f8._4_4_;
  *(char *)(param_3 + 0x126e) = (char)uVar23;
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
    uVar23 = 0x200;
    uVar28 = 0x200;
    uVar19 = 0x200;
  }
  else {
    uVar23 = param_2[4];
    uVar28 = uVar23;
    uVar19 = uVar23;
    if ((*param_2 >> 4 & 1) == 0) {
      uVar28 = 0x200;
      uVar19 = 0x20;
    }
  }
  puVar11 = (uint *)0x0;
  uVar17 = (ulonglong)local_1c0;
  bVar8 = *(char *)(param_3 + 0x126e) == '\0';
  uVar32 = 0x200;
  uVar33 = 0x200;
  if (bVar8) {
    uVar32 = uVar19;
    uVar33 = uVar28;
  }
  uVar28 = 0x200;
  if (bVar8) {
    uVar28 = uVar23;
  }
  lVar34 = param_3;
  local_1b8 = param_3;
  local_198 = param_1;
  if (!bVar9) {
LAB_1800ccd90:
    puVar36 = local_88;
    lVar21 = 0;
    do {
      if ((*(int *)(lVar34 + 0x2f0 + lVar21 * 4) == 0) ||
         (*(char *)(lVar34 + 0x180 + lVar21) != '\0')) {
        uVar23 = 1;
      }
      else {
        uVar23 = 0;
      }
      lVar21 = lVar21 + 1;
      uVar23 = uVar23 & (uint)uVar12;
      uVar12 = (ulonglong)uVar23;
    } while (lVar21 != 0x10);
    uVar22 = 0;
    do {
      if (*(char *)(lVar34 + 0x2a + uVar22) != '\0') {
        *(byte *)(local_78 + 0x26c) =
             *(byte *)(local_78 + 0x26c) | (byte)(iVar26 << (ulonglong)((uint)uVar22 & 0x1f));
      }
      uVar20 = (uint)uVar22 + 1;
      uVar22 = (ulonglong)uVar20;
    } while (uVar20 < 8);
    if (uVar23 != 0) {
      local_1e0 = 0;
      puVar27 = &DAT_180236df8;
      if ((uVar17 & 0xff) == 0) {
        puVar27 = &DAT_180236dc8;
      }
      uVar12 = FUN_1800ce408(local_88,puVar11,lVar34 + 0x2f0,puVar27,&local_1e0);
      uVar12 = uVar12 & 0xffffffff;
      *(undefined1 *)(lVar34 + 0x149) = (undefined1)local_1e0;
      *local_70 = (int)((longlong)param_1 - (longlong)puVar36 >> 2);
    }
    return uVar12;
  }
  puVar27 = &DAT_180231ef0;
  local_f8._4_4_ = 0;
  local_1e0 = 0;
  uVar15 = 0;
  uVar30 = 0;
  uVar23 = 0;
  uVar22 = 0;
  uVar19 = local_f8._4_4_;
  local_e8[4] = uVar33;
  local_d4 = uVar32;
  local_d0 = uVar28;
  local_a8 = param_3;
  local_f8._4_4_ = uVar20;
LAB_1800cbcac:
  iVar26 = (int)uVar14;
  lVar34 = local_a8;
  if (local_1e0 != 0) goto LAB_1800ccd90;
  uVar37 = *param_1;
  bVar3 = (byte)uVar14;
  uVar28 = uVar37 & 0xe0ff0000;
  uStack_100 = CONCAT44(iVar26,uVar37) & 0xffffffffe0ff0000;
  uVar33 = uVar37 & 0x10000000;
  bVar9 = uVar33 != 0;
  local_f8 = CONCAT62((uint6)bVar3,0xf0f);
  uVar35 = uVar37 & 0xc0000000;
  local_f8._0_4_ = CONCAT13(bVar9,(undefined3)local_f8);
  uVar20 = uVar37 & 0xffff;
  local_108 = CONCAT44(uVar37,uVar37) & 0xffffffffffff;
  uVar32 = (uint)uVar12;
  if (uVar20 == 0x1f) {
    uVar20 = param_1[1];
    uVar37 = param_1[2];
    uVar33 = uVar37 >> 0x1f;
    if ((uVar20 & 0x87ffffff) != 0x80000000) {
      uVar33 = 0;
    }
    uVar10 = (uVar37 & 0x1800 | uVar37 >> 0x14 & 0x7ff) >> 8;
    if ((uVar23 == 0) && (uVar28 == 0)) {
      uVar28 = 1;
    }
    else {
      uVar28 = 0;
    }
    if (uVar35 != 0) {
      uVar28 = 0;
    }
    if ((uVar10 < 0xb) && ((0x40aU >> (ulonglong)uVar10 & 1) != 0)) {
      uVar33 = uVar33 & uVar28 & uVar32;
      uVar12 = (ulonglong)uVar33;
      if (uVar33 != 0) {
        uVar28 = uVar37 & 0x7ff;
        if ((byte)puVar27[(ulonglong)((uint)((uVar17 & 0xff) != 0) | uVar10 << 1) + 0xa0] <= uVar28)
        {
          uVar33 = 0;
        }
        uVar12 = (ulonglong)uVar33;
        uVar7 = (undefined1)((uVar37 & 0xf0000) >> 0x10);
        if ((uVar37 & 0xf0000) == 0) {
          uVar7 = 0xf;
        }
        if (uVar10 == 1) {
          *(undefined1 *)((longlong)&local_1a8 + (ulonglong)uVar28 + 4) = uVar7;
          uVar15 = local_190 >> 0x20;
          uVar12 = (ulonglong)(((uVar37 & 0xf00000) == 0 && (uVar20 & 0x78000000) == 0) & uVar33);
        }
        else {
          if (uVar10 != 3) {
            local_198 = param_1;
            if (uVar10 == 10) {
              uVar20 = uVar20 & 0x78000000;
              *(byte *)(param_3 + (ulonglong)uVar28 + 0x14f) = (byte)(uVar20 >> 0x1b);
              uVar12 = (ulonglong)
                       (((uVar37 & 0xf00000) == 0 &&
                        ((uVar20 + 0xf0000000 & 0xe7ffffff) == 0 && uVar20 != 0x28000000)) &
                       (byte)uVar33);
            }
            goto LAB_1800ccbd0;
          }
          *(undefined1 *)((longlong)&local_1a8 + (ulonglong)uVar28 + 6) = uVar7;
          uVar15 = local_190 >> 0x20;
          uVar12 = (ulonglong)
                   (((uVar20 & 0x78000000) == 0 && (uVar37 & 0x900000) == 0) & (byte)uVar33);
          if ((uVar37 >> 0x16 & 1) != 0) {
            *(byte *)(local_1b8 + 0x140 + (longlong)((int)uVar28 >> 3)) =
                 *(byte *)(local_1b8 + 0x140 + (longlong)((int)uVar28 >> 3)) |
                 (byte)(iVar26 << (ulonglong)(uVar37 & 7));
          }
        }
        uVar17 = (ulonglong)local_1c0;
        uVar22 = (ulonglong)local_1ac;
        uVar30 = local_1a8 & 0xffffffff;
        puVar11 = puStack_f0;
        param_3 = local_1b8;
        uVar19 = local_f8._4_4_;
        uVar23 = local_1b0;
        goto LAB_1800ccbd0;
      }
    }
    else {
      uVar12 = 0;
    }
  }
  else if (uVar20 == 0x2f) {
    if ((uVar23 != 0) || (bVar9)) {
      uVar20 = 0;
    }
    else {
      uVar20 = 1;
    }
    if (uVar35 != 0) {
      uVar20 = 0;
    }
    if (((((uVar28 == 0) && (uVar28 = param_1[1], (int)uVar28 < 0)) &&
         ((uVar28 & 0x1800 | uVar28 >> 0x14 & 0x7ff) >> 8 == 0xe)) &&
        (((uVar28 & 0xf000000) == 0 && ((uVar28 & 0xf0000) == 0xf0000)))) &&
       ((uVar28 & 0xf007f0) == 0)) {
      uVar12 = (ulonglong)(byte)(uVar20 & uVar32);
      local_198 = param_1;
      if ((uVar20 & uVar32) != 0) {
        *(byte *)(param_3 + (ulonglong)(uVar28 & 0x7ff) + 0x2a0) = bVar3;
        *(uint *)(param_3 + (ulonglong)(uVar28 & 0x7ff) * 4 + 0x2b0) = param_1[2];
      }
    }
    else {
      uVar12 = 0;
      local_198 = param_1;
    }
LAB_1800ccbd0:
    param_1 = local_198 + 3;
    local_198 = param_1;
  }
  else {
    if (uVar20 == 0x30) {
      if ((uVar23 != 0) || (bVar9)) {
        uVar20 = 0;
      }
      else {
        uVar20 = 1;
      }
      if (uVar35 != 0) {
        uVar20 = 0;
      }
      if (((((uVar28 != 0) || (uVar28 = param_1[1], -1 < (int)uVar28)) ||
           ((uVar28 & 0x1800 | uVar28 >> 0x14 & 0x7ff) >> 8 != 7)) ||
          ((((uVar28 & 0xf000000) != 0 || ((uVar28 & 0xf0000) != 0xf0000)) ||
           (((uVar28 & 0xf00000) != 0 || ((param_1[3] != 0 || (param_1[4] != 0)))))))) ||
         (param_1[5] != 0 || (uVar28 & 0x7f0) != 0)) goto LAB_1800cca60;
      uVar12 = (ulonglong)(byte)(uVar20 & uVar32);
      if ((uVar20 & uVar32) != 0) {
        uVar20 = (uVar28 & 0x7ff) * 4;
        *(byte *)(param_3 + (ulonglong)(uVar28 & 0x7ff) + 400) = bVar3;
        *(uint *)(param_3 + (ulonglong)uVar20 * 4 + 0x1a0) = param_1[2];
        *(uint *)(param_3 + (ulonglong)(uVar20 + 1) * 4 + 0x1a0) = param_1[3];
        *(uint *)(param_3 + (ulonglong)(uVar20 + 2) * 4 + 0x1a0) = param_1[4];
        *(uint *)(param_3 + (ulonglong)(uVar20 + 3) * 4 + 0x1a0) = param_1[5];
      }
    }
    else {
      if (uVar20 != 0x51) {
        uVar32 = uVar35 == 0 & uVar32;
        if (uVar20 == 0xfffe) {
          if (uVar33 != 0) {
            uVar32 = 0;
          }
          uVar12 = (ulonglong)uVar32;
          param_1 = param_1 + ((uVar37 >> 0x10) + 1);
          local_198 = param_1;
        }
        else {
          if (uVar20 == 0xffff) {
            uVar20 = (uint)(uVar33 == 0 && uVar28 == 0);
            if ((int)uVar15 != 0) {
              uVar20 = 0;
            }
            uVar12 = 0;
            do {
              if (*(int *)(param_3 + uVar12 * 4 + 0x2f0) != 0) {
                uVar12 = (ulonglong)(uVar19 == 0x1c);
                goto LAB_1800cc960;
              }
              uVar28 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar28;
            } while (uVar28 < 0x10);
            uVar12 = (ulonglong)(uVar20 & uVar32);
LAB_1800cc960:
            param_1 = param_1 + 1;
            local_1e0 = 1;
            local_1dc = uVar32;
            local_198 = param_1;
            goto LAB_1800ccd78;
          }
          if (0x60 < uVar20) {
            uVar32 = 0;
          }
          uVar19 = uVar37 & 0xff0000;
          if (((uVar19 == 0) ||
              ((uVar20 - 0x29 < 0x36 &&
               ((0x20000000000011U >> ((ulonglong)(uVar20 - 0x29) & 0x3f) & 1) != 0 &&
                uVar19 < 0x60001)))) || ((uVar20 == 0x42 && ((uVar19 - 0x10000 & 0xfffeffff) == 0)))
             ) {
            uVar19 = 1;
          }
          else {
            uVar19 = 0;
          }
          cVar6 = puVar27[uVar20];
          uVar12 = (ulonglong)cVar6;
          if ((uVar37 & 0xe0000000) != 0) {
            uVar19 = 0;
          }
          if (cVar6 == -1) {
LAB_1800cbdd8:
            uVar19 = 0;
          }
          else {
            lVar21 = (-(uVar12 >> 0x1f & 1) & 0xfffffff800000000 | (uVar12 & 0xffffffff) << 3) -
                     (longlong)(int)cVar6;
            if (((((byte)puVar27[lVar21 * 2 + 0xd0] >> 3 & 1) != 0) && ((uVar17 & 0xff) == 0)) ||
               ((bVar9 && ((((byte)puVar27[lVar21 * 2 + 0xd0] >> 2 & 1) != 0 ||
                           ((*(short *)(puVar27 + lVar21 * 2 + 0xd6) == 0 &&
                            (*(short *)(puVar27 + lVar21 * 2 + 0xd4) == 0))))))))
            goto LAB_1800cbdd8;
            uVar19 = uVar19 & uVar32;
          }
          uVar32 = param_1[1];
          local_90 = (-(uVar12 >> 0x1f & 1) & 0xfffffff800000000 | (uVar12 & 0xffffffff) << 3) -
                     (longlong)(int)cVar6;
          if ((bVar9) && ((uVar17 & 0xff) == 0)) {
            uVar12 = 0;
            goto LAB_1800ccd90;
          }
          uVar19 = uVar19 & (*(short *)(puVar27 + local_90 * 2 + 0xd4) == 0 || (int)uVar32 < 0);
          if (uVar19 == 0) {
            uVar12 = 0;
            goto LAB_1800ccd90;
          }
          puStack_f0 = param_1;
          if (uVar23 != 0) {
            puStack_f0 = puVar11;
          }
          bVar3 = puVar27[local_90 * 2 + 0xd0];
          uVar33 = (uint)bVar3;
          if ((bVar3 & 1) == 0) {
            if ((bVar3 >> 1 & 1) != 0) {
              *(int *)(param_3 + 0x1218) = *(int *)(param_3 + 0x1218) + 1;
              bVar8 = local_d4 <= (uint)uVar30;
              uVar33 = (uint)(byte)puVar27[local_90 * 2 + 0xd0];
              goto LAB_1800cbe50;
            }
          }
          else {
            bVar8 = local_e8[4] <= (uint)uVar22;
LAB_1800cbe50:
            if (bVar8) {
              uVar19 = 0;
            }
          }
          if (local_d0 <= uVar23) {
            uVar19 = 0;
          }
          uVar12 = (ulonglong)uVar19;
          if ((uVar33 & 1) == 0) {
            if ((uVar33 >> 1 & 1) != 0) {
              local_1a8 = CONCAT44(local_1a8._4_4_,
                                   (uint)(byte)puVar27[local_90 * 2 + 0xd1] + (uint)uVar30);
            }
          }
          else {
            local_1ac = (uint)(byte)puVar27[local_90 * 2 + 0xd1] + (uint)uVar22;
          }
          local_1b0 = (byte)puVar27[local_90 * 2 + 0xd1] + uVar23;
          if (*(ushort *)(puVar27 + local_90 * 2 + 0xd4) == 0) {
            uVar32 = 0;
            uVar19 = 0;
            puVar36 = param_1 + 1;
            uVar33 = 0;
          }
          else {
            uVar23 = (uVar32 & 0x1800 | uVar32 >> 0x14 & 0x7ff) >> 8;
            uVar33 = uVar32 & 0x7ff;
            puVar36 = param_1 + 2;
            if (((byte)puVar27[(ulonglong)((uint)((uVar17 & 0xff) != 0) | uVar23 << 1) + 0xa0] <=
                 uVar33) || (uVar35 = 1, (uVar32 & 0xf000000) != 0)) {
              uVar35 = 0;
            }
            if (0x700000 < (uVar32 & 0xf00000)) {
              uVar35 = 0;
            }
            uVar35 = uVar35 & uVar19;
            uVar12 = (ulonglong)(byte)uVar35;
            if (uVar35 != 0) {
              if ((*(ushort *)(puVar27 + local_90 * 2 + 0xd4) &
                  *(ushort *)(puVar27 + (ulonglong)uVar23 * 2 + 0x70)) == 0) {
                uVar35 = 0;
              }
              uVar12 = (ulonglong)uVar35;
            }
            uVar32 = uVar32 & 0xf0000;
            if (uVar32 == 0) {
              uVar32 = 0xf0000;
            }
            if (uVar20 == 0x41) {
              uVar19 = 7;
            }
            else {
              uVar19 = uVar32 >> 0x10;
            }
          }
          if (bVar9) {
            uVar35 = *puVar36;
            uVar23 = uVar35 & 0xff0000;
            if (((-1 < (int)uVar35) || ((uVar35 & 0x1800 | uVar35 >> 0x14 & 0x7ff) >> 8 != 0x13)) ||
               (uVar37 = 1, (uVar35 & 0x7ff) != 0)) {
              uVar37 = 0;
            }
            uVar10 = 0;
            if ((uVar35 & 0xf000000) == 0xd000000 || (uVar35 & 0xf000000) == 0) {
              uVar10 = uVar37 & (uint)uVar12;
            }
            uVar10 = uVar10 & ((((uVar23 == 0xe40000 || uVar23 == 0) || uVar23 == 0x550000) ||
                               uVar23 == 0xaa0000) || uVar23 == 0xff0000);
            uVar12 = (ulonglong)uVar10;
            if (uVar10 != 0) {
              param_1 = param_1 + 1;
              puVar36 = puVar36 + 1;
              local_198 = param_1;
            }
          }
          uVar23 = local_1b0;
          uVar10 = func_0x0001801e9df8(uVar20);
          local_e8[0] = 0;
          local_e8[1] = 0;
          local_e8[2] = 0;
          local_e8[3] = 0;
          uVar25 = 0;
          uStack_100 = CONCAT44(uVar10,(undefined4)uStack_100);
          uVar35 = 0;
          local_1d0 = 0;
          uStack_1c8 = 0;
          local_a0[0] = 0;
          local_a0[1] = 0;
          local_68[0] = 0;
          local_68[1] = 0;
          local_68[2] = 0;
          local_68[3] = 0;
          local_1d8[0] = 0;
          iVar13 = (int)uVar14;
          uVar7 = (undefined1)uVar14;
          puVar11 = extraout_x1;
          uVar22 = extraout_x11;
          uVar30 = extraout_x12;
          uVar37 = extraout_w14;
          iVar26 = extraout_w9;
          iVar31 = extraout_w13;
          if ((int)uVar12 != 0) {
            local_bc = (int)extraout_x12;
            local_b8 = (int)extraout_x11;
            local_ac = uVar33;
            local_b4 = uVar23;
            local_b0 = extraout_w14;
            local_c4 = (int)uVar15;
            local_c0 = extraout_w9;
            local_cc = uVar10;
            local_c8 = extraout_w13;
            local_80 = extraout_x1;
            do {
              if (3 < uVar35) break;
              lVar34 = local_90 * 2 + 0xd6;
              uVar4 = *(ushort *)(extraout_x10 + (ulonglong)uVar35 * 2 + lVar34);
              if (uVar4 == 0) break;
              uVar1 = puVar36[uVar35];
              uVar24 = uVar1 & 0x1800 | uVar1 >> 0x14 & 0x700;
              uVar16 = uVar24 >> 8;
              bVar3 = extraout_x10[(ulonglong)((uint)((uVar17 & 0xff) != 0) | uVar16 << 1) + 0xa0];
              uVar33 = uVar1 & 0xf000000;
              local_a0[uVar35] = uVar33;
              uVar37 = uVar1 & 0xff0000;
              *(uint *)((longlong)&local_1d0 + (ulonglong)uVar35 * 4) = uVar1 & 0x7ff;
              uVar25 = uVar1 >> 0x1f;
              local_68[uVar35] = uVar37;
              if ((uint)bVar3 <= (uVar1 & 0x7ff)) {
                uVar25 = 0;
              }
              if (uVar33 == 0) {
LAB_1800cc0c8:
                uVar25 = uVar25 & (uint)uVar12;
                uVar24 = 0;
                if (uVar25 != 0) {
                  uVar5 = *(ushort *)(extraout_x10 + (ulonglong)uVar16 * 2 + 0x70);
                  local_e8[uVar35] = (uint)uVar5;
                  if ((uVar5 & uVar4) == 0) {
                    uVar25 = 0;
                  }
                  uVar16 = 0;
                  if ((uVar4 & 0x2000) == 0 || uVar33 == 0) {
                    uVar16 = uVar25;
                  }
                  uVar33 = uVar1 & 0xff0000;
                  bVar9 = ((uVar33 == 0x550000 || uVar33 == 0) || uVar33 == 0xaa0000) ||
                          uVar33 == 0xff0000;
                  local_1d8[uVar35] = bVar9;
                  uVar25 = (uint)((((uVar37 == 0xe40000 || uVar37 == 0xc90000) || uVar37 == 0xd20000
                                   ) || uVar37 == 0x1b0000) || bVar9);
                  uVar24 = (uint)uVar17 & 0xff | uVar25;
                  if ((uVar17 & 0xff) != 0 || uVar25 != 0) {
                    uVar24 = uVar16 & (uVar37 == 0xe40000 || (uVar4 & 0x1000) == 0);
                  }
                  bVar9 = false;
                  if ((uVar4 & 0x800) != 0) {
                    bVar9 = ((uVar33 != 0x550000 && uVar33 != 0) && uVar33 != 0xaa0000) &&
                            uVar33 != 0xff0000;
                  }
                  uVar24 = uVar24 & !bVar9;
                }
              }
              else {
                if (uVar33 == 0x1000000) {
                  if ((uVar24 < 0x100) || (uVar16 - 1 < 3)) goto LAB_1800cc0c8;
                }
                else if ((uVar33 == 0xd000000) && (uVar16 == 0x13 || uVar16 == 0xe))
                goto LAB_1800cc0c8;
                uVar24 = 0;
              }
              uVar33 = (uint)*(byte *)(extraout_x15 + 0xd3);
              if (uVar20 == 0x5a) {
                if (uVar35 < 2) {
                  uVar33 = 3;
                }
              }
              else if ((uVar20 == 0x42 && uVar35 == 0) || ((uVar20 == 0x5d && (uVar35 != 1)))) {
                bVar3 = *(byte *)(((ulonglong)param_1[3] & 0x7ff) + param_3 + 0x14f);
                uVar33 = 7;
                if ((bVar3 & 0x1f) == 2) {
                  uVar33 = 3;
                }
                if ((uVar28 != 0) && (uVar33 = 0xf, (bVar3 & 0x1f) == 2)) {
                  uVar33 = 0xb;
                }
              }
              uVar37 = local_68[uVar35];
              if (*(char *)(extraout_x15 + 0xd2) != '\0') {
                uVar33 = uVar19 & uVar33;
              }
              uVar25 = iVar13 << (ulonglong)(uVar37 >> 0x16 & 3);
              if ((uVar33 & 8) == 0) {
                uVar25 = 0;
              }
              uVar16 = iVar13 << (ulonglong)(uVar37 >> 0x14 & 3);
              if ((uVar33 & 4) == 0) {
                uVar16 = 0;
              }
              uVar29 = iVar13 << (ulonglong)(uVar37 >> 0x12 & 3);
              if ((uVar33 & 2) == 0) {
                uVar29 = 0;
              }
              uVar37 = iVar13 << (ulonglong)(uVar37 >> 0x10 & 3);
              if ((uVar33 & 1) == 0) {
                uVar37 = 0;
              }
              uVar37 = uVar25 | uVar16 | uVar29 | uVar37;
              uVar33 = 0;
              uVar25 = uVar37 & 0xff;
              if (uVar20 != 0x1e) {
                if ((uVar35 == 2) ||
                   (*(short *)(extraout_x10 + (ulonglong)(uVar35 + 1) * 2 + lVar34) == 0)) {
                  uVar16 = local_cc;
                  if (uVar10 == 0) goto LAB_1800cc400;
                }
                else {
                  uVar16 = 1;
                }
                uVar2 = local_e8[uVar35];
                uVar29 = 0;
                do {
                  bVar3 = (byte)uVar37;
                  if (uVar2 == 1) {
                    uVar33 = uVar29 + *(int *)((longlong)&local_1d0 + (ulonglong)uVar35 * 4);
                    bVar18 = *(byte *)((longlong)&local_1a8 + (ulonglong)uVar33 + 4);
                    *(byte *)(param_3 + (ulonglong)uVar33) =
                         *(byte *)(param_3 + (ulonglong)uVar33) | bVar3;
                    uVar33 = (uint)bVar18;
                  }
                  else if (uVar2 == 2) {
                    lVar34 = param_3 + (ulonglong)
                                       (uVar29 + *(int *)((longlong)&local_1d0 +
                                                         (ulonglong)uVar35 * 4));
                    *(byte *)(lVar34 + 0x38) = *(byte *)(lVar34 + 0x38) | bVar3;
                    uVar33 = 0xf;
                  }
                  else if (uVar2 == 4) {
                    lVar34 = param_3 + (ulonglong)
                                       (uVar29 + *(int *)((longlong)&local_1d0 +
                                                         (ulonglong)uVar35 * 4));
                    bVar18 = *(byte *)(lVar34 + 10);
                    *(byte *)(lVar34 + 10) = bVar18 | bVar3;
                    uVar33 = (uint)bVar18;
                  }
                  else if (uVar2 == 8) {
                    lVar34 = param_3 + (ulonglong)
                                       (uVar29 + *(int *)((longlong)&local_1d0 +
                                                         (ulonglong)uVar35 * 4));
                    *(byte *)(lVar34 + 0x15f) = *(byte *)(lVar34 + 0x15f) | bVar3;
                    uVar33 = 0xf;
                  }
                  else if (uVar2 == 0x10) {
                    *(undefined1 *)
                     (param_3 + (ulonglong)
                                (uVar29 + *(int *)((longlong)&local_1d0 + (ulonglong)uVar35 * 4)) +
                     0x16f) = uVar7;
                    uVar33 = 0xf;
                  }
                  else if (uVar2 == 0x20) {
                    lVar34 = param_3 + (ulonglong)
                                       (uVar29 + *(int *)((longlong)&local_1d0 +
                                                         (ulonglong)uVar35 * 4));
                    *(byte *)(lVar34 + 0x17f) = *(byte *)(lVar34 + 0x17f) | bVar3;
                    uVar33 = 0xf;
                  }
                  else if (uVar2 == 0x40) {
                    uVar33 = 0xf;
                    if (*(char *)(param_3 + (ulonglong)
                                            (uVar29 + *(int *)((longlong)&local_1d0 +
                                                              (ulonglong)uVar35 * 4)) + 0x14f) ==
                        '\0') {
                      uVar33 = 0;
                    }
                  }
                  else if (uVar2 == 0x80) {
                    uVar33 = uVar29 + *(int *)((longlong)&local_1d0 + (ulonglong)uVar35 * 4);
                    bVar18 = *(byte *)((longlong)&local_1a8 + (ulonglong)uVar33 + 6);
                    lVar34 = param_3 + (ulonglong)uVar33;
                    *(byte *)(lVar34 + 0x2a) = *(byte *)(lVar34 + 0x2a) | bVar3;
                    uVar33 = (uint)bVar18;
                  }
                  else if (uVar2 == 0x400) {
                    *(undefined1 *)
                     (param_3 + (ulonglong)
                                (uVar29 + *(int *)((longlong)&local_1d0 + (ulonglong)uVar35 * 4)) +
                     0x180) = uVar7;
                    uVar33 = 0xf;
                  }
                  uVar29 = uVar29 + 1;
                } while (uVar29 < uVar16);
              }
LAB_1800cc400:
              uVar24 = uVar24 & (uVar1 >> 0xd ^ 0xffffffff);
              if ((uVar20 != 0x58 || uVar35 == 0) && (uVar25 != (uVar33 & uVar25))) {
                uVar24 = 0;
              }
              uVar12 = (ulonglong)uVar24;
              uVar35 = uVar35 + 1;
            } while (uVar24 != 0);
            uVar15 = uVar15 & 0xffffffff;
            uVar30 = extraout_x12 & 0xffffffff;
            uVar22 = extraout_x11 & 0xffffffff;
            uVar25 = (uint)local_1d8[0];
            puVar11 = local_80;
            uVar33 = local_ac;
            uVar37 = local_b0;
            iVar26 = local_c0;
            iVar31 = local_c8;
            local_1dc = uVar32;
          }
          bVar3 = (byte)uVar19;
          if (uVar37 == 4) {
            *(byte *)(param_3 + (ulonglong)uVar33 + 10) =
                 *(byte *)(param_3 + (ulonglong)uVar33 + 10) | bVar3;
          }
          else if (uVar37 == 0x20) {
LAB_1800cc4b0:
            *(byte *)(param_3 + (ulonglong)uVar33 + 0x17f) =
                 *(byte *)(param_3 + (ulonglong)uVar33 + 0x17f) | bVar3;
          }
          else if (uVar37 == 0x80) {
            *(byte *)(param_3 + (ulonglong)uVar33 + 0x2a) =
                 *(byte *)(param_3 + (ulonglong)uVar33 + 0x2a) | bVar3;
          }
          else if (uVar37 == 0x100) {
            *(byte *)(param_3 + (ulonglong)uVar33 + 0x14b) =
                 *(byte *)(param_3 + (ulonglong)uVar33 + 0x14b) | bVar3;
          }
          else if (uVar37 == 0x200) {
            if (((uVar32 == 0xf0000) && (uVar25 != 0)) && (local_a0[0] == 0)) {
              bVar18 = 1;
            }
            else {
              bVar18 = 0;
            }
            if (*(char *)(param_3 + 0x330) != '\0') {
              bVar18 = 0;
            }
            *(undefined1 *)(param_3 + 0x330) = uVar7;
            uVar12 = (ulonglong)(bVar18 & (byte)uVar12);
            goto LAB_1800cc4b0;
          }
          uVar19 = uVar20;
          if (((4 < uVar20 - 0x58) || ((0x1dU >> (ulonglong)(uVar20 - 0x58 & 0x1f) & 1) == 0)) &&
             (5 < uVar20)) {
            uVar28 = (uint)uVar12;
            if (uVar20 == 6) {
              uVar12 = (ulonglong)(uVar25 & uVar28 & 0xff);
            }
            else if (uVar20 == 7) {
LAB_1800cc8ac:
              uVar12 = (ulonglong)(uVar28 & 0xff & uVar25);
            }
            else if (3 < uVar20 - 8) {
              if ((uVar20 == 0xe) || (uVar20 == 0xf)) goto LAB_1800cc8ac;
              if (uVar20 - 0x12 < 2) goto LAB_1800cc8c0;
              if (uVar20 == 0x14) {
LAB_1800cc888:
                bVar9 = uVar32 == 0xf0000;
LAB_1800cc88c:
                if ((bVar9) && (local_a0[1] == 0)) {
LAB_1800cc898:
                  uVar20 = 1;
                }
                else {
                  uVar20 = 0;
                }
              }
              else {
                if (uVar20 == 0x15) {
LAB_1800cc880:
                  bVar9 = uVar32 == 0x70000;
                  goto LAB_1800cc88c;
                }
                if (uVar20 == 0x16) goto LAB_1800cc888;
                if (uVar20 == 0x17) goto LAB_1800cc880;
                if (uVar20 == 0x18) {
                  bVar9 = uVar32 == 0x30000;
                  goto LAB_1800cc88c;
                }
                if ((uVar20 == 0x19) || (uVar20 == 0x1a)) {
LAB_1800cc858:
                  *(undefined1 *)(param_3 + 0x14a) = 0;
                  goto LAB_1800cc8c0;
                }
                uVar35 = (uint)uVar15;
                if (uVar20 == 0x1c) {
                  bVar9 = local_188[uVar15 & 0xffffffff] == 0;
LAB_1800cc86c:
                  uVar12 = (ulonglong)(bVar9 & uVar28);
                  goto LAB_1800cc8c0;
                }
                if (uVar20 == 0x1e) {
                  uVar12 = (ulonglong)(iVar31 == 0x1c & uVar28);
                  *(int *)(param_3 + (local_1d0 & 0xffffffff) * 4 + 0x2f0) =
                       (int)((longlong)param_1 - (longlong)local_88 >> 2);
                  goto LAB_1800cc858;
                }
                if (uVar20 == 0x20) goto LAB_1800cc8c0;
                if (uVar20 == 0x21) {
                  uVar28 = uVar28 & ((uVar32 - 0x10000 & 0xfff8ffff) == 0 && uVar32 != 0x80000);
                  if (((uVar37 == local_e8[0]) && (uVar33 == (uint)local_1d0)) ||
                     ((uVar37 == local_e8[1] && (uVar33 == local_1d0._4_4_)))) {
                    uVar20 = 0;
                  }
                  else {
LAB_1800cc7b4:
                    uVar20 = 1;
                  }
LAB_1800cc7b8:
                  uVar12 = (ulonglong)(uVar28 & uVar20);
                  goto LAB_1800cc8c0;
                }
                if (uVar20 == 0x23) goto LAB_1800cc8c0;
                if (uVar20 != 0x24) {
                  if (uVar20 == 0x25) {
                    uVar28 = uVar28 & ((uVar32 - 0x10000 & 0xfffcffff) == 0 && uVar32 != 0x40000);
                    if (local_e8[1] == local_e8[2]) {
                      uVar20 = 0;
                      if (local_1d0._4_4_ == (uint)uStack_1c8) goto LAB_1800cc7b8;
                    }
                    goto LAB_1800cc7b4;
                  }
                  if (uVar20 == 0x26) {
                    iVar26 = 2;
                  }
                  else {
                    if (uVar20 == 0x27) {
                      bVar9 = local_188[uVar15 & 0xffffffff] == 2;
LAB_1800cc710:
                      uVar15 = (ulonglong)(uVar35 - 1);
                      uVar12 = (ulonglong)(bVar9 & uVar28);
                      local_190 = CONCAT44(uVar35 - 1,iVar26 + -1);
                      goto LAB_1800cc8c0;
                    }
                    if ((uVar20 != 0x28) && (uVar20 != 0x29)) {
                      if (uVar20 == 0x2a) {
                        bVar9 = local_188[uVar15 & 0xffffffff] == 3;
                        goto LAB_1800cc86c;
                      }
                      if (uVar20 == 0x2b) {
                        bVar9 = local_188[uVar15 & 0xffffffff] == 3;
                        goto LAB_1800cc710;
                      }
                      if (uVar20 == 0x2c) {
                        uVar32 = 0;
                        uVar20 = 1;
                        do {
                          if (uVar35 < uVar20) break;
                          uVar12 = (ulonglong)uVar20;
                          uVar20 = uVar20 + 1;
                          bVar9 = local_188[uVar12] - 1U < 2;
                          uVar32 = (uint)bVar9;
                        } while (!bVar9);
                      }
                      else {
                        if (uVar20 != 0x2d) {
                          if (uVar20 != 0x41) {
                            if ((uVar20 != 0x42) && (uVar20 != 0x5d)) {
                              if (uVar20 != 0x60) goto LAB_1800cc8c0;
                              uVar32 = 0;
                              uVar20 = 1;
                              do {
                                if (uVar35 < uVar20) break;
                                uVar12 = (ulonglong)uVar20;
                                uVar20 = uVar20 + 1;
                                bVar9 = local_188[uVar12] - 1U < 2;
                                uVar32 = (uint)bVar9;
                              } while (!bVar9);
                              goto LAB_1800cc6c8;
                            }
                            *(uint *)(param_3 + 0x1214) =
                                 iVar13 << (ulonglong)(local_1d0._4_4_ & 0x1f) |
                                 *(uint *)(param_3 + 0x1214);
                          }
                          bVar9 = uVar32 == 0xf0000;
                          goto LAB_1800cc86c;
                        }
                        uVar32 = 0;
                        uVar20 = 1;
                        do {
                          if (uVar35 < uVar20) break;
                          uVar12 = (ulonglong)uVar20;
                          uVar20 = uVar20 + 1;
                          bVar9 = local_188[uVar12] - 1U < 2;
                          uVar32 = (uint)bVar9;
                        } while (!bVar9);
                      }
LAB_1800cc6c8:
                      uVar12 = (ulonglong)(uVar32 & uVar28);
                      goto LAB_1800cc8c0;
                    }
                    iVar26 = 3;
                  }
                  uVar12 = (ulonglong)(uVar35 < 0x20 & uVar28);
                  uVar35 = uVar35 + 1;
                  local_188[uVar35] = iVar26;
                  uVar15 = (ulonglong)uVar35;
                  local_190 = CONCAT44(uVar35,(int)local_190 + 1);
                  uVar30 = local_1a8 & 0xffffffff;
                  uVar22 = (ulonglong)local_1ac;
                  *(undefined1 *)(local_1b8 + 0x14a) = 0;
                  uVar17 = (ulonglong)local_1c0;
                  puVar11 = puStack_f0;
                  param_3 = local_1b8;
                  param_1 = local_198;
                  uVar19 = local_108._4_4_;
                  uVar23 = local_1b0;
                  goto LAB_1800cc8c0;
                }
                if ((uVar37 != local_e8[0]) || (uVar20 = 0, uVar33 != (uint)local_1d0))
                goto LAB_1800cc898;
              }
              uVar12 = (ulonglong)(uVar28 & uVar20);
            }
          }
LAB_1800cc8c0:
          if (*(short *)(extraout_x15 + 0xd4) != 0) {
            param_1 = param_1 + 1;
          }
          uVar20 = 0;
          if ((int)uVar12 != 0) {
            while ((uVar20 < 4 &&
                   (*(short *)(extraout_x10 + (ulonglong)uVar20 * 2 + local_90 * 2 + 0xd6) != 0))) {
              param_1 = param_1 + 1;
              uVar20 = uVar20 + 1;
            }
          }
          param_1 = param_1 + 1;
          puVar27 = extraout_x10;
          local_198 = param_1;
          local_f8._4_4_ = uVar19;
        }
        goto LAB_1800ccd78;
      }
      if ((uVar23 != 0) || (bVar9)) {
        uVar20 = 0;
      }
      else {
        uVar20 = 1;
      }
      if (uVar35 != 0) {
        uVar20 = 0;
      }
      if (((((uVar28 == 0) && (uVar28 = param_1[1], (int)uVar28 < 0)) &&
           ((uVar28 & 0x1800 | uVar28 >> 0x14 & 0x7ff) >> 8 == 2)) &&
          (((uVar28 & 0xf000000) == 0 && ((uVar28 & 0xf0000) == 0xf0000)))) &&
         ((uVar28 & 0xf00000) == 0)) {
        uVar33 = 0xe0;
        if ((uVar17 & 0xff) == 0) {
          uVar33 = 0x20;
        }
        uVar28 = uVar28 & 0x7ff;
        if (uVar28 < uVar33) {
          uVar12 = (ulonglong)(byte)(uVar20 & uVar32);
          if ((uVar20 & uVar32) != 0) {
            uVar20 = uVar28 * 4;
            *(byte *)(param_3 + (ulonglong)uVar28 + 0x331) = bVar3;
            *(uint *)(param_3 + (ulonglong)uVar20 * 4 + 0x414) = param_1[2];
            *(uint *)(param_3 + (ulonglong)(uVar20 + 1) * 4 + 0x414) = param_1[3];
            *(uint *)(param_3 + (ulonglong)(uVar20 + 2) * 4 + 0x414) = param_1[4];
            *(uint *)(param_3 + (ulonglong)(uVar20 + 3) * 4 + 0x414) = param_1[5];
          }
          goto LAB_1800cca64;
        }
      }
LAB_1800cca60:
      uVar12 = 0;
    }
LAB_1800cca64:
    param_1 = param_1 + 6;
    local_198 = param_1;
  }
LAB_1800ccd78:
  iVar26 = (int)uVar14;
  lVar34 = local_a8;
  if ((int)uVar12 == 0) goto LAB_1800ccd90;
  goto LAB_1800cbcac;
}


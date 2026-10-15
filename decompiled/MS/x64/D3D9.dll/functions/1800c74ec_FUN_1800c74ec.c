/*
 * FUN_1800c74ec at 1800c74ec
 * undefined8 __fastcall FUN_1800c74ec(uint * param_1, undefined2 param_2, undefined1 * param_3, undefined4 * param_4)
 * Address ranges: 1800c74ec-1800c875e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800c74ec(uint *param_1,undefined2 param_2,undefined1 *param_3,undefined4 *param_4)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  char cVar22;
  uint uVar23;
  undefined1 *puVar24;
  bool bVar25;
  uint local_res10 [2];
  undefined1 *local_res18;
  undefined4 *local_res20;
  uint local_214;
  uint local_210;
  int local_20c;
  uint local_208 [4];
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  uint *local_1e8;
  uint local_1e0;
  uint *local_1d8;
  uint local_1d0 [6];
  char local_1b8;
  undefined4 *local_1b0;
  uint local_1a8;
  undefined1 *local_1a0;
  uint local_198;
  uint *local_190;
  undefined8 local_188;
  int local_180 [32];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  uint uStack_ec;
  uint *puStack_e8;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined2 local_d0;
  undefined2 local_ce;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  uint local_80 [4];
  uint local_70 [4];
  uint auStack_60 [8];
  undefined7 extraout_var;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1800fbea0(param_3,0,0x4a70);
  uVar12 = *param_1;
  local_1b0 = &local_d8;
  local_d8 = 0x20000c;
  bVar25 = uVar12 + 0x1fe00 < 2;
  uVar6 = (ulonglong)bVar25;
  local_d4 = 0x200010;
  local_b4 = 0;
  local_190 = param_1 + 1;
  local_ac = 0;
  local_a4 = 0;
  local_1b8 = 0xfffe0200 < uVar12;
  local_94 = 0;
  local_1a8 = 0;
  local_198 = 0;
  local_188 = 0;
  local_cc = 0x10001;
  local_c8 = 0x30003;
  local_c4 = 0x20002;
  local_c0 = 0x80008;
  local_bc = 0x100010;
  local_a0 = 0x100010;
  local_9c = 0x10001;
  local_90 = 0x100010;
  local_8c = 0x10000;
  local_1a0 = param_3;
  local_d0 = param_2;
  local_ce = param_2;
  FUN_1800fbea0((undefined1 *)local_180,0,0x80);
  local_180[0] = 0;
  cVar22 = '\0';
  local_res10[0] = local_res10[0] & 0xffffff00;
  local_1a0[0x4a6d] = (char)uVar12;
  local_1a0[0x4a6c] = 2;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_ec = 0;
  puStack_e8 = (uint *)0x0;
  puVar24 = local_1a0;
  uVar12 = local_198;
  if (bVar25) {
    do {
      uVar9 = 0;
      param_4 = local_res20;
      param_3 = local_res18;
      local_1e8 = local_190;
      if (cVar22 != '\0') break;
      uVar8 = *local_190;
      uVar21 = uVar8 & 0xffff;
      uVar18 = uVar8 & 0xe0ff0000;
      local_100 = CONCAT44(uVar8,uVar8) & 0xffffffffffff;
      uVar23 = uVar8 & 0x10000000;
      bVar25 = uVar23 != 0;
      uStack_f8 = CONCAT44(1,uVar18);
      local_f0 = CONCAT13(bVar25,0x10f0f);
      *(int *)(puVar24 + 0x4a68) = *(int *)(puVar24 + 0x4a68) + 1;
      bVar14 = (byte)uVar6 & (uVar8 & 0xc0000000) == 0;
      if (uVar21 == 0x1f) {
        uVar8 = local_190[2];
        uVar21 = local_190[1];
        uVar23 = uVar8 & 0x7ff;
        if ((uVar12 != 0) || (bVar7 = 1, bVar25)) {
          bVar7 = 0;
        }
        if ((((((uVar18 != 0) || (-1 < (int)uVar8)) ||
              (((byte)(uVar8 >> 0x1c) & 7 | (byte)(uVar8 >> 8) & 0x18) != 1)) ||
             (((uVar8 & 0xfff0000) != 0xf0000 ||
              (*(ushort *)((longlong)local_1b0 + (ulonglong)(puVar24[0x4a6d] != '\0') * 2 + 4) <=
               uVar23)))) || ((uVar21 & 0xfff0fff0) != 0x80000000)) ||
           (bVar17 = 1, 0xd < ((byte)uVar21 & 0xf))) {
          bVar17 = 0;
        }
        bVar17 = bVar17 & bVar7 & bVar14;
        if (bVar17 != 0) {
          local_1a8 = local_1a8 | 1 << ((byte)uVar23 & 0x1f);
          puVar24[uVar23] = (byte)(uVar21 >> 0x10) & 0xf ^ (byte)uVar21 << 4;
        }
        local_1e8 = local_190 + 3;
LAB_1800c864c:
        uVar6 = (ulonglong)bVar17;
LAB_1800c864f:
        cVar22 = (char)local_res10[0];
      }
      else {
        cVar22 = '\x01';
        if (uVar21 == 0x2f) {
          uVar8 = local_190[1];
          if ((uVar12 != 0) || (bVar7 = 1, bVar25)) {
            bVar7 = 0;
          }
          if ((((uVar18 != 0) || (-1 < (int)uVar8)) ||
              (((byte)(uVar8 >> 0x1c) & 7 | (byte)(uVar8 >> 8) & 0x18) != 0xe)) ||
             (bVar17 = 1, (uVar8 & 0xfff07f0) != 0xf0000)) {
            bVar17 = 0;
          }
          bVar17 = bVar17 & bVar7 & bVar14;
          uVar6 = (ulonglong)bVar17;
          if (bVar17 != 0) {
            puVar24[(ulonglong)(uVar8 & 0x7ff) + 0x49d8] = 1;
            *(uint *)(puVar24 + (ulonglong)(uVar8 & 0x7ff) * 4 + 0x49e8) = local_190[2];
          }
          local_1e8 = local_190 + 3;
          goto LAB_1800c864f;
        }
        if (uVar21 == 0x30) {
          uVar8 = local_190[1];
          if ((uVar12 != 0) || (bVar7 = 1, bVar25)) {
            bVar7 = 0;
          }
          if (((uVar18 != 0) || (-1 < (int)uVar8)) ||
             ((((byte)(uVar8 >> 0x1c) & 7 | (byte)(uVar8 >> 8) & 0x18) != 7 ||
              (((uVar8 & 0xfff0000) != 0xf0000 ||
               (bVar17 = 1, (uVar8 & 0x7f0) != 0 || local_190[5] != 0)))))) {
            bVar17 = 0;
          }
          bVar17 = bVar17 & bVar7 & bVar14;
          uVar6 = (ulonglong)bVar17;
          if (bVar17 != 0) {
            puVar24[(ulonglong)(uVar8 & 0x7ff) + 0x48c5] = 1;
            do {
              uVar21 = (int)uVar9 + 1;
              *(uint *)(puVar24 + (ulonglong)((uVar8 & 0x7ff) * 4 + (int)uVar9) * 4 + 0x48d8) =
                   local_190[uVar9 + 2];
              uVar9 = (ulonglong)uVar21;
            } while ((int)uVar21 < 4);
          }
          local_1e8 = local_190 + 6;
          goto LAB_1800c864f;
        }
        if (uVar21 == 0x51) {
          uVar8 = local_190[1];
          uVar21 = uVar8 & 0x7ff;
          if ((uVar12 != 0) || (bVar7 = 1, bVar25)) {
            bVar7 = 0;
          }
          if ((((uVar18 != 0) || (-1 < (int)uVar8)) ||
              (((byte)(uVar8 >> 0x1c) & 7 | (byte)(uVar8 >> 8) & 0x18) != 2)) ||
             (((uVar8 & 0xfff0000) != 0xf0000 ||
              (bVar17 = 1,
              *(ushort *)((longlong)local_1b0 + (ulonglong)(puVar24[0x4a6d] != '\0') * 2 + 8) <=
              uVar21)))) {
            bVar17 = 0;
          }
          bVar17 = bVar17 & bVar7 & bVar14;
          if (bVar17 != 0) {
            uVar8 = local_190[2];
            uVar13 = uVar21 * 4;
            uVar18 = local_190[3];
            uVar23 = local_190[4];
            uVar20 = local_190[5];
            puVar24[(ulonglong)uVar21 + 0x44f] = 1;
            *(uint *)(puVar24 + (ulonglong)uVar13 * 4 + 0x850) = uVar8;
            *(uint *)(puVar24 + (ulonglong)(uVar13 + 1) * 4 + 0x850) = uVar18;
            *(uint *)(puVar24 + (ulonglong)(uVar13 + 2) * 4 + 0x850) = uVar23;
            *(uint *)(puVar24 + (ulonglong)(uVar13 + 3) * 4 + 0x850) = uVar20;
          }
          local_1e8 = local_190 + 6;
          goto LAB_1800c864c;
        }
        if (uVar21 == 0xfffe) {
          uVar6 = uVar9;
          if (uVar23 == 0) {
            uVar6 = (ulonglong)bVar14;
          }
          local_1e8 = local_190 + ((uVar8 >> 0x10) + 1);
          goto LAB_1800c864f;
        }
        if (uVar21 != 0xffff) {
          bVar7 = 0;
          if (uVar21 < 0x61) {
            bVar7 = bVar14;
          }
          bVar14 = 0;
          if (((uVar8 & 0xff0000) == 0) ||
             (((bVar17 = bVar14, uVar21 - 0x29 < 0x36 &&
               ((0x20000000000011U >> ((ulonglong)(uVar21 - 0x29) & 0x3f) & 1) != 0)) &&
              ((uVar8 & 0xff0000) < 0x60001)))) {
            bVar17 = (uVar8 & 0xe0000000) == 0 & bVar7;
          }
          local_88 = (longlong)(char)(&DAT_1800ffb90)[uVar21];
          if ((((&DAT_1800ffb90)[uVar21] != -1) &&
              ((((&DAT_1800ffc20)[local_88 * 0xc] & 8) == 0 || (local_1b8 != '\0')))) &&
             ((!bVar25 ||
              ((((&DAT_1800ffc20)[local_88 * 0xc] & 4) == 0 &&
               ((*(short *)(&DAT_1800ffc26 + local_88 * 0xc) != 0 ||
                (*(short *)(&DAT_1800ffc24 + local_88 * 0xc) != 0)))))))) {
            bVar14 = 1;
          }
          local_88 = local_88 * 0xc;
          puVar1 = local_190 + 1;
          uVar12 = *puVar1;
          uVar2 = *(ushort *)(&DAT_1800ffc24 + local_88);
          if ((uVar2 == 0) || ((int)uVar12 < 0)) {
            bVar14 = bVar14 & bVar17;
          }
          else {
            bVar14 = 0;
          }
          uVar18 = 0;
          if ((!bVar25) || (bVar7 = 0, local_1b8 != '\0')) {
            bVar7 = 1;
          }
          if ((bVar7 & bVar14) != 0) {
            local_1f0 = 0;
            if (local_198 == 0) {
              puStack_e8 = local_190;
            }
            local_198 = local_198 + (byte)(&DAT_1800ffc21)[local_88];
            bVar14 = -(local_198 < 0x100) & bVar7 & bVar14;
            uVar6 = (ulonglong)bVar14;
            if (uVar2 == 0) {
              local_214 = 0;
              local_210 = 0;
              local_1e0 = local_1e0 & 0xffffff00;
              local_1d8 = puVar1;
            }
            else {
              local_214 = uVar12 & 0x7ff;
              uVar21 = (uVar12 >> 0x14 & 0x700 | uVar12 & 0x1800) >> 8;
              if (((local_214 <
                    *(ushort *)
                     ((longlong)local_1b0 +
                     (ulonglong)((uint)(puVar24[0x4a6d] != '\0') + uVar21 * 2) * 2)) &&
                  ((uVar12 & 0xf000000) == 0)) &&
                 (bVar14 = (uVar12 & 0xf00000) == 0 & bVar14, bVar14 != 0)) {
                uVar3 = *(ushort *)(&DAT_1800ffbf8 + (ulonglong)uVar21 * 2);
                local_1f0 = (uint)uVar3;
                uVar6 = (ulonglong)(-((uVar2 & uVar3) != 0) & bVar14);
                uVar18 = (uint)uVar3;
              }
              else {
                uVar6 = 0;
                uVar18 = 0;
              }
              local_210 = 0xf0000;
              if ((uVar12 & 0xf0000) != 0) {
                local_210 = uVar12 & 0xf0000;
              }
              local_1e0 = local_210 >> 0x10;
              local_1d8 = local_190 + 2;
              puVar24 = local_1a0;
              uVar21 = local_100._4_4_;
            }
            if (bVar25) {
              uVar12 = *local_1d8 & 0xff0000;
              bVar14 = 0;
              if (((-1 < (int)*local_1d8) ||
                  (((byte)(*local_1d8 >> 0x1c) & 7 | (byte)(*local_1d8 >> 8) & 0x18) != 0x13)) ||
                 (bVar7 = 1, (*local_1d8 & 0x7ff) != 0)) {
                bVar7 = bVar14;
              }
              if (((*local_1d8 & 0xf000000) == 0) || ((*local_1d8 & 0xf000000) == 0xd000000)) {
                bVar14 = bVar7 & (byte)uVar6;
              }
              if ((((uVar12 == 0xe40000) || (uVar12 == 0)) || (uVar12 == 0x550000)) ||
                 ((uVar12 == 0xaa0000 || (bVar7 = 0, uVar12 == 0xff0000)))) {
                bVar7 = 1;
              }
              uVar6 = (ulonglong)(bVar7 & bVar14);
              if ((bVar7 & bVar14) != 0) {
                local_1d8 = local_1d8 + 1;
                local_190 = puVar1;
              }
            }
            local_1f4 = 1;
            if (uVar21 == 0x14) {
LAB_1800c79c7:
              local_1f4 = 4;
            }
            else if (uVar21 == 0x15) {
LAB_1800c79c0:
              local_1f4 = 3;
            }
            else {
              if (uVar21 == 0x16) goto LAB_1800c79c7;
              if (uVar21 == 0x17) goto LAB_1800c79c0;
              if (uVar21 == 0x18) {
                local_1f4 = 2;
              }
            }
            uStack_f8 = CONCAT44(local_1f4,uVar8) & 0xffffffffe0ff0000;
            local_1d0[0] = 0;
            local_1d0[1] = 0;
            local_1d0[2] = 0;
            local_208[0] = 0;
            local_208[1] = 0;
            local_208[2] = 0;
            auStack_60[1] = 0;
            local_80[0] = 0;
            local_80[1] = 0;
            local_80[2] = 0;
            local_70[0] = 0;
            local_70[1] = 0;
            local_70[2] = 0;
            local_1e8 = local_190;
            uVar12 = 0;
            uVar8 = 0;
            if ((char)uVar6 != '\0') {
              local_20c = 0;
              uVar9 = 0;
              bVar14 = -(uVar23 != 0) & 0x80;
              do {
                lVar4 = local_88;
                uVar12 = (uint)uVar9;
                if (2 < uVar12) break;
                uVar2 = *(ushort *)(&DAT_1800ffc26 + uVar9 * 2 + local_88);
                if (uVar2 == 0) break;
                uVar8 = local_1d8[uVar12 + local_20c];
                local_208[uVar9] = uVar8 & 0x7ff;
                uVar21 = uVar8 >> 0x14 & 0x700 | uVar8 & 0x1800;
                uVar23 = uVar8 & 0xf000000;
                auStack_60[uVar9] = uVar23;
                local_80[uVar9] = uVar8 & 0xff0000;
                uVar18 = uVar21 >> 8;
                cVar22 = local_1a0[0x4a6d];
                if (((uVar23 == 0) ||
                    ((uVar23 == 0x1000000 && ((uVar21 < 0x100 || (uVar18 - 1 < 2)))))) ||
                   ((uVar23 == 0xd000000 && ((uVar18 == 0x13 || (uVar18 == 0xe)))))) {
                  bVar7 = -((uVar8 & 0x7ff) <
                           (uint)*(ushort *)
                                  ((longlong)local_1b0 +
                                  (ulonglong)((uint)(cVar22 != '\0') + uVar18 * 2) * 2)) &
                          (byte)(uVar8 >> 0x1f) & (byte)uVar6;
                }
                else {
                  bVar7 = 0;
                }
                bVar15 = 0;
                uVar8 = uVar8 & 0x2000;
                bVar17 = 0;
                if ((uVar8 == 0) || (bVar10 = bVar15, uVar18 == 2)) {
                  bVar10 = 1;
                }
                bVar16 = bVar15;
                if ((bVar10 & bVar7) != 0) {
                  uVar3 = *(ushort *)(&DAT_1800ffbf8 + (ulonglong)uVar18 * 2);
                  local_1d0[uVar9] = (uint)uVar3;
                  bVar7 = -((uVar2 & uVar3) != 0) & bVar10 & bVar7;
                  if (((uVar2 >> 0xe & 1) != 0) && (uVar23 != 0)) {
                    bVar7 = 0;
                  }
                  if (((uVar2 & 0x2000) == 0) || (bVar10 = bVar17, local_80[uVar9] == 0xe40000)) {
                    bVar10 = 1;
                  }
                  uVar21 = local_80[uVar9] & 0xff0000;
                  if ((((uVar21 == 0) || (uVar21 == 0x550000)) || (uVar21 == 0xaa0000)) ||
                     (uVar21 == 0xff0000)) {
                    bVar17 = 1;
                  }
                  if (((uVar2 >> 0xc & 1) == 0) || (bVar17 != 0)) {
                    bVar16 = bVar10 & bVar7;
                  }
                  if (uVar8 != 0) {
                    uVar21 = local_1d8[uVar12 + local_20c + 1];
                    uVar23 = (uVar21 >> 0x14 & 0x700 | uVar21 & 0x1800) >> 8;
                    uVar18 = uVar21 & 0xff0000;
                    uVar20 = uVar21 & 0x7ff;
                    if (uVar23 == 3) {
                      if ((uVar18 == 0) ||
                         (((uVar18 == 0x550000 || (uVar18 == 0xaa0000)) || (uVar18 == 0xff0000)))) {
LAB_1800c7c5e:
                        bVar15 = 1;
                      }
                    }
                    else if ((uVar23 == 0xf) && (uVar18 == 0xe40000)) goto LAB_1800c7c5e;
                    if ((uVar20 < *(ushort *)
                                   ((longlong)local_1b0 +
                                   (ulonglong)((uint)(cVar22 != '\0') + uVar23 * 2) * 2)) &&
                       ((uVar21 & 0xf000000) == 0)) {
                      bVar16 = bVar15 & bVar16;
                    }
                    else {
                      bVar16 = 0;
                    }
                    if (uVar23 == 3) {
                      local_1a0[(ulonglong)uVar20 + 0x40] =
                           local_1a0[(ulonglong)uVar20 + 0x40] | (byte)(1 << (uVar21 >> 0x10 & 3)) |
                           (byte)(1 << (uVar21 >> 0x12 & 3)) | (byte)(1 << (uVar21 >> 0x14 & 3)) |
                           (byte)(1 << (uVar21 >> 0x16 & 3));
                    }
                    local_20c = local_20c + 1;
                    local_70[uVar9] = uVar21;
                  }
                }
                bVar17 = (byte)local_1e0;
                bVar7 = (&DAT_1800ffc23)[local_88] & bVar17;
                if ((&DAT_1800ffc22)[local_88] == '\0') {
                  bVar7 = (&DAT_1800ffc23)[local_88];
                }
                local_1f8 = uVar8;
                bVar7 = FUN_1800c6d80(local_80[uVar9],bVar7);
                bVar15 = 0;
                if (local_100._4_4_ != 0x1e) {
                  uVar21 = local_1f4;
                  if ((uVar12 != 2) &&
                     (*(short *)(&DAT_1800ffc26 + (ulonglong)(uVar12 + 1) * 2 + lVar4) != 0)) {
                    uVar21 = 1;
                  }
                  uVar18 = 0;
                  do {
                    uVar23 = local_1d0[uVar9];
                    if (uVar23 == 1) {
                      local_1a0[(ulonglong)(local_208[uVar9] + uVar18) + 0x10] =
                           local_1a0[(ulonglong)(local_208[uVar9] + uVar18) + 0x10] | bVar7;
LAB_1800c7e3c:
                      bVar15 = 0xf;
                    }
                    else {
                      if (uVar23 == 2) {
                        local_1a0[(ulonglong)(local_208[uVar9] + uVar18) + 0x41] =
                             local_1a0[(ulonglong)(local_208[uVar9] + uVar18) + 0x41] | bVar7;
                        goto LAB_1800c7e3c;
                      }
                      if (uVar23 == 4) {
                        local_1a0[(ulonglong)(local_208[uVar9] + uVar18) + 0x20] =
                             local_1a0[(ulonglong)(local_208[uVar9] + uVar18) + 0x20] | bVar7;
                        goto LAB_1800c7e3c;
                      }
                      if (uVar23 == 8) {
                        local_1a0[(ulonglong)(local_208[uVar9] + uVar18) + 0x4893] =
                             local_1a0[(ulonglong)(local_208[uVar9] + uVar18) + 0x4893] | bVar7;
                        goto LAB_1800c7e3c;
                      }
                      if (uVar23 == 0x10) {
                        local_1a0[(ulonglong)(local_208[uVar9] + uVar18) + 0x48a3] = 1;
                        goto LAB_1800c7e3c;
                      }
                      if (uVar23 == 0x20) {
                        local_1a0[(ulonglong)(local_208[uVar9] + uVar18) + 0x48b3] =
                             local_1a0[(ulonglong)(local_208[uVar9] + uVar18) + 0x48b3] | bVar7;
                        goto LAB_1800c7e3c;
                      }
                      if (uVar23 == 0x40) {
                        local_1a0[(ulonglong)(local_208[uVar9] + uVar18) + 0x40] =
                             local_1a0[(ulonglong)(local_208[uVar9] + uVar18) + 0x40] | bVar7;
LAB_1800c7dd0:
                        local_1a0[(ulonglong)(local_208[uVar9] + uVar18) + 0x48c4] = 1;
                        goto LAB_1800c7e3c;
                      }
                      if (uVar23 == 0x80) goto LAB_1800c7dd0;
                      if (uVar23 == 0x100) {
                        local_1a0[(ulonglong)(local_208[uVar9] + uVar18) + 0x48b4] = 1;
                        goto LAB_1800c7e3c;
                      }
                    }
                    uVar18 = uVar18 + 1;
                  } while (uVar18 < uVar21);
                }
                if ((uVar8 == 0) || (bVar10 = 0, local_1d0[uVar9] == 2)) {
                  bVar10 = 1;
                }
                bVar11 = 0;
                if ((bVar15 & bVar7) == bVar7) {
                  bVar11 = bVar10;
                }
                uVar6 = (ulonglong)(bVar16 & bVar11);
                if (uVar8 != 0) {
                  local_1a0[0x44e] = 1;
                }
                if (local_1f0 == 4) {
                  local_1a0[(ulonglong)local_214 + 0x20] =
                       local_1a0[(ulonglong)local_214 + 0x20] | bVar17;
                }
                else if (local_1f0 == 0x20) {
                  local_1a0[(ulonglong)local_214 + 0x48b3] =
                       local_1a0[(ulonglong)local_214 + 0x48b3] | bVar17;
                }
                else if (local_1f0 == 0x40) {
                  local_1a0[(ulonglong)local_214 + 0x40] =
                       local_1a0[(ulonglong)local_214 + 0x40] | bVar17;
                }
                else if (local_1f0 == 0x200) {
                  local_1a0[(ulonglong)local_214 + 0x441] =
                       local_1a0[(ulonglong)local_214 + 0x441] | bVar14 | bVar17;
                }
                else if (local_1f0 == 0x400) {
                  local_1a0[(ulonglong)local_214 + 0x444] =
                       local_1a0[(ulonglong)local_214 + 0x444] | bVar14 | bVar17;
                }
                else if (local_1f0 == 0x800) {
                  local_1a0[(ulonglong)local_214 + 0x446] =
                       local_1a0[(ulonglong)local_214 + 0x446] | bVar14 | bVar17;
                }
                uVar9 = (ulonglong)(uVar12 + 1);
              } while ((bVar16 & bVar11) != 0);
              puVar24 = local_1a0;
              uVar12 = local_1d0[1];
              uVar8 = local_1d0[0];
              uVar18 = local_1f0;
              uVar21 = local_100._4_4_;
            }
            if (uVar21 < 0x61) {
              bVar14 = (byte)uVar6;
              if (uVar21 == 0x60) {
                for (uVar12 = 1; bVar7 = 0, uVar12 <= local_188._4_4_; uVar12 = uVar12 + 1) {
                  if (local_180[uVar12] - 1U < 2) goto LAB_1800c8188;
                }
LAB_1800c818b:
                uVar6 = (ulonglong)(bVar14 & bVar7);
              }
              else if (uVar21 < 0x25) {
                if (uVar21 == 0x24) {
                  if ((uVar18 == uVar8) && (local_214 == local_208[0])) {
                    bVar7 = 0;
                  }
                  else {
LAB_1800c8188:
                    bVar7 = 1;
                  }
                  goto LAB_1800c818b;
                }
                if (uVar21 < 0x1c) {
                  if (uVar21 == 0x1b) {
                    uVar6 = (ulonglong)(bVar14 & local_188._4_4_ < 0x20);
                    local_180[local_188._4_4_ + 1] = 1;
                    goto LAB_1800c801d;
                  }
                  if (uVar21 == 0x14) {
LAB_1800c7ff3:
                    bVar25 = local_210 == 0xf0000;
LAB_1800c7fe9:
                    if ((bVar25) && (auStack_60[1] == 0)) {
                      bVar25 = true;
                      goto LAB_1800c7fd6;
                    }
                  }
                  else {
                    if (uVar21 == 0x15) {
LAB_1800c7fde:
                      bVar25 = local_210 == 0x70000;
                      goto LAB_1800c7fe9;
                    }
                    if (uVar21 == 0x16) goto LAB_1800c7ff3;
                    if (uVar21 == 0x17) goto LAB_1800c7fde;
                    if (uVar21 != 0x18) goto LAB_1800c80c5;
                    if ((local_210 == 0x30000) && (bVar25 = true, auStack_60[1] == 0))
                    goto LAB_1800c7fd6;
                  }
                  bVar25 = false;
                }
                else {
                  if (uVar21 != 0x1c) {
                    if (uVar21 == 0x1d) {
                      bVar25 = local_180[local_188._4_4_] == 1;
                      goto LAB_1800c8141;
                    }
                    if (uVar21 == 0x1e) {
                      uVar6 = (ulonglong)(bVar14 & uStack_ec == 0x1c);
                      *(int *)(puVar24 + (ulonglong)local_208[0] * 4 + 0x4a28) =
                           (int)((longlong)local_1e8 - (longlong)param_1 >> 2);
                    }
                    else if (uVar21 == 0x21) {
                      if (((local_210 - 0x10000 & 0xfff8ffff) == 0) && (local_210 != 0x80000)) {
                        bVar25 = true;
                      }
                      else {
                        bVar25 = false;
                      }
                      if (((uVar18 != uVar8) || (local_214 != local_208[0])) &&
                         ((uVar18 != uVar12 || (local_214 != local_208[1])))) goto LAB_1800c7fd6;
                      uVar6 = 0;
                    }
                    goto LAB_1800c80c5;
                  }
                  bVar25 = local_180[local_188._4_4_] == 0;
                }
LAB_1800c7fd6:
                uVar6 = (ulonglong)(bVar14 & bVar25);
              }
              else {
                if (uVar21 == 0x25) {
                  if (((local_210 - 0x10000 & 0xfffcffff) == 0) && (local_210 != 0x40000)) {
                    bVar7 = 1;
                  }
                  else {
                    bVar7 = 0;
                  }
                  if ((uVar12 == local_1d0[2]) && (local_208[1] == local_208[2])) {
                    uVar6 = 0;
                  }
                  else {
                    uVar6 = (ulonglong)(bVar14 & bVar7);
                  }
                  goto LAB_1800c80c5;
                }
                if (uVar21 == 0x26) {
                  uVar6 = (ulonglong)(bVar14 & local_188._4_4_ < 0x20);
                  local_180[local_188._4_4_ + 1] = 2;
LAB_1800c801d:
                  local_188._4_4_ = local_188._4_4_ + 1;
                  local_188 = CONCAT44(local_188._4_4_,(int)local_188 + 1);
                  local_1e8 = local_190;
                  uVar21 = local_100._4_4_;
                }
                else {
                  if (uVar21 == 0x27) {
                    bVar25 = local_180[local_188._4_4_] == 2;
                  }
                  else {
                    if ((uVar21 == 0x28) || (uVar21 == 0x29)) {
                      uVar6 = (ulonglong)(bVar14 & local_188._4_4_ < 0x20);
                      local_180[local_188._4_4_ + 1] = 3;
                      goto LAB_1800c801d;
                    }
                    if (uVar21 == 0x2a) {
                      uVar6 = (ulonglong)(bVar14 & local_180[local_188._4_4_] == 3);
                      goto LAB_1800c80c5;
                    }
                    if (uVar21 != 0x2b) {
                      if (uVar21 == 0x2c) {
                        for (uVar12 = 1; bVar7 = 0, uVar12 <= local_188._4_4_; uVar12 = uVar12 + 1)
                        {
                          if (local_180[uVar12] == 1 || local_180[uVar12] == 2) goto LAB_1800c8188;
                        }
                      }
                      else {
                        if (uVar21 != 0x2d) goto LAB_1800c80c5;
                        for (uVar12 = 1; bVar7 = 0, uVar12 <= local_188._4_4_; uVar12 = uVar12 + 1)
                        {
                          if (local_180[uVar12] == 1 || local_180[uVar12] == 2) goto LAB_1800c8188;
                        }
                      }
                      goto LAB_1800c818b;
                    }
                    bVar25 = local_180[local_188._4_4_] == 3;
                  }
LAB_1800c8141:
                  uVar6 = (ulonglong)(bVar14 & bVar25);
                  local_188 = CONCAT44(local_188._4_4_ - 1,(int)local_188 + -1);
                }
              }
            }
LAB_1800c80c5:
            uVar9 = 0;
            if (*(short *)(&DAT_1800ffc24 + local_88) != 0) {
              local_1e8 = local_1e8 + 1;
            }
            if ((char)uVar6 != '\0') {
              while ((uVar12 = (uint)uVar9, uVar12 < 3 &&
                     (*(short *)(&DAT_1800ffc26 + uVar9 * 2 + local_88) != 0))) {
                if (((*(short *)(&DAT_1800ffc24 + local_88) != 0) || (uVar12 != 0)) &&
                   (local_70[uVar9] != 0)) {
                  local_1e8 = local_1e8 + 1;
                }
                local_1e8 = local_1e8 + 1;
                uVar9 = (ulonglong)(uVar12 + 1);
              }
            }
            local_1e8 = local_1e8 + 1;
            puVar24 = local_1a0;
            uVar12 = local_198;
            uStack_ec = uVar21;
            goto LAB_1800c864f;
          }
          uVar6 = 0;
          break;
        }
        uVar6 = uVar9;
        if (uVar23 == 0) {
          uVar6 = (ulonglong)(uVar18 == 0 && local_188._4_4_ == 0);
        }
        do {
          if (*(int *)(puVar24 + uVar9 * 4 + 0x4a28) != 0) {
            bVar25 = uStack_ec == 0x1c;
            goto LAB_1800c8378;
          }
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
        } while (uVar8 < 0x10);
        bVar25 = (bool)(bVar14 & (byte)uVar6);
LAB_1800c8378:
        uVar6 = (ulonglong)bVar25;
        local_1e8 = local_190 + 1;
        local_res10[0] = CONCAT31(local_res10[0]._1_3_,1);
      }
      param_4 = local_res20;
      param_3 = local_res18;
      local_190 = local_1e8;
    } while ((char)uVar6 != '\0');
  }
  puVar1 = local_190;
  uVar9 = 0;
  uVar5 = uVar9;
  do {
    if ((*(int *)(param_3 + uVar5 * 4 + 0x4a28) == 0) ||
       (bVar14 = 0, param_3[uVar5 + 0x48b4] != '\0')) {
      bVar14 = 1;
    }
    bVar14 = (byte)uVar6 & bVar14;
    uVar6 = (ulonglong)bVar14;
    uVar5 = uVar5 + 1;
  } while (uVar5 != 0x10);
  while ((bVar14 != 0 && (uVar12 = (uint)uVar9, uVar12 < 0x10))) {
    if ((param_3[uVar9 + 0x10] == '\0') || (bVar14 = 0, (local_1a8 >> (uVar12 & 0x1f) & 1) != 0)) {
      bVar14 = 1;
    }
    bVar14 = (byte)uVar6 & bVar14;
    uVar6 = (ulonglong)bVar14;
    uVar9 = (ulonglong)(uVar12 + 1);
  }
  bVar14 = 0;
  if ((param_3[0x441] & 0xf) == 0xf) {
    bVar14 = (byte)uVar6;
  }
  bVar25 = false;
  if (bVar14 != 0) {
    puVar19 = (uint *)&DAT_180104e90;
    if (local_1b8 == '\0') {
      puVar19 = (uint *)&DAT_180104ea8;
    }
    local_res10[0] = 0;
    bVar25 = FUN_1800c6e04((longlong)param_1,puStack_e8,(longlong)(param_3 + 0x4a28),puVar19,
                           local_res10);
    uVar6 = CONCAT71(extraout_var,bVar25);
    *param_4 = (int)((longlong)puVar1 - (longlong)param_1 >> 2);
    param_3[0x4886] = (char)local_res10[0];
  }
  return CONCAT71((int7)(uVar6 >> 8),bVar25);
}


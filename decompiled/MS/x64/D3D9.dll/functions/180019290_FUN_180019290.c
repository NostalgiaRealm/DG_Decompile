/*
 * FUN_180019290 at 180019290
 * byte __fastcall FUN_180019290(int * param_1, undefined8 * param_2, undefined4 * param_3)
 * Address ranges: 180019290-18001a50d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte FUN_180019290(int *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint *puVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  uint *puVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  char cVar18;
  int iVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  byte bVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  bool bVar27;
  byte local_res20 [8];
  byte local_1410;
  byte bStack_140f;
  undefined1 auStack_140d [2];
  byte abStack_140b [3];
  undefined4 local_1408;
  int local_1400;
  uint local_13fc;
  byte local_13f8 [16];
  byte local_13e8 [16];
  uint local_13d8;
  uint local_13d0;
  uint local_13cc;
  uint local_13c8;
  char *local_13c0;
  uint *local_13b8;
  int *local_13a0;
  longlong local_1398;
  longlong local_1390;
  ulonglong local_1388;
  byte local_1378 [10];
  byte local_136e [32];
  byte abStack_134e [8];
  byte abStack_1346 [6];
  byte abStack_1340 [760];
  undefined1 local_1048;
  undefined1 auStack_1047 [227];
  undefined8 auStack_f64 [448];
  uint local_164;
  int local_160;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined8 local_12c;
  undefined8 uStack_124;
  byte abStack_11c [16];
  byte local_10c;
  undefined1 local_10b;
  byte local_10a;
  char acStack_108 [6];
  char acStack_102 [89];
  char local_a9;
  byte local_82;
  undefined2 local_81;
  byte local_7f;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  byte local_64;
  byte local_63;
  byte local_62;
  undefined8 local_61;
  undefined1 local_59;
  undefined4 local_58;
  char local_54;
  undefined8 uStack_48;
  
  uStack_48 = 0x1800192b8;
  FUN_1800fbea0(local_1378,0,0x1328);
  local_13b8 = (uint *)0x0;
  iVar19 = *param_1;
  local_13a0 = param_1;
  puVar13 = (uint *)(param_1 + 1);
  local_10a = (byte)iVar19;
  bVar20 = iVar19 + 0xff00U < 5;
  local_10b = (undefined1)((uint)iVar19 >> 8);
  local_15c = 0xffffffffffffffff;
  uStack_154 = 0xffffffffffffffff;
  local_14c = 0xffffffffffffffff;
  uStack_144 = 0xffffffffffffffff;
  local_13c = 0xffffffffffffffff;
  uStack_134 = 0xffffffffffffffff;
  local_12c = 0xffffffffffffffff;
  uStack_124 = 0xffffffffffffffff;
  if (iVar19 == -0xfefc) {
    local_1400 = 1;
    puVar9 = puVar13;
LAB_180019353:
    do {
      uVar5 = *puVar9 & 0xffff;
      iVar19 = 1;
      if (uVar5 < 0x42) {
        if (uVar5 == 0x41) {
LAB_1800193e6:
          puVar9 = puVar9 + 2;
        }
        else {
          if (uVar5 < 6) {
            if (uVar5 != 5) {
              if (uVar5 == 0) {
LAB_1800193d4:
                puVar9 = puVar9 + 1;
                goto LAB_180019353;
              }
              if (uVar5 == 1) goto LAB_18001939c;
              if ((uVar5 != 2) && (uVar5 != 3)) {
                iVar19 = 1;
                if (uVar5 == 4) goto LAB_180019382;
                goto LAB_180019400;
              }
            }
          }
          else if ((uVar5 != 8) && (uVar5 != 9)) {
            if (uVar5 == 0x12) goto LAB_180019382;
            if (uVar5 == 0x40) goto LAB_18001939c;
            goto LAB_180019400;
          }
LAB_1800193dd:
          puVar9 = puVar9 + 4;
        }
        goto LAB_180019353;
      }
      if (uVar5 == 0x42) {
LAB_18001939c:
        puVar9 = puVar9 + 3;
        goto LAB_180019353;
      }
      if (uVar5 == 0x50) {
LAB_180019382:
        puVar9 = puVar9 + 5;
        goto LAB_180019353;
      }
      if (uVar5 != 0x51) {
        if (uVar5 == 0x57) goto LAB_1800193e6;
        if (uVar5 == 0x58) goto LAB_180019382;
        if (uVar5 == 0x59) goto LAB_1800193dd;
        if (uVar5 == 0xfffd) break;
        if (uVar5 == 0xfffe) {
          puVar9 = puVar9 + *(ushort *)((longlong)puVar9 + 2);
          goto LAB_1800193d4;
        }
        goto LAB_180019400;
      }
      puVar9 = puVar9 + 6;
    } while( true );
  }
  iVar19 = 0;
  local_1400 = 0;
LAB_180019400:
  bVar3 = false;
  puVar9 = puVar13;
  cVar18 = local_54;
  if (bVar20) {
    do {
      puVar9 = puVar13;
      if (bVar3) break;
      uVar5 = *puVar13;
      local_1410 = 0;
      bStack_140f = 0;
      _auStack_140d = 0;
      local_1408 = 0;
      local_13c8 = uVar5 & 0xffff0000;
      local_1388 = (ulonglong)uVar5;
      bVar20 = (bool)(bVar20 & ((byte)(uVar5 >> 0x1f) ^ 1));
      uVar8 = uVar5 & 0xffff;
      if ((uVar5 & 0xffff) == 0) {
        if ((local_13c8 == 0) && (cVar18 == '\0')) {
          bVar20 = true;
        }
        else {
          bVar20 = false;
        }
LAB_18001a43f:
        puVar9 = puVar13 + 1;
LAB_18001a443:
        local_78 = local_7c;
        local_70 = local_74;
        local_68 = local_6c;
        local_7c = *puVar13;
        local_74 = puVar13[1];
        local_6c = puVar13[2];
      }
      else {
        if (uVar8 == 0x51) {
          if (local_82 == 0 && local_13c8 == 0) {
            uVar5 = puVar13[1];
            bVar17 = (byte)(uVar5 >> 0x18);
            bVar14 = bVar17 >> 7 & bVar20;
            if (bVar14 != 0) {
              bVar16 = 0;
              if ((uVar5 & 0x7f8) == 0) {
                bVar16 = bVar14;
              }
              if (((uVar5 & 0xf0000) == 0) || ((uVar5 & 0xf0000) == 0xf0000)) {
                bVar14 = 1;
              }
              else {
                bVar14 = 0;
              }
              bVar23 = 0;
              if ((uVar5 & 0xf00000) == 0) {
                bVar23 = bVar14;
              }
              bVar20 = (bool)(bVar16 & (bVar17 >> 4 & 7 | (byte)(uVar5 >> 8) & 0x18) == 2 & bVar23);
              if (bVar20 != false) {
                uVar1 = *(undefined8 *)(puVar13 + 2);
                uVar2 = *(undefined8 *)(puVar13 + 4);
                auStack_1047[uVar5 & 0x7ff] = 1;
                lVar12 = (ulonglong)((uVar5 & 0x7ff) << 2) * 4;
                *(undefined8 *)((longlong)auStack_f64 + lVar12) = uVar1;
                *(undefined8 *)((longlong)auStack_f64 + lVar12 + 8) = uVar2;
                puVar9 = puVar13 + 6;
                cVar18 = local_54;
              }
              goto LAB_18001a443;
            }
          }
          bVar20 = false;
          goto LAB_18001a443;
        }
        if (uVar8 == 0xfffd) {
          if ((local_10a != 4) || (iVar19 != 0 || local_13c8 != 0)) {
            bVar20 = false;
          }
          lVar12 = 0;
          do {
            local_136e[lVar12] = local_136e[lVar12] & 7;
            lVar12 = lVar12 + 1;
          } while (lVar12 != 6);
          local_1400 = iVar19 + 1;
          local_81 = 0;
          local_82 = 0;
          cVar18 = local_54;
          goto LAB_18001a43f;
        }
        if (uVar8 == 0xfffe) {
          puVar9 = puVar13 + ((uVar5 >> 0x10) + 1);
        }
        else if (uVar8 == 0xffff) {
          if ((local_13c8 == 0) && (cVar18 == '\0')) {
            bVar20 = true;
          }
          else {
            bVar20 = false;
          }
          puVar9 = puVar13 + 1;
          bVar3 = true;
        }
        else {
          bVar20 = false;
          if ((&DAT_1801011f0)[(ushort)uVar5] != -1) {
            uVar10 = (ulonglong)local_10a;
            uVar24 = puVar13[1];
            local_1398 = (longlong)(char)(&DAT_1801011f0)[(ushort)uVar5] * 0x1c;
            local_13f8[8] = 1;
            local_13f8[9] = 2;
            local_13f8[10] = 4;
            local_13f8[0xb] = 8;
            local_13f8[0xc] = 0x10;
            bVar20 = (local_13f8[uVar10 + 8] & (&DAT_1800fdb14)[local_1398]) != 0;
            if (local_13c8 == 0) {
              if ((&DAT_1800fdb10)[local_1398] == '\0') {
                if ((&DAT_1800fdb11)[local_1398] != '\0') {
                  bVar26 = local_81._1_1_ < (byte)(&DAT_1800fde79)[uVar10 * 3];
                  goto LAB_180019528;
                }
              }
              else {
                bVar26 = (byte)local_81 < (byte)(&DAT_1800fde78)[uVar10 * 3];
LAB_180019528:
                bVar20 = (bool)(-bVar26 & bVar20);
              }
              bVar20 = (bool)(-(local_82 < (byte)(&DAT_1800fde7a)[uVar10 * 3]) & bVar20);
              if ((&DAT_1800fdb10)[local_1398] == '\0') {
                if ((&DAT_1800fdb11)[local_1398] != '\0') {
                  local_81 = CONCAT11(local_81._1_1_ + 1,(byte)local_81);
                  local_160 = local_160 + 1;
                  bVar20 = (bool)(bVar20 & (byte)local_81 == 0);
                }
              }
              else {
                local_81 = CONCAT11(local_81._1_1_,(byte)local_81 + 1);
              }
              local_82 = local_82 + 1;
            }
            local_13fc = 0;
            local_13f8[0] = 4;
            local_13f8[1] = 1;
            local_13f8[2] = 2;
            local_13f8[3] = 0x18;
            local_13f8[4] = 0;
            local_13f8[5] = 0;
            local_13f8[6] = 0;
            local_13f8[7] = 0;
            uVar22 = uVar24 & 0x7ff;
            uVar21 = (uVar24 >> 0x14 & 0x700 | uVar24 & 0x1800) >> 8;
            uVar6 = uVar24 >> 0x18 & 0xf;
            bVar17 = (byte)uVar22;
            if ((((((uVar6 == 0) || (uVar6 == 1)) || (uVar6 == 2)) ||
                 ((uVar6 == 3 || (uVar6 == 0xd)))) || ((uVar6 == 0xe || (uVar6 == 0xf)))) &&
               (bVar14 = -(uVar22 < (byte)(&DAT_1800fde88)[(uint)local_10a + uVar21 * 5]) &
                         (uVar24 & 0xe00000) == 0 & bVar20, bVar14 != 0)) {
              local_1410 = local_13f8[uVar21];
              if (local_1410 == 0x18) {
                if ((abStack_1346[uVar22] == 0) && ((&DAT_1800fdb10)[local_1398] == '\0')) {
                  local_13fc = 0x10;
                }
                else {
                  local_13fc = 8;
                }
              }
              else {
                local_13fc = (uint)local_1410;
              }
              bVar26 = (bool)(-(((&DAT_1800fdb15)[local_1398 + uVar10] & (byte)local_13fc) != 0) &
                             bVar14);
              bStack_140f = bVar17;
            }
            else {
              bVar26 = false;
            }
            uVar24 = uVar24 & 0xf0000;
            if (local_10a != 4) {
              if ((((uVar24 == 0x80000) || (uVar24 == 0x70000)) || (uVar24 == 0xf0000)) ||
                 (bVar14 = 0, uVar24 == 0)) {
                bVar14 = 1;
              }
              bVar26 = (bool)(bVar26 & bVar14);
            }
            bVar20 = bVar26;
            if ((((&DAT_1800fdb11)[local_1398] != '\0') && (local_13fc == 0x10)) &&
               (bVar20 = false, uVar24 == 0xf0000)) {
              bVar20 = bVar26;
            }
            local_13cc = 0xf0000;
            if (uVar24 != 0) {
              local_13cc = uVar24;
            }
            lVar12 = (ulonglong)(local_1400 + (uint)local_10a) + local_1398;
            local_13d8 = local_13cc >> 0x10;
            local_res20[0] = (&DAT_1800fdb1a)[lVar12];
            local_res20[1] = (&DAT_1800fdb20)[lVar12];
            local_res20[2] = (&DAT_1800fdb26)[lVar12];
            bVar14 = (byte)(local_13cc >> 0x10);
            local_13c0 = &DAT_1800fdb10 + local_1398;
            if (bVar20 == false) {
              bVar20 = false;
            }
            else {
              uVar10 = 0;
              local_13d0 = 0;
              do {
                uVar6 = (uint)uVar10;
                cVar18 = local_54;
                if ((2 < uVar6) || (bVar16 = local_res20[uVar10], bVar16 == 0)) break;
                bVar7 = 0;
                bVar23 = 0;
                uVar21 = puVar13[uVar6 + 2];
                uVar25 = uVar21 & 0x7ff;
                uVar11 = (uVar21 >> 0x14 & 0x700 | uVar21 & 0x1800) >> 8;
                bVar15 = -(uVar25 < (byte)(&DAT_1800fde88)[(uint)local_10a + uVar11 * 5]) &
                         (byte)(uVar21 >> 0x1f) & bVar20;
                if (bVar15 == 0) {
                  bVar15 = 0;
                }
                else {
                  bVar23 = local_13f8[uVar11];
                  lVar12 = uVar10 * 3;
                  local_1390 = lVar12;
                  auStack_140d[lVar12] = bVar23;
                  auStack_140d[lVar12 + 1] = (char)uVar25;
                  if (bVar23 == 0x18) {
                    uVar6 = (-(uint)(abStack_1346[uVar25] != 0) & 0xfffffff8) + 0x10;
                  }
                  else {
                    uVar6 = (uint)bVar23;
                  }
                  uVar11 = uVar21 & 0xff0000;
                  bVar15 = -((bVar16 & (byte)uVar6) != 0) & bVar15;
                  bVar23 = bVar15;
                  if (uVar8 == 0x42) {
                    if (local_10a == 4) {
                      if (uVar11 == 0xe40000) {
                        if ((uVar21 & 0xf000000) != 0) {
                          bVar20 = (uVar21 & 0xf000000) == 0x9000000;
LAB_18001989f:
                          if (!bVar20) {
LAB_1800198a1:
                            bVar15 = 0;
                            bVar23 = bVar15;
                          }
                        }
                      }
                      else {
                        if (uVar11 != 0xa40000) goto LAB_180019887;
                        if (((uVar21 & 0xf000000) != 0) && ((uVar21 & 0xf000000) != 0x9000000))
                        goto LAB_1800198a1;
                      }
                    }
                    else {
LAB_1800198b8:
                      bVar23 = bVar7;
                      if (((((uVar11 != 0xff0000) && (uVar11 != 0xe40000)) &&
                           ((uVar11 != 0xaa0000 || (local_10a == 0)))) &&
                          ((uVar11 != 0x550000 || (local_10a != 4)))) &&
                         ((uVar11 != 0 || (local_10a != 4)))) {
                        bVar15 = 0;
                      }
                    }
                  }
                  else {
                    if ((uVar8 != 0x40) || (local_10a != 4)) goto LAB_1800198b8;
                    if ((uVar11 - 0xa40000 & 0xffbfffff) == 0) {
                      bVar15 = bVar15 & (uVar21 & 0xf000000) == 0;
                      bVar23 = bVar15;
                    }
                    else {
LAB_180019887:
                      if (uVar11 != 0xf40000) goto LAB_1800198a1;
                      if ((uVar21 & 0xf000000) != 0) {
                        bVar20 = (uVar21 & 0xf000000) == 0xa000000;
                        goto LAB_18001989f;
                      }
                    }
                  }
                  bVar16 = (&DAT_1800fdb13)[local_1398] & (byte)local_13d8;
                  if ((&DAT_1800fdb12)[local_1398] == '\0') {
                    bVar16 = (&DAT_1800fdb13)[local_1398];
                  }
                  bVar7 = 0;
                  bVar16 = -((bVar16 & 4) != 0) & '\x01' << ((byte)(uVar11 >> 0x14) & 3) |
                           -((bVar16 & 2) != 0) & '\x01' << ((byte)(uVar11 >> 0x12) & 3) |
                           -((bVar16 & 1) != 0) & '\x01' << ((byte)(uVar11 >> 0x10) & 3) |
                           -((bVar16 & 8) != 0) & '\x01' << (sbyte)(uVar11 >> 0x16);
                  if (uVar6 == 1) {
                    local_1378[uVar25] = local_1378[uVar25] | bVar16;
LAB_1800199e5:
                    bVar7 = 0xf;
                  }
                  else {
                    if (uVar6 == 2) {
                      abStack_1340[uVar25] = abStack_1340[uVar25] | bVar16;
                      goto LAB_1800199e5;
                    }
                    if (uVar6 == 4) {
                      bVar7 = local_136e[uVar25];
                    }
                    else if (uVar6 == 8) {
                      bVar7 = abStack_1346[uVar25];
                      bVar15 = bVar15 & acStack_108[uVar25] == '\0';
                    }
                    else if (uVar6 == 0x10) {
                      abStack_134e[uVar25] = abStack_134e[uVar25] | bVar16;
                      goto LAB_1800199e5;
                    }
                  }
                  bVar15 = bVar15 & (bVar16 & bVar7) == bVar16;
                  abStack_140b[local_1390] = bVar16;
                  uVar6 = local_13d0;
                }
                local_13e8[0] = 1;
                local_13e8[1] = 1;
                local_13e8[2] = 1;
                local_13e8[3] = 1;
                local_13e8[4] = 1;
                local_13e8[5] = 1;
                local_13e8[6] = 1;
                local_13e8[7] = 1;
                local_13e8[8] = 1;
                local_13e8[9] = 1;
                local_13e8[10] = 1;
                local_13e8[0xb] = 0;
                local_13e8[0xc] = 0;
                local_13e8[0xd] = 0;
                local_13e8[0xe] = 0;
                local_13e8[0xf] = 0;
                if ((((uVar21 & 0xb000000) == 0) || (bVar23 != 0)) ||
                   (bVar20 = false, *local_13c0 != '\0')) {
                  bVar20 = (bool)(local_13e8[(uVar21 & 0xf000000) >> 0x18] & bVar15);
                }
                uVar10 = (ulonglong)(uVar6 + 1);
                local_13d0 = uVar6 + 1;
              } while (bVar20 != false);
            }
            if (local_13fc == 4) {
              local_136e[uVar22] = local_136e[uVar22] | (byte)local_13d8;
              cVar18 = local_54;
            }
            else if (local_13fc == 8) {
              if ((*local_13c0 != '\0') && (acStack_108[uVar22] != '\0')) {
                acStack_108[uVar22] = '\0';
                abStack_1346[uVar22] = 0;
              }
              abStack_1346[uVar22] = abStack_1346[uVar22] | (byte)local_13d8;
              cVar18 = local_54;
            }
            if (local_13c8 == 0x40000000) {
              *(int *)((longlong)&local_15c + (ulonglong)local_7f * 4) =
                   (int)((longlong)local_13b8 - (longlong)local_13a0 >> 2);
              uVar21 = local_74 & 0xf0000;
              if (uVar21 == 0) {
                uVar21 = 0xf0000;
LAB_180019b1b:
                uVar6 = puVar13[1];
                uVar11 = 0x80000;
                if (uVar24 != 0) {
                  uVar11 = uVar6 & 0x80000;
                }
                if ((uVar11 == 0) && (uVar21 == 0x80000)) goto LAB_180019b81;
                bVar16 = 0;
              }
              else {
                if (((local_74 & 0x80000) != 0) || (local_13cc != 0x80000)) goto LAB_180019b1b;
                uVar6 = puVar13[1];
LAB_180019b81:
                bVar16 = 1;
              }
              bVar20 = (bool)(bVar20 & bVar16);
              bVar26 = false;
              uVar10 = 0;
              do {
                bVar27 = !bVar26;
                if (!bVar27) goto LAB_180019b98;
                lVar12 = uVar10 * 3;
                if (((auStack_140d[lVar12] != local_64) || (auStack_140d[lVar12 + 1] != local_63))
                   || (bVar26 = true, (abStack_140b[lVar12] & local_62) == 0)) {
                  bVar26 = false;
                }
                uVar24 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar24;
              } while (uVar24 < 3);
              bVar27 = !bVar26;
LAB_180019b98:
              cVar18 = !bVar27;
              if (bVar26) {
                bVar26 = false;
                uVar10 = 0;
                do {
                  bVar27 = true;
                  if (bVar26) break;
                  lVar12 = uVar10 * 3;
                  if (((*(byte *)((longlong)&local_61 + lVar12) != local_1410) ||
                      (*(byte *)((longlong)&local_61 + lVar12 + 1) != bStack_140f)) ||
                     (bVar26 = true, (*(byte *)((longlong)&local_61 + lVar12 + 2) & bVar14) == 0)) {
                    bVar26 = false;
                  }
                  uVar24 = (int)uVar10 + 1;
                  uVar10 = (ulonglong)uVar24;
                  bVar27 = bVar26;
                } while (uVar24 < 3);
                if (bVar27) {
                  cVar18 = '\x02';
                }
              }
              abStack_11c[local_7f] = cVar18 << 4 | (byte)local_58;
              local_7f = local_7f + 1;
              cVar18 = local_54;
            }
            else {
              uVar6 = puVar13[1];
            }
            if (uVar8 < 0x48) {
              if (uVar8 == 0x47) {
                bVar26 = (bool)(-((puVar13[2] & 0x7ff) < uVar22) &
                               (local_7c - 0x47 & 0xfffffffd) != 0);
LAB_180019ef1:
                bVar20 = (bool)(bVar20 & bVar26);
LAB_180019ef4:
                abStack_1346[uVar22] = 0xf;
                abStack_134e[uVar22] = 0xf;
                local_54 = '\x01';
                cVar18 = '\x01';
              }
              else {
                if (uVar8 < 0x13) {
                  if ((((uVar8 != 0x12) && (uVar8 != 1)) && (uVar8 != 2)) && (uVar8 != 3)) {
                    if (((uVar8 == 4) || (uVar8 == 5)) || (uVar8 == 8)) {
                      bVar20 = (bool)(bVar20 & cVar18 == '\0');
                    }
                    else if (uVar8 == 9) {
                      bVar26 = (bool)(local_13c8 == 0 & bVar20);
                      if (local_10a == 2 || local_10a == 3) {
                        local_81 = CONCAT11(local_81._1_1_,(byte)local_81 + '\x01');
                        if (((uVar6 & 0x70001800) == (puVar13[2] & 0x70001800)) ||
                           ((uVar6 & 0x70001800) == (puVar13[3] & 0x70001800))) {
                          bVar26 = false;
                        }
                      }
                      bVar20 = false;
                      if (cVar18 == '\0') {
                        bVar20 = bVar26;
                      }
                    }
                    goto LAB_18001a255;
                  }
                }
                else if (uVar8 == 0x40) {
                  if (local_10a == 4) {
                    uVar8 = puVar13[2] & 0xf000000;
                    if (((local_13cc == 0x70000) && (uVar8 == 0)) ||
                       ((local_13cc == 0x30000 && (uVar8 == 0xa000000)))) {
                      bVar20 = true;
                    }
                    else {
                      bVar20 = false;
                    }
                    bVar17 = 7;
                    if (uVar8 == 0xa000000) {
                      bVar17 = 3;
                    }
                    local_136e[uVar22] = local_136e[uVar22] & bVar17;
                  }
                  else {
                    abStack_1346[uVar22] = 0xf;
                  }
                  abStack_134e[uVar22] = 0xf;
                  cVar18 = local_54;
                }
                else if (uVar8 == 0x41) {
                  abStack_1346[uVar22] = 0xf;
                  abStack_134e[uVar22] = 0xf;
                  acStack_108[uVar22] = '\x01';
                  cVar18 = local_54;
                }
                else {
                  if (uVar8 != 0x42) {
                    if (uVar8 == 0x43) {
                      bVar20 = (bool)((puVar13[2] & 0x7ff) < uVar22 & bVar20);
                      bVar26 = bVar20;
                      if ((local_10a < 2) && (bVar26 = false, (puVar13[2] & 0xf000000) == 0)) {
                        bVar26 = bVar20;
                      }
                      abStack_1346[uVar22] = 0xf;
                      abStack_134e[uVar22] = 0xf;
                    }
                    else {
                      if (uVar8 != 0x44) {
                        if ((uVar8 == 0x45) || (uVar8 == 0x46)) goto LAB_180019d1e;
                        goto LAB_18001a255;
                      }
                      bVar20 = (bool)((puVar13[2] & 0x7ff) < uVar22 & bVar20);
                      bVar26 = bVar20;
                      if ((local_10a < 2) && (bVar26 = false, (puVar13[2] & 0xf000000) == 0)) {
                        bVar26 = bVar20;
                      }
                      abStack_1346[uVar22] = 0xf;
                      abStack_134e[uVar22] = 0xf;
                    }
                    local_164 = local_164 | 1 << (bVar17 & 0x1f);
                    cVar18 = local_54;
                    bVar20 = false;
                    if (local_54 == '\0') {
                      bVar20 = bVar26;
                    }
                    goto LAB_18001a255;
                  }
                  if ((local_10a != 4) && (abStack_1346[uVar22] = 0xf, local_10a == 0)) {
                    local_82 = local_82 - 1;
                  }
                  abStack_134e[uVar22] = 0xf;
                  local_164 = local_164 | 1 << (bVar17 & 0x1f);
                  cVar18 = local_54;
                }
LAB_180019e49:
                bVar20 = (bool)(bVar20 & cVar18 == '\0');
              }
            }
            else if (uVar8 < 0x54) {
              if (uVar8 == 0x53) {
LAB_180019d1e:
                abStack_1346[uVar22] = 0xf;
              }
              else {
                if (uVar8 == 0x48) {
                  uVar8 = puVar13[2];
                  abStack_1346[uVar22] = 0xf;
                  bVar20 = (bool)(bVar20 & (local_7c == 0x47 &&
                                           ((uVar8 & 0x7ff) == (local_6c & 0x7ff) &&
                                           uVar22 - 1 == (local_74 & 0x7ff))));
                  abStack_134e[uVar22] = 0xf;
                  local_164 = local_164 | 1 << (bVar17 & 0x1f);
                  goto LAB_18001a245;
                }
                if (uVar8 == 0x49) {
                  if (local_7c != 0x47) {
                    if (local_7c != 0x49) {
                      bVar26 = (puVar13[2] & 0x7ff) < uVar22;
                      goto LAB_180019ef1;
                    }
                    if ((local_78 - 0x47 & 0xfffffffd) != 0) {
                      bVar20 = (bool)(bVar20 & ((puVar13[2] & 0x7ff) == (local_6c & 0x7ff) &&
                                               uVar22 - 1 == (local_74 & 0x7ff)));
                      goto LAB_180019ef4;
                    }
                  }
                  bVar20 = false;
                  goto LAB_180019ef4;
                }
                if (((uVar8 == 0x4a) || (uVar8 == 0x4c)) || (uVar8 == 0x4d)) {
                  if ((local_7c == 0x49) && (local_78 == 0x49)) {
                    bVar23 = 1;
                  }
                  else {
                    bVar23 = 0;
                  }
                  uVar8 = puVar13[2];
                  abStack_1346[uVar22] = 0xf;
                  abStack_134e[uVar22] = 0xf;
                  bVar16 = 0;
                  if (uVar22 - 1 == (local_74 & 0x7ff)) {
                    bVar16 = bVar23;
                  }
                  bVar16 = (uVar8 & 0x7ff) == (local_6c & 0x7ff) & bVar16;
                  local_164 = local_164 | 1 << (bVar17 & 0x1f);
                  goto LAB_18001a000;
                }
                if (uVar8 == 0x50) {
                  if (local_10a != 4) {
                    if (((puVar13[2] & 0x7ff) == 0) && ((puVar13[2] & 0xff0000) == 0xff0000)) {
                      bVar17 = 1;
                    }
                    else {
                      bVar17 = 0;
                    }
                    bVar20 = (bool)(bVar20 & bVar17);
                  }
                  goto LAB_180019e49;
                }
                if (uVar8 != 0x52) goto LAB_18001a255;
                abStack_1346[uVar22] = abStack_1346[uVar22] | 7;
              }
              abStack_134e[uVar22] = 0xf;
              local_164 = local_164 | 1 << (bVar17 & 0x1f);
LAB_180019d38:
              cVar18 = local_54;
              bVar20 = (bool)(bVar20 & ((puVar13[2] & 0x7ff) < uVar22 && local_54 == '\0'));
            }
            else {
              if (uVar8 == 0x54) {
                uVar8 = puVar13[2];
                uVar24 = local_6c & 0x7ff;
                uVar6 = local_74 & 0x7ff;
                bVar26 = local_7c == 0x47;
                abStack_134e[uVar22] = 0xf;
                acStack_108[uVar22] = '\x01';
                bVar20 = (bool)(bVar20 & (bVar26 &&
                                         ((uVar8 & 0x7ff) == uVar24 && uVar22 - 1 == uVar6)));
                local_1048 = 1;
              }
              else {
                if (uVar8 == 0x55) {
                  abStack_1346[uVar22] = 0xf;
                  abStack_134e[uVar22] = 0xf;
                  goto LAB_180019d38;
                }
                if (uVar8 != 0x56) {
                  if (uVar8 == 0x57) {
                    local_1048 = 1;
                    bVar20 = (bool)(bVar20 & (uVar22 == 5 && cVar18 == '\0'));
                  }
                  else {
                    if (uVar8 == 0x58) goto LAB_180019e49;
                    if (uVar8 == 0x59) {
                      local_81 = CONCAT11(local_81._1_1_,(byte)local_81 + '\x01');
                      local_82 = local_82 + 1;
                      bVar26 = local_a9 == '\0';
                      local_a9 = local_a9 + '\x01';
                      bVar20 = (bool)(bVar20 & (cVar18 == '\0' && (bVar26 && local_13cc == 0x30000))
                                     );
                    }
                  }
                  goto LAB_18001a255;
                }
                if ((local_7c == 0x49) && (local_78 == 0x49)) {
                  bVar17 = 1;
                }
                else {
                  bVar17 = 0;
                }
                uVar8 = puVar13[2];
                abStack_1346[uVar22] = 0xf;
                abStack_134e[uVar22] = 0xf;
                bVar16 = 0;
                if (uVar22 - 1 == (local_74 & 0x7ff)) {
                  bVar16 = bVar17;
                }
                bVar16 = (uVar8 & 0x7ff) == (local_6c & 0x7ff) & bVar16;
LAB_18001a000:
                bVar20 = (bool)(bVar20 & bVar16);
              }
LAB_18001a245:
              local_54 = '\0';
              cVar18 = '\0';
            }
LAB_18001a255:
            local_13b8 = puVar13;
            uVar10 = 0;
            do {
              if (local_res20[uVar10] == 0) break;
              puVar9 = puVar9 + 1;
              uVar8 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar8;
            } while (uVar8 < 3);
            puVar9 = puVar9 + 2;
            local_62 = bVar14;
            local_61 = CONCAT35((undefined3)local_1408,_auStack_140d);
            local_58 = (int)((longlong)puVar9 - (longlong)puVar13 >> 2);
            local_64 = local_1410;
            local_63 = bStack_140f;
            local_59 = local_1408._3_1_;
            if (bVar20 != false) {
              acStack_102[local_1388 & 0xffff] = acStack_102[local_1388 & 0xffff] + '\x01';
              cVar18 = local_54;
            }
          }
          if (1 < (uVar5 & 0xffff) - 0xfffe) goto LAB_18001a443;
        }
      }
      puVar13 = puVar9;
      iVar19 = local_1400;
    } while (bVar20 != false);
  }
  piVar4 = local_13a0;
  uVar5 = (uint)local_10c;
  uVar10 = 0;
  do {
    if (abStack_134e[uVar10] != 0) {
      uVar5 = uVar5 & 0xff | 1 << ((uint)uVar10 & 0x1f);
      local_10c = (byte)uVar5;
    }
    uVar8 = (uint)uVar10 + 1;
    uVar10 = (ulonglong)uVar8;
  } while (uVar8 < 8);
  bVar17 = (local_136e[0] & 0xf) == 0xf & bVar20;
  if (bVar17 != 0) {
    FUN_1800fbec0(param_2,(undefined8 *)local_1378,0x1270);
    *param_3 = (int)((longlong)puVar9 - (longlong)piVar4 >> 2);
  }
  return bVar17;
}


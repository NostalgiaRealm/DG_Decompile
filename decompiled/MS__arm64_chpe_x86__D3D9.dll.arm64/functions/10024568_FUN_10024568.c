/*
 * FUN_10024568 at 10024568
 * undefined FUN_10024568(void)
 * Address ranges: 10024568-10024b7b;10024bc4-10024d6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_10024568(int *param_1,undefined2 param_2,undefined8 param_3,int param_4,int *param_5)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined3 uVar5;
  bool bVar6;
  ulonglong uVar7;
  bool bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined2 uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  byte bVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint local_ac;
  uint uStack_84;
  undefined1 local_80;
  undefined2 uStack_7f;
  ushort local_60 [5];
  undefined2 local_56;
  undefined8 local_54;
  undefined8 uStack_4c;
  
  FUN_101325d0(param_4,0,0x4a70);
  iVar12 = *param_1;
  local_60[0] = 0xc;
  local_60[1] = 0xc;
  local_60[2] = 0x10;
  local_60[3] = 0x10;
  uStack_4c = 0x8000800020002;
  local_54 = 0x3000300010000;
  local_60[4] = param_2;
  local_ac = 0;
  local_56 = param_2;
  uVar19 = 0;
  *(char *)(param_4 + 0x4a6d) = (char)iVar12;
  bVar4 = false;
  bVar8 = iVar12 + 0x1ff00U < 2;
  uVar17 = (uint)bVar8;
  bVar6 = iVar12 != -0x1ff00;
  puVar18 = (uint *)(param_1 + 1);
  *(undefined1 *)(param_4 + 0x4a6c) = 1;
  if (bVar8) {
    local_ac = 0;
    do {
      if (bVar4) break;
      uVar23 = 1;
      uStack_84 = 1;
      _local_80 = 0xf0f;
      uVar16 = *puVar18;
      bVar8 = true;
      uVar10 = uVar16 & 0xffff;
      *(int *)(param_4 + 0x4a68) = *(int *)(param_4 + 0x4a68) + 1;
      uVar22 = uVar16 & 0xffff0000;
      local_80 = 0xf;
      uVar5 = _local_80;
      switch(uVar10) {
      case 0:
        puVar18 = puVar18 + 1;
LAB_10024720:
        uVar16 = 1;
        goto LAB_10024c9c;
      case 1:
        goto switchD_10024660_caseD_1;
      case 2:
      case 5:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
        break;
      case 3:
      case 0x12:
switchD_10024660_caseD_3:
        uVar17 = 0;
        uVar16 = 0;
        goto LAB_1002487c;
      case 4:
        uVar16 = 3;
        goto LAB_10024874;
      case 6:
      case 7:
      case 0xe:
      case 0xf:
switchD_10024660_caseD_6:
        _local_80 = 0x80f;
        goto LAB_1002486c;
      case 8:
        uVar15 = 7;
        goto LAB_10024678;
      case 9:
        bVar8 = false;
        break;
      case 0x10:
        _local_80 = 0xb0f;
LAB_1002486c:
        bVar8 = false;
switchD_10024660_caseD_1:
        uVar16 = 1;
        goto LAB_10024874;
      case 0x11:
        uVar15 = 0xe;
LAB_10024678:
        _local_80 = CONCAT21(uVar15,0xf);
        bVar8 = false;
        uVar16 = 2;
        goto LAB_10024874;
      case 0x13:
        uVar5 = 0x303;
        local_80 = 3;
        uVar16 = 1;
        uStack_84 = uVar23;
        goto LAB_1002487c;
      case 0x14:
        uVar23 = 4;
        bVar8 = false;
        break;
      case 0x15:
        goto LAB_100246cc;
      case 0x16:
        _local_80 = 0x70f;
        uVar23 = 4;
        bVar8 = false;
        break;
      case 0x17:
        uVar5 = 0x707;
LAB_100246cc:
        local_80 = 7;
        uStack_84 = 3;
LAB_100246d0:
        bVar8 = false;
        uVar16 = 2;
        goto LAB_1002487c;
      case 0x18:
        uVar5 = 0x703;
        local_80 = 3;
        uStack_84 = 2;
        goto LAB_100246d0;
      default:
        if (uVar10 < 0x51) {
          if (uVar10 != 0x1f) {
            if ((uVar10 == 0x4e) || (uVar10 == 0x4f)) goto switchD_10024660_caseD_6;
            goto switchD_10024660_caseD_3;
          }
          if ((uVar22 == 0) &&
             ((((uVar10 = puVar18[2], (int)uVar10 < 0 && ((uVar10 & 0x70000000) == 0x10000000)) &&
               ((uVar10 & 0xf000000) == 0)) &&
              (((uVar10 & 0xf0000) == 0xf0000 && ((uVar10 & 0xf00000) == 0)))))) {
            iVar12 = 6;
            if (!bVar6) {
              iVar12 = 4;
            }
            if ((((uint)*(ushort *)((int)local_60 + iVar12) <= (uVar10 & 0x7ff)) ||
                (uVar22 = puVar18[1], (uVar22 & 0xfff0fff0) != 0x80000000)) ||
               (0xd < (uVar22 & 0xf))) goto LAB_10024c94;
            *(byte *)((uVar10 & 0x7ff) + param_4) =
                 (byte)(uVar22 >> 0x10) & 0xf | (byte)((uVar22 & 0xf) << 4);
            uVar16 = 1;
            local_ac = 1 << (ulonglong)(uVar10 & 0x1f) | local_ac;
          }
          else {
LAB_10024c94:
            uVar16 = 0;
          }
          puVar18 = puVar18 + 3;
        }
        else {
          if (0x51 < uVar10) {
            if (uVar10 == 0xfffe) {
              puVar18 = puVar18 + (uVar16 >> 0x10) + 1;
              goto LAB_10024720;
            }
            if (uVar10 != 0xffff) goto switchD_10024660_caseD_3;
            uVar16 = (uint)(uVar22 == 0);
            uVar17 = (uint)(uVar22 == 0);
            puVar18 = puVar18 + 1;
            bVar4 = true;
            goto LAB_10024c9c;
          }
          if (((((uVar22 == 0) && (uVar10 = puVar18[1], (int)uVar10 < 0)) &&
               ((uVar10 & 0x70000000) == 0x20000000)) &&
              (((uVar10 & 0xf000000) == 0 && ((uVar10 & 0xf0000) == 0xf0000)))) &&
             ((uVar10 & 0xf00000) == 0)) {
            iVar12 = 10;
            if (!bVar6) {
              iVar12 = 8;
            }
            uVar10 = uVar10 & 0x7ff;
            if (*(ushort *)((int)local_60 + iVar12) <= uVar10) goto LAB_100247f4;
            uVar25 = puVar18[2];
            uVar24 = puVar18[3];
            uVar23 = puVar18[4];
            uVar22 = puVar18[5];
            *(undefined1 *)(uVar10 + param_4 + 0x44f) = 1;
            uVar16 = 1;
            *(uint *)(param_4 + (uVar10 + 0x85) * 0x10) = uVar25;
            iVar12 = param_4 + uVar10 * 0x10;
            *(uint *)(iVar12 + 0x854) = uVar24;
            *(uint *)(iVar12 + 0x858) = uVar23;
            *(uint *)(iVar12 + 0x85c) = uVar22;
          }
          else {
LAB_100247f4:
            uVar16 = 0;
          }
          puVar18 = puVar18 + 6;
        }
LAB_10024c9c:
        uVar17 = uVar16 & uVar17;
        goto LAB_10024ca0;
      }
      uVar16 = 2;
LAB_10024874:
      uVar5 = _local_80;
      uStack_84 = uVar23;
LAB_1002487c:
      uVar24 = puVar18[1];
      uVar11 = (uint)(uVar22 == 0);
      uVar19 = uVar19 + 1;
      uVar25 = (uVar24 & 0x1800 | uVar24 >> 0x14 & 0x7ff) >> 8;
      uVar23 = uVar24 >> 0x10 & 0xf;
      uStack_7f._0_1_ = (byte)((uint3)uVar5 >> 8);
      if ((uVar22 == 0) && (uVar19 < 0x81 && (int)uVar24 < 0)) {
        uVar22 = uVar24 & 0xf0000;
        if ((uVar22 == 0) || (bVar9 = 1, uVar22 != 0x10000 && uVar25 == 3)) {
          bVar9 = 0;
        }
        if ((uVar10 != 0x13) || (bVar21 = 0, (uVar22 - 0x20000 & 0xfffeffff) == 0)) {
          bVar21 = 1;
        }
        if ((((uVar25 - 1 < 2 || 6 < uVar25) || (!(bool)(bVar9 & bVar21))) ||
            ((uVar24 & 0xf000000) != 0)) ||
           (((uVar24 & 0xf00000) != 0 ||
            ((uint)local_60[(uint)bVar6 | uVar25 << 1] <= (uVar24 & 0x7ff))))) goto LAB_10024964;
        if (uVar25 != 0) {
          uVar23 = uVar23 & local_80;
        }
        if (bVar8) {
          uVar23 = uVar23 & (byte)uStack_7f;
        }
        else {
          uVar23 = (uint)(byte)uStack_7f;
        }
        uVar11 = 1;
      }
      else {
LAB_10024964:
        uVar23 = (uint)(byte)uStack_7f;
      }
      uVar10 = 0;
      if (uVar16 != 0) {
        do {
          if (uVar11 == 0) {
            bVar4 = false;
            uVar11 = 0;
            goto LAB_10024bd0;
          }
          uVar11 = 0;
          uVar22 = puVar18[uVar10 + 2];
          if ((int)uVar22 < 0) {
            uVar24 = (uVar22 & 0x1800 | uVar22 >> 0x14 & 0x7ff) >> 8;
            if (uVar24 < 4) {
              bVar9 = 1;
              if (uVar24 != 2) goto LAB_100249c8;
LAB_100249d4:
              bVar8 = true;
            }
            else {
              bVar9 = 0;
LAB_100249c8:
              if ((uVar22 >> 0xd & 1) == 0) goto LAB_100249d4;
              bVar8 = false;
            }
            uVar2 = uVar22 & 0xff0000;
            uVar3 = 1 << (ulonglong)(uVar2 >> 0x16);
            if ((uVar23 & 8) == 0) {
              uVar3 = 0;
            }
            uVar20 = 1 << (ulonglong)(uVar2 >> 0x14 & 3);
            if ((uVar23 & 4) == 0) {
              uVar20 = 0;
            }
            uVar13 = 1 << (ulonglong)(uVar2 >> 0x12 & 3);
            if ((uVar23 & 2) == 0) {
              uVar13 = 0;
            }
            uVar14 = 1 << (ulonglong)(uVar2 >> 0x10 & 3);
            if ((uVar23 & 1) == 0) {
              uVar14 = 0;
            }
            if ((((bool)(bVar9 & (uVar24 != 3 || uVar2 == 0))) && (bVar8)) &&
               (((uVar22 & 0xe000000) == 0 &&
                (uVar2 = uVar22 & 0x7ff, uVar2 < local_60[(uint)bVar6 | uVar24 << 1])))) {
              uVar3 = uVar14 | uVar13 | uVar20 | uVar3;
              uVar20 = 0;
              uVar13 = 0xff;
              if (uVar10 == uVar16 - 1) {
                uVar14 = uStack_84;
                if (uStack_84 != 0) goto LAB_10024aa0;
              }
              else {
                uVar14 = 1;
LAB_10024aa0:
                do {
                  switch(uVar24) {
                  case 0:
                    pbVar1 = (byte *)(uVar20 + uVar2 + param_4 + 0x20);
                    break;
                  case 1:
                    pbVar1 = (byte *)(uVar20 + uVar2 + param_4 + 0x10);
                    goto LAB_10024ad8;
                  case 2:
                    pbVar1 = (byte *)(uVar20 + uVar2 + param_4 + 0x41);
LAB_10024ad8:
                    uVar13 = uVar13 & 0xf;
                    *pbVar1 = *pbVar1 | (byte)uVar3;
                    goto switchD_10024ab8_default;
                  case 3:
                    pbVar1 = (byte *)(uVar20 + uVar2 + param_4 + 0x40);
                    break;
                  default:
                    goto switchD_10024ab8_default;
                  }
                  uVar13 = *pbVar1 & uVar13;
switchD_10024ab8_default:
                  uVar20 = uVar20 + 1;
                } while (uVar20 < uVar14);
              }
              if ((uVar3 & 0xff & uVar13) == (uVar3 & 0xff)) {
                if ((uVar22 >> 0xd & 1) != 0) {
                  *(undefined1 *)(param_4 + 0x44e) = 1;
                }
                uVar11 = 1;
              }
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar16);
        bVar4 = false;
      }
      if (uVar11 != 0 && uVar25 < 7) {
                    /* WARNING: Could not recover jumptable at 0x10024b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*(code *)(&UNK_10024ba0 + *(int *)(&DAT_10024de4 + uVar25 * 4) * 4))();
        return uVar7;
      }
LAB_10024bd0:
      puVar18 = puVar18 + uVar16 + 2;
      uVar17 = uVar17 & uVar11;
LAB_10024ca0:
    } while (uVar17 != 0);
  }
  if (local_ac == 0) {
    uVar19 = 0;
    do {
      if (*(char *)(param_4 + 0x10 + uVar19) != '\0') {
        *(undefined1 *)(uVar19 + param_4) = (&DAT_10162538)[uVar19];
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < 0x10);
  }
  else {
    for (uVar19 = 0; (uVar17 != 0 && (uVar19 < 0x10)); uVar19 = uVar19 + 1) {
      if ((*(char *)(uVar19 + param_4 + 0x10) == '\0') ||
         (uVar10 = 0, (1 << (ulonglong)(uVar19 & 0x1f) & local_ac) != 0)) {
        uVar10 = 1;
      }
      uVar17 = uVar10 & uVar17;
    }
  }
  uVar17 = (*(byte *)(param_4 + 0x441) & 3) == 3 & uVar17;
  if (uVar17 != 0) {
    *param_5 = (int)puVar18 - (int)param_1 >> 2;
  }
  return (ulonglong)uVar17;
}


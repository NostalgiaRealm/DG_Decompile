/*
 * FUN_180057508 at 180057508
 * undefined __cdecl FUN_180057508(int * param_1, longlong * param_2, uint param_3, longlong param_4)
 * Address ranges: 180057508-180057aaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057508(int *param_1,longlong *param_2,uint param_3,longlong param_4)

{
  byte *pbVar1;
  undefined4 *puVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 extraout_x11;
  ulonglong uVar18;
  ulonglong extraout_x12;
  uint extraout_w13;
  ulonglong uVar19;
  uint extraout_w14;
  ulonglong uVar20;
  longlong extraout_x15;
  ulonglong uVar21;
  uint *puVar22;
  uint uVar23;
  uint local_d0 [4];
  uint local_c0 [32];
  
  uVar21 = (ulonglong)(1 - ((int)param_3 >> 0x1f));
  if ((int)param_3 < 0) {
    puVar2 = (undefined4 *)((-param_4 & 3U) + param_4);
    param_4 = (-param_4 & 3U | 8) + param_4;
    local_c0[1] = *puVar2;
  }
  uVar17 = 1;
  uVar13 = 1;
  if ((param_3 & 0x7ff) == 0x26 || (param_3 & 0x7ff) == 0x4d) {
    uVar13 = 2;
  }
  uVar18 = (ulonglong)uVar13;
  uVar23 = 0;
  uVar13 = 0;
  do {
    puVar8 = (uint *)((-param_4 & 3U) + param_4);
    uVar9 = *puVar8;
    param_4 = (-param_4 & 3U | 8) + param_4;
    if (uVar9 == 0) break;
    if (uVar13 == 0) {
      if (uVar9 != 0xffffffff) goto LAB_1800575d4;
    }
    else {
      if (uVar9 == 0xffffffff) {
        do {
          puVar8 = (uint *)((-param_4 & 3U) + param_4);
          uVar9 = *puVar8;
          param_4 = (-param_4 & 3U | 8) + param_4;
        } while (uVar9 == 0xffffffff);
      }
LAB_1800575d4:
      uVar20 = -(longlong)puVar8 - 8U & 3;
      pbVar1 = (byte *)(uVar20 + param_4);
      if ((uVar9 & 0x40000000) == 0) {
        param_4 = (uVar20 | 8) + param_4;
        uVar5 = 0;
        bVar7 = 0;
      }
      else {
        uVar19 = -(uVar20 + param_4) - 8 & 3;
        lVar15 = uVar19 + uVar20 + param_4;
        lVar14 = uVar19 + (uVar20 | 0x10) + param_4;
        uVar5 = *(uint *)(lVar15 + 8);
        if (uVar5 == 0xffffffff) {
          do {
            puVar8 = (uint *)((-lVar14 & 3U) + lVar14);
            lVar14 = (-lVar14 & 3U | 8) + lVar14;
            uVar5 = *puVar8;
          } while (uVar5 == 0xffffffff);
          uVar20 = -(longlong)puVar8 - 8;
        }
        else {
          uVar20 = -lVar15 - 0x10;
        }
        bVar7 = (byte)*(undefined4 *)((uVar20 & 3) + lVar14);
        param_4 = (uVar20 & 3 | 8) + lVar14;
      }
      uVar10 = 0;
      if ((uVar9 & 0x40000000) != 0) {
        uVar10 = 0x600000;
      }
      uVar23 = uVar9 >> 0x12 & 3;
      local_c0[uVar21] =
           ~(uVar9 >> 0x1c) & 2 |
           (uVar9 & 0x30000 | uVar10 | uVar9 & 0x3f00 |
           (((int)uVar17 << (ulonglong)(uVar9 >> 0x14 & 7)) + 0xffU & (uint)*pbVar1) <<
           (ulonglong)uVar23 & 0xff) << 4;
      uVar10 = uVar9 & 0xff;
      if (0x10000 < (uVar9 & 0x30000)) {
        uVar10 = uVar9 >> 0xe & 3;
      }
      uVar12 = uVar9 >> 0x10 & 3;
      local_c0[uVar21 + 1] = uVar10;
      local_c0[uVar21 + 2] = uVar9 & 0xff;
      if ((uVar9 & 0x40000000) == 0) {
        iVar11 = 1;
      }
      else {
        uVar5 = FUN_180057420(uVar5,bVar7,1,param_4,0,0);
        local_c0[extraout_x15 + (ulonglong)(uVar12 + 1)] = uVar5;
        local_c0[extraout_x15 + (ulonglong)(extraout_w14 + 2)] = extraout_w13 & 0xff;
        iVar11 = 3;
        uVar17 = extraout_x11;
        uVar18 = extraout_x12;
        uVar12 = extraout_w14;
      }
      uVar21 = (ulonglong)(iVar11 + uVar12 + (int)uVar21);
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 < (uint)uVar18);
  if (uVar9 != 0) {
    lVar15 = (-param_4 & 3U | 8) + param_4;
    uVar13 = *(uint *)((-param_4 & 3U) + param_4);
    while (uVar13 != 0) {
      lVar14 = lVar15;
      if (uVar13 != 0xffffffff) {
        uVar20 = -lVar15 & 3;
        uVar9 = *(uint *)(uVar20 + lVar15);
        lVar3 = uVar20 + lVar15;
        uVar18 = (ulonglong)uVar9;
        bVar4 = (uVar9 & 0x100) != 0;
        if ((bVar4) && (uVar5 = uVar23, uVar23 != 0)) {
          do {
            uVar5 = uVar5 - 1;
            uVar10 = (uint)uVar18;
            uVar18 = (ulonglong)(uVar10 & 0xfffffc00 | uVar10 & 3 | (uVar10 & 0xff) << 2);
          } while ((char)uVar5 != '\0');
        }
        uVar5 = uVar9 + uVar23;
        if (!bVar4) {
          uVar5 = uVar9;
        }
        iVar11 = (int)uVar21;
        if ((uVar13 >> 8 & 0x3f) - 8 < 2) {
          uVar19 = -lVar3 - 8U & 3;
          lVar3 = uVar19 + lVar3;
          if ((uVar13 >> 0x1e & 1) == 0) {
            lVar14 = uVar19 + (uVar20 | 0x10) + lVar15;
            bVar7 = 0;
            uVar9 = 0;
          }
          else {
            uVar16 = -lVar3 - 0x10U & 3;
            lVar14 = uVar16 + lVar3;
            uVar9 = *(uint *)(lVar14 + 0x10);
            lVar15 = uVar16 + uVar19 + (uVar20 | 0x18) + lVar15;
            if (uVar9 == 0xffffffff) {
              do {
                puVar8 = (uint *)((-lVar15 & 3U) + lVar15);
                uVar9 = *puVar8;
                lVar15 = (-lVar15 & 3U | 8) + lVar15;
              } while (uVar9 == 0xffffffff);
              uVar20 = -(longlong)puVar8 - 8;
            }
            else {
              uVar20 = -lVar14 - 0x18;
            }
            lVar14 = (uVar20 & 3 | 8) + lVar15;
            bVar7 = (byte)*(undefined4 *)((uVar20 & 3) + lVar15);
          }
          if ((uVar13 & 0x10000000) == 0) {
            uVar5 = (uint)uVar18;
          }
          iVar6 = FUN_180056c68(param_1,local_c0 + uVar21,uVar13,(ulonglong)*(uint *)(lVar3 + 8),
                                (byte)uVar5,uVar9,bVar7);
        }
        else {
          lVar14 = (uVar20 | 8) + lVar15;
          if ((uVar13 & 0x3f00) == 0x400) {
            uVar20 = 0;
            uVar9 = uVar13 >> 0x14 & 7;
            if (uVar9 != 0) {
              do {
                puVar8 = (uint *)((-lVar14 & 3U) + lVar14);
                lVar14 = (-lVar14 & 3U | 8) + lVar14;
                local_d0[uVar20] =
                     *puVar8 & (~(uVar13 << 4) | 0x7fffffff) ^ (int)uVar13 >> 0x1f & 0x80000000U;
                uVar10 = (int)uVar20 + 1;
                uVar20 = (ulonglong)uVar10;
              } while (uVar10 < uVar9);
            }
            if ((uVar13 >> 0x16 & 1) == 0) {
              uVar18 = 0;
              uVar5 = 0x4001;
            }
            else {
              uVar10 = uVar13 & 0x700000;
              uVar12 = 2;
              if (uVar10 != 0x400000) {
                uVar12 = (uint)(uVar10 == 0x100000);
              }
              if ((uVar13 >> 0x1c & 1) == 0) {
                uVar13 = 0x4e40;
                if (uVar10 == 0x100000) {
                  uVar13 = 0x4e41;
                }
                uVar5 = 0x4e46;
                if (uVar10 != 0x400000) {
                  uVar5 = uVar13;
                }
              }
              else {
                uVar18 = 0xe4;
                uVar5 = uVar12 | (uVar5 & 3) << 4 | 0x4008;
              }
            }
            local_c0[uVar21] = uVar5;
            uVar13 = 0;
            if (uVar9 != 0) {
              do {
                uVar10 = uVar13 & 0x7f;
                uVar5 = uVar13 + iVar11 + 1;
                uVar13 = uVar13 + 1;
                local_c0[uVar5] = local_d0[(uVar18 & 0xff) >> ((ulonglong)(uVar10 << 1) & 0x3f) & 3]
                ;
              } while (uVar13 < uVar9);
            }
            uVar21 = (ulonglong)(uVar9 + iVar11 + 1);
            goto LAB_1800579f8;
          }
          if ((uVar13 >> 0x1e & 1) == 0) {
            uVar9 = 0;
            bVar7 = 0;
          }
          else {
            uVar19 = -lVar3 - 8U & 3;
            lVar3 = uVar19 + lVar3;
            uVar9 = *(uint *)(lVar3 + 8);
            lVar14 = uVar19 + (uVar20 | 0x10) + lVar15;
            if (uVar9 == 0xffffffff) {
              do {
                puVar8 = (uint *)((-lVar14 & 3U) + lVar14);
                uVar9 = *puVar8;
                lVar14 = (-lVar14 & 3U | 8) + lVar14;
              } while (uVar9 == 0xffffffff);
              uVar20 = -(longlong)puVar8 - 8;
            }
            else {
              uVar20 = -lVar3 - 0x10;
            }
            bVar7 = (byte)*(undefined4 *)((uVar20 & 3) + lVar14);
            lVar14 = (uVar20 & 3 | 8) + lVar14;
          }
          if ((uVar13 & 0x10000000) == 0) {
            uVar5 = (uint)uVar18;
          }
          iVar6 = FUN_180057118(param_1,local_c0 + uVar21,uVar13,uVar5,uVar9,bVar7);
        }
        uVar21 = (ulonglong)(uint)(iVar6 + iVar11);
      }
LAB_1800579f8:
      lVar15 = (-lVar14 & 3U | 8) + lVar14;
      uVar13 = *(uint *)((-lVar14 & 3U) + lVar14);
    }
  }
  uVar13 = (uint)uVar21;
  local_c0[0] = param_3 & 0xfffff800 | (uVar13 & 0x7f) << 0x18 | param_3 & 0x7ff;
  if ((uVar13 != 0) && ((char)param_2[3] != '\0')) {
    if ((ulonglong)param_2[2] < (param_2[1] - *param_2) + uVar21 * 4) {
      FUN_180057ae0(param_2,uVar21 << 2);
    }
    puVar22 = (uint *)param_2[1];
    puVar8 = local_c0;
    uVar18 = (ulonglong)(uVar13 >> 1);
    if (uVar13 >> 1 != 0) {
      thunk_FUN_180001218((undefined8 *)puVar22,(undefined8 *)puVar8,uVar18 * 8);
      puVar8 = local_c0 + uVar18 * 2;
      puVar22 = puVar22 + uVar18 * 2;
    }
    if ((uVar21 & 1) != 0) {
      *puVar22 = *puVar8;
    }
    param_2[1] = param_2[1] + uVar21 * 4;
  }
  return;
}


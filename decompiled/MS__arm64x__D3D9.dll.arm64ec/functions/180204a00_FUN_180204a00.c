/*
 * FUN_180204a00 at 180204a00
 * undefined FUN_180204a00(void)
 * Address ranges: 180204a00-180204ffb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180204a00(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 *puVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  int iVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  code *extraout_x11;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulonglong uStack_68;
  
  uVar17 = param_2[1];
  uVar18 = *param_2;
  uStack_68 = param_2[3];
  uVar21 = param_2[2];
  iVar11 = -1;
  uVar19 = 0;
  uStack_70._4_4_ = (int)(uVar21 >> 0x20);
  uStack_78._0_4_ = (uint)uVar17;
  uStack_78._4_4_ = (uint)(uVar17 >> 0x20);
  local_80._4_4_ = (uint)(uVar18 >> 0x20);
  uVar8 = *(uint *)((longlong)param_1 + 0x24);
  uVar20 = ((ulonglong)
            (local_80._4_4_ |
            ((uint)uStack_78 |
            (uStack_78._4_4_ | (uStack_70._4_4_ - 1U | ((int)uStack_68 + -1) * 0x10) << 3) << 3) <<
            3) & 0xffffff) << 8 | uVar18 & 0xffffffff;
  local_80 = uVar18;
  uStack_78 = uVar17;
  uStack_70 = uVar21;
  if (uVar8 != 0) {
    uVar14 = 0;
    uVar13 = uVar8;
    do {
      uVar9 = uVar13 + uVar14 >> 1;
      uVar19 = (ulonglong)uVar9;
      uVar18 = *(ulonglong *)(param_1[3] + uVar19 * 0x48);
      if (uVar18 <= uVar20) {
        if (uVar20 <= uVar18) break;
        uVar14 = uVar9 + 1;
        uVar19 = (ulonglong)(uVar9 + 1);
        uVar9 = uVar13;
      }
      uVar13 = uVar9;
    } while (uVar13 != uVar14);
    if (((uint)uVar19 != uVar8) && (*(ulonglong *)(param_1[3] + uVar19 * 0x48) == uVar20))
    goto LAB_180204c34;
  }
  if (uVar8 == *(uint *)(param_1 + 4)) {
    uVar18 = CONCAT44(0,*(uint *)(param_1 + 4) << 1);
    lVar15 = uVar18 * 0x48;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar18;
    if (SUB168(auVar10 * ZEXT816(0x48),8) != 0) {
      lVar15 = -1;
    }
    lVar15 = FUN_1802229a8(lVar15);
    if (lVar15 != 0) {
      uVar18 = 0;
      if ((int)param_1[4] != 0) {
        do {
          uVar8 = (int)uVar18 + 1;
          puVar6 = (undefined8 *)(param_1[3] + uVar18 * 0x48);
          puVar7 = (undefined8 *)(lVar15 + uVar18 * 0x48);
          uVar12 = *puVar6;
          uVar23 = puVar6[3];
          uVar22 = puVar6[2];
          puVar7[1] = puVar6[1];
          *puVar7 = uVar12;
          puVar7[3] = uVar23;
          puVar7[2] = uVar22;
          uVar12 = puVar6[4];
          uVar23 = puVar6[7];
          uVar22 = puVar6[6];
          puVar7[5] = puVar6[5];
          puVar7[4] = uVar12;
          puVar7[7] = uVar23;
          puVar7[6] = uVar22;
          puVar7[8] = puVar6[8];
          uVar18 = (ulonglong)uVar8;
        } while (uVar8 < *(uint *)(param_1 + 4));
      }
      FUN_1802229d8(param_1[3]);
      param_1[3] = lVar15;
      *(int *)(param_1 + 4) = (int)param_1[4] << 1;
    }
  }
  uVar18 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
  while ((uint)uVar19 < (uint)uVar18) {
    uVar17 = (ulonglong)((uint)uVar18 - 1);
    puVar6 = (undefined8 *)(param_1[3] + uVar18 * 0x48);
    puVar7 = (undefined8 *)(param_1[3] + uVar17 * 0x48);
    uVar12 = *puVar7;
    uVar23 = puVar7[3];
    uVar22 = puVar7[2];
    puVar6[1] = puVar7[1];
    *puVar6 = uVar12;
    puVar6[3] = uVar23;
    puVar6[2] = uVar22;
    uVar12 = puVar7[4];
    uVar23 = puVar7[7];
    uVar22 = puVar7[6];
    puVar6[5] = puVar7[5];
    puVar6[4] = uVar12;
    puVar6[7] = uVar23;
    puVar6[6] = uVar22;
    puVar6[8] = puVar7[8];
    uVar18 = uVar17;
  }
  *(ulonglong *)(param_1[3] + uVar19 * 0x48) = uVar20;
  uVar20 = *param_2;
  uVar17 = param_2[3];
  uVar18 = param_2[2];
  lVar15 = param_1[3] + uVar19 * 0x48;
  *(ulonglong *)(lVar15 + 0x10) = param_2[1];
  *(ulonglong *)(lVar15 + 8) = uVar20;
  *(ulonglong *)(lVar15 + 0x20) = uVar17;
  *(ulonglong *)(lVar15 + 0x18) = uVar18;
  uVar20 = param_2[4];
  *(ulonglong *)(lVar15 + 0x30) = param_2[5];
  *(ulonglong *)(lVar15 + 0x28) = uVar20;
  *(int *)(lVar15 + 0x38) = (int)param_2[6];
  lVar15 = FUN_1802229a8(0x2d0);
  if (lVar15 != 0) {
    FUN_180222c50(lVar15,0,0x2d0);
    lVar16 = 0;
    do {
      lVar1 = lVar16 + 1;
      *(undefined4 *)(lVar15 + 0x1c + lVar16 * 0x24) = 0xffffffff;
      lVar16 = lVar1;
    } while (lVar1 != 0x14);
  }
  *(longlong *)(param_1[3] + uVar19 * 0x48 + 0x40) = lVar15;
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
LAB_180204c34:
  plVar2 = (longlong *)(uVar19 * 0x48 + param_1[3] + 0x40);
  if (plVar2 != (longlong *)0x0) {
    lVar15 = *plVar2;
    uVar19 = 0;
    uVar20 = 0xffffffff;
    do {
      piVar3 = (int *)(lVar15 + uVar19 * 0x24);
      if (piVar3[7] == -1) {
        uVar8 = (uint)uVar20;
        if ((uint)uVar20 == 0xffffffff) {
          uVar8 = (uint)uVar19;
        }
        uVar20 = (ulonglong)uVar8;
      }
      else if (((((int)param_2[2] == *piVar3) && (*(int *)((longlong)param_2 + 0x1c) == piVar3[1]))
               && (*(int *)((longlong)param_2 + 0x24) == piVar3[3])) &&
              ((int)param_2[6] == piVar3[5])) break;
      uVar8 = (uint)uVar19 + 1;
      uVar19 = (ulonglong)uVar8;
    } while (uVar8 < 0x14);
    if ((int)uVar19 == 0x14) {
      if ((int)uVar20 == -1) {
        uVar20 = 0;
        do {
          if (*(char *)(lVar15 + 0x20 + uVar20 * 0x24) == '\0') goto LAB_180204d24;
          uVar8 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar8;
        } while (uVar8 < 0x14);
      }
      else {
LAB_180204d24:
        puVar4 = (undefined4 *)(lVar15 + (longlong)(int)uVar20 * 0x24);
        *puVar4 = (int)param_2[2];
        puVar4[1] = *(undefined4 *)((longlong)param_2 + 0x1c);
        puVar4[2] = (int)param_2[4];
        puVar4[3] = *(undefined4 *)((longlong)param_2 + 0x24);
        puVar4[4] = (int)param_2[5];
        uVar8 = puVar4[7];
        puVar4[5] = (int)param_2[6];
        puVar4[6] = *(undefined4 *)((longlong)param_2 + 0x2c);
        if (uVar8 != 0xffffffff) {
          lVar15 = param_1[5];
          thunk_FUN_1802236f8(lVar15 + 0x28);
          uVar13 = uVar8 & 0xffff;
          uVar14 = uVar13 + 1;
          if (uVar13 < uVar14) {
            lVar16 = *(longlong *)
                      (*(longlong *)(lVar15 + 0x50) + (ulonglong)(uVar8 >> 0x10) * 0x10 + 8);
            do {
              uVar19 = -1L << ((ulonglong)uVar13 & 0x3f);
              uVar8 = (uVar13 & 0xffffffc0) + 0x40;
              if (uVar14 < uVar8) {
                uVar19 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar14 & 0x3f) & uVar19;
              }
              *(ulonglong *)(lVar16 + (ulonglong)(uVar13 >> 6) * 8) =
                   *(ulonglong *)(lVar16 + (ulonglong)(uVar13 >> 6) * 8) &
                   (uVar19 ^ 0xffffffffffffffff);
              uVar13 = uVar8;
            } while (uVar8 < uVar14);
          }
          thunk_FUN_18022370c(lVar15 + 0x28);
          FUN_180205e48(param_1,puVar4 + 7);
        }
        iVar11 = FUN_18020c7c8(param_1[5],1);
        puVar4[7] = iVar11;
        if (iVar11 != -1) {
          lVar15 = param_1[5];
          lVar16 = *(longlong *)(lVar15 + 8);
          uVar8 = *(uint *)(lVar15 + 0x10);
          FUN_18020d168(lVar15,local_90,iVar11,0);
          uVar12 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                             (0x180224000,*(undefined8 *)(lVar16 + (ulonglong)uVar8 * 0x20),
                              extraout_x1,local_90[0]);
          (*extraout_x11)(uVar12,param_2);
          uVar8 = *(uint *)(param_1 + 2);
          uVar19 = 0;
          uVar20 = (ulonglong)(uint)puVar4[7];
          if (uVar8 != 0) {
            uVar14 = 0;
            uVar13 = uVar8;
            do {
              uVar9 = uVar13 + uVar14 >> 1;
              uVar19 = (ulonglong)uVar9;
              uVar18 = *(ulonglong *)(param_1[1] + uVar19 * 0x18);
              if (uVar18 <= uVar20) {
                if (uVar20 <= uVar18) break;
                uVar14 = uVar9 + 1;
                uVar19 = (ulonglong)(uVar9 + 1);
                uVar9 = uVar13;
              }
              uVar13 = uVar9;
            } while (uVar13 != uVar14);
          }
          if (((uint)uVar19 == uVar8) ||
             (puVar5 = (ulonglong *)(param_1[1] + uVar19 * 0x18), *puVar5 != uVar20)) {
            uVar14 = *(uint *)((longlong)param_1 + 0x14);
            if (uVar14 == uVar8) {
              uVar8 = 0x10;
              if (uVar14 != 0) {
                uVar8 = uVar14 << 1;
              }
              lVar15 = FUN_1802229a8((ulonglong)uVar8 * 0x18);
              if (lVar15 != 0) {
                uVar18 = 0;
                if ((int)param_1[2] != 0) {
                  do {
                    uVar14 = (int)uVar18 + 1;
                    puVar6 = (undefined8 *)(param_1[1] + uVar18 * 0x18);
                    puVar7 = (undefined8 *)(lVar15 + uVar18 * 0x18);
                    uVar12 = *puVar6;
                    puVar7[1] = puVar6[1];
                    *puVar7 = uVar12;
                    puVar7[2] = puVar6[2];
                    uVar18 = (ulonglong)uVar14;
                  } while (uVar14 < *(uint *)(param_1 + 2));
                }
                FUN_1802229d8(*param_1);
                *param_1 = lVar15;
                param_1[1] = lVar15;
                *(uint *)((longlong)param_1 + 0x14) = uVar8;
              }
            }
            uVar18 = (ulonglong)*(uint *)(param_1 + 2);
            if (*(uint *)((longlong)param_1 + 0x14) != *(uint *)(param_1 + 2)) {
              while ((uint)uVar19 < (uint)uVar18) {
                uVar17 = (ulonglong)((uint)uVar18 - 1);
                puVar6 = (undefined8 *)(param_1[1] + uVar18 * 0x18);
                puVar7 = (undefined8 *)(param_1[1] + uVar17 * 0x18);
                uVar12 = *puVar7;
                puVar6[1] = puVar7[1];
                *puVar6 = uVar12;
                puVar6[2] = puVar7[2];
                uVar18 = uVar17;
              }
              *(int *)(param_1 + 2) = (int)param_1[2] + 1;
              *(undefined4 *)(param_1[1] + uVar19 * 0x18 + 8) = puVar4[7];
              *(undefined4 **)(param_1[1] + uVar19 * 0x18 + 0x10) = puVar4;
              *(ulonglong *)(param_1[1] + uVar19 * 0x18) = uVar20;
            }
          }
          else {
            puVar5[2] = (ulonglong)puVar4;
          }
        }
        *(undefined1 *)(puVar4 + 8) = 1;
      }
    }
    else {
      lVar15 = lVar15 + uVar19 * 0x24;
      iVar11 = *(int *)(lVar15 + 0x1c);
      *(undefined1 *)(lVar15 + 0x20) = 1;
    }
  }
  return iVar11;
}


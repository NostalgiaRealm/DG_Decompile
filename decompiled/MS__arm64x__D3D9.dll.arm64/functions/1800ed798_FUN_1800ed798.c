/*
 * FUN_1800ed798 at 1800ed798
 * undefined FUN_1800ed798(void)
 * Address ranges: 1800ed798-1800edd8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800ed798(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulonglong uStack_68;
  
  uVar23 = param_2[1];
  uVar16 = *param_2;
  uStack_68 = param_2[3];
  uVar17 = param_2[2];
  iVar10 = -1;
  uVar18 = 0;
  uStack_70._4_4_ = (int)(uVar17 >> 0x20);
  uStack_78._0_4_ = (uint)uVar23;
  uStack_78._4_4_ = (uint)(uVar23 >> 0x20);
  local_80._4_4_ = (uint)(uVar16 >> 0x20);
  uVar7 = *(uint *)((longlong)param_1 + 0x24);
  uVar19 = ((ulonglong)
            (local_80._4_4_ |
            ((uint)uStack_78 |
            (uStack_78._4_4_ | (uStack_70._4_4_ - 1U | ((int)uStack_68 + -1) * 0x10) << 3) << 3) <<
            3) & 0xffffff) << 8 | uVar16 & 0xffffffff;
  local_80 = uVar16;
  uStack_78 = uVar23;
  uStack_70 = uVar17;
  if (uVar7 != 0) {
    uVar13 = 0;
    uVar12 = uVar7;
    do {
      uVar8 = uVar12 + uVar13 >> 1;
      uVar18 = (ulonglong)uVar8;
      uVar17 = *(ulonglong *)(param_1[3] + uVar18 * 0x48);
      if (uVar17 <= uVar19) {
        if (uVar19 <= uVar17) break;
        uVar13 = uVar8 + 1;
        uVar18 = (ulonglong)(uVar8 + 1);
        uVar8 = uVar12;
      }
      uVar12 = uVar8;
    } while (uVar12 != uVar13);
    if (((uint)uVar18 != uVar7) && (*(ulonglong *)(param_1[3] + uVar18 * 0x48) == uVar19))
    goto LAB_1800ed9cc;
  }
  if (uVar7 == *(uint *)(param_1 + 4)) {
    uVar17 = CONCAT44(0,*(uint *)(param_1 + 4) << 1);
    lVar14 = uVar17 * 0x48;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar17;
    if (SUB168(auVar9 * ZEXT816(0x48),8) != 0) {
      lVar14 = -1;
    }
    lVar14 = thunk_FUN_180102f80(lVar14);
    if (lVar14 != 0) {
      uVar17 = 0;
      if ((int)param_1[4] != 0) {
        do {
          uVar7 = (int)uVar17 + 1;
          puVar5 = (undefined8 *)(param_1[3] + uVar17 * 0x48);
          puVar6 = (undefined8 *)(lVar14 + uVar17 * 0x48);
          uVar22 = *puVar5;
          uVar21 = puVar5[3];
          uVar20 = puVar5[2];
          puVar6[1] = puVar5[1];
          *puVar6 = uVar22;
          puVar6[3] = uVar21;
          puVar6[2] = uVar20;
          uVar22 = puVar5[4];
          uVar21 = puVar5[7];
          uVar20 = puVar5[6];
          puVar6[5] = puVar5[5];
          puVar6[4] = uVar22;
          puVar6[7] = uVar21;
          puVar6[6] = uVar20;
          puVar6[8] = puVar5[8];
          uVar17 = (ulonglong)uVar7;
        } while (uVar7 < *(uint *)(param_1 + 4));
      }
      thunk_FUN_180102fc0(param_1[3]);
      param_1[3] = lVar14;
      *(int *)(param_1 + 4) = (int)param_1[4] << 1;
    }
  }
  uVar17 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
  while ((uint)uVar18 < (uint)uVar17) {
    uVar16 = (ulonglong)((uint)uVar17 - 1);
    puVar5 = (undefined8 *)(param_1[3] + uVar17 * 0x48);
    puVar6 = (undefined8 *)(param_1[3] + uVar16 * 0x48);
    uVar22 = *puVar6;
    uVar21 = puVar6[3];
    uVar20 = puVar6[2];
    puVar5[1] = puVar6[1];
    *puVar5 = uVar22;
    puVar5[3] = uVar21;
    puVar5[2] = uVar20;
    uVar22 = puVar6[4];
    uVar21 = puVar6[7];
    uVar20 = puVar6[6];
    puVar5[5] = puVar6[5];
    puVar5[4] = uVar22;
    puVar5[7] = uVar21;
    puVar5[6] = uVar20;
    puVar5[8] = puVar6[8];
    uVar17 = uVar16;
  }
  *(ulonglong *)(param_1[3] + uVar18 * 0x48) = uVar19;
  uVar16 = *param_2;
  uVar17 = param_2[3];
  uVar19 = param_2[2];
  lVar14 = param_1[3] + uVar18 * 0x48;
  *(ulonglong *)(lVar14 + 0x10) = param_2[1];
  *(ulonglong *)(lVar14 + 8) = uVar16;
  *(ulonglong *)(lVar14 + 0x20) = uVar17;
  *(ulonglong *)(lVar14 + 0x18) = uVar19;
  uVar19 = param_2[4];
  *(ulonglong *)(lVar14 + 0x30) = param_2[5];
  *(ulonglong *)(lVar14 + 0x28) = uVar19;
  *(int *)(lVar14 + 0x38) = (int)param_2[6];
  lVar14 = FUN_180102f80(0x2d0);
  if (lVar14 != 0) {
    func_0x000180222c50(lVar14,0,0x2d0);
    lVar15 = 0;
    do {
      lVar1 = lVar15 + 1;
      *(undefined4 *)(lVar14 + 0x1c + lVar15 * 0x24) = 0xffffffff;
      lVar15 = lVar1;
    } while (lVar1 != 0x14);
  }
  *(longlong *)(param_1[3] + uVar18 * 0x48 + 0x40) = lVar14;
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
LAB_1800ed9cc:
  plVar11 = (longlong *)(uVar18 * 0x48 + param_1[3] + 0x40);
  if (plVar11 != (longlong *)0x0) {
    lVar14 = *plVar11;
    uVar18 = 0;
    uVar19 = 0xffffffff;
    do {
      piVar2 = (int *)(lVar14 + uVar18 * 0x24);
      if (piVar2[7] == -1) {
        uVar7 = (uint)uVar19;
        if ((uint)uVar19 == 0xffffffff) {
          uVar7 = (uint)uVar18;
        }
        uVar19 = (ulonglong)uVar7;
      }
      else if (((((int)param_2[2] == *piVar2) && (*(int *)((longlong)param_2 + 0x1c) == piVar2[1]))
               && (*(int *)((longlong)param_2 + 0x24) == piVar2[3])) &&
              ((int)param_2[6] == piVar2[5])) break;
      uVar7 = (uint)uVar18 + 1;
      uVar18 = (ulonglong)uVar7;
    } while (uVar7 < 0x14);
    if ((int)uVar18 == 0x14) {
      if ((int)uVar19 == -1) {
        uVar19 = 0;
        do {
          if (*(char *)(lVar14 + 0x20 + uVar19 * 0x24) == '\0') goto LAB_1800edabc;
          uVar7 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar7;
        } while (uVar7 < 0x14);
      }
      else {
LAB_1800edabc:
        puVar3 = (undefined4 *)(lVar14 + (longlong)(int)uVar19 * 0x24);
        *puVar3 = (int)param_2[2];
        puVar3[1] = *(undefined4 *)((longlong)param_2 + 0x1c);
        puVar3[2] = (int)param_2[4];
        puVar3[3] = *(undefined4 *)((longlong)param_2 + 0x24);
        puVar3[4] = (int)param_2[5];
        uVar7 = puVar3[7];
        puVar3[5] = (int)param_2[6];
        puVar3[6] = *(undefined4 *)((longlong)param_2 + 0x2c);
        if (uVar7 != 0xffffffff) {
          lVar14 = param_1[5];
          (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar14 + 0x28);
          uVar12 = uVar7 & 0xffff;
          uVar13 = uVar12 + 1;
          if (uVar12 < uVar13) {
            lVar15 = *(longlong *)
                      (*(longlong *)(lVar14 + 0x50) + (ulonglong)(uVar7 >> 0x10) * 0x10 + 8);
            do {
              uVar18 = -1L << ((ulonglong)uVar12 & 0x3f);
              uVar7 = (uVar12 & 0xffffffc0) + 0x40;
              if (uVar13 < uVar7) {
                uVar18 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar13 & 0x3f) & uVar18;
              }
              *(ulonglong *)(lVar15 + (ulonglong)(uVar12 >> 6) * 8) =
                   *(ulonglong *)(lVar15 + (ulonglong)(uVar12 >> 6) * 8) &
                   (uVar18 ^ 0xffffffffffffffff);
              uVar12 = uVar7;
            } while (uVar7 < uVar13);
          }
          (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar14 + 0x28);
          FUN_1800eeaf8(param_1,puVar3 + 7);
        }
        iVar10 = FUN_1800e7220(param_1[5],1);
        puVar3[7] = iVar10;
        if (iVar10 != -1) {
          lVar14 = param_1[5];
          lVar15 = *(longlong *)(lVar14 + 8);
          uVar7 = *(uint *)(lVar14 + 0x10);
          FUN_1800e7b48(lVar14,local_90,iVar10,0);
          plVar11 = *(longlong **)(lVar15 + (ulonglong)uVar7 * 0x20);
          (**(code **)(*plVar11 + 0xb0))(plVar11,param_2,local_90[0]);
          uVar7 = *(uint *)(param_1 + 2);
          uVar18 = 0;
          uVar19 = (ulonglong)(uint)puVar3[7];
          if (uVar7 != 0) {
            uVar13 = 0;
            uVar12 = uVar7;
            do {
              uVar8 = uVar12 + uVar13 >> 1;
              uVar18 = (ulonglong)uVar8;
              uVar17 = *(ulonglong *)(param_1[1] + uVar18 * 0x18);
              if (uVar17 <= uVar19) {
                if (uVar19 <= uVar17) break;
                uVar13 = uVar8 + 1;
                uVar18 = (ulonglong)(uVar8 + 1);
                uVar8 = uVar12;
              }
              uVar12 = uVar8;
            } while (uVar12 != uVar13);
          }
          if (((uint)uVar18 == uVar7) ||
             (puVar4 = (ulonglong *)(param_1[1] + uVar18 * 0x18), *puVar4 != uVar19)) {
            uVar13 = *(uint *)((longlong)param_1 + 0x14);
            if (uVar13 == uVar7) {
              uVar7 = 0x10;
              if (uVar13 != 0) {
                uVar7 = uVar13 << 1;
              }
              lVar14 = thunk_FUN_180102f80((ulonglong)uVar7 * 0x18);
              if (lVar14 != 0) {
                uVar17 = 0;
                if ((int)param_1[2] != 0) {
                  do {
                    uVar13 = (int)uVar17 + 1;
                    puVar5 = (undefined8 *)(param_1[1] + uVar17 * 0x18);
                    puVar6 = (undefined8 *)(lVar14 + uVar17 * 0x18);
                    uVar20 = *puVar5;
                    puVar6[1] = puVar5[1];
                    *puVar6 = uVar20;
                    puVar6[2] = puVar5[2];
                    uVar17 = (ulonglong)uVar13;
                  } while (uVar13 < *(uint *)(param_1 + 2));
                }
                thunk_FUN_180102fc0(*param_1);
                *param_1 = lVar14;
                param_1[1] = lVar14;
                *(uint *)((longlong)param_1 + 0x14) = uVar7;
              }
            }
            uVar17 = (ulonglong)*(uint *)(param_1 + 2);
            if (*(uint *)((longlong)param_1 + 0x14) != *(uint *)(param_1 + 2)) {
              while ((uint)uVar18 < (uint)uVar17) {
                uVar16 = (ulonglong)((uint)uVar17 - 1);
                puVar5 = (undefined8 *)(param_1[1] + uVar17 * 0x18);
                puVar6 = (undefined8 *)(param_1[1] + uVar16 * 0x18);
                uVar20 = *puVar6;
                puVar5[1] = puVar6[1];
                *puVar5 = uVar20;
                puVar5[2] = puVar6[2];
                uVar17 = uVar16;
              }
              *(int *)(param_1 + 2) = (int)param_1[2] + 1;
              *(undefined4 *)(param_1[1] + uVar18 * 0x18 + 8) = puVar3[7];
              *(undefined4 **)(param_1[1] + uVar18 * 0x18 + 0x10) = puVar3;
              *(ulonglong *)(param_1[1] + uVar18 * 0x18) = uVar19;
            }
          }
          else {
            puVar4[2] = (ulonglong)puVar3;
          }
        }
        *(undefined1 *)(puVar3 + 8) = 1;
      }
    }
    else {
      lVar14 = lVar14 + uVar18 * 0x24;
      iVar10 = *(int *)(lVar14 + 0x1c);
      *(undefined1 *)(lVar14 + 0x20) = 1;
    }
  }
  return iVar10;
}


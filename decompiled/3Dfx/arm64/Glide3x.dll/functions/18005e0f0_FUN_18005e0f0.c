/*
 * FUN_18005e0f0 at 18005e0f0
 * uint __cdecl FUN_18005e0f0(longlong param_1, ulonglong param_2, ulonglong * param_3)
 * Address ranges: 18005e0f0-18005e6af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18005e0f0(longlong param_1,ulonglong param_2,ulonglong *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  SIZE_T SVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  longlong local_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulonglong uStack_68;
  
  uVar25 = param_3[1];
  uVar16 = *param_3;
  uStack_68 = param_3[3];
  uVar17 = param_3[2];
  uVar9 = 0xffffffff;
  uVar19 = 0;
  lVar18 = *(longlong *)(param_1 + 8) + (param_2 & 0xffffffff) * 0x1ac0;
  uStack_70._4_4_ = (int)(uVar17 >> 0x20);
  uStack_78._0_4_ = (uint)uVar25;
  uStack_78._4_4_ = (uint)(uVar25 >> 0x20);
  local_80._4_4_ = (uint)(uVar16 >> 0x20);
  uVar6 = *(uint *)(lVar18 + 0x2354);
  uVar20 = ((ulonglong)
            (local_80._4_4_ |
            ((uint)uStack_78 |
            (uStack_78._4_4_ | (uStack_70._4_4_ - 1U | ((int)uStack_68 + -1) * 0x10) << 3) << 3) <<
            3) & 0xffffff) << 8 | uVar16 & 0xffffffff;
  local_80 = uVar16;
  uStack_78 = uVar25;
  uStack_70 = uVar17;
  if (uVar6 != 0) {
    uVar13 = 0;
    uVar12 = uVar6;
    do {
      uVar7 = uVar12 + uVar13 >> 1;
      uVar19 = (ulonglong)uVar7;
      uVar17 = *(ulonglong *)(*(longlong *)(lVar18 + 0x2348) + uVar19 * 0x48);
      if (uVar17 <= uVar20) {
        if (uVar20 <= uVar17) break;
        uVar13 = uVar7 + 1;
        uVar19 = (ulonglong)(uVar7 + 1);
        uVar7 = uVar12;
      }
      uVar12 = uVar7;
    } while (uVar12 != uVar13);
    if (((uint)uVar19 != uVar6) &&
       (*(ulonglong *)(*(longlong *)(lVar18 + 0x2348) + uVar19 * 0x48) == uVar20))
    goto LAB_18005e334;
  }
  plVar11 = (longlong *)(lVar18 + 0x2348);
  if (uVar6 == *(uint *)(lVar18 + 0x2350)) {
    uVar17 = CONCAT44(0,*(uint *)(lVar18 + 0x2350) << 1);
    SVar14 = uVar17 * 0x48;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar17;
    if (SUB168(auVar8 * ZEXT816(0x48),8) != 0) {
      SVar14 = 0xffffffffffffffff;
    }
    lVar15 = thunk_FUN_1800636c0(SVar14);
    if (lVar15 != 0) {
      uVar17 = 0;
      if (*(int *)(lVar18 + 0x2350) != 0) {
        do {
          uVar6 = (int)uVar17 + 1;
          puVar4 = (undefined8 *)(*plVar11 + uVar17 * 0x48);
          puVar5 = (undefined8 *)(lVar15 + uVar17 * 0x48);
          uVar24 = *puVar4;
          uVar23 = puVar4[3];
          uVar22 = puVar4[2];
          puVar5[1] = puVar4[1];
          *puVar5 = uVar24;
          puVar5[3] = uVar23;
          puVar5[2] = uVar22;
          uVar24 = puVar4[4];
          uVar23 = puVar4[7];
          uVar22 = puVar4[6];
          puVar5[5] = puVar4[5];
          puVar5[4] = uVar24;
          puVar5[7] = uVar23;
          puVar5[6] = uVar22;
          puVar5[8] = puVar4[8];
          uVar17 = (ulonglong)uVar6;
        } while (uVar6 < *(uint *)(lVar18 + 0x2350));
      }
      thunk_FUN_180063700((LPVOID)*plVar11);
      *plVar11 = lVar15;
      *(int *)(lVar18 + 0x2350) = *(int *)(lVar18 + 0x2350) << 1;
    }
  }
  uVar17 = (ulonglong)*(uint *)(lVar18 + 0x2354);
  while ((uint)uVar19 < (uint)uVar17) {
    uVar16 = (ulonglong)((uint)uVar17 - 1);
    puVar4 = (undefined8 *)(*plVar11 + uVar17 * 0x48);
    puVar5 = (undefined8 *)(*plVar11 + uVar16 * 0x48);
    uVar24 = *puVar5;
    uVar23 = puVar5[3];
    uVar22 = puVar5[2];
    puVar4[1] = puVar5[1];
    *puVar4 = uVar24;
    puVar4[3] = uVar23;
    puVar4[2] = uVar22;
    uVar24 = puVar5[4];
    uVar23 = puVar5[7];
    uVar22 = puVar5[6];
    puVar4[5] = puVar5[5];
    puVar4[4] = uVar24;
    puVar4[7] = uVar23;
    puVar4[6] = uVar22;
    puVar4[8] = puVar5[8];
    uVar17 = uVar16;
  }
  *(ulonglong *)(*plVar11 + uVar19 * 0x48) = uVar20;
  uVar16 = *param_3;
  uVar17 = param_3[3];
  uVar20 = param_3[2];
  lVar15 = *plVar11 + uVar19 * 0x48;
  *(ulonglong *)(lVar15 + 0x10) = param_3[1];
  *(ulonglong *)(lVar15 + 8) = uVar16;
  *(ulonglong *)(lVar15 + 0x20) = uVar17;
  *(ulonglong *)(lVar15 + 0x18) = uVar20;
  uVar20 = param_3[4];
  *(ulonglong *)(lVar15 + 0x30) = param_3[5];
  *(ulonglong *)(lVar15 + 0x28) = uVar20;
  *(int *)(lVar15 + 0x38) = (int)param_3[6];
  puVar10 = (undefined1 *)FUN_1800636c0(0x2d0);
  if (puVar10 != (undefined1 *)0x0) {
    FUN_180063e98(puVar10,0,0x2d0);
    lVar15 = 0;
    do {
      lVar21 = lVar15 + 1;
      *(undefined4 *)(puVar10 + lVar15 * 0x24 + 0x1c) = 0xffffffff;
      lVar15 = lVar21;
    } while (lVar21 != 0x14);
  }
  *(undefined1 **)(*plVar11 + uVar19 * 0x48 + 0x40) = puVar10;
  *(int *)(lVar18 + 0x2354) = *(int *)(lVar18 + 0x2354) + 1;
LAB_18005e334:
  plVar11 = (longlong *)(uVar19 * 0x48 + *(longlong *)(lVar18 + 0x2348) + 0x40);
  if (plVar11 != (longlong *)0x0) {
    lVar15 = *plVar11;
    uVar19 = 0;
    uVar20 = 0xffffffff;
    do {
      piVar1 = (int *)(lVar15 + uVar19 * 0x24);
      if (piVar1[7] == -1) {
        uVar6 = (uint)uVar20;
        if ((uint)uVar20 == 0xffffffff) {
          uVar6 = (uint)uVar19;
        }
        uVar20 = (ulonglong)uVar6;
      }
      else if (((((int)param_3[2] == *piVar1) && (*(int *)((longlong)param_3 + 0x1c) == piVar1[1]))
               && (*(int *)((longlong)param_3 + 0x24) == piVar1[3])) &&
              ((int)param_3[6] == piVar1[5])) break;
      uVar6 = (uint)uVar19 + 1;
      uVar19 = (ulonglong)uVar6;
    } while (uVar6 < 0x14);
    if ((int)uVar19 == 0x14) {
      if ((int)uVar20 == -1) {
        uVar20 = 0;
        do {
          if (*(char *)(lVar15 + 0x20 + uVar20 * 0x24) == '\0') goto LAB_18005e420;
          uVar6 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar6;
        } while (uVar6 < 0x14);
      }
      else {
LAB_18005e420:
        puVar2 = (undefined4 *)(lVar15 + (longlong)(int)uVar20 * 0x24);
        *puVar2 = (int)param_3[2];
        puVar2[1] = *(undefined4 *)((longlong)param_3 + 0x1c);
        puVar2[2] = (int)param_3[4];
        puVar2[3] = *(undefined4 *)((longlong)param_3 + 0x24);
        puVar2[4] = (int)param_3[5];
        uVar6 = puVar2[7];
        puVar2[5] = (int)param_3[6];
        puVar2[6] = *(undefined4 *)((longlong)param_3 + 0x2c);
        if (uVar6 != 0xffffffff) {
          lVar15 = *(longlong *)(lVar18 + 0x2358);
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar15 + 0x28));
          FUN_18004d518(lVar15,uVar6,1);
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar15 + 0x28));
          FUN_180048948(lVar18 + 0x2330,puVar2 + 7);
        }
        uVar9 = FUN_18004d658(*(longlong *)(lVar18 + 0x2358),1);
        puVar2[7] = uVar9;
        if (uVar9 != 0xffffffff) {
          lVar15 = *(longlong *)(lVar18 + 0x2358);
          lVar21 = *(longlong *)(lVar15 + 8);
          uVar6 = *(uint *)(lVar15 + 0x10);
          FUN_18004df88(lVar15,local_90,uVar9,0);
          plVar11 = *(longlong **)(lVar21 + (ulonglong)uVar6 * 0x20);
          (**(code **)(*plVar11 + 0xb0))(plVar11,param_3,local_90[0]);
          uVar6 = *(uint *)(lVar18 + 0x2340);
          uVar19 = 0;
          uVar20 = (ulonglong)(uint)puVar2[7];
          if (uVar6 != 0) {
            uVar13 = 0;
            uVar12 = uVar6;
            do {
              uVar7 = uVar12 + uVar13 >> 1;
              uVar19 = (ulonglong)uVar7;
              uVar17 = *(ulonglong *)(*(longlong *)(lVar18 + 0x2338) + uVar19 * 0x18);
              if (uVar17 <= uVar20) {
                if (uVar20 <= uVar17) break;
                uVar13 = uVar7 + 1;
                uVar19 = (ulonglong)(uVar7 + 1);
                uVar7 = uVar12;
              }
              uVar12 = uVar7;
            } while (uVar12 != uVar13);
          }
          if (((uint)uVar19 == uVar6) ||
             (puVar3 = (ulonglong *)(*(longlong *)(lVar18 + 0x2338) + uVar19 * 0x18),
             *puVar3 != uVar20)) {
            uVar13 = *(uint *)(lVar18 + 0x2344);
            if (uVar13 == uVar6) {
              uVar6 = 0x10;
              if (uVar13 != 0) {
                uVar6 = uVar13 << 1;
              }
              lVar15 = thunk_FUN_1800636c0((ulonglong)uVar6 * 0x18);
              if (lVar15 != 0) {
                uVar17 = 0;
                if (*(int *)(lVar18 + 0x2340) != 0) {
                  do {
                    uVar13 = (int)uVar17 + 1;
                    puVar4 = (undefined8 *)(*(longlong *)(lVar18 + 0x2338) + uVar17 * 0x18);
                    puVar5 = (undefined8 *)(lVar15 + uVar17 * 0x18);
                    uVar22 = *puVar4;
                    puVar5[1] = puVar4[1];
                    *puVar5 = uVar22;
                    puVar5[2] = puVar4[2];
                    uVar17 = (ulonglong)uVar13;
                  } while (uVar13 < *(uint *)(lVar18 + 0x2340));
                }
                thunk_FUN_180063700(*(LPVOID *)(lVar18 + 0x2330));
                *(uint *)(lVar18 + 0x2344) = uVar6;
                *(longlong *)(lVar18 + 0x2330) = lVar15;
                *(longlong *)(lVar18 + 0x2338) = lVar15;
              }
            }
            uVar17 = (ulonglong)*(uint *)(lVar18 + 0x2340);
            if (*(uint *)(lVar18 + 0x2344) != *(uint *)(lVar18 + 0x2340)) {
              while ((uint)uVar19 < (uint)uVar17) {
                uVar16 = (ulonglong)((uint)uVar17 - 1);
                puVar4 = (undefined8 *)(*(longlong *)(lVar18 + 0x2338) + uVar17 * 0x18);
                puVar5 = (undefined8 *)(*(longlong *)(lVar18 + 0x2338) + uVar16 * 0x18);
                uVar22 = *puVar5;
                puVar4[1] = puVar5[1];
                *puVar4 = uVar22;
                puVar4[2] = puVar5[2];
                uVar17 = uVar16;
              }
              *(int *)(lVar18 + 0x2340) = *(int *)(lVar18 + 0x2340) + 1;
              *(undefined4 *)(*(longlong *)(lVar18 + 0x2338) + uVar19 * 0x18 + 8) = puVar2[7];
              *(undefined4 **)(*(longlong *)(lVar18 + 0x2338) + uVar19 * 0x18 + 0x10) = puVar2;
              *(ulonglong *)(*(longlong *)(lVar18 + 0x2338) + uVar19 * 0x18) = uVar20;
            }
          }
          else {
            puVar3[2] = (ulonglong)puVar2;
          }
        }
        *(undefined1 *)(puVar2 + 8) = 1;
      }
    }
    else {
      lVar15 = lVar15 + uVar19 * 0x24;
      uVar9 = *(uint *)(lVar15 + 0x1c);
      *(undefined1 *)(lVar15 + 0x20) = 1;
    }
  }
  return uVar9;
}


/*
 * FUN_180205088 at 180205088
 * undefined FUN_180205088(void)
 * Address ranges: 180205088-180205547;180205718-180205737
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180205088(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined1 auStack_258 [536];
  
  uVar13 = 0;
  uVar2 = *(uint *)(param_1 + 0x24);
  uVar15 = ((ulonglong)*(uint *)(param_2 + 0x13) |
           (ulonglong)*(uint *)((longlong)param_2 + 0x9c) +
           (ulonglong)*(uint *)((longlong)param_2 + 0x94) +
           (longlong)*(int *)((longlong)param_2 + 0x8c) + (longlong)(int)param_2[0x11] +
           (longlong)(int)param_2[0x10] + (longlong)(int)param_2[0xf] + (longlong)(int)param_2[0xe]
           + (longlong)*(int *)((longlong)param_2 + 100) + param_2[0xb] + param_2[9] + param_2[7] +
           param_2[5] + param_2[3] + param_2[1] << 0x20) + (ulonglong)*(uint *)(param_2 + 0x12) +
           (longlong)*(int *)((longlong)param_2 + 0x84) +
           (longlong)*(int *)((longlong)param_2 + 0x7c) +
           (longlong)*(int *)((longlong)param_2 + 0x74) +
           (longlong)*(int *)((longlong)param_2 + 0x6c) + (ulonglong)*(uint *)(param_2 + 0xd) +
           (longlong)(int)param_2[0xc] + (ulonglong)*(uint *)(param_2 + 8) + param_2[10] +
           param_2[6] + param_2[4] + param_2[2] + *param_2;
  if (uVar2 != 0) {
    uVar10 = 0;
    uVar9 = uVar2;
    do {
      uVar3 = uVar9 + uVar10 >> 1;
      uVar13 = (ulonglong)uVar3;
      uVar12 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar13 * 0x18);
      if (uVar12 <= uVar15) {
        if (uVar15 <= uVar12) break;
        uVar10 = uVar3 + 1;
        uVar13 = (ulonglong)(uVar3 + 1);
        uVar3 = uVar9;
      }
      uVar9 = uVar3;
    } while (uVar9 != uVar10);
    if (((uint)uVar13 != uVar2) &&
       (*(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar13 * 0x18) == uVar15))
    goto LAB_1802052e8;
  }
  if (uVar2 == *(uint *)(param_1 + 0x20)) {
    uVar12 = CONCAT44(0,*(uint *)(param_1 + 0x20) << 1);
    lVar8 = uVar12 * 0x18;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar12;
    if (SUB168(auVar4 * ZEXT816(0x18),8) != 0) {
      lVar8 = -1;
    }
    lVar8 = FUN_1802229a8(lVar8);
    if (lVar8 != 0) {
      uVar12 = 0;
      if (*(int *)(param_1 + 0x20) != 0) {
        do {
          uVar2 = (int)uVar12 + 1;
          puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar12 * 0x18);
          puVar1 = (undefined8 *)(lVar8 + uVar12 * 0x18);
          uVar17 = *puVar7;
          puVar1[1] = puVar7[1];
          *puVar1 = uVar17;
          puVar1[2] = puVar7[2];
          uVar12 = (ulonglong)uVar2;
        } while (uVar2 < *(uint *)(param_1 + 0x20));
      }
      FUN_1802229d8(*(longlong *)(param_1 + 0x18));
      *(longlong *)(param_1 + 0x18) = lVar8;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) << 1;
    }
  }
  uVar12 = (ulonglong)*(uint *)(param_1 + 0x24);
  while ((uint)uVar13 < (uint)uVar12) {
    uVar11 = (ulonglong)((uint)uVar12 - 1);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar12 * 0x18);
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar11 * 0x18);
    uVar17 = *puVar1;
    puVar7[1] = puVar1[1];
    *puVar7 = uVar17;
    puVar7[2] = puVar1[2];
    uVar12 = uVar11;
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar13 * 0x18) = uVar15;
  *(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar13 * 0x18 + 8) = uVar15;
  puVar7 = (undefined8 *)FUN_1802229a8(0x10);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    *puVar7 = 0;
    puVar7[1] = 0;
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x18) + uVar13 * 0x18 + 0x10) = puVar7;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
LAB_1802052e8:
  puVar7 = (undefined8 *)(uVar13 * 0x18 + *(longlong *)(param_1 + 0x18) + 0x10);
  if (puVar7 == (undefined8 *)0x0) {
    return 0;
  }
  plVar14 = (longlong *)*puVar7;
  uVar2 = *(uint *)(plVar14 + 1);
  if (uVar2 != 0) {
    lVar8 = *plVar14;
    uVar15 = 0;
    do {
      lVar16 = lVar8 + uVar15 * 0xa8;
      iVar6 = FUN_180222c00(lVar16,param_2,0xa0);
      if (iVar6 == 0) {
        lVar8 = *(longlong *)(lVar16 + 0xa0);
        if (lVar8 != 0) {
          return lVar8;
        }
        break;
      }
      uVar10 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar10;
    } while (uVar10 < uVar2);
  }
  puVar5 = __hybrid_os_arm64x_dispatch_icall;
  if (param_2[1] != 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)();
  }
  if (param_2[1] != 0) {
    (*(code *)puVar5)(0x180224000);
    (*extraout_x11_00)();
  }
  if (param_2[2] != 0) {
    (*(code *)puVar5)(0x180224000);
    (*extraout_x11_01)();
  }
  if (param_2[2] != 0) {
    (*(code *)puVar5)(0x180224000);
    (*extraout_x11_02)();
  }
  if (param_2[3] != 0) {
    (*(code *)puVar5)(0x180224000);
    (*extraout_x11_03)();
  }
  if (param_2[3] != 0) {
    (*(code *)puVar5)(0x180224000);
    (*extraout_x11_04)();
  }
  if (param_2[4] != 0) {
    (*(code *)puVar5)(0x180224000);
    (*extraout_x11_05)();
  }
  if (param_2[4] != 0) {
    (*(code *)puVar5)(0x180224000);
    (*extraout_x11_06)();
  }
  if (param_2[5] != 0) {
    (*(code *)puVar5)(0x180224000);
    (*extraout_x11_07)();
  }
  if (param_2[5] != 0) {
    (*(code *)puVar5)(0x180224000);
    (*extraout_x11_08)();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_180104c48(auStack_258,param_2[7],0x148);
}


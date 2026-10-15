/*
 * FUN_1800e22c0 at 1800e22c0
 * undefined FUN_1800e22c0(void)
 * Address ranges: 1800e22c0-1800e2793
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e22c0(ulonglong param_1,ulonglong param_2,uint *param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  longlong extraout_x10;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong extraout_x11;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 local_40 [2];
  
  lVar15 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  uVar4 = *(uint *)(lVar15 + 0xc64);
  if (0xff < uVar4) {
    lVar13 = *(longlong *)(lVar15 + 0xc58);
    lVar10 = lVar13 + (ulonglong)(uVar4 - 1) * 0x38;
    uVar12 = (((ulonglong)*(uint *)(lVar10 + 8) & 3) << 2 |
              (ulonglong)(*(int *)(lVar10 + 0x2c) != 0) << 8 |
              (ulonglong)(*(int *)(lVar10 + 0x28) != 0) << 7 |
              (ulonglong)(*(int *)(lVar10 + 0x10) != 0) << 4 |
              (ulonglong)(*(int *)(lVar10 + 0x20) != 0) << 6 |
              (ulonglong)(*(int *)(lVar10 + 0x24) != 0) << 5 |
             (ulonglong)*(uint *)(lVar10 + 0xc) & 3) ^ (ulonglong)*(uint *)(lVar10 + 0x1c) |
             (ulonglong)(*(uint *)(lVar10 + 0x18) ^ *(uint *)(lVar10 + 0x14)) << 0x20;
    uVar9 = 0;
    uVar8 = uVar4;
    do {
      uVar5 = uVar8 + uVar9 >> 1;
      uVar16 = (ulonglong)uVar5;
      param_1 = *(ulonglong *)(lVar13 + uVar16 * 0x38);
      if (param_1 <= uVar12) {
        if (uVar12 <= param_1) break;
        uVar9 = uVar5 + 1;
        uVar16 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar8;
      }
      uVar8 = uVar5;
    } while (uVar8 != uVar9);
    if (((((((uint)uVar16 != uVar4) &&
           (puVar1 = (ulonglong *)(lVar13 + uVar16 * 0x38), *puVar1 == uVar12)) &&
          (*(uint *)(lVar10 + 8) == (uint)puVar1[1])) &&
         (((*(uint *)(lVar10 + 0xc) == *(uint *)((longlong)puVar1 + 0xc) &&
           (*(int *)(lVar10 + 0x10) == (int)puVar1[2])) &&
          ((*(uint *)(lVar10 + 0x14) == *(uint *)((longlong)puVar1 + 0x14) &&
           ((*(uint *)(lVar10 + 0x18) == (uint)puVar1[3] &&
            (*(uint *)(lVar10 + 0x1c) == *(uint *)((longlong)puVar1 + 0x1c))))))))) &&
        (*(int *)(lVar10 + 0x20) == (int)puVar1[4])) &&
       (((*(int *)(lVar10 + 0x24) == *(int *)((longlong)puVar1 + 0x24) &&
         (*(int *)(lVar10 + 0x28) == (int)puVar1[5])) &&
        (*(int *)(lVar10 + 0x2c) == *(int *)((longlong)puVar1 + 0x2c))))) {
      param_1 = FUN_1800e37b8(lVar15 + 0xc58,puVar1[6]);
      uVar4 = (uint)uVar16;
      while( true ) {
        uVar9 = uVar4 + 1;
        if (*(uint *)(lVar15 + 0xc64) <= uVar9) break;
        puVar2 = (undefined8 *)(*(longlong *)(lVar15 + 0xc58) + (ulonglong)uVar4 * 0x38);
        puVar3 = (undefined8 *)(*(longlong *)(lVar15 + 0xc58) + (ulonglong)uVar9 * 0x38);
        uVar19 = *puVar3;
        uVar18 = puVar3[3];
        uVar17 = puVar3[2];
        puVar2[1] = puVar3[1];
        *puVar2 = uVar19;
        puVar2[3] = uVar18;
        puVar2[2] = uVar17;
        uVar17 = puVar3[4];
        puVar2[5] = puVar3[5];
        puVar2[4] = uVar17;
        puVar2[6] = puVar3[6];
        uVar4 = uVar9;
      }
      *(uint *)(lVar15 + 0xc64) = *(uint *)(lVar15 + 0xc64) - 1;
    }
  }
  uVar12 = 0;
  uVar16 = (((ulonglong)*param_3 & 3) << 2 | (ulonglong)(param_3[9] != 0) << 8 |
            (ulonglong)(param_3[8] != 0) << 7 | (ulonglong)(param_3[6] != 0) << 6 |
            (ulonglong)(param_3[7] != 0) << 5 | (ulonglong)(param_3[2] != 0) << 4 |
           (ulonglong)param_3[1] & 3) ^ (ulonglong)param_3[5] |
           (ulonglong)(param_3[4] ^ param_3[3]) << 0x20;
  uVar4 = *(uint *)(lVar15 + 0xc64);
  if (uVar4 != 0) {
    uVar9 = 0;
    uVar8 = uVar4;
    do {
      uVar5 = uVar8 + uVar9 >> 1;
      uVar12 = (ulonglong)uVar5;
      uVar14 = *(ulonglong *)(*(longlong *)(lVar15 + 0xc58) + uVar12 * 0x38);
      if (uVar14 <= uVar16) {
        if (uVar16 <= uVar14) break;
        uVar9 = uVar5 + 1;
        uVar12 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar8;
      }
      uVar8 = uVar5;
    } while (uVar8 != uVar9);
    if (((uint)uVar12 != uVar4) &&
       (puVar1 = (ulonglong *)(*(longlong *)(lVar15 + 0xc58) + uVar12 * 0x38), *puVar1 == uVar16)) {
      uVar14 = func_0x000180200940(param_1,param_3,puVar1 + 1);
      lVar10 = extraout_x10;
      if ((uVar14 & 1) != 0) {
        FUN_1800e37b8(lVar15 + 0xc58,*(undefined8 *)(extraout_x11 + 0x30));
        local_40[0] = 0;
        *(ulonglong *)(*(longlong *)(lVar15 + 0xc58) + uVar12 * 0x38) = uVar16;
        uVar19 = *(undefined8 *)param_3;
        uVar18 = *(undefined8 *)(param_3 + 6);
        uVar17 = *(undefined8 *)(param_3 + 4);
        lVar10 = *(longlong *)(lVar15 + 0xc58) + uVar12 * 0x38;
        *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)(lVar10 + 8) = uVar19;
        *(undefined8 *)(lVar10 + 0x20) = uVar18;
        *(undefined8 *)(lVar10 + 0x18) = uVar17;
        *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(param_3 + 8);
        plVar7 = *(longlong **)
                  (*(longlong *)(lVar15 + 0xc68) + (ulonglong)*(uint *)(lVar15 + 0xc70) * 0x18c0 +
                  0x6b0);
        (**(code **)(*plVar7 + 0xb0))(plVar7,param_3,local_40);
        lVar10 = uVar12 * 0x38;
        *(undefined8 *)(*(longlong *)(lVar15 + 0xc58) + uVar12 * 0x38 + 0x30) = local_40[0];
      }
      goto LAB_1800e2750;
    }
  }
  if (uVar4 == *(uint *)(lVar15 + 0xc60)) {
    uVar14 = CONCAT44(0,*(uint *)(lVar15 + 0xc60) << 1);
    lVar10 = uVar14 * 0x38;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar14;
    if (SUB168(auVar6 * ZEXT816(0x38),8) != 0) {
      lVar10 = -1;
    }
    lVar10 = thunk_FUN_180102f80(lVar10);
    if (lVar10 != 0) {
      uVar14 = 0;
      if (*(int *)(lVar15 + 0xc60) != 0) {
        do {
          uVar4 = (int)uVar14 + 1;
          puVar2 = (undefined8 *)(*(longlong *)(lVar15 + 0xc58) + uVar14 * 0x38);
          puVar3 = (undefined8 *)(lVar10 + uVar14 * 0x38);
          uVar19 = *puVar2;
          uVar18 = puVar2[3];
          uVar17 = puVar2[2];
          puVar3[1] = puVar2[1];
          *puVar3 = uVar19;
          puVar3[3] = uVar18;
          puVar3[2] = uVar17;
          uVar17 = puVar2[4];
          puVar3[5] = puVar2[5];
          puVar3[4] = uVar17;
          puVar3[6] = puVar2[6];
          uVar14 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(lVar15 + 0xc60));
      }
      thunk_FUN_180102fc0(*(undefined8 *)(lVar15 + 0xc58));
      *(longlong *)(lVar15 + 0xc58) = lVar10;
      *(int *)(lVar15 + 0xc60) = *(int *)(lVar15 + 0xc60) << 1;
    }
  }
  uVar14 = (ulonglong)*(uint *)(lVar15 + 0xc64);
  while ((uint)uVar12 < (uint)uVar14) {
    uVar11 = (ulonglong)((uint)uVar14 - 1);
    puVar2 = (undefined8 *)(*(longlong *)(lVar15 + 0xc58) + uVar14 * 0x38);
    puVar3 = (undefined8 *)(*(longlong *)(lVar15 + 0xc58) + uVar11 * 0x38);
    uVar19 = *puVar3;
    uVar18 = puVar3[3];
    uVar17 = puVar3[2];
    puVar2[1] = puVar3[1];
    *puVar2 = uVar19;
    puVar2[3] = uVar18;
    puVar2[2] = uVar17;
    uVar17 = puVar3[4];
    puVar2[5] = puVar3[5];
    puVar2[4] = uVar17;
    puVar2[6] = puVar3[6];
    uVar14 = uVar11;
  }
  local_40[0] = 0;
  *(ulonglong *)(*(longlong *)(lVar15 + 0xc58) + uVar12 * 0x38) = uVar16;
  uVar19 = *(undefined8 *)param_3;
  uVar18 = *(undefined8 *)(param_3 + 6);
  uVar17 = *(undefined8 *)(param_3 + 4);
  lVar10 = *(longlong *)(lVar15 + 0xc58) + uVar12 * 0x38;
  *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(lVar10 + 8) = uVar19;
  *(undefined8 *)(lVar10 + 0x20) = uVar18;
  *(undefined8 *)(lVar10 + 0x18) = uVar17;
  *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(param_3 + 8);
  plVar7 = *(longlong **)
            (*(longlong *)(lVar15 + 0xc68) + (ulonglong)*(uint *)(lVar15 + 0xc70) * 0x18c0 + 0x6b0);
  (**(code **)(*plVar7 + 0xb0))(plVar7,param_3,local_40);
  lVar10 = uVar12 * 0x38;
  *(undefined8 *)(*(longlong *)(lVar15 + 0xc58) + uVar12 * 0x38 + 0x30) = local_40[0];
  *(int *)(lVar15 + 0xc64) = *(int *)(lVar15 + 0xc64) + 1;
LAB_1800e2750:
  lVar10 = *(longlong *)(lVar10 + *(longlong *)(lVar15 + 0xc58) + 0x30);
  if (lVar10 != *(longlong *)(lVar15 + 0x708)) {
    (**(code **)(**(longlong **)(lVar15 + 0x6b8) + 0x158))(*(longlong **)(lVar15 + 0x6b8),lVar10);
    *(longlong *)(lVar15 + 0x708) = lVar10;
  }
  return;
}


/*
 * FUN_180053c88 at 180053c88
 * undefined __cdecl FUN_180053c88(ulonglong param_1, ulonglong param_2, uint * param_3)
 * Address ranges: 180053c88-18005415b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180053c88(ulonglong param_1,ulonglong param_2,uint *param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  longlong *plVar7;
  uint uVar8;
  SIZE_T SVar9;
  uint uVar10;
  longlong extraout_x10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong extraout_x11;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 local_40 [2];
  
  lVar16 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  uVar4 = *(uint *)(lVar16 + 0xc64);
  if (0xff < uVar4) {
    lVar14 = *(longlong *)(lVar16 + 0xc58);
    lVar11 = lVar14 + (ulonglong)(uVar4 - 1) * 0x38;
    uVar13 = (((ulonglong)*(uint *)(lVar11 + 8) & 3) << 2 |
              (ulonglong)(*(int *)(lVar11 + 0x2c) != 0) << 8 |
              (ulonglong)(*(int *)(lVar11 + 0x28) != 0) << 7 |
              (ulonglong)(*(int *)(lVar11 + 0x10) != 0) << 4 |
              (ulonglong)(*(int *)(lVar11 + 0x20) != 0) << 6 |
              (ulonglong)(*(int *)(lVar11 + 0x24) != 0) << 5 |
             (ulonglong)*(uint *)(lVar11 + 0xc) & 3) ^ (ulonglong)*(uint *)(lVar11 + 0x1c) |
             (ulonglong)(*(uint *)(lVar11 + 0x18) ^ *(uint *)(lVar11 + 0x14)) << 0x20;
    uVar10 = 0;
    uVar8 = uVar4;
    do {
      uVar5 = uVar8 + uVar10 >> 1;
      uVar17 = (ulonglong)uVar5;
      param_1 = *(ulonglong *)(lVar14 + uVar17 * 0x38);
      if (param_1 <= uVar13) {
        if (uVar13 <= param_1) break;
        uVar10 = uVar5 + 1;
        uVar17 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar8;
      }
      uVar8 = uVar5;
    } while (uVar8 != uVar10);
    if (((((((uint)uVar17 != uVar4) &&
           (puVar1 = (ulonglong *)(lVar14 + uVar17 * 0x38), *puVar1 == uVar13)) &&
          (*(uint *)(lVar11 + 8) == (uint)puVar1[1])) &&
         (((*(uint *)(lVar11 + 0xc) == *(uint *)((longlong)puVar1 + 0xc) &&
           (*(int *)(lVar11 + 0x10) == (int)puVar1[2])) &&
          ((*(uint *)(lVar11 + 0x14) == *(uint *)((longlong)puVar1 + 0x14) &&
           ((*(uint *)(lVar11 + 0x18) == (uint)puVar1[3] &&
            (*(uint *)(lVar11 + 0x1c) == *(uint *)((longlong)puVar1 + 0x1c))))))))) &&
        (*(int *)(lVar11 + 0x20) == (int)puVar1[4])) &&
       (((*(int *)(lVar11 + 0x24) == *(int *)((longlong)puVar1 + 0x24) &&
         (*(int *)(lVar11 + 0x28) == (int)puVar1[5])) &&
        (*(int *)(lVar11 + 0x2c) == *(int *)((longlong)puVar1 + 0x2c))))) {
      param_1 = FUN_1800590e0(lVar16 + 0xc58,(longlong *)puVar1[6]);
      uVar4 = (uint)uVar17;
      while( true ) {
        uVar10 = uVar4 + 1;
        if (*(uint *)(lVar16 + 0xc64) <= uVar10) break;
        puVar2 = (undefined8 *)(*(longlong *)(lVar16 + 0xc58) + (ulonglong)uVar4 * 0x38);
        puVar3 = (undefined8 *)(*(longlong *)(lVar16 + 0xc58) + (ulonglong)uVar10 * 0x38);
        uVar20 = *puVar3;
        uVar19 = puVar3[3];
        uVar18 = puVar3[2];
        puVar2[1] = puVar3[1];
        *puVar2 = uVar20;
        puVar2[3] = uVar19;
        puVar2[2] = uVar18;
        uVar18 = puVar3[4];
        puVar2[5] = puVar3[5];
        puVar2[4] = uVar18;
        puVar2[6] = puVar3[6];
        uVar4 = uVar10;
      }
      *(uint *)(lVar16 + 0xc64) = *(uint *)(lVar16 + 0xc64) - 1;
    }
  }
  uVar13 = 0;
  uVar17 = (((ulonglong)*param_3 & 3) << 2 | (ulonglong)(param_3[9] != 0) << 8 |
            (ulonglong)(param_3[8] != 0) << 7 | (ulonglong)(param_3[6] != 0) << 6 |
            (ulonglong)(param_3[7] != 0) << 5 | (ulonglong)(param_3[2] != 0) << 4 |
           (ulonglong)param_3[1] & 3) ^ (ulonglong)param_3[5] |
           (ulonglong)(param_3[4] ^ param_3[3]) << 0x20;
  uVar4 = *(uint *)(lVar16 + 0xc64);
  if (uVar4 != 0) {
    uVar10 = 0;
    uVar8 = uVar4;
    do {
      uVar5 = uVar8 + uVar10 >> 1;
      uVar13 = (ulonglong)uVar5;
      uVar15 = *(ulonglong *)(*(longlong *)(lVar16 + 0xc58) + uVar13 * 0x38);
      if (uVar15 <= uVar17) {
        if (uVar17 <= uVar15) break;
        uVar10 = uVar5 + 1;
        uVar13 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar8;
      }
      uVar8 = uVar5;
    } while (uVar8 != uVar10);
    if (((uint)uVar13 != uVar4) &&
       (puVar1 = (ulonglong *)(*(longlong *)(lVar16 + 0xc58) + uVar13 * 0x38), *puVar1 == uVar17)) {
      uVar15 = FUN_180059030(param_1,(int *)param_3,(int *)(puVar1 + 1));
      lVar11 = extraout_x10;
      if ((uVar15 & 1) != 0) {
        FUN_1800590e0(lVar16 + 0xc58,*(longlong **)(extraout_x11 + 0x30));
        local_40[0] = 0;
        *(ulonglong *)(*(longlong *)(lVar16 + 0xc58) + uVar13 * 0x38) = uVar17;
        uVar20 = *(undefined8 *)param_3;
        uVar19 = *(undefined8 *)(param_3 + 6);
        uVar18 = *(undefined8 *)(param_3 + 4);
        lVar11 = *(longlong *)(lVar16 + 0xc58) + uVar13 * 0x38;
        *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)(lVar11 + 8) = uVar20;
        *(undefined8 *)(lVar11 + 0x20) = uVar19;
        *(undefined8 *)(lVar11 + 0x18) = uVar18;
        *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(param_3 + 8);
        plVar7 = *(longlong **)
                  (*(longlong *)(lVar16 + 0xc68) + (ulonglong)*(uint *)(lVar16 + 0xc70) * 0x18c0 +
                  0x6b0);
        (**(code **)(*plVar7 + 0xb0))(plVar7,param_3,local_40);
        lVar11 = uVar13 * 0x38;
        *(undefined8 *)(*(longlong *)(lVar16 + 0xc58) + uVar13 * 0x38 + 0x30) = local_40[0];
      }
      goto LAB_180054118;
    }
  }
  if (uVar4 == *(uint *)(lVar16 + 0xc60)) {
    uVar15 = CONCAT44(0,*(uint *)(lVar16 + 0xc60) << 1);
    SVar9 = uVar15 * 0x38;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar15;
    if (SUB168(auVar6 * ZEXT816(0x38),8) != 0) {
      SVar9 = 0xffffffffffffffff;
    }
    lVar11 = thunk_FUN_1800636c0(SVar9);
    if (lVar11 != 0) {
      uVar15 = 0;
      if (*(int *)(lVar16 + 0xc60) != 0) {
        do {
          uVar4 = (int)uVar15 + 1;
          puVar2 = (undefined8 *)(*(longlong *)(lVar16 + 0xc58) + uVar15 * 0x38);
          puVar3 = (undefined8 *)(lVar11 + uVar15 * 0x38);
          uVar20 = *puVar2;
          uVar19 = puVar2[3];
          uVar18 = puVar2[2];
          puVar3[1] = puVar2[1];
          *puVar3 = uVar20;
          puVar3[3] = uVar19;
          puVar3[2] = uVar18;
          uVar18 = puVar2[4];
          puVar3[5] = puVar2[5];
          puVar3[4] = uVar18;
          puVar3[6] = puVar2[6];
          uVar15 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(lVar16 + 0xc60));
      }
      thunk_FUN_180063700(*(LPVOID *)(lVar16 + 0xc58));
      *(longlong *)(lVar16 + 0xc58) = lVar11;
      *(int *)(lVar16 + 0xc60) = *(int *)(lVar16 + 0xc60) << 1;
    }
  }
  uVar15 = (ulonglong)*(uint *)(lVar16 + 0xc64);
  while ((uint)uVar13 < (uint)uVar15) {
    uVar12 = (ulonglong)((uint)uVar15 - 1);
    puVar2 = (undefined8 *)(*(longlong *)(lVar16 + 0xc58) + uVar15 * 0x38);
    puVar3 = (undefined8 *)(*(longlong *)(lVar16 + 0xc58) + uVar12 * 0x38);
    uVar20 = *puVar3;
    uVar19 = puVar3[3];
    uVar18 = puVar3[2];
    puVar2[1] = puVar3[1];
    *puVar2 = uVar20;
    puVar2[3] = uVar19;
    puVar2[2] = uVar18;
    uVar18 = puVar3[4];
    puVar2[5] = puVar3[5];
    puVar2[4] = uVar18;
    puVar2[6] = puVar3[6];
    uVar15 = uVar12;
  }
  local_40[0] = 0;
  *(ulonglong *)(*(longlong *)(lVar16 + 0xc58) + uVar13 * 0x38) = uVar17;
  uVar20 = *(undefined8 *)param_3;
  uVar19 = *(undefined8 *)(param_3 + 6);
  uVar18 = *(undefined8 *)(param_3 + 4);
  lVar11 = *(longlong *)(lVar16 + 0xc58) + uVar13 * 0x38;
  *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(lVar11 + 8) = uVar20;
  *(undefined8 *)(lVar11 + 0x20) = uVar19;
  *(undefined8 *)(lVar11 + 0x18) = uVar18;
  *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(param_3 + 8);
  plVar7 = *(longlong **)
            (*(longlong *)(lVar16 + 0xc68) + (ulonglong)*(uint *)(lVar16 + 0xc70) * 0x18c0 + 0x6b0);
  (**(code **)(*plVar7 + 0xb0))(plVar7,param_3,local_40);
  lVar11 = uVar13 * 0x38;
  *(undefined8 *)(*(longlong *)(lVar16 + 0xc58) + uVar13 * 0x38 + 0x30) = local_40[0];
  *(int *)(lVar16 + 0xc64) = *(int *)(lVar16 + 0xc64) + 1;
LAB_180054118:
  lVar11 = *(longlong *)(lVar11 + *(longlong *)(lVar16 + 0xc58) + 0x30);
  if (lVar11 != *(longlong *)(lVar16 + 0x708)) {
    (**(code **)(**(longlong **)(lVar16 + 0x6b8) + 0x158))(*(longlong **)(lVar16 + 0x6b8),lVar11);
    *(longlong *)(lVar16 + 0x708) = lVar11;
  }
  return;
}


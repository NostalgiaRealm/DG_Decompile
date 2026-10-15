/*
 * FUN_1801ff6a0 at 1801ff6a0
 * undefined FUN_1801ff6a0(void)
 * Address ranges: 1801ff6a0-1801ffba7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801ff6a0(ulonglong param_1,ulonglong param_2,uint *param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong extraout_x10;
  longlong lVar14;
  ulonglong uVar15;
  longlong extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 local_50 [2];
  
  lVar16 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  uVar4 = *(uint *)(lVar16 + 0xc64);
  if (0xff < uVar4) {
    lVar9 = *(longlong *)(lVar16 + 0xc58);
    lVar14 = lVar9 + (ulonglong)(uVar4 - 1) * 0x38;
    uVar12 = *(uint *)(lVar14 + 0x14);
    param_1 = (ulonglong)uVar12;
    uVar10 = (((ulonglong)*(uint *)(lVar14 + 8) & 3) << 2 |
              (ulonglong)(*(int *)(lVar14 + 0x2c) != 0) << 8 |
              (ulonglong)(*(int *)(lVar14 + 0x28) != 0) << 7 |
              (ulonglong)(*(int *)(lVar14 + 0x10) != 0) << 4 |
              (ulonglong)(*(int *)(lVar14 + 0x20) != 0) << 6 |
              (ulonglong)(*(int *)(lVar14 + 0x24) != 0) << 5 |
             (ulonglong)*(uint *)(lVar14 + 0xc) & 3) ^ (ulonglong)*(uint *)(lVar14 + 0x1c) |
             (ulonglong)(*(uint *)(lVar14 + 0x18) ^ uVar12) << 0x20;
    uVar13 = 0;
    uVar11 = uVar4;
    do {
      uVar5 = uVar11 + uVar13 >> 1;
      uVar18 = (ulonglong)uVar5;
      uVar17 = *(ulonglong *)(lVar9 + uVar18 * 0x38);
      if (uVar17 <= uVar10) {
        if (uVar10 <= uVar17) break;
        uVar13 = uVar5 + 1;
        uVar18 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar11;
      }
      uVar11 = uVar5;
    } while (uVar11 != uVar13);
    if (((((((uint)uVar18 != uVar4) &&
           (puVar1 = (ulonglong *)(lVar9 + uVar18 * 0x38), *puVar1 == uVar10)) &&
          (*(uint *)(lVar14 + 8) == (uint)puVar1[1])) &&
         (((*(uint *)(lVar14 + 0xc) == *(uint *)((longlong)puVar1 + 0xc) &&
           (*(int *)(lVar14 + 0x10) == (int)puVar1[2])) &&
          ((uVar12 == *(uint *)((longlong)puVar1 + 0x14) &&
           ((*(uint *)(lVar14 + 0x18) == (uint)puVar1[3] &&
            (*(uint *)(lVar14 + 0x1c) == *(uint *)((longlong)puVar1 + 0x1c))))))))) &&
        (*(int *)(lVar14 + 0x20) == (int)puVar1[4])) &&
       (((*(int *)(lVar14 + 0x24) == *(int *)((longlong)puVar1 + 0x24) &&
         (*(int *)(lVar14 + 0x28) == (int)puVar1[5])) &&
        (*(int *)(lVar14 + 0x2c) == *(int *)((longlong)puVar1 + 0x2c))))) {
      param_1 = FUN_1802009f0(lVar16 + 0xc58,puVar1[6]);
      uVar4 = (uint)uVar18;
      while( true ) {
        uVar13 = uVar4 + 1;
        if (*(uint *)(lVar16 + 0xc64) <= uVar13) break;
        puVar2 = (undefined8 *)(*(longlong *)(lVar16 + 0xc58) + (ulonglong)uVar4 * 0x38);
        puVar3 = (undefined8 *)(*(longlong *)(lVar16 + 0xc58) + (ulonglong)uVar13 * 0x38);
        uVar8 = *puVar3;
        uVar20 = puVar3[3];
        uVar19 = puVar3[2];
        puVar2[1] = puVar3[1];
        *puVar2 = uVar8;
        puVar2[3] = uVar20;
        puVar2[2] = uVar19;
        uVar8 = puVar3[4];
        puVar2[5] = puVar3[5];
        puVar2[4] = uVar8;
        puVar2[6] = puVar3[6];
        uVar4 = uVar13;
      }
      *(uint *)(lVar16 + 0xc64) = *(uint *)(lVar16 + 0xc64) - 1;
    }
  }
  puVar7 = __hybrid_os_arm64x_dispatch_icall;
  uVar10 = 0;
  uVar17 = (((ulonglong)*param_3 & 3) << 2 | (ulonglong)(param_3[9] != 0) << 8 |
            (ulonglong)(param_3[8] != 0) << 7 | (ulonglong)(param_3[6] != 0) << 6 |
            (ulonglong)(param_3[7] != 0) << 5 | (ulonglong)(param_3[2] != 0) << 4 |
           (ulonglong)param_3[1] & 3) ^ (ulonglong)param_3[5] |
           (ulonglong)(param_3[4] ^ param_3[3]) << 0x20;
  uVar4 = *(uint *)(lVar16 + 0xc64);
  if (uVar4 != 0) {
    uVar13 = 0;
    uVar12 = uVar4;
    do {
      uVar11 = uVar12 + uVar13 >> 1;
      uVar10 = (ulonglong)uVar11;
      uVar18 = *(ulonglong *)(*(longlong *)(lVar16 + 0xc58) + uVar10 * 0x38);
      if (uVar18 <= uVar17) {
        if (uVar17 <= uVar18) break;
        uVar13 = uVar11 + 1;
        uVar10 = (ulonglong)(uVar11 + 1);
        uVar11 = uVar12;
      }
      uVar12 = uVar11;
    } while (uVar12 != uVar13);
    if (((uint)uVar10 != uVar4) &&
       (puVar1 = (ulonglong *)(*(longlong *)(lVar16 + 0xc58) + uVar10 * 0x38), *puVar1 == uVar17)) {
      uVar18 = FUN_180200940(param_1,param_3,puVar1 + 1);
      lVar14 = extraout_x10;
      if ((uVar18 & 1) != 0) {
        FUN_1802009f0(lVar16 + 0xc58,*(undefined8 *)(extraout_x11 + 0x30));
        local_50[0] = 0;
        *(ulonglong *)(*(longlong *)(lVar16 + 0xc58) + uVar10 * 0x38) = uVar17;
        uVar8 = *(undefined8 *)param_3;
        uVar20 = *(undefined8 *)(param_3 + 6);
        uVar19 = *(undefined8 *)(param_3 + 4);
        lVar14 = *(longlong *)(lVar16 + 0xc58) + uVar10 * 0x38;
        *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)(lVar14 + 8) = uVar8;
        *(undefined8 *)(lVar14 + 0x20) = uVar20;
        *(undefined8 *)(lVar14 + 0x18) = uVar19;
        *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)(param_3 + 8);
        uVar8 = (*(code *)puVar7)(0x180224000);
        (*extraout_x11_00)(uVar8,param_3,local_50);
        lVar14 = uVar10 * 0x38;
        *(undefined8 *)(*(longlong *)(lVar16 + 0xc58) + uVar10 * 0x38 + 0x30) = local_50[0];
      }
      goto LAB_1801ffb54;
    }
  }
  if (uVar4 == *(uint *)(lVar16 + 0xc60)) {
    uVar18 = CONCAT44(0,*(uint *)(lVar16 + 0xc60) << 1);
    lVar14 = uVar18 * 0x38;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar18;
    if (SUB168(auVar6 * ZEXT816(0x38),8) != 0) {
      lVar14 = -1;
    }
    lVar14 = FUN_1802229a8(lVar14);
    if (lVar14 != 0) {
      uVar18 = 0;
      if (*(int *)(lVar16 + 0xc60) != 0) {
        do {
          uVar4 = (int)uVar18 + 1;
          puVar2 = (undefined8 *)(*(longlong *)(lVar16 + 0xc58) + uVar18 * 0x38);
          puVar3 = (undefined8 *)(lVar14 + uVar18 * 0x38);
          uVar8 = *puVar2;
          uVar20 = puVar2[3];
          uVar19 = puVar2[2];
          puVar3[1] = puVar2[1];
          *puVar3 = uVar8;
          puVar3[3] = uVar20;
          puVar3[2] = uVar19;
          uVar8 = puVar2[4];
          puVar3[5] = puVar2[5];
          puVar3[4] = uVar8;
          puVar3[6] = puVar2[6];
          uVar18 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(lVar16 + 0xc60));
      }
      FUN_1802229d8(*(undefined8 *)(lVar16 + 0xc58));
      *(longlong *)(lVar16 + 0xc58) = lVar14;
      *(int *)(lVar16 + 0xc60) = *(int *)(lVar16 + 0xc60) << 1;
    }
  }
  uVar18 = (ulonglong)*(uint *)(lVar16 + 0xc64);
  while ((uint)uVar10 < (uint)uVar18) {
    uVar15 = (ulonglong)((uint)uVar18 - 1);
    puVar2 = (undefined8 *)(*(longlong *)(lVar16 + 0xc58) + uVar18 * 0x38);
    puVar3 = (undefined8 *)(*(longlong *)(lVar16 + 0xc58) + uVar15 * 0x38);
    uVar8 = *puVar3;
    uVar20 = puVar3[3];
    uVar19 = puVar3[2];
    puVar2[1] = puVar3[1];
    *puVar2 = uVar8;
    puVar2[3] = uVar20;
    puVar2[2] = uVar19;
    uVar8 = puVar3[4];
    puVar2[5] = puVar3[5];
    puVar2[4] = uVar8;
    puVar2[6] = puVar3[6];
    uVar18 = uVar15;
  }
  local_50[0] = 0;
  *(ulonglong *)(*(longlong *)(lVar16 + 0xc58) + uVar10 * 0x38) = uVar17;
  uVar8 = *(undefined8 *)param_3;
  uVar20 = *(undefined8 *)(param_3 + 6);
  uVar19 = *(undefined8 *)(param_3 + 4);
  lVar14 = *(longlong *)(lVar16 + 0xc58) + uVar10 * 0x38;
  *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(lVar14 + 8) = uVar8;
  *(undefined8 *)(lVar14 + 0x20) = uVar20;
  *(undefined8 *)(lVar14 + 0x18) = uVar19;
  *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)(param_3 + 8);
  uVar8 = (*(code *)puVar7)(0x180224000);
  (*extraout_x11_01)(uVar8,param_3,local_50);
  lVar14 = uVar10 * 0x38;
  *(undefined8 *)(*(longlong *)(lVar16 + 0xc58) + uVar10 * 0x38 + 0x30) = local_50[0];
  *(int *)(lVar16 + 0xc64) = *(int *)(lVar16 + 0xc64) + 1;
LAB_1801ffb54:
  lVar14 = *(longlong *)(lVar14 + *(longlong *)(lVar16 + 0xc58) + 0x30);
  if (lVar14 != *(longlong *)(lVar16 + 0x708)) {
    uVar8 = (*(code *)puVar7)(0x180224000);
    (*extraout_x11_02)(uVar8,lVar14);
    *(longlong *)(lVar16 + 0x708) = lVar14;
  }
  return;
}


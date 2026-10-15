/*
 * FUN_18011db00 at 18011db00
 * undefined FUN_18011db00(void)
 * Address ranges: 18011db00-18011dd53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18011db00(longlong *param_1,uint *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar4 = *(uint *)(param_1 + 2);
  uVar12 = (ulonglong)*param_2;
  uVar11 = 0;
  if (uVar4 != 0) {
    uVar8 = 0;
    uVar7 = uVar4;
    do {
      uVar5 = uVar7 + uVar8 >> 1;
      uVar11 = (ulonglong)uVar5;
      uVar10 = *(ulonglong *)(param_1[1] + uVar11 * 0x78);
      if (uVar10 <= uVar12) {
        if (uVar12 <= uVar10) break;
        uVar8 = uVar5 + 1;
        uVar11 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar7;
      }
      uVar7 = uVar5;
    } while (uVar7 != uVar8);
  }
  if (((uint)uVar11 == uVar4) ||
     (puVar1 = (ulonglong *)(param_1[1] + uVar11 * 0x78), *puVar1 != uVar12)) {
    uVar8 = *(uint *)((longlong)param_1 + 0x14);
    if (uVar8 == uVar4) {
      uVar4 = 0x10;
      if (uVar8 != 0) {
        uVar4 = uVar8 << 1;
      }
      lVar6 = FUN_1802229a8((ulonglong)uVar4 * 0x78);
      if (lVar6 != 0) {
        uVar10 = 0;
        if ((int)param_1[2] != 0) {
          do {
            uVar8 = (int)uVar10 + 1;
            puVar2 = (undefined8 *)(param_1[1] + uVar10 * 0x78);
            puVar3 = (undefined8 *)(lVar6 + uVar10 * 0x78);
            uVar13 = *puVar2;
            uVar15 = puVar2[3];
            uVar14 = puVar2[2];
            puVar3[1] = puVar2[1];
            *puVar3 = uVar13;
            puVar3[3] = uVar15;
            puVar3[2] = uVar14;
            uVar13 = puVar2[4];
            uVar15 = puVar2[7];
            uVar14 = puVar2[6];
            puVar3[5] = puVar2[5];
            puVar3[4] = uVar13;
            puVar3[7] = uVar15;
            puVar3[6] = uVar14;
            uVar13 = puVar2[8];
            uVar15 = puVar2[0xb];
            uVar14 = puVar2[10];
            puVar3[9] = puVar2[9];
            puVar3[8] = uVar13;
            puVar3[0xb] = uVar15;
            puVar3[10] = uVar14;
            uVar13 = puVar2[0xc];
            puVar3[0xd] = puVar2[0xd];
            puVar3[0xc] = uVar13;
            puVar3[0xe] = puVar2[0xe];
            uVar10 = (ulonglong)uVar8;
          } while (uVar8 < *(uint *)(param_1 + 2));
        }
        FUN_1802229d8(*param_1);
        *param_1 = lVar6;
        param_1[1] = lVar6;
        *(uint *)((longlong)param_1 + 0x14) = uVar4;
      }
    }
    uVar10 = (ulonglong)*(uint *)(param_1 + 2);
    if (*(uint *)((longlong)param_1 + 0x14) != *(uint *)(param_1 + 2)) {
      while ((uint)uVar11 < (uint)uVar10) {
        uVar9 = (ulonglong)((uint)uVar10 - 1);
        puVar2 = (undefined8 *)(param_1[1] + uVar10 * 0x78);
        puVar3 = (undefined8 *)(param_1[1] + uVar9 * 0x78);
        uVar13 = *puVar3;
        uVar15 = puVar3[3];
        uVar14 = puVar3[2];
        puVar2[1] = puVar3[1];
        *puVar2 = uVar13;
        puVar2[3] = uVar15;
        puVar2[2] = uVar14;
        uVar13 = puVar3[4];
        uVar15 = puVar3[7];
        uVar14 = puVar3[6];
        puVar2[5] = puVar3[5];
        puVar2[4] = uVar13;
        puVar2[7] = uVar15;
        puVar2[6] = uVar14;
        uVar13 = puVar3[8];
        uVar15 = puVar3[0xb];
        uVar14 = puVar3[10];
        puVar2[9] = puVar3[9];
        puVar2[8] = uVar13;
        puVar2[0xb] = uVar15;
        puVar2[10] = uVar14;
        uVar13 = puVar3[0xc];
        puVar2[0xd] = puVar3[0xd];
        puVar2[0xc] = uVar13;
        puVar2[0xe] = puVar3[0xe];
        uVar10 = uVar9;
      }
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      *(uint *)(param_1[1] + uVar11 * 0x78 + 8) = *param_2;
      uVar13 = *param_3;
      uVar15 = param_3[3];
      uVar14 = param_3[2];
      lVar6 = param_1[1] + uVar11 * 0x78;
      *(undefined8 *)(lVar6 + 0x14) = param_3[1];
      *(undefined8 *)(lVar6 + 0xc) = uVar13;
      *(undefined8 *)(lVar6 + 0x24) = uVar15;
      *(undefined8 *)(lVar6 + 0x1c) = uVar14;
      uVar13 = param_3[4];
      uVar15 = param_3[7];
      uVar14 = param_3[6];
      *(undefined8 *)(lVar6 + 0x34) = param_3[5];
      *(undefined8 *)(lVar6 + 0x2c) = uVar13;
      *(undefined8 *)(lVar6 + 0x44) = uVar15;
      *(undefined8 *)(lVar6 + 0x3c) = uVar14;
      uVar13 = param_3[8];
      uVar15 = param_3[0xb];
      uVar14 = param_3[10];
      *(undefined8 *)(lVar6 + 0x54) = param_3[9];
      *(undefined8 *)(lVar6 + 0x4c) = uVar13;
      *(undefined8 *)(lVar6 + 100) = uVar15;
      *(undefined8 *)(lVar6 + 0x5c) = uVar14;
      *(undefined8 *)(lVar6 + 0x6c) = param_3[0xc];
      *(undefined4 *)(lVar6 + 0x74) = *(undefined4 *)(param_3 + 0xd);
      *(ulonglong *)(param_1[1] + uVar11 * 0x78) = uVar12;
    }
  }
  else {
    uVar13 = *param_3;
    uVar15 = param_3[3];
    uVar14 = param_3[2];
    *(undefined8 *)((longlong)puVar1 + 0x14) = param_3[1];
    *(undefined8 *)((longlong)puVar1 + 0xc) = uVar13;
    *(undefined8 *)((longlong)puVar1 + 0x24) = uVar15;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = uVar14;
    uVar13 = param_3[4];
    uVar15 = param_3[7];
    uVar14 = param_3[6];
    *(undefined8 *)((longlong)puVar1 + 0x34) = param_3[5];
    *(undefined8 *)((longlong)puVar1 + 0x2c) = uVar13;
    *(undefined8 *)((longlong)puVar1 + 0x44) = uVar15;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = uVar14;
    uVar13 = param_3[8];
    uVar15 = param_3[0xb];
    uVar14 = param_3[10];
    *(undefined8 *)((longlong)puVar1 + 0x54) = param_3[9];
    *(undefined8 *)((longlong)puVar1 + 0x4c) = uVar13;
    *(undefined8 *)((longlong)puVar1 + 100) = uVar15;
    *(undefined8 *)((longlong)puVar1 + 0x5c) = uVar14;
    *(undefined8 *)((longlong)puVar1 + 0x6c) = param_3[0xc];
    *(undefined4 *)((longlong)puVar1 + 0x74) = *(undefined4 *)(param_3 + 0xd);
  }
  return param_1[1] + uVar11 * 0x78 + 8;
}


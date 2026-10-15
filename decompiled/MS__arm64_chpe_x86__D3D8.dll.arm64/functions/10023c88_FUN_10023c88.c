/*
 * FUN_10023c88 at 10023c88
 * undefined FUN_10023c88(void)
 * Address ranges: 10023c88-10023f33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10023c88(int *param_1,uint *param_2,undefined8 *param_3)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  uVar7 = *puVar1;
  uVar14 = (ulonglong)*param_2;
  uVar13 = 0;
  if (uVar7 != 0) {
    uVar11 = 0;
    uVar10 = uVar7;
    do {
      uVar13 = uVar10 + uVar11 >> 1;
      uVar12 = *(ulonglong *)(param_1[1] + uVar13 * 0x78);
      uVar8 = uVar13;
      if (uVar12 <= uVar14) {
        if (uVar14 <= uVar12) break;
        uVar11 = uVar13 + 1;
        uVar13 = uVar11;
        uVar8 = uVar10;
      }
      uVar10 = uVar8;
    } while (uVar10 != uVar11);
  }
  piVar2 = param_1 + 1;
  if ((uVar13 == uVar7) || (puVar4 = (ulonglong *)(*piVar2 + uVar13 * 0x78), *puVar4 != uVar14)) {
    puVar3 = (uint *)(param_1 + 3);
    uVar11 = *puVar3;
    if (uVar11 == uVar7) {
      uVar7 = 0x10;
      if (uVar11 != 0) {
        uVar7 = uVar11 << 1;
      }
      iVar9 = FUN_100fece0(uVar7 * 0x78);
      if (iVar9 != 0) {
        uVar11 = 0;
        if (*puVar1 != 0) {
          do {
            uVar10 = uVar11 + 1;
            puVar5 = (undefined8 *)(*piVar2 + uVar11 * 0x78);
            puVar6 = (undefined8 *)(iVar9 + uVar11 * 0x78);
            uVar17 = *puVar5;
            uVar16 = puVar5[3];
            uVar15 = puVar5[2];
            puVar6[1] = puVar5[1];
            *puVar6 = uVar17;
            puVar6[3] = uVar16;
            puVar6[2] = uVar15;
            uVar17 = puVar5[4];
            uVar16 = puVar5[7];
            uVar15 = puVar5[6];
            puVar6[5] = puVar5[5];
            puVar6[4] = uVar17;
            puVar6[7] = uVar16;
            puVar6[6] = uVar15;
            uVar17 = puVar5[8];
            uVar16 = puVar5[0xb];
            uVar15 = puVar5[10];
            puVar6[9] = puVar5[9];
            puVar6[8] = uVar17;
            puVar6[0xb] = uVar16;
            puVar6[10] = uVar15;
            uVar15 = puVar5[0xc];
            puVar6[0xd] = puVar5[0xd];
            puVar6[0xc] = uVar15;
            puVar6[0xe] = puVar5[0xe];
            uVar11 = uVar10;
          } while (uVar10 < *puVar1);
        }
        FUN_100fed00(*param_1);
        *param_1 = iVar9;
        *piVar2 = iVar9;
        *puVar3 = uVar7;
      }
    }
    uVar7 = *puVar1;
    if (*puVar3 != uVar7) {
      for (; uVar13 < uVar7; uVar7 = uVar7 - 1) {
        puVar5 = (undefined8 *)(*piVar2 + uVar7 * 0x78);
        puVar5[1] = puVar5[-0xe];
        *puVar5 = puVar5[-0xf];
        puVar5[3] = puVar5[-0xc];
        puVar5[2] = puVar5[-0xd];
        puVar5[5] = puVar5[-10];
        puVar5[4] = puVar5[-0xb];
        puVar5[7] = puVar5[-8];
        puVar5[6] = puVar5[-9];
        puVar5[9] = puVar5[-6];
        puVar5[8] = puVar5[-7];
        puVar5[0xb] = puVar5[-4];
        puVar5[10] = puVar5[-5];
        puVar5[0xd] = puVar5[-2];
        puVar5[0xc] = puVar5[-3];
        puVar5[0xe] = puVar5[-1];
      }
      *puVar1 = *puVar1 + 1;
      *(uint *)(*piVar2 + uVar13 * 0x78 + 8) = *param_2;
      uVar17 = *param_3;
      uVar16 = param_3[3];
      uVar15 = param_3[2];
      iVar9 = *piVar2 + uVar13 * 0x78;
      *(undefined8 *)(iVar9 + 0x14) = param_3[1];
      *(undefined8 *)(iVar9 + 0xc) = uVar17;
      *(undefined8 *)(iVar9 + 0x24) = uVar16;
      *(undefined8 *)(iVar9 + 0x1c) = uVar15;
      uVar17 = param_3[4];
      uVar16 = param_3[7];
      uVar15 = param_3[6];
      *(undefined8 *)(iVar9 + 0x34) = param_3[5];
      *(undefined8 *)(iVar9 + 0x2c) = uVar17;
      *(undefined8 *)(iVar9 + 0x44) = uVar16;
      *(undefined8 *)(iVar9 + 0x3c) = uVar15;
      uVar17 = param_3[8];
      uVar16 = param_3[0xb];
      uVar15 = param_3[10];
      *(undefined8 *)(iVar9 + 0x54) = param_3[9];
      *(undefined8 *)(iVar9 + 0x4c) = uVar17;
      *(undefined8 *)(iVar9 + 100) = uVar16;
      *(undefined8 *)(iVar9 + 0x5c) = uVar15;
      *(undefined8 *)(iVar9 + 0x6c) = param_3[0xc];
      *(undefined4 *)(iVar9 + 0x74) = *(undefined4 *)(param_3 + 0xd);
      *(ulonglong *)(*piVar2 + uVar13 * 0x78) = uVar14;
    }
  }
  else {
    uVar17 = *param_3;
    uVar16 = param_3[3];
    uVar15 = param_3[2];
    *(undefined8 *)((int)puVar4 + 0x14) = param_3[1];
    *(undefined8 *)((int)puVar4 + 0xc) = uVar17;
    *(undefined8 *)((int)puVar4 + 0x24) = uVar16;
    *(undefined8 *)((int)puVar4 + 0x1c) = uVar15;
    uVar17 = param_3[4];
    uVar16 = param_3[7];
    uVar15 = param_3[6];
    *(undefined8 *)((int)puVar4 + 0x34) = param_3[5];
    *(undefined8 *)((int)puVar4 + 0x2c) = uVar17;
    *(undefined8 *)((int)puVar4 + 0x44) = uVar16;
    *(undefined8 *)((int)puVar4 + 0x3c) = uVar15;
    uVar17 = param_3[8];
    uVar16 = param_3[0xb];
    uVar15 = param_3[10];
    *(undefined8 *)((int)puVar4 + 0x54) = param_3[9];
    *(undefined8 *)((int)puVar4 + 0x4c) = uVar17;
    *(undefined8 *)((int)puVar4 + 100) = uVar16;
    *(undefined8 *)((int)puVar4 + 0x5c) = uVar15;
    *(undefined8 *)((int)puVar4 + 0x6c) = param_3[0xc];
    *(undefined4 *)((int)puVar4 + 0x74) = *(undefined4 *)(param_3 + 0xd);
  }
  return *piVar2 + uVar13 * 0x78 + 8;
}


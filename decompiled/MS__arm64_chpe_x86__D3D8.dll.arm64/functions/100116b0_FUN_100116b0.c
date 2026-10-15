/*
 * FUN_100116b0 at 100116b0
 * undefined FUN_100116b0(void)
 * Address ranges: 100116b0-10011897
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100116b0(int *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar1 = (uint *)(param_1 + 2);
  uVar8 = *puVar1;
  uVar13 = (ulonglong)*param_2;
  uVar12 = 0;
  if (uVar8 != 0) {
    uVar9 = 0;
    uVar7 = uVar8;
    do {
      uVar12 = uVar7 + uVar9 >> 1;
      uVar11 = *(ulonglong *)(*param_1 + uVar12 * 0xc0);
      uVar5 = uVar12;
      if (uVar11 <= uVar13) {
        if (uVar13 <= uVar11) break;
        uVar9 = uVar12 + 1;
        uVar12 = uVar9;
        uVar5 = uVar7;
      }
      uVar7 = uVar5;
    } while (uVar7 != uVar9);
    if ((uVar12 != uVar8) && (*(ulonglong *)(*param_1 + uVar12 * 0xc0) == uVar13))
    goto LAB_10011870;
  }
  puVar2 = (uint *)(param_1 + 1);
  if (uVar8 == *puVar2) {
    uVar11 = (ulonglong)(*puVar2 << 1) * 0xc0;
    uVar10 = (undefined4)uVar11;
    if (uVar11 >> 0x20 != 0) {
      uVar10 = 0xffffffff;
    }
    iVar6 = FUN_100fece0(uVar10);
    if (iVar6 != 0) {
      uVar8 = 0;
      if (*puVar2 != 0) {
        do {
          uVar9 = uVar8 + 1;
          puVar3 = (undefined8 *)(*param_1 + uVar8 * 0xc0);
          puVar4 = (undefined8 *)(iVar6 + uVar8 * 0xc0);
          uVar16 = *puVar3;
          uVar15 = puVar3[3];
          uVar14 = puVar3[2];
          puVar4[1] = puVar3[1];
          *puVar4 = uVar16;
          puVar4[3] = uVar15;
          puVar4[2] = uVar14;
          uVar16 = puVar3[4];
          uVar15 = puVar3[7];
          uVar14 = puVar3[6];
          puVar4[5] = puVar3[5];
          puVar4[4] = uVar16;
          puVar4[7] = uVar15;
          puVar4[6] = uVar14;
          uVar16 = puVar3[8];
          uVar15 = puVar3[0xb];
          uVar14 = puVar3[10];
          puVar4[9] = puVar3[9];
          puVar4[8] = uVar16;
          puVar4[0xb] = uVar15;
          puVar4[10] = uVar14;
          uVar16 = puVar3[0xc];
          uVar15 = puVar3[0xf];
          uVar14 = puVar3[0xe];
          puVar4[0xd] = puVar3[0xd];
          puVar4[0xc] = uVar16;
          puVar4[0xf] = uVar15;
          puVar4[0xe] = uVar14;
          uVar16 = puVar3[0x10];
          uVar15 = puVar3[0x13];
          uVar14 = puVar3[0x12];
          puVar4[0x11] = puVar3[0x11];
          puVar4[0x10] = uVar16;
          puVar4[0x13] = uVar15;
          puVar4[0x12] = uVar14;
          uVar16 = puVar3[0x14];
          uVar15 = puVar3[0x17];
          uVar14 = puVar3[0x16];
          puVar4[0x15] = puVar3[0x15];
          puVar4[0x14] = uVar16;
          puVar4[0x17] = uVar15;
          puVar4[0x16] = uVar14;
          uVar8 = uVar9;
        } while (uVar9 < *puVar2);
      }
      FUN_100fed00(*param_1);
      *param_1 = iVar6;
      *puVar2 = *puVar2 << 1;
    }
  }
  for (uVar8 = *puVar1; uVar12 < uVar8; uVar8 = uVar8 - 1) {
    puVar3 = (undefined8 *)(*param_1 + uVar8 * 0xc0);
    puVar3[1] = puVar3[-0x17];
    *puVar3 = puVar3[-0x18];
    puVar3[3] = puVar3[-0x15];
    puVar3[2] = puVar3[-0x16];
    puVar3[5] = puVar3[-0x13];
    puVar3[4] = puVar3[-0x14];
    puVar3[7] = puVar3[-0x11];
    puVar3[6] = puVar3[-0x12];
    puVar3[9] = puVar3[-0xf];
    puVar3[8] = puVar3[-0x10];
    puVar3[0xb] = puVar3[-0xd];
    puVar3[10] = puVar3[-0xe];
    puVar3[0xd] = puVar3[-0xb];
    puVar3[0xc] = puVar3[-0xc];
    puVar3[0xf] = puVar3[-9];
    puVar3[0xe] = puVar3[-10];
    puVar3[0x11] = puVar3[-7];
    puVar3[0x10] = puVar3[-8];
    puVar3[0x13] = puVar3[-5];
    puVar3[0x12] = puVar3[-6];
    puVar3[0x15] = puVar3[-3];
    puVar3[0x14] = puVar3[-4];
    puVar3[0x17] = puVar3[-1];
    puVar3[0x16] = puVar3[-2];
  }
  FUN_10011898(param_1,uVar12,uVar13,param_2);
  *puVar1 = *puVar1 + 1;
LAB_10011870:
  return *param_1 + uVar12 * 0xc0 + 0xc;
}


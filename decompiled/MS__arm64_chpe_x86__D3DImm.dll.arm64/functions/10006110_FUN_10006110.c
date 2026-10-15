/*
 * FUN_10006110 at 10006110
 * undefined FUN_10006110(void)
 * Address ranges: 10006110-100062eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10006110(int *param_1,uint param_2,undefined8 param_3,undefined4 *param_4,
                 undefined8 *param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar1 = (uint *)(param_1 + 3);
  puVar2 = (uint *)(param_1 + 2);
  uVar7 = *puVar1;
  if (uVar7 == *puVar2) {
    uVar6 = 0x10;
    if (uVar7 != 0) {
      uVar6 = uVar7 << 1;
    }
    iVar8 = FUN_10081da0(uVar6 * 0xa0 + 0xf);
    if (iVar8 != 0) {
      uVar7 = iVar8 + 0xfU & 0xfffffff0;
      if (*puVar2 != 0) {
        uVar9 = 0;
        do {
          uVar3 = uVar9 + 1;
          puVar4 = (undefined8 *)(param_1[1] + uVar9 * 0xa0);
          puVar5 = (undefined8 *)(uVar7 + uVar9 * 0xa0);
          uVar12 = *puVar4;
          uVar11 = puVar4[3];
          uVar10 = puVar4[2];
          puVar5[1] = puVar4[1];
          *puVar5 = uVar12;
          puVar5[3] = uVar11;
          puVar5[2] = uVar10;
          uVar12 = puVar4[4];
          uVar11 = puVar4[7];
          uVar10 = puVar4[6];
          puVar5[5] = puVar4[5];
          puVar5[4] = uVar12;
          puVar5[7] = uVar11;
          puVar5[6] = uVar10;
          uVar12 = puVar4[8];
          uVar11 = puVar4[0xb];
          uVar10 = puVar4[10];
          puVar5[9] = puVar4[9];
          puVar5[8] = uVar12;
          puVar5[0xb] = uVar11;
          puVar5[10] = uVar10;
          uVar12 = puVar4[0xc];
          uVar11 = puVar4[0xf];
          uVar10 = puVar4[0xe];
          puVar5[0xd] = puVar4[0xd];
          puVar5[0xc] = uVar12;
          puVar5[0xf] = uVar11;
          puVar5[0xe] = uVar10;
          uVar12 = puVar4[0x10];
          uVar11 = puVar4[0x13];
          uVar10 = puVar4[0x12];
          puVar5[0x11] = puVar4[0x11];
          puVar5[0x10] = uVar12;
          puVar5[0x13] = uVar11;
          puVar5[0x12] = uVar10;
          uVar9 = uVar3;
        } while (uVar3 < *puVar2);
      }
      FUN_10081dc0(*param_1);
      *param_1 = iVar8;
      param_1[1] = uVar7;
      *puVar1 = uVar6;
    }
  }
  uVar7 = *puVar2;
  if (*puVar1 != uVar7) {
    param_1 = param_1 + 1;
    for (; param_2 < uVar7; uVar7 = uVar7 - 1) {
      puVar4 = (undefined8 *)(*param_1 + uVar7 * 0xa0);
      puVar4[1] = puVar4[-0x13];
      *puVar4 = puVar4[-0x14];
      puVar4[3] = puVar4[-0x11];
      puVar4[2] = puVar4[-0x12];
      puVar4[5] = puVar4[-0xf];
      puVar4[4] = puVar4[-0x10];
      puVar4[7] = puVar4[-0xd];
      puVar4[6] = puVar4[-0xe];
      puVar4[9] = puVar4[-0xb];
      puVar4[8] = puVar4[-0xc];
      puVar4[0xb] = puVar4[-9];
      puVar4[10] = puVar4[-10];
      puVar4[0xd] = puVar4[-7];
      puVar4[0xc] = puVar4[-8];
      puVar4[0xf] = puVar4[-5];
      puVar4[0xe] = puVar4[-6];
      puVar4[0x11] = puVar4[-3];
      puVar4[0x10] = puVar4[-4];
      puVar4[0x13] = puVar4[-1];
      puVar4[0x12] = puVar4[-2];
    }
    *puVar2 = *puVar2 + 1;
    *(undefined4 *)(*param_1 + param_2 * 0xa0 + 0x10) = *param_4;
    uVar12 = *param_5;
    uVar11 = param_5[3];
    uVar10 = param_5[2];
    iVar8 = *param_1 + param_2 * 0xa0;
    *(undefined8 *)(iVar8 + 0x28) = param_5[1];
    *(undefined8 *)(iVar8 + 0x20) = uVar12;
    *(undefined8 *)(iVar8 + 0x38) = uVar11;
    *(undefined8 *)(iVar8 + 0x30) = uVar10;
    uVar12 = param_5[4];
    uVar11 = param_5[7];
    uVar10 = param_5[6];
    *(undefined8 *)(iVar8 + 0x48) = param_5[5];
    *(undefined8 *)(iVar8 + 0x40) = uVar12;
    *(undefined8 *)(iVar8 + 0x58) = uVar11;
    *(undefined8 *)(iVar8 + 0x50) = uVar10;
    uVar12 = param_5[8];
    uVar11 = param_5[0xb];
    uVar10 = param_5[10];
    *(undefined8 *)(iVar8 + 0x68) = param_5[9];
    *(undefined8 *)(iVar8 + 0x60) = uVar12;
    *(undefined8 *)(iVar8 + 0x78) = uVar11;
    *(undefined8 *)(iVar8 + 0x70) = uVar10;
    uVar12 = param_5[0xc];
    uVar11 = param_5[0xf];
    uVar10 = param_5[0xe];
    *(undefined8 *)(iVar8 + 0x88) = param_5[0xd];
    *(undefined8 *)(iVar8 + 0x80) = uVar12;
    *(undefined8 *)(iVar8 + 0x98) = uVar11;
    *(undefined8 *)(iVar8 + 0x90) = uVar10;
    *(undefined8 *)(*param_1 + param_2 * 0xa0) = param_3;
  }
  return;
}


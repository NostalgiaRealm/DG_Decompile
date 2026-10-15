/*
 * FUN_100064e0 at 100064e0
 * undefined FUN_100064e0(void)
 * Address ranges: 100064e0-1000668b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100064e0(int *param_1,uint param_2,undefined8 param_3,undefined4 *param_4,
                 undefined8 *param_5)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = (uint *)(param_1 + 3);
  puVar2 = (uint *)(param_1 + 2);
  uVar7 = *puVar1;
  if (uVar7 == *puVar2) {
    uVar5 = 0x10;
    if (uVar7 != 0) {
      uVar5 = uVar7 << 1;
    }
    iVar6 = FUN_10081da0(uVar5 << 7);
    if (iVar6 != 0) {
      uVar7 = 0;
      if (*puVar2 != 0) {
        do {
          puVar3 = (undefined8 *)(param_1[1] + uVar7 * 0x80);
          puVar4 = (undefined8 *)(iVar6 + uVar7 * 0x80);
          uVar7 = uVar7 + 1;
          uVar10 = *puVar3;
          uVar9 = puVar3[3];
          uVar8 = puVar3[2];
          puVar4[1] = puVar3[1];
          *puVar4 = uVar10;
          puVar4[3] = uVar9;
          puVar4[2] = uVar8;
          uVar10 = puVar3[4];
          uVar9 = puVar3[7];
          uVar8 = puVar3[6];
          puVar4[5] = puVar3[5];
          puVar4[4] = uVar10;
          puVar4[7] = uVar9;
          puVar4[6] = uVar8;
          uVar10 = puVar3[8];
          uVar9 = puVar3[0xb];
          uVar8 = puVar3[10];
          puVar4[9] = puVar3[9];
          puVar4[8] = uVar10;
          puVar4[0xb] = uVar9;
          puVar4[10] = uVar8;
          uVar10 = puVar3[0xc];
          uVar9 = puVar3[0xf];
          uVar8 = puVar3[0xe];
          puVar4[0xd] = puVar3[0xd];
          puVar4[0xc] = uVar10;
          puVar4[0xf] = uVar9;
          puVar4[0xe] = uVar8;
        } while (uVar7 < *puVar2);
      }
      FUN_10081dc0(*param_1);
      *param_1 = iVar6;
      param_1[1] = iVar6;
      *puVar1 = uVar5;
    }
  }
  uVar7 = *puVar2;
  if (*puVar1 != uVar7) {
    param_1 = param_1 + 1;
    for (; param_2 < uVar7; uVar7 = uVar7 - 1) {
      puVar3 = (undefined8 *)(*param_1 + uVar7 * 0x80);
      puVar3[1] = puVar3[-0xf];
      *puVar3 = puVar3[-0x10];
      puVar3[3] = puVar3[-0xd];
      puVar3[2] = puVar3[-0xe];
      puVar3[5] = puVar3[-0xb];
      puVar3[4] = puVar3[-0xc];
      puVar3[7] = puVar3[-9];
      puVar3[6] = puVar3[-10];
      puVar3[9] = puVar3[-7];
      puVar3[8] = puVar3[-8];
      puVar3[0xb] = puVar3[-5];
      puVar3[10] = puVar3[-6];
      puVar3[0xd] = puVar3[-3];
      puVar3[0xc] = puVar3[-4];
      puVar3[0xf] = puVar3[-1];
      puVar3[0xe] = puVar3[-2];
    }
    *puVar2 = *puVar2 + 1;
    *(undefined4 *)(*param_1 + param_2 * 0x80 + 8) = *param_4;
    uVar10 = *param_5;
    uVar9 = param_5[3];
    uVar8 = param_5[2];
    iVar6 = *param_1 + param_2 * 0x80;
    *(undefined8 *)(iVar6 + 0x14) = param_5[1];
    *(undefined8 *)(iVar6 + 0xc) = uVar10;
    *(undefined8 *)(iVar6 + 0x24) = uVar9;
    *(undefined8 *)(iVar6 + 0x1c) = uVar8;
    uVar10 = param_5[4];
    uVar9 = param_5[7];
    uVar8 = param_5[6];
    *(undefined8 *)(iVar6 + 0x34) = param_5[5];
    *(undefined8 *)(iVar6 + 0x2c) = uVar10;
    *(undefined8 *)(iVar6 + 0x44) = uVar9;
    *(undefined8 *)(iVar6 + 0x3c) = uVar8;
    uVar10 = param_5[8];
    uVar9 = param_5[0xb];
    uVar8 = param_5[10];
    *(undefined8 *)(iVar6 + 0x54) = param_5[9];
    *(undefined8 *)(iVar6 + 0x4c) = uVar10;
    *(undefined8 *)(iVar6 + 100) = uVar9;
    *(undefined8 *)(iVar6 + 0x5c) = uVar8;
    uVar8 = param_5[0xc];
    *(undefined8 *)(iVar6 + 0x74) = param_5[0xd];
    *(undefined8 *)(iVar6 + 0x6c) = uVar8;
    *(undefined8 *)(*param_1 + param_2 * 0x80) = param_3;
  }
  return;
}


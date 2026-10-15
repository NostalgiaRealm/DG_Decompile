/*
 * FUN_100062f0 at 100062f0
 * undefined FUN_100062f0(void)
 * Address ranges: 100062f0-100064d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100062f0(int *param_1,uint param_2,undefined8 param_3,undefined4 *param_4,
                 undefined8 *param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar1 = (uint *)(param_1 + 3);
  puVar2 = (uint *)(param_1 + 2);
  uVar8 = *puVar1;
  if (uVar8 == *puVar2) {
    uVar6 = 0x10;
    if (uVar8 != 0) {
      uVar6 = uVar8 << 1;
    }
    iVar7 = FUN_10081da0(uVar6 * 0x78);
    if (iVar7 != 0) {
      if (*puVar2 != 0) {
        uVar8 = 0;
        do {
          uVar3 = uVar8 + 1;
          puVar4 = (undefined8 *)(param_1[1] + uVar8 * 0x78);
          puVar5 = (undefined8 *)(iVar7 + uVar8 * 0x78);
          uVar11 = *puVar4;
          uVar10 = puVar4[3];
          uVar9 = puVar4[2];
          puVar5[1] = puVar4[1];
          *puVar5 = uVar11;
          puVar5[3] = uVar10;
          puVar5[2] = uVar9;
          uVar11 = puVar4[4];
          uVar10 = puVar4[7];
          uVar9 = puVar4[6];
          puVar5[5] = puVar4[5];
          puVar5[4] = uVar11;
          puVar5[7] = uVar10;
          puVar5[6] = uVar9;
          uVar11 = puVar4[8];
          uVar10 = puVar4[0xb];
          uVar9 = puVar4[10];
          puVar5[9] = puVar4[9];
          puVar5[8] = uVar11;
          puVar5[0xb] = uVar10;
          puVar5[10] = uVar9;
          uVar9 = puVar4[0xc];
          puVar5[0xd] = puVar4[0xd];
          puVar5[0xc] = uVar9;
          puVar5[0xe] = puVar4[0xe];
          uVar8 = uVar3;
        } while (uVar3 < *puVar2);
      }
      FUN_10081dc0(*param_1);
      *param_1 = iVar7;
      param_1[1] = iVar7;
      *puVar1 = uVar6;
    }
  }
  uVar8 = *puVar2;
  if (*puVar1 != uVar8) {
    param_1 = param_1 + 1;
    for (; param_2 < uVar8; uVar8 = uVar8 - 1) {
      puVar4 = (undefined8 *)(*param_1 + uVar8 * 0x78);
      puVar4[1] = puVar4[-0xe];
      *puVar4 = puVar4[-0xf];
      puVar4[3] = puVar4[-0xc];
      puVar4[2] = puVar4[-0xd];
      puVar4[5] = puVar4[-10];
      puVar4[4] = puVar4[-0xb];
      puVar4[7] = puVar4[-8];
      puVar4[6] = puVar4[-9];
      puVar4[9] = puVar4[-6];
      puVar4[8] = puVar4[-7];
      puVar4[0xb] = puVar4[-4];
      puVar4[10] = puVar4[-5];
      puVar4[0xd] = puVar4[-2];
      puVar4[0xc] = puVar4[-3];
      puVar4[0xe] = puVar4[-1];
    }
    *puVar2 = *puVar2 + 1;
    *(undefined4 *)(*param_1 + param_2 * 0x78 + 8) = *param_4;
    uVar11 = *param_5;
    uVar10 = param_5[3];
    uVar9 = param_5[2];
    iVar7 = *param_1 + param_2 * 0x78;
    *(undefined8 *)(iVar7 + 0x14) = param_5[1];
    *(undefined8 *)(iVar7 + 0xc) = uVar11;
    *(undefined8 *)(iVar7 + 0x24) = uVar10;
    *(undefined8 *)(iVar7 + 0x1c) = uVar9;
    uVar11 = param_5[4];
    uVar10 = param_5[7];
    uVar9 = param_5[6];
    *(undefined8 *)(iVar7 + 0x34) = param_5[5];
    *(undefined8 *)(iVar7 + 0x2c) = uVar11;
    *(undefined8 *)(iVar7 + 0x44) = uVar10;
    *(undefined8 *)(iVar7 + 0x3c) = uVar9;
    uVar11 = param_5[8];
    uVar10 = param_5[0xb];
    uVar9 = param_5[10];
    *(undefined8 *)(iVar7 + 0x54) = param_5[9];
    *(undefined8 *)(iVar7 + 0x4c) = uVar11;
    *(undefined8 *)(iVar7 + 100) = uVar10;
    *(undefined8 *)(iVar7 + 0x5c) = uVar9;
    *(undefined8 *)(iVar7 + 0x6c) = param_5[0xc];
    *(undefined4 *)(iVar7 + 0x74) = *(undefined4 *)(param_5 + 0xd);
    *(undefined8 *)(*param_1 + param_2 * 0x78) = param_3;
  }
  return;
}


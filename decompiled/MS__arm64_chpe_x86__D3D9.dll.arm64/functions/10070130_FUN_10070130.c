/*
 * FUN_10070130 at 10070130
 * undefined FUN_10070130(void)
 * Address ranges: 10070130-100702df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10070130(int *param_1,uint param_2,undefined8 *param_3,undefined4 *param_4)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar1 = (uint *)(param_1 + 2);
  uVar7 = param_1[3];
  if (uVar7 == *puVar1) {
    iVar5 = 0x10;
    if (uVar7 != 0) {
      iVar5 = uVar7 << 1;
    }
    iVar6 = FUN_101322b0(iVar5 << 6);
    if (iVar6 != 0) {
      uVar7 = 0;
      if (*puVar1 != 0) {
        do {
          puVar3 = (undefined8 *)(param_1[1] + uVar7 * 0x40);
          puVar4 = (undefined8 *)(iVar6 + uVar7 * 0x40);
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
        } while (uVar7 < *puVar1);
      }
      FUN_101322d0(*param_1);
      *param_1 = iVar6;
      param_1[1] = iVar6;
      param_1[3] = iVar5;
    }
  }
  uVar7 = param_1[2];
  if (param_1[3] != uVar7) {
    piVar2 = param_1 + 1;
    for (; param_2 < uVar7; uVar7 = uVar7 - 1) {
      puVar3 = (undefined8 *)(*piVar2 + uVar7 * 0x40);
      puVar3[1] = puVar3[-7];
      *puVar3 = puVar3[-8];
      puVar3[3] = puVar3[-5];
      puVar3[2] = puVar3[-6];
      puVar3[5] = puVar3[-3];
      puVar3[4] = puVar3[-4];
      puVar3[7] = puVar3[-1];
      puVar3[6] = puVar3[-2];
    }
    uVar12 = param_3[1];
    uVar11 = *param_3;
    uVar10 = param_3[3];
    uVar9 = param_3[2];
    *puVar1 = param_1[2] + 1;
    puVar3 = (undefined8 *)(*piVar2 + param_2 * 0x40);
    uVar8 = param_3[6];
    puVar3[1] = uVar12;
    *puVar3 = uVar11;
    puVar3[3] = uVar10;
    puVar3[2] = uVar9;
    uVar9 = param_3[4];
    puVar3[5] = param_3[5];
    puVar3[4] = uVar9;
    puVar3[6] = uVar8;
    *(undefined4 *)(*piVar2 + param_2 * 0x40 + 0x38) = *param_4;
  }
  return;
}


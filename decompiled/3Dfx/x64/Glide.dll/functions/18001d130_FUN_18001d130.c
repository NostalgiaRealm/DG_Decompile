/*
 * FUN_18001d130 at 18001d130
 * ulonglong __fastcall FUN_18001d130(longlong param_1)
 * Address ranges: 18001d130-18001d2ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18001d130(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 local_188 [48];
  
  puVar9 = local_188;
  puVar7 = local_188;
  lVar12 = 3;
  puVar10 = (undefined8 *)(param_1 + 0x3568);
  lVar8 = 3;
  puVar6 = puVar10;
  do {
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *puVar9 = *puVar6;
    puVar9[1] = uVar1;
    uVar1 = puVar6[4];
    uVar4 = puVar6[5];
    puVar9[2] = uVar2;
    puVar9[3] = uVar3;
    uVar2 = puVar6[6];
    uVar3 = puVar6[7];
    puVar9[4] = uVar1;
    puVar9[5] = uVar4;
    uVar1 = puVar6[8];
    uVar4 = puVar6[9];
    puVar9[6] = uVar2;
    puVar9[7] = uVar3;
    uVar2 = puVar6[10];
    uVar3 = puVar6[0xb];
    puVar9[8] = uVar1;
    puVar9[9] = uVar4;
    uVar1 = puVar6[0xc];
    uVar4 = puVar6[0xd];
    puVar9[10] = uVar2;
    puVar9[0xb] = uVar3;
    uVar2 = puVar6[0xe];
    uVar3 = puVar6[0xf];
    puVar6 = puVar6 + 0x10;
    puVar9[0xc] = uVar1;
    puVar9[0xd] = uVar4;
    puVar9[0xe] = uVar2;
    puVar9[0xf] = uVar3;
    puVar9 = puVar9 + 0x10;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  uVar5 = *(uint *)(param_1 + 0xdc);
  uVar11 = 1;
  if (1 < uVar5) {
    do {
      puVar9 = puVar10 + (ulonglong)(uVar11 - 1) * 0x30;
      puVar6 = puVar10 + (ulonglong)uVar11 * 0x30;
      lVar8 = 3;
      do {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar9 = *puVar6;
        puVar9[1] = uVar1;
        uVar1 = puVar6[4];
        uVar4 = puVar6[5];
        puVar9[2] = uVar2;
        puVar9[3] = uVar3;
        uVar2 = puVar6[6];
        uVar3 = puVar6[7];
        puVar9[4] = uVar1;
        puVar9[5] = uVar4;
        uVar1 = puVar6[8];
        uVar4 = puVar6[9];
        puVar9[6] = uVar2;
        puVar9[7] = uVar3;
        uVar2 = puVar6[10];
        uVar3 = puVar6[0xb];
        puVar9[8] = uVar1;
        puVar9[9] = uVar4;
        uVar1 = puVar6[0xc];
        uVar4 = puVar6[0xd];
        puVar9[10] = uVar2;
        puVar9[0xb] = uVar3;
        uVar2 = puVar6[0xe];
        uVar3 = puVar6[0xf];
        puVar6 = puVar6 + 0x10;
        puVar9[0xc] = uVar1;
        puVar9[0xd] = uVar4;
        puVar9[0xe] = uVar2;
        puVar9[0xf] = uVar3;
        puVar9 = puVar9 + 0x10;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      uVar5 = *(uint *)(param_1 + 0xdc);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar5);
  }
  puVar10 = (undefined8 *)((ulonglong)(uVar5 - 1) * 0x180 + 0x3568 + param_1);
  do {
    uVar1 = puVar7[1];
    uVar2 = puVar7[2];
    uVar3 = puVar7[3];
    *puVar10 = *puVar7;
    puVar10[1] = uVar1;
    uVar1 = puVar7[4];
    uVar4 = puVar7[5];
    puVar10[2] = uVar2;
    puVar10[3] = uVar3;
    uVar2 = puVar7[6];
    uVar3 = puVar7[7];
    puVar10[4] = uVar1;
    puVar10[5] = uVar4;
    uVar1 = puVar7[8];
    uVar4 = puVar7[9];
    puVar10[6] = uVar2;
    puVar10[7] = uVar3;
    uVar2 = puVar7[10];
    uVar3 = puVar7[0xb];
    puVar10[8] = uVar1;
    puVar10[9] = uVar4;
    uVar1 = puVar7[0xc];
    uVar4 = puVar7[0xd];
    puVar10[10] = uVar2;
    puVar10[0xb] = uVar3;
    uVar2 = puVar7[0xe];
    uVar3 = puVar7[0xf];
    puVar7 = puVar7 + 0x10;
    puVar10[0xc] = uVar1;
    puVar10[0xd] = uVar4;
    puVar10[0xe] = uVar2;
    puVar10[0xf] = uVar3;
    puVar10 = puVar10 + 0x10;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  uVar5 = *(int *)(param_1 + 0x3548) + 1;
  *(uint *)(param_1 + 0x3548) = uVar5 % *(uint *)(param_1 + 0xdc);
  return (ulonglong)uVar5 / (ulonglong)*(uint *)(param_1 + 0xdc);
}


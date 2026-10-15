/*
 * FUN_100e8bf8 at 100e8bf8
 * undefined FUN_100e8bf8(void)
 * Address ranges: 100e8bf8-100e8d13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100e8bf8(int *param_1,ulonglong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  puVar1 = (uint *)(param_1 + 2);
  uVar8 = *puVar1;
  if (uVar8 != 0) {
    uVar9 = *param_2;
    uVar7 = 0;
    uVar6 = uVar8;
    do {
      uVar11 = uVar6 + uVar7 >> 1;
      uVar10 = *(ulonglong *)(*param_1 + uVar11 * 0x18);
      uVar5 = uVar11;
      if (uVar10 <= uVar9) {
        if (uVar9 <= uVar10) break;
        uVar7 = uVar11 + 1;
        uVar11 = uVar7;
        uVar5 = uVar6;
      }
      uVar6 = uVar5;
    } while (uVar6 != uVar7);
    if ((uVar11 != uVar8) && (puVar2 = (ulonglong *)(*param_1 + uVar11 * 0x18), *puVar2 == uVar9)) {
      puVar4 = *(undefined4 **)(puVar2 + 2);
      if (puVar4 != (undefined4 *)0x0) {
        FUN_100fed00(*puVar4);
        FUN_100fec90(puVar4,0xc);
      }
      uVar8 = *puVar1;
      uVar11 = uVar11 + 1;
      if (uVar11 < uVar8) {
        do {
          uVar7 = uVar11 + 1;
          puVar3 = (undefined8 *)(*param_1 + uVar11 * 0x18);
          puVar3[-2] = puVar3[1];
          puVar3[-3] = *puVar3;
          puVar3[-1] = puVar3[2];
          uVar8 = *puVar1;
          uVar11 = uVar7;
        } while (uVar7 < uVar8);
      }
      *puVar1 = uVar8 - 1;
      return 1;
    }
  }
  return 0;
}


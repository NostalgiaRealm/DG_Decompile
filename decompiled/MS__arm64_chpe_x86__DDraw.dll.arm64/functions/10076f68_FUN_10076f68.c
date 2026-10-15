/*
 * FUN_10076f68 at 10076f68
 * undefined FUN_10076f68(void)
 * Address ranges: 10076f68-1007702b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10076f68(int param_1,uint *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  puVar1 = (uint *)(param_1 + 8);
  uVar3 = *puVar1;
  if (uVar3 != 0) {
    uVar4 = *param_2;
    uVar9 = 0;
    uVar7 = uVar3;
    do {
      uVar6 = uVar7 + uVar9 >> 1;
      uVar8 = *(ulonglong *)(*(int *)(param_1 + 4) + uVar6 * 0x10);
      uVar5 = uVar6;
      if (uVar8 <= uVar4) {
        if (uVar4 <= uVar8) break;
        uVar9 = uVar6 + 1;
        uVar6 = uVar9;
        uVar5 = uVar7;
      }
      uVar7 = uVar5;
    } while (uVar7 != uVar9);
    if ((uVar6 != uVar3) &&
       (*(ulonglong *)(*(int *)(param_1 + 4) + uVar6 * 0x10) == (ulonglong)uVar4)) {
      uVar6 = uVar6 + 1;
      if (uVar6 < uVar3) {
        do {
          puVar2 = (undefined8 *)(*(int *)(param_1 + 4) + uVar6 * 0x10);
          uVar6 = uVar6 + 1;
          puVar2[-1] = puVar2[1];
          puVar2[-2] = *puVar2;
        } while (uVar6 < *puVar1);
      }
      *puVar1 = *puVar1 - 1;
    }
  }
  return;
}


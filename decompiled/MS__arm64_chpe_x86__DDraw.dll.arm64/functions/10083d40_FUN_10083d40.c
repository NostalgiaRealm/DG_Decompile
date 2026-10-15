/*
 * FUN_10083d40 at 10083d40
 * undefined FUN_10083d40(void)
 * Address ranges: 10083d40-10083e17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10083d40(int param_1,ulonglong *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  puVar1 = (uint *)(param_1 + 8);
  uVar3 = *puVar1;
  if (uVar3 != 0) {
    uVar9 = *param_2;
    uVar8 = 0;
    uVar7 = uVar3;
    do {
      uVar5 = uVar7 + uVar8 >> 1;
      uVar6 = *(ulonglong *)(*(int *)(param_1 + 4) + uVar5 * 0x18);
      uVar4 = uVar5;
      if (uVar6 <= uVar9) {
        if (uVar9 <= uVar6) break;
        uVar8 = uVar5 + 1;
        uVar5 = uVar8;
        uVar4 = uVar7;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar8);
    if ((uVar5 != uVar3) && (*(ulonglong *)(*(int *)(param_1 + 4) + uVar5 * 0x18) == uVar9)) {
      uVar5 = uVar5 + 1;
      if (uVar5 < uVar3) {
        do {
          uVar3 = uVar5 + 1;
          puVar2 = (undefined8 *)(*(int *)(param_1 + 4) + uVar5 * 0x18);
          puVar2[-2] = puVar2[1];
          puVar2[-3] = *puVar2;
          puVar2[-1] = puVar2[2];
          uVar5 = uVar3;
        } while (uVar3 < *puVar1);
      }
      *puVar1 = *puVar1 - 1;
    }
  }
  return;
}


/*
 * FUN_180041ad0 at 180041ad0
 * undefined FUN_180041ad0(void)
 * Address ranges: 180041ad0-180041b83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180041ad0(longlong param_1,ulonglong *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 != 0) {
    uVar9 = *param_2;
    uVar3 = 0;
    uVar7 = uVar1;
    do {
      uVar5 = uVar7 + uVar3 >> 1;
      uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar5 * 0x18);
      uVar2 = uVar5;
      if (uVar4 <= uVar9) {
        if (uVar9 <= uVar4) break;
        uVar3 = uVar5 + 1;
        uVar5 = uVar5 + 1;
        uVar2 = uVar7;
      }
      uVar7 = uVar2;
    } while (uVar7 != uVar3);
    if ((uVar5 != uVar1) &&
       (*(ulonglong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar5 * 0x18) == uVar9)) {
      uVar5 = uVar5 + 1;
      if (uVar5 < uVar1) {
        do {
          puVar8 = (undefined8 *)(*(longlong *)(param_1 + 8) + (ulonglong)(uVar5 - 1) * 0x18);
          puVar6 = (undefined8 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar5 * 0x18);
          uVar5 = uVar5 + 1;
          uVar10 = *puVar6;
          puVar8[1] = puVar6[1];
          *puVar8 = uVar10;
          puVar8[2] = puVar6[2];
        } while (uVar5 < *(uint *)(param_1 + 0x10));
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    }
  }
  return;
}


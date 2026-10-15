/*
 * FUN_180044db8 at 180044db8
 * undefined __cdecl FUN_180044db8(longlong param_1, uint * param_2)
 * Address ranges: 180044db8-180044e77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180044db8(longlong param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar3 != 0) {
    uVar4 = *param_2;
    uVar8 = 0;
    uVar7 = uVar3;
    do {
      uVar5 = uVar7 + uVar8 >> 1;
      uVar6 = (ulonglong)uVar5;
      uVar9 = *(ulonglong *)(*(longlong *)(param_1 + 8) + uVar6 * 0x18);
      if (uVar9 <= uVar4) {
        if (uVar4 <= uVar9) break;
        uVar8 = uVar5 + 1;
        uVar6 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar7;
      }
      uVar7 = uVar5;
    } while (uVar7 != uVar8);
    if (((uint)uVar6 != uVar3) &&
       (*(ulonglong *)(*(longlong *)(param_1 + 8) + uVar6 * 0x18) == (ulonglong)uVar4)) {
      uVar8 = (uint)uVar6 + 1;
      if (uVar8 < uVar3) {
        do {
          uVar6 = (ulonglong)uVar8;
          puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + (ulonglong)(uVar8 - 1) * 0x18);
          uVar8 = uVar8 + 1;
          puVar2 = (undefined8 *)(*(longlong *)(param_1 + 8) + uVar6 * 0x18);
          uVar10 = *puVar2;
          puVar1[1] = puVar2[1];
          *puVar1 = uVar10;
          puVar1[2] = puVar2[2];
        } while (uVar8 < *(uint *)(param_1 + 0x10));
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    }
  }
  return;
}


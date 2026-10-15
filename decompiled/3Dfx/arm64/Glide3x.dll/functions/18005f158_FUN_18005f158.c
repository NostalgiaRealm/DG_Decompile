/*
 * FUN_18005f158 at 18005f158
 * undefined __cdecl FUN_18005f158(longlong param_1, ulonglong * param_2)
 * Address ranges: 18005f158-18005f217
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005f158(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar3 != 0) {
    uVar9 = *param_2;
    uVar7 = 0;
    uVar6 = uVar3;
    do {
      uVar4 = uVar6 + uVar7 >> 1;
      uVar5 = (ulonglong)uVar4;
      uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 8) + uVar5 * 0x18);
      if (uVar8 <= uVar9) {
        if (uVar9 <= uVar8) break;
        uVar7 = uVar4 + 1;
        uVar5 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar6;
      }
      uVar6 = uVar4;
    } while (uVar6 != uVar7);
    if (((uint)uVar5 != uVar3) &&
       (*(ulonglong *)(*(longlong *)(param_1 + 8) + uVar5 * 0x18) == uVar9)) {
      uVar7 = (uint)uVar5 + 1;
      if (uVar7 < uVar3) {
        do {
          uVar9 = (ulonglong)uVar7;
          puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + (ulonglong)(uVar7 - 1) * 0x18);
          uVar7 = uVar7 + 1;
          puVar2 = (undefined8 *)(*(longlong *)(param_1 + 8) + uVar9 * 0x18);
          uVar10 = *puVar2;
          puVar1[1] = puVar2[1];
          *puVar1 = uVar10;
          puVar1[2] = puVar2[2];
        } while (uVar7 < *(uint *)(param_1 + 0x10));
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    }
  }
  return;
}


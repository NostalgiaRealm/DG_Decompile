/*
 * FUN_180057844 at 180057844
 * undefined __fastcall FUN_180057844(longlong param_1, ulonglong * param_2)
 * Address ranges: 180057844-1800578c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057844(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = *(uint *)(param_1 + 0x10);
  if (uVar9 != 0) {
    uVar3 = *param_2;
    uVar10 = 0;
    do {
      uVar8 = uVar9 + uVar10 >> 1;
      uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar8 * 0x18);
      uVar7 = uVar8;
      if (uVar4 <= uVar3) {
        if (uVar3 <= uVar4) break;
        uVar10 = uVar8 + 1;
        uVar7 = uVar9;
        uVar8 = uVar10;
      }
      uVar9 = uVar7;
    } while (uVar9 != uVar10);
    if ((uVar8 != *(uint *)(param_1 + 0x10)) &&
       (*(ulonglong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar8 * 0x18) == uVar3)) {
      while( true ) {
        uVar9 = uVar8 + 1;
        if (*(uint *)(param_1 + 0x10) <= uVar9) break;
        lVar5 = *(longlong *)(param_1 + 8);
        puVar1 = (undefined8 *)(lVar5 + (ulonglong)uVar9 * 0x18);
        uVar6 = puVar1[1];
        puVar2 = (undefined8 *)(lVar5 + (ulonglong)uVar8 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        *(undefined8 *)(lVar5 + 0x10 + (ulonglong)uVar8 * 0x18) =
             *(undefined8 *)(lVar5 + 0x10 + (ulonglong)uVar9 * 0x18);
        uVar8 = uVar9;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    }
  }
  return;
}


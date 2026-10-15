/*
 * FUN_1801508e0 at 1801508e0
 * undefined FUN_1801508e0(void)
 * Address ranges: 1801508e0-180150957
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong * FUN_1801508e0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 != 0) {
    uVar9 = *param_2;
    uVar4 = 0;
    uVar8 = uVar2;
    do {
      uVar7 = uVar8 + uVar4 >> 1;
      uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar7 * 0x18);
      uVar3 = uVar7;
      if (uVar6 <= uVar9) {
        if (uVar9 <= uVar6) break;
        uVar4 = uVar7 + 1;
        uVar7 = uVar7 + 1;
        uVar3 = uVar8;
      }
      uVar8 = uVar3;
    } while (uVar8 != uVar4);
    if (uVar7 != uVar2) {
      puVar5 = (ulonglong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar7 * 0x18);
      puVar1 = puVar5 + 2;
      if (*puVar5 != uVar9) {
        puVar1 = (ulonglong *)0x0;
      }
      return puVar1;
    }
  }
  return (ulonglong *)0x0;
}


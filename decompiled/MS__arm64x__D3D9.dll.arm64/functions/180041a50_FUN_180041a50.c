/*
 * FUN_180041a50 at 180041a50
 * undefined FUN_180041a50(void)
 * Address ranges: 180041a50-180041ac7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong * FUN_180041a50(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 != 0) {
    uVar8 = *param_2;
    uVar4 = 0;
    uVar7 = uVar2;
    do {
      uVar6 = uVar7 + uVar4 >> 1;
      uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar6 * 0x18);
      uVar3 = uVar6;
      if (uVar5 <= uVar8) {
        if (uVar8 <= uVar5) break;
        uVar4 = uVar6 + 1;
        uVar6 = uVar6 + 1;
        uVar3 = uVar7;
      }
      uVar7 = uVar3;
    } while (uVar7 != uVar4);
    if (uVar6 != uVar2) {
      puVar9 = (ulonglong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar6 * 0x18);
      puVar1 = puVar9 + 2;
      if (*puVar9 != uVar8) {
        puVar1 = (ulonglong *)0x0;
      }
      return puVar1;
    }
  }
  return (ulonglong *)0x0;
}


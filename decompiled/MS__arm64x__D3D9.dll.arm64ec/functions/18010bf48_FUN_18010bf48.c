/*
 * FUN_18010bf48 at 18010bf48
 * undefined FUN_18010bf48(void)
 * Address ranges: 18010bf48-18010bfc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong * FUN_18010bf48(longlong param_1,uint *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar8 = 0;
    uVar5 = uVar2;
    do {
      uVar4 = uVar5 + uVar8 >> 1;
      uVar6 = (ulonglong)uVar4;
      uVar7 = *(ulonglong *)(*(longlong *)(param_1 + 8) + uVar6 * 0x18);
      if (uVar7 <= uVar3) {
        if (uVar3 <= uVar7) break;
        uVar8 = uVar4 + 1;
        uVar6 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar5;
      }
      uVar5 = uVar4;
    } while (uVar5 != uVar8);
    if ((uint)uVar6 != uVar2) {
      puVar1 = (ulonglong *)(*(longlong *)(param_1 + 8) + uVar6 * 0x18);
      if (*puVar1 == (ulonglong)uVar3) {
        return puVar1 + 2;
      }
      return (ulonglong *)0x0;
    }
  }
  return (ulonglong *)0x0;
}


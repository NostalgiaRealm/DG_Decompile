/*
 * FUN_1800ef7f0 at 1800ef7f0
 * undefined FUN_1800ef7f0(void)
 * Address ranges: 1800ef7f0-1800ef86b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong * FUN_1800ef7f0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 != 0) {
    uVar8 = *param_2;
    uVar7 = 0;
    uVar4 = uVar2;
    do {
      uVar3 = uVar4 + uVar7 >> 1;
      uVar5 = (ulonglong)uVar3;
      uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 8) + uVar5 * 0x18);
      if (uVar6 <= uVar8) {
        if (uVar8 <= uVar6) break;
        uVar7 = uVar3 + 1;
        uVar5 = (ulonglong)(uVar3 + 1);
        uVar3 = uVar4;
      }
      uVar4 = uVar3;
    } while (uVar4 != uVar7);
    if ((uint)uVar5 != uVar2) {
      puVar1 = (ulonglong *)(*(longlong *)(param_1 + 8) + uVar5 * 0x18);
      if (*puVar1 == uVar8) {
        return puVar1 + 2;
      }
      return (ulonglong *)0x0;
    }
  }
  return (ulonglong *)0x0;
}


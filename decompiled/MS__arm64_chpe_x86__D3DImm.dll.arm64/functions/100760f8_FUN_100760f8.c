/*
 * FUN_100760f8 at 100760f8
 * undefined FUN_100760f8(void)
 * Address ranges: 100760f8-10076183
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong * FUN_100760f8(int param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 != 0) {
    uVar8 = *param_2;
    uVar7 = 0;
    uVar6 = uVar2;
    do {
      uVar5 = uVar6 + uVar7 >> 1;
      uVar4 = *(ulonglong *)(*(int *)(param_1 + 4) + uVar5 * 0x18);
      uVar3 = uVar5;
      if (uVar4 <= uVar8) {
        if (uVar8 <= uVar4) break;
        uVar7 = uVar5 + 1;
        uVar5 = uVar7;
        uVar3 = uVar6;
      }
      uVar6 = uVar3;
    } while (uVar6 != uVar7);
    if (uVar5 != uVar2) {
      puVar1 = (ulonglong *)(*(int *)(param_1 + 4) + uVar5 * 0x18);
      if (*puVar1 == uVar8) {
        return puVar1 + 2;
      }
      return (ulonglong *)0x0;
    }
  }
  return (ulonglong *)0x0;
}


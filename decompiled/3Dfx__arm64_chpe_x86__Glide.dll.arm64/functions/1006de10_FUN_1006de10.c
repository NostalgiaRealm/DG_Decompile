/*
 * FUN_1006de10 at 1006de10
 * undefined FUN_1006de10(void)
 * Address ranges: 1006de10-1006dea3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong * FUN_1006de10(int param_1,uint *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar8 = 0;
    uVar7 = uVar2;
    do {
      uVar6 = uVar7 + uVar8 >> 1;
      uVar5 = *(ulonglong *)(*(int *)(param_1 + 4) + uVar6 * 0x38);
      uVar4 = uVar6;
      if (uVar5 <= uVar3) {
        if (uVar3 <= uVar5) break;
        uVar8 = uVar6 + 1;
        uVar6 = uVar8;
        uVar4 = uVar7;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar8);
    if (uVar6 != uVar2) {
      puVar1 = (ulonglong *)(*(int *)(param_1 + 4) + uVar6 * 0x38);
      if (*puVar1 == (ulonglong)uVar3) {
        return puVar1 + 2;
      }
      return (ulonglong *)0x0;
    }
  }
  return (ulonglong *)0x0;
}


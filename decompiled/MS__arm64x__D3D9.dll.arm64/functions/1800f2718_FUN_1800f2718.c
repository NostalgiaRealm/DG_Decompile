/*
 * FUN_1800f2718 at 1800f2718
 * undefined FUN_1800f2718(void)
 * Address ranges: 1800f2718-1800f2797
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong * FUN_1800f2718(longlong param_1,uint *param_2)

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
      uVar7 = (ulonglong)uVar4;
      uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 8) + uVar7 * 0x30);
      if (uVar6 <= uVar3) {
        if (uVar3 <= uVar6) break;
        uVar8 = uVar4 + 1;
        uVar7 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar5;
      }
      uVar5 = uVar4;
    } while (uVar5 != uVar8);
    if ((uint)uVar7 != uVar2) {
      puVar1 = (ulonglong *)(*(longlong *)(param_1 + 8) + uVar7 * 0x30);
      if (*puVar1 == (ulonglong)uVar3) {
        return puVar1 + 2;
      }
      return (ulonglong *)0x0;
    }
  }
  return (ulonglong *)0x0;
}


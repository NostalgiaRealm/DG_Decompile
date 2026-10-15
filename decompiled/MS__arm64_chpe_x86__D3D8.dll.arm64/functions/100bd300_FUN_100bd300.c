/*
 * FUN_100bd300 at 100bd300
 * undefined FUN_100bd300(void)
 * Address ranges: 100bd300-100bd37f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong * FUN_100bd300(int param_1,uint param_2)

{
  uint uVar1;
  ulonglong *puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (uVar1 != 0) {
    uVar7 = 0;
    uVar6 = uVar1;
    do {
      uVar4 = uVar6 + uVar7 >> 1;
      uVar5 = *(ulonglong *)(*(int *)(param_1 + 0x18) + uVar4 * 0x9a0);
      uVar3 = uVar4;
      if (uVar5 <= param_2) {
        if (param_2 <= uVar5) break;
        uVar7 = uVar4 + 1;
        uVar4 = uVar7;
        uVar3 = uVar6;
      }
      uVar6 = uVar3;
    } while (uVar6 != uVar7);
    if ((uVar4 != uVar1) &&
       (puVar2 = (ulonglong *)(*(int *)(param_1 + 0x18) + uVar4 * 0x9a0),
       *puVar2 == (ulonglong)param_2)) {
      return puVar2 + 2;
    }
  }
  return (ulonglong *)0x0;
}


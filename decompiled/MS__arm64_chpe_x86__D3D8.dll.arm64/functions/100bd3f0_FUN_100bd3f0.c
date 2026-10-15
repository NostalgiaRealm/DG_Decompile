/*
 * FUN_100bd3f0 at 100bd3f0
 * undefined FUN_100bd3f0(void)
 * Address ranges: 100bd3f0-100bd46b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong * FUN_100bd3f0(int param_1,uint param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x1c);
  if (uVar2 != 0) {
    uVar7 = 0;
    uVar6 = uVar2;
    do {
      uVar4 = uVar6 + uVar7 >> 1;
      uVar5 = *(ulonglong *)(*(int *)(param_1 + 0x18) + uVar4 * 0x40);
      uVar3 = uVar4;
      if (uVar5 <= param_2) {
        if (param_2 <= uVar5) break;
        uVar7 = uVar4 + 1;
        uVar4 = uVar7;
        uVar3 = uVar6;
      }
      uVar6 = uVar3;
    } while (uVar6 != uVar7);
    if ((uVar4 != uVar2) &&
       (puVar1 = (ulonglong *)(*(int *)(param_1 + 0x18) + uVar4 * 0x40),
       *puVar1 == (ulonglong)param_2)) {
      return puVar1 + 2;
    }
  }
  return (ulonglong *)0x0;
}


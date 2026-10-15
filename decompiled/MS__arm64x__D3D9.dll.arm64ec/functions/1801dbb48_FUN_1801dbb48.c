/*
 * FUN_1801dbb48 at 1801dbb48
 * undefined FUN_1801dbb48(void)
 * Address ranges: 1801dbb48-1801dbbb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong * FUN_1801dbb48(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong *puVar7;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar1 != 0) {
    uVar6 = 0;
    uVar4 = uVar1;
    do {
      uVar3 = uVar4 + uVar6 >> 1;
      uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar3 * 0x898);
      uVar2 = uVar3;
      if (uVar5 <= param_2) {
        if (param_2 <= uVar5) break;
        uVar6 = uVar3 + 1;
        uVar3 = uVar3 + 1;
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
    } while (uVar4 != uVar6);
    if ((uVar3 != uVar1) &&
       (puVar7 = (ulonglong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar3 * 0x898),
       *puVar7 == param_2)) {
      return puVar7 + 2;
    }
  }
  return (ulonglong *)0x0;
}


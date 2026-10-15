/*
 * FUN_100e5750 at 100e5750
 * undefined FUN_100e5750(void)
 * Address ranges: 100e5750-100e57cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_100e5750(int param_1,int param_2)

{
  uint uVar1;
  longlong *plVar2;
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
      uVar5 = *(ulonglong *)(*(int *)(param_1 + 0x18) + uVar4 * 0x238);
      uVar3 = uVar4;
      if (uVar5 <= (ulonglong)(longlong)param_2) {
        if ((ulonglong)(longlong)param_2 <= uVar5) break;
        uVar7 = uVar4 + 1;
        uVar4 = uVar7;
        uVar3 = uVar6;
      }
      uVar6 = uVar3;
    } while (uVar6 != uVar7);
    if ((uVar4 != uVar1) &&
       (plVar2 = (longlong *)(*(int *)(param_1 + 0x18) + uVar4 * 0x238),
       *plVar2 == (longlong)param_2)) {
      return plVar2 + 2;
    }
  }
  return (longlong *)0x0;
}


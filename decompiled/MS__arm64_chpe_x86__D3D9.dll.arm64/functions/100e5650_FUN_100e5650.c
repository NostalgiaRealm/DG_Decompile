/*
 * FUN_100e5650 at 100e5650
 * undefined FUN_100e5650(void)
 * Address ranges: 100e5650-100e56d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_100e5650(int param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x1c);
  if (uVar2 != 0) {
    uVar6 = 0;
    uVar7 = uVar2;
    do {
      uVar5 = uVar7 + uVar6 >> 1;
      uVar4 = *(ulonglong *)(*(int *)(param_1 + 0x18) + uVar5 * 0x880);
      uVar3 = uVar5;
      if (uVar4 <= (ulonglong)(longlong)param_2) {
        if ((ulonglong)(longlong)param_2 <= uVar4) break;
        uVar6 = uVar5 + 1;
        uVar5 = uVar6;
        uVar3 = uVar7;
      }
      uVar7 = uVar3;
    } while (uVar7 != uVar6);
    if ((uVar5 != uVar2) &&
       (plVar1 = (longlong *)(*(int *)(param_1 + 0x18) + uVar5 * 0x880),
       *plVar1 == (longlong)param_2)) {
      return plVar1 + 2;
    }
  }
  return (longlong *)0x0;
}


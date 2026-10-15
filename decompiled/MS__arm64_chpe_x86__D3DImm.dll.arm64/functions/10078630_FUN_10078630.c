/*
 * FUN_10078630 at 10078630
 * undefined FUN_10078630(void)
 * Address ranges: 10078630-100786b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_10078630(int param_1,int *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 != 0) {
    iVar3 = *param_2;
    uVar8 = 0;
    uVar7 = uVar2;
    do {
      uVar5 = uVar7 + uVar8 >> 1;
      uVar6 = *(ulonglong *)(*(int *)(param_1 + 4) + uVar5 * 0x20);
      uVar4 = uVar5;
      if (uVar6 <= (ulonglong)(longlong)iVar3) {
        if ((ulonglong)(longlong)iVar3 <= uVar6) break;
        uVar8 = uVar5 + 1;
        uVar5 = uVar8;
        uVar4 = uVar7;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar8);
    if (uVar5 != uVar2) {
      plVar1 = (longlong *)(*(int *)(param_1 + 4) + uVar5 * 0x20);
      if (*plVar1 == (longlong)iVar3) {
        return plVar1 + 2;
      }
      return (longlong *)0x0;
    }
  }
  return (longlong *)0x0;
}


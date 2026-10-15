/*
 * FUN_10071730 at 10071730
 * undefined FUN_10071730(void)
 * Address ranges: 10071730-100717bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_10071730(int param_1,int *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 != 0) {
    iVar3 = *param_2;
    uVar8 = 0;
    uVar7 = uVar2;
    do {
      uVar6 = uVar7 + uVar8 >> 1;
      uVar5 = *(ulonglong *)(*(int *)(param_1 + 4) + uVar6 * 0x28);
      uVar4 = uVar6;
      if (uVar5 <= (ulonglong)(longlong)iVar3) {
        if ((ulonglong)(longlong)iVar3 <= uVar5) break;
        uVar8 = uVar6 + 1;
        uVar6 = uVar8;
        uVar4 = uVar7;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar8);
    if (uVar6 != uVar2) {
      plVar1 = (longlong *)(*(int *)(param_1 + 4) + uVar6 * 0x28);
      if (*plVar1 == (longlong)iVar3) {
        return plVar1 + 2;
      }
      return (longlong *)0x0;
    }
  }
  return (longlong *)0x0;
}


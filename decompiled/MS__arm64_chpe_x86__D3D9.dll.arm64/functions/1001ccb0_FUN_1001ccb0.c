/*
 * FUN_1001ccb0 at 1001ccb0
 * undefined FUN_1001ccb0(void)
 * Address ranges: 1001ccb0-1001cd13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001ccb0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    piVar3 = (int *)(iVar1 + -4);
    iVar2 = *piVar3;
    iVar1 = iVar1 + iVar2 * 0x20;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      iVar1 = iVar1 + -0x20;
      FUN_10002020(iVar1);
    }
    FUN_101322e0(piVar3,*piVar3 * 0x20 + 4);
  }
  return;
}


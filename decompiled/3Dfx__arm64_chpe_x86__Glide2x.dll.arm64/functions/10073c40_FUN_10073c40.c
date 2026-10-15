/*
 * FUN_10073c40 at 10073c40
 * undefined FUN_10073c40(void)
 * Address ranges: 10073c40-10073cbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10073c40(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 4) + param_2 * 0x16c0;
  piVar2 = (int *)(iVar3 + 0x1d1c);
  iVar3 = *(int *)(iVar3 + 0x1d24);
  while (iVar3 != 0) {
    iVar4 = iVar3 + -1;
    iVar1 = iVar3 * 0x20;
    iVar3 = iVar4;
    if (*(int *)(*piVar2 + iVar1 + -0x18) == param_3) {
      FUN_10057cb0(piVar2,iVar4);
    }
  }
  return;
}


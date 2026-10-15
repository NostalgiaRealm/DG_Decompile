/*
 * FUN_1007d600 at 1007d600
 * undefined FUN_1007d600(void)
 * Address ranges: 1007d600-1007d67b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007d600(int param_1,int param_2,int param_3)

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
    if (*(int *)(*piVar2 + iVar1 + -0x14) == param_3) {
      FUN_10075d10(piVar2,iVar4);
    }
  }
  return;
}


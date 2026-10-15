/*
 * FUN_10077960 at 10077960
 * undefined FUN_10077960(void)
 * Address ranges: 10077960-100779db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10077960(int param_1,int param_2,int param_3)

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
      FUN_1005b940(piVar2,iVar4);
    }
  }
  return;
}


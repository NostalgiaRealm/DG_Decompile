/*
 * FUN_100740c0 at 100740c0
 * undefined FUN_100740c0(void)
 * Address ranges: 100740c0-1007413b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100740c0(int param_1,int param_2,int param_3)

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
      FUN_10058130(piVar2,iVar4);
    }
  }
  return;
}


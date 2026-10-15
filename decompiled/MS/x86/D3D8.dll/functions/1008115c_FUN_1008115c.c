/*
 * FUN_1008115c at 1008115c
 * int __stdcall FUN_1008115c(int param_1)
 * Address ranges: 1008115c-100811b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1008115c(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  piVar1 = (int *)(param_1 + 4);
  piVar3 = *(int **)(param_1 + 0x14);
  if (*piVar1 != 0) {
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    iVar4 = iVar4 + -1;
    if (*(int *)(param_1 + 8) + iVar4 == 0) {
      FUN_100811bc((undefined4 *)(param_1 + -0x5c));
    }
    if (piVar3 == (int *)0x0) {
      if (iVar4 == 0) {
        FUN_1007b43b(iVar2 + 0x58e0);
      }
    }
    else {
      iVar4 = (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  return iVar4;
}


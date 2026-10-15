/*
 * FUN_1009d0c7 at 1009d0c7
 * int __stdcall FUN_1009d0c7(int param_1)
 * Address ranges: 1009d0c7-1009d11c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009d0c7(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x24);
  piVar1 = (int *)(param_1 + 0x18);
  piVar3 = *(int **)(param_1 + 0x28);
  if (*piVar1 != 0) {
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    iVar4 = iVar4 + -1;
    if (*(int *)(param_1 + 0x1c) + iVar4 == 0) {
      FUN_1009d127((undefined4 *)(param_1 + -0x5c));
    }
    if (piVar3 == (int *)0x0) {
      if (iVar4 == 0) {
        FUN_1009229f(iVar2 + 0x66b4);
      }
    }
    else {
      iVar4 = (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  return iVar4;
}


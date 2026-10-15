/*
 * FUN_1009e34d at 1009e34d
 * int __stdcall FUN_1009e34d(int param_1)
 * Address ranges: 1009e34d-1009e38d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009e34d(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + -0x3c);
  piVar1 = (int *)(param_1 + 4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar2 = iVar2 + -1;
  if (*(int *)(param_1 + 8) + iVar2 == 0) {
    FUN_10014a64((int *)(param_1 + -0x68));
  }
  if (iVar2 == 0) {
    if (iVar3 == 0) {
      iVar3 = 0x66b4;
    }
    FUN_1009229f(iVar3);
  }
  return iVar2;
}


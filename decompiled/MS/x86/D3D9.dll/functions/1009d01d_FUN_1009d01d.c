/*
 * FUN_1009d01d at 1009d01d
 * int __stdcall FUN_1009d01d(int param_1)
 * Address ranges: 1009d01d-1009d052
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009d01d(int param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x18);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  iVar2 = iVar2 + 1;
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 == (int *)0x0) {
    if (iVar2 == 1) {
      LOCK();
      *(int *)(&DAT_000066bc + *(int *)(param_1 + 0x24)) =
           *(int *)(&DAT_000066bc + *(int *)(param_1 + 0x24)) + 1;
      UNLOCK();
    }
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 4))(piVar1);
  }
  return iVar2;
}


/*
 * FUN_100810b2 at 100810b2
 * int __stdcall FUN_100810b2(int param_1)
 * Address ranges: 100810b2-100810e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100810b2(int param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  iVar2 = iVar2 + 1;
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 == (int *)0x0) {
    if (iVar2 == 1) {
      LOCK();
      *(int *)(&DAT_000058e4 + *(int *)(param_1 + 0x10)) =
           *(int *)(&DAT_000058e4 + *(int *)(param_1 + 0x10)) + 1;
      UNLOCK();
    }
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 4))(piVar1);
  }
  return iVar2;
}


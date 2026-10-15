/*
 * FUN_1007b43b at 1007b43b
 * int __stdcall FUN_1007b43b(int param_1)
 * Address ranges: 1007b43b-1007b472
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007b43b(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*(int *)(param_1 + 8) + iVar2 + -1 == 0) {
    FUN_1007b060((int *)(param_1 + -0x58e0));
    FUN_1007af78((undefined4 *)(param_1 + -0x58e0));
  }
  return iVar2 + -1;
}


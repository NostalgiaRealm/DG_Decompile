/*
 * FUN_1009c795 at 1009c795
 * int __stdcall FUN_1009c795(int param_1)
 * Address ranges: 1009c795-1009c7d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009c795(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + -0x20);
  piVar1 = (int *)(param_1 + 4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar2 = iVar2 + -1;
  if (*(int *)(param_1 + 8) + iVar2 == 0) {
    FUN_10011812((undefined4 *)(param_1 + -0x4c));
  }
  if (iVar2 == 0) {
    if (iVar3 == 0) {
      iVar3 = 0x66b4;
    }
    FUN_1009229f(iVar3);
  }
  return iVar2;
}


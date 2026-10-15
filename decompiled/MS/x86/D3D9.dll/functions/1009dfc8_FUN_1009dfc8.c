/*
 * FUN_1009dfc8 at 1009dfc8
 * int __stdcall FUN_1009dfc8(int param_1)
 * Address ranges: 1009dfc8-1009e008
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009dfc8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + -100);
  piVar1 = (int *)(param_1 + 4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar2 = iVar2 + -1;
  if (*(int *)(param_1 + 8) + iVar2 == 0) {
    FUN_1009deed((int *)(param_1 + -0x78));
  }
  if (iVar2 == 0) {
    if (iVar3 == 0) {
      iVar3 = 0x66b4;
    }
    FUN_1009229f(iVar3);
  }
  return iVar2;
}


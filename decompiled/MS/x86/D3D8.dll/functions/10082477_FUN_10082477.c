/*
 * FUN_10082477 at 10082477
 * int __stdcall FUN_10082477(int param_1)
 * Address ranges: 10082477-100824bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10082477(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + -0xb4);
  piVar1 = (int *)(param_1 + 4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar2 = iVar2 + -1;
  if (*(int *)(param_1 + 8) + iVar2 == 0) {
    FUN_1008230c((int *)(param_1 + -200));
  }
  if (iVar2 == 0) {
    if (iVar3 == 0) {
      iVar3 = 0x58e0;
    }
    FUN_1007b43b(iVar3);
  }
  return iVar2;
}


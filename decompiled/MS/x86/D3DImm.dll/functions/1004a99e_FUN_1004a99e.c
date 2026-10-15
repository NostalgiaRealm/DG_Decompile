/*
 * FUN_1004a99e at 1004a99e
 * undefined4 __stdcall FUN_1004a99e(int param_1)
 * Address ranges: 1004a99e-1004a9ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004a99e(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 3)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (iVar1 != 4) {
      uVar2 = 0x80070057;
    }
  }
  return uVar2;
}


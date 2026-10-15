/*
 * FUN_1004e4c7 at 1004e4c7
 * undefined4 __stdcall FUN_1004e4c7(int param_1)
 * Address ranges: 1004e4c7-1004e4e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004e4c7(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0xc) != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
    LOCK();
    *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + -1;
    UNLOCK();
  }
  return 0;
}


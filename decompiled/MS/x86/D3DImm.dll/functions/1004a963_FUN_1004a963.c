/*
 * FUN_1004a963 at 1004a963
 * undefined4 __stdcall FUN_1004a963(int param_1)
 * Address ranges: 1004a963-1004a99d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004a963(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x88760005;
  if (*(char *)(param_1 + 0xa1) == '\0') {
    FUN_1005c9cc((int *)(param_1 + 0x4c),0,0x50);
    *(int *)(param_1 + 0x4c) = 0x50;
    uVar1 = 0;
    *(undefined1 *)(param_1 + 0xa1) = 1;
  }
  return uVar1;
}


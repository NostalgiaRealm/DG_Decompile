/*
 * FUN_100165a9 at 100165a9
 * undefined4 __fastcall FUN_100165a9(int param_1)
 * Address ranges: 100165a9-100165b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100165a9(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 100) != 0) || (*(int *)(param_1 + 0x68) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}


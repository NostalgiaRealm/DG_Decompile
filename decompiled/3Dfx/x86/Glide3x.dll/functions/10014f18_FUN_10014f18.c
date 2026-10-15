/*
 * FUN_10014f18 at 10014f18
 * undefined4 __fastcall FUN_10014f18(int param_1)
 * Address ranges: 10014f18-10014f26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10014f18(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 100) != 0) || (*(int *)(param_1 + 0x68) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}


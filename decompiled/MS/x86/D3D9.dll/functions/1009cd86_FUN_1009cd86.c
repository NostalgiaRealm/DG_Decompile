/*
 * FUN_1009cd86 at 1009cd86
 * undefined4 __stdcall FUN_1009cd86(int param_1)
 * Address ranges: 1009cd86-1009cda0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009cd86(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 1;
    uVar1 = 0;
  }
  return uVar1;
}


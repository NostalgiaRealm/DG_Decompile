/*
 * FUN_1001faf2 at 1001faf2
 * int __stdcall FUN_1001faf2(int param_1)
 * Address ranges: 1001faf2-1001fb18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001faf2(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 1U | param_1 - 1U >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  return (uVar1 >> 8 | uVar1) + 1;
}


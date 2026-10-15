/*
 * FUN_100038c6 at 100038c6
 * int __fastcall FUN_100038c6(int param_1)
 * Address ranges: 100038c6-100038e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_100038c6(int param_1)

{
  if (*(int *)(param_1 + 0xd4) != 0) {
    return *(int *)(param_1 + 0xd0) + -0x48 + *(int *)(param_1 + 0xd4) * 0x48;
  }
  return 0;
}


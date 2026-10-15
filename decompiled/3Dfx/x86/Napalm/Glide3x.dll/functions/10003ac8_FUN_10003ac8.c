/*
 * FUN_10003ac8 at 10003ac8
 * int __fastcall FUN_10003ac8(int param_1)
 * Address ranges: 10003ac8-10003ae3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10003ac8(int param_1)

{
  if (*(int *)(param_1 + 0xd4) != 0) {
    return *(int *)(param_1 + 0xd0) + -0x48 + *(int *)(param_1 + 0xd4) * 0x48;
  }
  return 0;
}


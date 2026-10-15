/*
 * FUN_10003b32 at 10003b32
 * int __fastcall FUN_10003b32(int param_1)
 * Address ranges: 10003b32-10003b4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10003b32(int param_1)

{
  if (*(int *)(param_1 + 0xd4) != 0) {
    return *(int *)(param_1 + 0xd0) + -0x48 + *(int *)(param_1 + 0xd4) * 0x48;
  }
  return 0;
}


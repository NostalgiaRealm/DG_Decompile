/*
 * FUN_10003afe at 10003afe
 * int __fastcall FUN_10003afe(int param_1)
 * Address ranges: 10003afe-10003b19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10003afe(int param_1)

{
  if (*(int *)(param_1 + 0xd4) != 0) {
    return *(int *)(param_1 + 0xd0) + -0x48 + *(int *)(param_1 + 0xd4) * 0x48;
  }
  return 0;
}


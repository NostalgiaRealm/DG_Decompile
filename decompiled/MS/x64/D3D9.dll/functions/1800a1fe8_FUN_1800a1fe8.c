/*
 * FUN_1800a1fe8 at 1800a1fe8
 * undefined __fastcall FUN_1800a1fe8(longlong param_1)
 * Address ranges: 1800a1fe8-1800a202c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a1fe8(longlong param_1)

{
  if (*(char *)(param_1 + 0x24d) != '\0') {
    FUN_18009ac8c(param_1 + 0x1a4,*(int *)(param_1 + 0x30),*(int *)(param_1 + 0x34));
    FUN_18009ac8c(param_1 + 500,*(int *)(param_1 + 0x30),*(int *)(param_1 + 0x34));
  }
  FUN_18009e560(param_1);
  return;
}


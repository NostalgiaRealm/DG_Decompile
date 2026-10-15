/*
 * FUN_1004edc0 at 1004edc0
 * undefined FUN_1004edc0(void)
 * Address ranges: 1004edc0-1004edff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004edc0(int param_1,int param_2,int param_3,int param_4)

{
  return *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x5c) + param_2 * 0x10 + 4) + param_3 * 0x1c
                          + 4) + param_4 * 4) + *(int *)(param_1 + 0x44);
}


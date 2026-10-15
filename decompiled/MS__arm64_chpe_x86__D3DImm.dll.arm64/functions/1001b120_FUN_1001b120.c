/*
 * FUN_1001b120 at 1001b120
 * undefined FUN_1001b120(void)
 * Address ranges: 1001b120-1001b143
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001b120(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1ef8) == *(int *)(param_2 + 0xc)) {
    *(int *)(param_1 + 0x1ef8) = 0;
  }
  return;
}


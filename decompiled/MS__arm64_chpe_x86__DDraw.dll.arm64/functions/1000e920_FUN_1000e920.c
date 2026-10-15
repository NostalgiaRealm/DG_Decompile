/*
 * FUN_1000e920 at 1000e920
 * undefined FUN_1000e920(void)
 * Address ranges: 1000e920-1000e94f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000e920(int param_1)

{
  if (*(int *)(param_1 + 0xcf00) != 0) {
    FUN_1006c9b8(*(int *)(param_1 + 0xcf00));
    *(undefined4 *)(param_1 + 0xcf00) = 0;
  }
  return;
}


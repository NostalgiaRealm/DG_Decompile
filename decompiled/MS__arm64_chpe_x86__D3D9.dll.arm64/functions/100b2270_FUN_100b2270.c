/*
 * FUN_100b2270 at 100b2270
 * undefined FUN_100b2270(void)
 * Address ranges: 100b2270-100b22c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b2270(int param_1)

{
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_10110388(*(undefined4 *)(param_1 + 0x40),*(int *)(param_1 + 0xa8),0);
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  FUN_100ab520(param_1 + 0x48,1,1);
  return;
}


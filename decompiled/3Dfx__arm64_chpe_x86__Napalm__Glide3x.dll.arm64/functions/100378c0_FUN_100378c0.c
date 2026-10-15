/*
 * FUN_100378c0 at 100378c0
 * undefined FUN_100378c0(void)
 * Address ranges: 100378c0-100378f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100378c0(int param_1,uint param_2)

{
  if (*(int *)(*(int *)(param_1 + 4) + 0x3f) == 0) {
    *(uint *)(param_1 + 0x2c5c) = param_2 | 0xffffff00;
    *(undefined1 *)(param_1 + 0x2da9) = 1;
  }
  return;
}


/*
 * FUN_10054660 at 10054660
 * undefined FUN_10054660(void)
 * Address ranges: 10054660-10054697
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10054660(int param_1,int param_2)

{
  if (param_2 == *(int *)(param_1 + 0x1530)) {
    *(int *)(param_1 + 0x1530) = 0;
    *(undefined4 *)(param_1 + 0x14b4) = 0;
    *(undefined1 *)(param_1 + 0x1755) = 1;
  }
  return;
}


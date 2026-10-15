/*
 * FUN_10029d20 at 10029d20
 * undefined FUN_10029d20(void)
 * Address ranges: 10029d20-10029d73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029d20(int param_1)

{
  if (*(int *)(param_1 + 0xe0) != 0) {
    FUN_1006f598(*(undefined4 *)(param_1 + 0x40),*(int *)(param_1 + 0xe0),0);
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  FUN_10020e88(param_1 + 0x48,1,1);
  return;
}


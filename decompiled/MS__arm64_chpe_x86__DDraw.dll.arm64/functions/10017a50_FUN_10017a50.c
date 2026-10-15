/*
 * FUN_10017a50 at 10017a50
 * undefined FUN_10017a50(void)
 * Address ranges: 10017a50-10017aa3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10017a50(int param_1)

{
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_1006f598(*(undefined4 *)(param_1 + 0x40),*(int *)(param_1 + 0xa8),0);
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  FUN_10010fe0(param_1 + 0x48,1,1);
  return;
}


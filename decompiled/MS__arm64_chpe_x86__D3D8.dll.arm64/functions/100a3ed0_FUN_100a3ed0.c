/*
 * FUN_100a3ed0 at 100a3ed0
 * undefined FUN_100a3ed0(void)
 * Address ranges: 100a3ed0-100a3f23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a3ed0(int param_1)

{
  if (*(int *)(param_1 + 0xe0) != 0) {
    FUN_100ddc48(*(undefined4 *)(param_1 + 0x40),*(int *)(param_1 + 0xe0),0);
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  FUN_1009b228(param_1 + 0x48,1,1);
  return;
}


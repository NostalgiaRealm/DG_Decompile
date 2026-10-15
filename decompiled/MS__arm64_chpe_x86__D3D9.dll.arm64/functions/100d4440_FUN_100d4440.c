/*
 * FUN_100d4440 at 100d4440
 * undefined FUN_100d4440(void)
 * Address ranges: 100d4440-100d44a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d4440(int param_1)

{
  if (*(uint *)(param_1 + 0x6690) < *(uint *)(param_1 + 0x6694)) {
    FUN_100d43c0(param_1,*(undefined4 *)(param_1 + 0x6698),*(uint *)(param_1 + 0x6690),
                 *(undefined4 *)(param_1 + 0x6694));
    *(uint *)(param_1 + 0x6694) = 0;
    *(undefined4 *)(param_1 + 0x6698) = 0;
    *(undefined4 *)(param_1 + 0x6690) = 0;
  }
  return;
}


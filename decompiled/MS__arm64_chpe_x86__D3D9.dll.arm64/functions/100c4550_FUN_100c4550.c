/*
 * FUN_100c4550 at 100c4550
 * undefined FUN_100c4550(void)
 * Address ranges: 100c4550-100c45a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100c4550(int param_1)

{
  if (*(int *)(param_1 + 0xe0) != 0) {
    FUN_10110388(*(undefined4 *)(param_1 + 0x40),*(int *)(param_1 + 0xe0),0);
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  FUN_100bb370(param_1 + 0x48,1,1);
  return;
}


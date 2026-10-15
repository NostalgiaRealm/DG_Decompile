/*
 * FUN_100922f0 at 100922f0
 * undefined FUN_100922f0(void)
 * Address ranges: 100922f0-10092343
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100922f0(int param_1)

{
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_100ddc48(*(undefined4 *)(param_1 + 0x40),*(int *)(param_1 + 0xa8),0);
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  FUN_1008b890(param_1 + 0x48,1,1);
  return;
}


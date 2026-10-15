/*
 * FUN_100229c0 at 100229c0
 * undefined FUN_100229c0(void)
 * Address ranges: 100229c0-10022a3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100229c0(int param_1)

{
  if ((*(int *)(param_1 + 0x74) != 3) &&
     ((*(char *)(*(int *)(param_1 + 0x5c) + 0x669d) == '\0' || (*(int *)(param_1 + 0x74) != 0)))) {
    if (*(int *)(param_1 + 0x20) != 0) {
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 1;
    }
    FUN_1000d9c0(*(int *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
  }
  *(undefined1 *)(param_1 + 0x8e) = 0;
  return 0;
}


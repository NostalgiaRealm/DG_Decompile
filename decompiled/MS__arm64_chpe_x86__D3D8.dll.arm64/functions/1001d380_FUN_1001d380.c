/*
 * FUN_1001d380 at 1001d380
 * undefined FUN_1001d380(void)
 * Address ranges: 1001d380-1001d3ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1001d380(int param_1)

{
  if ((*(int *)(param_1 + 0x74) != 3) &&
     ((*(char *)(*(int *)(param_1 + 0x5c) + 0x58bd) == '\0' || (*(int *)(param_1 + 0x74) != 0)))) {
    if (*(int *)(param_1 + 0x20) != 0) {
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 1;
    }
    FUN_1000c7f0(*(int *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
  }
  *(undefined1 *)(param_1 + 0x92) = 0;
  return 0;
}


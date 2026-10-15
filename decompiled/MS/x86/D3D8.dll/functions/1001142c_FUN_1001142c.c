/*
 * FUN_1001142c at 1001142c
 * undefined4 __fastcall FUN_1001142c(int param_1)
 * Address ranges: 1001142c-10011465
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1001142c(int param_1)

{
  if ((*(int *)(param_1 + 0x74) != 3) &&
     ((*(char *)((int)*(void **)(param_1 + 0x5c) + 0x58bd) == '\0' ||
      (*(int *)(param_1 + 0x74) != 0)))) {
    if (*(int *)(param_1 + 0x20) != 0) {
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 1;
    }
    FUN_100068f5(*(void **)(param_1 + 0x5c),*(int *)(param_1 + 0x60));
  }
  *(undefined1 *)(param_1 + 0x92) = 0;
  return 0;
}


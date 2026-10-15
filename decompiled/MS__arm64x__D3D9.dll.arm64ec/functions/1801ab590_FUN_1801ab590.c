/*
 * FUN_1801ab590 at 1801ab590
 * undefined FUN_1801ab590(void)
 * Address ranges: 1801ab590-1801ab5eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801ab590(longlong param_1)

{
  if (*(char *)(param_1 + 400) != '\0') {
    FUN_1801a7d98(param_1 + 0x140,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    FUN_1801a7d98(param_1 + 0x60,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x34));
    FUN_1801a7d98(param_1 + 0xb0,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    FUN_1802229d8(*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 400) = 0;
  }
  return;
}


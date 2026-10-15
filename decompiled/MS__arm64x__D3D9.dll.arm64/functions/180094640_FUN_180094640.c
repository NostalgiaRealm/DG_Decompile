/*
 * FUN_180094640 at 180094640
 * undefined FUN_180094640(void)
 * Address ranges: 180094640-18009469b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180094640(longlong param_1)

{
  if (*(char *)(param_1 + 400) != '\0') {
    FUN_180091218(param_1 + 0x140,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    FUN_180091218(param_1 + 0x60,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x34));
    FUN_180091218(param_1 + 0xb0,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 400) = 0;
  }
  return;
}


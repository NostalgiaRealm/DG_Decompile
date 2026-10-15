/*
 * FUN_1400105b0 at 1400105b0
 * undefined __fastcall FUN_1400105b0(longlong param_1)
 * Address ranges: 1400105b0-1400105dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1400105b0(longlong param_1)

{
  if (*(char *)(param_1 + 0x22) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    *(undefined1 *)(param_1 + 0x22) = 0;
    DAT_14002c2c8 = 0;
  }
  return;
}


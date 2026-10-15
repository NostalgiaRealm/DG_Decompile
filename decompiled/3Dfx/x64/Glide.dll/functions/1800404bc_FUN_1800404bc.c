/*
 * FUN_1800404bc at 1800404bc
 * undefined __fastcall FUN_1800404bc(longlong param_1)
 * Address ranges: 1800404bc-1800404f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800404bc(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x480) != (longlong *)0x0) {
    FUN_18004e61c(*(longlong **)(param_1 + 0x480));
    *(undefined8 *)(param_1 + 0x480) = 0;
    FUN_180055ab8(param_1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}


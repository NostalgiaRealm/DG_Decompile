/*
 * FUN_180040014 at 180040014
 * undefined __fastcall FUN_180040014(longlong param_1)
 * Address ranges: 180040014-18004004e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180040014(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x480) != (longlong *)0x0) {
    FUN_18004e174(*(longlong **)(param_1 + 0x480));
    *(undefined8 *)(param_1 + 0x480) = 0;
    FUN_180055610(param_1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}


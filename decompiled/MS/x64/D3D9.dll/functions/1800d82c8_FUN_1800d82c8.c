/*
 * FUN_1800d82c8 at 1800d82c8
 * undefined __fastcall FUN_1800d82c8(longlong param_1)
 * Address ranges: 1800d82c8-1800d8302
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800d82c8(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x480) != (longlong *)0x0) {
    FUN_1800de65c(*(longlong **)(param_1 + 0x480));
    *(undefined8 *)(param_1 + 0x480) = 0;
    FUN_1800d89f4(param_1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}


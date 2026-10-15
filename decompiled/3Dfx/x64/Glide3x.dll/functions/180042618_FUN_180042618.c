/*
 * FUN_180042618 at 180042618
 * undefined __fastcall FUN_180042618(longlong param_1)
 * Address ranges: 180042618-180042652
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180042618(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x480) != (longlong *)0x0) {
    FUN_180050780(*(longlong **)(param_1 + 0x480));
    *(undefined8 *)(param_1 + 0x480) = 0;
    FUN_180057c1c(param_1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}


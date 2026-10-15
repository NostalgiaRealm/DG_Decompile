/*
 * FUN_18003c9b8 at 18003c9b8
 * undefined __fastcall FUN_18003c9b8(longlong param_1)
 * Address ranges: 18003c9b8-18003c9e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003c9b8(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    FUN_1800dbb04(*(longlong *)(param_1 + 8),(ulonglong)*(uint *)(param_1 + 0x10),
                  *(longlong **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


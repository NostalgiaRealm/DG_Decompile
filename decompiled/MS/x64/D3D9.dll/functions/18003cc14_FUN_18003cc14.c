/*
 * FUN_18003cc14 at 18003cc14
 * undefined __fastcall FUN_18003cc14(longlong param_1)
 * Address ranges: 18003cc14-18003cc39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003cc14(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


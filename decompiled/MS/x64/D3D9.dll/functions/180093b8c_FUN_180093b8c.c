/*
 * FUN_180093b8c at 180093b8c
 * undefined __fastcall FUN_180093b8c(longlong param_1)
 * Address ranges: 180093b8c-180093bdc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180093b8c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}


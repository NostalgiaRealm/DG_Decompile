/*
 * FUN_180042dac at 180042dac
 * undefined __fastcall FUN_180042dac(longlong param_1)
 * Address ranges: 180042dac-180042de5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180042dac(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}


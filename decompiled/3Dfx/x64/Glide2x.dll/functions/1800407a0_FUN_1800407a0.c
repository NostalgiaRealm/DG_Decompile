/*
 * FUN_1800407a0 at 1800407a0
 * undefined __fastcall FUN_1800407a0(longlong param_1)
 * Address ranges: 1800407a0-1800407d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800407a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}


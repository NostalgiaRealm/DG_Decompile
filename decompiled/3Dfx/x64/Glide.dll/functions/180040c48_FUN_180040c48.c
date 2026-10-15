/*
 * FUN_180040c48 at 180040c48
 * undefined __fastcall FUN_180040c48(longlong param_1)
 * Address ranges: 180040c48-180040c81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180040c48(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}


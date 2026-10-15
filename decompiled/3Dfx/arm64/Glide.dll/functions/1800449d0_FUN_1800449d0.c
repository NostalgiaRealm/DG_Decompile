/*
 * FUN_1800449d0 at 1800449d0
 * undefined __cdecl FUN_1800449d0(longlong param_1)
 * Address ranges: 1800449d0-180044a17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800449d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}


/*
 * FUN_180043b80 at 180043b80
 * undefined __cdecl FUN_180043b80(longlong param_1)
 * Address ranges: 180043b80-180043bc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180043b80(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}


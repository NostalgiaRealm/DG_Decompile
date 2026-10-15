/*
 * FUN_180047710 at 180047710
 * undefined __cdecl FUN_180047710(longlong param_1)
 * Address ranges: 180047710-180047757
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180047710(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}


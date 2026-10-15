/*
 * FUN_1800eec40 at 1800eec40
 * undefined FUN_1800eec40(void)
 * Address ranges: 1800eec40-1800eec87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800eec40(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}


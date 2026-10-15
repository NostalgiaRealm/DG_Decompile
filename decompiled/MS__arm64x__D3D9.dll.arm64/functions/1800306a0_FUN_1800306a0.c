/*
 * FUN_1800306a0 at 1800306a0
 * undefined FUN_1800306a0(void)
 * Address ranges: 1800306a0-1800306d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800306a0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


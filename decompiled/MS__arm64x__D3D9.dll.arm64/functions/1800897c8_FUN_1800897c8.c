/*
 * FUN_1800897c8 at 1800897c8
 * undefined FUN_1800897c8(void)
 * Address ranges: 1800897c8-18008982b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800897c8(longlong param_1)

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


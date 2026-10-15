/*
 * FUN_1800307f8 at 1800307f8
 * undefined FUN_1800307f8(void)
 * Address ranges: 1800307f8-180030847
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800307f8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    FUN_1800e18b8(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x28),
                  *(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}


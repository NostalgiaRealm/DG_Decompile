/*
 * FUN_180030588 at 180030588
 * undefined FUN_180030588(void)
 * Address ranges: 180030588-1800305d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180030588(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_180233ef0;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
    param_1[4] = 0;
  }
  *param_1 = &PTR_FUN_180233f18;
  return;
}


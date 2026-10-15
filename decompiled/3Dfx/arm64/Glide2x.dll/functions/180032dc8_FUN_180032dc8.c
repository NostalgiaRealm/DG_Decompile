/*
 * FUN_180032dc8 at 180032dc8
 * undefined __cdecl FUN_180032dc8(undefined8 * param_1)
 * Address ranges: 180032dc8-180032e0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180032dc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_180064a18;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  *param_1 = &PTR_FUN_180064a10;
  return;
}


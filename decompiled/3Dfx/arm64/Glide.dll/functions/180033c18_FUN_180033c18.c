/*
 * FUN_180033c18 at 180033c18
 * undefined __cdecl FUN_180033c18(undefined8 * param_1)
 * Address ranges: 180033c18-180033c5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180033c18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_180065a18;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  *param_1 = &PTR_FUN_180065a10;
  return;
}


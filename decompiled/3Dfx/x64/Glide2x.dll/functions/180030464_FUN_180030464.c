/*
 * FUN_180030464 at 180030464
 * undefined __fastcall FUN_180030464(undefined8 * param_1)
 * Address ranges: 180030464-180030495
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180030464(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_180063a60;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  *param_1 = &PTR_FUN_180063a58;
  return;
}


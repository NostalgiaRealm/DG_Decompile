/*
 * FUN_180022ebc at 180022ebc
 * undefined __fastcall FUN_180022ebc(undefined8 * param_1)
 * Address ranges: 180022ebc-180022eed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180022ebc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1800648c8;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  *param_1 = &PTR_FUN_1800648c0;
  return;
}


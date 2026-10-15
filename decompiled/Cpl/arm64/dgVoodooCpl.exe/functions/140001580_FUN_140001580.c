/*
 * FUN_140001580 at 140001580
 * undefined __cdecl FUN_140001580(undefined8 * param_1)
 * Address ranges: 140001580-1400015d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140001580(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1400263a8;
  param_1[0xd] = &PTR_FUN_140026390;
  FUN_140010d30(param_1 + 0xe);
  *param_1 = &PTR_FUN_140028960;
  DestroyWindow((HWND)param_1[3]);
  return;
}


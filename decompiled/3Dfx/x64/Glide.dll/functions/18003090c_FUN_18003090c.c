/*
 * FUN_18003090c at 18003090c
 * undefined __fastcall FUN_18003090c(undefined8 * param_1)
 * Address ranges: 18003090c-18003093d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003090c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_180063a60;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  *param_1 = &PTR_FUN_180063a58;
  return;
}


/*
 * FUN_140010f30 at 140010f30
 * undefined8 * __fastcall FUN_140010f30(undefined8 * param_1, uint param_2)
 * Address ranges: 140010f30-140010f99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140010f30(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_140028be8;
  if (param_1[0x90] != 0) {
    FUN_140010da0((longlong)param_1);
    FUN_140013580(param_1[0x90]);
    param_1[0x90] = 0;
    param_1[2] = 0;
  }
  FUN_1400122a0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_140024260(param_1);
  }
  return param_1;
}


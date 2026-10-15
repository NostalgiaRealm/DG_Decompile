/*
 * FUN_10015079 at 10015079
 * undefined __fastcall FUN_10015079(undefined4 * param_1)
 * Address ranges: 10015079-10015093
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10015079(undefined4 *param_1)

{
  param_1[0x13] = &PTR_LAB_100d5210;
  *param_1 = &PTR_D3DPERF_GetStatus_100d5224;
  if (param_1[0x14] != 0) {
    FUN_1000162c(param_1[0x14]);
  }
  return;
}


/*
 * FUN_18003d3e4 at 18003d3e4
 * undefined8 * __fastcall FUN_18003d3e4(undefined8 * param_1, uint param_2)
 * Address ranges: 18003d3e4-18003d425
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18003d3e4(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_D3DPERF_GetStatus_180101cc8;
  FUN_18003d358(param_1 + 2);
  if ((param_2 & 1) != 0) {
    FUN_1800fbcf0(param_1);
  }
  return param_1;
}


/*
 * FUN_180031d50 at 180031d50
 * undefined FUN_180031d50(void)
 * Address ranges: 180031d50-180031d97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180031d50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_D3DPERF_GetStatus_180233fa0;
  FUN_180031cc0(param_1 + 2);
  if ((param_2 & 1) != 0) {
    FUN_180102fc0(param_1,0x48);
  }
  return param_1;
}


/*
 * FUN_180032138 at 180032138
 * undefined FUN_180032138(void)
 * Address ranges: 180032138-18003217f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180032138(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_D3DPERF_GetStatus_180233fa0;
  FUN_180031cc0(param_1 + 2);
  if ((param_2 & 1) != 0) {
    FUN_180102fc0(param_1,0x88);
  }
  return param_1;
}


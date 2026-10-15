/*
 * FUN_100511b0 at 100511b0
 * undefined FUN_100511b0(void)
 * Address ranges: 100511b0-100511fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100511b0(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_D3DPERF_GetStatus_native_1015eb6c;
  param_1[4] = &PTR_FUN_1015ee4c;
  if ((param_2 & 1) != 0) {
    FUN_10132260(param_1,0x18);
  }
  return param_1;
}


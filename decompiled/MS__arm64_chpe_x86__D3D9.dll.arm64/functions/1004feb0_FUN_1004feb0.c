/*
 * FUN_1004feb0 at 1004feb0
 * undefined FUN_1004feb0(void)
 * Address ranges: 1004feb0-1004fef7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1004feb0(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_D3DPERF_GetStatus_native_1015eb3c;
  FUN_1004f7f0(param_1 + 4);
  if ((param_2 & 1) != 0) {
    FUN_10132260(param_1,0x78);
  }
  return param_1;
}


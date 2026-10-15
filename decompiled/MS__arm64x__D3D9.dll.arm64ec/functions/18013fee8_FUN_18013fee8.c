/*
 * FUN_18013fee8 at 18013fee8
 * undefined FUN_18013fee8(void)
 * Address ranges: 18013fee8-18013ff2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18013fee8(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_D3DPERF_GetStatus_native_18022af30;
  FUN_18013f9b8(param_1 + 2);
  if ((param_2 & 1) != 0) {
    FUN_1802229d8(param_1,0x88);
  }
  return param_1;
}


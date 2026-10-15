/*
 * FUN_1800fda80 at 1800fda80
 * undefined FUN_1800fda80(void)
 * Address ranges: 1800fda80-1800fdabf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800fda80(undefined8 *param_1)

{
  *param_1 = &PTR_D3DPERF_GetStatus_180239a80;
  thunk_FUN_180102fc0(param_1[0xc]);
  thunk_FUN_180102fc0(param_1[9]);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}


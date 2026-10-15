/*
 * FUN_180210728 at 180210728
 * undefined FUN_180210728(void)
 * Address ranges: 180210728-1802107bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180210728(undefined8 *param_1)

{
  code *extraout_x11;
  
  *param_1 = &PTR_FUN_1802390b0;
  param_1[8] = &PTR_D3DPERF_GetStatus_native_180239080;
  FUN_18020d9f8(param_1[10],param_1,0,1);
  if (param_1[9] != 0) {
    FUN_18020dc08(param_1[10],param_1[9],1);
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)();
  }
  param_1[8] = &PTR_D3DPERF_GetStatus_native_180239038;
  *param_1 = &PTR_FUN_180239068;
  return;
}


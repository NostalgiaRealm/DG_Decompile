/*
 * FUN_18012d388 at 18012d388
 * undefined FUN_18012d388(void)
 * Address ranges: 18012d388-18012d3fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18012d388(undefined8 *param_1)

{
  code *extraout_x11;
  
  *param_1 = &PTR_D3DPERF_SetMarker_native_180229ed8;
  if (param_1[0xb] != 0) {
    thunk_FUN_180224288();
    param_1[0xb] = 0;
    param_1[0x10] = 0;
  }
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)();
  *param_1 = &PTR_thunk_FUN_180223720_18022a8c8;
  FUN_1802229d8(param_1[3]);
  return;
}


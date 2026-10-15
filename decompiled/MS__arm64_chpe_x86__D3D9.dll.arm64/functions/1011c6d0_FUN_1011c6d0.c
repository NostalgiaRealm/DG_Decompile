/*
 * FUN_1011c6d0 at 1011c6d0
 * undefined FUN_1011c6d0(void)
 * Address ranges: 1011c6d0-1011c787
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011c6d0(undefined4 *param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  *param_1 = &PTR_FUN_10160350;
  param_1[0xe] = &PTR_D3DPERF_GetStatus_native_10160338;
  FUN_1011e7a0(param_1[0x11],param_1,0,1);
  if (param_1[0x10] != 0) {
    FUN_1011e968(param_1[0x11],param_1[0x10],1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  param_1[0xe] = &PTR_D3DPERF_GetStatus_native_10160300;
  *param_1 = &PTR_FUN_10160358;
  return;
}


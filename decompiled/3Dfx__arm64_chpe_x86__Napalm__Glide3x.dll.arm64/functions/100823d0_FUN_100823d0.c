/*
 * FUN_100823d0 at 100823d0
 * undefined FUN_100823d0(void)
 * Address ranges: 100823d0-10082487
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100823d0(undefined4 *param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  *param_1 = &PTR_FUN_1009f768;
  param_1[0xe] = &PTR_FUN_1009f750;
  FUN_10062460(param_1[0x11],param_1,0,1);
  if (param_1[0x10] != 0) {
    FUN_10062620(param_1[0x11],param_1[0x10],1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  param_1[0xe] = &PTR_FUN_1009f2b4;
  *param_1 = &PTR_FUN_1009f2e4;
  return;
}


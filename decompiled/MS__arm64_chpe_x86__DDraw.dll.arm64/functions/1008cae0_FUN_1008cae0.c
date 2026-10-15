/*
 * FUN_1008cae0 at 1008cae0
 * undefined FUN_1008cae0(void)
 * Address ranges: 1008cae0-1008cb97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008cae0(undefined4 *param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  *param_1 = &PTR_FUN_100b31e4;
  param_1[0xe] = &PTR_FUN_100b31cc;
  FUN_10078440(param_1[0x11],param_1,0,1);
  if (param_1[0x10] != 0) {
    FUN_10078600(param_1[0x11],param_1[0x10],1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  param_1[0xe] = &PTR_FUN_100b2f60;
  *param_1 = &PTR_FUN_100b31c0;
  return;
}


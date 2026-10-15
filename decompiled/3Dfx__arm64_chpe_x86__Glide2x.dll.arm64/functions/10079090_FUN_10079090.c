/*
 * FUN_10079090 at 10079090
 * undefined FUN_10079090(void)
 * Address ranges: 10079090-10079147
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10079090(undefined4 *param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  *param_1 = &PTR_FUN_1009550c;
  param_1[0xe] = &PTR_FUN_100954f4;
  FUN_10059120(param_1[0x11],param_1,0,1);
  if (param_1[0x10] != 0) {
    FUN_100592e0(param_1[0x11],param_1[0x10],1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  param_1[0xe] = &PTR_FUN_10095058;
  *param_1 = &PTR_FUN_10095088;
  return;
}


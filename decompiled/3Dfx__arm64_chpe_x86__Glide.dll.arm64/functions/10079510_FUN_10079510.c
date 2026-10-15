/*
 * FUN_10079510 at 10079510
 * undefined FUN_10079510(void)
 * Address ranges: 10079510-100795c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10079510(undefined4 *param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  *param_1 = &PTR_FUN_1009553c;
  param_1[0xe] = &PTR_FUN_10095524;
  FUN_100595a0(param_1[0x11],param_1,0,1);
  if (param_1[0x10] != 0) {
    FUN_10059760(param_1[0x11],param_1[0x10],1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  param_1[0xe] = &PTR_FUN_10095088;
  *param_1 = &PTR_FUN_100950b8;
  return;
}


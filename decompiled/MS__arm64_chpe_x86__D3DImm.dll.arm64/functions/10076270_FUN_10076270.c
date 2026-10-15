/*
 * FUN_10076270 at 10076270
 * undefined FUN_10076270(void)
 * Address ranges: 10076270-10076327
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10076270(undefined4 *param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  *param_1 = &PTR_FUN_1009d080;
  param_1[0xe] = &PTR_FUN_1009d068;
  FUN_10077c00(param_1[0x11],param_1,0,1);
  if (param_1[0x10] != 0) {
    FUN_10077dc0(param_1[0x11],param_1[0x10],1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  param_1[0xe] = &PTR_FUN_1009d0a0;
  *param_1 = &PTR_FUN_1009d0d0;
  return;
}


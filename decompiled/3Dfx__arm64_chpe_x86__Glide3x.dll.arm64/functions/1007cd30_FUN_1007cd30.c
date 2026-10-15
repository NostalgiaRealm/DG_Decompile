/*
 * FUN_1007cd30 at 1007cd30
 * undefined FUN_1007cd30(void)
 * Address ranges: 1007cd30-1007cde7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007cd30(undefined4 *param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  *param_1 = &PTR_FUN_10099388;
  param_1[0xe] = &PTR_FUN_10099370;
  FUN_1005cdb0(param_1[0x11],param_1,0,1);
  if (param_1[0x10] != 0) {
    FUN_1005cf70(param_1[0x11],param_1[0x10],1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  param_1[0xe] = &PTR_FUN_10098ed4;
  *param_1 = &PTR_FUN_10098f04;
  return;
}


/*
 * FUN_100e9e80 at 100e9e80
 * undefined FUN_100e9e80(void)
 * Address ranges: 100e9e80-100e9f37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e9e80(undefined4 *param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  *param_1 = &PTR_FUN_1012ac50;
  param_1[0xe] = &PTR_FUN_1012ac38;
  FUN_100ebf50(param_1[0x11],param_1,0,1);
  if (param_1[0x10] != 0) {
    FUN_100ec118(param_1[0x11],param_1[0x10],1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  param_1[0xe] = &PTR_FUN_1012ac00;
  *param_1 = &PTR_FUN_1012ac58;
  return;
}


/*
 * DirectDrawCreate_native at 1003f9b0
 * undefined DirectDrawCreate_native(void)
 * Address ranges: 1003f9b0-1003fa37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 DirectDrawCreate_native(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  iVar1 = FUN_100375c0(s_DirectDrawCreate_100b3b10);
  if (iVar1 == 0) {
    uVar2 = FUN_10037738(&DAT_100b1820,param_1,param_2,param_3);
  }
  else {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar2 = (*extraout_w11)(param_1,param_2,param_3);
  }
  return uVar2;
}


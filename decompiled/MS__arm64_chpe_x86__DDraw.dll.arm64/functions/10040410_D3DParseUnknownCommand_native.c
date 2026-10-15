/*
 * D3DParseUnknownCommand_native at 10040410
 * undefined D3DParseUnknownCommand_native(void)
 * Address ranges: 10040410-1004048f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 D3DParseUnknownCommand_native(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if ((DAT_100c2920 != 0) ||
     (DAT_100c2920 = FUN_100375c0(s_D3DParseUnknownCommand_100b3c50), uVar1 = 0, DAT_100c2920 != 0))
  {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar1 = (*extraout_w11)(param_1,param_2);
  }
  return uVar1;
}


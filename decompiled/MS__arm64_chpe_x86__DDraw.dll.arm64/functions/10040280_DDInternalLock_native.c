/*
 * DDInternalLock_native at 10040280
 * undefined DDInternalLock_native(void)
 * Address ranges: 10040280-100402ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 DDInternalLock_native(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if ((DAT_100c292c != 0) ||
     (DAT_100c292c = FUN_100375c0(s_DDInternalLock_100b3c08), uVar1 = 0, DAT_100c292c != 0)) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar1 = (*extraout_w11)(param_1,param_2);
  }
  return uVar1;
}


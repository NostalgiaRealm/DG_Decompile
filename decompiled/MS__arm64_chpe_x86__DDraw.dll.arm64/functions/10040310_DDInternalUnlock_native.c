/*
 * DDInternalUnlock_native at 10040310
 * undefined DDInternalUnlock_native(void)
 * Address ranges: 10040310-1004037f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 DDInternalUnlock_native(undefined4 param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if ((DAT_100c2928 != 0) ||
     (DAT_100c2928 = FUN_100375c0(s_DDInternalUnlock_100b3c18), uVar1 = 0, DAT_100c2928 != 0)) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar1 = (*extraout_w11)(param_1);
  }
  return uVar1;
}


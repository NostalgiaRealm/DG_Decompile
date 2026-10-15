/*
 * ReleaseDDThreadLock_native at 10040210
 * undefined ReleaseDDThreadLock_native(void)
 * Address ranges: 10040210-10040277
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 ReleaseDDThreadLock_native(void)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if ((DAT_100c2930 != 0) ||
     (DAT_100c2930 = FUN_100375c0(s_ReleaseDDThreadLock_100b3bf0), uVar1 = 0, DAT_100c2930 != 0)) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar1 = (*extraout_w11)();
  }
  return uVar1;
}


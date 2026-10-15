/*
 * AcquireDDThreadLock_native at 100401a0
 * undefined AcquireDDThreadLock_native(void)
 * Address ranges: 100401a0-10040207
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 AcquireDDThreadLock_native(void)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if ((DAT_100c2934 != 0) ||
     (DAT_100c2934 = FUN_100375c0(s_AcquireDDThreadLock_100b3bd8), uVar1 = 0, DAT_100c2934 != 0)) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar1 = (*extraout_w11)();
  }
  return uVar1;
}


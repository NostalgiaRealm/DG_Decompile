/*
 * DebugSetMute_native at 100b04d0
 * undefined DebugSetMute_native(void)
 * Address ranges: 100b04d0-100b0537
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 DebugSetMute_native(void)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if ((DAT_1013cfd8 != 0) ||
     (DAT_1013cfd8 = FUN_100aef10(s_DebugSetMute_1012d038), uVar1 = 0, DAT_1013cfd8 != 0)) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar1 = (*extraout_w11)();
  }
  return uVar1;
}


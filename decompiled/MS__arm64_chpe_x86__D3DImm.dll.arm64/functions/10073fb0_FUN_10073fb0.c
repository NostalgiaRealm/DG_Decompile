/*
 * FUN_10073fb0 at 10073fb0
 * undefined FUN_10073fb0(void)
 * Address ranges: 10073fb0-1007400f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10073fb0(int param_1,int param_2)

{
  code *extraout_w11;
  
  if (param_2 != 0) {
    FUN_10077dc0(*(undefined4 *)(param_1 + 0x172c0),param_2,1);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_2);
  }
  return;
}


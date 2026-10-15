/*
 * FUN_1005d6e0 at 1005d6e0
 * undefined FUN_1005d6e0(void)
 * Address ranges: 1005d6e0-1005d73f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005d6e0(int param_1,int param_2)

{
  code *extraout_w11;
  
  if (param_2 != 0) {
    FUN_10059760(*(undefined4 *)(param_1 + 0x172c0),param_2,1);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_2);
  }
  return;
}


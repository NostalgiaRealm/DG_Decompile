/*
 * FUN_1005d260 at 1005d260
 * undefined FUN_1005d260(void)
 * Address ranges: 1005d260-1005d2bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005d260(int param_1,int param_2)

{
  code *extraout_w11;
  
  if (param_2 != 0) {
    FUN_100592e0(*(undefined4 *)(param_1 + 0x172c0),param_2,1);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_2);
  }
  return;
}


/*
 * FUN_10066590 at 10066590
 * undefined FUN_10066590(void)
 * Address ranges: 10066590-100665ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10066590(int param_1,int param_2)

{
  code *extraout_w11;
  
  if (param_2 != 0) {
    FUN_10062620(*(undefined4 *)(param_1 + 0x172c0),param_2,1);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_2);
  }
  return;
}


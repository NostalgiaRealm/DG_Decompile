/*
 * FUN_100e6c70 at 100e6c70
 * undefined FUN_100e6c70(void)
 * Address ranges: 100e6c70-100e6ccf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e6c70(int param_1,int param_2)

{
  code *extraout_w11;
  
  if (param_2 != 0) {
    FUN_100ec118(*(undefined4 *)(param_1 + 0x172c0),param_2,1);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_2);
  }
  return;
}


/*
 * FUN_101194c0 at 101194c0
 * undefined FUN_101194c0(void)
 * Address ranges: 101194c0-1011951f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101194c0(int param_1,int param_2)

{
  code *extraout_w11;
  
  if (param_2 != 0) {
    FUN_1011e968(*(undefined4 *)(param_1 + 0x172c0),param_2,1);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_2);
  }
  return;
}


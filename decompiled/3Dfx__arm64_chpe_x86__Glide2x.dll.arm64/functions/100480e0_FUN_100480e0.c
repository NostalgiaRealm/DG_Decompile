/*
 * FUN_100480e0 at 100480e0
 * undefined FUN_100480e0(void)
 * Address ranges: 100480e0-10048163
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100480e0(int param_1,int param_2,undefined4 param_3)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  if (param_2 == 0) {
    FUN_10048168(param_1,(char)param_3);
    *(undefined1 *)(param_1 + 0x3150) = 1;
  }
  *(undefined4 *)(param_1 + param_2 * 4 + 0x2994) = param_3;
  return;
}


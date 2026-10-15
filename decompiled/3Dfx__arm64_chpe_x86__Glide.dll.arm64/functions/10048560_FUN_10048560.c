/*
 * FUN_10048560 at 10048560
 * undefined FUN_10048560(void)
 * Address ranges: 10048560-100485e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048560(int param_1,int param_2,undefined4 param_3)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  if (param_2 == 0) {
    FUN_100485e8(param_1,(char)param_3);
    *(undefined1 *)(param_1 + 0x3150) = 1;
  }
  *(undefined4 *)(param_1 + param_2 * 4 + 0x2994) = param_3;
  return;
}


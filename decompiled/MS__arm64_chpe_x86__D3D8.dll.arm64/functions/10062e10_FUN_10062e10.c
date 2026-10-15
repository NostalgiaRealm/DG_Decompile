/*
 * FUN_10062e10 at 10062e10
 * undefined FUN_10062e10(void)
 * Address ranges: 10062e10-10062eab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10062e10(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  code *extraout_w11;
  
  if (param_2 < 8) {
    if ((param_3 < 0x1d) && ((0x1dc00ffeU >> (ulonglong)(param_3 & 0x1f) & 1) != 0)) {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(param_1,0);
    }
    FUN_100613f8(param_1,param_1 + 0x90,param_1 + 0xd970,param_2,param_3,param_4);
  }
  return;
}


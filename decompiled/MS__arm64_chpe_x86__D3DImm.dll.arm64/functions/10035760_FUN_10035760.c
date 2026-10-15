/*
 * FUN_10035760 at 10035760
 * undefined FUN_10035760(void)
 * Address ranges: 10035760-10035807
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10035760(int param_1,ulonglong param_2,undefined4 param_3)

{
  uint uVar1;
  code *extraout_w11;
  
  if ((((uint)param_2 < 0x3d) && ((0x1ff1827c3fd8cb90U >> (param_2 & 0x3f) & 1) != 0)) ||
     ((uVar1 = (uint)param_2 - 0x80, uVar1 < 0x19 &&
      ((0x19ffaffU >> (ulonglong)(uVar1 & 0x1f) & 1) != 0)))) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1,0);
  }
  FUN_100333b8(param_1,param_1 + 0x80,param_1 + 0x1d30,param_2 & 0xffffffff,param_3);
  return;
}


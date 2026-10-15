/*
 * FUN_10079290 at 10079290
 * undefined FUN_10079290(void)
 * Address ranges: 10079290-10079357
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10079290(int param_1,ulonglong param_2,undefined4 param_3)

{
  code *extraout_w11;
  uint uVar1;
  
  uVar1 = (uint)param_2;
  if ((int)uVar1 < 0x80) {
    if ((0x3c < uVar1) || ((0x1ff1007c3fd8c380U >> (param_2 & 0x3f) & 1) == 0)) goto LAB_1007932c;
  }
  else if (((0x2f < uVar1 - 0x80) ||
           ((0xfdeffd9efaffU >> ((ulonglong)(uVar1 - 0x80) & 0x3f) & 1) == 0)) &&
          ((0x1f < uVar1 - 0xb2 || ((0xf003ffffU >> (ulonglong)(uVar1 - 0xb2 & 0x1f) & 1) == 0))))
  goto LAB_1007932c;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
LAB_1007932c:
  FUN_10075b38(param_1,param_1 + 0x90,param_1 + 0xf660,param_2 & 0xffffffff,param_3);
  return;
}


/*
 * FUN_1000dd90 at 1000dd90
 * undefined FUN_1000dd90(void)
 * Address ranges: 1000dd90-1000dde3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000dd90(int param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (*(int *)(&DAT_0000658c + param_1) == param_2) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  return;
}


/*
 * FUN_10072710 at 10072710
 * undefined FUN_10072710(void)
 * Address ranges: 10072710-10072793
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10072710(int param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  plVar1 = (longlong *)(param_1 + (param_2 + 7) * 8);
  if (param_3 != *plVar1) {
    FUN_10071d50(param_1);
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,param_2,param_3);
    *plVar1 = param_3;
  }
  return;
}


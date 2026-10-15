/*
 * FUN_1007eb70 at 1007eb70
 * undefined FUN_1007eb70(void)
 * Address ranges: 1007eb70-1007ebf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007eb70(int param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  plVar1 = (longlong *)(param_1 + (param_2 + 0x27) * 8);
  if (param_3 != *plVar1) {
    FUN_1007c918(param_1);
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,param_2,param_3);
    *plVar1 = param_3;
  }
  return;
}


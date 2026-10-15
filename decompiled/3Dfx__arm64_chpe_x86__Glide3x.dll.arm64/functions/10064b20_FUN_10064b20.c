/*
 * FUN_10064b20 at 10064b20
 * undefined FUN_10064b20(void)
 * Address ranges: 10064b20-10064ba3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10064b20(int param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  plVar1 = (longlong *)(param_1 + (param_2 + 7) * 8);
  if (param_3 != *plVar1) {
    FUN_10063268(param_1);
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,param_2,param_3);
    *plVar1 = param_3;
  }
  return;
}


/*
 * FUN_1006a5c0 at 1006a5c0
 * undefined FUN_1006a5c0(void)
 * Address ranges: 1006a5c0-1006a643
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006a5c0(int param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  plVar1 = (longlong *)(param_1 + (param_2 + 0x27) * 8);
  if (param_3 != *plVar1) {
    FUN_10068908(param_1);
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,param_2,param_3);
    *plVar1 = param_3;
  }
  return;
}


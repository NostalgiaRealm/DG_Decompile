/*
 * FUN_100e2a10 at 100e2a10
 * undefined FUN_100e2a10(void)
 * Address ranges: 100e2a10-100e2a93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e2a10(int param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  plVar1 = (longlong *)(param_1 + (param_2 + 0x27) * 8);
  if (param_3 != *plVar1) {
    FUN_100e09c8(param_1);
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,param_2,param_3);
    *plVar1 = param_3;
  }
  return;
}


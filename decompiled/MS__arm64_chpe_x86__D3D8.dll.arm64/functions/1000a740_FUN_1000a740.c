/*
 * FUN_1000a740 at 1000a740
 * undefined FUN_1000a740(void)
 * Address ranges: 1000a740-1000a7b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000a740(undefined8 param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_2);
  if (*(int *)(param_2 + 0x1c) != 0) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_00)(uVar2);
  }
  return;
}


/*
 * FUN_1000d6c0 at 1000d6c0
 * undefined FUN_1000d6c0(void)
 * Address ranges: 1000d6c0-1000d73b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000d6c0(int param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if ((((param_2 == *(int *)(param_1 + 0x18)) || (param_2 == *(int *)(param_1 + 0x1c))) ||
      (param_2 == *(int *)(param_1 + 0x20))) || (param_2 == *(int *)(param_1 + 0x24))) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  return;
}


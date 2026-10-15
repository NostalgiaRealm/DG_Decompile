/*
 * FUN_10020560 at 10020560
 * undefined FUN_10020560(void)
 * Address ranges: 10020560-100205d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10020560(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2);
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_00)(uVar2);
  }
  return;
}


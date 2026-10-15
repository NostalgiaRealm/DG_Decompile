/*
 * FUN_10047f08 at 10047f08
 * undefined FUN_10047f08(void)
 * Address ranges: 10047f08-10047f97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10047f08(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2,*(undefined4 *)(param_1 + 0xf6d4),0);
  uVar2 = (*pcVar1)();
  (*extraout_w11_00)(uVar2,*(undefined4 *)(param_1 + 0xf6d0),0);
  return;
}


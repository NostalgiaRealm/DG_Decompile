/*
 * FUN_100928d0 at 100928d0
 * undefined FUN_100928d0(void)
 * Address ranges: 100928d0-1009295b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100928d0(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2);
    *(undefined4 *)(param_1 + 0x38) = 0;
    uVar2 = (*pcVar1)();
    (*extraout_w11_00)(uVar2);
    *(int *)(param_1 + 0x34) = 0;
  }
  return;
}


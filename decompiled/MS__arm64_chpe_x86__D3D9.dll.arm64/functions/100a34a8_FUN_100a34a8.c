/*
 * FUN_100a34a8 at 100a34a8
 * undefined FUN_100a34a8(void)
 * Address ranges: 100a34a8-100a3527
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a34a8(undefined8 param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((int)(param_2 >> 0x20) != 0) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2);
  }
  if ((int)param_2 != 0) {
    (*pcVar1)();
    (*extraout_w11_00)(param_2 & 0xffffffff);
  }
  return;
}


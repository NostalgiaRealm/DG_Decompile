/*
 * FUN_100f5c00 at 100f5c00
 * undefined FUN_100f5c00(void)
 * Address ranges: 100f5c00-100f5c93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100f5c00(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [64];
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_2,auStack_60);
  (*pcVar1)();
  uVar2 = (*extraout_w11_00)(param_2,auStack_78,auStack_80);
  uVar2 = FUN_100f5a18(uVar2,auStack_60);
  *param_3 = uVar2;
  *param_4 = uVar2;
  return;
}


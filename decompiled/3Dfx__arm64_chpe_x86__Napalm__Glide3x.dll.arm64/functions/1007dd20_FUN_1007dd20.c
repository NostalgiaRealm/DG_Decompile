/*
 * FUN_1007dd20 at 1007dd20
 * undefined FUN_1007dd20(void)
 * Address ranges: 1007dd20-1007ddb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007dd20(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

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
  uVar2 = FUN_1007db38(uVar2,auStack_60);
  *param_3 = uVar2;
  *param_4 = uVar2;
  return;
}


/*
 * FUN_1000a7c0 at 1000a7c0
 * undefined FUN_1000a7c0(void)
 * Address ranges: 1000a7c0-1000a833
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000a7c0(undefined8 param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar1 = *(int *)(param_2 + 0x1c);
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar3);
  if (iVar1 != 0) {
    (*pcVar2)();
    (*extraout_w11_00)(iVar1);
  }
  return;
}


/*
 * FUN_100356a8 at 100356a8
 * undefined FUN_100356a8(void)
 * Address ranges: 100356a8-1003575f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100356a8(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar3 = (undefined4 *)(param_1 + 0x208);
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2,*puVar3,0);
  puVar3 = (undefined4 *)(param_1 + 0x20c);
  uVar2 = (*pcVar1)();
  (*extraout_w11_00)(uVar2,*puVar3,0);
  return;
}


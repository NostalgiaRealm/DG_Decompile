/*
 * FUN_100469e0 at 100469e0
 * undefined FUN_100469e0(void)
 * Address ranges: 100469e0-10046a97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100469e0(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar3 = (undefined4 *)(param_1 + 0x54);
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2,*puVar3,0);
  puVar3 = (undefined4 *)(param_1 + 0x58);
  uVar2 = (*pcVar1)();
  (*extraout_w11_00)(uVar2,*puVar3,0);
  return;
}


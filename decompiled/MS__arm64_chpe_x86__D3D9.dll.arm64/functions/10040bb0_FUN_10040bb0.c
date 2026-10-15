/*
 * FUN_10040bb0 at 10040bb0
 * undefined FUN_10040bb0(void)
 * Address ranges: 10040bb0-10040c03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040bb0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  code *extraout_w11;
  
  puVar2 = (undefined4 *)(param_1 + 0x70);
  puVar3 = (undefined4 *)(param_1 + 0x6c);
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1,*puVar3,*puVar2);
  return;
}


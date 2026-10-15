/*
 * FUN_10036cb0 at 10036cb0
 * undefined FUN_10036cb0(void)
 * Address ranges: 10036cb0-10036d03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10036cb0(int param_1)

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


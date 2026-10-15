/*
 * FUN_10040250 at 10040250
 * undefined FUN_10040250(void)
 * Address ranges: 10040250-100402ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040250(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  code *extraout_w11;
  
  puVar2 = (undefined4 *)(*(int *)(param_1 + 4) + 0x70);
  puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + 0x6c);
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1,*puVar3,*puVar2,1);
  return;
}


/*
 * FUN_10033960 at 10033960
 * undefined FUN_10033960(void)
 * Address ranges: 10033960-100339d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10033960(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  code *extraout_w11;
  
  puVar2 = (undefined4 *)(param_2 * 0x104 + (param_3 & 0xff) * 4 + param_1 + 0x238);
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1,*puVar2,0);
  return;
}


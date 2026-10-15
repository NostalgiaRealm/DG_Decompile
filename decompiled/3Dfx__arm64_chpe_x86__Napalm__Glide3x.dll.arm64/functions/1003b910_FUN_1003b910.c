/*
 * FUN_1003b910 at 1003b910
 * undefined FUN_1003b910(void)
 * Address ranges: 1003b910-1003b983
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003b910(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  code *extraout_w11;
  
  puVar2 = (undefined4 *)(param_2 * 0x104 + (param_3 & 0xff) * 4 + param_1 + 0x238);
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1,*puVar2,0);
  return;
}


/*
 * FUN_100bd380 at 100bd380
 * undefined FUN_100bd380(void)
 * Address ranges: 100bd380-100bd3eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bd380(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (*(int *)(param_2 + 4) != 0) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,1);
  }
  FUN_100fed00(*(undefined4 *)(param_2 + 0x24));
  FUN_100fec90(*(undefined4 *)(param_2 + 8),0x128);
  return;
}


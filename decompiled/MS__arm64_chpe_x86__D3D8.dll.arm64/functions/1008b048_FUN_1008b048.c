/*
 * FUN_1008b048 at 1008b048
 * undefined FUN_1008b048(void)
 * Address ranges: 1008b048-1008b0e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008b048(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  code *extraout_w11;
  code *extraout_w11_00;
  
  FUN_1008afd8(param_1,1,1);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  **(undefined4 **)(param_1 + 0x18) = param_3;
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_3);
  (*pcVar1)();
  (*extraout_w11_00)(param_2);
  return;
}


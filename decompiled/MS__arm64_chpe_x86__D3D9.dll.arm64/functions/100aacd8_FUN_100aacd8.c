/*
 * FUN_100aacd8 at 100aacd8
 * undefined FUN_100aacd8(void)
 * Address ranges: 100aacd8-100aad73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100aacd8(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  code *extraout_w11;
  code *extraout_w11_00;
  
  FUN_100aac68(param_1,1,1);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  **(undefined4 **)(param_1 + 0x18) = param_3;
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_3);
  (*pcVar1)();
  (*extraout_w11_00)(param_2);
  return;
}


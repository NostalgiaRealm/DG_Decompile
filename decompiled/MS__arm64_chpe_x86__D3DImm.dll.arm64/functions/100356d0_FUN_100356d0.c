/*
 * FUN_100356d0 at 100356d0
 * undefined FUN_100356d0(void)
 * Address ranges: 100356d0-10035747
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100356d0(int param_1,uint param_2)

{
  uint uVar1;
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  uVar1 = param_2 & 0xff ^ 1;
  *(uint *)(param_1 + 0x54c) = uVar1;
  *(uint *)(param_1 + 0x9f4) = uVar1;
  *(undefined1 *)(param_1 + 0x1d48) = 1;
  *(undefined1 *)(param_1 + 0x1d41) = 1;
  return;
}


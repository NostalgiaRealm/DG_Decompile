/*
 * FUN_10079200 at 10079200
 * undefined FUN_10079200(void)
 * Address ranges: 10079200-10079273
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10079200(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2,0);
  uVar1 = param_2 & 0xff ^ 1;
  *(uint *)(param_1 + 0x644c) = uVar1;
  *(uint *)(param_1 + 0x6984) = uVar1;
  *(undefined1 *)(param_1 + 0xf6a3) = 1;
  *(undefined1 *)(param_1 + 0xf671) = 1;
  return;
}


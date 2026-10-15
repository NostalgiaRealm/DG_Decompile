/*
 * FUN_10019d00 at 10019d00
 * undefined FUN_10019d00(void)
 * Address ranges: 10019d00-10019d77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019d00(int param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  uVar1 = 2;
  if (param_2 != 1) {
    uVar1 = 3;
  }
  if (param_2 == 0) {
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0x2ca4) = uVar1;
  *(undefined1 *)(param_1 + 0x2daa) = 1;
  return;
}


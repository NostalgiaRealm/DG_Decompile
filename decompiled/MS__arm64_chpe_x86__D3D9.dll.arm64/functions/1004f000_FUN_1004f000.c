/*
 * FUN_1004f000 at 1004f000
 * undefined FUN_1004f000(void)
 * Address ranges: 1004f000-1004f04f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004f000(int param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
    *(int *)(param_1 + 0x10) = 0;
  }
  return;
}


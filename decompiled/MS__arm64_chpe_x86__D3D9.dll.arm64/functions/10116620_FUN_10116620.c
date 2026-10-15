/*
 * FUN_10116620 at 10116620
 * undefined FUN_10116620(void)
 * Address ranges: 10116620-1011666f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10116620(int param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (*(int *)(param_1 + 0x8e0) == 0) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  return 0x80004005;
}


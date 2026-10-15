/*
 * FUN_10020e80 at 10020e80
 * undefined FUN_10020e80(void)
 * Address ranges: 10020e80-10020edf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10020e80(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  code *extraout_w11;
  undefined1 auStack_20 [16];
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  puVar2 = (undefined1 *)(*extraout_w11)(uVar1,auStack_20);
  *(undefined1 *)(param_1 + 0x10) = *puVar2;
  return;
}


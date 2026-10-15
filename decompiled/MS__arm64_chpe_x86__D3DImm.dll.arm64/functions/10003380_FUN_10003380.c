/*
 * FUN_10003380 at 10003380
 * undefined FUN_10003380(void)
 * Address ranges: 10003380-100033df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10003380(int param_1)

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


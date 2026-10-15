/*
 * FUN_1001f300 at 1001f300
 * undefined FUN_1001f300(void)
 * Address ranges: 1001f300-1001f343
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001f300(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + 0xb8),param_2);
  (*extraout_w11)(uVar1);
  return;
}


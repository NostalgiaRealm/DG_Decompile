/*
 * FUN_10020620 at 10020620
 * undefined FUN_10020620(void)
 * Address ranges: 10020620-10020663
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10020620(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + 0x44),param_2);
  (*extraout_w11)(uVar1);
  return;
}


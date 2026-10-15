/*
 * FUN_1001b110 at 1001b110
 * undefined FUN_1001b110(void)
 * Address ranges: 1001b110-1001b153
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001b110(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + 0x44),param_2);
  (*extraout_w11)(uVar1);
  return;
}


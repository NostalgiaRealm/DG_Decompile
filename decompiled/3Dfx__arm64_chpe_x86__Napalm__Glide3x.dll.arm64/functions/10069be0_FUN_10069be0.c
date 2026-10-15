/*
 * FUN_10069be0 at 10069be0
 * undefined FUN_10069be0(void)
 * Address ranges: 10069be0-10069c2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10069be0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + 0x638),param_2,param_3);
  uVar1 = (*extraout_w11)(uVar1);
  return uVar1;
}


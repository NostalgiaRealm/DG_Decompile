/*
 * FUN_10114910 at 10114910
 * undefined FUN_10114910(void)
 * Address ranges: 10114910-1011495f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10114910(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + 0x638),param_2,param_3,param_4);
  uVar1 = (*extraout_w11)(uVar1);
  return uVar1;
}


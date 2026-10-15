/*
 * FUN_100539e0 at 100539e0
 * undefined FUN_100539e0(void)
 * Address ranges: 100539e0-10053a2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100539e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + 0xa70),param_2,param_3);
  uVar1 = (*extraout_w11)(uVar1);
  return uVar1;
}


/*
 * FUN_1006ab60 at 1006ab60
 * undefined FUN_1006ab60(void)
 * Address ranges: 1006ab60-1006abbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006ab60(int param_1,int param_2,undefined4 param_3)

{
  code *extraout_w11;
  undefined1 auVar1 [16];
  undefined4 local_10 [4];
  
  local_10[0] = 0;
  auVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                     (*(undefined4 *)(param_1 + param_2 * 0x1510 + 0x510),param_3);
  (*extraout_w11)(auVar1._0_8_ & 0xffffffff,auVar1._8_8_,local_10);
  return local_10[0];
}


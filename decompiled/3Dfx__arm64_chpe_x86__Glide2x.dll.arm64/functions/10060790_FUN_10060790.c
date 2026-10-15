/*
 * FUN_10060790 at 10060790
 * undefined FUN_10060790(void)
 * Address ranges: 10060790-100607df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10060790(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + 0x638),param_2,param_3,param_4);
  uVar1 = (*extraout_w11)(uVar1);
  return uVar1;
}


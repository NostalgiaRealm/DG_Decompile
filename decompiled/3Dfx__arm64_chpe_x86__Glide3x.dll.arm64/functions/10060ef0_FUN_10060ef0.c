/*
 * FUN_10060ef0 at 10060ef0
 * undefined FUN_10060ef0(void)
 * Address ranges: 10060ef0-10060f4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10060ef0(int param_1,int param_2)

{
  code *extraout_w11;
  
  if (param_2 != 0) {
    FUN_1005cf70(*(undefined4 *)(param_1 + 0x172c0),param_2,1);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_2);
  }
  return;
}


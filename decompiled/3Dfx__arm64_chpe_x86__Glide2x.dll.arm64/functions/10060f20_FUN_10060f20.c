/*
 * FUN_10060f20 at 10060f20
 * undefined FUN_10060f20(void)
 * Address ranges: 10060f20-10060faf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10060f20(int param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  plVar1 = (longlong *)(param_1 + (param_2 + 7) * 8);
  if (param_3 != *plVar1) {
    FUN_1005f5d8(param_1);
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,param_2,param_3);
    *(undefined1 *)(param_1 + 0x620) = 1;
    *plVar1 = param_3;
  }
  return;
}


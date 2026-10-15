/*
 * FUN_10062d50 at 10062d50
 * undefined FUN_10062d50(void)
 * Address ranges: 10062d50-10062df3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10062d50(int param_1,ulonglong param_2,undefined4 param_3)

{
  uint uVar1;
  code *extraout_w11;
  
  if ((((uint)param_2 < 0x3d) && ((0x1ff1807c3fd8c380U >> (param_2 & 0x3f) & 1) != 0)) ||
     ((uVar1 = (uint)param_2 - 0x80, uVar1 < 0x2e &&
      ((0x3dfffd9efaffU >> ((ulonglong)uVar1 & 0x3f) & 1) != 0)))) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1,0);
  }
  FUN_10060050(param_1,param_1 + 0x90,param_1 + 0xd970,param_2 & 0xffffffff,param_3);
  return;
}


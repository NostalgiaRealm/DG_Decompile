/*
 * FUN_10030a18 at 10030a18
 * undefined FUN_10030a18(void)
 * Address ranges: 10030a18-10030a7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_10030a18(int param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  lVar2 = (*extraout_w11)(uVar1);
  return lVar2 + (ulonglong)(uint)(*(int *)(param_1 + 0x301c) * param_2);
}


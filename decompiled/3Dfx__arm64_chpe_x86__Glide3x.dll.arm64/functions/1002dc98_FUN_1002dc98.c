/*
 * FUN_1002dc98 at 1002dc98
 * undefined FUN_1002dc98(void)
 * Address ranges: 1002dc98-1002dcff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1002dc98(int param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  lVar2 = (*extraout_w11)(uVar1);
  return lVar2 + (ulonglong)(uint)(*(int *)(param_1 + 0x301c) * param_2);
}


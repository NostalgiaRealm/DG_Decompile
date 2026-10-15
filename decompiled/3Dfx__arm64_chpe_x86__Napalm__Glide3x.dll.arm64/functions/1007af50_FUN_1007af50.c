/*
 * FUN_1007af50 at 1007af50
 * undefined FUN_1007af50(void)
 * Address ranges: 1007af50-1007afe7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007af50(int param_1,int *param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  code *extraout_w11;
  
  *param_2 = param_3[1] + param_4 * *(int *)(param_1 + 0x28);
  param_2[1] = *param_3;
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  lVar2 = (*extraout_w11)(uVar1);
  *(longlong *)(param_2 + 4) = lVar2;
  *(ulonglong *)(param_2 + 2) = lVar2 + (ulonglong)(uint)(param_4 * *(int *)(param_1 + 0x28));
  return;
}


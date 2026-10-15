/*
 * FUN_10045640 at 10045640
 * undefined FUN_10045640(void)
 * Address ranges: 10045640-100456af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10045640(int *param_1)

{
  int iVar1;
  code *extraout_w11;
  
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    FUN_100ebf50(*(undefined4 *)(*param_1 + 0x172c0),iVar1,0,0);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(iVar1,1);
  }
  return;
}


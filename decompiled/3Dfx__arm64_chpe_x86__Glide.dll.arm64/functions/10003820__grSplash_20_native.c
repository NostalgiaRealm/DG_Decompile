/*
 * _grSplash@20_native at 10003820
 * undefined _grSplash@20_native(void)
 * Address ranges: 10003820-10003873
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grSplash_20_native(ulonglong param_1)

{
  int iVar1;
  code *extraout_w11;
  
  param_1 = param_1 & 0xffffffff;
  iVar1 = FUN_1001beb0();
  if ((*(int *)(iVar1 + 0x44) != 0) && (*(char *)(iVar1 + 0x59) != '\0')) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1 & 0xffffffff);
  }
  return;
}


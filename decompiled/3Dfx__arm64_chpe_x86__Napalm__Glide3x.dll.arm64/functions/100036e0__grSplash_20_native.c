/*
 * _grSplash@20_native at 100036e0
 * undefined _grSplash@20_native(void)
 * Address ranges: 100036e0-10003733
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grSplash_20_native(ulonglong param_1)

{
  int iVar1;
  code *extraout_w11;
  
  param_1 = param_1 & 0xffffffff;
  iVar1 = FUN_1000ae60();
  if ((*(int *)(iVar1 + 0x44) != 0) && (*(char *)(iVar1 + 0x59) != '\0')) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1 & 0xffffffff);
  }
  return;
}


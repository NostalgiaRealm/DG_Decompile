/*
 * FUN_100539e0 at 100539e0
 * undefined FUN_100539e0(void)
 * Address ranges: 100539e0-10053a4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100539e0(int *param_1)

{
  int iVar1;
  code *extraout_w11;
  
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    FUN_1011e7a0(*(undefined4 *)(*param_1 + 0x172c0),iVar1,0,0);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(iVar1,1);
  }
  return;
}


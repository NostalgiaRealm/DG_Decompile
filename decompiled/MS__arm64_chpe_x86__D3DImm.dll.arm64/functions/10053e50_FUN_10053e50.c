/*
 * FUN_10053e50 at 10053e50
 * undefined FUN_10053e50(void)
 * Address ranges: 10053e50-10053eaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10053e50(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  code *extraout_w11;
  
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  cVar2 = (*extraout_w11)(uVar3);
  iVar1 = *(int *)(param_1 + 0xa58) + 0x10;
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0xa58);
  }
  return iVar1;
}


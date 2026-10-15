/*
 * FUN_100a3440 at 100a3440
 * undefined FUN_100a3440(void)
 * Address ranges: 100a3440-100a34d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a3440(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *extraout_w11;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[6];
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(iVar1,iVar2,param_1 + 2);
  if ((char)iVar3 == '\0') {
    iVar1 = *(int *)(iVar1 + 0x98) + iVar2 * 0x20 + 0x10;
    (*(code *)PTR_FUN_10134298)(iVar1,iVar1,param_1 + 2);
  }
  return;
}


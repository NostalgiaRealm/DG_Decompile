/*
 * FUN_100290f0 at 100290f0
 * undefined FUN_100290f0(void)
 * Address ranges: 100290f0-10029187
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100290f0(int *param_1)

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
    (*(code *)PTR_FUN_100ba2e0)(iVar1,iVar1,param_1 + 2);
  }
  return;
}


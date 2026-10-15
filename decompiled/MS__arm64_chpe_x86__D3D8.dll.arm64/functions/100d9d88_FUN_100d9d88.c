/*
 * FUN_100d9d88 at 100d9d88
 * undefined FUN_100d9d88(void)
 * Address ranges: 100d9d88-100d9e23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d9d88(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  code *extraout_w11;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar4 = *(int *)(param_1 + 0x10);
  iVar1 = iVar3 + 0x4a0;
  (*(code *)PTR_FUN_10134070)(iVar1);
  piVar2 = (int *)(iVar3 + iVar4 * 0x1510 + 0x550);
  if (param_2 == *piVar2) {
    *piVar2 = 0;
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_2);
  (*(code *)PTR_FUN_101340bc)(iVar1);
  return;
}


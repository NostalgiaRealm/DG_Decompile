/*
 * FUN_1006f728 at 1006f728
 * undefined FUN_1006f728(void)
 * Address ranges: 1006f728-1006f7c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006f728(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  code *extraout_w11;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar4 = *(int *)(param_1 + 0x10);
  iVar1 = iVar3 + 0x4a0;
  (*(code *)PTR_FUN_100a1014)(iVar1);
  piVar2 = (int *)(iVar3 + iVar4 * 0x1510 + 0x550);
  if (param_2 == *piVar2) {
    *piVar2 = 0;
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_2);
  (*(code *)PTR_FUN_100a1044)(iVar1);
  return;
}


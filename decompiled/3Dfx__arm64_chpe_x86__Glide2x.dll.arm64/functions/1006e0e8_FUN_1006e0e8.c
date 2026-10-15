/*
 * FUN_1006e0e8 at 1006e0e8
 * undefined FUN_1006e0e8(void)
 * Address ranges: 1006e0e8-1006e183
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006e0e8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  code *extraout_w11;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar4 = *(int *)(param_1 + 0x10);
  iVar1 = iVar3 + 0x4a0;
  (*(code *)PTR_FUN_1009d03c)(iVar1);
  piVar2 = (int *)(iVar3 + iVar4 * 0x1510 + 0x550);
  if (param_2 == *piVar2) {
    *piVar2 = 0;
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_2);
  (*(code *)PTR_FUN_1009d090)(iVar1);
  return;
}


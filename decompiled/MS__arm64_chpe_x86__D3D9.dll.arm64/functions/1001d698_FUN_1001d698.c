/*
 * FUN_1001d698 at 1001d698
 * undefined FUN_1001d698(void)
 * Address ranges: 1001d698-1001d70b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001d698(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  
  iVar1 = *(int *)(param_1 + 4);
  puVar3 = (undefined4 *)(iVar1 + 0x70);
  puVar4 = (undefined4 *)(iVar1 + 0x6c);
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2,*puVar4,*puVar3,1);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x50) = param_2;
  return;
}


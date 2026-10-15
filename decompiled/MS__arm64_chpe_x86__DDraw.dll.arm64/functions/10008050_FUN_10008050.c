/*
 * FUN_10008050 at 10008050
 * undefined FUN_10008050(void)
 * Address ranges: 10008050-100080c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10008050(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != -1) {
    puVar4 = (undefined4 *)(param_1 + 4);
    puVar3 = (undefined4 *)(*(int *)(param_1 + 8) + iVar1 * 4);
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,*puVar4,*puVar3);
    *(int *)(param_1 + 0x14) = -1;
  }
  return;
}


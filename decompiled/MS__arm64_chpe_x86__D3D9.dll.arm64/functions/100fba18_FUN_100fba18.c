/*
 * FUN_100fba18 at 100fba18
 * undefined FUN_100fba18(void)
 * Address ranges: 100fba18-100fbab7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100fba18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  code *extraout_w11;
  int local_20 [4];
  
  local_20[0] = 0;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar3 = (*extraout_w11)(uVar2,0x1000,*(int *)(param_1 + 0x1c),local_20);
  if (iVar3 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    uVar4 = 1;
    *(bool *)(param_1 + 0x2c) = local_20[0] == 0;
    *(int *)(param_1 + 0x28) = iVar1 + local_20[0];
    iVar3 = 0;
    if (local_20[0] != 0) {
      iVar3 = iVar1;
    }
    *(int *)(param_1 + 0x24) = iVar3;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


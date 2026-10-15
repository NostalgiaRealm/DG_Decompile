/*
 * FUN_10024940 at 10024940
 * undefined FUN_10024940(void)
 * Address ranges: 10024940-10024a03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10024940(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(param_1 + 0x1f6c) != 0) {
    puVar3 = (undefined4 *)(param_1 + 0x1f90);
    puVar4 = (undefined4 *)(param_1 + 0x1f80);
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,*puVar4,*puVar3,0);
  }
  if (*(int *)(param_1 + 0x1f7c) != 0) {
    puVar3 = (undefined4 *)(param_1 + 0x1fa4);
    puVar4 = (undefined4 *)(param_1 + 0x1fa0);
    uVar2 = (*pcVar1)();
    (*extraout_w11_00)(uVar2,*puVar4,*puVar3,0);
  }
  return;
}


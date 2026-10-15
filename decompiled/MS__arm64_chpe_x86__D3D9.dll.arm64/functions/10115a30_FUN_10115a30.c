/*
 * FUN_10115a30 at 10115a30
 * undefined FUN_10115a30(void)
 * Address ranges: 10115a30-10115b1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10115a30(int param_1,int *param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if ((((*param_2 != *(int *)(param_1 + 0x60c)) || (param_2[1] != *(int *)(param_1 + 0x610))) ||
      (param_2[2] != *(int *)(param_1 + 0x614))) || (param_2[3] != *(int *)(param_1 + 0x618))) {
    *(int *)(param_1 + 0x60c) = *param_2;
    *(int *)(param_1 + 0x610) = param_2[1];
    *(int *)(param_1 + 0x614) = param_2[2];
    *(int *)(param_1 + 0x618) = param_2[3];
    FUN_10113218(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
  }
  return;
}


/*
 * FUN_10065540 at 10065540
 * undefined FUN_10065540(void)
 * Address ranges: 10065540-1006562f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10065540(int param_1,int *param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if ((((*param_2 != *(int *)(param_1 + 0x60c)) || (param_2[1] != *(int *)(param_1 + 0x610))) ||
      (param_2[2] != *(int *)(param_1 + 0x614))) || (param_2[3] != *(int *)(param_1 + 0x618))) {
    *(int *)(param_1 + 0x60c) = *param_2;
    *(int *)(param_1 + 0x610) = param_2[1];
    *(int *)(param_1 + 0x614) = param_2[2];
    *(int *)(param_1 + 0x618) = param_2[3];
    FUN_10063268(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
  }
  return;
}


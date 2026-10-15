/*
 * FUN_100e31e0 at 100e31e0
 * undefined FUN_100e31e0(void)
 * Address ranges: 100e31e0-100e32cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e31e0(int param_1,int *param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if ((((*param_2 != *(int *)(param_1 + 0x60c)) || (param_2[1] != *(int *)(param_1 + 0x610))) ||
      (param_2[2] != *(int *)(param_1 + 0x614))) || (param_2[3] != *(int *)(param_1 + 0x618))) {
    *(int *)(param_1 + 0x60c) = *param_2;
    *(int *)(param_1 + 0x610) = param_2[1];
    *(int *)(param_1 + 0x614) = param_2[2];
    *(int *)(param_1 + 0x618) = param_2[3];
    FUN_100e09c8(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
  }
  return;
}


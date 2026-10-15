/*
 * FUN_1007f340 at 1007f340
 * undefined FUN_1007f340(void)
 * Address ranges: 1007f340-1007f42f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007f340(int param_1,int *param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if ((((*param_2 != *(int *)(param_1 + 0x60c)) || (param_2[1] != *(int *)(param_1 + 0x610))) ||
      (param_2[2] != *(int *)(param_1 + 0x614))) || (param_2[3] != *(int *)(param_1 + 0x618))) {
    *(int *)(param_1 + 0x60c) = *param_2;
    *(int *)(param_1 + 0x610) = param_2[1];
    *(int *)(param_1 + 0x614) = param_2[2];
    *(int *)(param_1 + 0x618) = param_2[3];
    FUN_1007c918(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
  }
  return;
}


/*
 * FUN_1006b540 at 1006b540
 * undefined FUN_1006b540(void)
 * Address ranges: 1006b540-1006b63f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006b540(int param_1,int param_2,float *param_3)

{
  undefined4 uVar1;
  code *extraout_w11;
  undefined8 uVar2;
  
  param_1 = param_1 + param_2 * 0x1510;
  if ((((*param_3 != *(float *)(param_1 + 2000)) || (param_3[1] != *(float *)(param_1 + 0x7d4))) ||
      (param_3[2] != *(float *)(param_1 + 0x7d8))) ||
     (((param_3[3] != *(float *)(param_1 + 0x7dc) || (param_3[4] != *(float *)(param_1 + 0x7e0))) ||
      (param_3[5] != *(float *)(param_1 + 0x7e4))))) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,1,param_3);
    uVar2 = *(undefined8 *)param_3;
    *(undefined8 *)(param_1 + 0x7d8) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 2000) = uVar2;
    *(undefined8 *)(param_1 + 0x7e0) = *(undefined8 *)(param_3 + 4);
  }
  return;
}


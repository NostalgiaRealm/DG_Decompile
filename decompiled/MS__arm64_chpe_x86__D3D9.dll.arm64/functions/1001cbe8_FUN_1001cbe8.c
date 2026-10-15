/*
 * FUN_1001cbe8 at 1001cbe8
 * undefined FUN_1001cbe8(void)
 * Address ranges: 1001cbe8-1001cca7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1001cbe8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined4 param_5,uint param_6)

{
  bool bVar1;
  int iVar2;
  code *extraout_w11;
  
  *(uint *)(param_1 + 3) = param_6;
  param_1[1] = param_3;
  *param_1 = param_2;
  if ((param_6 & 1) == 0) {
    iVar2 = FUN_101322b0(param_5);
    bVar1 = iVar2 != 0;
    *(int *)(param_1 + 2) = iVar2;
    if (iVar2 != 0) {
      FUN_101325a0(iVar2,param_4,param_5);
      *(undefined4 *)((int)param_1 + 0x14) = param_5;
    }
  }
  else {
    *(int *)(param_1 + 2) = param_4;
    *(undefined4 *)((int)param_1 + 0x14) = 0;
    bVar1 = true;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_4);
  }
  return bVar1;
}


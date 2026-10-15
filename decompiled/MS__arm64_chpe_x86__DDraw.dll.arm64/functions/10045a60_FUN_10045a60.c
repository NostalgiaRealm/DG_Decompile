/*
 * FUN_10045a60 at 10045a60
 * undefined FUN_10045a60(void)
 * Address ranges: 10045a60-10045b27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10045a60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined4 param_5,uint param_6)

{
  bool bVar1;
  int iVar2;
  code *extraout_w11;
  
  *(uint *)(param_1 + 3) = param_6;
  *(undefined1 *)((int)param_1 + 0x1c) = 0;
  param_1[1] = param_3;
  *param_1 = param_2;
  if ((param_6 & 1) == 0) {
    iVar2 = FUN_100914b0(param_5);
    bVar1 = iVar2 != 0;
    *(int *)(param_1 + 2) = iVar2;
    if (iVar2 != 0) {
      FUN_100917a0(iVar2,param_4,param_5);
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


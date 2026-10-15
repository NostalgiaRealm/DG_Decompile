/*
 * FUN_10019de0 at 10019de0
 * undefined FUN_10019de0(void)
 * Address ranges: 10019de0-10019f5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019de0(int param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined1 param_7,undefined1 param_8)

{
  code *pcVar1;
  int iVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined4 local_50;
  
  if (param_2 < 8) {
    FUN_10017a70(param_1,0,0,0);
    pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (param_4 == 0) {
      FUN_10034780(param_1,param_2,param_3,0,0,param_5,param_6,param_7,param_8);
      *(undefined4 *)(param_1 + param_2 * 4 + 0x1e94) = 0;
    }
    else {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar2 = (*extraout_w11)(param_4);
      if (iVar2 == 1) {
        local_50 = param_4 + -0x1c;
        param_4 = 0;
      }
      else {
        param_4 = param_4 + -0x88;
        local_50 = 0;
        (*pcVar1)();
        (*extraout_w11_00)(param_4,param_8);
      }
      *(int *)(param_1 + param_2 * 4 + 0x1e94) = param_4;
      FUN_10034780(param_1,param_2,param_3,param_4,local_50,param_5,param_6,param_7,param_8);
    }
  }
  return;
}


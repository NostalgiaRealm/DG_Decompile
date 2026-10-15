/*
 * FUN_1003edb0 at 1003edb0
 * undefined FUN_1003edb0(void)
 * Address ranges: 1003edb0-1003ef33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003edb0(int param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined1 param_7,undefined1 param_8)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined4 local_50;
  
  if (param_2 < 8) {
    FUN_1003c678(param_1,0,0,0);
    pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    iVar1 = param_1 + param_2 * 4;
    if (param_4 == 0) {
      FUN_10061d50(param_1,param_2,param_3,0,0,param_5,param_6,param_7,param_8);
      *(undefined4 *)(iVar1 + 0xdb08) = 0;
      *(undefined4 *)(iVar1 + 0xdb28) = 0;
    }
    else {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar3 = (*extraout_w11)(param_4);
      if (iVar3 == 1) {
        local_50 = param_4 + -0x1c;
        param_4 = 0;
      }
      else {
        param_4 = param_4 + -0x88;
        local_50 = 0;
        (*pcVar2)();
        (*extraout_w11_00)(param_4,param_8);
      }
      *(int *)(iVar1 + 0xdb08) = param_4;
      *(int *)(iVar1 + 0xdb28) = local_50;
      FUN_10061d50(param_1,param_2,param_3,param_4,local_50,param_5,param_6,param_7,param_8);
    }
  }
  return;
}


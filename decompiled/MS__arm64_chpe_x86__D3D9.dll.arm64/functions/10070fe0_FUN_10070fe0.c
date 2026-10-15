/*
 * FUN_10070fe0 at 10070fe0
 * undefined FUN_10070fe0(void)
 * Address ranges: 10070fe0-10071157
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_10070fe0(int param_1,int param_2,int *param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  int local_60 [2];
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(param_1 + 8) != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    local_50 = (*extraout_w11)(param_4);
    local_50 = local_50 + (ulonglong)(uint)((param_5 + param_3[7] * 2) * 4);
    local_48 = 1;
    local_60[1] = 2;
    FUN_101170f0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x1304),1,&local_50,local_60 + 1);
    if ((*(uint *)(*param_3 + param_3[1] * 0x18 + 0xc) & 1) != 0) {
      iVar1 = param_3[7];
      local_60[0] = 0;
      local_58 = 0;
      (*pcVar2)();
      iVar3 = (*extraout_w11_00)(param_4,0,&local_58,local_60);
      if (-1 < iVar3) {
        *(undefined4 *)(local_60[0] + (param_5 + iVar1 * 2) * 4) = 0;
        (*pcVar2)();
        (*extraout_w11_01)(param_4,0,&local_58);
      }
    }
    *(undefined4 *)(param_2 + 0x2c) = param_4;
    *(int *)(param_2 + 0x30) = param_5;
    *(int **)(param_2 + 0x28) = param_3;
  }
  return;
}


/*
 * FUN_10017a70 at 10017a70
 * undefined FUN_10017a70(void)
 * Address ranges: 10017a70-10017c93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10017a70(int param_1,byte param_2,byte param_3,int param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    if (*(int *)(param_1 + 0x54) == 0) {
      if ((((param_2 & 1) != 0) || ((param_3 & 1) != 0)) ||
         ((param_4 != 0 && (param_4 != *(int *)(param_1 + 0x60))))) {
        FUN_100179c0(param_1);
        FUN_10017758(param_1,param_2,param_3,param_4);
      }
    }
    else {
      uVar2 = FUN_100149a8(param_1);
      if ((uVar2 & 1) != 0) {
        FUN_100179c0(param_1);
        iVar5 = 0x70;
        if (*(int *)(param_1 + 0x1ef8) == *(int *)(param_1 + 0x1d74)) {
          iVar5 = 0x50;
        }
        puVar4 = (undefined4 *)(iVar5 + param_1);
        uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11_00)(uVar1,*(int *)(param_1 + 0x54),*puVar4);
        FUN_10017758(param_1,param_2,param_3,param_4);
      }
      (*(code *)PTR_FUN_100a1044)(*(int *)(param_1 + 0x1d50) + 0x4a0);
      FUN_100968f0(param_1 + 0x20,0,8);
    }
  }
  else {
    uVar2 = FUN_100149a8(param_1);
    if ((uVar2 & 1) != 0) {
      FUN_100179c0(param_1);
      puVar4 = (undefined4 *)(param_1 + 0x68);
      iVar5 = 0x70;
      if (*(int *)(param_1 + 0x1ef8) == *(int *)(param_1 + 0x1d74)) {
        iVar5 = 0x50;
      }
      puVar3 = (undefined4 *)(iVar5 + param_1);
      uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar1,*(int *)(param_1 + 0x6c),*puVar4,*puVar3);
      FUN_10017758(param_1,param_2,param_3,param_4);
    }
    (*(code *)PTR_FUN_100a1044)(*(int *)(param_1 + 0x1d50) + 0x4a0);
    FUN_100968f0(param_1 + 0x20,0,8);
  }
  return 0;
}


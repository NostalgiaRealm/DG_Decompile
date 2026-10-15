/*
 * FUN_100163d8 at 100163d8
 * undefined FUN_100163d8(void)
 * Address ranges: 100163d8-10016537
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100163d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8)

{
  int *piVar1;
  int iVar2;
  code *extraout_w11;
  
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(bool *)(param_1 + 0x59) = param_7 != 0;
  iVar2 = (*(code *)PTR_FUN_100a0094)(param_2);
  piVar1 = (int *)(param_1 + 0x44);
  *piVar1 = iVar2;
  if (iVar2 != 0) {
    iVar2 = (*(code *)PTR_FUN_100a0070)(iVar2,s__fxSplashInit_24_100995b8);
    *(int *)(param_1 + 0x48) = iVar2;
    if (iVar2 != 0) {
      iVar2 = (*(code *)PTR_FUN_100a0070)(*piVar1,s__fxSplashShutdown_0_100995d0);
      *(int *)(param_1 + 0x4c) = iVar2;
      if (iVar2 != 0) {
        iVar2 = (*(code *)PTR_FUN_100a0070)(*piVar1,s__fxSplashPlug_16_100995e8);
        *(int *)(param_1 + 0x50) = iVar2;
        if (iVar2 != 0) {
          iVar2 = (*(code *)PTR_FUN_100a0070)(*piVar1,s__fxSplash_20_10099600);
          *(int *)(param_1 + 0x54) = iVar2;
          if (iVar2 != 0) {
            (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
            (*extraout_w11)(param_3,param_4,param_5,param_6,1,param_8);
            return;
          }
        }
      }
    }
    (*(code *)PTR_FUN_100a0044)(*piVar1);
    *piVar1 = 0;
  }
  return;
}


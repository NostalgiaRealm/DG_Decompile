/*
 * FUN_1001fc08 at 1001fc08
 * undefined FUN_1001fc08(void)
 * Address ranges: 1001fc08-1001fd67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001fc08(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8)

{
  int *piVar1;
  int iVar2;
  code *extraout_w11;
  
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(bool *)(param_1 + 0x59) = param_7 != 0;
  iVar2 = (*(code *)PTR_FUN_1009d094)(param_2);
  piVar1 = (int *)(param_1 + 0x44);
  *piVar1 = iVar2;
  if (iVar2 != 0) {
    iVar2 = (*(code *)PTR_FUN_1009d070)(iVar2,s__fxSplashInit_24_100969c0);
    *(int *)(param_1 + 0x48) = iVar2;
    if (iVar2 != 0) {
      iVar2 = (*(code *)PTR_FUN_1009d070)(*piVar1,s__fxSplashShutdown_0_100969d8);
      *(int *)(param_1 + 0x4c) = iVar2;
      if (iVar2 != 0) {
        iVar2 = (*(code *)PTR_FUN_1009d070)(*piVar1,s__fxSplashPlug_16_100969f0);
        *(int *)(param_1 + 0x50) = iVar2;
        if (iVar2 != 0) {
          iVar2 = (*(code *)PTR_FUN_1009d070)(*piVar1,s__fxSplash_20_10096a08);
          *(int *)(param_1 + 0x54) = iVar2;
          if (iVar2 != 0) {
            (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
            (*extraout_w11)(param_3,param_4,param_5,param_6,1,param_8);
            return;
          }
        }
      }
    }
    (*(code *)PTR_FUN_1009d044)(*piVar1);
    *piVar1 = 0;
  }
  return;
}


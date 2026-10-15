/*
 * FUN_100397b0 at 100397b0
 * undefined FUN_100397b0(void)
 * Address ranges: 100397b0-10039883
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100397b0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 extraout_x1;
  code *extraout_w11;
  undefined4 local_40 [4];
  
  iVar1 = -0x7ff8ffa9;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    local_40[0] = 0;
    iVar1 = FUN_1003d588(param_1 + 0x44,param_2,param_3,local_40);
    if (iVar1 == -0x7fffbffe) {
      FUN_10034cc8();
      if (DAT_100c291c != 0) {
        uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                          (DAT_100c291c,extraout_x1,&DAT_100be150 + *(int *)(param_1 + 0x11c) * 0x8a
                          );
        iVar1 = (*extraout_w11)(uVar2,param_1);
      }
    }
  }
  return iVar1;
}


/*
 * FUN_100b21a0 at 100b21a0
 * undefined FUN_100b21a0(void)
 * Address ranges: 100b21a0-100b22bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b21a0(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  code *extraout_w11;
  undefined1 auVar4 [16];
  
  if (param_2 != 0) {
    if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
      bVar1 = false;
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
    }
    else {
      bVar1 = true;
      iVar2 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
      if (iVar2 == 0) {
        FUN_10006560(0);
      }
    }
    if (**(int **)(param_1 + -0x4e10) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(**(int **)(param_1 + -0x4e10) + 0xa8);
    }
    auVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                       (*(undefined4 *)(param_1 + -0x4dbc),uVar3);
    (*extraout_w11)(0x437f0000,auVar4._0_8_ & 0xffffffff,auVar4._8_8_ & 0xffffffff,param_2);
    if (bVar1) {
      (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
    }
    else {
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
    }
  }
  return;
}


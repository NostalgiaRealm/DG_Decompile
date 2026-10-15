/*
 * FUN_100b3920 at 100b3920
 * undefined FUN_100b3920(void)
 * Address ranges: 100b3920-100b3a6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100b3920(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  code *extraout_w11;
  int iVar4;
  
  uVar3 = 0x8876086c;
  if (param_2 < 8) {
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
    iVar2 = 0;
    iVar4 = 0;
    if (param_3 != 0) {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar3 = (*extraout_w11)(param_3);
      switch(uVar3) {
      case 3:
      case 5:
        iVar2 = param_3 + -0x78;
        break;
      case 4:
        iVar4 = param_3 + -200;
      }
    }
    FUN_1000afe0(param_1 + -0x58e0,param_2,iVar2,iVar4);
    uVar3 = 0;
    if (bVar1) {
      (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
    }
    else {
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
    }
  }
  return uVar3;
}


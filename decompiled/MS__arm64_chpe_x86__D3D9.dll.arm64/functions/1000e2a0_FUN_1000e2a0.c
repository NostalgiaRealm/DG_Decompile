/*
 * FUN_1000e2a0 at 1000e2a0
 * undefined FUN_1000e2a0(void)
 * Address ranges: 1000e2a0-1000e3c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000e2a0(int param_1,int param_2,uint param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  
  if ((param_3 < 2 && param_4 != 0) && (*(char *)(param_1 + 0x66a0) == '\0')) {
    if (((*(uint *)(param_1 + 0xdd0) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
      bVar1 = false;
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
    }
    else {
      bVar1 = true;
      iVar2 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
      if (iVar2 == 0) {
        FUN_100071d0(0);
      }
    }
    puVar4 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0xd94) + param_2 * 4) + 0xa8);
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(0x477fff00,uVar3,*puVar4,param_4);
    if (bVar1) {
      (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
    }
    else {
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
    }
  }
  return;
}


/*
 * FUN_1000cfb0 at 1000cfb0
 * undefined FUN_1000cfb0(void)
 * Address ranges: 1000cfb0-1000d0d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000cfb0(int param_1,int param_2,uint param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  
  if ((param_3 < 2 && param_4 != 0) && (*(char *)(param_1 + 0x58c0) == '\0')) {
    if (((*(uint *)(param_1 + 0xb0c) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
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
    puVar4 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0xad0) + param_2 * 4) + 0xa8);
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(0x477fff00,uVar3,*puVar4,param_4);
    if (bVar1) {
      (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
    }
    else {
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
    }
  }
  return;
}


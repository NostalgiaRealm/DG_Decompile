/*
 * FUN_10069810 at 10069810
 * undefined FUN_10069810(void)
 * Address ranges: 10069810-10069a0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10069810(int param_1,undefined4 param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *extraout_w11;
  undefined4 local_40 [4];
  
  *param_3 = 0;
  iVar4 = 0;
  iVar2 = FUN_10083af0(param_2,&DAT_1009e900,0x10);
  if (((((iVar2 == 0) || (iVar2 = FUN_10083af0(param_2,&DAT_1009e7f0,0x10), iVar2 == 0)) ||
       (iVar2 = FUN_10083af0(param_2,&DAT_1009e800,0x10), iVar2 == 0)) ||
      ((iVar2 = FUN_10083af0(param_2,&DAT_1009e8c0,0x10), iVar2 == 0 ||
       (iVar2 = FUN_10083af0(param_2,&DAT_1009e8d0,0x10), iVar2 == 0)))) ||
     (iVar2 = FUN_10083af0(param_2,&DAT_1009e7f0,0x10), iVar2 == 0)) {
    *param_3 = param_1;
    FUN_10069a20(param_1);
  }
  else {
    iVar2 = FUN_10083af0(param_2,&DAT_1009e8e0,0x10);
    puVar1 = (uint *)(param_1 + 0x920);
    if (((((iVar2 == 0) && (*puVar1 != 0)) ||
         ((iVar2 = FUN_10083af0(param_2,&DAT_1009e8f0,0x10), iVar2 == 0 && (1 < *puVar1)))) ||
        ((iVar2 = FUN_10083af0(param_2,&DAT_1009e820,0x10), iVar2 == 0 && (2 < *puVar1)))) ||
       (((iVar2 = FUN_10083af0(param_2,&DAT_1009e830,0x10), iVar2 == 0 && (3 < *puVar1)) ||
        (((iVar2 = FUN_10083af0(param_2,&DAT_1009e880,0x10), iVar2 == 0 && (4 < *puVar1)) ||
         ((iVar2 = FUN_10083af0(param_2,&DAT_1009e890,0x10), iVar2 == 0 && (5 < *puVar1)))))))) {
      local_40[0] = 0;
      uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar4 = (*extraout_w11)(uVar3,param_2,local_40);
      if (-1 < iVar4) {
        *param_3 = param_1;
      }
    }
    else {
      iVar4 = -0x7fffbffe;
    }
  }
  return iVar4;
}


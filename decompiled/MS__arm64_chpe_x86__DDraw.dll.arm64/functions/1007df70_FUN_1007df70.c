/*
 * FUN_1007df70 at 1007df70
 * undefined FUN_1007df70(void)
 * Address ranges: 1007df70-1007e16f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007df70(int param_1,undefined4 param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *extraout_w11;
  undefined4 local_40 [4];
  
  *param_3 = 0;
  iVar4 = 0;
  iVar2 = FUN_10091750(param_2,&DAT_100b1a30,0x10);
  if (((((iVar2 == 0) || (iVar2 = FUN_10091750(param_2,&DAT_100b18e0,0x10), iVar2 == 0)) ||
       (iVar2 = FUN_10091750(param_2,&DAT_100b18f0,0x10), iVar2 == 0)) ||
      ((iVar2 = FUN_10091750(param_2,&DAT_100b19a0,0x10), iVar2 == 0 ||
       (iVar2 = FUN_10091750(param_2,&DAT_100b19b0,0x10), iVar2 == 0)))) ||
     (iVar2 = FUN_10091750(param_2,&DAT_100b18e0,0x10), iVar2 == 0)) {
    *param_3 = param_1;
    FUN_1007e180(param_1);
  }
  else {
    iVar2 = FUN_10091750(param_2,&DAT_100b19c0,0x10);
    puVar1 = (uint *)(param_1 + 0x920);
    if (((((iVar2 == 0) && (*puVar1 != 0)) ||
         ((iVar2 = FUN_10091750(param_2,&DAT_100b19d0,0x10), iVar2 == 0 && (1 < *puVar1)))) ||
        ((iVar2 = FUN_10091750(param_2,&DAT_100b1910,0x10), iVar2 == 0 && (2 < *puVar1)))) ||
       (((iVar2 = FUN_10091750(param_2,&DAT_100b1920,0x10), iVar2 == 0 && (3 < *puVar1)) ||
        (((iVar2 = FUN_10091750(param_2,&DAT_100b1970,0x10), iVar2 == 0 && (4 < *puVar1)) ||
         ((iVar2 = FUN_10091750(param_2,&DAT_100b1980,0x10), iVar2 == 0 && (5 < *puVar1)))))))) {
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


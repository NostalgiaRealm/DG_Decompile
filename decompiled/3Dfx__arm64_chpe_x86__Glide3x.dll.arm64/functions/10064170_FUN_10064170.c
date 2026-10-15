/*
 * FUN_10064170 at 10064170
 * undefined FUN_10064170(void)
 * Address ranges: 10064170-1006436f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10064170(int param_1,undefined4 param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *extraout_w11;
  undefined4 local_40 [4];
  
  *param_3 = 0;
  iVar4 = 0;
  iVar2 = FUN_1007e450(param_2,&DAT_100985c0,0x10);
  if (((((iVar2 == 0) || (iVar2 = FUN_1007e450(param_2,&DAT_100984b0,0x10), iVar2 == 0)) ||
       (iVar2 = FUN_1007e450(param_2,&DAT_100984c0,0x10), iVar2 == 0)) ||
      ((iVar2 = FUN_1007e450(param_2,&DAT_10098580,0x10), iVar2 == 0 ||
       (iVar2 = FUN_1007e450(param_2,&DAT_10098590,0x10), iVar2 == 0)))) ||
     (iVar2 = FUN_1007e450(param_2,&DAT_100984b0,0x10), iVar2 == 0)) {
    *param_3 = param_1;
    FUN_10064380(param_1);
  }
  else {
    iVar2 = FUN_1007e450(param_2,&DAT_100985a0,0x10);
    puVar1 = (uint *)(param_1 + 0x920);
    if (((((iVar2 == 0) && (*puVar1 != 0)) ||
         ((iVar2 = FUN_1007e450(param_2,&DAT_100985b0,0x10), iVar2 == 0 && (1 < *puVar1)))) ||
        ((iVar2 = FUN_1007e450(param_2,&DAT_100984e0,0x10), iVar2 == 0 && (2 < *puVar1)))) ||
       (((iVar2 = FUN_1007e450(param_2,&DAT_100984f0,0x10), iVar2 == 0 && (3 < *puVar1)) ||
        (((iVar2 = FUN_1007e450(param_2,&DAT_10098540,0x10), iVar2 == 0 && (4 < *puVar1)) ||
         ((iVar2 = FUN_1007e450(param_2,&DAT_10098550,0x10), iVar2 == 0 && (5 < *puVar1)))))))) {
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


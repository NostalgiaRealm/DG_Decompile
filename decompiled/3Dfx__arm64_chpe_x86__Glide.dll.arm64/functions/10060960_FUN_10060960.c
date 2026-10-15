/*
 * FUN_10060960 at 10060960
 * undefined FUN_10060960(void)
 * Address ranges: 10060960-10060b5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10060960(int param_1,undefined4 param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *extraout_w11;
  undefined4 local_40 [4];
  
  *param_3 = 0;
  iVar4 = 0;
  iVar2 = FUN_1007abb0(param_2,&DAT_10094778,0x10);
  if (((((iVar2 == 0) || (iVar2 = FUN_1007abb0(param_2,&DAT_10094668,0x10), iVar2 == 0)) ||
       (iVar2 = FUN_1007abb0(param_2,&DAT_10094678,0x10), iVar2 == 0)) ||
      ((iVar2 = FUN_1007abb0(param_2,&DAT_10094738,0x10), iVar2 == 0 ||
       (iVar2 = FUN_1007abb0(param_2,&DAT_10094748,0x10), iVar2 == 0)))) ||
     (iVar2 = FUN_1007abb0(param_2,&DAT_10094668,0x10), iVar2 == 0)) {
    *param_3 = param_1;
    FUN_10060b70(param_1);
  }
  else {
    iVar2 = FUN_1007abb0(param_2,&DAT_10094758,0x10);
    puVar1 = (uint *)(param_1 + 0x920);
    if (((((iVar2 == 0) && (*puVar1 != 0)) ||
         ((iVar2 = FUN_1007abb0(param_2,&DAT_10094768,0x10), iVar2 == 0 && (1 < *puVar1)))) ||
        ((iVar2 = FUN_1007abb0(param_2,&DAT_10094698,0x10), iVar2 == 0 && (2 < *puVar1)))) ||
       (((iVar2 = FUN_1007abb0(param_2,&DAT_100946a8,0x10), iVar2 == 0 && (3 < *puVar1)) ||
        (((iVar2 = FUN_1007abb0(param_2,&DAT_100946f8,0x10), iVar2 == 0 && (4 < *puVar1)) ||
         ((iVar2 = FUN_1007abb0(param_2,&DAT_10094708,0x10), iVar2 == 0 && (5 < *puVar1)))))))) {
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


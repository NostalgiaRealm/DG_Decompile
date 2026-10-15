/*
 * FUN_10063610 at 10063610
 * undefined FUN_10063610(void)
 * Address ranges: 10063610-1006374f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_10063610(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 char param_6)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  int local_50 [2];
  undefined8 local_48;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_48 = 0;
  local_50[0] = 0;
  cVar2 = '\0';
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar3 = (*extraout_w11)(param_2,0,&local_48,local_50);
  if (-1 < iVar3) {
    cVar2 = FUN_10059ad8(*(undefined4 *)(param_1 + 0x8e4),param_2);
    if (cVar2 != '\0') {
      FUN_1007a780(local_50[0] + param_3,param_5,param_4 - param_3);
    }
    local_48 = CONCAT44(param_4,param_3);
    (*pcVar1)();
    (*extraout_w11_00)(param_2,0,&local_48);
    if (param_6 != '\0') {
      (*pcVar1)();
      (*extraout_w11_01)(param_2,0,0);
    }
    FUN_10060198(param_1,param_2,0,1,0);
  }
  return cVar2;
}


/*
 * FUN_100707d8 at 100707d8
 * undefined FUN_100707d8(void)
 * Address ranges: 100707d8-1007090b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100707d8(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  ulonglong uVar5;
  char cVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  int local_40 [2];
  undefined8 local_38;
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar1 = *param_2;
  switch(*(undefined4 *)(iVar1 + 8)) {
  case 8:
    cVar6 = '\x01';
    uVar5 = 1;
    break;
  case 9:
  case 10:
    local_40[0] = 0;
    iVar1 = param_2[7];
    uVar5 = 0;
    iVar2 = param_2[8] * 8;
    local_38 = CONCAT44(iVar2 + 8,iVar2);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar4 = (*extraout_w11)(iVar1,0,&local_38,local_40);
    if (-1 < iVar4) {
      uVar5 = *(ulonglong *)(iVar2 + local_40[0]);
      local_38 = 0;
      (*pcVar3)();
      (*extraout_w11_00)(iVar1,0,&local_38);
    }
    iVar1 = *param_2;
    cVar6 = (char)param_2[0xb];
    break;
  case 0xb:
    cVar6 = (char)param_2[0xb];
    uVar5 = (ulonglong)(cVar6 == '\0');
    break;
  default:
    goto switchD_10070818_default;
  }
  FUN_1006f430(iVar1,uVar5,*(undefined8 *)(param_2 + 2),cVar6);
switchD_10070818_default:
  return;
}


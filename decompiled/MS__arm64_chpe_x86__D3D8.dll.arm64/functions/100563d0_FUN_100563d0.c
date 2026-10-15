/*
 * FUN_100563d0 at 100563d0
 * undefined FUN_100563d0(void)
 * Address ranges: 100563d0-1005652f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100563d0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined8 uVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar1 = 0;
  if (*param_2 != 0) {
    iVar1 = *param_2 + -0xc0;
  }
  if (param_3 == 0) {
    param_3 = 0;
LAB_1005644c:
    bVar3 = 1;
  }
  else {
    param_3 = param_3 + -0xc0;
    if (param_3 == 0) goto LAB_1005644c;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    bVar3 = (*extraout_w11)(param_3);
  }
  if (iVar1 == 0) {
    bVar4 = 1;
  }
  else {
    (*pcVar2)();
    bVar4 = (*extraout_w11_00)(iVar1);
  }
  if ((bVar4 & bVar3) != 0) {
    return 1;
  }
  FUN_100fd9e8(*(int *)(param_1 + 0xd9b8) + 0x11c0);
  if (iVar1 == 0) {
LAB_100564d4:
    if (param_3 != 0) {
      (*pcVar2)();
      cVar5 = (*extraout_w11_02)(param_3);
      if (cVar5 == '\0') goto LAB_10056504;
    }
    uVar6 = 1;
  }
  else {
    (*pcVar2)();
    cVar5 = (*extraout_w11_01)(iVar1);
    if (cVar5 != '\0') goto LAB_100564d4;
LAB_10056504:
    uVar6 = 0;
  }
  return uVar6;
}


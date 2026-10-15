/*
 * FUN_1002dc50 at 1002dc50
 * undefined FUN_1002dc50(void)
 * Address ranges: 1002dc50-1002ddaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1002dc50(int param_1,int *param_2,int param_3)

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
LAB_1002dccc:
    bVar3 = 1;
  }
  else {
    param_3 = param_3 + -0xc0;
    if (param_3 == 0) goto LAB_1002dccc;
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
  FUN_100816d8(*(int *)(param_1 + 0x1d54) + 0x11c0);
  if (iVar1 == 0) {
LAB_1002dd54:
    if (param_3 != 0) {
      (*pcVar2)();
      cVar5 = (*extraout_w11_02)(param_3);
      if (cVar5 == '\0') goto LAB_1002dd84;
    }
    uVar6 = 1;
  }
  else {
    (*pcVar2)();
    cVar5 = (*extraout_w11_01)(iVar1);
    if (cVar5 != '\0') goto LAB_1002dd54;
LAB_1002dd84:
    uVar6 = 0;
  }
  return uVar6;
}


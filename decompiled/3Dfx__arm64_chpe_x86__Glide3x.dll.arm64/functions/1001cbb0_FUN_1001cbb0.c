/*
 * FUN_1001cbb0 at 1001cbb0
 * undefined FUN_1001cbb0(void)
 * Address ranges: 1001cbb0-1001ce23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1001cbb0(int param_1,uint param_2,ulonglong param_3,int param_4,int param_5,char param_6,
                 int param_7,char param_8,undefined1 param_9)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  code *extraout_w11;
  char cVar8;
  
  uVar6 = param_3;
  uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar5 = (*extraout_w11)(uVar4,uVar6 & 0xffffffff);
  if (((param_2 >> 4 & 1) == 0) && (*(char *)(*(int *)(param_1 + 4) + 0x53) == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((*(int *)(iVar5 + 0x54) == 0) || (param_8 != '\0')) || (!bVar2)) {
    cVar8 = '\0';
  }
  else {
    cVar8 = '\x01';
  }
  if ((((param_2 & 1) != 0) || (iVar7 = *(int *)(iVar5 + 0x10), *(int *)(iVar5 + 0x68) == 0)) &&
     (iVar7 = param_4, param_4 == 0xff)) {
    iVar7 = *(int *)(iVar5 + 0x10);
  }
  if ((*(int *)(iVar5 + 100) == 0) && (*(int *)(iVar5 + 0x68) == 0)) {
    cVar3 = FUN_1001c058(*(undefined4 *)(param_1 + 0x32dc),param_3 & 0xffffffff,iVar7,param_5,
                         param_6,cVar8,param_8,param_2 & 1 ^ 1,param_9);
  }
  else {
    if (((param_2 & 1) == 0) ||
       (((iVar7 == *(int *)(iVar5 + 0x5c) && (param_6 == *(char *)(iVar5 + 0x7d))) &&
        ((param_5 == *(int *)(iVar5 + 0x60) || (param_5 == 0xff)))))) {
      cVar3 = '\x01';
    }
    else {
      cVar3 = '\0';
    }
    cVar8 = *(char *)(iVar5 + 0x81);
  }
  if (cVar3 != '\0') {
    *(undefined4 *)(param_7 + 0xc) = *(undefined4 *)(iVar5 + 0x5c);
    *(undefined4 *)(param_7 + 0x10) = *(undefined4 *)(iVar5 + 0x60);
    iVar7 = 0x6c;
    if (cVar8 != '\0') {
      iVar7 = 0x54;
    }
    *(undefined4 *)(param_7 + 4) = *(undefined4 *)(iVar7 + iVar5);
    if (cVar8 == '\0') {
      iVar7 = *(int *)(iVar5 + 0x70);
    }
    else {
      iVar7 = 4;
      if (*(char *)(iVar5 + 0x7c) == '\0') {
        iVar7 = 2;
      }
      iVar7 = iVar7 * *(int *)(iVar5 + 0x58);
    }
    *(int *)(param_7 + 8) = iVar7;
    *(char *)(iVar5 + 0x81) = cVar8;
    piVar1 = (int *)(iVar5 + ((param_2 & 1) + 0x19) * 4);
    *piVar1 = *piVar1 + 1;
    FUN_10023d50(iVar5,*(undefined4 *)(iVar5 + 0x24));
  }
  return cVar3;
}


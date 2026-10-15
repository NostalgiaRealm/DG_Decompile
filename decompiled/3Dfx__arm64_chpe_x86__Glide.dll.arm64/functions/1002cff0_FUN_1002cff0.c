/*
 * FUN_1002cff0 at 1002cff0
 * undefined FUN_1002cff0(void)
 * Address ranges: 1002cff0-1002d353
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1002cff0(int param_1,uint param_2,int param_3,int param_4,int param_5,char param_6,
                 int param_7,char param_8)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  char cVar10;
  undefined1 auVar11 [16];
  
  cVar5 = '\0';
  if ((param_4 == 0xff || param_2 == 0) || (iVar6 = FUN_1002acf0(param_4,param_3 == 2), iVar6 != 0))
  {
    pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar9 = (*extraout_w11)(param_1);
    iVar6 = FUN_1002c2c0(uVar9,param_3);
    if (iVar6 != -1) {
      auVar11 = (*pcVar4)();
      iVar7 = (*extraout_w11_00)(auVar11._0_8_ & 0xffffffff,auVar11._8_8_ & 0xffffffff);
      if ((param_3 == *(int *)(param_1 + 0x2964)) || (*(char *)(iVar7 + 0x48) != '\0')) {
        (*pcVar4)();
        (*extraout_w11_01)(param_1);
      }
      uVar8 = (*pcVar4)();
      iVar7 = (*extraout_w11_02)(uVar8,iVar6);
      if (((param_2 >> 4 & 1) == 0) && (*(char *)(*(int *)(param_1 + 4) + 0x53) == '\0')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((*(int *)(iVar7 + 0x54) == 0) || (param_8 != '\0')) || (!bVar2)) {
        cVar10 = '\0';
      }
      else {
        cVar10 = '\x01';
      }
      if ((((param_2 & 1) != 0) || (iVar3 = *(int *)(iVar7 + 0x10), *(int *)(iVar7 + 0x68) == 0)) &&
         (iVar3 = param_4, param_4 == 0xff)) {
        iVar3 = *(int *)(iVar7 + 0x10);
      }
      if ((*(int *)(iVar7 + 100) == 0) && (*(int *)(iVar7 + 0x68) == 0)) {
        cVar5 = FUN_1002be00(*(undefined4 *)(param_1 + 0x315c),iVar6,iVar3,param_5,param_6,cVar10,
                             param_8,param_2 & 1 ^ 1,0);
      }
      else {
        if (((param_2 & 1) == 0) ||
           (((iVar3 == *(int *)(iVar7 + 0x5c) && (param_6 == *(char *)(iVar7 + 0x7d))) &&
            ((param_5 == *(int *)(iVar7 + 0x60) || (param_5 == 0xff)))))) {
          cVar5 = '\x01';
        }
        else {
          cVar5 = '\0';
        }
        cVar10 = *(char *)(iVar7 + 0x81);
      }
      if (cVar5 != '\0') {
        *(undefined4 *)(param_7 + 0xc) = *(undefined4 *)(iVar7 + 0x5c);
        *(undefined4 *)(param_7 + 0x10) = *(undefined4 *)(iVar7 + 0x60);
        iVar6 = 0x6c;
        if (cVar10 != '\0') {
          iVar6 = 0x54;
        }
        *(undefined4 *)(param_7 + 4) = *(undefined4 *)(iVar6 + iVar7);
        if (cVar10 == '\0') {
          iVar6 = *(int *)(iVar7 + 0x70);
        }
        else {
          iVar6 = 4;
          if (*(char *)(iVar7 + 0x7c) == '\0') {
            iVar6 = 2;
          }
          iVar6 = iVar6 * *(int *)(iVar7 + 0x58);
        }
        *(int *)(param_7 + 8) = iVar6;
        *(char *)(iVar7 + 0x81) = cVar10;
        piVar1 = (int *)(iVar7 + ((param_2 & 1) + 0x19) * 4);
        *piVar1 = *piVar1 + 1;
        FUN_100350b0(iVar7,*(undefined4 *)(iVar7 + 0x24));
      }
    }
    (*pcVar4)();
    (*extraout_w11_03)(param_1);
  }
  return cVar5;
}


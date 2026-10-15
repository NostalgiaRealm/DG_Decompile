/*
 * FUN_1001dfc0 at 1001dfc0
 * undefined FUN_1001dfc0(void)
 * Address ranges: 1001dfc0-1001e29f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1001dfc0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined1 param_6,undefined4 param_7,undefined1 param_8)

{
  int *piVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  undefined1 auVar8 [16];
  
  cVar4 = '\0';
  if ((param_4 != 0xff && param_2 != 0) &&
     (iVar5 = FUN_1001af58(param_4,param_3 == 7 || param_3 == 2), iVar5 == 0)) {
    return '\0';
  }
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  bVar2 = true;
  piVar1 = (int *)(param_1 + 0x32dc);
  if (param_3 == 6) {
    if (*(int *)(*piVar1 + 0x128) != -1) {
      auVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar5 = (*extraout_w11)(auVar8._0_8_ & 0xffffffff,auVar8._8_8_ & 0xffffffff);
      if (*(int *)(iVar5 + 0x18) == *(int *)(param_1 + 0x2a20)) {
        iVar7 = 0x2a24;
LAB_1001e10c:
        if (*(int *)(iVar5 + 0x1c) == *(int *)(param_1 + iVar7)) goto LAB_1001e128;
      }
LAB_1001e124:
      bVar2 = false;
    }
  }
  else if ((param_3 == 7) && (*(int *)(*piVar1 + 300) != -1)) {
    auVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar5 = (*extraout_w11_00)(auVar8._0_8_ & 0xffffffff,auVar8._8_8_ & 0xffffffff);
    if (*(int *)(iVar5 + 0x18) == *(int *)(param_1 + 0x2a34)) {
      iVar7 = 0x2a38;
      goto LAB_1001e10c;
    }
    goto LAB_1001e124;
  }
LAB_1001e128:
  (*pcVar3)();
  (*extraout_w11_01)(param_1);
  if (bVar2) {
    FUN_1001cf30(param_1,param_3);
    iVar5 = FUN_1001c518(*piVar1,param_3);
    if (iVar5 != -1) {
      uVar6 = (*pcVar3)();
      iVar7 = (*extraout_w11_02)(uVar6,iVar5);
      if ((param_3 == *(int *)(param_1 + 0x29e0)) || (*(char *)(iVar7 + 0x48) != '\0')) {
        (*pcVar3)();
        (*extraout_w11_03)(param_1);
      }
      cVar4 = FUN_1001cbb0(param_1,param_2,iVar5,param_4,param_5,param_6,param_7,param_8,0);
      if (cVar4 != '\0') {
        if (param_3 == 6) {
          piVar1 = (int *)(*(int *)(param_1 + 0x32dc) + 0x128);
        }
        else {
          if (param_3 != 7) goto LAB_1001e258;
          piVar1 = (int *)(*(int *)(param_1 + 0x32dc) + 300);
        }
        *piVar1 = iVar5;
      }
    }
  }
LAB_1001e258:
  (*pcVar3)();
  (*extraout_w11_04)(param_1);
  return cVar4;
}


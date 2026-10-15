/*
 * FUN_1001e5e0 at 1001e5e0
 * undefined FUN_1001e5e0(void)
 * Address ranges: 1001e5e0-1001e8bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1001e5e0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
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
     (iVar5 = FUN_1001b518(param_4,param_3 == 7 || param_3 == 2), iVar5 == 0)) {
    return '\0';
  }
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  bVar2 = true;
  piVar1 = (int *)(param_1 + 0x365c);
  if (param_3 == 6) {
    if (*(int *)(*piVar1 + 0x128) != -1) {
      auVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar5 = (*extraout_w11)(auVar8._0_8_ & 0xffffffff,auVar8._8_8_ & 0xffffffff);
      if (*(int *)(iVar5 + 0x18) == *(int *)(param_1 + 0x2b5c)) {
        iVar7 = 0x2b60;
LAB_1001e72c:
        if (*(int *)(iVar5 + 0x1c) == *(int *)(param_1 + iVar7)) goto LAB_1001e748;
      }
LAB_1001e744:
      bVar2 = false;
    }
  }
  else if ((param_3 == 7) && (*(int *)(*piVar1 + 300) != -1)) {
    auVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar5 = (*extraout_w11_00)(auVar8._0_8_ & 0xffffffff,auVar8._8_8_ & 0xffffffff);
    if (*(int *)(iVar5 + 0x18) == *(int *)(param_1 + 0x2b70)) {
      iVar7 = 0x2b74;
      goto LAB_1001e72c;
    }
    goto LAB_1001e744;
  }
LAB_1001e748:
  (*pcVar3)();
  (*extraout_w11_01)(param_1);
  if (bVar2) {
    FUN_1001d538(param_1,param_3);
    iVar5 = FUN_1001cae0(*piVar1,param_3);
    if (iVar5 != -1) {
      uVar6 = (*pcVar3)();
      iVar7 = (*extraout_w11_02)(uVar6,iVar5);
      if ((param_3 == *(int *)(param_1 + 0x2b1c)) || (*(char *)(iVar7 + 0x48) != '\0')) {
        (*pcVar3)();
        (*extraout_w11_03)(param_1);
      }
      cVar4 = FUN_1001d1b8(param_1,param_2,iVar5,param_4,param_5,param_6,param_7,param_8,0);
      if (cVar4 != '\0') {
        if (param_3 == 6) {
          piVar1 = (int *)(*(int *)(param_1 + 0x365c) + 0x128);
        }
        else {
          if (param_3 != 7) goto LAB_1001e878;
          piVar1 = (int *)(*(int *)(param_1 + 0x365c) + 300);
        }
        *piVar1 = iVar5;
      }
    }
  }
LAB_1001e878:
  (*pcVar3)();
  (*extraout_w11_04)(param_1);
  return cVar4;
}


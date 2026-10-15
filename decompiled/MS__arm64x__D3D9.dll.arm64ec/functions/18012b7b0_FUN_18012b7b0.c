/*
 * FUN_18012b7b0 at 18012b7b0
 * undefined FUN_18012b7b0(void)
 * Address ranges: 18012b7b0-18012bb87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18012b7b0(longlong param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  
  *param_4 = 0;
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  lVar3 = 0;
  iVar2 = (int)param_2;
  if (iVar2 == *(int *)(param_1 + 0x20)) {
    uVar5 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        if (*param_4 != 0) {
          return lVar3;
        }
        uVar4 = (*(code *)puVar1)();
        lVar3 = (*extraout_x11)(uVar4,*param_3,param_4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x18));
    }
  }
  else if (iVar2 == *(int *)(param_1 + 0x24)) {
    uVar5 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        if (*param_4 != 0) {
          return lVar3;
        }
        uVar4 = (*(code *)puVar1)();
        lVar3 = (*extraout_x11_00)(uVar4,*param_3,param_3[1]);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x18));
    }
  }
  else if (iVar2 == *(int *)(param_1 + 0x28)) {
    uVar5 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        if (*param_4 != 0) {
          return lVar3;
        }
        uVar4 = (*(code *)puVar1)();
        lVar3 = (*extraout_x11_01)(uVar4,*param_3,param_4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x18));
    }
  }
  else if (iVar2 == *(int *)(param_1 + 0x2c)) {
    uVar5 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        if (*param_4 != 0) {
          return lVar3;
        }
        uVar4 = (*(code *)puVar1)();
        iVar2 = (*extraout_x11_02)(uVar4,*param_3,param_3[1],param_4);
        uVar5 = uVar5 + 1;
        lVar3 = (longlong)iVar2;
      } while (uVar5 < *(uint *)(param_1 + 0x18));
    }
  }
  else if (iVar2 == *(int *)(param_1 + 0x30)) {
    uVar5 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        if (*param_4 != 0) {
          return lVar3;
        }
        uVar4 = (*(code *)puVar1)();
        lVar3 = (*extraout_x11_03)(uVar4,*param_3,param_3[1],param_4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x18));
    }
  }
  else if (iVar2 == *(int *)(param_1 + 0x34)) {
    uVar5 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        if (*param_4 != 0) {
          return lVar3;
        }
        uVar4 = (*(code *)puVar1)();
        iVar2 = (*extraout_x11_04)(uVar4,*param_3,param_3[1],param_4);
        uVar5 = uVar5 + 1;
        lVar3 = (longlong)iVar2;
      } while (uVar5 < *(uint *)(param_1 + 0x18));
    }
  }
  else if (iVar2 == *(int *)(param_1 + 0x38)) {
    uVar5 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        if (*param_4 != 0) {
          return lVar3;
        }
        uVar4 = (*(code *)puVar1)();
        lVar3 = (*extraout_x11_05)(uVar4,*param_3,param_4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x18));
    }
  }
  else if (iVar2 == *(int *)(param_1 + 0x3c)) {
    uVar6 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        if (*param_4 != 0) {
          return lVar3;
        }
        uVar4 = (*(code *)puVar1)(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar6 * 8),param_2
                                  ,param_3[1]);
        auVar7 = (*extraout_x11_06)(uVar4,*param_3);
        param_2 = auVar7._8_8_;
        lVar3 = auVar7._0_8_;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 0x18));
    }
  }
  else if ((iVar2 == *(int *)(param_1 + 0x40)) && (uVar6 = 0, *(int *)(param_1 + 0x18) != 0)) {
    do {
      if (*param_4 != 0) {
        return lVar3;
      }
      uVar4 = (*(code *)puVar1)(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar6 * 8),param_2,
                                param_3[1]);
      auVar7 = (*extraout_x11_07)(uVar4,*param_3);
      param_2 = auVar7._8_8_;
      lVar3 = auVar7._0_8_;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0x18));
  }
  return lVar3;
}


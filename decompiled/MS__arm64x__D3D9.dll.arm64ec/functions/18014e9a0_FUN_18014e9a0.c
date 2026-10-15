/*
 * FUN_18014e9a0 at 18014e9a0
 * undefined FUN_18014e9a0(void)
 * Address ranges: 18014e9a0-18014eab7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18014e9a0(longlong param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined *puVar6;
  ulonglong uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar8;
  int iVar9;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  longlong lVar10;
  uint uVar11;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    if (*(int *)(param_1 + 0x74) == 0) {
      if ((((param_2 | param_3) & 0xff) != 0) ||
         ((param_4 != 0 && (param_4 != *(int *)(param_1 + 0x80))))) {
        if (*(int *)(*(longlong *)(param_1 + 0xf710) + 0x34) != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0xf710) + 0x34) = 0;
        }
        if (*(int *)(*(longlong *)(param_1 + 0xf718) + 0x34) != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0xf718) + 0x34) = 0;
        }
        FUN_18014e820(param_1,param_2,param_3,param_4);
      }
    }
    else {
      if (*(int *)(*(longlong *)(param_1 + 0xf710) + 0x34) != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0xf710) + 0x34) = 0;
      }
      if (*(int *)(*(longlong *)(param_1 + 0xf718) + 0x34) != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0xf718) + 0x34) = 0;
      }
      FUN_1801042e0(*(longlong *)(param_1 + 0xf718) + 0x38);
      *(byte *)(param_1 + 0xf68f) =
           *(int *)(*(longlong *)(param_1 + 0xf718) + 0x6c) != 0 | *(byte *)(param_1 + 0xf68f);
      *(undefined4 *)(*(longlong *)(param_1 + 0xf718) + 0x6c) = 0;
      uVar7 = FUN_180149120(param_1);
      puVar6 = __hybrid_os_arm64x_dispatch_icall;
      if ((uVar7 & 1) != 0) {
        lVar10 = 0x98;
        if (*(longlong *)(param_1 + 0xff38) == *(longlong *)(param_1 + 0xf718)) {
          lVar10 = 0x70;
        }
        uVar2 = *(undefined4 *)(param_1 + lVar10);
        uVar1 = *(undefined4 *)(param_1 + 0x74);
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
        iVar9 = *(int *)(lVar10 + 0xb28);
        if (iVar9 != 0) {
          iVar3 = *(int *)(lVar10 + 0x67c);
          uVar8 = *(undefined8 *)(lVar10 + 0xb20);
          *(int *)(lVar10 + 0x67c) = iVar3 + 1;
          if (((iVar3 == 0) && (*(longlong *)(lVar10 + 0xb10) != 0)) &&
             (*(int *)(lVar10 + 0xba8) != 0)) {
            uVar11 = 0;
            do {
              (*(code *)puVar6)();
              (*extraout_x11_03)();
              uVar11 = uVar11 + 1;
            } while (uVar11 < *(uint *)(lVar10 + 0xba8));
          }
          (*(code *)puVar6)(0x180224000,*(undefined8 *)(lVar10 + 0x688),iVar9,uVar8);
          (*extraout_x11_04)();
          *(undefined4 *)(lVar10 + 0xb28) = 0;
        }
        iVar9 = *(int *)(lVar10 + 0x67c);
        *(int *)(lVar10 + 0x67c) = iVar9 + 1;
        if (((iVar9 == 0) && (*(longlong *)(lVar10 + 0xb10) != 0)) &&
           (*(int *)(lVar10 + 0xba8) != 0)) {
          uVar8 = 0x180224000;
          uVar7 = 0;
          do {
            (*(code *)puVar6)(*(undefined8 *)(*(longlong *)(lVar10 + 0xba0) + uVar7 * 8),uVar8);
            (*extraout_x11_05)();
            uVar11 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar11;
            uVar8 = extraout_x1_00;
          } while (uVar11 < *(uint *)(lVar10 + 0xba8));
        }
        uVar8 = (*(code *)puVar6)(0x180225000);
        (*extraout_x11_06)(uVar8,uVar1,1,uVar2,0);
        cVar5 = *(char *)(lVar10 + 0x674);
        *(undefined1 *)(lVar10 + 0x674) = 0;
        iVar9 = 8;
        if (cVar5 == '\0') {
          iVar9 = 1;
        }
        iVar9 = iVar9 + *(int *)(lVar10 + 0x678);
        *(int *)(lVar10 + 0x678) = iVar9;
        if (((*(int *)(lVar10 + 0x680) <= iVar9) && (*(longlong *)(lVar10 + 0xb10) != 0)) &&
           (*(int *)(lVar10 + 0x684) == 0)) {
          FUN_180207560(lVar10 + 8,0);
        }
      }
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
      iVar9 = *(int *)(lVar10 + 0x684) + -1;
      *(int *)(lVar10 + 0x684) = iVar9;
      if ((iVar9 == 0) && (*(int *)(lVar10 + 0x680) <= *(int *)(lVar10 + 0x678))) {
        FUN_180207560(lVar10 + 8,0);
      }
      FUN_18014e820(param_1,param_2,param_3,param_4);
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
  }
  else {
    if (*(int *)(*(longlong *)(param_1 + 0xf710) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xf710) + 0x34) = 0;
    }
    if (*(int *)(*(longlong *)(param_1 + 0xf718) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xf718) + 0x34) = 0;
    }
    if (*(int *)(param_1 + 0x74) != 0) {
      FUN_1801042e0(*(longlong *)(param_1 + 0xf718) + 0x38);
      *(byte *)(param_1 + 0xf68f) =
           *(int *)(*(longlong *)(param_1 + 0xf718) + 0x6c) != 0 | *(byte *)(param_1 + 0xf68f);
      *(undefined4 *)(*(longlong *)(param_1 + 0xf718) + 0x6c) = 0;
    }
    FUN_1801042e0(*(longlong *)(param_1 + 0xf710) + 0x38);
    uVar7 = FUN_180149120(param_1);
    puVar6 = __hybrid_os_arm64x_dispatch_icall;
    if ((uVar7 & 1) != 0) {
      lVar10 = 0x98;
      if (*(longlong *)(param_1 + 0xff38) == *(longlong *)(param_1 + 0xf718)) {
        lVar10 = 0x70;
      }
      uVar4 = *(undefined4 *)(param_1 + lVar10);
      uVar1 = *(undefined4 *)(param_1 + 0x90);
      uVar2 = *(undefined4 *)(param_1 + 0x94);
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
      iVar9 = *(int *)(lVar10 + 0xb28);
      if (iVar9 != 0) {
        iVar3 = *(int *)(lVar10 + 0x67c);
        uVar8 = *(undefined8 *)(lVar10 + 0xb20);
        *(int *)(lVar10 + 0x67c) = iVar3 + 1;
        if (((iVar3 == 0) && (*(longlong *)(lVar10 + 0xb10) != 0)) &&
           (*(int *)(lVar10 + 0xba8) != 0)) {
          uVar11 = 0;
          do {
            (*(code *)puVar6)();
            (*extraout_x11)();
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(uint *)(lVar10 + 0xba8));
        }
        (*(code *)puVar6)(0x180224000,*(undefined8 *)(lVar10 + 0x688),iVar9,uVar8);
        (*extraout_x11_00)();
        *(undefined4 *)(lVar10 + 0xb28) = 0;
      }
      iVar9 = *(int *)(lVar10 + 0x67c);
      *(int *)(lVar10 + 0x67c) = iVar9 + 1;
      if (((iVar9 == 0) && (*(longlong *)(lVar10 + 0xb10) != 0)) && (*(int *)(lVar10 + 0xba8) != 0))
      {
        uVar8 = 0x180224000;
        uVar7 = 0;
        do {
          (*(code *)puVar6)(*(undefined8 *)(*(longlong *)(lVar10 + 0xba0) + uVar7 * 8),uVar8);
          (*extraout_x11_01)();
          uVar11 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar11;
          uVar8 = extraout_x1;
        } while (uVar11 < *(uint *)(lVar10 + 0xba8));
      }
      uVar8 = (*(code *)puVar6)(0x180225000);
      (*extraout_x11_02)(uVar8,uVar2,1,uVar1,uVar4,0);
      cVar5 = *(char *)(lVar10 + 0x674);
      *(undefined1 *)(lVar10 + 0x674) = 0;
      iVar9 = 8;
      if (cVar5 == '\0') {
        iVar9 = 1;
      }
      iVar9 = iVar9 + *(int *)(lVar10 + 0x678);
      *(int *)(lVar10 + 0x678) = iVar9;
      if (((*(int *)(lVar10 + 0x680) <= iVar9) && (*(longlong *)(lVar10 + 0xb10) != 0)) &&
         (*(int *)(lVar10 + 0x684) == 0)) {
        FUN_180207560(lVar10 + 8,0);
      }
    }
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
    iVar9 = *(int *)(lVar10 + 0x684) + -1;
    *(int *)(lVar10 + 0x684) = iVar9;
    if ((iVar9 == 0) && (*(int *)(lVar10 + 0x680) <= *(int *)(lVar10 + 0x678))) {
      FUN_180207560(lVar10 + 8,0);
    }
    FUN_18014e820(param_1,param_2,param_3,param_4);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return 0;
}


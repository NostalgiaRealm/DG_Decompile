/*
 * FUN_180207560 at 180207560
 * undefined FUN_180207560(void)
 * Address ranges: 180207560-180207983
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180207560(longlong param_1,char param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 local_48;
  
  lVar13 = *(longlong *)(param_1 + 0xb08);
  uVar8 = 0;
  if ((lVar13 != 0) && (*(int *)(param_1 + 0x67c) == 0)) {
    uVar9 = 0;
    *(int *)(param_1 + 0x674) = *(int *)(param_1 + 0x674) + 1;
    puVar6 = __hybrid_os_arm64x_dispatch_icall;
    if (*(int *)(param_1 + 0xba0) != 0) {
      do {
        (*(code *)puVar6)();
        (*extraout_x11)();
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_1 + 0xba0));
    }
    iVar4 = *(int *)(param_1 + 0x674) + -1;
    *(int *)(param_1 + 0x674) = iVar4;
    if ((iVar4 == 0) && (*(int *)(param_1 + 0xb20) == 0)) {
      uVar8 = (*(code *)puVar6)(0x180224000);
      (*extraout_x11_00)(uVar8,*(undefined8 *)(lVar13 + 0x18),*(undefined8 *)(param_1 + 0xb70));
      uVar9 = *(uint *)(param_1 + 0xb4c);
      *(undefined4 *)(param_1 + 0xb4c) = 0;
      uVar10 = 0;
      if (uVar9 != 0) {
        do {
          FUN_18020dc08(*(undefined8 *)(param_1 + 0xb10),
                        *(undefined8 *)(param_1 + uVar10 * 8 + 0x808),1);
          (*(code *)puVar6)();
          (*extraout_x11_01)();
          uVar2 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar2;
        } while (uVar2 < uVar9);
      }
      uVar9 = *(uint *)(param_1 + 0xb50);
      uVar10 = 0;
      *(undefined4 *)(param_1 + 0xb50) = 0;
      if (uVar9 != 0) {
        do {
          FUN_18020d9f8(*(undefined8 *)(param_1 + 0xb10),
                        *(undefined8 *)(uVar10 * 0x10 + param_1 + 0x908),
                        *(undefined8 *)(uVar10 * 0x10 + param_1 + 0x910),1);
          uVar2 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar2;
        } while (uVar2 < uVar9);
      }
    }
    else {
      *(int *)(param_1 + 0xba8) = *(int *)(param_1 + 0xba8) + 1;
      FUN_180206f40(param_1 + -8);
      (*(code *)puVar6)(0x180224000);
      (*extraout_x11_02)();
      local_48 = *(undefined8 *)(param_1 + 0x680);
      uVar11 = *(undefined8 *)(param_1 + 0xb70);
      uVar8 = (*(code *)puVar6)(0x180224000);
      (*extraout_x11_03)(uVar8,1,&local_48);
      uVar8 = (*(code *)puVar6)(0x180224000);
      (*extraout_x11_04)(uVar8,*(undefined8 *)(lVar13 + 0x18),uVar11);
      *(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0xb68) * 8 + 0x748) =
           *(undefined8 *)(param_1 + 0xb70);
      uVar2 = *(uint *)(param_1 + 0xb5c);
      uVar9 = *(int *)(param_1 + 0xb68) + 1;
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x18020775c);
        (*pcVar7)();
      }
      uVar5 = 0;
      if (uVar2 != 0) {
        uVar5 = uVar9 / uVar2;
      }
      *(uint *)(param_1 + 0xb68) = uVar9 - uVar5 * uVar2;
      uVar12 = *(ulonglong *)(param_1 + (ulonglong)*(uint *)(param_1 + 0xb64) * 8 + 0x748);
      (*(code *)puVar6)(0x180224000);
      uVar10 = (*extraout_x11_05)();
      uVar9 = *(uint *)(param_1 + 0xb64);
      if (uVar10 < uVar12) {
        if (*(uint *)(param_1 + 0xb68) == uVar9) {
          uVar2 = *(uint *)(param_1 + 0xb5c);
          if (uVar2 == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x18020781c);
            (*pcVar7)();
          }
          uVar5 = 0;
          if (uVar2 != 0) {
            uVar5 = (uVar9 + 1) / uVar2;
          }
          *(uint *)(param_1 + 0xb64) = (uVar9 + 1) - uVar5 * uVar2;
        }
        FUN_18020c3b0(*(undefined8 *)(param_1 + 0xb08),
                      *(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0xb68) * 8 + 0x748));
        uVar8 = *(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0xb68) * 8 + 0x688);
      }
      else {
        lVar1 = param_1 + (ulonglong)uVar9 * 8;
        uVar8 = *(undefined8 *)(lVar1 + 0x688);
        *(undefined8 *)(lVar1 + 0x688) =
             *(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0xb68) * 8 + 0x688);
        *(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0xb68) * 8 + 0x688) = uVar8;
        *(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0xb64) * 8 + 0x748) =
             *(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0xb68) * 8 + 0x748);
        uVar2 = *(uint *)(param_1 + 0xb5c);
        uVar9 = *(int *)(param_1 + 0xb64) + 1;
        if (uVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x1802077f0);
          (*pcVar7)();
        }
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar9 / uVar2;
        }
        *(uint *)(param_1 + 0xb64) = uVar9 - uVar5 * uVar2;
      }
      (*(code *)puVar6)(0x180224000);
      (*extraout_x11_06)(uVar8);
      uVar11 = (*(code *)puVar6)(0x180224000);
      (*extraout_x11_07)(uVar11,uVar8,0);
      *(undefined4 *)(param_1 + 0xb60) = 0;
      FUN_180222c50(param_1 + 0x18,0,0x660);
      *(undefined4 *)(param_1 + 0x668) = 0xffffffff;
      uVar10 = 0;
      *(undefined4 *)(param_1 + 0x660) = 0x7ff00000;
      *(undefined4 *)(param_1 + 0x664) = 0x7ff00000;
      *(undefined4 *)(param_1 + 0x658) = 0x7ff00000;
      *(undefined4 *)(param_1 + 0x65c) = 0x7ff00000;
      uVar9 = *(uint *)(param_1 + 0xb4c);
      *(undefined4 *)(param_1 + 0xb4c) = 0;
      if (uVar9 != 0) {
        do {
          FUN_18020dc08(*(undefined8 *)(param_1 + 0xb10),
                        *(undefined8 *)(param_1 + uVar10 * 8 + 0x808),1);
          (*(code *)puVar6)();
          (*extraout_x11_08)();
          uVar2 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar2;
        } while (uVar2 < uVar9);
      }
      uVar9 = *(uint *)(param_1 + 0xb50);
      uVar10 = 0;
      *(undefined4 *)(param_1 + 0xb50) = 0;
      if (uVar9 != 0) {
        do {
          FUN_18020d9f8(*(undefined8 *)(param_1 + 0xb10),
                        *(undefined8 *)(uVar10 * 0x10 + param_1 + 0x908),
                        *(undefined8 *)(uVar10 * 0x10 + param_1 + 0x910),1);
          uVar2 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar2;
        } while (uVar2 < uVar9);
      }
    }
    puVar3 = (undefined8 *)(param_1 + 0xb70);
    if (param_2 != '\0') {
      FUN_18020c3b0(lVar13,*puVar3);
    }
    *(undefined8 *)(param_1 + 0xb78) = *puVar3;
    uVar8 = FUN_1801042f0(lVar13 + 0x28);
    *puVar3 = uVar8;
    uVar8 = 1;
    *(undefined8 *)(param_1 + 0xb80) = 0;
  }
  return uVar8;
}


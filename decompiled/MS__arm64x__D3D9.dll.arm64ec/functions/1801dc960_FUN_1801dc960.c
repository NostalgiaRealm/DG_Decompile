/*
 * FUN_1801dc960 at 1801dc960
 * undefined FUN_1801dc960(void)
 * Address ranges: 1801dc960-1801dcc33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801dc960(longlong param_1,uint param_2,int param_3,longlong *param_4,uint param_5)

{
  uint uVar1;
  char *pcVar2;
  longlong *plVar3;
  uint *puVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  code *extraout_x11;
  code *extraout_x11_00;
  undefined4 uVar10;
  
  uVar10 = 0x8876086c;
  if ((param_2 == 0) && (param_3 == 0)) {
    param_3 = *(int *)(param_1 + -0x58);
  }
  puVar4 = (uint *)&DAT_00000e78;
  if (*(longlong *)(param_1 + -0x38) != 0) {
    puVar4 = (uint *)(*(longlong *)(param_1 + -0x38) + -0x59c0);
  }
  if (((*puVar4 >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar5 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar5 = true;
    iVar7 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar7 == 0) {
      FUN_1801085c8();
    }
  }
  puVar6 = __hybrid_os_arm64x_dispatch_icall;
  if ((*(longlong *)(param_1 + -0x18) == 0) ||
     (((*(uint *)(param_1 + -0x28) >> 9 & 1) == 0 && (*(char *)(param_1 + -5) == '\0')))) {
    if ((*(longlong *)(param_1 + -0x60) == 0) && (*(longlong *)(param_1 + -0x68) == 0)) {
      iVar7 = FUN_1801042e0(param_1 + -0x4c);
      if (iVar7 != 1) {
        FUN_1801042d0(param_1 + -0x4c);
        goto LAB_1801dcbf0;
      }
      *(undefined8 *)(param_1 + -0x60) = *(undefined8 *)(param_1 + -0x70);
    }
    uVar1 = param_3 + param_2;
    *param_4 = *(longlong *)(param_1 + -0x70) + (ulonglong)param_2;
    if (param_2 < *(uint *)(param_1 + -0x54)) {
      *(uint *)(param_1 + -0x54) = param_2;
    }
    if (*(uint *)(param_1 + -0x50) < uVar1) {
      *(uint *)(param_1 + -0x50) = uVar1;
      if (*(uint *)(param_1 + -0x58) < uVar1) {
        *(uint *)(param_1 + -0x50) = *(uint *)(param_1 + -0x58);
      }
    }
  }
  else {
    lVar9 = *(longlong *)(param_1 + -0x38);
    pcVar2 = &DAT_00000020;
    if (lVar9 != 0) {
      pcVar2 = (char *)(lVar9 + -0x6818);
    }
    if (*pcVar2 != '\0') {
      if (*(longlong *)(param_1 + -0x60) == 0) {
        plVar3 = (longlong *)&DAT_000066c0;
        if (lVar9 != 0) {
          plVar3 = (longlong *)(lVar9 + -0x178);
        }
        if (*plVar3 == param_1 + -0x78) {
          (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          (*extraout_x11)();
        }
        if ((((param_5 & 0x2000) == 0) || (*(char *)(param_1 + -7) == '\0')) ||
           (*(char *)(param_1 + -6) != '\0')) {
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
        }
        (*(code *)puVar6)(0x180224000,*(undefined8 *)(param_1 + -0x18),uVar8,(param_5 & 0x3000) != 0
                         );
        iVar7 = (*extraout_x11_00)();
        if (iVar7 == 0) {
          if (*(char *)(param_1 + -8) != '\0') {
            puVar4 = (uint *)&DAT_000067e4;
            if (*(longlong *)(param_1 + -0x38) != 0) {
              puVar4 = (uint *)(*(longlong *)(param_1 + -0x38) + -0x54);
            }
            *puVar4 = *puVar4 | 1;
          }
          *(bool *)(param_1 + -6) = (param_5 & 0x2000) != 0;
          goto LAB_1801dcb2c;
        }
      }
      else {
LAB_1801dcb2c:
        uVar10 = 0;
      }
      *param_4 = *(longlong *)(param_1 + -0x60) + (ulonglong)param_2;
      goto LAB_1801dcbf0;
    }
    if ((*(longlong *)(param_1 + -0x60) == 0) && (*(longlong *)(param_1 + -0x68) == 0)) {
      iVar7 = FUN_1801042e0(param_1 + -0x4c);
      if (iVar7 != 1) {
        FUN_1801042d0(param_1 + -0x4c);
        uVar10 = 0x8876086c;
        goto LAB_1801dcbf0;
      }
      *(undefined8 *)(param_1 + -0x60) = *(undefined8 *)(param_1 + -0x70);
    }
    *param_4 = *(longlong *)(param_1 + -0x70) + (ulonglong)param_2;
  }
  uVar10 = 0;
LAB_1801dcbf0:
  if (bVar5) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return uVar10;
}


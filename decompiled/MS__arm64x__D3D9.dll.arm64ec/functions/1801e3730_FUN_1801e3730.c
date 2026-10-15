/*
 * FUN_1801e3730 at 1801e3730
 * undefined FUN_1801e3730(void)
 * Address ranges: 1801e3730-1801e3a1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801e3730(longlong param_1,uint param_2,int param_3,longlong *param_4,uint param_5)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  int iVar9;
  
  iVar9 = -0x7789f794;
  if ((param_2 == 0) && (param_3 == 0)) {
    param_3 = *(int *)(param_1 + -0x70);
  }
  puVar3 = (uint *)&DAT_00000e78;
  if (*(longlong *)(param_1 + -0x50) != 0) {
    puVar3 = (uint *)(*(longlong *)(param_1 + -0x50) + -0x59c0);
  }
  if (((*puVar3 >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar4 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar4 = true;
    iVar6 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar6 == 0) {
      FUN_1801085c8();
    }
  }
  puVar5 = __hybrid_os_arm64x_dispatch_icall;
  if ((*(longlong *)(param_1 + -0x30) == 0) ||
     (((*(uint *)(param_1 + -0x40) >> 9 & 1) == 0 && (*(char *)(param_1 + -5) == '\0')))) {
    if ((*(longlong *)(param_1 + -0x78) == 0) && (*(longlong *)(param_1 + -0x80) == 0)) {
      iVar6 = FUN_1801042e0(param_1 + -100);
      if (iVar6 != 1) {
        FUN_1801042d0(param_1 + -100);
        goto LAB_1801e39e0;
      }
      *(longlong *)(param_1 + -0x78) = *(longlong *)(param_1 + -0x88);
    }
    *param_4 = *(longlong *)(param_1 + -0x88) + (ulonglong)param_2;
    if ((*(int *)(param_1 + -0x34) == 0) && ((param_5 >> 0xd & 1) != 0)) {
      *(undefined4 *)(param_1 + -0x6c) = 0;
      *(undefined4 *)(param_1 + -0x68) = *(undefined4 *)(param_1 + -0x70);
    }
    else {
      uVar1 = param_3 + param_2;
      if (param_2 < *(uint *)(param_1 + -0x6c)) {
        *(uint *)(param_1 + -0x6c) = param_2;
      }
      if (*(uint *)(param_1 + -0x68) < uVar1) {
        *(uint *)(param_1 + -0x68) = uVar1;
        if (*(uint *)(param_1 + -0x70) < uVar1) {
          *(uint *)(param_1 + -0x68) = *(uint *)(param_1 + -0x70);
        }
      }
    }
    iVar9 = 0;
  }
  else {
    if (*(longlong *)(param_1 + -0x78) == 0) {
      uVar8 = 0;
      do {
        lVar2 = uVar8 * 8;
        if (*(longlong *)(param_1 + -0x50) != 0) {
          lVar2 = *(longlong *)(param_1 + -0x50) + uVar8 * 8 + -0x6838;
        }
        if (*(longlong *)(lVar2 + 0x66c8) == param_1 + -0x90) {
          (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          (*extraout_x11)();
          break;
        }
        uVar1 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar1;
      } while (uVar1 < 0x10);
      if ((((param_5 & 0x2000) == 0) || (*(char *)(param_1 + -7) == '\0')) ||
         (*(char *)(param_1 + -6) != '\0')) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      (*(code *)puVar5)(0x180224000,*(undefined8 *)(param_1 + -0x30),uVar7,(param_5 & 0x3000) != 0);
      iVar6 = (*extraout_x11_00)();
      if (iVar6 == 0) {
        if (*(uint *)(param_1 + -0xc) != 0xffffffff) {
          puVar3 = (uint *)&DAT_000067dc;
          if (*(longlong *)(param_1 + -0x50) != 0) {
            puVar3 = (uint *)(*(longlong *)(param_1 + -0x50) + -0x5c);
          }
          *puVar3 = *puVar3 | 1 << (ulonglong)(*(uint *)(param_1 + -0xc) & 0x1f);
        }
        *(bool *)(param_1 + -6) = (param_5 & 0x2000) != 0;
        goto LAB_1801e390c;
      }
    }
    else {
LAB_1801e390c:
      iVar9 = 0;
    }
    *param_4 = *(longlong *)(param_1 + -0x78) + (ulonglong)param_2;
    if (iVar9 < 0) goto LAB_1801e39e0;
  }
  iVar6 = *(int *)(param_1 + -0x10);
  *(int *)(param_1 + -0x10) = iVar6 + 1;
  if (iVar6 == 0) {
    FUN_180222c50(*(undefined8 *)(param_1 + -0x78),0,*(undefined4 *)(param_1 + -0x70));
  }
LAB_1801e39e0:
  if (bVar4) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return iVar9;
}


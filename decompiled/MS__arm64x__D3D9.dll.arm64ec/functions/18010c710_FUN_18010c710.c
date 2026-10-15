/*
 * FUN_18010c710 at 18010c710
 * undefined FUN_18010c710(void)
 * Address ranges: 18010c710-18010cc3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_18010c710(undefined4 param_1,longlong param_2,uint param_3,longlong param_4,uint param_5,
             undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
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
  code *extraout_x11_09;
  code *extraout_x11_10;
  code *extraout_x11_11;
  code *extraout_x11_12;
  code *extraout_x11_13;
  code *extraout_x11_14;
  code *extraout_x11_15;
  code *extraout_x11_16;
  code *extraout_x11_17;
  code *extraout_x11_18;
  code *extraout_x11_19;
  code *extraout_x11_20;
  code *extraout_x11_21;
  code *extraout_x11_22;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int local_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  undefined1 auStack_140 [256];
  
  if ((param_4 != 0) && (param_3 == 0)) {
    return 0x8876086c;
  }
  if (((param_5 >> 1 & 1) != 0) && (*(longlong *)(param_2 + 0x50) == 0)) {
    return 0x8876086c;
  }
  if (((param_5 >> 2 & 1) != 0) && (*(char *)(param_2 + 0x2cc) == '\0')) {
    return 0x8876086c;
  }
  if (*(char *)(param_2 + 0x6819) != '\0') {
    return 0;
  }
  if (*(longlong *)(param_2 + 0x30) == 0) {
    return 0;
  }
  local_150 = *(int *)(param_2 + 0x58);
  iStack_14c = *(int *)(param_2 + 0x5c);
  iStack_144 = *(int *)(param_2 + 100) + iStack_14c;
  local_148 = *(int *)(param_2 + 0x60) + local_150;
  if (*(int *)(param_2 + 0x730) != 0) {
    thunk_FUN_180223c34(&local_150,&local_150,param_8);
  }
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  if (param_4 != 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)();
    if (*(longlong *)(param_2 + 0x38) != 0) {
      (*(code *)puVar3)(0x180224000);
      (*extraout_x11_00)();
    }
    if (*(longlong *)(param_2 + 0x40) != 0) {
      (*(code *)puVar3)(0x180224000);
      (*extraout_x11_01)();
    }
    if (*(longlong *)(param_2 + 0x48) != 0) {
      (*(code *)puVar3)(0x180224000);
      (*extraout_x11_02)();
    }
    if (*(longlong *)(param_2 + 0x50) != 0) {
      (*(code *)puVar3)(0x180224000);
      (*extraout_x11_03)();
    }
    do {
      if (param_3 == 0) {
        return 0;
      }
      uVar1 = 0x10;
      if (param_3 < 0x11) {
        uVar1 = param_3;
      }
      uVar8 = 0;
      uVar6 = uVar1;
      if (uVar1 != 0) {
        do {
          iVar4 = thunk_FUN_180223c34(auStack_140 + uVar8 * 0x10,param_4,&local_150);
          param_4 = param_4 + 0x10;
          uVar7 = (uint)uVar8;
          if (iVar4 != 0) {
            uVar7 = uVar7 + 1;
          }
          uVar8 = (ulonglong)uVar7;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        if (uVar7 != 0) {
          uVar5 = (*(code *)puVar3)(0x180225000);
          (*extraout_x11_04)(param_1,uVar5,uVar7,auStack_140,param_5,param_6,param_7,0);
          if ((*(char *)(param_2 + 0xe21) == '\0') &&
             (*(char *)(*(longlong *)(param_2 + 0x18) + 0x7f2) == '\0')) {
            bVar2 = false;
            if (*(char *)(param_2 + 0x2cd) != '\0') goto LAB_18010c910;
          }
          else {
            bVar2 = true;
LAB_18010c910:
            (*(code *)puVar3)(0x180224000);
            (*extraout_x11_05)();
            uVar5 = (*(code *)puVar3)(0x180224000);
            (*extraout_x11_06)(uVar5,*(undefined4 *)(param_2 + 0x2c4),
                               *(undefined4 *)(param_2 + 0x2c8));
            if (bVar2) {
              uVar5 = (*(code *)puVar3)(0x180224000);
              (*extraout_x11_07)(uVar5,*(undefined4 *)(param_2 + 0x2c4),
                                 *(undefined4 *)(param_2 + 0x2c8));
              if (*(char *)(*(longlong *)(param_2 + 0x18) + 0x7f3) != '\0') {
                thunk_FUN_180223720();
              }
            }
          }
          if (*(char *)(param_2 + 0x2ce) == '\0') {
            (*(code *)puVar3)(0x180224000);
            (*extraout_x11_08)();
            if (*(longlong *)(param_2 + 0x50) != 0) {
              (*(code *)puVar3)(0x180224000);
              (*extraout_x11_09)();
            }
            *(undefined1 *)(param_2 + 0x2ce) = 1;
          }
          if (*(char *)(param_2 + 0x2cf) != '\0') {
            if (*(int *)(param_2 + 0x4e0) != 0) {
              uVar5 = (*(code *)puVar3)(0x180224000);
              (*extraout_x11_10)(uVar5,*(undefined4 *)(param_2 + 0x2c4),
                                 *(undefined4 *)(param_2 + 0x2c8),1);
            }
            *(undefined1 *)(param_2 + 0x2cf) = 0;
          }
        }
      }
      param_3 = param_3 - uVar1;
    } while( true );
  }
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11_11)();
  if (*(longlong *)(param_2 + 0x38) != 0) {
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_12)();
  }
  if (*(longlong *)(param_2 + 0x40) != 0) {
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_13)();
  }
  if (*(longlong *)(param_2 + 0x48) != 0) {
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_14)();
  }
  if (*(longlong *)(param_2 + 0x50) != 0) {
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_15)();
  }
  uVar5 = (*(code *)puVar3)(0x180225000);
  (*extraout_x11_16)(param_1,uVar5,1,&local_150,param_5,param_6,param_7,0);
  if ((*(char *)(param_2 + 0xe21) == '\0') &&
     (*(char *)(*(longlong *)(param_2 + 0x18) + 0x7f2) == '\0')) {
    bVar2 = false;
    if (*(char *)(param_2 + 0x2cd) == '\0') goto LAB_18010cb90;
  }
  else {
    bVar2 = true;
  }
  (*(code *)puVar3)(0x180224000);
  (*extraout_x11_17)();
  uVar5 = (*(code *)puVar3)(0x180224000);
  (*extraout_x11_18)(uVar5,*(undefined4 *)(param_2 + 0x2c4),*(undefined4 *)(param_2 + 0x2c8));
  if (bVar2) {
    uVar5 = (*(code *)puVar3)(0x180224000);
    (*extraout_x11_19)(uVar5,*(undefined4 *)(param_2 + 0x2c4),*(undefined4 *)(param_2 + 0x2c8));
    if (*(char *)(*(longlong *)(param_2 + 0x18) + 0x7f3) != '\0') {
      thunk_FUN_180223720();
    }
  }
LAB_18010cb90:
  if (*(char *)(param_2 + 0x2ce) == '\0') {
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_20)();
    if (*(longlong *)(param_2 + 0x50) != 0) {
      (*(code *)puVar3)(0x180224000);
      (*extraout_x11_21)();
    }
    *(undefined1 *)(param_2 + 0x2ce) = 1;
  }
  if (*(char *)(param_2 + 0x2cf) != '\0') {
    if (*(int *)(param_2 + 0x4e0) != 0) {
      uVar5 = (*(code *)puVar3)(0x180224000);
      (*extraout_x11_22)(uVar5,*(undefined4 *)(param_2 + 0x2c4),*(undefined4 *)(param_2 + 0x2c8),1);
    }
    *(undefined1 *)(param_2 + 0x2cf) = 0;
  }
  return 0;
}


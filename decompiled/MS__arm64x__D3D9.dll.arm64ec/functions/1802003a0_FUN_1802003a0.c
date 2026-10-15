/*
 * FUN_1802003a0 at 1802003a0
 * undefined FUN_1802003a0(void)
 * Address ranges: 1802003a0-18020093f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1802003a0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  undefined *puVar2;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  ulonglong extraout_x1_01;
  ulonglong extraout_x1_02;
  ulonglong extraout_x1_03;
  ulonglong extraout_x1_04;
  ulonglong extraout_x1_05;
  ulonglong extraout_x1_06;
  ulonglong extraout_x1_07;
  ulonglong extraout_x1_08;
  ulonglong extraout_x1_09;
  ulonglong extraout_x1_10;
  ulonglong uVar3;
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
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  
  lVar6 = param_1 + (param_2 & 0xffffffff) * 0x28;
  iVar1 = *(int *)(lVar6 + 0x28) + -1;
  *(int *)(lVar6 + 0x28) = iVar1;
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if (iVar1 == 0) {
    lVar6 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
    uVar3 = param_2;
    if (*(longlong *)(lVar6 + 0x6c0) != 0) {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)();
      *(undefined8 *)(lVar6 + 0x6c0) = 0;
      uVar3 = extraout_x1;
    }
    if (*(longlong *)(lVar6 + 0x6b8) != 0) {
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_00)();
      *(undefined8 *)(lVar6 + 0x6b8) = 0;
      uVar3 = extraout_x1_00;
    }
    if (*(longlong *)(lVar6 + 0x6b0) != 0) {
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_01)();
      *(undefined8 *)(lVar6 + 0x6b0) = 0;
      uVar3 = extraout_x1_01;
    }
    if (*(longlong *)(lVar6 + 0x1f08) != 0) {
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_02)();
      *(undefined8 *)(lVar6 + 0x1f10) = 0;
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_03)();
      *(undefined8 *)(lVar6 + 0x1ef8) = 0;
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_04)();
      *(undefined8 *)(lVar6 + 0x1f18) = 0;
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_05)();
      *(undefined8 *)(lVar6 + 0x1f00) = 0;
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_06)();
      *(undefined8 *)(lVar6 + 0x1f08) = 0;
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_07)();
      *(undefined8 *)(lVar6 + 0x1ef0) = 0;
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_08)();
      *(undefined8 *)(lVar6 + 0x1f58) = 0;
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_09)();
      *(undefined8 *)(lVar6 + 0x1f48) = 0;
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_10)();
      *(undefined8 *)(lVar6 + 0x1f50) = 0;
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_11)();
      *(undefined8 *)(lVar6 + 8000) = 0;
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_12)();
      *(undefined8 *)(lVar6 + 0x1f38) = 0;
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_13)();
      *(undefined8 *)(lVar6 + 0x1f30) = 0;
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_14)();
      *(undefined8 *)(lVar6 + 0x1f28) = 0;
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_15)();
      *(undefined8 *)(lVar6 + 0x1f20) = 0;
      uVar3 = extraout_x1_02;
    }
    uVar4 = 0;
    if (*(int *)(lVar6 + 0xc04) != 0) {
      do {
        (*(code *)puVar2)();
        (*extraout_x11_16)();
        uVar4 = uVar4 + 1;
        uVar3 = extraout_x1_03;
      } while (uVar4 < *(uint *)(lVar6 + 0xc04));
    }
    *(undefined4 *)(lVar6 + 0xc04) = 0;
    uVar4 = 0;
    if (*(int *)(lVar6 + 0xc24) != 0) {
      do {
        (*(code *)puVar2)();
        (*extraout_x11_17)();
        uVar4 = uVar4 + 1;
        uVar3 = extraout_x1_04;
      } while (uVar4 < *(uint *)(lVar6 + 0xc24));
    }
    *(undefined4 *)(lVar6 + 0xc24) = 0;
    uVar4 = 0;
    if (*(int *)(lVar6 + 0xc44) != 0) {
      do {
        (*(code *)puVar2)();
        (*extraout_x11_18)();
        uVar4 = uVar4 + 1;
        uVar3 = extraout_x1_05;
      } while (uVar4 < *(uint *)(lVar6 + 0xc44));
    }
    *(undefined4 *)(lVar6 + 0xc44) = 0;
    uVar5 = 0;
    if (*(int *)(lVar6 + 0xc64) != 0) {
      do {
        lVar7 = *(longlong *)(lVar6 + 0xc68);
        lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0xc58) + uVar5 * 0x38 + 0x30);
        lVar9 = lVar7 + (ulonglong)*(uint *)(lVar6 + 0xc70) * 0x18c0;
        thunk_FUN_1802236f8(lVar7 + 0x620);
        if (lVar8 == *(longlong *)(lVar9 + 0x708)) {
          *(undefined8 *)(lVar9 + 0x708) = 0;
        }
        (*(code *)puVar2)(0x180224000);
        (*extraout_x11_19)(lVar8);
        thunk_FUN_18022370c(lVar7 + 0x620);
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        uVar3 = extraout_x1_06;
      } while (uVar4 < *(uint *)(lVar6 + 0xc64));
    }
    *(undefined4 *)(lVar6 + 0xc64) = 0;
    uVar4 = 0;
    if (*(int *)(lVar6 + 0xc84) != 0) {
      do {
        (*(code *)puVar2)();
        (*extraout_x11_20)();
        uVar4 = uVar4 + 1;
        uVar3 = extraout_x1_07;
      } while (uVar4 < *(uint *)(lVar6 + 0xc84));
    }
    *(undefined4 *)(lVar6 + 0xc84) = 0;
    uVar5 = 0;
    if (*(int *)(lVar6 + 0xca4) != 0) {
      do {
        FUN_1801feb08(*(undefined8 *)(lVar6 + 0xca8),*(undefined4 *)(lVar6 + 0xcb0),
                      *(undefined8 *)(*(longlong *)(lVar6 + 0xc98) + uVar5 * 0x18 + 0x10));
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        uVar3 = extraout_x1_08;
      } while (uVar4 < *(uint *)(lVar6 + 0xca4));
    }
    *(undefined4 *)(lVar6 + 0xca4) = 0;
    uVar5 = 0;
    if (*(int *)(lVar6 + 0xcc4) != 0) {
      do {
        FUN_1801fea58(*(undefined8 *)(lVar6 + 0xcc8),*(undefined4 *)(lVar6 + 0xcd0),
                      *(undefined8 *)(*(longlong *)(lVar6 + 0xcb8) + uVar5 * 0x48 + 0x40));
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        uVar3 = extraout_x1_09;
      } while (uVar4 < *(uint *)(lVar6 + 0xcc4));
    }
    *(undefined4 *)(lVar6 + 0xcc4) = 0;
    uVar5 = 0;
    if (*(int *)(lVar6 + 0xce4) != 0) {
      do {
        lVar7 = 0;
        lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0xcd8) + uVar5 * 0x48 + 0x40);
        do {
          if (*(longlong *)(lVar8 + 0x20 + lVar7 * 0x30) != 0) {
            FUN_1801fea58(*(undefined8 *)(lVar6 + 0xce8),*(undefined4 *)(lVar6 + 0xcf0));
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x14);
        FUN_1802229d8(lVar8,0x3c0);
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        uVar3 = extraout_x1_10;
      } while (uVar4 < *(uint *)(lVar6 + 0xce4));
    }
    *(undefined4 *)(lVar6 + 0xce4) = 0;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar3;
    auVar10 = auVar10 << 0x40;
    if (*(longlong *)(lVar6 + 0xea8) != 0) {
      (*(code *)puVar2)(0x180224000);
      auVar10 = (*extraout_x11_21)();
      *(undefined8 *)(lVar6 + 0xea8) = 0;
    }
    auVar10 = FUN_1801fe898(auVar10._0_8_,auVar10._8_8_,2,lVar6 + 0xe70,lVar6 + 0xe80);
    FUN_1801fe6b0(auVar10._0_8_,auVar10._8_8_,0x2b,lVar6 + 0xd18);
    FUN_1801fe9f8();
    if (*(longlong *)(lVar6 + 0xe98) != 0) {
      FUN_1801febb8(param_1,param_2 & 0xffffffff);
      *(undefined8 *)(lVar6 + 0xe98) = 0;
    }
    FUN_1801fea58(param_1,param_2 & 0xffffffff,*(undefined8 *)(lVar6 + 0xe90));
    *(undefined8 *)(lVar6 + 0xe90) = 0;
  }
  return;
}


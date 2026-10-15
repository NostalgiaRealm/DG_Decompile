/*
 * FUN_180132e88 at 180132e88
 * undefined FUN_180132e88(void)
 * Address ranges: 180132e88-1801335eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180132e88(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
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
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  thunk_FUN_1802236f8(param_4 + 0x620);
  *(longlong *)(param_4 + 0x618) = param_1;
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar3,*(undefined8 *)(param_2 + 0x7718),0);
  uVar3 = (*(code *)puVar1)(0x180224000);
  (*extraout_x11_00)(uVar3,*(undefined8 *)(param_2 + 0x7710),0);
  thunk_FUN_18022370c(*(longlong *)(param_2 + 0x76d0) + 0x620);
  FUN_180104270(*(longlong *)(param_2 + 0x76d0) + 0x618,0,param_1);
  (*(code *)puVar1)(0x180224000);
  (*extraout_x11_01)();
  *(undefined8 *)(param_2 + 0x77b0) = 0;
  (*(code *)puVar1)(0x180224000);
  (*extraout_x11_02)();
  *(undefined8 *)(param_2 + 0x77d8) = 0;
  (*(code *)puVar1)(0x180224000);
  (*extraout_x11_03)();
  *(undefined8 *)(param_2 + 0x77b8) = 0;
  (*(code *)puVar1)(0x180224000);
  (*extraout_x11_04)();
  *(undefined8 *)(param_2 + 0x77c0) = 0;
  (*(code *)puVar1)(0x180224000);
  (*extraout_x11_05)();
  *(undefined8 *)(param_2 + 0x77c8) = 0;
  uVar6 = 0;
  if (*(int *)(param_1 + 0xf75c) != 0) {
    do {
      (*(code *)puVar1)();
      (*extraout_x11_06)();
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0xf75c));
  }
  *(undefined4 *)(param_1 + 0xf75c) = 0;
  uVar7 = 0;
  iVar2 = 0;
  if (*(int *)(param_1 + 0xf7a0) != 0) {
    if (*(int *)(param_1 + 0xf7a0) == 0) {
      lVar4 = 0;
      goto LAB_180133060;
    }
    do {
      iVar2 = (int)uVar7;
      lVar4 = *(longlong *)(param_1 + 0xf798) + uVar7 * 0x30;
LAB_180133060:
      puVar5 = *(undefined8 **)(lVar4 + 0x28);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_FUN_18022b0f0;
        FUN_180141d50(puVar5[3],puVar5[1],*(undefined4 *)(puVar5 + 2));
        FUN_1802229d8(puVar5[0x10]);
        puVar5[0x10] = 0;
        puVar5[0x11] = 0;
        puVar5[0x12] = 0;
        *puVar5 = &PTR_D3DPERF_GetStatus_native_18022b0e0;
        puVar5[4] = &PTR_FUN_18022c4e0;
        FUN_1802229d8(puVar5,0x2f8);
      }
      uVar7 = (ulonglong)(iVar2 + 1U);
    } while (iVar2 + 1U < *(uint *)(param_1 + 0xf7a0));
  }
  FUN_1802229d8(*(undefined8 *)(param_2 + 0x7790));
  *(undefined8 *)(param_2 + 0x7790) = 0;
  *(undefined8 *)(param_1 + 0xf798) = 0;
  *(undefined4 *)(param_1 + 0xf7a0) = 0;
  *(undefined4 *)(param_1 + 0xf7a4) = 0;
  FUN_18013ff30(param_1 + 0xf728);
  lVar4 = 0;
  do {
    FUN_180200e40(*(longlong *)(param_2 + 0x76d8) + 0x628,
                  *(undefined8 *)(param_1 + 0xfb20 + lVar4 * 8));
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x10);
  lVar4 = 0;
  do {
    FUN_180200e40(*(longlong *)(param_2 + 0x76d8) + 0x628,
                  *(undefined8 *)(param_1 + 0xfc88 + lVar4 * 8));
    lVar4 = lVar4 + 1;
  } while (lVar4 != 5);
  lVar4 = *(longlong *)(param_2 + 0x76d0);
  lVar8 = *(longlong *)(param_2 + 0x7720);
  lVar9 = lVar4 + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
  thunk_FUN_1802236f8(lVar4 + 0x620);
  if (lVar8 == *(longlong *)(lVar9 + 0x710)) {
    *(undefined8 *)(lVar9 + 0x710) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x718)) {
    *(undefined8 *)(lVar9 + 0x718) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x720)) {
    *(undefined8 *)(lVar9 + 0x720) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x728)) {
    *(undefined8 *)(lVar9 + 0x728) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x730)) {
    *(undefined8 *)(lVar9 + 0x730) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x738)) {
    *(undefined8 *)(lVar9 + 0x738) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x740)) {
    *(undefined8 *)(lVar9 + 0x740) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x748)) {
    *(undefined8 *)(lVar9 + 0x748) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x750)) {
    *(undefined8 *)(lVar9 + 0x750) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x758)) {
    *(undefined8 *)(lVar9 + 0x758) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x760)) {
    *(undefined8 *)(lVar9 + 0x760) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x768)) {
    *(undefined8 *)(lVar9 + 0x768) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x770)) {
    *(undefined8 *)(lVar9 + 0x770) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x778)) {
    *(undefined8 *)(lVar9 + 0x778) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x780)) {
    *(undefined8 *)(lVar9 + 0x780) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x788)) {
    *(undefined8 *)(lVar9 + 0x788) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x790)) {
    *(undefined8 *)(lVar9 + 0x790) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x798)) {
    *(undefined8 *)(lVar9 + 0x798) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x7a0)) {
    *(undefined8 *)(lVar9 + 0x7a0) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x7a8)) {
    *(undefined8 *)(lVar9 + 0x7a8) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x7b0)) {
    *(undefined8 *)(lVar9 + 0x7b0) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x7b8)) {
    *(undefined8 *)(lVar9 + 0x7b8) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x7c0)) {
    *(undefined8 *)(lVar9 + 0x7c0) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x7c8)) {
    *(undefined8 *)(lVar9 + 0x7c8) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 2000)) {
    *(undefined8 *)(lVar9 + 2000) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x7d8)) {
    *(undefined8 *)(lVar9 + 0x7d8) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x7e0)) {
    *(undefined8 *)(lVar9 + 0x7e0) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x7e8)) {
    *(undefined8 *)(lVar9 + 0x7e8) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x7f0)) {
    *(undefined8 *)(lVar9 + 0x7f0) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x7f8)) {
    *(undefined8 *)(lVar9 + 0x7f8) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x800)) {
    *(undefined8 *)(lVar9 + 0x800) = 0;
  }
  if (lVar8 == *(longlong *)(lVar9 + 0x808)) {
    *(undefined8 *)(lVar9 + 0x808) = 0;
  }
  (*(code *)puVar1)(0x180224000);
  (*extraout_x11_07)(lVar8);
  thunk_FUN_18022370c(lVar4 + 0x620);
  *(undefined8 *)(param_2 + 0x7720) = 0;
  (*(code *)puVar1)(0x180224000);
  (*extraout_x11_08)();
  *(undefined8 *)(param_2 + 0x7700) = 0;
  (*(code *)puVar1)(0x180224000);
  (*extraout_x11_09)();
  *(undefined8 *)(param_2 + 0x76f8) = 0;
  (*(code *)puVar1)(0x180224000);
  (*extraout_x11_10)();
  lVar8 = *(longlong *)(param_2 + 0x76d0);
  *(undefined8 *)(param_2 + 0x7708) = 0;
  lVar9 = *(longlong *)(param_2 + 0x7710);
  uVar6 = *(uint *)(param_1 + 0x18);
  thunk_FUN_1802236f8(lVar8 + 0x620);
  lVar4 = lVar8 + (ulonglong)uVar6 * 0x18c0;
  if (lVar9 == *(longlong *)(lVar4 + 0xb70)) {
    *(undefined8 *)(lVar4 + 0xb70) = 0;
  }
  (*(code *)puVar1)(0x180224000);
  (*extraout_x11_11)(lVar9);
  thunk_FUN_18022370c(lVar8 + 0x620);
  lVar8 = *(longlong *)(param_2 + 0x76d0);
  *(undefined8 *)(param_2 + 0x7710) = 0;
  lVar9 = *(longlong *)(param_2 + 0x7718);
  uVar6 = *(uint *)(param_1 + 0x18);
  thunk_FUN_1802236f8(lVar8 + 0x620);
  lVar4 = lVar8 + (ulonglong)uVar6 * 0x18c0;
  if (lVar9 == *(longlong *)(lVar4 + 0xa70)) {
    *(undefined8 *)(lVar4 + 0xa70) = 0;
  }
  if (lVar9 == *(longlong *)(lVar4 + 0xa78)) {
    *(undefined8 *)(lVar4 + 0xa78) = 0;
  }
  if (lVar9 == *(longlong *)(lVar4 + 0xa80)) {
    *(undefined8 *)(lVar4 + 0xa80) = 0;
  }
  if (lVar9 == *(longlong *)(lVar4 + 0xa88)) {
    *(undefined8 *)(lVar4 + 0xa88) = 0;
  }
  if (lVar9 == *(longlong *)(lVar4 + 0xa90)) {
    *(undefined8 *)(lVar4 + 0xa90) = 0;
  }
  if (lVar9 == *(longlong *)(lVar4 + 0xa98)) {
    *(undefined8 *)(lVar4 + 0xa98) = 0;
  }
  if (lVar9 == *(longlong *)(lVar4 + 0xaa0)) {
    *(undefined8 *)(lVar4 + 0xaa0) = 0;
  }
  if (lVar9 == *(longlong *)(lVar4 + 0xaa8)) {
    *(undefined8 *)(lVar4 + 0xaa8) = 0;
  }
  if (lVar9 == *(longlong *)(lVar4 + 0xab0)) {
    *(undefined8 *)(lVar4 + 0xab0) = 0;
  }
  if (lVar9 == *(longlong *)(lVar4 + 0xab8)) {
    *(undefined8 *)(lVar4 + 0xab8) = 0;
  }
  if (lVar9 == *(longlong *)(lVar4 + 0xac0)) {
    *(undefined8 *)(lVar4 + 0xac0) = 0;
  }
  if (lVar9 == *(longlong *)(lVar4 + 0xac8)) {
    *(undefined8 *)(lVar4 + 0xac8) = 0;
  }
  if (lVar9 == *(longlong *)(lVar4 + 0xad0)) {
    *(undefined8 *)(lVar4 + 0xad0) = 0;
  }
  if (lVar9 == *(longlong *)(lVar4 + 0xad8)) {
    *(undefined8 *)(lVar4 + 0xad8) = 0;
  }
  if (lVar9 == *(longlong *)(lVar4 + 0xae0)) {
    *(undefined8 *)(lVar4 + 0xae0) = 0;
  }
  if (lVar9 == *(longlong *)(lVar4 + 0xae8)) {
    *(undefined8 *)(lVar4 + 0xae8) = 0;
  }
  (*(code *)puVar1)(0x180224000);
  (*extraout_x11_12)(lVar9);
  thunk_FUN_18022370c(lVar8 + 0x620);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_2 + 0x7718) = 0;
  FUN_1802229d8(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1802229d8(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  lVar4 = *(longlong *)(param_2 + 0x76d0);
  if ((lVar4 != 0) && (iVar2 = FUN_1801042d0(lVar4 + 8), iVar2 == 0)) {
    if (*(short *)(lVar4 + 0xc) != 0) {
      uVar3 = thunk_FUN_1802239b4(0);
      thunk_FUN_180224008(*(undefined2 *)(lVar4 + 0xc),uVar3);
      if (*(longlong *)(lVar4 + 0x10) != 0) {
        thunk_FUN_1802236bc();
        *(undefined8 *)(lVar4 + 0x10) = 0;
      }
    }
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_13)(lVar4);
  }
  *(undefined8 *)(param_2 + 0x76d0) = 0;
  return;
}


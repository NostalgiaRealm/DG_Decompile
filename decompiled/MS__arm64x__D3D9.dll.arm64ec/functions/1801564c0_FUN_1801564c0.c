/*
 * FUN_1801564c0 at 1801564c0
 * undefined FUN_1801564c0(void)
 * Address ranges: 1801564c0-18015671b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801564c0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
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
  
  puVar5 = __hybrid_os_arm64x_dispatch_icall;
  lVar1 = 0;
  if (*param_2 != 0) {
    lVar1 = *param_2 + -0x100;
  }
  lVar2 = 0;
  if (param_2[1] != 0) {
    lVar2 = param_2[1] + -0x100;
  }
  lVar3 = 0;
  if (param_2[2] != 0) {
    lVar3 = param_2[2] + -0x100;
  }
  lVar4 = 0;
  if (param_2[3] != 0) {
    lVar4 = param_2[3] + -0x100;
  }
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    param_3 = param_3 + -0x100;
    if (param_3 != 0) {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      bVar6 = (*extraout_x11)(param_3);
      goto LAB_180156554;
    }
  }
  bVar6 = 1;
LAB_180156554:
  if (lVar1 == 0) {
    bVar7 = 1;
  }
  else {
    (*(code *)puVar5)(0x180224000);
    bVar7 = (*extraout_x11_00)(lVar1);
  }
  if (lVar2 == 0) {
    bVar8 = 1;
  }
  else {
    (*(code *)puVar5)(0x180224000);
    bVar8 = (*extraout_x11_01)(lVar2);
  }
  if (lVar3 == 0) {
    bVar9 = 1;
  }
  else {
    (*(code *)puVar5)(0x180224000);
    bVar9 = (*extraout_x11_02)(lVar3);
  }
  if (lVar4 == 0) {
    bVar10 = 1;
  }
  else {
    (*(code *)puVar5)(0x180224000);
    bVar10 = (*extraout_x11_03)(lVar4);
  }
  if ((bVar7 & bVar6 & bVar8 & bVar9 & bVar10) == 0) {
    FUN_180221ec0(*(longlong *)(param_1 + 0xf6e0) + 0x12c0);
    if (lVar1 != 0) {
      (*(code *)puVar5)(0x180224000);
      cVar11 = (*extraout_x11_04)(lVar1);
      if (cVar11 == '\0') {
        return 0;
      }
    }
    if (lVar2 != 0) {
      (*(code *)puVar5)(0x180224000);
      cVar11 = (*extraout_x11_05)(lVar2);
      if (cVar11 == '\0') {
        return 0;
      }
    }
    if (lVar3 != 0) {
      (*(code *)puVar5)(0x180224000);
      cVar11 = (*extraout_x11_06)(lVar3);
      if (cVar11 == '\0') {
        return 0;
      }
    }
    if (lVar4 != 0) {
      (*(code *)puVar5)(0x180224000);
      cVar11 = (*extraout_x11_07)(lVar4);
      if (cVar11 == '\0') {
        return 0;
      }
    }
    if (param_3 != 0) {
      (*(code *)puVar5)(0x180224000);
      cVar11 = (*extraout_x11_08)(param_3);
      if (cVar11 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}


/*
 * FUN_18013a2c0 at 18013a2c0
 * undefined FUN_18013a2c0(void)
 * Address ranges: 18013a2c0-18013a413
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18013a2c0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  char cVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  
  puVar6 = __hybrid_os_arm64x_dispatch_icall;
  lVar1 = 0;
  if (*param_2 != 0) {
    lVar1 = *param_2 + -0xe0;
  }
  lVar2 = 0;
  if (param_2[1] != 0) {
    lVar2 = param_2[1] + -0xe0;
  }
  lVar3 = 0;
  if (param_2[2] != 0) {
    lVar3 = param_2[2] + -0xe0;
  }
  lVar4 = 0;
  if (param_2[3] != 0) {
    lVar4 = param_2[3] + -0xe0;
  }
  lVar5 = 0;
  if (param_3 != 0) {
    lVar5 = param_3 + -0xe0;
  }
  if (lVar1 != 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    cVar7 = (*extraout_x11)();
    if (cVar7 == '\0') {
      return 0;
    }
  }
  if (lVar2 != 0) {
    (*(code *)puVar6)(0x180224000);
    cVar7 = (*extraout_x11_00)(lVar2);
    if (cVar7 == '\0') {
      return 0;
    }
  }
  if (lVar3 != 0) {
    (*(code *)puVar6)(0x180224000);
    cVar7 = (*extraout_x11_01)(lVar3);
    if (cVar7 == '\0') {
      return 0;
    }
  }
  if (lVar4 != 0) {
    (*(code *)puVar6)(0x180224000);
    cVar7 = (*extraout_x11_02)(lVar4);
    if (cVar7 == '\0') {
      return 0;
    }
  }
  if (lVar5 != 0) {
    (*(code *)puVar6)(0x180224000);
    cVar7 = (*extraout_x11_03)(lVar5);
    if (cVar7 == '\0') {
      return 0;
    }
  }
  return 1;
}


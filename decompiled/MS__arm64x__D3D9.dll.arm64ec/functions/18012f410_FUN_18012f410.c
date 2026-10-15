/*
 * FUN_18012f410 at 18012f410
 * undefined FUN_18012f410(void)
 * Address ranges: 18012f410-18012f787
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18012f410(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                  uint param_5)

{
  uint uVar1;
  undefined *puVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
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
  undefined4 uVar12;
  uint uVar13;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  uint uStack_54;
  undefined4 local_50;
  undefined1 local_4c;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  lVar8 = (*extraout_x11)();
  lVar9 = DAT_18024d928;
  if (lVar8 != 0) {
    thunk_FUN_1802236f8(DAT_18024d928 + 0x388);
    if (*(char *)(lVar9 + 0x7e9) != '\0') {
      thunk_FUN_180223f90(lVar8,0x401,0x44454745,param_2);
    }
    thunk_FUN_18022370c(lVar9 + 0x388);
  }
  (*(code *)puVar2)(0x180224000);
  lVar9 = (*extraout_x11_00)(param_1);
  if (lVar9 == 0) goto LAB_18012f704;
  (*(code *)puVar2)(0x180224000);
  (*extraout_x11_01)(param_1);
  lVar8 = DAT_18024d928;
  if (param_5 == 0) {
    param_5 = (uint)(*(char *)(DAT_18024d928 + 0x886) != '\0');
  }
  uVar13 = *(uint *)(DAT_18024d928 + 0x9d3);
  iVar7 = *(int *)(DAT_18024d928 + 0x9cf);
  uVar12 = 0;
  if ((iVar7 == 3) || (iVar7 == 2 && *(int *)(param_3 + 0x40) == 0x10)) {
LAB_18012f564:
    if (*(int *)(lVar8 + 0x9cb) == 1) {
      uVar12 = 2;
    }
    else {
      uVar12 = 0;
      if (*(int *)(lVar8 + 0x9cb) == 2) {
        uVar12 = 4;
      }
    }
    if (uVar13 == 0) {
      uVar6 = *(uint *)(param_3 + 0x24);
      uVar10 = *(undefined8 *)(param_3 + 8);
      uVar1 = *(uint *)(param_3 + 0x28);
      (*(code *)puVar2)(0x180224000);
      uVar5 = (*extraout_x11_03)(uVar10);
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x18012f5c8);
        (*pcVar3)();
      }
      uVar13 = 0;
      if (uVar6 != 0) {
        uVar13 = uVar5 / uVar6;
      }
      (*(code *)puVar2)(0x180224000);
      uVar6 = (*extraout_x11_04)(uVar10);
      if (uVar1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x18012f5f8);
        (*pcVar3)();
      }
      uVar5 = 0;
      if (uVar1 != 0) {
        uVar5 = uVar6 / uVar1;
      }
      if (uVar13 == 0) {
        uVar13 = 1;
      }
      if (uVar5 == 0) {
        uVar5 = 1;
      }
      if (uVar5 <= uVar13) {
        uVar13 = uVar5;
      }
    }
  }
  else if (iVar7 == 1 && *(int *)(param_3 + 0x40) == 0x10) {
    uVar10 = (*(code *)puVar2)(0x180224000);
    cVar4 = (*extraout_x11_02)(uVar10,*(undefined4 *)(param_3 + 0x2c),
                               *(undefined4 *)(param_3 + 0x30));
    if (cVar4 != '\0') goto LAB_18012f564;
  }
  uVar10 = (*(code *)puVar2)(0x180224000);
  (*extraout_x11_05)(uVar10,*(undefined4 *)(param_3 + 0x2c),*(undefined4 *)(param_3 + 0x30),0);
  thunk_FUN_180223bf8(&local_80);
  if ((param_4 != (undefined8 *)0x0) && (iVar7 = thunk_FUN_180223d24(param_4), iVar7 == 0)) {
    if ((*(uint *)(lVar8 + 0x8c2) >> 2 & 1) == 0) {
      (*(code *)puVar2)(0x180224000);
      cVar4 = (*extraout_x11_06)(param_2);
      if (cVar4 == '\0') goto LAB_18012f694;
    }
    uStack_78 = param_4[1];
    local_80 = *param_4;
  }
LAB_18012f694:
  FUN_180130a00(param_3);
  uVar11 = FUN_180130a00(param_3);
  if ((uVar11 & 1) == 0) {
    local_50 = 0;
  }
  else {
    local_50 = *(undefined4 *)(lVar8 + 0x89e);
  }
  local_4c = *(undefined1 *)(lVar8 + 0x883);
  local_70 = *(undefined8 *)(param_3 + 8);
  uStack_60 = uStack_78;
  local_68 = local_80;
  local_58 = uVar12;
  uStack_54 = uVar13;
  uVar10 = (*(code *)puVar2)(0x180225000);
  (*extraout_x11_07)(uVar10,lVar9,param_2,param_5,&local_70);
LAB_18012f704:
  (*(code *)puVar2)(0x180224000);
  (*extraout_x11_08)(param_1);
  (*(code *)puVar2)(0x180224000);
  iVar7 = (*extraout_x11_09)();
  if (iVar7 != 1) {
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_10)(param_2);
  }
  return;
}


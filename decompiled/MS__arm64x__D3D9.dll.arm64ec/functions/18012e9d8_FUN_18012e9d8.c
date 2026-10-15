/*
 * FUN_18012e9d8 at 18012e9d8
 * undefined FUN_18012e9d8(void)
 * Address ranges: 18012e9d8-18012ec5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18012e9d8(undefined8 param_1,ulonglong param_2)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
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
  longlong lVar10;
  undefined1 auVar11 [16];
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  lVar6 = (*extraout_x11)();
  (*(code *)puVar1)(0x180224000);
  uVar7 = (*extraout_x11_00)(param_1);
  lVar9 = DAT_18024d928;
  if ((lVar6 != 0) && (lVar10 = (&DAT_18024e840)[(uVar7 & 0xffffffff) * 0x4b], lVar10 != 0)) {
    if ((param_2 & 1) != 0) {
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_01)(lVar10,lVar6,*(undefined4 *)(lVar9 + 0x808));
    }
    (*(code *)puVar1)(0x180225000);
    lVar6 = (*extraout_x11_02)(lVar10,lVar6,0,0,4,2,2,0,0,0);
    if (lVar6 != 0) {
      (*(code *)puVar1)(0x180224000);
      cVar2 = (*extraout_x11_03)();
      if (cVar2 == '\0') {
        (*(code *)puVar1)(0x180224000);
        uVar8 = (*extraout_x11_04)(param_1);
        auVar11 = FUN_180220598(DAT_18024d928,uVar8);
        lVar10 = auVar11._0_8_;
        if (lVar10 != 0) {
          uVar8 = FUN_180220550(lVar10,auVar11._8_8_,FUN_180220748);
          *(undefined8 *)(lVar10 + 0x30) = uVar8;
        }
      }
      (*(code *)puVar1)(0x180224000);
      cVar3 = (*extraout_x11_05)(lVar6);
      if (cVar3 != '\0') {
        (*(code *)puVar1)(0x180224000);
        (*extraout_x11_06)(lVar6);
        (*(code *)puVar1)(0x180224000);
        uVar4 = (*extraout_x11_07)(lVar6);
        *(bool *)(lVar9 + 0x820) = (uVar4 & 0xff) == 0;
        (*(code *)puVar1)(0x180224000);
        uVar5 = (*extraout_x11_08)(param_1);
        FUN_18012eda8(param_1,uVar5,uVar4);
        if (*(longlong *)(DAT_18024d928 + 0x3b0) != 0) {
          thunk_FUN_180223d88(*(longlong *)(DAT_18024d928 + 0x3b0),0x408,0,0);
        }
      }
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_09)(lVar6);
      if (cVar2 == '\0') {
        (*(code *)puVar1)(0x180224000);
        uVar8 = (*extraout_x11_10)(param_1);
        auVar11 = FUN_180220598(DAT_18024d928,uVar8);
        lVar9 = auVar11._0_8_;
        if (lVar9 != 0) {
          FUN_180220550(lVar9,auVar11._8_8_,*(undefined8 *)(lVar9 + 0x30));
          *(undefined8 *)(lVar9 + 0x30) = 0;
        }
      }
    }
  }
  return;
}


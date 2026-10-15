/*
 * FUN_1801d4a88 at 1801d4a88
 * undefined FUN_1801d4a88(void)
 * Address ranges: 1801d4a88-1801d4cd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801d4a88(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined8 extraout_x8;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  longlong lVar6;
  longlong lVar7;
  
  puVar4 = __hybrid_os_arm64x_dispatch_icall;
  plVar1 = (longlong *)&DAT_00000068;
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_2 + 0x60);
  }
  lVar7 = *plVar1;
  plVar1 = (longlong *)&DAT_00000178;
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_2 + 0x170);
  }
  if ((lVar7 != 0) && ((*(uint *)(lVar7 + 0x50) & 1) != 0)) {
    lVar6 = *plVar1;
    if (((*(int *)(lVar7 + 0x54) == 0) ||
        ((*(int *)(lVar7 + 0x54) == 2 && (*(int *)(lVar6 + 0xe68) == 3)))) &&
       (*(longlong *)(lVar7 + 0x28) == lVar6)) {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)(lVar7);
      if (*(longlong *)(lVar7 + 0x30) != 0) {
        (*(code *)puVar4)(0x180224000);
        (*extraout_x11_00)();
      }
      if (*(longlong *)(lVar6 + 0x30) != 0) {
        lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + 0x30);
        (*(code *)puVar4)();
        (*extraout_x11_01)(extraout_x8);
        if (lVar5 != 0) {
          (*(code *)puVar4)(0x180224000);
          (*extraout_x11_02)();
        }
      }
      lVar5 = *(longlong *)(lVar7 + 8);
      *(undefined8 *)(lVar6 + 0x58) = 0;
      *(undefined4 *)(lVar6 + 0x60) = *(undefined4 *)(lVar5 + 0x8c);
      uVar3 = *(undefined4 *)(lVar5 + 0x90);
      *(undefined4 *)(lVar6 + 0x6c) = 0x3f800000;
      *(undefined1 *)(lVar6 + 0xc50b) = 1;
      *(undefined4 *)(lVar6 + 100) = uVar3;
      *(undefined4 *)(lVar6 + 0x68) = 0;
      uVar3 = *(undefined4 *)(*(longlong *)(lVar7 + 8) + 0x8c);
      uVar2 = *(undefined4 *)(*(longlong *)(lVar7 + 8) + 0x90);
      *(undefined8 *)(lVar6 + 0x6f68) = 0;
      *(undefined4 *)(lVar6 + 0x6f70) = uVar3;
      *(undefined4 *)(lVar6 + 0x6f74) = uVar2;
      *(undefined1 *)(lVar6 + 0xc50c) = 1;
      *(longlong *)(lVar6 + 0x30) = lVar7;
      *(undefined1 *)(lVar6 + 0xc509) = 1;
    }
  }
  lVar7 = *plVar1;
  plVar1 = (longlong *)&DAT_00000080;
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_2 + 0x78);
  }
  lVar6 = *plVar1;
  if (lVar6 != 0) {
    if ((((*(uint *)(lVar6 + 0x50) >> 1 & 1) == 0) || (*(int *)(lVar6 + 0x54) != 0)) ||
       (*(longlong *)(lVar6 + 0x28) != lVar7)) goto LAB_1801d4cb4;
    (*(code *)puVar4)(0x180224000);
    (*extraout_x11_03)(lVar6);
    if (*(longlong *)(lVar6 + 0x30) != 0) {
      (*(code *)puVar4)(0x180224000);
      (*extraout_x11_04)();
    }
  }
  if (*(longlong *)(lVar7 + 0x50) != 0) {
    lVar5 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + 0x30);
    (*(code *)puVar4)(0x180224000);
    (*extraout_x11_05)();
    if (lVar5 != 0) {
      (*(code *)puVar4)(0x180224000);
      (*extraout_x11_06)(lVar5);
    }
  }
  *(longlong *)(lVar7 + 0x50) = lVar6;
  *(undefined1 *)(lVar7 + 0xc509) = 1;
LAB_1801d4cb4:
  *(undefined2 *)(param_1 + 0xc50b) = 0x101;
  return;
}


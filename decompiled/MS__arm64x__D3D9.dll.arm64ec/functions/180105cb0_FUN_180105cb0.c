/*
 * FUN_180105cb0 at 180105cb0
 * undefined FUN_180105cb0(void)
 * Address ranges: 180105cb0-180105eeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180105cb0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  uint uVar8;
  undefined1 auVar9 [16];
  
  uVar4 = DAT_18024d928;
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  uVar5 = (*extraout_x11)(uVar4,&DAT_1802290e0);
  if (uVar5 != 0) {
    (*(code *)puVar3)(0x180224000);
    iVar6 = (*extraout_x11_00)(param_2);
    if (iVar6 == 0) {
      puVar1 = (uint *)&DAT_00000070;
      if (param_2 != 0) {
        puVar1 = (uint *)(param_2 + -0x20);
      }
      if (((*puVar1 & 0x203) == 0) && (uVar8 = 0, uVar5 != 0)) {
        do {
          (*(code *)puVar3)(0x180224000);
          lVar7 = (*extraout_x11_05)(uVar4,&DAT_1802290e0,uVar8);
          if (lVar7 != 0) {
            lVar2 = 0;
            if (*(longlong *)(param_1 + 0xe28) != 0) {
              lVar2 = *(longlong *)(param_1 + 0xe28) + 0x88;
            }
            auVar9 = (*(code *)puVar3)(0x180224000,lVar7,lVar2);
            (*extraout_x11_06)(auVar9._0_8_,auVar9._8_8_,param_2);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar5);
      }
    }
    else if (iVar6 == 1) {
      puVar1 = (uint *)&DAT_00000070;
      if (param_2 != 0) {
        puVar1 = (uint *)(param_2 + -0x20);
      }
      if (((*puVar1 & 0x203) == 0) && (uVar8 = 0, uVar5 != 0)) {
        do {
          (*(code *)puVar3)(0x180224000);
          lVar7 = (*extraout_x11_03)(uVar4,&DAT_1802290e0,uVar8);
          if (lVar7 != 0) {
            lVar2 = 0;
            if (*(longlong *)(param_1 + 0xe28) != 0) {
              lVar2 = *(longlong *)(param_1 + 0xe28) + 0x88;
            }
            auVar9 = (*(code *)puVar3)(0x180224000,lVar7,lVar2);
            (*extraout_x11_04)(auVar9._0_8_,auVar9._8_8_,param_2);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar5);
      }
    }
    else if (iVar6 == 2) {
      puVar1 = (uint *)&DAT_000000f4;
      if (param_2 != 0) {
        puVar1 = (uint *)(param_2 + -0x1c);
      }
      if (((*puVar1 >> 9 & 1) == 0) && (uVar8 = 0, uVar5 != 0)) {
        do {
          (*(code *)puVar3)(0x180224000);
          lVar7 = (*extraout_x11_01)(uVar4,&DAT_1802290e0,uVar8);
          if (lVar7 != 0) {
            lVar2 = 0;
            if (*(longlong *)(param_1 + 0xe28) != 0) {
              lVar2 = *(longlong *)(param_1 + 0xe28) + 0x88;
            }
            auVar9 = (*(code *)puVar3)(0x180224000,lVar7,lVar2);
            (*extraout_x11_02)(auVar9._0_8_,auVar9._8_8_,param_2);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar5);
      }
    }
  }
  return;
}


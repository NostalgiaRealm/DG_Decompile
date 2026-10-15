/*
 * FUN_180105a48 at 180105a48
 * undefined FUN_180105a48(void)
 * Address ranges: 180105a48-180105caf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_180105a48(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  uint uVar9;
  byte bVar10;
  undefined1 auVar11 [16];
  
  uVar4 = DAT_18024d928;
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  bVar10 = 1;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  uVar6 = (*extraout_x11)(uVar4,&DAT_1802290e0);
  if (uVar6 != 0) {
    (*(code *)puVar3)(0x180224000);
    iVar7 = (*extraout_x11_00)(param_2);
    if (iVar7 == 0) {
      puVar1 = (uint *)&DAT_00000070;
      if (param_2 != 0) {
        puVar1 = (uint *)(param_2 + -0x20);
      }
      if (((*puVar1 & 0x203) == 0) && (uVar9 = 0, uVar6 != 0)) {
        do {
          (*(code *)puVar3)(0x180224000);
          lVar8 = (*extraout_x11_05)(uVar4,&DAT_1802290e0,uVar9);
          if (lVar8 != 0) {
            lVar2 = 0;
            if (*(longlong *)(param_1 + 0xe28) != 0) {
              lVar2 = *(longlong *)(param_1 + 0xe28) + 0x88;
            }
            auVar11 = (*(code *)puVar3)(0x180224000,lVar8,lVar2);
            bVar5 = (*extraout_x11_06)(auVar11._0_8_,auVar11._8_8_,param_2);
            bVar10 = bVar5 & bVar10;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar6);
      }
    }
    else if (iVar7 == 1) {
      puVar1 = (uint *)&DAT_00000070;
      if (param_2 != 0) {
        puVar1 = (uint *)(param_2 + -0x20);
      }
      if (((*puVar1 & 0x203) == 0) && (uVar9 = 0, uVar6 != 0)) {
        do {
          (*(code *)puVar3)(0x180224000);
          lVar8 = (*extraout_x11_03)(uVar4,&DAT_1802290e0,uVar9);
          if (lVar8 != 0) {
            lVar2 = 0;
            if (*(longlong *)(param_1 + 0xe28) != 0) {
              lVar2 = *(longlong *)(param_1 + 0xe28) + 0x88;
            }
            auVar11 = (*(code *)puVar3)(0x180224000,lVar8,lVar2);
            bVar5 = (*extraout_x11_04)(auVar11._0_8_,auVar11._8_8_,param_2);
            bVar10 = bVar5 & bVar10;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar6);
      }
    }
    else if (iVar7 == 2) {
      puVar1 = (uint *)&DAT_000000f4;
      if (param_2 != 0) {
        puVar1 = (uint *)(param_2 + -0x1c);
      }
      if (((*puVar1 >> 9 & 1) == 0) && (uVar9 = 0, uVar6 != 0)) {
        do {
          (*(code *)puVar3)(0x180224000);
          lVar8 = (*extraout_x11_01)(uVar4,&DAT_1802290e0,uVar9);
          if (lVar8 != 0) {
            lVar2 = 0;
            if (*(longlong *)(param_1 + 0xe28) != 0) {
              lVar2 = *(longlong *)(param_1 + 0xe28) + 0x88;
            }
            auVar11 = (*(code *)puVar3)(0x180224000,lVar8,lVar2);
            bVar5 = (*extraout_x11_02)(auVar11._0_8_,auVar11._8_8_,param_2);
            bVar10 = bVar5 & bVar10;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar6);
      }
    }
  }
  return bVar10;
}


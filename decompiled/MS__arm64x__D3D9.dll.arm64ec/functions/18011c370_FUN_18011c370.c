/*
 * FUN_18011c370 at 18011c370
 * undefined FUN_18011c370(void)
 * Address ranges: 18011c370-18011c533
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18011c370(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *pcVar5;
  undefined1 auVar6 [16];
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  iVar3 = (int)param_2;
  iVar4 = (int)param_3;
  if (*(int *)(param_1 + (longlong)iVar3 * 4 + 0x478) == iVar4) {
    return;
  }
  if (iVar3 == 0x13) {
    if (iVar4 == 0xc) {
      uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)();
      (*extraout_x11_01)(uVar2,0x13,5);
      uVar2 = (*(code *)puVar1)(0x180224000);
      pcVar5 = extraout_x11_02;
    }
    else if (iVar4 == 0xd) {
      uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)();
      (*extraout_x11_03)(uVar2,0x13,6);
      uVar2 = (*(code *)puVar1)(0x180224000);
      pcVar5 = extraout_x11_04;
    }
    else {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11_05)();
      if (1 < *(int *)(param_1 + 0x4c4) - 0xcU) {
        return;
      }
      if (*(int *)(param_1 + 0x4c8) - 0xcU < 2) {
        return;
      }
      uVar2 = (*(code *)puVar1)(0x180224000);
      pcVar5 = extraout_x11_06;
    }
    auVar6._8_8_ = 0x14;
    auVar6._0_8_ = uVar2;
  }
  else {
    if (iVar3 == 0x14) {
      if (iVar4 - 0xcU < 2) {
        return;
      }
      if (*(int *)(param_1 + 0x4c4) - 0xcU < 2) {
        return;
      }
    }
    else {
      if (iVar3 == 0x1a) {
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x9cf);
        if (iVar3 == 0) {
          param_3 = 0;
        }
        else if ((iVar3 != 1) || (*(int *)(*(longlong *)(param_1 + 0x18) + 0x9cb) == 0)) {
          param_3 = 1;
        }
        (*(code *)__hybrid_os_arm64x_dispatch_icall)
                  (0x180224000,*(undefined8 *)(param_1 + 0x28),param_2,param_3);
        (*extraout_x11_00)();
        *(undefined1 *)(param_1 + 0x2cf) = 1;
        return;
      }
      if (iVar3 == 0x88) {
        return;
      }
    }
    auVar6 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    pcVar5 = extraout_x11;
  }
  (*pcVar5)(auVar6._0_8_,auVar6._8_8_);
  return;
}


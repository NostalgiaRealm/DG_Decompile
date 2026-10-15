/*
 * FUN_180195670 at 180195670
 * undefined FUN_180195670(void)
 * Address ranges: 180195670-1801959ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180195670(longlong param_1)

{
  undefined *puVar1;
  longlong *plVar2;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if (*(longlong *)(param_1 + 0x1cf10) != 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x1d0a4) != 0) {
      do {
        (*(code *)puVar1)();
        (*extraout_x11)();
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0x1d0a4));
    }
    *(undefined4 *)(param_1 + 0x1d0a4) = 0;
    uVar7 = 0;
    if (*(int *)(param_1 + 0x1d080) != 0) {
      if (*(int *)(param_1 + 0x1d080) == 0) {
        plVar2 = (longlong *)&DAT_00000008;
        goto LAB_18019574c;
      }
      do {
        plVar2 = (longlong *)(*(longlong *)(param_1 + 0x1d078) + uVar7 * 0x18 + 0x10);
LAB_18019574c:
        lVar5 = *plVar2;
        lVar3 = *(longlong *)(param_1 + 0x1d088);
        lVar6 = lVar3 + (ulonglong)*(uint *)(param_1 + 0x1d090) * 0x18c0;
        thunk_FUN_1802236f8(lVar3 + 0x620);
        if (lVar5 == *(longlong *)(lVar6 + 0xbb0)) {
          *(undefined8 *)(lVar6 + 0xbb0) = 0;
        }
        (*(code *)puVar1)(0x180224000);
        (*extraout_x11_00)(lVar5);
        thunk_FUN_18022370c(lVar3 + 0x620);
        uVar4 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar4;
      } while (uVar4 < *(uint *)(param_1 + 0x1d080));
    }
    FUN_1802229d8(*(undefined8 *)(param_1 + 0x1d070));
    *(undefined8 *)(param_1 + 0x1d070) = 0;
    *(undefined4 *)(param_1 + 0x1d080) = 0;
    uVar7 = 0;
    *(undefined8 *)(param_1 + 0x1d078) = 0;
    *(undefined4 *)(param_1 + 0x1d084) = 0;
    if (*(int *)(param_1 + 0x1d4d4) != 0) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x1d4c8) + uVar7 * 0x48;
        lVar5 = *(longlong *)(lVar3 + 0x38);
        if (*(longlong *)(lVar3 + 0x40) != 0) {
          (*(code *)puVar1)();
          (*extraout_x11_01)();
        }
        if (lVar5 != 0) {
          (*(code *)puVar1)();
          (*extraout_x11_02)();
        }
        uVar4 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar4;
      } while (uVar4 < *(uint *)(param_1 + 0x1d4d4));
    }
    *(undefined4 *)(param_1 + 0x1d4d4) = 0;
    if (*(longlong *)(param_1 + 0x1d4f8) != 0) {
      FUN_1801feb08(*(undefined8 *)(param_1 + 0x1cf10),*(undefined4 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x1d4f8) = 0;
    }
    if (*(longlong *)(param_1 + 0x1d4f0) != 0) {
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_03)();
      *(undefined8 *)(param_1 + 0x1d4f0) = 0;
    }
    lVar3 = 0;
    do {
      if (*(longlong *)(param_1 + 0x1d2b8 + lVar3 * 8) != 0) {
        FUN_1801feb08(*(undefined8 *)(param_1 + 0x1cf10),*(undefined4 *)(param_1 + 0x28));
        *(undefined8 *)(param_1 + 0x1d2b8 + lVar3 * 8) = 0;
      }
      if (*(longlong *)(param_1 + 0x1d0b8 + lVar3 * 8) != 0) {
        (*(code *)puVar1)();
        (*extraout_x11_04)();
        *(undefined8 *)(param_1 + 0x1d0b8 + lVar3 * 8) = 0;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x40);
    FUN_1801febb8(*(undefined8 *)(param_1 + 0x1cf10),*(undefined4 *)(param_1 + 0x28),
                  *(undefined8 *)(param_1 + 0x1d4b8));
    *(undefined8 *)(param_1 + 0x1d4b8) = 0;
    (*(code *)puVar1)(0x180224000);
    auVar8 = (*extraout_x11_05)();
    *(undefined8 *)(param_1 + 120000) = 0;
    auVar8 = FUN_1801fe6b0(auVar8._0_8_,auVar8._8_8_,0x28,param_1 + 0x1cf20);
    FUN_1801fe898(auVar8._0_8_,auVar8._8_8_,1,param_1 + 0x1d060,param_1 + 0x1d068);
    FUN_180104270(*(longlong *)(param_1 + 0x1cf10) + 0x618,0,param_1);
    FUN_1802003a0(*(undefined8 *)(param_1 + 0x1cf10),*(undefined4 *)(param_1 + 0x28));
    FUN_1801fe510(*(undefined8 *)(param_1 + 0x1cf10));
    *(undefined8 *)(param_1 + 0x1cf10) = 0;
  }
  return;
}


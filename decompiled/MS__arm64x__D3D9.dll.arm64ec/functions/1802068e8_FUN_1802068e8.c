/*
 * FUN_1802068e8 at 1802068e8
 * undefined FUN_1802068e8(void)
 * Address ranges: 1802068e8-180206a1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1802068e8(longlong param_1,ulonglong param_2,undefined4 param_3,undefined8 param_4,
             longlong *param_5)

{
  undefined *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  undefined1 auVar4 [16];
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  local_40 = 0;
  local_50 = 0;
  local_48 = 0;
  auVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000,param_4,param_3);
  (*extraout_x11)(auVar4._0_8_,auVar4._8_8_,&local_48,&local_50);
  if (param_5 == (longlong *)0x0) {
    if (local_50 != 0) {
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_00)();
    }
  }
  else {
    *param_5 = local_50;
  }
  lVar2 = local_48;
  if (local_48 != 0) {
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_01)(lVar2);
    (*(code *)puVar1)(0x180224000);
    auVar4 = (*extraout_x11_02)(lVar2);
    uVar3 = (*(code *)puVar1)(0x180224000,
                              *(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 0x20 + 0x20),
                              auVar4._8_8_,auVar4._0_8_);
    (*extraout_x11_03)(uVar3,0);
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_04)(lVar2);
  }
  return local_40;
}


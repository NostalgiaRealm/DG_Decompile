/*
 * FUN_1801fe0f0 at 1801fe0f0
 * undefined FUN_1801fe0f0(void)
 * Address ranges: 1801fe0f0-1801fe35b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801fe0f0(undefined8 param_1,longlong param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,longlong param_8,undefined4 param_9,
                  longlong param_10,undefined4 param_11)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
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
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  int local_70;
  int iStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if (*(longlong *)(param_2 + 0xdc0) != 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)();
    *(undefined8 *)(param_2 + 0xdc0) = 0;
  }
  if (*(longlong *)(param_2 + 0xdb8) != 0) {
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_00)();
    *(undefined8 *)(param_2 + 0xdb8) = 0;
  }
  if (*(longlong *)(param_2 + 0xdd0) != 0) {
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_01)();
    *(undefined8 *)(param_2 + 0xdd0) = 0;
  }
  if (*(longlong *)(param_2 + 0xdc8) != 0) {
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_02)();
    *(undefined8 *)(param_2 + 0xdc8) = 0;
  }
  if (((param_3 != 0) && (param_4 != 0)) && (param_8 != 0)) {
    local_68 = 0x100000001;
    uStack_60 = 0x10000001b;
    local_48 = 0;
    local_58 = 0x100000000;
    uStack_50 = 8;
    local_a0 = param_9;
    uStack_9c = 0;
    local_a8 = param_8;
    local_70 = param_3;
    iStack_6c = param_4;
    uVar3 = (*(code *)puVar1)(0x180224000);
    iVar2 = (*extraout_x11_03)(uVar3,&local_70,&local_a8,param_2 + 0xdb8);
    if (-1 < iVar2) {
      local_78 = 0;
      local_88 = 0x40000001c;
      uStack_80 = 0xffffffff00000000;
      uVar3 = (*(code *)puVar1)(0x180224000);
      iVar2 = (*extraout_x11_04)(uVar3,*(undefined8 *)(param_2 + 0xdb8),&local_88,param_2 + 0xdc0);
      if (-1 < iVar2) {
        *(undefined4 *)(param_2 + 0xc50) = param_7;
        *(undefined4 *)(param_2 + 0xc48) = param_5;
        *(undefined4 *)(param_2 + 0xc4c) = param_6;
        if (param_10 == 0) {
          return;
        }
        local_98 = param_10;
        local_90 = param_11;
        uStack_8c = 0;
        uVar3 = (*(code *)puVar1)(0x180224000);
        iVar2 = (*extraout_x11_05)(uVar3,&local_70,&local_98,param_2 + 0xdc8);
        if (-1 < iVar2) {
          uVar3 = (*(code *)puVar1)(0x180224000);
          iVar2 = (*extraout_x11_06)(uVar3,*(undefined8 *)(param_2 + 0xdc8),&local_88,
                                     param_2 + 0xdd0);
          if (-1 < iVar2) {
            return;
          }
          (*(code *)puVar1)(0x180224000);
          (*extraout_x11_07)();
          *(undefined8 *)(param_2 + 0xdc8) = 0;
        }
        (*(code *)puVar1)(0x180224000);
        (*extraout_x11_08)();
        *(undefined8 *)(param_2 + 0xdc0) = 0;
      }
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_09)();
      *(undefined8 *)(param_2 + 0xdb8) = 0;
    }
  }
  return;
}


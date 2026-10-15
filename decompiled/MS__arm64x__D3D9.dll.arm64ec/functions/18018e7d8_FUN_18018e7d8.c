/*
 * FUN_18018e7d8 at 18018e7d8
 * undefined FUN_18018e7d8(void)
 * Address ranges: 18018e7d8-18018e947
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18018e7d8(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if (*(longlong *)(param_1 + 0x1d4f8) != 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)();
    *(undefined8 *)(param_1 + 0x1d4f8) = 0;
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_00)();
    *(undefined8 *)(param_1 + 0x1d4f0) = 0;
  }
  uStack_8c = 0;
  local_68 = 0x100000001;
  uStack_60 = 0x10000001c;
  local_48 = 0;
  local_58 = 0x100000000;
  uStack_50 = 8;
  local_98 = param_4;
  local_90 = param_5;
  local_70 = param_2;
  uStack_6c = param_3;
  uVar3 = (*(code *)puVar1)(0x180224000);
  iVar2 = (*extraout_x11_01)(uVar3,&local_70,&local_98,param_1 + 0x1d4f0);
  if (-1 < iVar2) {
    local_78 = 0;
    local_88 = 0x40000001c;
    uStack_80 = 0xffffffff00000000;
    uVar3 = (*(code *)puVar1)(0x180224000);
    iVar2 = (*extraout_x11_02)(uVar3,*(undefined8 *)(param_1 + 0x1d4f0),&local_88,param_1 + 0x1d4f8)
    ;
    if (iVar2 < 0) {
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_03)();
      *(undefined8 *)(param_1 + 0x1d4f0) = 0;
      return 0;
    }
  }
  return 1;
}


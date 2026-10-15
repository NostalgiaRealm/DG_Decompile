/*
 * FUN_18018e6f0 at 18018e6f0
 * undefined FUN_18018e6f0(void)
 * Address ranges: 18018e6f0-18018e7c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18018e6f0(longlong param_1,ulonglong param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  uStack_58 = 0;
  uStack_4c = param_4 & 0xff;
  local_50 = 0x1000;
  param_1 = param_1 + (param_2 & 0xffffffff) * 8;
  local_48 = 8;
  uStack_40 = 0x1000000040;
  local_60 = param_3;
  uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  iVar3 = (*extraout_x11)(uVar4,&local_50,&local_60,param_1 + 0x1d0b8);
  if (iVar3 < 0) {
    bVar2 = false;
  }
  else {
    local_28 = 0;
    lVar5 = param_1 + 0x1d000;
    local_38 = 0x100000000;
    uStack_30 = 0x10000000000;
    uVar4 = (*(code *)puVar1)(0x180224000);
    iVar3 = (*extraout_x11_00)(uVar4,*(undefined8 *)(param_1 + 0x1d0b8),&local_38,lVar5 + 0x2b8);
    bVar2 = -1 < iVar3;
  }
  return bVar2;
}


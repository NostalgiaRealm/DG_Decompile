/*
 * FUN_180198138 at 180198138
 * undefined FUN_180198138(void)
 * Address ranges: 180198138-18019825b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180198138(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  longlong local_50;
  longlong lStack_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  
  param_2 = param_2 & 0xffffffff;
  local_50 = 0;
  lStack_48 = 0;
  *(undefined8 *)(*param_1 + param_2 * 0x48) = param_3;
  uVar3 = *param_4;
  uVar5 = param_4[3];
  uVar4 = param_4[2];
  lVar1 = *param_1 + param_2 * 0x48;
  *(undefined8 *)(lVar1 + 0x10) = param_4[1];
  *(undefined8 *)(lVar1 + 8) = uVar3;
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *(undefined8 *)(lVar1 + 0x18) = uVar4;
  *(undefined8 *)(lVar1 + 0x28) = param_4[4];
  *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(param_4 + 5);
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar3,param_4,0,&local_50);
  if ((local_50 != 0) && ((*(uint *)(param_4 + 4) >> 3 & 1) != 0)) {
    local_40 = *(undefined4 *)(param_4 + 2);
    local_3c = 5;
    local_34 = 0xffffffff;
    local_2c = 1;
    auVar6 = (*(code *)puVar2)(0x180224000);
    (*extraout_x11_00)(auVar6._0_8_,auVar6._8_8_,&local_40,&lStack_48);
    if (lStack_48 == 0) {
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_01)();
      local_50 = 0;
    }
  }
  lVar1 = *param_1 + param_2 * 0x48;
  *(longlong *)(lVar1 + 0x40) = lStack_48;
  *(longlong *)(lVar1 + 0x38) = local_50;
  return;
}


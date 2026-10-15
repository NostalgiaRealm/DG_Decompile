/*
 * FUN_18019f980 at 18019f980
 * undefined FUN_18019f980(void)
 * Address ranges: 18019f980-18019facb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18019f980(longlong param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  undefined1 auVar4 [16];
  longlong local_80 [2];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  
  uVar2 = FUN_1801bad48(&local_70,*(undefined4 *)(param_1 + 0x14));
  if (uVar2 < 0xe) {
    local_70 = 0x1b;
    uStack_6c = 0x1c;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  local_80[0] = 0;
  local_34 = 0;
  local_50 = *(undefined4 *)(param_1 + 8);
  uStack_4c = *(undefined4 *)(param_1 + 0xc);
  uStack_44 = *(undefined4 *)(param_1 + 0x18);
  local_48 = *(undefined4 *)(param_1 + 0x10);
  local_40 = local_70;
  local_3c = 0x800000000;
  uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar3,&local_50,0,local_80);
  *(longlong *)(param_1 + 0x40) = local_80[0];
  if (local_80[0] != 0) {
    local_60 = 0;
    local_80[0] = 0;
    local_70 = uStack_6c;
    uStack_6c = 8;
    uStack_68 = 0;
    uStack_64 = 0xffffffff;
    auVar4 = (*(code *)puVar1)(0x180224000);
    (*extraout_x11_00)(auVar4._0_8_,auVar4._8_8_,&local_70,local_80);
    *(longlong *)(param_1 + 0x48) = local_80[0];
    if (local_80[0] != 0) {
      return 1;
    }
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_01)();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return 0;
}


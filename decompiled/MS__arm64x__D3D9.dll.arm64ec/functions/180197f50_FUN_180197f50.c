/*
 * FUN_180197f50 at 180197f50
 * undefined FUN_180197f50(void)
 * Address ranges: 180197f50-180197fff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180197f50(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  code *extraout_x11;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  
  param_2 = param_2 & 0xffffffff;
  local_50 = 0;
  *(undefined8 *)(*param_1 + param_2 * 0x18) = param_3;
  *(undefined4 *)(*param_1 + param_2 * 0x18 + 8) = *param_4;
  local_48 = 0x40000000400;
  uStack_40 = 0x100000001;
  local_38 = *param_4;
  local_34 = 1;
  local_2c = 3;
  local_24 = 0x10000;
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar1,&local_48,0,&local_50);
  *(undefined8 *)(*param_1 + param_2 * 0x18 + 0x10) = local_50;
  return;
}


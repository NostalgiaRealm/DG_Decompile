/*
 * FUN_180116e78 at 180116e78
 * undefined FUN_180116e78(void)
 * Address ranges: 180116e78-180116ecf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180116e78(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  code *extraout_x11;
  
  lVar2 = *(longlong *)(param_1 + 8);
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar1,*(undefined4 *)(lVar2 + 0x94),*(undefined4 *)(lVar2 + 0x98),1);
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70) = param_2;
  return;
}


/*
 * FUN_1801307f8 at 1801307f8
 * undefined FUN_1801307f8(void)
 * Address ranges: 1801307f8-180130837
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801307f8(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  code *extraout_x11;
  
  lVar2 = *(longlong *)(param_1 + 8);
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar1,*(undefined4 *)(lVar2 + 0x94),*(undefined4 *)(lVar2 + 0x98),1);
  return;
}


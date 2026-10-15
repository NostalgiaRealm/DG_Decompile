/*
 * FUN_180137a70 at 180137a70
 * undefined FUN_180137a70(void)
 * Address ranges: 180137a70-180137ae3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180137a70(longlong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *extraout_x11;
  code *extraout_x11_00;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar2,*(undefined8 *)(param_1 + 0xf718),0);
  uVar2 = (*(code *)puVar1)(0x180224000);
  (*extraout_x11_00)(uVar2,*(undefined8 *)(param_1 + 0xf710),0);
  return;
}


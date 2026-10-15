/*
 * FUN_180167810 at 180167810
 * undefined FUN_180167810(void)
 * Address ranges: 180167810-18016787b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180167810(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  code *extraout_x11;
  
  uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar2,0);
  uVar1 = param_2 & 0xff ^ 1;
  *(uint *)(param_1 + 0x646c) = uVar1;
  *(uint *)(param_1 + 0x69a4) = uVar1;
  *(undefined1 *)(param_1 + 0xf6c3) = 1;
  *(undefined1 *)(param_1 + 0xf691) = 1;
  return;
}


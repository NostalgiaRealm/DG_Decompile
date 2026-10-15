/*
 * FUN_1801bb250 at 1801bb250
 * undefined FUN_1801bb250(void)
 * Address ranges: 1801bb250-1801bb28f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801bb250(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  longlong extraout_x8;
  code *extraout_x11;
  
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                    (*(undefined8 *)(param_1 + 8),param_2,param_2 & 0xffffffff);
  (*extraout_x11)(uVar1,*(undefined4 *)(extraout_x8 + 0x2c));
  return;
}


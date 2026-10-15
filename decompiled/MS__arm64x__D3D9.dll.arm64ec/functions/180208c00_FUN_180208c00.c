/*
 * FUN_180208c00 at 180208c00
 * undefined FUN_180208c00(void)
 * Address ranges: 180208c00-180208c63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180208c00(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  if (param_2 != *(longlong *)(param_1 + 0x30)) {
    FUN_180206ff8();
    uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar1,param_2);
    *(longlong *)(param_1 + 0x30) = param_2;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x674) = 1;
  }
  return;
}


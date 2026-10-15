/*
 * FUN_1801ca820 at 1801ca820
 * undefined FUN_1801ca820(void)
 * Address ranges: 1801ca820-1801ca883
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801ca820(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  uVar1 = 0x88760868;
  if (*(char *)(param_1 + -0x1f) == '\0') {
    if (*(longlong *)(param_1 + 0x5c50) == 0) {
      *param_2 = 0;
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      uVar1 = (*extraout_x11)();
    }
    else {
      *param_2 = 1;
      uVar1 = 0;
    }
  }
  return uVar1;
}


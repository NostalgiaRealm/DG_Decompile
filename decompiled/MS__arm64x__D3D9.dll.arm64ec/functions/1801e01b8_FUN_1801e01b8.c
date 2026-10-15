/*
 * FUN_1801e01b8 at 1801e01b8
 * undefined FUN_1801e01b8(void)
 * Address ranges: 1801e01b8-1801e020f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801e01b8(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  uVar1 = 0x8876086c;
  if (param_3 != 0) {
    if (*(longlong *)(param_1 + 0x40) == 0) {
      uVar1 = FUN_1801bc2e8(*(longlong *)(param_1 + 0x38) + 0x6838);
    }
    else {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      uVar1 = (*extraout_x11)();
    }
  }
  return uVar1;
}


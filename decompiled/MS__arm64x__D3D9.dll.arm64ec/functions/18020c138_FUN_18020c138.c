/*
 * FUN_18020c138 at 18020c138
 * undefined FUN_18020c138(void)
 * Address ranges: 18020c138-18020c19f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18020c138(longlong param_1)

{
  undefined *puVar1;
  code *extraout_x11;
  code *extraout_x11_00;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)();
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_00)();
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}


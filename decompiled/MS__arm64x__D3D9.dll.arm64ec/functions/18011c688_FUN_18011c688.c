/*
 * FUN_18011c688 at 18011c688
 * undefined FUN_18011c688(void)
 * Address ranges: 18011c688-18011c747
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18011c688(longlong param_1)

{
  undefined *puVar1;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)();
  if (*(longlong *)(param_1 + 0x38) != 0) {
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_00)();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_01)();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_02)();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_03)();
  }
  return;
}


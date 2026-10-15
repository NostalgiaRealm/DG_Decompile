/*
 * FUN_1801fe378 at 1801fe378
 * undefined FUN_1801fe378(void)
 * Address ranges: 1801fe378-1801fe42b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801fe378(undefined8 param_1,longlong param_2)

{
  undefined *puVar1;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if (*(longlong *)(param_2 + 0xdc0) != 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)();
    *(undefined8 *)(param_2 + 0xdc0) = 0;
  }
  if (*(longlong *)(param_2 + 0xdb8) != 0) {
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_00)();
    *(undefined8 *)(param_2 + 0xdb8) = 0;
  }
  if (*(longlong *)(param_2 + 0xdd0) != 0) {
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_01)();
    *(undefined8 *)(param_2 + 0xdd0) = 0;
  }
  if (*(longlong *)(param_2 + 0xdc8) != 0) {
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_02)();
    *(undefined8 *)(param_2 + 0xdc8) = 0;
  }
  return;
}


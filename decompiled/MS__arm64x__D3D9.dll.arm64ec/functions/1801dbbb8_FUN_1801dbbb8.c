/*
 * FUN_1801dbbb8 at 1801dbbb8
 * undefined FUN_1801dbbb8(void)
 * Address ranges: 1801dbbb8-1801dbc13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801dbbb8(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  if (*(longlong *)(param_2 + 8) != 0) {
    uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar1,1);
  }
  FUN_1802229d8(*(undefined8 *)(param_2 + 0x228));
  FUN_1802229d8(*(undefined8 *)(param_2 + 0x10),0x1270);
  return;
}


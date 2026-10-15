/*
 * FUN_1801982c8 at 1801982c8
 * undefined FUN_1801982c8(void)
 * Address ranges: 1801982c8-18019834b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801982c8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *extraout_x11;
  code *extraout_x11_00;
  
  FUN_180198260(param_1,1,1);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  **(undefined8 **)(param_1 + 0x30) = param_3;
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(param_3);
  (*(code *)puVar1)(0x180224000);
  (*extraout_x11_00)(param_2);
  return;
}


/*
 * FUN_1801a74a8 at 1801a74a8
 * undefined FUN_1801a74a8(void)
 * Address ranges: 1801a74a8-1801a7527
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801a74a8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined *puVar1;
  code *extraout_x11;
  
  FUN_1801a6db8(param_1,1,1);
  *(undefined8 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  *(undefined4 *)(param_1 + 0x48) = param_5;
  (*(code *)puVar1)(0x180224000);
  (*extraout_x11)(param_2);
  *(undefined2 *)(param_1 + 0x4c) = 0x101;
  return;
}


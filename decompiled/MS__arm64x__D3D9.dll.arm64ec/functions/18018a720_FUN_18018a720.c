/*
 * FUN_18018a720 at 18018a720
 * undefined FUN_18018a720(void)
 * Address ranges: 18018a720-18018a77b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18018a720(undefined8 param_1,longlong param_2,byte param_3)

{
  byte bVar1;
  code *extraout_x11;
  
  bVar1 = *(byte *)(param_2 + 0x1c0) & (param_3 ^ 0xff);
  *(byte *)(param_2 + 0x1c0) = bVar1;
  if ((bVar1 == 0) && (*(int *)(param_2 + 0x1a0) != 0)) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)();
    *(undefined4 *)(param_2 + 0x1a0) = 0;
  }
  return;
}


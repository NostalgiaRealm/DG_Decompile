/*
 * FUN_18013e3f8 at 18013e3f8
 * undefined FUN_18013e3f8(void)
 * Address ranges: 18013e3f8-18013e45b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18013e3f8(longlong param_1)

{
  code *extraout_x11;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)();
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    FUN_1801febb8(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x28),
                  *(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}


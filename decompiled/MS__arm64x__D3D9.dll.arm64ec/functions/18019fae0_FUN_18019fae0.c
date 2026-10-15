/*
 * FUN_18019fae0 at 18019fae0
 * undefined FUN_18019fae0(void)
 * Address ranges: 18019fae0-18019fb6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18019fae0(longlong param_1)

{
  undefined *puVar1;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)();
    if (*(longlong *)(param_1 + 0x50) != 0) {
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_00)();
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_01)();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}


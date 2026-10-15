/*
 * FUN_1801165c0 at 1801165c0
 * undefined FUN_1801165c0(void)
 * Address ranges: 1801165c0-18011661b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801165c0(longlong param_1)

{
  code *extraout_x11;
  
  if (((*(uint *)(param_1 + 0x24) < *(uint *)(param_1 + 0x28)) && (*(longlong *)(param_1 + 8) != 0))
     && (*(longlong *)(param_1 + 0x60) != 0)) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)();
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}


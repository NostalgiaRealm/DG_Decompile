/*
 * FUN_18010b410 at 18010b410
 * undefined FUN_18010b410(void)
 * Address ranges: 18010b410-18010b46f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18010b410(longlong param_1,longlong param_2)

{
  code *extraout_x11;
  
  if ((((param_2 == *(longlong *)(param_1 + 0x30)) || (param_2 == *(longlong *)(param_1 + 0x38))) ||
      (param_2 == *(longlong *)(param_1 + 0x40))) || (param_2 == *(longlong *)(param_1 + 0x48))) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)();
  }
  return;
}


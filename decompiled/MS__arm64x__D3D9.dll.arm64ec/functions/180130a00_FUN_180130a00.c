/*
 * FUN_180130a00 at 180130a00
 * undefined FUN_180130a00(void)
 * Address ranges: 180130a00-180130a7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180130a00(longlong param_1)

{
  undefined *puVar1;
  int iVar2;
  code *extraout_x11;
  code *extraout_x11_00;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  iVar2 = (*extraout_x11)();
  if (iVar2 == *(int *)(param_1 + 0x24)) {
    (*(code *)puVar1)(0x180224000);
    iVar2 = (*extraout_x11_00)();
    if (iVar2 == *(int *)(param_1 + 0x28)) {
      return 0;
    }
  }
  return 1;
}


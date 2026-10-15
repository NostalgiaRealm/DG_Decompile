/*
 * FUN_180208c68 at 180208c68
 * undefined FUN_180208c68(void)
 * Address ranges: 180208c68-180208cc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180208c68(longlong param_1,int param_2)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  if (param_2 != *(int *)(param_1 + 0x40)) {
    FUN_180206ff8();
    uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar1,param_2);
    *(int *)(param_1 + 0x40) = param_2;
  }
  return;
}


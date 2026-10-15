/*
 * FUN_180209640 at 180209640
 * undefined FUN_180209640(void)
 * Address ranges: 180209640-18020969b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180209640(longlong param_1,int param_2)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  if (param_2 != *(int *)(param_1 + 0x670)) {
    FUN_180206ff8();
    uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar1,param_2);
    *(int *)(param_1 + 0x670) = param_2;
  }
  return;
}


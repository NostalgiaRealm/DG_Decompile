/*
 * FUN_180203380 at 180203380
 * undefined FUN_180203380(void)
 * Address ranges: 180203380-180203403
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180203380(longlong param_1,longlong param_2,uint param_3)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(uint *)(param_2 + 0x28) < param_3) {
      thunk_FUN_1802236f8(param_1 + 0x620);
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)(param_1,param_2,param_3);
      thunk_FUN_18022370c(param_1 + 0x620);
    }
    uVar1 = 1;
  }
  return uVar1;
}


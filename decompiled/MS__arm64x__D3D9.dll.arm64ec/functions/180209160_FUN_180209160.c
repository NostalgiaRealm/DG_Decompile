/*
 * FUN_180209160 at 180209160
 * undefined FUN_180209160(void)
 * Address ranges: 180209160-1802091cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180209160(longlong param_1,ulonglong param_2,longlong param_3)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  param_1 = param_1 + (param_2 & 0xffffffff) * 8;
  if (param_3 != *(longlong *)(param_1 + 0x168)) {
    FUN_180206ff8();
    uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar1,param_2 & 0xffffffff,param_3);
    *(longlong *)(param_1 + 0x168) = param_3;
  }
  return;
}


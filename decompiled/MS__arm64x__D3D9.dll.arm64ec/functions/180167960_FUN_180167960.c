/*
 * FUN_180167960 at 180167960
 * undefined FUN_180167960(void)
 * Address ranges: 180167960-180167967
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180167960(longlong param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  if (param_2 < 8) {
    if ((param_3 < 0x1d) && ((0x1dc00ffeU >> (ulonglong)(param_3 & 0x1f) & 1) != 0)) {
      uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)(uVar1,0);
    }
    FUN_180165f10(param_1,param_1 + 0xb0,param_1 + 0xf680,param_2,param_3,param_4);
  }
  return;
}


/*
 * FUN_18011c538 at 18011c538
 * undefined FUN_18011c538(void)
 * Address ranges: 18011c538-18011c67f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18011c538(undefined8 param_1,undefined8 param_2,uint param_3)

{
  code *extraout_x11;
  code *pcVar1;
  code *extraout_x11_00;
  
  if (((((param_3 == 0x10) || (param_3 == 0x11)) || (param_3 == 0x12)) ||
      ((param_3 == 0x15 || (param_3 < 0x1a)))) &&
     ((0x23fe000U >> (ulonglong)(param_3 & 0x1f) & 1) != 0)) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    pcVar1 = extraout_x11_00;
  }
  else {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    pcVar1 = extraout_x11;
  }
  (*pcVar1)();
  return;
}


/*
 * FUN_180116620 at 180116620
 * undefined FUN_180116620(void)
 * Address ranges: 180116620-18011666b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180116620(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *extraout_x11;
  undefined1 auVar2 [16];
  
  uVar1 = 0x8876086c;
  if (param_2 != 0) {
    auVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    uVar1 = (*extraout_x11)(auVar2._0_8_,&DAT_180229218,auVar2._8_8_);
  }
  return uVar1;
}


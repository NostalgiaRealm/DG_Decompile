/*
 * FUN_1801845d8 at 1801845d8
 * undefined FUN_1801845d8(void)
 * Address ranges: 1801845d8-18018464f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801845d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined8 extraout_x12;
  undefined8 extraout_x15;
  undefined1 auVar1 [16];
  
  auVar1 = FUN_180184678(param_1,param_3,param_4,param_5);
  if (*(char *)(auVar1._8_8_ + 0x1cc) == '\0') {
    FUN_180180a20(extraout_x15,extraout_x12,auVar1._8_8_,auVar1._0_8_ & 0xffffffff);
  }
  return;
}


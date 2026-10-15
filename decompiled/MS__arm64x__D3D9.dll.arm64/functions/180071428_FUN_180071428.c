/*
 * FUN_180071428 at 180071428
 * undefined FUN_180071428(void)
 * Address ranges: 180071428-18007149f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180071428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined8 extraout_x12;
  undefined8 extraout_x13;
  undefined1 auVar1 [16];
  
  auVar1 = func_0x000180184678(param_1,param_3,param_4,param_5);
  if (*(char *)(auVar1._8_8_ + 0x1cc) == '\0') {
    FUN_18006dee8(extraout_x13,extraout_x12,auVar1._8_8_,auVar1._0_8_ & 0xffffffff);
  }
  return;
}


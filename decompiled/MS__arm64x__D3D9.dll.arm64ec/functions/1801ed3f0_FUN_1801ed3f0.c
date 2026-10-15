/*
 * FUN_1801ed3f0 at 1801ed3f0
 * undefined FUN_1801ed3f0(void)
 * Address ranges: 1801ed3f0-1801ed447
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801ed3f0(void)

{
  longlong lVar1;
  longlong extraout_x15;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_180104f10();
  lVar1 = extraout_x15 * -0x10;
  FUN_180222c50(&stack0xffffffffffffffe0 + lVar1,0,0x2000);
  thunk_FUN_1802241fc(&stack0xffffffffffffffe0 + lVar1,auVar2._0_8_,auVar2._8_8_);
  thunk_FUN_18022393c(&stack0xffffffffffffffe0 + lVar1);
  return;
}


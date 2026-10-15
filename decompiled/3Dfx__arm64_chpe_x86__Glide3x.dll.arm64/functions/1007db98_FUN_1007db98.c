/*
 * FUN_1007db98 at 1007db98
 * undefined FUN_1007db98(void)
 * Address ranges: 1007db98-1007dbf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007db98(void)

{
  ulonglong uVar1;
  longlong extraout_x15;
  undefined4 unaff_w29;
  undefined1 auVar2 [16];
  
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x20) = unaff_w29;
  auVar2 = FUN_10001280();
  uVar1 = (ZEXT48(&stack0x00000000) - 0x20) + extraout_x15 * -0x10;
  FUN_1007e4d0(uVar1 & 0xffffffff,0,0x2000);
  FUN_10080b40(uVar1 & 0xffffffff,auVar2._0_8_ & 0xffffffff,auVar2._8_8_ & 0xffffffff);
  (*(code *)PTR_FUN_100a00ac)(uVar1 & 0xffffffff);
  return;
}


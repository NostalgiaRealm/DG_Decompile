/*
 * FUN_1006c690 at 1006c690
 * undefined FUN_1006c690(void)
 * Address ranges: 1006c690-1006c6ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006c690(void)

{
  ulonglong uVar1;
  longlong extraout_x15;
  undefined4 unaff_w29;
  undefined1 auVar2 [16];
  
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x20) = unaff_w29;
  auVar2 = FUN_100013c0();
  uVar1 = (ZEXT48(&stack0x00000000) - 0x20) + extraout_x15 * -0x10;
  FUN_10081f10(uVar1 & 0xffffffff,0,0x2000);
  FUN_10081c80(uVar1 & 0xffffffff,auVar2._0_8_ & 0xffffffff,auVar2._8_8_ & 0xffffffff);
  (*(code *)PTR_FUN_100a1054)(uVar1 & 0xffffffff);
  return;
}


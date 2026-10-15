/*
 * FUN_10083238 at 10083238
 * undefined FUN_10083238(void)
 * Address ranges: 10083238-10083297
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10083238(void)

{
  ulonglong uVar1;
  longlong extraout_x15;
  undefined4 unaff_w29;
  undefined1 auVar2 [16];
  
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x20) = unaff_w29;
  auVar2 = FUN_10001280();
  uVar1 = (ZEXT48(&stack0x00000000) - 0x20) + extraout_x15 * -0x10;
  FUN_10083b70(uVar1 & 0xffffffff,0,0x2000);
  FUN_100861e0(uVar1 & 0xffffffff,auVar2._0_8_ & 0xffffffff,auVar2._8_8_ & 0xffffffff);
  (*(code *)PTR_FUN_100a80ac)(uVar1 & 0xffffffff);
  return;
}


/*
 * FUN_100c23f0 at 100c23f0
 * undefined FUN_100c23f0(void)
 * Address ranges: 100c23f0-100c244f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100c23f0(void)

{
  ulonglong uVar1;
  longlong extraout_x15;
  undefined4 unaff_w29;
  undefined1 auVar2 [16];
  
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x20) = unaff_w29;
  auVar2 = FUN_100013c0();
  uVar1 = (ZEXT48(&stack0x00000000) - 0x20) + extraout_x15 * -0x10;
  FUN_100ff690(uVar1 & 0xffffffff,0,0x2000);
  FUN_100febc0(uVar1 & 0xffffffff,auVar2._0_8_ & 0xffffffff,auVar2._8_8_ & 0xffffffff);
  (*(code *)PTR_FUN_101340e0)(uVar1 & 0xffffffff);
  return;
}


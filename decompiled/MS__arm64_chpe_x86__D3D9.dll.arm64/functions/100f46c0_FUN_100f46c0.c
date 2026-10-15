/*
 * FUN_100f46c0 at 100f46c0
 * undefined FUN_100f46c0(void)
 * Address ranges: 100f46c0-100f471f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100f46c0(void)

{
  ulonglong uVar1;
  longlong extraout_x15;
  undefined4 unaff_w29;
  undefined1 auVar2 [16];
  
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x20) = unaff_w29;
  auVar2 = FUN_100013c0();
  uVar1 = (ZEXT48(&stack0x00000000) - 0x20) + extraout_x15 * -0x10;
  FUN_101325d0(uVar1 & 0xffffffff,0,0x2000);
  FUN_10132190(uVar1 & 0xffffffff,auVar2._0_8_ & 0xffffffff,auVar2._8_8_ & 0xffffffff);
  (*(code *)PTR_FUN_1016c0e0)(uVar1 & 0xffffffff);
  return;
}


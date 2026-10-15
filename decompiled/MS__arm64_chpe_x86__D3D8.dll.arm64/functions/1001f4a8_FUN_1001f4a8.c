/*
 * FUN_1001f4a8 at 1001f4a8
 * undefined FUN_1001f4a8(void)
 * Address ranges: 1001f4a8-1001f4df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1001f4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong extraout_x15;
  undefined4 unaff_w29;
  
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x10) = unaff_w29;
  uVar3 = FUN_100013c0();
  uVar1 = (ZEXT48(&stack0x00000000) - 0x10) + extraout_x15 * -0x10;
  uVar2 = FUN_1001eda8(uVar3,0x100,param_3,(int)uVar1 + 8,uVar1 & 0xffffffff);
  return uVar2;
}


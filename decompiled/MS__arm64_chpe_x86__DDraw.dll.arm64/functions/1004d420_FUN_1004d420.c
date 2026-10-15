/*
 * FUN_1004d420 at 1004d420
 * undefined FUN_1004d420(void)
 * Address ranges: 1004d420-1004d453
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1004d420(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(int *)(param_1 + 0x1a0) + 0xceaba7bc;
  if ((0x4000000 < uVar1) || (uVar2 = 1, (uVar1 & 0xffffff) != 0)) {
    uVar2 = 0;
  }
  return uVar2;
}


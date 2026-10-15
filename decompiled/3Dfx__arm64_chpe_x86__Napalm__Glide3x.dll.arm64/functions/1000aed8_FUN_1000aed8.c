/*
 * FUN_1000aed8 at 1000aed8
 * undefined FUN_1000aed8(void)
 * Address ranges: 1000aed8-1000af0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1000aed8(uint param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0xff) {
    param_1 = 0x1b;
  }
  if (param_1 < 0x1c) {
    uVar1 = *(undefined1 *)(param_1 + 0x1009fdf8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


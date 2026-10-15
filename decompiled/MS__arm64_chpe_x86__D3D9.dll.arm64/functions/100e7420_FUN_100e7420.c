/*
 * FUN_100e7420 at 100e7420
 * undefined FUN_100e7420(void)
 * Address ranges: 100e7420-100e7463
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100e7420(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch(*(undefined4 *)(param_1 + 0x14)) {
  case 8:
  case 9:
  case 0xb:
    uVar1 = 4;
    break;
  case 10:
  case 0xc:
    uVar1 = 8;
  }
  return uVar1;
}


/*
 * FUN_100244d0 at 100244d0
 * undefined FUN_100244d0(void)
 * Address ranges: 100244d0-10024517
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100244d0(int param_1)

{
  undefined8 uVar1;
  
  switch(*(undefined4 *)(param_1 + 200)) {
  default:
    uVar1 = 1;
    break;
  case 6:
  case 7:
  case 8:
    uVar1 = 2;
    break;
  case 9:
  case 10:
  case 0xb:
    uVar1 = 4;
    break;
  case 0xc:
  case 0xd:
  case 0xe:
    uVar1 = 8;
  }
  return uVar1;
}


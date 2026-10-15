/*
 * FUN_1006f500 at 1006f500
 * undefined FUN_1006f500(void)
 * Address ranges: 1006f500-1006f543
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1006f500(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch(*(undefined4 *)(param_1 + 8)) {
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


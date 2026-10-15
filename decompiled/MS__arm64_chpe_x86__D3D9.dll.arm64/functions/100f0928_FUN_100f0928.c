/*
 * FUN_100f0928 at 100f0928
 * undefined FUN_100f0928(void)
 * Address ranges: 100f0928-100f096b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100f0928(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  switch(param_1) {
  case 0x14:
  case 0x16:
    uVar1 = 4;
    break;
  case 0x15:
  case 0x17:
    uVar1 = 3;
    break;
  case 0x18:
    uVar1 = 2;
  }
  return uVar1;
}


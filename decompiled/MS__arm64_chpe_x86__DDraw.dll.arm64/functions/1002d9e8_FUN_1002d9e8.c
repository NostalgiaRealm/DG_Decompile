/*
 * FUN_1002d9e8 at 1002d9e8
 * undefined FUN_1002d9e8(void)
 * Address ranges: 1002d9e8-1002da4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1002d9e8(uint param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  if (((param_1 >> 0xb & 1) == 0) && ((param_1 >> 10 & 1) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  switch(param_1 & 0xf) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    uVar2 = 0;
    break;
  case 5:
    if ((bVar1) || (((param_1 >> 7 ^ param_1 >> 8) & 1) != 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    break;
  default:
    uVar2 = 1;
  }
  return uVar2;
}


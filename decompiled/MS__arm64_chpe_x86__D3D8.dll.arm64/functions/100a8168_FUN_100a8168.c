/*
 * FUN_100a8168 at 100a8168
 * undefined FUN_100a8168(void)
 * Address ranges: 100a8168-100a81cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100a8168(uint param_1)

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


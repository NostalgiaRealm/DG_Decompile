/*
 * FUN_10055ad0 at 10055ad0
 * undefined FUN_10055ad0(void)
 * Address ranges: 10055ad0-10055b1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10055ad0(int *param_1)

{
  undefined8 uVar1;
  
  switch(*(undefined4 *)(*param_1 + 0xd2)) {
  case 2:
    uVar1 = 1;
    break;
  case 3:
    uVar1 = 2;
    break;
  case 4:
    uVar1 = 3;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}


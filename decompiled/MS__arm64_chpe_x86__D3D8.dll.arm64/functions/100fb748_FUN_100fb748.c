/*
 * FUN_100fb748 at 100fb748
 * undefined FUN_100fb748(void)
 * Address ranges: 100fb748-100fb797
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100fb748(int *param_1)

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


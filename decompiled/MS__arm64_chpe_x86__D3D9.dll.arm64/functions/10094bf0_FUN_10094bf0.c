/*
 * FUN_10094bf0 at 10094bf0
 * undefined FUN_10094bf0(void)
 * Address ranges: 10094bf0-10094c3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10094bf0(undefined8 param_1,undefined1 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  switch(param_2) {
  default:
    uVar2 = 3;
    break;
  case 2:
    uVar2 = 1;
    break;
  case 3:
  case 4:
    uVar2 = 2;
    break;
  case 5:
  case 6:
    uVar2 = 1;
    uVar1 = 1;
    goto LAB_10094c34;
  }
  uVar1 = 0xf;
LAB_10094c34:
  *param_3 = uVar2;
  return uVar1;
}


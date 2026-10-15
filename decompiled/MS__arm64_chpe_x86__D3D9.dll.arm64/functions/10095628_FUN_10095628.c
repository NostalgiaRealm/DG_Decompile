/*
 * FUN_10095628 at 10095628
 * undefined FUN_10095628(void)
 * Address ranges: 10095628-1009567b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * FUN_10095628(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  switch(param_2) {
  case 2:
    puVar1 = &DAT_10162430;
    break;
  case 3:
    puVar1 = &DAT_10162420;
    break;
  case 4:
    puVar1 = &DAT_10162410;
    break;
  default:
    puVar1 = &DAT_10162400;
  }
  return puVar1;
}


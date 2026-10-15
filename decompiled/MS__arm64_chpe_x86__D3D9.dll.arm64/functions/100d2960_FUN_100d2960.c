/*
 * FUN_100d2960 at 100d2960
 * undefined FUN_100d2960(void)
 * Address ranges: 100d2960-100d2997
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100d2960(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (((*(int *)(param_2 + 0x10) == 0) || (*(int *)(param_2 + 0x10) == 1)) &&
     (*(int *)(param_2 + 0x14) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


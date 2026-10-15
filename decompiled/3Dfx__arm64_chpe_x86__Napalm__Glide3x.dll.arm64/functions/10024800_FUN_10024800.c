/*
 * FUN_10024800 at 10024800
 * undefined FUN_10024800(void)
 * Address ranges: 10024800-1002482b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10024800(int param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 100) == 0) && (*(int *)(param_1 + 0x68) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


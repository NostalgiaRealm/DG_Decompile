/*
 * FUN_10023de8 at 10023de8
 * undefined FUN_10023de8(void)
 * Address ranges: 10023de8-10023e13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10023de8(int param_1)

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


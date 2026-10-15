/*
 * FUN_1003d920 at 1003d920
 * undefined FUN_1003d920(void)
 * Address ranges: 1003d920-1003d93b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1003d920(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  return uVar1;
}


/*
 * FUN_10070e80 at 10070e80
 * undefined FUN_10070e80(void)
 * Address ranges: 10070e80-10070eb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10070e80(int param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(*(int *)(param_1 + 8) + 0x2ac) == 0) ||
     (*(int *)(*(int *)(param_1 + 8) + 0x2b0) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/*
 * FUN_101077c0 at 101077c0
 * undefined FUN_101077c0(void)
 * Address ranges: 101077c0-101077f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_101077c0(int param_1)

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


/*
 * FUN_1000a840 at 1000a840
 * undefined FUN_1000a840(void)
 * Address ranges: 1000a840-1000a86f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1000a840(int param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0xb04) == 3) || ((*(uint *)(param_1 + 0xb0c) >> 5 & 1) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


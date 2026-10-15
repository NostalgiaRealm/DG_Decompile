/*
 * FUN_1000b6c0 at 1000b6c0
 * undefined FUN_1000b6c0(void)
 * Address ranges: 1000b6c0-1000b6ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1000b6c0(int param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0xdc8) == 3) || ((*(uint *)(param_1 + 0xdd0) >> 5 & 1) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


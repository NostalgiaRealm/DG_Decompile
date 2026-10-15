/*
 * FUN_100e1560 at 100e1560
 * undefined FUN_100e1560(void)
 * Address ranges: 100e1560-100e1583
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e1560(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x8dc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x8dc) + 0xc);
  }
  return uVar1;
}


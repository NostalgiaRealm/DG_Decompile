/*
 * FUN_10113db0 at 10113db0
 * undefined FUN_10113db0(void)
 * Address ranges: 10113db0-10113dd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10113db0(int param_1)

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


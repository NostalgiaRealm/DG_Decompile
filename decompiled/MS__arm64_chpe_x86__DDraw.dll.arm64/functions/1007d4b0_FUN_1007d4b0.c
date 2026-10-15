/*
 * FUN_1007d4b0 at 1007d4b0
 * undefined FUN_1007d4b0(void)
 * Address ranges: 1007d4b0-1007d4d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007d4b0(int param_1)

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


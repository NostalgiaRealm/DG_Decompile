/*
 * FUN_10063e00 at 10063e00
 * undefined FUN_10063e00(void)
 * Address ranges: 10063e00-10063e23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10063e00(int param_1)

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


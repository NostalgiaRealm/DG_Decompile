/*
 * FUN_100a0290 at 100a0290
 * undefined FUN_100a0290(void)
 * Address ranges: 100a0290-100a02af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100a0290(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x1bd) == '\0') {
    uVar1 = 0x3f800000;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x1b8);
  }
  return uVar1;
}


/*
 * FUN_10074d20 at 10074d20
 * undefined FUN_10074d20(void)
 * Address ranges: 10074d20-10074d43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10074d20(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x3a4) == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x254);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


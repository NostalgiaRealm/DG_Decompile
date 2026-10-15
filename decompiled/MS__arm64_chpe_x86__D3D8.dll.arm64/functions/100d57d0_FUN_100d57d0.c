/*
 * FUN_100d57d0 at 100d57d0
 * undefined FUN_100d57d0(void)
 * Address ranges: 100d57d0-100d57f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d57d0(int param_1)

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


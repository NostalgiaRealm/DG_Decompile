/*
 * FUN_10068bc0 at 10068bc0
 * undefined FUN_10068bc0(void)
 * Address ranges: 10068bc0-10068be3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10068bc0(int param_1)

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


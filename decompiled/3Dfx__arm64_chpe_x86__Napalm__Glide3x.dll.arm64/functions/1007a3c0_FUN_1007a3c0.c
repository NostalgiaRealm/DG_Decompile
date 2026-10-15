/*
 * FUN_1007a3c0 at 1007a3c0
 * undefined FUN_1007a3c0(void)
 * Address ranges: 1007a3c0-1007a3e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007a3c0(int param_1)

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


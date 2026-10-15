/*
 * FUN_100a02f0 at 100a02f0
 * undefined FUN_100a02f0(void)
 * Address ranges: 100a02f0-100a0313
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100a02f0(int param_1)

{
  int iVar1;
  
  iVar1 = 0x18;
  if (*(char *)(param_1 + 0x1bd) != '\0') {
    iVar1 = 0x134;
  }
  return *(undefined4 *)(iVar1 + param_1);
}


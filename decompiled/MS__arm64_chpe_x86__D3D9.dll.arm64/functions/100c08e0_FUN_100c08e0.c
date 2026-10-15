/*
 * FUN_100c08e0 at 100c08e0
 * undefined FUN_100c08e0(void)
 * Address ranges: 100c08e0-100c0903
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100c08e0(int param_1)

{
  int iVar1;
  
  iVar1 = 0x14;
  if (*(char *)(param_1 + 0x1bd) != '\0') {
    iVar1 = 0x130;
  }
  return *(undefined4 *)(iVar1 + param_1);
}


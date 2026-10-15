/*
 * FUN_100c0910 at 100c0910
 * undefined FUN_100c0910(void)
 * Address ranges: 100c0910-100c0933
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100c0910(int param_1)

{
  int iVar1;
  
  iVar1 = 0x18;
  if (*(char *)(param_1 + 0x1bd) != '\0') {
    iVar1 = 0x134;
  }
  return *(undefined4 *)(iVar1 + param_1);
}


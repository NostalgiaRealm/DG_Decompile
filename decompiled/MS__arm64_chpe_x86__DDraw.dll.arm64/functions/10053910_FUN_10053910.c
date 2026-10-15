/*
 * FUN_10053910 at 10053910
 * undefined FUN_10053910(void)
 * Address ranges: 10053910-1005392f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10053910(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x887601c2;
  if (*(char *)(*(int *)(param_1 + 4) + 8) == '\0') {
    uVar1 = 0;
  }
  return uVar1;
}


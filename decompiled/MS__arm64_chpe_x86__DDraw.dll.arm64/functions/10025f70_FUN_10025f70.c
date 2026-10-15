/*
 * FUN_10025f70 at 10025f70
 * undefined FUN_10025f70(void)
 * Address ranges: 10025f70-10025f93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10025f70(int param_1)

{
  int iVar1;
  
  iVar1 = 0x14;
  if (*(char *)(param_1 + 0x1bd) != '\0') {
    iVar1 = 0x130;
  }
  return *(undefined4 *)(iVar1 + param_1);
}


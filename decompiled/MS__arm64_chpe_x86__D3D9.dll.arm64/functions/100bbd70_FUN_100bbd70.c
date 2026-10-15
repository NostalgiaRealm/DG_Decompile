/*
 * FUN_100bbd70 at 100bbd70
 * undefined FUN_100bbd70(void)
 * Address ranges: 100bbd70-100bbd8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100bbd70(int param_1)

{
  int iVar1;
  
  iVar1 = 0xf0;
  if (*(int *)(param_1 + 0xfc) == 0) {
    iVar1 = 0x48;
  }
  return iVar1 + param_1;
}


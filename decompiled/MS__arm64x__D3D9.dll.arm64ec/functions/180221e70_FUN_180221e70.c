/*
 * FUN_180221e70 at 180221e70
 * undefined FUN_180221e70(void)
 * Address ranges: 180221e70-180221eaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180221e70(longlong param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x204) != '\0') &&
     (iVar1 = thunk_FUN_180223978(), *(int *)(param_1 + 500) != iVar1)) {
    return 0;
  }
  return 1;
}


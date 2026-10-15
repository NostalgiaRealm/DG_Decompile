/*
 * FUN_180101e70 at 180101e70
 * undefined FUN_180101e70(void)
 * Address ranges: 180101e70-180101eb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180101e70(longlong param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x204) != '\0') &&
     (iVar1 = (*__imp_KERNEL32_dll_GetCurrentThreadId)(), *(int *)(param_1 + 500) != iVar1)) {
    return 0;
  }
  return 1;
}


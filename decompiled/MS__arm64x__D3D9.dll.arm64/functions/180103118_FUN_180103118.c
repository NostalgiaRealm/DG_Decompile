/*
 * FUN_180103118 at 180103118
 * undefined FUN_180103118(void)
 * Address ranges: 180103118-180103153
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180103118(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = (*__imp_KERNEL32_dll_GetProcessHeap)();
  (*__imp_KERNEL32_dll_HeapFree)(uVar1,0,param_1);
  return;
}


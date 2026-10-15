/*
 * FUN_180103a40 at 180103a40
 * undefined FUN_180103a40(void)
 * Address ranges: 180103a40-180103a7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180103a40(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*__imp_KERNEL32_dll_GetProcessHeap)();
  (*__imp_KERNEL32_dll_HeapAlloc)(uVar1,8,param_1 * param_2);
  return;
}


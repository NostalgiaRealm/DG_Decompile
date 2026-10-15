/*
 * FUN_180102f80 at 180102f80
 * undefined FUN_180102f80(void)
 * Address ranges: 180102f80-180102fbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180102f80(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = (*__imp_KERNEL32_dll_GetProcessHeap)();
  (*__imp_KERNEL32_dll_HeapAlloc)(uVar1,0,param_1);
  return;
}


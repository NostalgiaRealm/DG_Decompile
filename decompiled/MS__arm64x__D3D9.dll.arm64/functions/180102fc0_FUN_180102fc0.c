/*
 * FUN_180102fc0 at 180102fc0
 * undefined FUN_180102fc0(void)
 * Address ranges: 180102fc0-180102fff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180102fc0(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = (*__imp_KERNEL32_dll_GetProcessHeap)();
    (*__imp_KERNEL32_dll_HeapFree)(uVar1,0,param_1);
  }
  return;
}


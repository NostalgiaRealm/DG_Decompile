/*
 * FUN_180003398 at 180003398
 * undefined FUN_180003398(void)
 * Address ranges: 180003398-180003423
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180003398(uint param_1)

{
  int iVar1;
  undefined1 auStack_50 [48];
  
  if (param_1 < *(uint *)(DAT_18024e310 + 0x28)) {
    iVar1 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)();
    while (iVar1 == 0) {
      (*__imp_USER32_dll_PeekMessageA)(auStack_50,0,0,0,0x400000);
      iVar1 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    }
  }
  else {
    (*__imp_KERNEL32_dll_EnterCriticalSection)();
  }
  return;
}


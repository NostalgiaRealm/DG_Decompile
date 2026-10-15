/*
 * FUN_180020b38 at 180020b38
 * undefined FUN_180020b38(void)
 * Address ranges: 180020b38-180020b8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180020b38(void)

{
  int iVar1;
  
  iVar1 = FUN_180001590(&DAT_18024de38);
  if ((iVar1 == 0) && (DAT_18024de30 != 0)) {
    (*__imp_KERNEL32_dll_RemoveVectoredExceptionHandler)();
    (*__imp_KERNEL32_dll_RemoveVectoredContinueHandler)(DAT_18024de48);
  }
  return;
}


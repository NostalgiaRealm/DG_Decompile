/*
 * FUN_1003c603 at 1003c603
 * undefined __stdcall FUN_1003c603(void)
 * Address ranges: 1003c603-1003c643
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003c603(void)

{
  BOOL BVar1;
  tagMSG local_20;
  
  if (DAT_1006bbd0[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    EnterCriticalSection(DAT_1006bbd0);
  }
  else {
    while (BVar1 = TryEnterCriticalSection(DAT_1006bbd0), BVar1 == 0) {
      PeekMessageA(&local_20,(HWND)0x0,0,0,0x400000);
    }
  }
  return;
}


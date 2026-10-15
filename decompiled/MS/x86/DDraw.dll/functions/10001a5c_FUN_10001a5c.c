/*
 * FUN_10001a5c at 10001a5c
 * undefined __fastcall FUN_10001a5c(PRTL_CRITICAL_SECTION_DEBUG param_1)
 * Address ranges: 10001a5c-10001a9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10001a5c(PRTL_CRITICAL_SECTION_DEBUG param_1)

{
  BOOL BVar1;
  tagMSG local_20;
  
  if (DAT_1006c254[1].DebugInfo <= param_1) {
    EnterCriticalSection(DAT_1006c254);
    return;
  }
  while( true ) {
    BVar1 = TryEnterCriticalSection(DAT_1006c254);
    if (BVar1 != 0) break;
    PeekMessageA(&local_20,(HWND)0x0,0,0,0x400000);
  }
  return;
}


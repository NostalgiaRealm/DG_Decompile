/*
 * FUN_100037f8 at 100037f8
 * undefined __fastcall FUN_100037f8(PRTL_CRITICAL_SECTION_DEBUG param_1)
 * Address ranges: 100037f8-10003837
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100037f8(PRTL_CRITICAL_SECTION_DEBUG param_1)

{
  BOOL BVar1;
  tagMSG local_20;
  
  if (DAT_100ba2e4[1].DebugInfo <= param_1) {
    EnterCriticalSection(DAT_100ba2e4);
    return;
  }
  while( true ) {
    BVar1 = TryEnterCriticalSection(DAT_100ba2e4);
    if (BVar1 != 0) break;
    PeekMessageA(&local_20,(HWND)0x0,0,0,0x400000);
  }
  return;
}


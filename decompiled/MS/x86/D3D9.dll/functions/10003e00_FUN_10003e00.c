/*
 * FUN_10003e00 at 10003e00
 * undefined __fastcall FUN_10003e00(PRTL_CRITICAL_SECTION_DEBUG param_1)
 * Address ranges: 10003e00-10003e3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10003e00(PRTL_CRITICAL_SECTION_DEBUG param_1)

{
  BOOL BVar1;
  tagMSG local_20;
  
  if (DAT_100deaa4[1].DebugInfo <= param_1) {
    EnterCriticalSection(DAT_100deaa4);
    return;
  }
  while( true ) {
    BVar1 = TryEnterCriticalSection(DAT_100deaa4);
    if (BVar1 != 0) break;
    PeekMessageA(&local_20,(HWND)0x0,0,0,0x400000);
  }
  return;
}


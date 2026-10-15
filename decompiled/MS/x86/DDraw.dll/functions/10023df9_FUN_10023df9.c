/*
 * FUN_10023df9 at 10023df9
 * undefined4 __fastcall FUN_10023df9(undefined4 param_1)
 * Address ranges: 10023df9-10023e26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10023df9(undefined4 param_1)

{
  BOOL BVar1;
  
  LOCK();
  DAT_1006c254[1].DebugInfo =
       (PRTL_CRITICAL_SECTION_DEBUG)((int)&(DAT_1006c254[1].DebugInfo)->Type + 1);
  UNLOCK();
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x1);
  }
  DAT_1006c280 = DAT_1006c280 + 1;
  return param_1;
}


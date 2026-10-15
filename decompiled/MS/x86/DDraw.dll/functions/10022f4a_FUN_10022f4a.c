/*
 * FUN_10022f4a at 10022f4a
 * undefined __fastcall FUN_10022f4a(int param_1)
 * Address ranges: 10022f4a-10022f7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10022f4a(int param_1)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  if (*(void **)(param_1 + 0x58) != (void *)0x0) {
    FUN_1002582a(*(void **)(param_1 + 0x58),param_1);
  }
  LeaveCriticalSection(DAT_1006c254);
  return;
}


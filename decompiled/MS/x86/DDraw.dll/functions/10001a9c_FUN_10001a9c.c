/*
 * FUN_10001a9c at 10001a9c
 * undefined4 __fastcall FUN_10001a9c(undefined4 param_1)
 * Address ranges: 10001a9c-10001ab9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10001a9c(undefined4 param_1)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  return param_1;
}


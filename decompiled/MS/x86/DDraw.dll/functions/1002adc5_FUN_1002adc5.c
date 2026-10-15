/*
 * FUN_1002adc5 at 1002adc5
 * int __fastcall FUN_1002adc5(int param_1)
 * Address ranges: 1002adc5-1002adf8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1002adc5(int param_1)

{
  BOOL BVar1;
  int iVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  iVar2 = FUN_10033038(param_1);
  LeaveCriticalSection(DAT_1006c254);
  return iVar2;
}


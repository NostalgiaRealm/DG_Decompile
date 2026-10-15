/*
 * FUN_1002761c at 1002761c
 * undefined4 __fastcall FUN_1002761c(int param_1)
 * Address ranges: 1002761c-1002765a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1002761c(int param_1)

{
  char cVar1;
  BOOL BVar2;
  undefined4 uVar3;
  
  BVar2 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar2 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  cVar1 = FUN_10024bc6(param_1);
  LeaveCriticalSection(DAT_1006c254);
  uVar3 = 0x887600e1;
  if (cVar1 != '\0') {
    uVar3 = 0;
  }
  return uVar3;
}


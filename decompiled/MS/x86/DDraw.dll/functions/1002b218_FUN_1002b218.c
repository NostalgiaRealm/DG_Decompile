/*
 * FUN_1002b218 at 1002b218
 * undefined4 __thiscall FUN_1002b218(void * this, int param_1)
 * Address ranges: 1002b218-1002b254
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002b218(void *this,int param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar2 = FUN_1002b380((void *)((int)this + 0x20),param_1);
  LeaveCriticalSection(DAT_1006c254);
  return uVar2;
}


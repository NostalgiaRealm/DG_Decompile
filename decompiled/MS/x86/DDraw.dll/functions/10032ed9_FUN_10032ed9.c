/*
 * FUN_10032ed9 at 10032ed9
 * undefined4 __thiscall FUN_10032ed9(void * this, int param_1)
 * Address ranges: 10032ed9-10032f34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10032ed9(void *this,int param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar2 = 0x80070057;
  if ((param_1 == 0) && (uVar2 = 0x887601c2, *(char *)((int)this + 8) == '\0')) {
    if ((*(uint *)((int)this + 0x1b8) & 0x800) != 0) {
      *(int *)((int)this + 0x1d8) = *(int *)((int)this + 0x1d8) + 1;
    }
    uVar2 = 0;
  }
  LeaveCriticalSection(DAT_1006c254);
  return uVar2;
}


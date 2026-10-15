/*
 * FUN_10032da5 at 10032da5
 * int __thiscall FUN_10032da5(void * this, RECT * param_1)
 * Address ranges: 10032da5-10032df7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10032da5(void *this,RECT *param_1)

{
  BOOL BVar1;
  int iVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  iVar2 = -0x7789fe3e;
  if (*(char *)((int)this + 8) == '\0') {
    iVar2 = FUN_10032501(this,param_1);
    *(undefined1 *)(*(int *)((int)this + 4) + 0xae) = 0;
  }
  LeaveCriticalSection(DAT_1006c254);
  return iVar2;
}


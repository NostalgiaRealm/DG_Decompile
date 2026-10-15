/*
 * FUN_10003838 at 10003838
 * undefined1 * __thiscall FUN_10003838(void * this, char param_1)
 * Address ranges: 10003838-10003880
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __thiscall FUN_10003838(void *this,char param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  
  lpCriticalSection = DAT_100ba2e4;
  if ((param_1 == '\0') && (DAT_100ba2e4[1].RecursionCount == 0)) {
    *(undefined1 *)this = 0;
    lpCriticalSection[1].LockCount = 1;
  }
  else {
    *(undefined1 *)this = 1;
    BVar1 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar1 == 0) {
      FUN_100037f8((PRTL_CRITICAL_SECTION_DEBUG)0x0);
    }
  }
  return this;
}


/*
 * FUN_10003e40 at 10003e40
 * undefined1 * __thiscall FUN_10003e40(void * this, char param_1)
 * Address ranges: 10003e40-10003e88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __thiscall FUN_10003e40(void *this,char param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  
  lpCriticalSection = DAT_100deaa4;
  if ((param_1 == '\0') && (DAT_100deaa4[1].RecursionCount == 0)) {
    *(undefined1 *)this = 0;
    lpCriticalSection[1].LockCount = 1;
  }
  else {
    *(undefined1 *)this = 1;
    BVar1 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar1 == 0) {
      FUN_10003e00((PRTL_CRITICAL_SECTION_DEBUG)0x0);
    }
  }
  return this;
}


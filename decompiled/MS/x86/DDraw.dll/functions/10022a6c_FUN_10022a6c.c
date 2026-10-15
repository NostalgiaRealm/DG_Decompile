/*
 * FUN_10022a6c at 10022a6c
 * undefined __thiscall FUN_10022a6c(void * this, HWND param_1)
 * Address ranges: 10022a6c-10022afc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10022a6c(void *this,HWND param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  BOOL BVar2;
  int *piVar3;
  
  BVar2 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar2 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  ShowWindow(param_1,1);
  if (((&DAT_1006c49a)[*(int *)((int)this + 0x10c) * 0x228] != '\0') &&
     ((*(char *)((int)DAT_1006c210 + 0x7e5) != '\0' ||
      (*(char *)((int)DAT_1006c210 + 0x784) == '\0')))) {
    piVar3 = FUN_1005e8f7(DAT_1006c210,(int)param_1);
    if ((piVar3 == (int *)0x0) || (piVar3[7] == 0)) {
      cVar1 = FUN_10004193(this);
      if (cVar1 == '\0') {
        FUN_100040b1(this,'\0');
      }
    }
  }
  lpCriticalSection = DAT_1006c254;
  *(undefined1 *)((int)this + 0xf9) = 0;
  LeaveCriticalSection(lpCriticalSection);
  return;
}


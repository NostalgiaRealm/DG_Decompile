/*
 * FUN_100049bf at 100049bf
 * undefined __thiscall FUN_100049bf(void * this, LPARAM param_1)
 * Address ranges: 100049bf-10004a0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100049bf(void *this,LPARAM param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  HWND hWnd;
  
  hWnd = (HWND)(**(code **)(*(int *)this + 0x14))();
  iVar1 = DAT_1006c210;
  if (hWnd != (HWND)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_1006c210 + 0x318);
    EnterCriticalSection(lpCriticalSection);
    if (*(char *)(iVar1 + 0x759) != '\0') {
      SendMessageW(hWnd,0x401,0x44454745,param_1);
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}


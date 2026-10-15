/*
 * FUN_100031ce at 100031ce
 * undefined __fastcall FUN_100031ce(LPVOID param_1)
 * Address ranges: 100031ce-10003228
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100031ce(LPVOID param_1)

{
  HANDLE hHandle;
  HANDLE pvVar1;
  
  *(undefined1 *)((int)param_1 + 0x758) = 0;
  DAT_1005b8a4 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  if (DAT_1005b8a4 != (HANDLE)0x0) {
    InitializeCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x318));
    pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_10003287,param_1,0,
                          (LPDWORD)((int)param_1 + 0x30c));
    hHandle = DAT_1005b8a4;
    *(HANDLE *)((int)param_1 + 0x310) = pvVar1;
    WaitForSingleObject(hHandle,0xffffffff);
  }
  return;
}


/*
 * FUN_10003406 at 10003406
 * undefined __fastcall FUN_10003406(LPVOID param_1)
 * Address ranges: 10003406-10003460
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10003406(LPVOID param_1)

{
  HANDLE hHandle;
  HANDLE pvVar1;
  
  *(undefined1 *)((int)param_1 + 0x758) = 0;
  DAT_10059760 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  if (DAT_10059760 != (HANDLE)0x0) {
    InitializeCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x318));
    pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_100034bf,param_1,0,
                          (LPDWORD)((int)param_1 + 0x30c));
    hHandle = DAT_10059760;
    *(HANDLE *)((int)param_1 + 0x310) = pvVar1;
    WaitForSingleObject(hHandle,0xffffffff);
  }
  return;
}


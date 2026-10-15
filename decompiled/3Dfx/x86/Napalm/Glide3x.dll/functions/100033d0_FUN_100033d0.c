/*
 * FUN_100033d0 at 100033d0
 * undefined __fastcall FUN_100033d0(LPVOID param_1)
 * Address ranges: 100033d0-1000342a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100033d0(LPVOID param_1)

{
  HANDLE hHandle;
  HANDLE pvVar1;
  
  *(undefined1 *)((int)param_1 + 0x758) = 0;
  DAT_1005fa84 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  if (DAT_1005fa84 != (HANDLE)0x0) {
    InitializeCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x318));
    pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_10003489,param_1,0,
                          (LPDWORD)((int)param_1 + 0x30c));
    hHandle = DAT_1005fa84;
    *(HANDLE *)((int)param_1 + 0x310) = pvVar1;
    WaitForSingleObject(hHandle,0xffffffff);
  }
  return;
}


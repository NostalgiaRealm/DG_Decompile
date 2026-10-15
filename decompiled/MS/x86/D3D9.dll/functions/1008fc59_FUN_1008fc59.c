/*
 * FUN_1008fc59 at 1008fc59
 * FARPROC __fastcall FUN_1008fc59(LPCSTR param_1)
 * Address ranges: 1008fc59-1008fd50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

FARPROC __fastcall FUN_1008fc59(LPCSTR param_1)

{
  WCHAR WVar1;
  BOOL BVar2;
  WNDPROC pWVar3;
  WCHAR *pWVar4;
  WCHAR *pWVar5;
  FARPROC pFVar6;
  WCHAR local_210 [260];
  WCHAR *local_8;
  
  BVar2 = TryEnterCriticalSection(DAT_100deaa4);
  if (BVar2 == 0) {
    FUN_10003e00((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  if (DAT_100deed4 == '\0') {
    pWVar3 = FUN_100cc325();
    if (pWVar3 != (WNDPROC)0x0) {
      if (pWVar3[0x7e4] != (WNDPROC)0x0) {
        local_8 = (WCHAR *)0x0;
        SHGetKnownFolderPath(&DAT_100d1520,0,0,&local_8);
        if (local_8 != (WCHAR *)0x0) {
          pWVar5 = local_210;
          pWVar4 = local_8;
          do {
            WVar1 = *pWVar4;
            pWVar4 = pWVar4 + 1;
            *pWVar5 = WVar1;
            pWVar5 = pWVar5 + 1;
          } while (WVar1 != L'\0');
          PathAppendW(local_210,L"D3D9.DLL");
          DAT_100e3a20 = LoadLibraryW(local_210);
          CoTaskMemFree(local_8);
        }
      }
      if (DAT_100e3ae8 == '\0') {
        FUN_100a4e68();
        DAT_100e3ae8 = '\x01';
      }
      FUN_100cc3aa((undefined4 *)pWVar3);
    }
    DAT_100deed4 = '\x01';
  }
  pFVar6 = (FARPROC)0x0;
  if (DAT_100e3a20 != (HMODULE)0x0) {
    pFVar6 = GetProcAddress(DAT_100e3a20,param_1);
  }
  LeaveCriticalSection(DAT_100deaa4);
  return pFVar6;
}


/*
 * FUN_100797dd at 100797dd
 * FARPROC __fastcall FUN_100797dd(LPCSTR param_1)
 * Address ranges: 100797dd-100798d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

FARPROC __fastcall FUN_100797dd(LPCSTR param_1)

{
  WCHAR WVar1;
  BOOL BVar2;
  WNDPROC pWVar3;
  WCHAR *pWVar4;
  WCHAR *pWVar5;
  FARPROC pFVar6;
  WCHAR local_210 [260];
  WCHAR *local_8;
  
  BVar2 = TryEnterCriticalSection(DAT_100ba2e4);
  if (BVar2 == 0) {
    FUN_100037f8((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  if (DAT_100bee5c == '\0') {
    pWVar3 = FUN_100a9a56();
    if (pWVar3 != (WNDPROC)0x0) {
      if (pWVar3[0x7e4] != (WNDPROC)0x0) {
        local_8 = (WCHAR *)0x0;
        SHGetKnownFolderPath(&DAT_100af4c0,0,0,&local_8);
        if (local_8 != (WCHAR *)0x0) {
          pWVar5 = local_210;
          pWVar4 = local_8;
          do {
            WVar1 = *pWVar4;
            pWVar4 = pWVar4 + 1;
            *pWVar5 = WVar1;
            pWVar5 = pWVar5 + 1;
          } while (WVar1 != L'\0');
          PathAppendW(local_210,L"D3D8.DLL");
          DAT_100bee60 = LoadLibraryW(local_210);
          CoTaskMemFree(local_8);
        }
      }
      if (DAT_100bf0c8 == '\0') {
        FUN_10082c09();
        DAT_100bf0c8 = '\x01';
      }
      FUN_100a9adb((undefined4 *)pWVar3);
    }
    DAT_100bee5c = '\x01';
  }
  pFVar6 = (FARPROC)0x0;
  if (DAT_100bee60 != (HMODULE)0x0) {
    pFVar6 = GetProcAddress(DAT_100bee60,param_1);
  }
  LeaveCriticalSection(DAT_100ba2e4);
  return pFVar6;
}


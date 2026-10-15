/*
 * FUN_10023885 at 10023885
 * FARPROC __fastcall FUN_10023885(LPCSTR param_1)
 * Address ranges: 10023885-100239a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

FARPROC __fastcall FUN_10023885(LPCSTR param_1)

{
  WCHAR WVar1;
  BOOL BVar2;
  WNDPROC pWVar3;
  WNDPROC pWVar4;
  FARPROC pFVar5;
  int iVar6;
  WCHAR *pWVar7;
  WCHAR *pWVar8;
  code *pcVar9;
  undefined4 *puVar10;
  WCHAR local_214 [260];
  LPCSTR local_c;
  WCHAR *local_8;
  
  local_c = param_1;
  BVar2 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar2 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  if (DAT_1006c2ac == '\0') {
    pWVar3 = FUN_1005d3eb();
    if (pWVar3 != (WNDPROC)0x0) {
      pWVar4 = FUN_1005d3eb();
      if (pWVar4 != (WNDPROC)0x0) {
        pcVar9 = pWVar4 + 0x9c;
        puVar10 = &DAT_1006b440;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          puVar10 = puVar10 + 1;
        }
        FUN_1005d470((undefined4 *)pWVar4);
      }
      if (pWVar3[0x7e4] != (WNDPROC)0x0) {
        local_8 = (WCHAR *)0x0;
        SHGetKnownFolderPath(&DAT_10062550,0,0,&local_8);
        if (local_8 != (WCHAR *)0x0) {
          pWVar8 = local_214;
          pWVar7 = local_8;
          do {
            WVar1 = *pWVar7;
            pWVar7 = pWVar7 + 1;
            *pWVar8 = WVar1;
            pWVar8 = pWVar8 + 1;
          } while (WVar1 != L'\0');
          PathAppendW(local_214,L"DDRAW.DLL");
          DAT_100709f4 = LoadLibraryW(local_214);
          CoTaskMemFree(local_8);
        }
      }
      if (DAT_10070ad4 == '\0') {
        FUN_10036d7f();
        DAT_10070ad4 = '\x01';
      }
      FUN_1005d470((undefined4 *)pWVar3);
    }
    DAT_1006c2ac = '\x01';
    param_1 = local_c;
  }
  if (DAT_100709f4 == (HMODULE)0x0) {
    pFVar5 = (FARPROC)0x0;
  }
  else {
    pFVar5 = GetProcAddress(DAT_100709f4,param_1);
  }
  LeaveCriticalSection(DAT_1006c254);
  return pFVar5;
}


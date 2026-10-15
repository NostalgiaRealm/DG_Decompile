/*
 * FUN_1800ad364 at 1800ad364
 * FARPROC __fastcall FUN_1800ad364(LPCSTR param_1)
 * Address ranges: 1800ad364-1800ad4ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

FARPROC FUN_1800ad364(LPCSTR param_1)

{
  bool bVar1;
  BOOL BVar2;
  WNDPROC pWVar3;
  FARPROC pFVar4;
  short *local_res10 [3];
  WCHAR local_218 [264];
  
  BVar2 = TryEnterCriticalSection(DAT_1801123a8);
  if (BVar2 == 0) {
    FUN_1800044dc(0);
  }
  if (DAT_1801123c8 == '\0') {
    pWVar3 = FUN_1800f80a0();
    if (pWVar3 != (WNDPROC)0x0) {
      if (pWVar3[0x880] != (WNDPROC)0x0) {
        local_res10[0] = (short *)0x0;
        SHGetKnownFolderPath(&DAT_1800fd870,0,0,local_res10);
        if (local_res10[0] != (short *)0x0) {
          FUN_1800fc934(local_218,local_res10[0]);
          PathAppendW(local_218,L"D3D9.DLL");
          DAT_180117430 = LoadLibraryW(local_218);
          CoTaskMemFree(local_res10[0]);
        }
      }
      if (DAT_180117570 == '\0') {
        bVar1 = FUN_1800fa9a0();
        if (bVar1) {
          FUN_1800fbca0((LPSTR)local_218,
                        "%s %s module type is native x64 so it is running through emulation. Consider using the ARM64X version instead for better performance and no additional JIT codegen cache overhead.\n"
                        ,"[dgVoodoo] WARNING: ",&DAT_180103e94);
          OutputDebugStringA((LPCSTR)local_218);
        }
        DAT_180117570 = '\x01';
      }
      FUN_1800f8148((undefined8 *)pWVar3);
    }
    DAT_1801123c8 = '\x01';
  }
  pFVar4 = (FARPROC)0x0;
  if (DAT_180117430 != (HMODULE)0x0) {
    pFVar4 = GetProcAddress(DAT_180117430,param_1);
  }
  LeaveCriticalSection(DAT_1801123a8);
  return pFVar4;
}


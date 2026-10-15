/*
 * FUN_10004240 at 10004240
 * undefined1 __stdcall FUN_10004240(void)
 * Address ranges: 10004240-1000435c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10004240(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  HANDLE pvVar2;
  int iVar3;
  LPVOID pvVar4;
  DWORD DVar5;
  char *pcVar6;
  uint uVar7;
  LPVOID pvVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint *puVar11;
  undefined4 uVar12;
  CHAR local_114 [260];
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  if (DAT_1005fa8f == '\0') {
    hModule = LoadLibraryA("psapi.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,"EnumProcessModulesEx");
      if (pFVar1 != (FARPROC)0x0) {
        uVar12 = 3;
        puVar11 = &local_8;
        local_10 = 0;
        uVar10 = 1;
        puVar9 = &local_10;
        local_8 = 0;
        pvVar2 = GetCurrentProcess();
        iVar3 = (*pFVar1)(pvVar2,puVar9,uVar10,puVar11,uVar12);
        if (iVar3 != 0) {
          local_c = local_8 >> 2;
          pvVar4 = (LPVOID)FUN_100556a3(local_c * 4);
          puVar11 = &local_8;
          uVar10 = 3;
          pvVar8 = pvVar4;
          uVar7 = local_8;
          pvVar2 = GetCurrentProcess();
          iVar3 = (*pFVar1)(pvVar2,pvVar8,uVar7,puVar11,uVar10);
          if ((iVar3 != 0) && (pvVar4 != (LPVOID)0x0)) {
            uVar7 = 0;
            if (local_c != 0) {
              do {
                DVar5 = GetModuleFileNameA(*(HMODULE *)((int)pvVar4 + uVar7 * 4),local_114,0x104);
                if (DVar5 != 0) {
                  CharLowerA(local_114);
                  pcVar6 = FUN_10055771(local_114,"3dfxvgl.dll");
                  if (pcVar6 != (char *)0x0) {
                    DAT_1005fa8e = 1;
                    break;
                  }
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 < local_c);
            }
            thunk_FUN_10055686(pvVar4);
          }
        }
      }
      FreeLibrary(hModule);
    }
    DAT_1005fa8f = '\x01';
  }
  return DAT_1005fa8e;
}


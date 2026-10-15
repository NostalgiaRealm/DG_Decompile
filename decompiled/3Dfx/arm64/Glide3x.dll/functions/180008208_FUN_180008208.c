/*
 * FUN_180008208 at 180008208
 * undefined1 __cdecl FUN_180008208(void)
 * Address ranges: 180008208-18000837b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000180008294 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */

undefined1 FUN_180008208(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  DWORD DVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  INT_PTR IVar6;
  LPVOID pvVar7;
  char *pcVar8;
  SIZE_T SVar9;
  ulonglong uVar10;
  uint local_170 [2];
  undefined8 local_168;
  CHAR aCStack_160 [272];
  
  if (DAT_18006fa69 == '\0') {
    hModule = LoadLibraryA("psapi.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar5 = GetProcAddress(hModule,"EnumProcessModulesEx");
      if (pFVar5 != (FARPROC)0x0) {
        local_168 = 0;
        local_170[0] = 0;
        GetCurrentProcess();
        IVar6 = (*pFVar5)(pFVar5,&local_168,1,local_170,3);
        if ((int)IVar6 != 0) {
          uVar2 = local_170[0] >> 3;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = CONCAT44(0,uVar2);
          SVar9 = CONCAT44(0,uVar2) << 3;
          if (SUB168(auVar3 * ZEXT816(8),8) != 0) {
            SVar9 = 0xffffffffffffffff;
          }
          pvVar7 = (LPVOID)thunk_FUN_1800636c0(SVar9);
          GetCurrentProcess();
          IVar6 = (*pFVar5)(pvVar7,pvVar7,(ulonglong)local_170[0],local_170,3);
          if (((int)IVar6 != 0) && (pvVar7 != (LPVOID)0x0)) {
            uVar10 = 0;
            if (uVar2 != 0) {
              do {
                DVar4 = GetModuleFileNameA(*(HMODULE *)((longlong)pvVar7 + uVar10 * 8),aCStack_160,
                                           0x104);
                if (DVar4 != 0) {
                  CharLowerA(aCStack_160);
                  pcVar8 = FUN_180063828(aCStack_160,"3dfxvgl.dll");
                  if (pcVar8 != (char *)0x0) {
                    DAT_18006fa68 = 1;
                    break;
                  }
                }
                uVar1 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar1;
              } while (uVar1 < uVar2);
            }
            thunk_FUN_180063700(pvVar7);
          }
        }
      }
      FreeLibrary(hModule);
    }
    DAT_18006fa69 = '\x01';
  }
  return DAT_18006fa68;
}


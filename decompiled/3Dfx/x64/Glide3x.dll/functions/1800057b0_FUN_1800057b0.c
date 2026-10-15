/*
 * FUN_1800057b0 at 1800057b0
 * undefined1 __fastcall FUN_1800057b0(ulonglong param_1)
 * Address ranges: 1800057b0-180005926
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_1800057b0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  DWORD DVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  HANDLE pvVar4;
  INT_PTR IVar5;
  undefined8 uVar6;
  LPVOID pvVar7;
  char *pcVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong local_res8 [2];
  CHAR local_128 [272];
  
  if (DAT_18006da79 == '\0') {
    local_res8[0] = param_1;
    hModule = LoadLibraryA("psapi.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar3 = GetProcAddress(hModule,"EnumProcessModulesEx");
      if (pFVar3 != (FARPROC)0x0) {
        local_res8[1] = 0;
        local_res8[0] = local_res8[0] & 0xffffffff00000000;
        pvVar4 = GetCurrentProcess();
        IVar5 = (*pFVar3)(pvVar4,local_res8 + 1,1,local_res8,3);
        if ((int)IVar5 != 0) {
          uVar9 = (uint)local_res8[0];
          uVar11 = (uint)local_res8[0] >> 3;
          auVar1 = ZEXT816(8) * ZEXT416(uVar11);
          uVar6 = auVar1._0_8_;
          if (auVar1._8_8_ != 0) {
            uVar6 = 0xffffffffffffffff;
          }
          pvVar7 = (LPVOID)thunk_FUN_180060a9c(uVar6);
          pvVar4 = GetCurrentProcess();
          IVar5 = (*pFVar3)(pvVar4,pvVar7,local_res8[0] & 0xffffffff,local_res8,3);
          if (((int)IVar5 != 0) && (pvVar7 != (LPVOID)0x0)) {
            uVar10 = 0;
            if (uVar9 >> 3 != 0) {
              do {
                DVar2 = GetModuleFileNameA(*(HMODULE *)((longlong)pvVar7 + uVar10 * 8),local_128,
                                           0x104);
                if (DVar2 != 0) {
                  CharLowerA(local_128);
                  pcVar8 = FUN_180060b74(local_128,"3dfxvgl.dll");
                  if (pcVar8 != (char *)0x0) {
                    DAT_18006da78 = 1;
                    break;
                  }
                }
                uVar9 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar9;
              } while (uVar9 < uVar11);
            }
            FUN_180060ac0(pvVar7);
          }
        }
      }
      FreeLibrary(hModule);
    }
    DAT_18006da79 = '\x01';
  }
  return DAT_18006da78;
}


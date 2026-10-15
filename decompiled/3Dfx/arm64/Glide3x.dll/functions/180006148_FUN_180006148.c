/*
 * FUN_180006148 at 180006148
 * WNDPROC __cdecl FUN_180006148(void)
 * Address ranges: 180006148-180006937
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

WNDPROC FUN_180006148(void)

{
  code *pcVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  char cVar4;
  ATOM AVar5;
  BOOL BVar6;
  int iVar7;
  uint uVar8;
  HMODULE pHVar9;
  WNDPROC pWVar10;
  longlong lVar11;
  LPSTR pCVar12;
  char *pcVar13;
  FARPROC pFVar14;
  LPVOID pvVar15;
  FARPROC pFVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  uint uVar19;
  SIZE_T SVar20;
  undefined ***local_1020;
  WCHAR *local_1018;
  undefined4 local_1010;
  WNDCLASSEXA local_1008;
  undefined **local_fb8;
  undefined8 uStack_fb0;
  undefined4 local_fa8;
  char *local_fa0;
  undefined4 local_f98;
  undefined8 local_f90;
  undefined8 uStack_f88;
  undefined8 local_f80;
  undefined8 uStack_f78;
  undefined8 local_f70;
  undefined1 local_f68;
  undefined4 local_f64;
  undefined8 local_f60;
  undefined8 uStack_f58;
  undefined4 local_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined4 local_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined4 local_f18;
  tagWNDCLASSEXA tStack_eb0;
  WCHAR aWStack_e60 [260];
  WCHAR aWStack_c58 [260];
  WCHAR aWStack_a50 [260];
  WCHAR aWStack_848 [260];
  CHAR aCStack_640 [512];
  CHAR aCStack_440 [1024];
  
  pHVar9 = GetModuleHandleW((LPCWSTR)0x0);
  BVar6 = GetClassInfoExA(pHVar9,"DGDRIVERROOT",&tStack_eb0);
  if ((BVar6 != 0) && (tStack_eb0.lpfnWndProc != (WNDPROC)0x0)) {
    iVar7 = (*(code *)**(undefined8 **)tStack_eb0.lpfnWndProc)(tStack_eb0.lpfnWndProc);
    pWVar10 = tStack_eb0.lpfnWndProc;
    if (iVar7 != 0x287) {
      pWVar10 = (WNDPROC)0x0;
    }
    goto LAB_18000690c;
  }
  pWVar10 = (WNDPROC)FUN_1800636c0(0xa10);
  if (pWVar10 != (WNDPROC)0x0) {
    *(undefined **)(pWVar10 + 0xe0) = &DAT_180065657;
    *(undefined4 *)(pWVar10 + 0x68) = 0;
    *(undefined2 *)(pWVar10 + 0x6c) = 0;
    *(undefined8 *)(pWVar10 + 0x70) = 0;
    *(undefined8 *)(pWVar10 + 0x78) = 0;
    *(undefined8 *)(pWVar10 + 0x80) = 0;
    *(undefined8 *)(pWVar10 + 0x88) = 0;
    *(undefined8 *)(pWVar10 + 0x90) = 0;
    *(undefined8 *)(pWVar10 + 0x98) = 0;
    *(undefined8 *)(pWVar10 + 0xa0) = 0;
    *(undefined8 *)(pWVar10 + 0xd0) = 0;
    *(undefined4 *)(pWVar10 + 0xd8) = 1;
    *(undefined4 *)(pWVar10 + 0xe8) = 0;
    *(undefined8 *)(pWVar10 + 0x10) = 0;
    *(undefined8 *)(pWVar10 + 0x18) = 0;
    *(undefined8 *)(pWVar10 + 0x28) = 0;
    *(undefined8 *)(pWVar10 + 0x30) = 0;
    *(undefined8 *)(pWVar10 + 0x38) = 0;
    *(undefined8 *)(pWVar10 + 0x40) = 0;
    *(undefined8 *)(pWVar10 + 0x48) = 0;
    *(undefined8 *)(pWVar10 + 0x50) = 0;
    *(undefined8 *)(pWVar10 + 0x58) = 0;
    *(undefined8 *)(pWVar10 + 0x60) = 0;
    *(undefined8 *)(pWVar10 + 0xf0) = 0;
    *(undefined8 *)(pWVar10 + 0xf8) = 0;
    *(undefined8 *)(pWVar10 + 0x130) = 0;
    *(undefined8 *)(pWVar10 + 0x138) = 0;
    *(undefined8 *)(pWVar10 + 0x140) = 0;
    *(undefined8 *)(pWVar10 + 0x148) = 0;
    *(undefined ***)pWVar10 = &PTR_LAB_1800656e8;
    *(undefined8 *)(pWVar10 + 8) = 0;
    *(undefined4 *)(pWVar10 + 0x20) = 0;
    *(undefined8 *)(pWVar10 + 0x100) = 0;
    *(undefined8 *)(pWVar10 + 0x108) = 0;
    *(undefined8 *)(pWVar10 + 0x110) = 0;
    *(undefined4 *)(pWVar10 + 0x118) = 0x287;
    *(undefined8 *)(pWVar10 + 0x120) = 0;
    *(undefined4 *)(pWVar10 + 0x128) = 0;
    *(undefined8 *)(pWVar10 + 0x150) = 0;
    *(undefined8 *)(pWVar10 + 0x158) = 0;
    *(undefined4 *)(pWVar10 + 0x160) = 0;
    FUN_180005f80((undefined8 *)(pWVar10 + 0x3d0));
    FUN_180005f80((undefined8 *)(pWVar10 + 0x5dc));
    FUN_180005f80((undefined8 *)(pWVar10 + 0x800));
    *(undefined2 *)(pWVar10 + 0xa0c) = 0x101;
    FUN_180063e98(pWVar10 + 0x164,0,0x20c);
    pHVar9 = DAT_18006f9c8;
    local_1008.lpfnWndProc = pWVar10;
    if (pWVar10 == (WNDPROC)0xffffffffffffff98) {
      local_1008.lpfnWndProc = (WNDPROC)0x0;
    }
    local_1008.cbClsExtra = 0;
    local_1008.cbWndExtra = 0;
    local_1008.cbSize = 0x50;
    local_1008.style = 0;
    *(undefined8 *)(pWVar10 + 0x7f8) = 0;
    *(undefined8 *)(pWVar10 + 0x7f0) = 0;
    local_1008.hInstance = GetModuleHandleW((LPCWSTR)0x0);
    local_1008.hCursor = (HCURSOR)0x0;
    local_1008.hbrBackground = (HBRUSH)0x0;
    local_1008.hIcon = (HICON)0x0;
    local_1008.lpszMenuName = (LPCSTR)0x0;
    local_1008.lpszClassName = "DGDRIVERROOT";
    local_1008.hIconSm = (HICON)0x0;
    AVar5 = RegisterClassExA(&local_1008);
    *(ATOM *)(pWVar10 + 0x6c) = AVar5;
    if (AVar5 == 0) {
      pHVar9 = (HMODULE)0x0;
    }
    *(HMODULE *)(pWVar10 + 0x70) = pHVar9;
    if (pHVar9 != (HMODULE)0x0) {
      GetModuleFileNameA(pHVar9,aCStack_440,0x400);
      pHVar9 = LoadLibraryA(aCStack_440);
      if (pHVar9 == (HMODULE)0x0) {
        *(undefined8 *)(pWVar10 + 0x70) = 0;
      }
    }
    if (*(short *)(pWVar10 + 0x6c) != 0) {
      *(undefined8 *)(pWVar10 + 0x120) = 0;
      FUN_180063e98(pWVar10 + 0x370,0,0x480);
      cVar4 = DAT_18006f9d0;
      *(undefined4 *)(pWVar10 + 0xd8) = 1;
      *(char **)(pWVar10 + 0xe0) = "[dgVoodoo] ";
      pcVar1 = pWVar10 + 0xd0;
      *(undefined4 *)(pWVar10 + 0xe8) = 0;
      *(undefined8 *)(pWVar10 + 0xf0) = 0;
      *(undefined8 *)pcVar1 = 0x100000001;
      if (cVar4 == '\0') {
        if (DAT_18006f9c8 != (HMODULE)0x0) {
          GetModuleFileNameW(DAT_18006f9c8,aWStack_c58,0x104);
          PathRemoveFileSpecW(aWStack_c58);
          PathAppendW(aWStack_c58,L"dgVoodoo.conf");
          pcVar2 = (code *)0x0;
          if (pWVar10 != (WNDPROC)0x0) {
            pcVar2 = pcVar1;
          }
          uVar17 = FUN_180039ca8(pWVar10 + 0x800,aWStack_c58,(undefined4 *)pcVar2);
          if ((uVar17 & 1) != 0) goto LAB_1800065e4;
        }
        GetModuleFileNameW((HMODULE)0x0,aWStack_a50,0x104);
        PathRemoveFileSpecW(aWStack_a50);
        PathAppendW(aWStack_a50,L"dgVoodoo.conf");
        iVar7 = Ordinal_158(Ordinal_158_exref,aWStack_a50,aWStack_c58);
        if (iVar7 != 0) {
          pcVar2 = (code *)0x0;
          if (pWVar10 != (WNDPROC)0x0) {
            pcVar2 = pcVar1;
          }
          uVar17 = FUN_180039ca8(pWVar10 + 0x800,aWStack_a50,(undefined4 *)pcVar2);
          if ((uVar17 & 1) != 0) goto LAB_1800065e4;
        }
        iVar7 = SHGetFolderPathW(SHGetFolderPathW_exref,0,0x1a,0,0,aWStack_e60);
        if (-1 < iVar7) {
          PathAppendW(aWStack_e60,L"dgVoodoo");
          local_fa0 = "[dgVoodoo IniParser] ";
          local_fa8 = 1;
          local_fb8 = &PTR_FUN_180067fd8;
          uStack_fb0 = 0x100000001;
          local_f98 = 0;
          local_f90 = 0;
          uStack_f88 = 0;
          local_f80 = 0;
          uStack_f78 = 0;
          local_f70 = 0;
          local_f68 = 1;
          local_f64 = 0;
          local_f60 = 0;
          uStack_f58 = 0;
          local_f50 = 0;
          local_f48 = 0;
          uStack_f40 = 0;
          local_f38 = 0;
          local_f30 = 0;
          local_f28 = 0;
          uStack_f20 = 0;
          local_f18 = 0;
          FUN_180063ce8(aWStack_848,aWStack_e60);
          PathAppendW(aWStack_848,L"dgVoodooSettings.ini");
          WideCharToMultiByte(0,0x200,aWStack_848,-1,aCStack_440,0x30a,(LPCSTR)0x0,(LPBOOL)0x0);
          cVar4 = (*(code *)local_fb8[3])(&local_fb8,aWStack_848,1);
          if (cVar4 != '\0') {
            local_1020 = &local_fb8;
            local_1018 = aWStack_e60;
            local_1010 = 0x104;
            uVar19 = 0;
            iVar7 = (*(code *)local_fb8[5])(&local_fb8);
            if (iVar7 != 0) {
              do {
                lVar11 = (*(code *)local_fb8[6])(&local_fb8,uVar19);
                if (lVar11 == 0) {
                  FUN_180039ef0(&local_1020,uVar19);
                  break;
                }
                uVar19 = uVar19 + 1;
                uVar8 = (*(code *)local_fb8[5])(&local_fb8);
              } while (uVar19 < uVar8);
            }
          }
          PathAppendW(aWStack_e60,L"dgVoodoo.conf");
          pcVar2 = (code *)0x0;
          if (pWVar10 != (WNDPROC)0x0) {
            pcVar2 = pcVar1;
          }
          FUN_180039ca8(pWVar10 + 0x800,aWStack_e60,(undefined4 *)pcVar2);
          FUN_18003a4b0(&local_fb8);
        }
      }
      else {
        thunk_FUN_1800010d8((undefined8 *)(pWVar10 + 0x800),(undefined8 *)&DAT_180066610,0x20c);
      }
LAB_1800065e4:
      GetModuleFileNameA((HMODULE)0x0,aCStack_640,0x200);
      pCVar12 = PathFindFileNameA(aCStack_640);
      if (pCVar12 != aCStack_640) {
        FUN_180063750(pCVar12);
        if ((*(int *)(pWVar10 + 0x8be) == 0) &&
           (pcVar13 = FUN_180063828(pCVar12,"dosbox"), pcVar13 != (char *)0x0)) {
          *(int *)(pWVar10 + 0x8be) = 1;
        }
      }
      *(char **)(pWVar10 + 0xe0) = "[dgVoodoo] ";
      *(undefined8 *)(pWVar10 + 0xf0) = 0;
      uVar19 = (uint)(*(int *)(pWVar10 + 0x9fb) == 1);
      if (*(int *)(pWVar10 + 0x9fb) == 2) {
        uVar19 = 2;
      }
      *(uint *)pcVar1 = uVar19;
      uVar19 = (uint)(*(int *)(pWVar10 + 0x9ff) == 1);
      if (*(int *)(pWVar10 + 0x9ff) == 2) {
        uVar19 = 2;
      }
      uVar8 = (uint)(*(int *)(pWVar10 + 0xa03) == 1);
      if (*(int *)(pWVar10 + 0xa03) == 2) {
        uVar8 = 2;
      }
      *(uint *)(pWVar10 + 0xd4) = uVar19;
      *(uint *)(pWVar10 + 0xd8) = uVar8;
      *(undefined4 *)(pWVar10 + 0xe8) = *(undefined4 *)(pWVar10 + 0xa07);
      pHVar9 = LoadLibraryA("USER32.DLL");
      if (pHVar9 != (HMODULE)0x0) {
        pFVar14 = GetProcAddress(pHVar9,"CallWindowProcA");
        *(FARPROC *)(pWVar10 + 0xf8) = pFVar14;
        if (pFVar14 != (FARPROC)0x0) {
          pFVar14 = GetProcAddress(pHVar9,"CallWindowProcW");
          *(FARPROC *)(pWVar10 + 0x100) = pFVar14;
          if (pFVar14 != (FARPROC)0x0) {
            pvVar15 = VirtualAlloc((LPVOID)0x0,0x1000,0x1000,0x40);
            *(LPVOID *)(pWVar10 + 0x108) = pvVar15;
            if (pvVar15 != (LPVOID)0x0) {
              pvVar15 = VirtualAlloc((LPVOID)0x0,0x2000,0x1000,0x40);
              *(LPVOID *)(pWVar10 + 0x110) = pvVar15;
              if (pvVar15 != (LPVOID)0x0) {
                pvVar15 = VirtualAlloc((LPVOID)0x0,0x2700,0x1000,0x40);
                *(LPVOID *)(pWVar10 + 0xa8) = pvVar15;
                if (pvVar15 != (LPVOID)0x0) {
                  pcVar2 = (code *)0x0;
                  if (pWVar10 != (WNDPROC)0x0) {
                    pcVar2 = pcVar1;
                  }
                  *(code **)(pWVar10 + 0x18) = pcVar2;
                  *(undefined4 *)(pWVar10 + 0x20) = 0x287;
                  pHVar9 = LoadLibraryA("SampleAddon.dll");
                  if (pHVar9 != (HMODULE)0x0) {
                    GetModuleFileNameA(pHVar9,(LPSTR)&local_fb8,0x104);
                    pFVar14 = GetProcAddress(pHVar9,"AddOnInit");
                    pFVar16 = GetProcAddress(pHVar9,"AddOnExit");
                    if (((pFVar14 == (FARPROC)0x0) || (pFVar16 == (FARPROC)0x0)) ||
                       (uVar17 = (*pFVar14)(), (uVar17 & 0xff) == 0)) {
                      FreeLibrary(pHVar9);
                    }
                    else {
                      iVar7 = *(int *)(pWVar10 + 0x14);
                      if (*(int *)(pWVar10 + 0x10) == iVar7) {
                        uVar19 = iVar7 << 1;
                        if (iVar7 == 0) {
                          uVar19 = 0x10;
                        }
                        SVar20 = CONCAT44(0,uVar19) * 0x18;
                        auVar3._8_8_ = 0;
                        auVar3._0_8_ = CONCAT44(0,uVar19);
                        if (SUB168(auVar3 * ZEXT816(0x18),8) != 0) {
                          SVar20 = 0xffffffffffffffff;
                        }
                        puVar18 = (undefined8 *)thunk_FUN_1800636c0(SVar20);
                        if (puVar18 == (undefined8 *)0x0) goto LAB_180006898;
                        thunk_FUN_1800010d8(puVar18,*(undefined8 **)(pWVar10 + 8),
                                            (ulonglong)*(uint *)(pWVar10 + 0x14) * 0x18);
                        thunk_FUN_180063700(*(LPVOID *)(pWVar10 + 8));
                        *(undefined8 **)(pWVar10 + 8) = puVar18;
                        *(uint *)(pWVar10 + 0x14) = uVar19;
                      }
                      puVar18 = (undefined8 *)
                                (*(longlong *)(pWVar10 + 8) +
                                (ulonglong)*(uint *)(pWVar10 + 0x10) * 0x18);
                      *puVar18 = pHVar9;
                      puVar18[1] = pFVar14;
                      puVar18[2] = pFVar16;
                      *(int *)(pWVar10 + 0x10) = *(int *)(pWVar10 + 0x10) + 1;
                    }
                  }
LAB_180006898:
                  *(undefined8 *)(pWVar10 + 0xb8) = 0;
                  *(undefined8 *)(pWVar10 + 0xb0) = 0;
                  *(undefined8 *)(pWVar10 + 200) = 0;
                  *(undefined8 *)(pWVar10 + 0xc0) = 0;
                  thunk_FUN_180063700(*(LPVOID *)(pWVar10 + 0x88));
                  *(undefined8 *)(pWVar10 + 0x88) = 0;
                  *(undefined8 *)(pWVar10 + 0x90) = 0;
                  goto LAB_18000690c;
                }
              }
            }
          }
        }
      }
      if (*(short *)(pWVar10 + 0x6c) != 0) {
        pHVar9 = GetModuleHandleW((LPCWSTR)0x0);
        UnregisterClassW((LPCWSTR)(ulonglong)*(ushort *)(pWVar10 + 0x6c),pHVar9);
        if (*(HMODULE *)(pWVar10 + 0x70) != (HMODULE)0x0) {
          FreeLibrary(*(HMODULE *)(pWVar10 + 0x70));
          *(undefined8 *)(pWVar10 + 0x70) = 0;
        }
      }
    }
    FUN_1800060e0((undefined8 *)pWVar10);
    FUN_180063700(pWVar10);
  }
  pWVar10 = (WNDPROC)0x0;
LAB_18000690c:
  if (pWVar10 != (WNDPROC)0x0) {
    FUN_1800643e0((uint *)(pWVar10 + 0x68));
  }
  return pWVar10;
}


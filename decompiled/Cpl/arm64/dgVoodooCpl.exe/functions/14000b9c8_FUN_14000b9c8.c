/*
 * FUN_14000b9c8 at 14000b9c8
 * undefined8 __cdecl FUN_14000b9c8(ulonglong param_1)
 * Address ranges: 14000b9c8-14000cc2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_14000b9c8(ulonglong param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  char cVar6;
  DWORD DVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  HRSRC pHVar12;
  undefined8 *puVar13;
  HGLOBAL hResData;
  undefined8 *puVar14;
  longlong lVar15;
  HWND pHVar16;
  HDWP pvVar17;
  HMODULE hInst;
  HANDLE lParam;
  byte *pbVar18;
  HMENU hMenu;
  longlong *plVar19;
  HWND pHVar20;
  LRESULT LVar21;
  HWND pHVar22;
  uint extraout_w1;
  int iVar23;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int *piVar24;
  LPSTR lpMultiByteStr;
  int *piVar25;
  undefined4 *puVar26;
  undefined8 uVar27;
  uint uVar28;
  SIZE_T SVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  LPARAM LVar33;
  ulonglong uVar34;
  UINT uFlags;
  tagPOINT tVar35;
  longlong *dwNewLong;
  longlong lVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  tagRECT local_8e0;
  tagRECT local_8d0;
  tagRECT local_8c0;
  longlong *local_8b0;
  undefined1 local_8a8 [16];
  undefined4 local_898;
  uint local_890;
  undefined **local_888;
  undefined8 uStack_880;
  undefined4 local_878;
  char *local_870;
  undefined4 local_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined1 local_838;
  undefined4 local_834;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined4 local_820;
  longlong local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined4 local_800;
  longlong local_7f8;
  undefined8 local_7f0;
  undefined4 local_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined4 local_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined4 local_7a8;
  undefined4 local_7a0;
  undefined8 local_79c;
  undefined4 uStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined4 uStack_788;
  undefined8 uStack_784;
  undefined4 local_77c;
  short local_778 [260];
  undefined1 local_570;
  WCHAR aWStack_568 [260];
  CHAR aCStack_360 [784];
  
  pHVar12 = FindResourceW((HMODULE)0x0,(LPCWSTR)0x79,L"RT_CUSTOM");
  if (pHVar12 == (HRSRC)0x0) {
LAB_14000bab0:
    puVar13 = (undefined8 *)0x0;
  }
  else {
    DVar7 = SizeofResource((HMODULE)0x0,pHVar12);
    if (DVar7 == 0) goto LAB_14000bab0;
    puVar13 = (undefined8 *)thunk_FUN_1400247f0((ulonglong)DVar7);
    pHVar12 = FindResourceW((HMODULE)0x0,(LPCWSTR)0x79,L"RT_CUSTOM");
    if (pHVar12 == (HRSRC)0x0) {
LAB_14000baa8:
      thunk_FUN_140024830(puVar13);
      goto LAB_14000bab0;
    }
    DVar7 = SizeofResource((HMODULE)0x0,pHVar12);
    if (((DVar7 == 0) || (hResData = LoadResource((HMODULE)0x0,pHVar12), hResData == (HGLOBAL)0x0))
       || (puVar14 = LockResource(hResData), puVar14 == (undefined8 *)0x0)) goto LAB_14000baa8;
    thunk_FUN_140001000(puVar13,puVar14,(ulonglong)DVar7);
  }
  pHVar12 = FindResourceW((HMODULE)0x0,(LPCWSTR)0x79,L"RT_CUSTOM");
  if (pHVar12 == (HRSRC)0x0) {
    uVar34 = 0;
  }
  else {
    DVar7 = SizeofResource((HMODULE)0x0,pHVar12);
    uVar34 = (ulonglong)DVar7;
  }
  if (((puVar13 != (undefined8 *)0x0) && ((int)uVar34 != 0)) &&
     (puVar14 = (undefined8 *)thunk_FUN_1400247f0((ulonglong)((int)uVar34 + 1)),
     puVar14 != (undefined8 *)0x0)) {
    thunk_FUN_140001000(puVar14,puVar13,uVar34);
    *(undefined1 *)((longlong)puVar14 + uVar34) = 0;
    *(undefined8 **)(param_1 + 0x1e20) = puVar14;
  }
  local_8d0.right = *(uint *)(param_1 + 0xd0);
  uVar34 = 0;
  do {
    if ((uint)local_8d0.right <= (uint)(&DAT_140028640)[uVar34 * 4]) break;
    uVar10 = (int)uVar34 + 1;
    uVar34 = (ulonglong)uVar10;
  } while (uVar10 < 3);
  uVar10 = (uint)uVar34;
  if (uVar10 == 3) {
    uVar10 = 2;
  }
  uVar32 = 0;
  local_8d0.top = (&DAT_140028640)[(ulonglong)uVar10 * 4];
  local_8d0.left = *(uint *)(&DAT_140028644 + (ulonglong)uVar10 * 0x10);
  uVar34 = (((ulonglong)(uint)(&DAT_140028640)[(ulonglong)uVar10 * 4] & 0xffff) << 0x10 |
           (ulonglong)*(uint *)(&DAT_140028644 + (ulonglong)uVar10 * 0x10) << 0x20) +
           (ulonglong)(uint)local_8d0.right;
  uVar10 = *(uint *)(param_1 + 0x13c);
  if (uVar10 == 0) {
LAB_14000bbdc:
    if (uVar10 == *(uint *)(param_1 + 0x138)) {
      uVar31 = (ulonglong)*(uint *)(param_1 + 0x138) & 0x7fffffff;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar31 << 1;
      SVar29 = uVar31 << 6;
      if (SUB168(auVar4 * ZEXT816(0x20),8) != 0) {
        SVar29 = 0xffffffffffffffff;
      }
      lVar15 = thunk_FUN_1400247f0(SVar29);
      if (lVar15 != 0) {
        uVar31 = 0;
        if (*(int *)(param_1 + 0x138) != 0) {
          do {
            uVar10 = (int)uVar31 + 1;
            puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x130) + uVar31 * 0x20);
            puVar14 = (undefined8 *)(lVar15 + uVar31 * 0x20);
            uVar38 = *puVar13;
            uVar37 = puVar13[3];
            uVar27 = puVar13[2];
            puVar14[1] = puVar13[1];
            *puVar14 = uVar38;
            puVar14[3] = uVar37;
            puVar14[2] = uVar27;
            uVar31 = (ulonglong)uVar10;
          } while (uVar10 < *(uint *)(param_1 + 0x138));
        }
        thunk_FUN_140024830(*(LPVOID *)(param_1 + 0x130));
        *(longlong *)(param_1 + 0x130) = lVar15;
        *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) << 1;
      }
    }
    uVar31 = (ulonglong)*(uint *)(param_1 + 0x13c);
    while ((uint)uVar32 < (uint)uVar31) {
      uVar30 = (ulonglong)((uint)uVar31 - 1);
      puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x130) + uVar31 * 0x20);
      puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x130) + uVar30 * 0x20);
      uVar38 = *puVar14;
      uVar37 = puVar14[3];
      uVar27 = puVar14[2];
      puVar13[1] = puVar14[1];
      *puVar13 = uVar38;
      puVar13[3] = uVar37;
      puVar13[2] = uVar27;
      uVar31 = uVar30;
    }
    FUN_140011b50((longlong *)(param_1 + 0x130),uVar32,uVar34,(undefined8 *)&local_8d0);
    *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 1;
  }
  else {
    uVar28 = 0;
    uVar9 = uVar10;
    do {
      uVar3 = uVar9 + uVar28 >> 1;
      uVar32 = (ulonglong)uVar3;
      uVar31 = *(ulonglong *)(*(longlong *)(param_1 + 0x130) + uVar32 * 0x20);
      if (uVar31 <= uVar34) {
        if (uVar34 <= uVar31) break;
        uVar28 = uVar3 + 1;
        uVar32 = (ulonglong)(uVar3 + 1);
        uVar3 = uVar9;
      }
      uVar9 = uVar3;
    } while (uVar9 != uVar28);
    if (((uint)uVar32 == uVar10) ||
       (*(ulonglong *)(*(longlong *)(param_1 + 0x130) + uVar32 * 0x20) != uVar34))
    goto LAB_14000bbdc;
  }
  LVar33 = *(LPARAM *)(*(longlong *)(param_1 + 0x130) + uVar32 * 0x20 + 0x18);
  pHVar16 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3e9);
  SendMessageA(pHVar16,0x172,0,LVar33);
  pHVar16 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3e9);
  GetClientRect(pHVar16,&local_8e0);
  GetClientRect(*(HWND *)(param_1 + 0x18),(LPRECT)local_8a8);
  iVar8 = ((local_8a8._8_4_ - local_8a8._0_4_) - local_8e0.right) + local_8e0.left;
  pHVar16 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3e9);
  GetWindowRect(pHVar16,&local_8e0);
  MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 0x18),(LPPOINT)&local_8e0,1);
  iVar8 = iVar8 / 2;
  if (*(HDWP *)(param_1 + 0x10) == (HDWP)0x0) {
    SetWindowPos(pHVar16,(HWND)0x0,local_8e0.left + iVar8,local_8e0.top,0,0,0x205);
  }
  else {
    pvVar17 = DeferWindowPos(*(HDWP *)(param_1 + 0x10),pHVar16,(HWND)0x0,local_8e0.left + iVar8,
                             local_8e0.top,0,0,0x15);
    *(HDWP *)(param_1 + 0x10) = pvVar17;
  }
  local_890 = FUN_140010e20((undefined8 *)(param_1 + 0xb8));
  hInst = GetModuleHandleW((LPCWSTR)0x0);
  lParam = LoadImageW(hInst,(LPCWSTR)0x70,1,0,0,0x8040);
  SendMessageW(*(HWND *)(param_1 + 0x18),0x80,1,(LPARAM)lParam);
  SendMessageW(*(HWND *)(param_1 + 0x18),0x80,0,(LPARAM)lParam);
  iVar8 = SHGetFolderPathW(SHGetFolderPathW_exref,0,0x1a,0,0,param_1 + 0x1318);
  if (iVar8 < 0) {
    return 0;
  }
  PathAppendW((LPWSTR)(param_1 + 0x1318),L"dgVoodoo");
  CreateDirectoryW((LPCWSTR)(param_1 + 0x1318),(LPSECURITY_ATTRIBUTES)0x0);
  local_570 = 0;
  local_778[0] = 0;
  FUN_1400251e8(local_778,(short *)(param_1 + 0x1318));
  local_870 = "[dgVoodoo IniParser] ";
  local_868 = 0;
  local_860 = 0;
  uStack_858 = 0;
  local_850 = 0;
  uStack_848 = 0;
  local_888 = &PTR_FUN_140029220;
  uStack_880 = 0x100000001;
  local_878 = 1;
  local_840 = 0;
  local_838 = 1;
  local_834 = 0;
  local_830 = 0;
  uStack_828 = 0;
  local_820 = 0;
  local_818 = 0;
  uStack_810 = 0;
  local_808 = 0;
  local_800 = 0;
  local_7f8 = 0;
  local_7f0 = 0;
  local_7e8 = 0;
  FUN_1400251e8(aWStack_568,(short *)(param_1 + 0x1318));
  PathAppendW(aWStack_568,L"dgVoodooSettings.ini");
  WideCharToMultiByte(0,0x200,aWStack_568,-1,aCStack_360,0x30a,(LPCSTR)0x0,(LPBOOL)0x0);
  cVar6 = (*(code *)local_888[3])(&local_888,aWStack_568,1);
  if (cVar6 != '\0') {
    uVar34 = 0;
    if ((uint)local_7f0 != 0) {
      uVar10 = (uint)local_7f0;
      do {
        pbVar18 = (byte *)FUN_140017178((longlong)&local_888,uVar34);
        uVar28 = (uint)uVar34;
        if (pbVar18 == (byte *)0x0) {
          uVar10 = uVar28;
          if (uVar28 == 0xffffffff) {
            uVar10 = extraout_w1;
          }
          local_898 = 0x104;
          local_8a8._0_8_ = &local_888;
          local_8a8._8_8_ = local_778;
          if (uVar28 != 0xffffffff) {
LAB_14000c01c:
            FUN_140015240((undefined8 *)local_8a8,uVar10);
          }
          else {
            uVar10 = 0;
            iVar8 = (*(code *)local_888[5])(&local_888);
            if (iVar8 != 0) {
              do {
                lVar15 = (*(code *)local_888[6])(&local_888,uVar10);
                if (lVar15 == 0) goto LAB_14000c01c;
                uVar10 = uVar10 + 1;
                uVar9 = (*(code *)local_888[5])(&local_888);
              } while (uVar10 < uVar9);
            }
          }
          uVar10 = (uint)local_7f0;
        }
        else {
          uVar9 = FUN_140024ce0(pbVar18,&DAT_1400287a0);
          if (uVar9 == 0) {
            uVar32 = 0;
            lVar15 = local_7f8;
            lVar36 = local_818;
            if (*(int *)(local_7f8 + uVar34 * 0x18 + 0x10) != 0) {
              do {
                uVar10 = FUN_140024ce0((byte *)(lVar36 + (ulonglong)
                                                         *(uint *)(uVar32 * 0x28 +
                                                                  *(longlong *)
                                                                   (lVar15 + uVar34 * 0x18 + 8))),
                                       (byte *)"showextendedtabs");
                if ((uVar10 == 0) &&
                   (iVar8 = (*(code *)local_888[9])(&local_888,uVar34,uVar32), lVar15 = local_7f8,
                   lVar36 = local_818, iVar8 == 1)) {
                  pbVar18 = (byte *)(*(code *)local_888[10])(&local_888,uVar34,uVar32,0);
                  uVar10 = FUN_140024ce0(pbVar18,&DAT_140028790);
                  if (uVar10 == 0) {
                    local_570 = 1;
                    lVar15 = local_7f8;
                    lVar36 = local_818;
                  }
                  else {
                    uVar10 = FUN_140024ce0(pbVar18,(byte *)"false");
                    if (uVar10 == 0) {
                      local_570 = 0;
                      lVar15 = local_7f8;
                      lVar36 = local_818;
                    }
                    else {
                      local_8b0 = (longlong *)((ulonglong)local_8b0 & 0xffffffff00000000);
                      cVar6 = (*(code *)local_888[0xb])(&local_888,uVar34,uVar32,0,&local_8b0);
                      lVar15 = local_7f8;
                      lVar36 = local_818;
                      if ((cVar6 != '\0') && ((uint)local_8b0 < 2)) {
                        local_570 = (uint)local_8b0 != 0;
                      }
                    }
                  }
                }
                uVar10 = (int)uVar32 + 1;
                uVar32 = (ulonglong)uVar10;
              } while (uVar10 < *(uint *)(lVar15 + uVar34 * 0x18 + 0x10));
            }
            break;
          }
        }
        uVar34 = (ulonglong)(uVar28 + 1);
      } while (uVar28 + 1 < uVar10);
    }
  }
  FUN_140015b60(&local_888);
  thunk_FUN_140001000((undefined8 *)(param_1 + 0x288),(undefined8 *)local_778,0x20a);
  puVar26 = (undefined4 *)0x0;
  uVar34 = 0;
  piVar25 = (int *)0x30a;
  lpMultiByteStr = aCStack_360;
  WideCharToMultiByte(0,0x200,(LPCWSTR)(param_1 + 0x288),-1,lpMultiByteStr,0x30a,(LPCSTR)0x0,
                      (LPBOOL)0x0);
  FUN_14000b210(param_1);
  lVar15 = 0;
  if (param_1 != 0) {
    lVar15 = param_1 + 0x88;
  }
  puVar13 = FUN_140011c60(3,lVar15);
  *(undefined8 **)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8 + 0x1d70) = puVar13;
  cVar6 = (**(code **)(**(longlong **)
                         (param_1 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8 + 0x1d70) + 0x18))();
  if (cVar6 != '\0') {
    (**(code **)(**(longlong **)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8 + 0x1d70) +
                0x20))();
    *(int *)(param_1 + 0x1db0) = *(int *)(param_1 + 0x1db0) + 1;
  }
  puVar13 = FUN_140011c60(1,lVar15);
  *(undefined8 **)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8 + 0x1d70) = puVar13;
  cVar6 = (**(code **)(**(longlong **)
                         (param_1 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8 + 0x1d70) + 0x18))();
  if (cVar6 != '\0') {
    (**(code **)(**(longlong **)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8 + 0x1d70) +
                0x20))();
    *(int *)(param_1 + 0x1db0) = *(int *)(param_1 + 0x1db0) + 1;
  }
  puVar13 = FUN_140011c60(2,lVar15);
  *(undefined8 **)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8 + 0x1d70) = puVar13;
  cVar6 = (**(code **)(**(longlong **)
                         (param_1 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8 + 0x1d70) + 0x18))();
  if (cVar6 != '\0') {
    (**(code **)(**(longlong **)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8 + 0x1d70) +
                0x20))();
    *(int *)(param_1 + 0x1db0) = *(int *)(param_1 + 0x1db0) + 1;
  }
  puVar13 = FUN_140011c60(4,lVar15);
  *(undefined8 **)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8 + 0x1d70) = puVar13;
  cVar6 = (**(code **)(**(longlong **)
                         (param_1 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8 + 0x1d70) + 0x18))();
  if (cVar6 != '\0') {
    (**(code **)(**(longlong **)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8 + 0x1d70) +
                0x20))();
    *(int *)(param_1 + 0x1db0) = *(int *)(param_1 + 0x1db0) + 1;
  }
  puVar13 = FUN_140011c60(5,lVar15);
  *(undefined8 **)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8 + 0x1d70) = puVar13;
  cVar6 = (**(code **)(**(longlong **)
                         (param_1 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8 + 0x1d70) + 0x18))();
  if (cVar6 != '\0') {
    (**(code **)(**(longlong **)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8 + 0x1d70) +
                0x20))();
    *(int *)(param_1 + 0x1db0) = *(int *)(param_1 + 0x1db0) + 1;
  }
  puVar13 = FUN_140011c60(6,lVar15);
  *(undefined8 **)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8 + 0x1d70) = puVar13;
  cVar6 = (**(code **)(**(longlong **)
                         (param_1 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8 + 0x1d70) + 0x18))();
  if (cVar6 != '\0') {
    (**(code **)(**(longlong **)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8 + 0x1d70) +
                0x20))();
    *(int *)(param_1 + 0x1db0) = *(int *)(param_1 + 0x1db0) + 1;
  }
  uVar11 = FUN_140010be8((longlong *)(param_1 + 0x268),L"Reset configuration to default",0);
  *(undefined4 *)(param_1 + 0x278) = uVar11;
  hMenu = *(HMENU *)(param_1 + 0x268);
  if (hMenu == (HMENU)0x0) {
    hMenu = CreatePopupMenu();
    *(HMENU *)(param_1 + 0x268) = hMenu;
    if (hMenu == (HMENU)0x0) goto LAB_14000c444;
  }
  uVar10 = *(int *)(param_1 + 0x270) + 1;
  *(uint *)(param_1 + 0x270) = uVar10;
  AppendMenuW(hMenu,0x800,(ulonglong)uVar10,(LPCWSTR)0x0);
LAB_14000c444:
  uVar11 = FUN_140010be8((longlong *)(param_1 + 0x268),L"Show all sections of the configuration",
                         (uint)*(byte *)(param_1 + 0x490));
  *(undefined4 *)(param_1 + 0x27c) = uVar11;
  uVar11 = FUN_140010be8((longlong *)(param_1 + 0x268),L"Set global settings folder",0);
  *(undefined4 *)(param_1 + 0x280) = uVar11;
  uVar11 = FUN_140010be8((longlong *)(param_1 + 0x268),L"Reset Cpl application config to default",0)
  ;
  *(undefined8 *)(param_1 + 0x4f0) = 0x41e00000000;
  dwNewLong = (longlong *)(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x284) = uVar11;
  *dwNewLong = param_1 + 0x498;
  *(longlong **)(param_1 + 0x500) = dwNewLong;
  *(uint *)(param_1 + 600) =
       1 << (ulonglong)(*(uint *)(param_1 + 0x25c) & 0x1f) | *(uint *)(param_1 + 600);
  *(wchar_t **)(param_1 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8 + 0x1d8) = L"General";
  *(ulonglong *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8 + 0x158) = param_1 + 0x5a8;
  uVar10 = *(int *)(param_1 + 0x25c) + 1;
  puVar1 = (uint *)(param_1 + 600);
  *puVar1 = *(uint *)(param_1 + 600) | 1 << (ulonglong)(uVar10 & 0x1f);
  *(uint *)(param_1 + 0x25c) = uVar10;
  *(wchar_t **)(param_1 + (ulonglong)uVar10 * 8 + 0x1d8) = L"Glide";
  *(ulonglong *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8 + 0x158) = param_1 + 0x6e0;
  uVar10 = *(int *)(param_1 + 0x25c) + 1;
  *puVar1 = *(uint *)(param_1 + 600) | 1 << (ulonglong)(uVar10 & 0x1f);
  *(uint *)(param_1 + 0x25c) = uVar10;
  *(wchar_t **)(param_1 + (ulonglong)uVar10 * 8 + 0x1d8) = L"DirectX";
  *(ulonglong *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8 + 0x158) = param_1 + 0x970;
  uVar10 = *(int *)(param_1 + 0x25c) + 1;
  *puVar1 = 1 << (ulonglong)(uVar10 & 0x1f) | *(uint *)(param_1 + 600);
  *(uint *)(param_1 + 0x25c) = uVar10;
  *(wchar_t **)(param_1 + (ulonglong)uVar10 * 8 + 0x1d8) = L"GeneralExt";
  *(ulonglong *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8 + 0x158) = param_1 + 0xc00;
  uVar10 = *(int *)(param_1 + 0x25c) + 1;
  *puVar1 = 1 << (ulonglong)(uVar10 & 0x1f) | *(uint *)(param_1 + 600);
  *(uint *)(param_1 + 0x25c) = uVar10;
  local_7b0 = 0;
  *(wchar_t **)(param_1 + (ulonglong)uVar10 * 8 + 0x1d8) = L"GlideExt";
  local_7a8 = 0;
  local_7d0 = 0;
  local_7c8 = 0;
  *(ulonglong *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8 + 0x158) = param_1 + 0xe80;
  uVar10 = *(int *)(param_1 + 0x25c) + 1;
  *puVar1 = 1 << (ulonglong)(uVar10 & 0x1f) | *(uint *)(param_1 + 600);
  *(uint *)(param_1 + 0x25c) = uVar10;
  *(wchar_t **)(param_1 + (ulonglong)uVar10 * 8 + 0x1d8) = L"DirectXExt";
  *(ulonglong *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8 + 0x158) = param_1 + 0xfa8;
  uVar10 = *(int *)(param_1 + 0x25c) + 1;
  *puVar1 = 1 << (ulonglong)(uVar10 & 0x1f) | *(uint *)(param_1 + 600);
  *(uint *)(param_1 + 0x25c) = uVar10;
  *(wchar_t **)(param_1 + (ulonglong)uVar10 * 8 + 0x1d8) = L"Debug";
  *(ulonglong *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8 + 0x158) = param_1 + 0x11e8;
  *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + 1;
  local_7c0 = 0x100000000;
  uStack_7b8 = 2;
  local_7e0 = 0x100000000;
  uStack_7d8 = 2;
  bVar5 = *(char *)(param_1 + 0x490) != '\0';
  uVar10 = *(uint *)(param_1 + 600) & 0xfffffff7;
  if (bVar5) {
    uVar10 = *(uint *)(param_1 + 600) | 8;
  }
  uVar28 = uVar10 & 0xffffffef;
  if (bVar5) {
    uVar28 = uVar10 | 0x10;
  }
  uVar10 = uVar28 & 0xffffffdf;
  if (bVar5) {
    uVar10 = uVar28 | 0x20;
  }
  uVar28 = uVar10 & 0xffffffbf;
  if (bVar5) {
    uVar28 = uVar10 | 0x40;
  }
  *(uint *)(param_1 + 600) = uVar28;
  puVar13 = &local_7e0;
  if (bVar5) {
    puVar13 = &local_7c0;
  }
  uVar10 = *(uint *)((longlong)puVar13 + (ulonglong)*(uint *)(param_1 + 0x260) * 4);
  pHVar16 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x401);
  plVar19 = (longlong *)GetWindowLongPtrW(pHVar16,-0x15);
  if ((plVar19 != (longlong *)0x0) && (*plVar19 == 0)) {
    if (*(uint *)(param_1 + 0x25c) != 0) {
      uVar32 = 0;
      do {
        if (plVar19[(ulonglong)*(uint *)(plVar19 + 0x22) + 1] ==
            *(longlong *)(param_1 + 0x158 + uVar32 * 8)) goto LAB_14000c728;
        uVar28 = (int)uVar32 + 1;
        uVar32 = (ulonglong)uVar28;
      } while (uVar28 < *(uint *)(param_1 + 0x25c));
    }
    pHVar20 = (HWND)FUN_1400108c8(plVar19[(ulonglong)*(uint *)(plVar19 + 0x22) + 1]);
    ShowWindow(pHVar20,0);
  }
LAB_14000c728:
  SendMessageW(pHVar16,0x1309,0,0);
  SetWindowLongPtrW(pHVar16,-0x15,(LONG_PTR)dwNewLong);
  local_7a0 = 1;
  uVar28 = 0;
  uStack_794 = 0;
  uStack_790 = 0;
  local_79c = 0;
  uStack_784 = 0;
  uStack_78c = 0;
  uStack_788 = 0;
  local_77c = 0;
  if (*(int *)(param_1 + 0x25c) != 0) {
    do {
      if ((1 << (ulonglong)(uVar28 & 0x1f) & *(uint *)(param_1 + 600)) != 0) {
        uVar27 = *(undefined8 *)(param_1 + 0x1d8 + (ulonglong)uVar28 * 8);
        uStack_790 = (undefined4)uVar27;
        uStack_78c = (undefined4)((ulonglong)uVar27 >> 0x20);
        SendMessageW(pHVar16,0x133e,(longlong)(int)uVar28,(LPARAM)&local_7a0);
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 < *(uint *)(param_1 + 0x25c));
  }
  iVar8 = 0;
  LVar21 = SendMessageW(pHVar16,0x130c,(ulonglong)uVar10,0);
  if (-1 < (int)LVar21) {
    uVar28 = 0;
    if (*(uint *)(param_1 + 0x25c) != 0) {
      uVar9 = 0;
      do {
        if (uVar10 < uVar9) break;
        uVar3 = uVar28 & 0x1f;
        uVar28 = uVar28 + 1;
        if ((1 << (ulonglong)uVar3 & *(uint *)(param_1 + 600)) != 0) {
          uVar9 = uVar9 + 1;
        }
      } while (uVar28 < *(uint *)(param_1 + 0x25c));
    }
    iVar8 = uVar28 - 1;
  }
  GetWindowRect(pHVar16,&local_8c0);
  SendMessageW(pHVar16,0x1328,0,(LPARAM)&local_8c0);
  tVar35 = *(tagPOINT *)(param_1 + 0x150);
  if (tVar35 == (tagPOINT)0x0) {
    uVar32 = 0;
    if (*(int *)(param_1 + 0x25c) != 0) {
      do {
        pHVar16 = (HWND)FUN_1400108c8(*(longlong *)(param_1 + 0x158 + uVar32 * 8));
        GetWindowRect(pHVar16,&local_8d0);
        iVar23 = ((local_8c0.left - local_8d0.left) - local_8d0.right) + local_8c0.right;
        iVar2 = ((local_8c0.top - local_8d0.top) - local_8d0.bottom) + local_8c0.bottom;
        MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 0x18),(LPPOINT)&local_8d0,2);
        OffsetRect(&local_8d0,iVar23 / 2,iVar2 / 2);
        uVar10 = 0x41;
        if ((int)uVar32 != iVar8) {
          uVar10 = 0x81;
        }
        uVar34 = (ulonglong)uVar10;
        piVar25 = (int *)0x0;
        lpMultiByteStr = (LPSTR)0x0;
        SetWindowPos(pHVar16,(HWND)0x0,local_8d0.left,local_8d0.top,0,0,uVar10);
        (**(code **)(**(longlong **)(param_1 + 0x158 + uVar32 * 8) + 0x98))();
        uVar10 = (int)uVar32 + 1;
        uVar32 = (ulonglong)uVar10;
      } while (uVar10 < *(uint *)(param_1 + 0x25c));
    }
  }
  else {
    local_8e0.bottom = local_8c0.bottom;
    local_8e0.right = local_8c0.right;
    OffsetRect(&local_8e0,-local_8c0.left,-local_8c0.top);
    pHVar16 = (HWND)FUN_1400108c8((longlong)tVar35);
    uVar34 = 0;
    if (*(int *)(param_1 + 0x25c) != 0) {
      local_8d0._0_8_ = tVar35;
      local_8b0 = dwNewLong;
      do {
        pHVar20 = (HWND)FUN_1400108c8(*(longlong *)(param_1 + 0x158 + uVar34 * 8));
        GetClientRect(pHVar20,(LPRECT)local_8a8);
        if ((int)local_8a8._8_4_ < local_8e0.right) {
          iVar23 = (local_8e0.right - local_8a8._8_4_) / 2;
        }
        else {
          iVar23 = 0;
        }
        OffsetRect((LPRECT)local_8a8,iVar23,0);
        pHVar22 = GetParent(pHVar20);
        if (pHVar22 != pHVar16) {
          SetParent(pHVar20,pHVar16);
        }
        uFlags = 0x41;
        if ((int)uVar34 != iVar8) {
          uFlags = 0x81;
        }
        SetWindowPos(pHVar20,(HWND)0x0,local_8a8._0_4_,local_8a8._4_4_,0,0,uFlags);
        (**(code **)(**(longlong **)(param_1 + 0x158 + uVar34 * 8) + 0x98))();
        uVar10 = (int)uVar34 + 1;
        uVar34 = (ulonglong)uVar10;
        tVar35 = (tagPOINT)local_8d0._0_8_;
        dwNewLong = local_8b0;
      } while (uVar10 < *(uint *)(param_1 + 0x25c));
    }
    local_8e0.left = local_8c0.left;
    local_8e0.top = local_8c0.top;
    if (*(int *)((longlong)tVar35 + 0x5c) != 0) {
      pHVar20 = GetDlgItem(*(HWND *)((longlong)tVar35 + 0x18),*(int *)((longlong)tVar35 + 0x5c));
      SetWindowPos(pHVar20,(HWND)0x0,(local_8c0.right - local_8c0.left) + -0xc,0,0xc,
                   local_8c0.bottom - local_8c0.top,0x204);
    }
    MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 0x18),(LPPOINT)&local_8e0,2);
    uVar34 = 0x41;
    piVar25 = (int *)0x0;
    lpMultiByteStr = (LPSTR)0x0;
    SetWindowPos(pHVar16,(HWND)0x0,local_8e0.left,local_8e0.top,0,0,0x41);
    (**(code **)(*(longlong *)tVar35 + 0x98))(tVar35);
  }
  *(int *)(param_1 + 0x260) = iVar8;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_140010940(dwNewLong);
  }
  SendMessageW(*(HWND *)(param_1 + 0x20),0x418,0,500);
  LVar33 = 20000;
  piVar24 = (int *)0x2;
  SendMessageW(*(HWND *)(param_1 + 0x20),0x403,2,20000);
  FUN_1400107e8(param_1,0x402);
  FUN_1400107e8(param_1,0x3fd);
  FUN_1400107e8(param_1,0x3fb);
  FUN_1400107e8(param_1,0x3fe);
  FUN_1400107e8(param_1,0x3fa);
  FUN_1400107e8(param_1,0x3fc);
  uVar10 = local_890;
  uVar27 = extraout_x1;
  if (local_890 != *(uint *)(param_1 + 0x148)) {
    GetWindowRect(*(HWND *)(param_1 + 0x18),(LPRECT)local_8a8);
    piVar24 = (int *)local_8a8;
    FUN_14000b0b8(param_1,uVar10,piVar24);
    uVar27 = extraout_x1_00;
  }
  *(undefined1 *)(param_1 + 0x1e28) = 1;
  FUN_14000a740(param_1,uVar27,piVar24,LVar33,lpMultiByteStr,piVar25,uVar34,puVar26);
  return 1;
}


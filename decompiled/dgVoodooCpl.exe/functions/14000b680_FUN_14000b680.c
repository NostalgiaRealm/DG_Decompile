/*
 * FUN_14000b680 at 14000b680
 * undefined8 __fastcall FUN_14000b680(longlong param_1)
 * Address ranges: 14000b680-14000be3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_14000b680(longlong param_1)

{
  longlong *plVar1;
  LPWSTR pszPath;
  LPARAM lParam;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  LPCWSTR pWVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  HWND pHVar16;
  HDWP pvVar17;
  HMODULE hInst;
  HANDLE lParam_00;
  short *psVar18;
  short *psVar19;
  HMENU hMenu;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  LPCWSTR pWVar23;
  uint uVar24;
  ulonglong uVar25;
  tagRECT local_368;
  tagRECT local_358;
  short local_348 [392];
  
  puVar11 = FUN_140023dc0((HMODULE)0x0,(LPCWSTR)0x79,L"RT_CUSTOM");
  uVar7 = FUN_140023e90((HMODULE)0x0,(LPCWSTR)0x79,L"RT_CUSTOM");
  if (((puVar11 != (undefined8 *)0x0) && (uVar7 != 0)) &&
     (puVar12 = (undefined8 *)thunk_FUN_14002423c((ulonglong)(uVar7 + 1)),
     puVar12 != (undefined8 *)0x0)) {
    FUN_140024620(puVar12,puVar11,(ulonglong)uVar7);
    *(undefined1 *)((ulonglong)uVar7 + (longlong)puVar12) = 0;
    *(undefined8 **)(param_1 + 0x1e20) = puVar12;
  }
  local_368.right = *(uint *)(param_1 + 0xd0);
  uVar7 = 0;
  do {
    if ((uint)local_368.right <= (uint)(&DAT_140028568)[(ulonglong)uVar7 * 4]) goto LAB_14000b729;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 3);
  if (uVar7 == 3) {
    uVar7 = 2;
  }
LAB_14000b729:
  plVar1 = (longlong *)(param_1 + 0x130);
  uVar8 = 0;
  local_368.top = (&DAT_140028568)[(ulonglong)uVar7 * 4];
  local_368.left = *(LONG *)(&DAT_14002856c + (ulonglong)uVar7 * 0x10);
  uVar7 = *(uint *)(param_1 + 0x13c);
  uVar25 = CONCAT44(local_368.left,local_368.top << 0x10) + (ulonglong)(uint)local_368.right;
  if (uVar7 == 0) {
LAB_14000b7ac:
    if (uVar7 == *(uint *)(param_1 + 0x138)) {
      auVar2 = ZEXT816(0x20) * ZEXT416(*(uint *)(param_1 + 0x138) * 2);
      uVar13 = auVar2._0_8_;
      if (auVar2._8_8_ != 0) {
        uVar13 = 0xffffffffffffffff;
      }
      lVar14 = thunk_FUN_14002423c(uVar13);
      if (lVar14 != 0) {
        uVar7 = 0;
        if (*(int *)(param_1 + 0x138) != 0) {
          do {
            lVar15 = *plVar1;
            uVar21 = (ulonglong)uVar7;
            uVar7 = uVar7 + 1;
            lVar22 = uVar21 * 0x20;
            puVar11 = (undefined8 *)(lVar15 + lVar22);
            uVar13 = puVar11[1];
            *(undefined8 *)(lVar14 + lVar22) = *puVar11;
            ((undefined8 *)(lVar14 + lVar22))[1] = uVar13;
            puVar11 = (undefined8 *)(lVar15 + 0x10 + lVar22);
            uVar13 = puVar11[1];
            puVar12 = (undefined8 *)(lVar14 + 0x10 + lVar22);
            *puVar12 = *puVar11;
            puVar12[1] = uVar13;
          } while (uVar7 < *(uint *)(param_1 + 0x138));
        }
        FUN_140024260((LPVOID)*plVar1);
        *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) << 1;
        *plVar1 = lVar14;
      }
    }
    uVar7 = *(uint *)(param_1 + 0x13c);
    while (uVar8 < uVar7) {
      lVar14 = *plVar1;
      lVar15 = (ulonglong)(uVar7 - 1) * 0x20;
      puVar11 = (undefined8 *)(lVar14 + lVar15);
      uVar13 = puVar11[1];
      puVar12 = (undefined8 *)(lVar14 + (ulonglong)uVar7 * 0x20);
      *puVar12 = *puVar11;
      puVar12[1] = uVar13;
      puVar11 = (undefined8 *)(lVar14 + 0x10 + lVar15);
      uVar13 = puVar11[1];
      puVar12 = (undefined8 *)(lVar14 + 0x10 + (ulonglong)uVar7 * 0x20);
      *puVar12 = *puVar11;
      puVar12[1] = uVar13;
      uVar7 = uVar7 - 1;
    }
    FUN_14000ff10(plVar1,uVar8,uVar25,(ushort *)&local_368);
    *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 1;
  }
  else {
    uVar20 = 0;
    uVar24 = uVar7;
    do {
      uVar8 = uVar24 + uVar20 >> 1;
      uVar21 = *(ulonglong *)(*plVar1 + (ulonglong)uVar8 * 0x20);
      uVar6 = uVar8;
      if (uVar21 <= uVar25) {
        if (uVar25 <= uVar21) break;
        uVar20 = uVar8 + 1;
        uVar8 = uVar20;
        uVar6 = uVar24;
      }
      uVar24 = uVar6;
    } while (uVar24 != uVar20);
    if ((uVar8 == uVar7) || (*(ulonglong *)((ulonglong)uVar8 * 0x20 + *plVar1) != uVar25))
    goto LAB_14000b7ac;
  }
  lParam = *(LPARAM *)((ulonglong)uVar8 * 0x20 + 0x18 + *plVar1);
  pHVar16 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3e9);
  SendMessageA(pHVar16,0x172,0,lParam);
  pHVar16 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3e9);
  GetClientRect(pHVar16,&local_358);
  GetClientRect(*(HWND *)(param_1 + 0x18),&local_368);
  iVar9 = (((local_368.right - local_368.left) - local_358.right) + local_358.left) / 2;
  pHVar16 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3e9);
  GetWindowRect(pHVar16,&local_368);
  MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 0x18),(LPPOINT)&local_368,1);
  if (*(HDWP *)(param_1 + 0x10) == (HDWP)0x0) {
    SetWindowPos(pHVar16,(HWND)0x0,local_368.left + iVar9,local_368.top,0,0,0x205);
  }
  else {
    pvVar17 = DeferWindowPos(*(HDWP *)(param_1 + 0x10),pHVar16,(HWND)0x0,local_368.left + iVar9,
                             local_368.top,0,0,0x15);
    *(HDWP *)(param_1 + 0x10) = pvVar17;
  }
  uVar7 = FUN_14000f670((undefined8 *)(param_1 + 0xb8));
  hInst = GetModuleHandleW((LPCWSTR)0x0);
  lParam_00 = LoadImageW(hInst,(LPCWSTR)0x70,1,0,0,0x8040);
  SendMessageW(*(HWND *)(param_1 + 0x18),0x80,1,(LPARAM)lParam_00);
  SendMessageW(*(HWND *)(param_1 + 0x18),0x80,0,(LPARAM)lParam_00);
  pszPath = (LPWSTR)(param_1 + 0x1318);
  uVar21 = 0;
  uVar25 = SHGetFolderPathW(0,0x1a,0,0,pszPath);
  if ((int)uVar25 < 0) {
    return uVar25 & 0xffffffffffffff00;
  }
  PathAppendW(pszPath,L"dgVoodoo");
  CreateDirectoryW(pszPath,(LPSECURITY_ATTRIBUTES)0x0);
  psVar18 = FUN_14000d444(local_348,pszPath,uVar21);
  lVar14 = 4;
  pWVar5 = (LPCWSTR)(param_1 + 0x288);
  do {
    pWVar23 = pWVar5;
    psVar19 = psVar18;
    uVar13 = *(undefined8 *)(psVar19 + 4);
    *(undefined8 *)pWVar23 = *(undefined8 *)psVar19;
    *(undefined8 *)(pWVar23 + 4) = uVar13;
    uVar13 = *(undefined8 *)(psVar19 + 0xc);
    *(undefined8 *)(pWVar23 + 8) = *(undefined8 *)(psVar19 + 8);
    *(undefined8 *)(pWVar23 + 0xc) = uVar13;
    uVar13 = *(undefined8 *)(psVar19 + 0x14);
    *(undefined8 *)(pWVar23 + 0x10) = *(undefined8 *)(psVar19 + 0x10);
    *(undefined8 *)(pWVar23 + 0x14) = uVar13;
    uVar13 = *(undefined8 *)(psVar19 + 0x1c);
    *(undefined8 *)(pWVar23 + 0x18) = *(undefined8 *)(psVar19 + 0x18);
    *(undefined8 *)(pWVar23 + 0x1c) = uVar13;
    uVar13 = *(undefined8 *)(psVar19 + 0x24);
    *(undefined8 *)(pWVar23 + 0x20) = *(undefined8 *)(psVar19 + 0x20);
    *(undefined8 *)(pWVar23 + 0x24) = uVar13;
    uVar13 = *(undefined8 *)(psVar19 + 0x2c);
    *(undefined8 *)(pWVar23 + 0x28) = *(undefined8 *)(psVar19 + 0x28);
    *(undefined8 *)(pWVar23 + 0x2c) = uVar13;
    uVar13 = *(undefined8 *)(psVar19 + 0x34);
    *(undefined8 *)(pWVar23 + 0x30) = *(undefined8 *)(psVar19 + 0x30);
    *(undefined8 *)(pWVar23 + 0x34) = uVar13;
    uVar10 = *(undefined4 *)(psVar19 + 0x3a);
    uVar3 = *(undefined4 *)(psVar19 + 0x3c);
    uVar4 = *(undefined4 *)(psVar19 + 0x3e);
    *(undefined4 *)(pWVar23 + 0x38) = *(undefined4 *)(psVar19 + 0x38);
    *(undefined4 *)(pWVar23 + 0x3a) = uVar10;
    *(undefined4 *)(pWVar23 + 0x3c) = uVar3;
    *(undefined4 *)(pWVar23 + 0x3e) = uVar4;
    lVar14 = lVar14 + -1;
    psVar18 = psVar19 + 0x40;
    pWVar5 = pWVar23 + 0x40;
  } while (lVar14 != 0);
  uVar10 = *(undefined4 *)(psVar19 + 0x3f);
  uVar3 = *(undefined4 *)(psVar19 + 0x41);
  uVar4 = *(undefined4 *)(psVar19 + 0x43);
  *(undefined4 *)(pWVar23 + 0x3d) = *(undefined4 *)(psVar19 + 0x3d);
  *(undefined4 *)(pWVar23 + 0x3f) = uVar10;
  *(undefined4 *)(pWVar23 + 0x41) = uVar3;
  *(undefined4 *)(pWVar23 + 0x43) = uVar4;
  WideCharToMultiByte(0,0x200,(LPCWSTR)(param_1 + 0x288),-1,(LPSTR)local_348,0x30a,(LPCSTR)0x0,
                      (LPBOOL)0x0);
  FUN_14000b1b4(param_1);
  FUN_140009d3c(param_1);
  plVar1 = (longlong *)(param_1 + 0x268);
  uVar25 = 0;
  uVar10 = FUN_14000f470(plVar1,L"Reset configuration to default",0);
  *(undefined4 *)(param_1 + 0x278) = uVar10;
  hMenu = (HMENU)*plVar1;
  if (hMenu == (HMENU)0x0) {
    hMenu = CreatePopupMenu();
    *plVar1 = (longlong)hMenu;
    if (hMenu == (HMENU)0x0) goto LAB_14000bb37;
  }
  *(int *)(param_1 + 0x270) = *(int *)(param_1 + 0x270) + 1;
  uVar25 = (ulonglong)*(uint *)(param_1 + 0x270);
  AppendMenuW(hMenu,0x800,uVar25,(LPCWSTR)0x0);
LAB_14000bb37:
  uVar10 = FUN_14000f470(plVar1,L"Show all sections of the configuration",
                         (uint)CONCAT71((int7)(uVar25 >> 8),*(undefined1 *)(param_1 + 0x490)));
  *(undefined4 *)(param_1 + 0x27c) = uVar10;
  uVar10 = FUN_14000f470(plVar1,L"Set global settings folder",0);
  *(undefined4 *)(param_1 + 0x280) = uVar10;
  uVar10 = FUN_14000f470(plVar1,L"Reset Cpl application config to default",0);
  *(undefined4 *)(param_1 + 0x284) = uVar10;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(longlong *)(param_1 + 0x150) = param_1 + 0x498;
  *(undefined4 *)(param_1 + 0x4f4) = 0x41e;
  *(longlong **)(param_1 + 0x500) = (longlong *)(param_1 + 0x150);
  *(uint *)(param_1 + 600) =
       *(uint *)(param_1 + 600) | 1 << ((byte)*(uint *)(param_1 + 0x25c) & 0x1f);
  *(wchar_t **)(param_1 + 0x1d8 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = L"General";
  *(longlong *)(param_1 + 0x158 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = param_1 + 0x5a8;
  *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + 1;
  *(uint *)(param_1 + 600) =
       *(uint *)(param_1 + 600) | 1 << ((byte)*(uint *)(param_1 + 0x25c) & 0x1f);
  *(wchar_t **)(param_1 + 0x1d8 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = L"Glide";
  *(longlong *)(param_1 + 0x158 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = param_1 + 0x6e0;
  *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + 1;
  *(uint *)(param_1 + 600) =
       *(uint *)(param_1 + 600) | 1 << ((byte)*(uint *)(param_1 + 0x25c) & 0x1f);
  *(wchar_t **)(param_1 + 0x1d8 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = L"DirectX";
  *(longlong *)(param_1 + 0x158 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = param_1 + 0x970;
  *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + 1;
  *(uint *)(param_1 + 600) =
       *(uint *)(param_1 + 600) | 1 << ((byte)*(uint *)(param_1 + 0x25c) & 0x1f);
  *(wchar_t **)(param_1 + 0x1d8 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = L"GeneralExt";
  *(longlong *)(param_1 + 0x158 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = param_1 + 0xc00;
  *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + 1;
  *(uint *)(param_1 + 600) =
       *(uint *)(param_1 + 600) | 1 << ((byte)*(uint *)(param_1 + 0x25c) & 0x1f);
  *(wchar_t **)(param_1 + 0x1d8 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = L"GlideExt";
  *(longlong *)(param_1 + 0x158 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = param_1 + 0xe80;
  *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + 1;
  *(uint *)(param_1 + 600) =
       *(uint *)(param_1 + 600) | 1 << ((byte)*(uint *)(param_1 + 0x25c) & 0x1f);
  *(wchar_t **)(param_1 + 0x1d8 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = L"DirectXExt";
  *(longlong *)(param_1 + 0x158 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = param_1 + 0xfa8;
  *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + 1;
  uVar8 = *(uint *)(param_1 + 0x25c);
  *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 1 << ((byte)uVar8 & 0x1f);
  *(wchar_t **)(param_1 + 0x1d8 + (ulonglong)uVar8 * 8) = L"Debug";
  *(longlong *)(param_1 + 0x158 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = param_1 + 0x11e8;
  *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + 1;
  FUN_14000b108(param_1,(ulonglong)CONCAT31((int3)(uVar8 >> 8),*(undefined1 *)(param_1 + 0x490)));
  SendMessageW(*(HWND *)(param_1 + 0x20),0x418,0,500);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x403,2,20000);
  FUN_14000eea0(param_1,0x402);
  FUN_14000eea0(param_1,0x3fd);
  FUN_14000eea0(param_1,0x3fb);
  FUN_14000eea0(param_1,0x3fe);
  FUN_14000eea0(param_1,0x3fa);
  FUN_14000eea0(param_1,0x3fc);
  if (uVar7 != *(uint *)(param_1 + 0x148)) {
    GetWindowRect(*(HWND *)(param_1 + 0x18),&local_358);
    FUN_14000ae8c(param_1,uVar7,&local_358.left);
  }
  *(undefined1 *)(param_1 + 0x1e28) = 1;
  uVar13 = FUN_14000a2e0(param_1);
  return CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
}


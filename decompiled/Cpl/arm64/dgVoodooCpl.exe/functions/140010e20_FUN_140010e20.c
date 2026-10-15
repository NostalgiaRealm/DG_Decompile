/*
 * FUN_140010e20 at 140010e20
 * undefined4 __cdecl FUN_140010e20(undefined8 * param_1)
 * Address ranges: 140010e20-140011117
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_140010e20(undefined8 *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  HMONITOR pHVar5;
  HWND pHVar6;
  HANDLE h;
  LRESULT LVar7;
  undefined8 *puVar8;
  UINT uCmd;
  SIZE_T SVar9;
  HFONT pHVar10;
  undefined4 uVar11;
  undefined4 local_e0;
  undefined4 uStack_dc;
  tagRECT local_d8;
  tagRECT local_c8;
  HWND local_b0;
  tagRECT tStack_a8;
  LRESULT LStack_98;
  LOGFONTW LStack_90;
  
  uVar11 = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_1 + 3);
  if (*(HWND *)(param_1[2] + 0x18) != (HWND)0x0) {
    GetClientRect(*(HWND *)(param_1[2] + 0x18),&local_c8);
    GetWindowRect(*(HWND *)(param_1[2] + 0x18),&local_d8);
    param_1[1] = 0;
    *(LONG *)((longlong)param_1 + 0x3c) = local_c8.right - local_c8.left;
    *(LONG *)(param_1 + 8) = local_c8.bottom - local_c8.top;
    *(LONG *)((longlong)param_1 + 0x44) =
         (local_d8.right - (local_c8.right - local_c8.left)) - local_d8.left;
    *(LONG *)(param_1 + 9) = (local_d8.bottom - (local_c8.bottom - local_c8.top)) - local_d8.top;
    hModule = LoadLibraryA("Shcore.dll");
    *param_1 = hModule;
    if (hModule != (HMODULE)0x0) {
      pFVar4 = GetProcAddress(hModule,"GetDpiForMonitor");
      param_1[1] = pFVar4;
    }
    if (param_1[1] != 0) {
      pHVar5 = MonitorFromRect(&local_d8,2);
      local_e0 = 0;
      uStack_dc = 0;
      iVar3 = (*(code *)param_1[1])(pHVar5,0,&local_e0,&uStack_dc);
      if (-1 < iVar3) {
        *(undefined4 *)((longlong)param_1 + 0x1c) = local_e0;
        *(undefined4 *)(param_1 + 0x12) = local_e0;
        uVar11 = local_e0;
      }
    }
    pHVar6 = GetParent(*(HWND *)(param_1[2] + 0x18));
    GetWindowRect(*(HWND *)(param_1[2] + 0x18),(LPRECT)(param_1 + 4));
    MapWindowPoints((HWND)0x0,pHVar6,(LPPOINT)(param_1 + 4),2);
    if (*(HWND *)(param_1[2] + 0x20) != (HWND)0x0) {
      pHVar10 = (HFONT)0x0;
      h = (HANDLE)SendMessageW(*(HWND *)(param_1[2] + 0x20),0x31,0,0);
      iVar3 = GetObjectW(h,0x5c,&LStack_90);
      if (iVar3 != 0) {
        pHVar10 = CreateFontIndirectW(&LStack_90);
      }
      param_1[6] = pHVar10;
      LVar7 = SendMessageW(*(HWND *)(param_1[2] + 0x20),0x419,0,0);
      *(int *)(param_1 + 7) = (int)LVar7;
    }
    uCmd = 5;
    pHVar6 = *(HWND *)(param_1[2] + 0x18);
    while (pHVar6 = GetWindow(pHVar6,uCmd), pHVar6 != (HWND)0x0) {
      local_b0 = pHVar6;
      GetWindowRect(pHVar6,&tStack_a8);
      MapWindowPoints((HWND)0x0,*(HWND *)(param_1[2] + 0x18),(LPPOINT)&tStack_a8,2);
      LStack_98 = SendMessageW(pHVar6,0x31,0,0);
      iVar3 = *(int *)((longlong)param_1 + 0x5c);
      if (*(int *)(param_1 + 0xb) == iVar3) {
        uVar1 = iVar3 << 1;
        if (iVar3 == 0) {
          uVar1 = 0x10;
        }
        SVar9 = CONCAT44(0,uVar1) << 5;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = CONCAT44(0,uVar1);
        if (SUB168(auVar2 * ZEXT816(0x20),8) != 0) {
          SVar9 = 0xffffffffffffffff;
        }
        puVar8 = (undefined8 *)thunk_FUN_1400247f0(SVar9);
        if (puVar8 == (undefined8 *)0x0) {
          thunk_FUN_140024830((undefined8 *)param_1[10]);
          param_1[10] = 0;
          param_1[0xb] = 0;
          return uVar11;
        }
        thunk_FUN_140001000(puVar8,(undefined8 *)param_1[10],
                            (ulonglong)*(uint *)((longlong)param_1 + 0x5c) << 5);
        thunk_FUN_140024830((LPVOID)param_1[10]);
        param_1[10] = puVar8;
        *(uint *)((longlong)param_1 + 0x5c) = uVar1;
      }
      uCmd = 2;
      puVar8 = (undefined8 *)(param_1[10] + (ulonglong)*(uint *)(param_1 + 0xb) * 0x20);
      puVar8[1] = tStack_a8._0_8_;
      *puVar8 = local_b0;
      puVar8[3] = LStack_98;
      puVar8[2] = tStack_a8._8_8_;
      *(int *)(param_1 + 0xb) = *(int *)(param_1 + 0xb) + 1;
    }
  }
  return uVar11;
}


/*
 * FUN_14000f670 at 14000f670
 * undefined4 __fastcall FUN_14000f670(undefined8 * param_1)
 * Address ranges: 14000f670-14000f95f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_14000f670(undefined8 *param_1)

{
  undefined4 *puVar1;
  LONG *pLVar2;
  longlong lVar3;
  int iVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  HMONITOR pHVar6;
  HWND pHVar7;
  HANDLE h;
  HFONT pHVar8;
  LRESULT LVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  tagRECT local_d8;
  tagRECT local_c8;
  undefined8 local_b8;
  tagRECT tStack_b0;
  undefined8 uStack_a0;
  LOGFONTW local_98;
  
  uVar13 = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_1 + 3);
  if (*(HWND *)(param_1[2] + 0x18) == (HWND)0x0) {
    return uVar13;
  }
  GetClientRect(*(HWND *)(param_1[2] + 0x18),&local_c8);
  GetWindowRect(*(HWND *)(param_1[2] + 0x18),&local_d8);
  pHVar8 = (HFONT)0x0;
  *(LONG *)((longlong)param_1 + 0x44) =
       (local_d8.right - (local_c8.right - local_c8.left)) - local_d8.left;
  *(LONG *)((longlong)param_1 + 0x3c) = local_c8.right - local_c8.left;
  *(LONG *)(param_1 + 9) = (local_d8.bottom - (local_c8.bottom - local_c8.top)) - local_d8.top;
  *(LONG *)(param_1 + 8) = local_c8.bottom - local_c8.top;
  param_1[1] = 0;
  hModule = LoadLibraryA("Shcore.dll");
  *param_1 = hModule;
  if (hModule != (HMODULE)0x0) {
    pFVar5 = GetProcAddress(hModule,"GetDpiForMonitor");
    param_1[1] = pFVar5;
  }
  if (param_1[1] != 0) {
    pHVar6 = MonitorFromRect(&local_d8,2);
    local_res8[0] = 0;
    local_res10[0] = 0;
    iVar4 = (*(code *)param_1[1])(pHVar6,0,local_res8,local_res10);
    if (-1 < iVar4) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = local_res8[0];
      *(undefined4 *)(param_1 + 0x12) = local_res8[0];
      uVar13 = local_res8[0];
    }
  }
  pHVar7 = GetParent(*(HWND *)(param_1[2] + 0x18));
  GetWindowRect(*(HWND *)(param_1[2] + 0x18),(LPRECT)(param_1 + 4));
  MapWindowPoints((HWND)0x0,pHVar7,(LPPOINT)(param_1 + 4),2);
  if (*(HWND *)(param_1[2] + 0x20) != (HWND)0x0) {
    h = (HANDLE)SendMessageW(*(HWND *)(param_1[2] + 0x20),0x31,0,0);
    iVar4 = GetObjectW(h,0x5c,&local_98);
    if (iVar4 != 0) {
      pHVar8 = CreateFontIndirectW(&local_98);
    }
    param_1[6] = pHVar8;
    LVar9 = SendMessageW(*(HWND *)(param_1[2] + 0x20),0x419,0,0);
    *(int *)(param_1 + 7) = (int)LVar9;
  }
  pHVar7 = GetWindow(*(HWND *)(param_1[2] + 0x18),5);
  do {
    if (pHVar7 == (HWND)0x0) {
      return uVar13;
    }
    local_b8 = pHVar7;
    GetWindowRect(pHVar7,&tStack_b0);
    MapWindowPoints((HWND)0x0,*(HWND *)(param_1[2] + 0x18),(LPPOINT)&tStack_b0,2);
    uStack_a0 = SendMessageW(pHVar7,0x31,0,0);
    iVar4 = *(int *)((longlong)param_1 + 0x5c);
    if (*(int *)(param_1 + 0xb) == iVar4) {
      if (iVar4 == 0) {
        uVar12 = 0x10;
      }
      else {
        uVar12 = iVar4 * 2;
      }
      uVar10 = SUB168(ZEXT816(0x20) * ZEXT416(uVar12),0);
      if (SUB168(ZEXT816(0x20) * ZEXT416(uVar12),8) != 0) {
        uVar10 = 0xffffffffffffffff;
      }
      puVar11 = (undefined8 *)thunk_FUN_14002423c(uVar10);
      if (puVar11 == (undefined8 *)0x0) {
        FUN_140024260((undefined8 *)param_1[10]);
        param_1[10] = 0;
        param_1[0xb] = 0;
        return uVar13;
      }
      FUN_140024620(puVar11,(undefined8 *)param_1[10],
                    (ulonglong)*(uint *)((longlong)param_1 + 0x5c) << 5);
      FUN_140024260((LPVOID)param_1[10]);
      param_1[10] = puVar11;
      *(uint *)((longlong)param_1 + 0x5c) = uVar12;
    }
    uVar12 = *(uint *)(param_1 + 0xb);
    lVar3 = param_1[10];
    puVar1 = (undefined4 *)(lVar3 + (ulonglong)uVar12 * 0x20);
    *puVar1 = (undefined4)local_b8;
    puVar1[1] = local_b8._4_4_;
    puVar1[2] = tStack_b0.left;
    puVar1[3] = tStack_b0.top;
    pLVar2 = (LONG *)(lVar3 + 0x10 + (ulonglong)uVar12 * 0x20);
    *pLVar2 = tStack_b0.right;
    pLVar2[1] = tStack_b0.bottom;
    pLVar2[2] = (LONG)uStack_a0;
    pLVar2[3] = uStack_a0._4_4_;
    *(int *)(param_1 + 0xb) = *(int *)(param_1 + 0xb) + 1;
    pHVar7 = GetWindow(pHVar7,2);
  } while( true );
}


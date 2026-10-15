/*
 * FUN_14000b210 at 14000b210
 * BOOL __cdecl FUN_14000b210(ulonglong param_1)
 * Address ranges: 14000b210-14000b897
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

BOOL FUN_14000b210(ulonglong param_1)

{
  wchar_t *pwVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  int iVar6;
  uint uVar7;
  BOOL BVar8;
  LPVOID pvVar9;
  HWND pHVar10;
  LRESULT LVar11;
  LPWSTR pWVar12;
  LPWSTR pWVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  int *piVar18;
  WCHAR *pWVar19;
  undefined4 *in_x7;
  uint uVar20;
  SIZE_T SVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint local_c90;
  undefined **local_c80;
  HANDLE local_c78;
  undefined1 local_c70;
  WCHAR local_c68 [260];
  WCHAR aWStack_a60 [260];
  WCHAR local_858 [1028];
  
  thunk_FUN_140001000((undefined8 *)(param_1 + 0x1520),(undefined8 *)(param_1 + 0x288),0x208);
  PathAppendW((LPWSTR)(param_1 + 0x1520),L"dgVoodoo.conf");
  thunk_FUN_140001000((undefined8 *)(param_1 + 0x1728),(undefined8 *)(param_1 + 0x288),0x208);
  PathAppendW((LPWSTR)(param_1 + 0x1728),L"dgVoodooSetupPaths.dat");
  FUN_140010038(param_1,0x402);
  local_c80 = &PTR_FUN_140028808;
  pWVar19 = (WCHAR *)0x0;
  local_c70 = 1;
  piVar18 = (int *)0x80;
  uVar17 = 3;
  local_c78 = CreateFileW((LPCWSTR)(param_1 + 0x1728),0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80
                          ,(HANDLE)0x0);
  DVar5 = FUN_14000f4c0((longlong)&local_c80);
  uVar20 = DVar5 / 0x208;
  if (0x800 < uVar20) {
    uVar20 = 0x800;
  }
  SVar21 = (ulonglong)(uVar20 * 0x41) << 3;
  if (SUB168(ZEXT416(uVar20 * 0x41) * (undefined1  [16])0x4 * ZEXT816(2),8) != 0) {
    SVar21 = 0xffffffffffffffff;
  }
  pvVar9 = (LPVOID)thunk_FUN_1400247f0(SVar21);
  if (pvVar9 != (LPVOID)0x0) {
    thunk_FUN_140024830(*(LPVOID *)(param_1 + 0x1b38));
    *(undefined8 *)(param_1 + 0x1b38) = 0;
    *(undefined8 *)(param_1 + 0x1b40) = 0;
    FUN_14000f380((longlong)&local_c80,uVar20 * 0x208,pvVar9,(DWORD *)0x0);
    uVar22 = 0;
    if (uVar20 != 0) {
      do {
        FUN_14000af60(param_1,(undefined8 *)((longlong)pvVar9 + (ulonglong)(uVar22 * 0x104) * 2),0,0
                      ,uVar17,piVar18,(longlong)pWVar19,in_x7);
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar20);
    }
    thunk_FUN_140024830(pvVar9);
  }
  FUN_14000f2c0(&local_c80);
  for (pHVar10 = FindWindowExW((HWND)0xfffffffffffffffd,(HWND)0x0,L"DGVOODOOCOMM",(LPCWSTR)0x0);
      pHVar10 != (HWND)0x0;
      pHVar10 = FindWindowExW((HWND)0xfffffffffffffffd,pHVar10,L"DGVOODOOCOMM",(LPCWSTR)0x0)) {
    SetLastError(0);
    SendMessageW(pHVar10,0x407,0,0);
    DVar5 = GetLastError();
    if (DVar5 == 0) {
      uVar25 = 0;
      pWVar19 = local_858;
      do {
        pWVar19[uVar25] = L"[Running] "[uVar25];
        uVar20 = (int)uVar25 + 1;
        uVar25 = (ulonglong)uVar20;
      } while (L"[Running] "[uVar25] != L'\0');
      local_858[uVar25] = L'\0';
      iVar6 = GetWindowTextW(pHVar10,local_858 + uVar20,0x400 - uVar20);
      if ((pHVar10 != (HWND)0x0) && (LVar11 = SendMessageW(pHVar10,0x40a,0,0), (int)LVar11 != 0)) {
        uVar25 = 0;
        do {
          pwVar1 = L" (already attached)" + uVar25;
          uVar17 = (ulonglong)(iVar6 + uVar20 + (int)uVar25);
          uVar22 = (int)uVar25 + 1;
          uVar25 = (ulonglong)uVar22;
          local_858[uVar17] = *pwVar1;
        } while (L" (already attached)"[uVar25] != L'\0');
        local_858[iVar6 + uVar20 + uVar22] = L'\0';
      }
      FUN_14000af60(param_1,(undefined8 *)local_858,(ulonglong)pHVar10,0,uVar17,piVar18,
                    (longlong)pWVar19,in_x7);
    }
  }
  uVar16 = 1;
  FUN_14000af60(param_1,(undefined8 *)(param_1 + 0x288),0,1,uVar17,piVar18,(longlong)pWVar19,in_x7);
  GetModuleFileNameW((HMODULE)0x0,local_c68,0x104);
  GetModuleFileNameW((HMODULE)0x0,aWStack_a60,0x104);
  PathRemoveFileSpecW(local_c68);
  PathRemoveFileSpecW(aWStack_a60);
  PathAppendW(aWStack_a60,L"dgVoodoo.conf");
  FUN_1400090b0((undefined8 *)local_858);
  puVar2 = (undefined4 *)(param_1 + 0x88);
  puVar15 = (undefined4 *)0x0;
  if (param_1 != 0) {
    puVar15 = puVar2;
  }
  uVar23 = 0;
  uVar20 = 0;
  uVar25 = FUN_140015870(local_858,aWStack_a60,puVar15);
  if ((uVar25 & 1) != 0) {
    uVar22 = *(uint *)(param_1 + 0x1b40);
    if (uVar22 != 0) {
      do {
        uVar7 = FUN_14000fd78(param_1,0x402,uVar23);
        uVar20 = (uint)uVar23;
        if (uVar7 < uVar22) {
          uVar25 = 0;
          lVar24 = *(longlong *)(param_1 + 0x1b38) + (ulonglong)uVar7 * 0x218;
          puVar3 = (ushort *)(lVar24 + 0x10);
          pWVar12 = CharUpperW((LPWSTR)(ulonglong)(ushort)local_c68[0]);
          pWVar13 = CharUpperW((LPWSTR)(ulonglong)*puVar3);
          if (pWVar13 == pWVar12) {
            do {
              if (puVar3[uVar25] == 0) break;
              uVar25 = (ulonglong)((int)uVar25 + 1);
              pWVar12 = CharUpperW((LPWSTR)(ulonglong)(ushort)local_c68[uVar25]);
              pWVar13 = CharUpperW((LPWSTR)(ulonglong)puVar3[uVar25]);
            } while (pWVar13 == pWVar12);
          }
          if ((*(short *)(lVar24 + uVar25 * 2 + 0x10) == 0) && (local_c68[uVar25] == L'\0')) {
            if (-1 < (int)uVar20) goto LAB_14000b72c;
            break;
          }
        }
        uVar23 = (ulonglong)(uVar20 + 1);
      } while (uVar20 + 1 < uVar22);
    }
    uVar16 = 1;
    FUN_14000ad30(param_1,(undefined8 *)local_c68,0,'\x01');
    uVar22 = *(uint *)(param_1 + 0x1b40);
    uVar25 = 0;
    uVar20 = 0xffffffff;
    if (uVar22 != 0) {
      local_c90 = 0xffffffff;
      do {
        uVar20 = FUN_14000fd78(param_1,0x402,uVar25);
        if (uVar20 < uVar22) {
          uVar23 = 0;
          lVar24 = *(longlong *)(param_1 + 0x1b38) + (ulonglong)uVar20 * 0x218;
          puVar3 = (ushort *)(lVar24 + 0x10);
          pWVar12 = CharUpperW((LPWSTR)(ulonglong)(ushort)local_c68[0]);
          pWVar13 = CharUpperW((LPWSTR)(ulonglong)*puVar3);
          if (pWVar13 == pWVar12) {
            do {
              if (puVar3[uVar23] == 0) break;
              uVar23 = (ulonglong)((int)uVar23 + 1);
              pWVar12 = CharUpperW((LPWSTR)(ulonglong)(ushort)local_c68[uVar23]);
              pWVar13 = CharUpperW((LPWSTR)(ulonglong)puVar3[uVar23]);
            } while (pWVar13 == pWVar12);
          }
          if ((*(short *)(lVar24 + uVar23 * 2 + 0x10) == 0) &&
             (uVar20 = (uint)uVar25, local_c68[uVar23] == L'\0')) break;
        }
        uVar7 = (uint)uVar25 + 1;
        uVar25 = (ulonglong)uVar7;
        uVar20 = local_c90;
      } while (uVar7 < uVar22);
    }
LAB_14000b72c:
    uVar20 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
  }
  FUN_14000fff0(param_1,0x402,uVar20);
  uVar25 = FUN_14000ffb8(param_1,0x402);
  uVar25 = FUN_14000fd78(param_1,0x402,uVar25 & 0xffffffff);
  thunk_FUN_140001000((undefined8 *)(param_1 + 0x1930),
                      (undefined8 *)
                      (*(longlong *)(param_1 + 0x1b38) + (uVar25 & 0xffffffff) * 0x218 + 0x10),0x104
                     );
  PathAppendW((LPWSTR)(param_1 + 0x1930),L"dgVoodoo.conf");
  puVar15 = (undefined4 *)0x0;
  if (param_1 != 0) {
    puVar15 = puVar2;
  }
  uVar25 = FUN_140015870(param_1 + 0x1b60,param_1 + 0x1930,puVar15);
  if ((uVar25 & 1) == 0) {
    FUN_140025250((undefined1 *)local_858,0,0x20c);
    puVar14 = (undefined8 *)FUN_1400090b0((undefined8 *)local_858);
    thunk_FUN_140001000((undefined8 *)(param_1 + 0x1b60),puVar14,0x20c);
  }
  else {
    puVar4 = (undefined4 *)0x0;
    if (param_1 != 0) {
      puVar4 = puVar2;
    }
    FUN_14001efa0(param_1 + 0x1b60,puVar4,puVar15,uVar16,uVar17,piVar18,pWVar19,in_x7);
  }
  FUN_140010070(param_1,0x402);
  uVar17 = FUN_14000ffb8(param_1,0x402);
  uVar17 = FUN_14000fd78(param_1,0x402,uVar17 & 0xffffffff);
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x1b38) + (uVar17 & 0xffffffff) * 0x218);
  pHVar10 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3fb);
  EnableWindow(pHVar10,(uint)(iVar6 == 0));
  pHVar10 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ed);
  BVar8 = EnableWindow(pHVar10,0);
  return BVar8;
}


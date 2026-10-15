/*
 * FUN_14000ad34 at 14000ad34
 * undefined __fastcall FUN_14000ad34(longlong param_1)
 * Address ranges: 14000ad34-14000ae88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000ad34(longlong param_1)

{
  DWORD DVar1;
  int iVar2;
  HWND hWnd;
  LRESULT LVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar7;
  WCHAR local_838 [1028];
  ulonglong uVar6;
  
  hWnd = FindWindowExW((HWND)0xfffffffffffffffd,(HWND)0x0,L"DGVOODOOCOMM",(LPCWSTR)0x0);
  do {
    if (hWnd == (HWND)0x0) {
      return;
    }
    SetLastError(0);
    SendMessageW(hWnd,0x407,0,0);
    DVar1 = GetLastError();
    uVar5 = 0;
    if (DVar1 == 0) {
      do {
        uVar4 = (int)uVar5 + 1;
        uVar6 = (ulonglong)uVar4;
        local_838[uVar5] = L"[Running] "[uVar5];
        uVar5 = uVar6;
      } while (L"[Running] "[uVar6] != L'\0');
      local_838[uVar6] = L'\0';
      iVar2 = GetWindowTextW(hWnd,local_838 + uVar6,0x400 - uVar4);
      if (hWnd == (HWND)0x0) {
        uVar4 = FUN_14000a708(param_1,(ushort *)local_838);
        if (uVar4 != 0xffffffff) goto LAB_14000ae56;
      }
      else {
        LVar3 = SendMessageW(hWnd,0x40a,0,0);
        if ((int)LVar3 != 0) {
          uVar5 = 0;
          do {
            uVar7 = (int)uVar5 + 1;
            local_838[iVar2 + uVar4 + (int)uVar5] = L" (already attached)"[uVar5];
            uVar5 = (ulonglong)uVar7;
          } while (L" (already attached)"[uVar7] != L'\0');
          local_838[iVar2 + uVar4 + uVar7] = L'\0';
        }
      }
      FUN_14000a9b8(param_1,(ushort *)local_838,(longlong)hWnd,'\0');
    }
LAB_14000ae56:
    hWnd = FindWindowExW((HWND)0xfffffffffffffffd,hWnd,L"DGVOODOOCOMM",(LPCWSTR)0x0);
  } while( true );
}


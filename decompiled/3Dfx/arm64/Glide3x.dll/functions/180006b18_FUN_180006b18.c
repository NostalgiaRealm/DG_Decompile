/*
 * FUN_180006b18 at 180006b18
 * HANDLE __cdecl FUN_180006b18(HWND param_1, UINT param_2, WPARAM param_3, HWND param_4, undefined8 param_5, int * param_6, longlong param_7, undefined4 * param_8)
 * Address ranges: 180006b18-180007007
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HANDLE FUN_180006b18(HWND param_1,UINT param_2,WPARAM param_3,HWND param_4,undefined8 param_5,
                    int *param_6,longlong param_7,undefined4 *param_8)

{
  bool bVar1;
  char cVar2;
  BOOL BVar3;
  uint uVar4;
  WNDPROC pWVar5;
  undefined8 uVar6;
  HANDLE hSourceProcessHandle;
  ulonglong *puVar7;
  longlong *plVar8;
  HANDLE pvVar9;
  HWND pHVar10;
  undefined8 extraout_x13;
  HANDLE hSourceHandle;
  ulonglong uVar11;
  DWORD local_710 [2];
  HANDLE local_708;
  undefined **local_700;
  undefined8 uStack_6f8;
  undefined1 local_6f0;
  undefined **local_6e8;
  undefined8 uStack_6e0;
  undefined4 local_6d8;
  undefined8 local_6d0;
  undefined4 local_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined1 local_698;
  undefined4 local_694;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined4 local_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined4 local_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined4 local_648;
  ulonglong local_640;
  wchar_t awStack_638 [508];
  undefined8 auStack_240 [66];
  
  pHVar10 = param_4;
  pWVar5 = FUN_180006148();
  BVar3 = IsWindow(*(HWND *)(pWVar5 + 0x3b0));
  bVar1 = BVar3 == 1;
  if (BVar3 == 1) {
    local_708 = (HANDLE)((ulonglong)local_708 & 0xffffffff00000000);
    GetWindowThreadProcessId(*(HWND *)(pWVar5 + 0x3b0),(LPDWORD)&local_708);
    bVar1 = (int)local_708 == *(int *)(pWVar5 + 0x3b8);
  }
  if ((*(longlong *)(pWVar5 + 0x3b0) == 0) || (bVar1)) {
    uVar4 = 0;
  }
  else {
    uVar6 = FUN_180006a98((longlong)pWVar5,1);
    uVar4 = (uint)(byte)uVar6;
  }
  local_710[0] = 0;
  GetWindowThreadProcessId(param_4,local_710);
  switch(param_2) {
  case 0x401:
    if ((*(longlong *)(pWVar5 + 0x3b0) == 0) && (param_4 != (HWND)0x0)) {
      if ((uVar4 == 0) &&
         (BVar3 = CreatePipe((PHANDLE)(pWVar5 + 0x3c0),(PHANDLE)(pWVar5 + 0x3c8),
                             (LPSECURITY_ATTRIBUTES)0x0,0), BVar3 != 0)) {
        *(HWND *)(pWVar5 + 0x3b0) = param_4;
        *(DWORD *)(pWVar5 + 0x3b8) = local_710[0];
        thunk_FUN_1800010d8((undefined8 *)(pWVar5 + 0x5dc),(undefined8 *)(pWVar5 + 0x800),0x20c);
        thunk_FUN_1800010d8((undefined8 *)(pWVar5 + 0x3d0),(undefined8 *)(pWVar5 + 0x800),0x20c);
        pWVar5[0x7e9] = (code)0x0;
      }
      pvVar9 = (HANDLE)((ulonglong)uVar4 ^ 1);
      goto LAB_180006fe4;
    }
    break;
  case 0x402:
    if ((*(HWND *)(pWVar5 + 0x3b0) == param_4) && (*(DWORD *)(pWVar5 + 0x3b8) == local_710[0])) {
      FUN_180006a98((longlong)pWVar5,(ulonglong)(param_3 == 0));
      goto LAB_180006c98;
    }
    break;
  case 0x403:
    if ((*(HWND *)(pWVar5 + 0x3b0) == param_4) && (*(DWORD *)(pWVar5 + 0x3b8) == local_710[0])) {
      pvVar9 = OpenProcess(0x40,0,(DWORD)param_3);
      hSourceHandle = *(HANDLE *)(pWVar5 + 0x3c0);
LAB_180006cd8:
      local_708 = (HANDLE)0x0;
      hSourceProcessHandle = GetCurrentProcess();
      DuplicateHandle(hSourceProcessHandle,hSourceHandle,pvVar9,&local_708,0,0,2);
      CloseHandle(pvVar9);
      pvVar9 = local_708;
      goto LAB_180006fe4;
    }
    break;
  case 0x404:
    if ((*(HWND *)(pWVar5 + 0x3b0) == param_4) && (*(DWORD *)(pWVar5 + 0x3b8) == local_710[0])) {
      pvVar9 = OpenProcess(0x40,0,(DWORD)param_3);
      hSourceHandle = *(HANDLE *)(pWVar5 + 0x3c8);
      goto LAB_180006cd8;
    }
    break;
  case 0x405:
    if ((*(HWND *)(pWVar5 + 0x3b0) == param_4) && (*(DWORD *)(pWVar5 + 0x3b8) == local_710[0])) {
      uStack_6f8 = *(undefined8 *)(pWVar5 + 0x3c8);
      local_6f0 = 0;
      local_700 = &PTR_FUN_180067d78;
      FUN_180041c20(pWVar5 + 0x800,(longlong *)&local_700);
      FUN_180038d40(&local_700);
      goto LAB_180006c98;
    }
    break;
  case 0x406:
    if ((*(HWND *)(pWVar5 + 0x3b0) == param_4) && (*(DWORD *)(pWVar5 + 0x3b8) == local_710[0])) {
      EnterCriticalSection((LPCRITICAL_SECTION)(pWVar5 + 0x388));
      FUN_180005f80(auStack_240);
      local_700 = &PTR_FUN_180067d78;
      local_6f0 = 0;
      uStack_6f8 = extraout_x13;
      uVar11 = FUN_18003f9f0((int *)(pWVar5 + 0x5dc),(longlong *)&local_700);
      if ((uVar11 & 1) == 0) {
        local_6e8 = &PTR_FUN_180067fd8;
        uStack_6e0 = 0;
        local_6d8 = 0;
        local_6d0 = 0;
        local_6c8 = 0;
        local_6c0 = 0;
        uStack_6b8 = 0;
        local_6b0 = 0;
        uStack_6a8 = 0;
        local_6a0 = 0;
        local_698 = 1;
        local_694 = 0;
        local_690 = 0;
        uStack_688 = 0;
        local_680 = 0;
        local_678 = 0;
        uStack_670 = 0;
        local_668 = 0;
        local_660 = 0;
        local_658 = 0;
        uStack_650 = 0;
        local_648 = 0;
        uVar4 = FUN_18003a580((longlong)&local_6e8,&local_700,1);
        if ((uVar4 & 1) != 0) {
          uVar4 = FUN_18003f2f8((undefined4 *)auStack_240,(longlong *)&local_6e8,0,pHVar10,param_5,
                                param_6,param_7,param_8);
          if ((uVar4 & 1) == 0) {
            FUN_180063e98((undefined1 *)&local_640,0,0x20c);
            puVar7 = (ulonglong *)FUN_180005f80(&local_640);
          }
          else {
            thunk_FUN_1800010d8(&local_640,auStack_240,0x20c);
            puVar7 = &local_640;
          }
          thunk_FUN_1800010d8((undefined8 *)(pWVar5 + 0x5dc),puVar7,0x20c);
        }
        FUN_18003a4b0(&local_6e8);
      }
      FUN_180038d40(&local_700);
      pWVar5[0x7e9] = (code)0x1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(pWVar5 + 0x388));
      goto LAB_180006c98;
    }
    break;
  case 0x407:
    local_640 = local_640 & 0xffffffffffff0000;
    if (*(int *)(pWVar5 + 0x138) == 0) {
      builtin_wcsncpy(awStack_638,L"nown, inactive)",0x10);
      local_640._0_2_ = L'(';
      local_640._2_2_ = L'U';
      local_640._4_2_ = L'n';
      local_640._6_2_ = L'k';
    }
    else {
      uVar11 = 0;
      do {
        cVar2 = (**(code **)(**(longlong **)(*(longlong *)(pWVar5 + 0x130) + uVar11 * 0x60 + 0x10) +
                            8))();
        if (cVar2 != '\0') goto LAB_180006f30;
        uVar4 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar4;
      } while (uVar4 < *(uint *)(pWVar5 + 0x138));
      uVar11 = 0;
LAB_180006f30:
      plVar8 = *(longlong **)(*(longlong *)(pWVar5 + 0x130) + uVar11 * 0x60 + 0x10);
      (**(code **)(*plVar8 + 0x18))(plVar8,&local_640,0x200);
    }
    SetWindowTextW(param_1,(LPCWSTR)&local_640);
LAB_180006c98:
    pvVar9 = (HANDLE)0x1;
    goto LAB_180006fe4;
  default:
    pvVar9 = (HANDLE)DefWindowProcW(param_1,param_2,param_3,(LPARAM)param_4);
    goto LAB_180006fe4;
  case 0x409:
    if ((*(HWND *)(pWVar5 + 0x3b0) == param_4) && (*(DWORD *)(pWVar5 + 0x3b8) == local_710[0])) {
      thunk_FUN_1800010d8((undefined8 *)(pWVar5 + 0x3d0),(undefined8 *)(pWVar5 + 0x5dc),0x20c);
      goto LAB_180006c98;
    }
    break;
  case 0x40a:
    pvVar9 = *(HANDLE *)(pWVar5 + 0x3b0);
    goto LAB_180006fe4;
  }
  pvVar9 = (HANDLE)0x0;
LAB_180006fe4:
  FUN_180006938((undefined8 *)pWVar5);
  return pvVar9;
}


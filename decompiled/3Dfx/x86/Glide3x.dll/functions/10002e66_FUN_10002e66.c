/*
 * FUN_10002e66 at 10002e66
 * uint __fastcall FUN_10002e66(void * param_1, HWND param_2, UINT param_3, HANDLE param_4, HWND param_5)
 * Address ranges: 10002e66-10003173
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10002e66(void *param_1,HWND param_2,UINT param_3,HANDLE param_4,HWND param_5)

{
  HWND lParam;
  char cVar1;
  BOOL BVar2;
  HANDLE hSourceProcessHandle;
  HANDLE hObject;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  undefined4 *puVar7;
  uint uVar8;
  WCHAR *pWVar9;
  HANDLE hSourceHandle;
  HANDLE hTargetProcessHandle;
  LPHANDLE lpTargetHandle;
  DWORD dwDesiredAccess;
  DWORD dwOptions;
  WCHAR local_41c [512];
  HWND local_1c;
  undefined **local_18;
  HANDLE local_14;
  char local_10;
  DWORD local_c;
  byte local_5;
  
  local_1c = param_2;
  local_5 = FUN_10002e07(param_1);
  lParam = param_5;
  local_c = 0;
  GetWindowThreadProcessId(param_5,&local_c);
  switch(param_3) {
  case 0x401:
    if ((*(int *)((int)param_1 + 0x330) == 0) && (lParam != (HWND)0x0)) {
      if ((local_5 == 0) &&
         (BVar2 = CreatePipe((PHANDLE)((int)param_1 + 0x338),(PHANDLE)((int)param_1 + 0x33c),
                             (LPSECURITY_ATTRIBUTES)0x0,0), BVar2 != 0)) {
        *(HWND *)((int)param_1 + 0x330) = lParam;
        *(DWORD *)((int)param_1 + 0x334) = local_c;
        *(undefined1 *)((int)param_1 + 0x759) = 0;
        puVar5 = (undefined4 *)((int)param_1 + 0x764);
        puVar7 = (undefined4 *)((int)param_1 + 0x54c);
        for (iVar4 = 0x83; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar5 = (undefined4 *)((int)param_1 + 0x764);
        puVar7 = (undefined4 *)((int)param_1 + 0x340);
        for (iVar4 = 0x83; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      return (uint)(local_5 ^ 1);
    }
    break;
  case 0x402:
    if ((*(HWND *)((int)param_1 + 0x330) == lParam) && (*(DWORD *)((int)param_1 + 0x334) == local_c)
       ) {
      FUN_10002d9a(param_1,param_4 == (HANDLE)0x0);
      return 1;
    }
    break;
  case 0x403:
    if ((*(HWND *)((int)param_1 + 0x330) == lParam) && (*(DWORD *)((int)param_1 + 0x334) == local_c)
       ) {
      hObject = OpenProcess(0x40,0,(DWORD)param_4);
      hSourceHandle = *(HANDLE *)((int)param_1 + 0x338);
LAB_10002f9e:
      lpTargetHandle = &param_4;
      dwOptions = 2;
      BVar2 = 0;
      dwDesiredAccess = 0;
      param_4 = (HANDLE)0x0;
      hTargetProcessHandle = hObject;
      hSourceProcessHandle = GetCurrentProcess();
      DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle,
                      dwDesiredAccess,BVar2,dwOptions);
      CloseHandle(hObject);
      return (uint)param_4;
    }
    break;
  case 0x404:
    if ((*(HWND *)((int)param_1 + 0x330) == lParam) && (*(DWORD *)((int)param_1 + 0x334) == local_c)
       ) {
      hObject = OpenProcess(0x40,0,(DWORD)param_4);
      hSourceHandle = *(HANDLE *)((int)param_1 + 0x33c);
      goto LAB_10002f9e;
    }
    break;
  case 0x405:
    if ((*(HWND *)((int)param_1 + 0x330) == lParam) && (*(DWORD *)((int)param_1 + 0x334) == local_c)
       ) {
      local_14 = *(HANDLE *)((int)param_1 + 0x33c);
      local_18 = &PTR_FUN_100562d8;
      local_10 = '\0';
      FUN_10033ae0((undefined4 *)((int)param_1 + 0x764),(int *)&local_18);
      local_18 = &PTR_FUN_100562d8;
      if (local_14 == (HANDLE)0x0) {
        return 1;
      }
      if (local_10 == '\0') {
        return 1;
      }
      CloseHandle(local_14);
      return 1;
    }
    break;
  case 0x406:
    if ((*(HWND *)((int)param_1 + 0x330) == lParam) && (*(DWORD *)((int)param_1 + 0x334) == local_c)
       ) {
      EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x318));
      FUN_1002c337((int *)((int)param_1 + 0x54c),*(HANDLE *)((int)param_1 + 0x338));
      *(undefined1 *)((int)param_1 + 0x759) = 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x318));
      return 1;
    }
    break;
  case 0x407:
    local_41c[0] = L'\0';
    if (*(int *)((int)param_1 + 0xd4) == 0) {
      pwVar6 = L"(Unknown, inactive)";
      pWVar9 = local_41c;
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pWVar9 = *(undefined4 *)pwVar6;
        pwVar6 = pwVar6 + 2;
        pWVar9 = pWVar9 + 2;
      }
    }
    else {
      uVar3 = 0;
      do {
        cVar1 = (**(code **)(**(int **)(*(int *)((int)param_1 + 0xd0) + 8 + uVar3 * 0x48) + 4))();
        uVar8 = uVar3;
        if (cVar1 != '\0') break;
        uVar3 = uVar3 + 1;
        uVar8 = 0;
      } while (uVar3 < *(uint *)((int)param_1 + 0xd4));
      (**(code **)(**(int **)(uVar8 * 0x48 + 8 + *(int *)((int)param_1 + 0xd0)) + 0xc))
                (local_41c,0x200);
    }
    SetWindowTextW(local_1c,local_41c);
    return 1;
  default:
    uVar3 = DefWindowProcW(param_2,param_3,(WPARAM)param_4,(LPARAM)lParam);
    return uVar3;
  case 0x409:
    if ((*(HWND *)((int)param_1 + 0x330) == lParam) && (*(DWORD *)((int)param_1 + 0x334) == local_c)
       ) {
      puVar5 = (undefined4 *)((int)param_1 + 0x54c);
      puVar7 = (undefined4 *)((int)param_1 + 0x340);
      for (iVar4 = 0x83; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      return 1;
    }
    break;
  case 0x40a:
    return *(uint *)((int)param_1 + 0x330);
  }
  return 0;
}


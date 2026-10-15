/*
 * FUN_1800045c4 at 1800045c4
 * ulonglong __fastcall FUN_1800045c4(longlong param_1, HWND param_2, ulonglong param_3, WPARAM param_4, HWND param_5)
 * Address ranges: 1800045c4-180004aab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800045c4(longlong param_1,HWND param_2,ulonglong param_3,WPARAM param_4,HWND param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char cVar8;
  BOOL BVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  HANDLE hTargetProcessHandle;
  HANDLE hSourceProcessHandle;
  UINT Msg;
  undefined8 *puVar13;
  uint uVar14;
  HANDLE hSourceHandle;
  longlong lVar15;
  longlong lVar16;
  DWORD local_res18 [4];
  HANDLE local_448;
  longlong local_440 [3];
  WCHAR local_428;
  wchar_t local_426 [511];
  
  uVar11 = param_3;
  uVar10 = FUN_180004548(param_1);
  local_res18[0] = 0;
  GetWindowThreadProcessId(param_5,local_res18);
  Msg = (UINT)param_3;
  if (Msg == 0x401) {
    if ((*(longlong *)(param_1 + 0x3b0) == 0) && (param_5 != (HWND)0x0)) {
      if (((char)uVar10 == '\0') &&
         (BVar9 = CreatePipe((PHANDLE)(param_1 + 0x3c0),(PHANDLE)(param_1 + 0x3c8),
                             (LPSECURITY_ATTRIBUTES)0x0,0), BVar9 != 0)) {
        lVar15 = 4;
        *(DWORD *)(param_1 + 0x3b8) = local_res18[0];
        *(HWND *)(param_1 + 0x3b0) = param_5;
        lVar16 = 4;
        puVar6 = (undefined8 *)(param_1 + 0x5dc);
        puVar7 = (undefined8 *)(param_1 + 0x800);
        do {
          puVar13 = puVar7;
          puVar12 = puVar6;
          uVar2 = puVar13[1];
          uVar3 = puVar13[2];
          uVar4 = puVar13[3];
          *puVar12 = *puVar13;
          puVar12[1] = uVar2;
          uVar2 = puVar13[4];
          uVar5 = puVar13[5];
          puVar12[2] = uVar3;
          puVar12[3] = uVar4;
          uVar3 = puVar13[6];
          uVar4 = puVar13[7];
          puVar12[4] = uVar2;
          puVar12[5] = uVar5;
          uVar2 = puVar13[8];
          uVar5 = puVar13[9];
          puVar12[6] = uVar3;
          puVar12[7] = uVar4;
          uVar3 = puVar13[10];
          uVar4 = puVar13[0xb];
          puVar12[8] = uVar2;
          puVar12[9] = uVar5;
          uVar2 = puVar13[0xc];
          uVar5 = puVar13[0xd];
          puVar12[10] = uVar3;
          puVar12[0xb] = uVar4;
          uVar3 = puVar13[0xe];
          uVar4 = puVar13[0xf];
          puVar12[0xc] = uVar2;
          puVar12[0xd] = uVar5;
          puVar12[0xe] = uVar3;
          puVar12[0xf] = uVar4;
          lVar16 = lVar16 + -1;
          puVar6 = puVar12 + 0x10;
          puVar7 = puVar13 + 0x10;
        } while (lVar16 != 0);
        uVar2 = *(undefined8 *)((longlong)puVar13 + 0x84);
        *(undefined8 *)((longlong)puVar12 + 0x7c) = *(undefined8 *)((longlong)puVar13 + 0x7c);
        *(undefined8 *)((longlong)puVar12 + 0x84) = uVar2;
        puVar6 = (undefined8 *)(param_1 + 0x800);
        puVar7 = (undefined8 *)(param_1 + 0x3d0);
        do {
          puVar13 = puVar7;
          puVar12 = puVar6;
          uVar2 = puVar12[1];
          uVar3 = puVar12[2];
          uVar4 = puVar12[3];
          *puVar13 = *puVar12;
          puVar13[1] = uVar2;
          uVar2 = puVar12[4];
          uVar5 = puVar12[5];
          puVar13[2] = uVar3;
          puVar13[3] = uVar4;
          uVar3 = puVar12[6];
          uVar4 = puVar12[7];
          puVar13[4] = uVar2;
          puVar13[5] = uVar5;
          uVar2 = puVar12[8];
          uVar5 = puVar12[9];
          puVar13[6] = uVar3;
          puVar13[7] = uVar4;
          uVar3 = puVar12[10];
          uVar4 = puVar12[0xb];
          puVar13[8] = uVar2;
          puVar13[9] = uVar5;
          uVar2 = puVar12[0xc];
          uVar5 = puVar12[0xd];
          puVar13[10] = uVar3;
          puVar13[0xb] = uVar4;
          uVar3 = puVar12[0xe];
          uVar4 = puVar12[0xf];
          puVar13[0xc] = uVar2;
          puVar13[0xd] = uVar5;
          puVar13[0xe] = uVar3;
          puVar13[0xf] = uVar4;
          lVar15 = lVar15 + -1;
          puVar6 = puVar12 + 0x10;
          puVar7 = puVar13 + 0x10;
        } while (lVar15 != 0);
        uVar2 = *(undefined8 *)((longlong)puVar12 + 0x7c);
        uVar3 = *(undefined8 *)((longlong)puVar12 + 0x84);
        *(undefined1 *)(param_1 + 0x7e9) = 0;
        *(undefined8 *)((longlong)puVar13 + 0x7c) = uVar2;
        *(undefined8 *)((longlong)puVar13 + 0x84) = uVar3;
      }
      return uVar10 & 0xff ^ 1;
    }
  }
  else if (Msg == 0x402) {
    if ((*(HWND *)(param_1 + 0x3b0) == param_5) && (*(DWORD *)(param_1 + 0x3b8) == local_res18[0]))
    {
      FUN_18000445c(param_1,param_4 == 0);
      return 1;
    }
  }
  else if (Msg == 0x403) {
    if ((*(HWND *)(param_1 + 0x3b0) == param_5) && (*(DWORD *)(param_1 + 0x3b8) == local_res18[0]))
    {
      hTargetProcessHandle = OpenProcess(0x40,0,(DWORD)param_4);
      hSourceHandle = *(HANDLE *)(param_1 + 0x3c0);
      goto LAB_1800048cf;
    }
  }
  else {
    if (Msg != 0x404) {
      if (Msg == 0x405) {
        if (*(HWND *)(param_1 + 0x3b0) != param_5) {
          return 0;
        }
        if (*(DWORD *)(param_1 + 0x3b8) != local_res18[0]) {
          return 0;
        }
        FUN_18005d800(local_440,*(undefined8 *)(param_1 + 0x3c8));
        FUN_18000f93c((undefined8 *)(param_1 + 0x800),local_440,uVar11);
        FUN_18005d920(local_440);
      }
      else if (Msg == 0x406) {
        if (*(HWND *)(param_1 + 0x3b0) != param_5) {
          return 0;
        }
        if (*(DWORD *)(param_1 + 0x3b8) != local_res18[0]) {
          return 0;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x388));
        FUN_180007598((int *)(param_1 + 0x5dc),*(undefined8 *)(param_1 + 0x3c0));
        *(undefined1 *)(param_1 + 0x7e9) = 1;
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x388));
      }
      else if (Msg == 0x407) {
        local_428 = L'\0';
        if (*(int *)(param_1 + 0x138) == 0) {
          local_428 = L'(';
          builtin_wcsncpy(local_426,L"Unknown, inactive)",0x13);
        }
        else {
          uVar11 = 0;
          do {
            cVar8 = (**(code **)(**(longlong **)
                                   (*(longlong *)(param_1 + 0x130) + 0x10 + uVar11 * 0x60) + 8))();
            if (cVar8 != '\0') goto LAB_180004755;
            uVar14 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar14;
          } while (uVar14 < *(uint *)(param_1 + 0x138));
          uVar11 = 0;
LAB_180004755:
          plVar1 = *(longlong **)(uVar11 * 0x60 + 0x10 + *(longlong *)(param_1 + 0x130));
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_428,0x200);
        }
        SetWindowTextW(param_2,&local_428);
      }
      else {
        if (Msg != 0x409) {
          if (Msg == 0x40a) {
            return *(ulonglong *)(param_1 + 0x3b0);
          }
          uVar11 = DefWindowProcW(param_2,Msg,param_4,(LPARAM)param_5);
          return uVar11;
        }
        if (*(HWND *)(param_1 + 0x3b0) != param_5) {
          return 0;
        }
        if (*(DWORD *)(param_1 + 0x3b8) != local_res18[0]) {
          return 0;
        }
        lVar15 = 4;
        puVar6 = (undefined8 *)(param_1 + 0x3d0);
        puVar7 = (undefined8 *)(param_1 + 0x5dc);
        do {
          puVar13 = puVar7;
          puVar12 = puVar6;
          uVar2 = puVar13[1];
          uVar3 = puVar13[2];
          uVar4 = puVar13[3];
          *puVar12 = *puVar13;
          puVar12[1] = uVar2;
          uVar2 = puVar13[4];
          uVar5 = puVar13[5];
          puVar12[2] = uVar3;
          puVar12[3] = uVar4;
          uVar3 = puVar13[6];
          uVar4 = puVar13[7];
          puVar12[4] = uVar2;
          puVar12[5] = uVar5;
          uVar2 = puVar13[8];
          uVar5 = puVar13[9];
          puVar12[6] = uVar3;
          puVar12[7] = uVar4;
          uVar3 = puVar13[10];
          uVar4 = puVar13[0xb];
          puVar12[8] = uVar2;
          puVar12[9] = uVar5;
          uVar2 = puVar13[0xc];
          uVar5 = puVar13[0xd];
          puVar12[10] = uVar3;
          puVar12[0xb] = uVar4;
          uVar3 = puVar13[0xe];
          uVar4 = puVar13[0xf];
          puVar12[0xc] = uVar2;
          puVar12[0xd] = uVar5;
          puVar12[0xe] = uVar3;
          puVar12[0xf] = uVar4;
          lVar15 = lVar15 + -1;
          puVar6 = puVar12 + 0x10;
          puVar7 = puVar13 + 0x10;
        } while (lVar15 != 0);
        uVar2 = *(undefined8 *)((longlong)puVar13 + 0x84);
        *(undefined8 *)((longlong)puVar12 + 0x7c) = *(undefined8 *)((longlong)puVar13 + 0x7c);
        *(undefined8 *)((longlong)puVar12 + 0x84) = uVar2;
      }
      return 1;
    }
    if ((*(HWND *)(param_1 + 0x3b0) == param_5) && (*(DWORD *)(param_1 + 0x3b8) == local_res18[0]))
    {
      hTargetProcessHandle = OpenProcess(0x40,0,(DWORD)param_4);
      hSourceHandle = *(HANDLE *)(param_1 + 0x3c8);
LAB_1800048cf:
      local_448 = (HANDLE)0x0;
      hSourceProcessHandle = GetCurrentProcess();
      DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,&local_448,0,0,2);
      CloseHandle(hTargetProcessHandle);
      return (ulonglong)local_448;
    }
  }
  return 0;
}


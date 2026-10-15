/*
 * FUN_100b8e33 at 100b8e33
 * undefined1 __thiscall FUN_100b8e33(void * this, int * param_1, int param_2, HMONITOR param_3)
 * Address ranges: 100b8e33-100b922e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_100b8e33(void *this,int *param_1,int param_2,HMONITOR param_3)

{
  int *piVar1;
  int *piVar2;
  HMONITOR pHVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  LONG LVar8;
  uint uVar9;
  BOOL BVar10;
  undefined1 uVar11;
  WCHAR *pWVar12;
  DWORD *pDVar13;
  DEVMODEW *pDVar14;
  DWORD *pDVar15;
  int *piVar16;
  undefined1 local_288 [88];
  HMONITOR local_230;
  DEVMODEW local_228;
  undefined1 local_148 [64];
  RECT local_108;
  HMONITOR local_f0;
  tagMONITORINFO local_e8;
  WCHAR local_c0 [34];
  DWORD local_7c [4];
  undefined4 local_6c;
  undefined4 local_54;
  int local_48;
  undefined4 local_44;
  DWORD local_40 [2];
  uint local_38;
  tagRECT local_34;
  LPCRITICAL_SECTION local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int *local_c [2];
  
  local_24 = (LPCRITICAL_SECTION)((int)this + 0x4a0);
  local_1c = this;
  EnterCriticalSection(local_24);
  pHVar3 = param_3;
  piVar2 = param_1;
  local_c[0] = (int *)0x0;
  local_14 = param_1[2] * 0x28;
  if ((((param_2 == 0) || (param_3 == (HMONITOR)0x0)) ||
      (cVar5 = (**(code **)(*(int *)this + 4))(param_1[2]), cVar5 != '\0')) ||
     (piVar16 = *(int **)(local_14 + 0x18 + (int)this),
     iVar7 = (**(code **)(*piVar16 + 0x1c))
                       (piVar16,(undefined1 *)((int)&pHVar3[-1].unused + 3),local_c), iVar7 < 0)) {
    local_c[0] = (int *)0x0;
  }
  iVar7 = param_2;
  local_20 = piVar2[0xd];
  local_10 = 0;
  if ((param_2 == 2) || (param_2 == 3)) {
    piVar2[0xd] = param_2;
    FUN_100b8103(piVar2,local_c[0],(int *)0x0);
    if (piVar2[0xd] != 3) {
      local_10 = (**(code **)(*(int *)piVar2[1] + 0x28))((int *)piVar2[1],1,local_c[0]);
      goto LAB_100b9134;
    }
    LVar8 = GetWindowLongW((HWND)*piVar2,-0x10);
    piVar2[0x34e] = LVar8;
    LVar8 = GetWindowLongW((HWND)*piVar2,-0x14);
    piVar2[0x34f] = LVar8;
    GetWindowRect((HWND)*piVar2,(LPCRECT)(piVar2 + 0x34a));
    if (local_c[0] == (int *)0x0) {
      local_230 = MonitorFromRect((LPCRECT)(piVar2 + 0x34a),2);
    }
    else {
      (**(code **)(*local_c[0] + 0x1c))(local_c[0],local_288);
    }
    pDVar14 = (DEVMODEW *)(piVar2 + 0x313);
    param_3 = local_230;
    FUN_100cfed0((int *)pDVar14,0,0xdc);
    local_e8.cbSize = 0x68;
    BVar10 = GetMonitorInfoW(param_3,&local_e8);
    if ((BVar10 != 0) && (BVar10 = EnumDisplaySettingsW(local_c0,0xffffffff,pDVar14), BVar10 != 0))
    {
      piVar16 = (int *)piVar2[1];
      pWVar12 = local_c0;
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined4 *)pDVar14->dmDeviceName = *(undefined4 *)pWVar12;
        pWVar12 = pWVar12 + 2;
        pDVar14 = (DEVMODEW *)(pDVar14->dmDeviceName + 2);
      }
      (**(code **)(*piVar16 + 0x30))(piVar16,local_7c);
      param_1 = (int *)0x0;
      piVar16 = piVar2 + 0x313;
      pDVar14 = &local_228;
      for (iVar7 = 0x37; iVar4 = local_14, this = local_1c, iVar7 != 0; iVar7 = iVar7 + -1) {
        *(int *)pDVar14->dmDeviceName = *piVar16;
        piVar16 = piVar16 + 1;
        pDVar14 = (DEVMODEW *)(pDVar14->dmDeviceName + 2);
      }
      if (local_c[0] == (int *)0x0) {
        local_18 = local_c[0];
        piVar16 = (int *)0x0;
        while (piVar1 = *(int **)(iVar4 + 0x18 + (int)this),
              iVar7 = (**(code **)(*piVar1 + 0x1c))(piVar1,piVar16,&param_1), piVar16 = local_c[0],
              -1 < iVar7) {
          (**(code **)(*param_1 + 0x1c))(param_1,local_148);
          piVar16 = param_1;
          if (local_f0 == param_3) break;
          (**(code **)(*param_1 + 8))(param_1);
          piVar16 = (int *)((int)local_18 + 1);
          local_18 = piVar16;
        }
        local_c[0] = piVar16;
        if (local_c[0] != (int *)0x0) goto LAB_100b903b;
      }
      else {
LAB_100b903b:
        iVar7 = (**(code **)(*local_c[0] + 0x24))(local_c[0],local_7c,local_40,0);
        if (iVar7 < 0) {
          pDVar13 = local_7c;
          pDVar15 = local_40;
          for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
            *pDVar15 = *pDVar13;
            pDVar13 = pDVar13 + 1;
            pDVar15 = pDVar15 + 1;
          }
        }
        if (local_34.left == 0) {
          local_228.dmDisplayFrequency = 0;
        }
        else {
          local_228.dmDisplayFrequency = local_38 / (uint)local_34.left;
        }
        local_228.dmPelsWidth = local_40[0];
        local_228.dmPelsHeight = local_40[1];
        local_228.dmFields = 0x180000;
        if (local_228.dmDisplayFrequency != 0) {
          local_228.dmFields = 0x580000;
        }
        ChangeDisplaySettingsExW(local_c0,&local_228,(HWND)0x0,4,(LPVOID)0x0);
        GetMonitorInfoW(param_3,&local_e8);
        SetWindowLongW((HWND)*piVar2,-0x10,-0x70000000);
        SetWindowLongW((HWND)*piVar2,-0x14,0x40000);
        SetWindowPos((HWND)*piVar2,(HWND)0xfffffffe,local_e8.rcMonitor.left,local_e8.rcMonitor.top,
                     local_e8.rcMonitor.right - local_e8.rcMonitor.left,
                     local_e8.rcMonitor.bottom - local_e8.rcMonitor.top,0x10);
        this = local_1c;
      }
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
        local_c[0] = (int *)0x0;
        iVar7 = param_2;
        goto LAB_100b9134;
      }
    }
  }
  else {
    local_10 = FUN_100b8225(piVar2);
    FUN_100b8103(piVar2,local_c[0],(int *)0x0);
LAB_100b9134:
    if (local_10 < 0) {
      piVar2[0xd] = local_20;
      if ((((iVar7 == 2) && (local_c[0] != (int *)0x0)) &&
          (iVar7 = (**(code **)(*local_c[0] + 0x1c))(local_c[0],local_148), -1 < iVar7)) &&
         (uVar9 = GetWindowLongW((HWND)*piVar2,-0x10), (uVar9 & 0x80c80000) == 0x80000000)) {
        GetWindowRect((HWND)*piVar2,&local_34);
        BVar10 = EqualRect(&local_34,&local_108);
        if (BVar10 == 0) goto LAB_100b9194;
      }
      else {
LAB_100b9194:
        FUN_100b8103(piVar2,local_c[0],(int *)0x0);
        (**(code **)(*(int *)this + 0x38))(piVar2);
      }
      uVar11 = 0;
      goto LAB_100b9210;
    }
  }
  iVar7 = (**(code **)(*(int *)piVar2[1] + 0x30))((int *)piVar2[1],local_7c);
  if ((-1 < iVar7) && ((local_48 == 4 || (local_48 == 3)))) {
    (**(code **)(*(int *)this + 0x10))(piVar2);
    (**(code **)(*(int *)piVar2[1] + 0x34))
              ((int *)piVar2[1],local_54,local_7c[0],local_7c[1],local_6c,local_44);
    (**(code **)(*(int *)this + 0xc))(piVar2,0);
  }
  bVar6 = FUN_100b7fa0(piVar2);
  *(bool *)((int)piVar2 + 0xd5d) = bVar6;
  *(undefined1 *)((int)piVar2 + 0xd5e) = 0;
  (**(code **)(*(int *)this + 0x38))(piVar2);
  uVar11 = 1;
LAB_100b9210:
  if (local_c[0] != (int *)0x0) {
    (**(code **)(*local_c[0] + 8))(local_c[0]);
  }
  LeaveCriticalSection(local_24);
  return uVar11;
}


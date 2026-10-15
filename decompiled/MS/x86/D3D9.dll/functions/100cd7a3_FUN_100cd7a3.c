/*
 * FUN_100cd7a3 at 100cd7a3
 * undefined __stdcall FUN_100cd7a3(HWND param_1, int param_2, int param_3, int param_4, char param_5)
 * Address ranges: 100cd7a3-100cd937
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100cd7a3(HWND param_1,int param_2,int param_3,int param_4,char param_5)

{
  DWORD dwExStyle;
  DWORD dwStyle;
  HMONITOR hMonitor;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  tagMONITORINFO *ptVar5;
  BOOL BVar6;
  tagMONITORINFO local_44;
  tagRECT local_1c;
  uint local_c;
  
  local_1c.right = param_3;
  local_1c.left = 0;
  local_1c.top = 0;
  local_1c.bottom = param_4;
  if ((param_3 == 0) || (param_4 == 0)) {
    GetWindowRect(param_1,&local_1c);
    local_c = 0x615;
  }
  else {
    MapWindowPoints(param_1,(HWND)0x0,(LPPOINT)&local_1c,2);
    dwExStyle = GetWindowLongW(param_1,-0x14);
    BVar6 = 0;
    dwStyle = GetWindowLongW(param_1,-0x10);
    AdjustWindowRectEx(&local_1c,dwStyle,BVar6,dwExStyle);
    local_c = 0x614;
  }
  param_4 = 0;
  param_3 = 0;
  if (param_5 == '\0') {
    iVar2 = GetSystemMetrics(0x4c);
    iVar1 = GetSystemMetrics(0x4d);
    if (iVar2 > local_1c.left) {
      param_4 = iVar2 - local_1c.left;
    }
    uVar3 = (uint)(iVar2 <= local_1c.left);
    if (local_1c.top < iVar1) {
      param_3 = iVar1 - local_1c.top;
      uVar3 = 0;
    }
  }
  else {
    hMonitor = MonitorFromWindow(param_1,2);
    uVar3 = 1;
    if (hMonitor != (HMONITOR)0x0) {
      local_44.cbSize = 0x28;
      ptVar5 = &local_44;
      for (iVar2 = 9; ptVar5 = (tagMONITORINFO *)&ptVar5->rcMonitor, iVar2 != 0; iVar2 = iVar2 + -1)
      {
        ((RECT *)ptVar5)->left = 0;
      }
      BVar6 = GetMonitorInfoW(hMonitor,&local_44);
      if (BVar6 != 0) {
        local_1c.right = local_1c.right - local_1c.left;
        local_1c.bottom = local_1c.bottom - local_1c.top;
        local_1c.left =
             ((local_44.rcMonitor.right - local_44.rcMonitor.left) - local_1c.right) / 2 +
             local_44.rcMonitor.left;
        local_1c.top = ((local_44.rcMonitor.bottom - local_44.rcMonitor.top) - local_1c.bottom) / 2
                       + local_44.rcMonitor.top;
        local_1c.right = local_1c.left + local_1c.right;
        local_1c.bottom = local_1c.bottom + local_1c.top;
        if (local_1c.left < local_44.rcMonitor.left) {
          param_4 = local_44.rcMonitor.left - local_1c.left;
        }
        if (local_1c.top < local_44.rcMonitor.top) {
          param_3 = local_44.rcMonitor.top - local_1c.top;
        }
        uVar3 = 0;
      }
    }
  }
  OffsetRect(&local_1c,param_4,param_3);
  uVar4 = 1;
  if (*(char *)(param_2 + 0x2c) == '\0') {
    uVar4 = uVar3;
  }
  SetWindowPos(param_1,(HWND)0x0,local_1c.left,local_1c.top,local_1c.right - local_1c.left,
               local_1c.bottom - local_1c.top,uVar4 * 2 | local_c);
  return;
}


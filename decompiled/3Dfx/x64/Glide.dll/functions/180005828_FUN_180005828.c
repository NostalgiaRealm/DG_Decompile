/*
 * FUN_180005828 at 180005828
 * undefined __fastcall FUN_180005828(undefined8 param_1, HWND param_2, longlong param_3, int param_4, int param_5, char param_6)
 * Address ranges: 180005828-180005a04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180005828(undefined8 param_1,HWND param_2,longlong param_3,int param_4,int param_5,
                  char param_6)

{
  DWORD dwExStyle;
  DWORD dwStyle;
  BOOL BVar1;
  int iVar2;
  int iVar3;
  HMONITOR hMonitor;
  int dy;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int dx;
  tagRECT local_88;
  tagMONITORINFO local_78;
  
  dx = 0;
  uVar4 = 0;
  local_88.left = 0;
  local_88.top = 0;
  local_88.bottom = param_5;
  local_88.right = param_4;
  if ((param_4 == 0) || (param_5 == 0)) {
    GetWindowRect(param_2,&local_88);
    uVar6 = 0x615;
  }
  else {
    MapWindowPoints(param_2,(HWND)0x0,(LPPOINT)&local_88,2);
    dwExStyle = GetWindowLongW(param_2,-0x14);
    dwStyle = GetWindowLongW(param_2,-0x10);
    AdjustWindowRectEx(&local_88,dwStyle,0,dwExStyle);
    uVar6 = 0x614;
  }
  dy = 0;
  if (param_6 == '\0') {
    iVar2 = GetSystemMetrics(0x4c);
    iVar3 = GetSystemMetrics(0x4d);
    if (iVar2 > local_88.left) {
      dx = iVar2 - local_88.left;
    }
    uVar4 = (uint)(iVar2 <= local_88.left);
    if (local_88.top < iVar3) {
      dy = iVar3 - local_88.top;
      uVar4 = 0;
    }
  }
  else {
    hMonitor = MonitorFromWindow(param_2,2);
    if (hMonitor != (HMONITOR)0x0) {
      local_78.cbSize = 0x28;
      local_78.dwFlags = 0;
      local_78.rcMonitor.left = 0;
      local_78.rcMonitor.top = 0;
      local_78.rcMonitor.right = 0;
      local_78.rcMonitor.bottom = 0;
      local_78.rcWork.left = 0;
      local_78.rcWork.top = 0;
      local_78.rcWork.right = 0;
      local_78.rcWork.bottom = 0;
      BVar1 = GetMonitorInfoW(hMonitor,&local_78);
      if (BVar1 != 0) {
        local_88.right = local_88.right - local_88.left;
        local_88.bottom = local_88.bottom - local_88.top;
        local_88.left =
             ((local_78.rcMonitor.right - local_78.rcMonitor.left) - local_88.right) / 2 +
             local_78.rcMonitor.left;
        local_88.top = ((local_78.rcMonitor.bottom - local_78.rcMonitor.top) - local_88.bottom) / 2
                       + local_78.rcMonitor.top;
        local_88.right = local_88.left + local_88.right;
        local_88.bottom = local_88.top + local_88.bottom;
        if (local_88.left < local_78.rcMonitor.left) {
          dx = local_78.rcMonitor.left - local_88.left;
        }
        if (local_88.top < local_78.rcMonitor.top) {
          dy = local_78.rcMonitor.top - local_88.top;
        }
        goto LAB_1800059a9;
      }
    }
    uVar4 = 1;
  }
LAB_1800059a9:
  OffsetRect(&local_88,dx,dy);
  uVar5 = 1;
  if (*(char *)(param_3 + 0x44) == '\0') {
    uVar5 = uVar4;
  }
  SetWindowPos(param_2,(HWND)0x0,local_88.left,local_88.top,local_88.right - local_88.left,
               local_88.bottom - local_88.top,uVar5 * 2 | uVar6);
  return;
}


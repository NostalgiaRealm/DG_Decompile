/*
 * FUN_180007de0 at 180007de0
 * undefined __cdecl FUN_180007de0(undefined8 param_1, HWND param_2, longlong param_3, int param_4, int param_5, ulonglong param_6)
 * Address ranges: 180007de0-180008003
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180007de0(undefined8 param_1,HWND param_2,longlong param_3,int param_4,int param_5,
                  ulonglong param_6)

{
  DWORD dwExStyle;
  DWORD dwStyle;
  BOOL BVar1;
  int iVar2;
  int iVar3;
  HMONITOR hMonitor;
  int dy;
  int dx;
  uint uVar4;
  uint uVar5;
  tagRECT local_70;
  tagMONITORINFO local_60;
  
  local_70.left = 0;
  local_70.top = 0;
  local_70.right = param_4;
  local_70.bottom = param_5;
  if ((param_4 == 0) || (param_5 == 0)) {
    GetWindowRect(param_2,&local_70);
    uVar4 = 0x615;
  }
  else {
    MapWindowPoints(param_2,(HWND)0x0,(LPPOINT)&local_70,2);
    dwExStyle = GetWindowLongW(param_2,-0x14);
    dwStyle = GetWindowLongW(param_2,-0x10);
    AdjustWindowRectEx(&local_70,dwStyle,0,dwExStyle);
    uVar4 = 0x614;
  }
  dx = 0;
  dy = 0;
  if ((param_6 & 1) == 0) {
    iVar2 = GetSystemMetrics(0x4c);
    iVar3 = GetSystemMetrics(0x4d);
    if (iVar2 > local_70.left) {
      dx = iVar2 - local_70.left;
    }
    uVar5 = (uint)(iVar2 <= local_70.left);
    if (iVar3 <= local_70.top) goto LAB_180007fa4;
    dy = iVar3 - local_70.top;
LAB_180007fa0:
    uVar5 = 0;
  }
  else {
    hMonitor = MonitorFromWindow(param_2,2);
    if (hMonitor != (HMONITOR)0x0) {
      local_60.cbSize = 0x28;
      local_60.rcMonitor.right = 0;
      local_60.rcMonitor.bottom = 0;
      local_60.rcMonitor.left = 0;
      local_60.rcMonitor.top = 0;
      local_60.rcWork.right = 0;
      local_60.rcWork.bottom = 0;
      local_60.rcWork.left = 0;
      local_60.rcWork.top = 0;
      local_60.dwFlags = 0;
      BVar1 = GetMonitorInfoW(hMonitor,&local_60);
      if (BVar1 != 0) {
        iVar2 = local_60.rcMonitor.left +
                ((local_60.rcMonitor.right - local_60.rcMonitor.left) -
                (local_70.right - local_70.left)) / 2;
        local_70.right = iVar2 + (local_70.right - local_70.left);
        iVar3 = local_60.rcMonitor.top +
                ((local_60.rcMonitor.bottom - local_60.rcMonitor.top) -
                (local_70.bottom - local_70.top)) / 2;
        local_70.bottom = iVar3 + (local_70.bottom - local_70.top);
        local_70.top = iVar3;
        local_70.left = iVar2;
        if (iVar2 < local_60.rcMonitor.left) {
          dx = local_60.rcMonitor.left - iVar2;
        }
        if (iVar3 < local_60.rcMonitor.top) {
          dy = local_60.rcMonitor.top - iVar3;
        }
        goto LAB_180007fa0;
      }
    }
    uVar5 = 1;
  }
LAB_180007fa4:
  OffsetRect(&local_70,dx,dy);
  if (*(char *)(param_3 + 0x44) != '\0') {
    uVar5 = 1;
  }
  SetWindowPos(param_2,(HWND)0x0,local_70.left,local_70.top,local_70.right - local_70.left,
               local_70.bottom - local_70.top,uVar4 | uVar5 << 1);
  return;
}


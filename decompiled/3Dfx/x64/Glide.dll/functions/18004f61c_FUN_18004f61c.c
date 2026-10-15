/*
 * FUN_18004f61c at 18004f61c
 * undefined __fastcall FUN_18004f61c(longlong * param_1, undefined8 * param_2, int * param_3, char param_4)
 * Address ranges: 18004f61c-18004f77d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f61c(longlong *param_1,undefined8 *param_2,int *param_3,char param_4)

{
  int iVar1;
  BOOL BVar2;
  longlong *local_res8;
  tagRECT local_c8;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  tagRECT local_a8;
  tagMONITORINFO local_98;
  undefined1 local_68 [88];
  HMONITOR local_10;
  
  if (param_4 == '\0') {
    local_res8 = param_1;
    GetWindowRect((HWND)*param_2,&local_a8);
    GetClientRect((HWND)*param_2,&local_c8);
    SetWindowPos((HWND)*param_2,(HWND)0x0,0,0,
                 ((*param_3 - local_a8.left) - local_c8.right) + local_a8.right + local_c8.left,
                 ((param_3[1] - local_a8.top) - local_c8.bottom) + local_a8.bottom + local_c8.top,
                 0x216);
  }
  else {
    local_c8.left = *param_3;
    local_c8.top = param_3[1];
    local_c8.right = param_3[2];
    local_res8 = (longlong *)0x0;
    local_c8.bottom = param_3[3];
    iStack_b8 = param_3[4];
    iStack_b4 = param_3[5];
    iStack_b0 = param_3[6];
    iVar1 = (**(code **)(*(longlong *)param_2[1] + 0x78))((longlong *)param_2[1],&local_res8);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*local_res8 + 0x38))(local_res8,local_68);
      if (-1 < iVar1) {
        local_98.rcMonitor.top = 0;
        local_98.rcMonitor.right = 0;
        local_98.cbSize = 0x28;
        local_98.rcMonitor.left = 0;
        local_98.rcMonitor.bottom = 0;
        local_98.rcWork.left = 0;
        local_98.rcWork.top = 0;
        local_98.rcWork.right = 0;
        local_98.rcWork.bottom = 0;
        local_98.dwFlags = 0;
        BVar2 = GetMonitorInfoW(local_10,&local_98);
        if (BVar2 != 0) {
          local_c8.left = local_98.rcMonitor.right - local_98.rcMonitor.left;
          local_c8.top = local_98.rcMonitor.bottom - local_98.rcMonitor.top;
        }
      }
      (**(code **)(*local_res8 + 0x10))();
    }
    (**(code **)(*(longlong *)param_2[1] + 0x70))((longlong *)param_2[1],&local_c8);
  }
  (**(code **)(*(longlong *)param_2[1] + 0x68))
            ((longlong *)param_2[1],2,*param_3,param_3[1],param_3[4],
             (-(uint)(*(char *)((longlong)param_2 + 0xd6c) != '\0') & 0x800) + 2);
  return;
}


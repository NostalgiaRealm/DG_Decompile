/*
 * FUN_180055b70 at 180055b70
 * undefined __cdecl FUN_180055b70(longlong * param_1, undefined8 * param_2, longlong * param_3, char param_4)
 * Address ranges: 180055b70-180055f2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180055b70(longlong *param_1,undefined8 *param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  LONG LVar2;
  LONG LVar3;
  bool bVar4;
  int iVar5;
  BOOL BVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 local_250;
  int local_248;
  int iStack_244;
  DWORD local_240;
  DWORD DStack_23c;
  DWORD DStack_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  tagRECT local_220;
  tagMONITORINFO local_210;
  DWORD local_1e0;
  DWORD DStack_1dc;
  LONG LStack_1d8;
  LONG LStack_1d4;
  ulonglong local_1d0;
  undefined4 local_1c8;
  WCHAR aWStack_190 [44];
  HMONITOR local_138;
  DEVMODEW DStack_130;
  
  (**(code **)(*(longlong *)param_2[1] + 0x60))((longlong *)param_2[1],&local_1e0);
  local_220.right = LStack_1d8;
  local_220.bottom = LStack_1d4;
  DStack_238 = LStack_1d8;
  uStack_234 = LStack_1d4;
  if ((*(int *)((longlong)param_2 + 0x3c) == 1) ||
     ((*(int *)((longlong)param_2 + 0x3c) - 2U < 2 && (*(int *)(param_2 + 6) - 1U < 2)))) {
    local_250 = param_3;
    if (param_3 == (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[1] + 0x78))((longlong *)param_2[1],&local_250);
    }
    plVar1 = local_250;
    if (local_250 != (longlong *)0x0) {
      (**(code **)(*local_250 + 8))(local_250);
    }
    DStack_130.dmSize = 0xdc;
    DStack_130.dmDriverExtra = 0;
    if (plVar1 == (longlong *)0x0) {
      EnumDisplaySettingsW((LPCWSTR)0x0,0xffffffff,&DStack_130);
    }
    else {
      (**(code **)(*plVar1 + 0x38))(plVar1,aWStack_190);
      EnumDisplaySettingsW(aWStack_190,0xffffffff,&DStack_130);
      uStack_22c = 1;
      local_228 = 0;
      _DStack_238 = CONCAT44(1,DStack_130.dmDisplayFrequency);
      local_230 = *(undefined4 *)(&DAT_180065fb8 + (ulonglong)*(uint *)(param_1 + 0xcf) * 4);
      (**(code **)(*plVar1 + 0x48))(plVar1,&local_240,&local_210,0);
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    if ((*(DWORD *)(param_1 + 0xcd) == 0) ||
       (DVar9 = *(DWORD *)((longlong)param_1 + 0x66c), DVar10 = *(DWORD *)(param_1 + 0xcd),
       *(DWORD *)((longlong)param_1 + 0x66c) == 0)) {
      DVar9 = DStack_130.dmPelsHeight;
      DVar10 = DStack_130.dmPelsWidth;
    }
    uVar8 = 0;
    DStack_238 = local_220.right;
    uStack_234 = local_220.bottom;
    local_220.left = DVar10;
    local_220.top = DVar9;
    local_240 = DVar10;
    DStack_23c = DVar9;
    if (local_250 != param_3) {
      (**(code **)(*local_250 + 0x10))();
    }
  }
  else {
    DVar10 = *(DWORD *)(param_2 + 3);
    DVar9 = *(DWORD *)((longlong)param_2 + 0x1c);
    local_220.right = LStack_1d8;
    local_220.bottom = LStack_1d4;
    uVar8 = local_1c8;
    local_220.left = DVar10;
    local_220.top = DVar9;
    local_240 = DVar10;
    DStack_23c = DVar9;
  }
  LVar3 = local_220.top;
  LVar2 = local_220.left;
  if ((local_1e0 != DVar10) || (DStack_1dc != DVar9 || param_4 != '\0')) {
    uVar7 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
    bVar4 = FUN_180055b00(uVar7,(longlong)param_2);
    if (bVar4) {
      local_230 = (undefined4)local_1d0;
      uStack_22c = (undefined4)(local_1d0 >> 0x20);
      local_250 = (longlong *)0x0;
      DStack_238 = local_220.right;
      uStack_234 = local_220.bottom;
      local_240 = local_220.left;
      DStack_23c = local_220.top;
      local_228 = uVar8;
      iVar5 = (**(code **)(*(longlong *)param_2[1] + 0x78))((longlong *)param_2[1],&local_250);
      if (-1 < iVar5) {
        iVar5 = (**(code **)(*local_250 + 0x38))(local_250,aWStack_190);
        if (-1 < iVar5) {
          local_210.rcMonitor.top = 0;
          local_210.rcMonitor.right = 0;
          local_210.rcWork.top = 0;
          local_210.rcWork.right = 0;
          local_210.rcMonitor.bottom = 0;
          local_210.rcWork.left = 0;
          local_210.cbSize = 0x28;
          local_210.rcMonitor.left = 0;
          local_210.rcWork.bottom = 0;
          local_210.dwFlags = 0;
          BVar6 = GetMonitorInfoW(local_138,&local_210);
          if (BVar6 != 0) {
            local_240 = local_210.rcMonitor.right - local_210.rcMonitor.left;
            DStack_23c = local_210.rcMonitor.bottom - local_210.rcMonitor.top;
          }
        }
        (**(code **)(*local_250 + 0x10))();
      }
      (**(code **)(*(longlong *)param_2[1] + 0x70))((longlong *)param_2[1],&local_240);
    }
    else {
      GetWindowRect((HWND)*param_2,(LPRECT)&local_250);
      GetClientRect((HWND)*param_2,&local_220);
      SetWindowPos((HWND)*param_2,(HWND)0x0,0,0,
                   ((local_248 - (int)local_250) - local_220.right) + local_220.left + LVar2,
                   ((iStack_244 - local_250._4_4_) - local_220.bottom) + local_220.top + LVar3,0x216
                  );
    }
    uVar8 = 0x802;
    if (*(char *)((longlong)param_2 + 0xd6c) == '\0') {
      uVar8 = 2;
    }
    (**(code **)(*(longlong *)param_2[1] + 0x68))
              ((longlong *)param_2[1],2,LVar2,LVar3,local_1d0 & 0xffffffff,uVar8);
    (**(code **)(*param_1 + 0x18))(param_1,param_2,0);
    (**(code **)(*(longlong *)param_1[0xd1] + 0x40))((longlong *)param_1[0xd1],*param_2,1);
  }
  return;
}


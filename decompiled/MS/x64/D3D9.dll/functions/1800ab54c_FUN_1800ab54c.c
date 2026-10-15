/*
 * FUN_1800ab54c at 1800ab54c
 * int * __fastcall FUN_1800ab54c(longlong param_1, int * param_2, undefined4 param_3)
 * Address ranges: 1800ab54c-1800ab667
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_1800ab54c(longlong param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  HDC hdc;
  longlong *local_res8 [4];
  tagMONITORINFO local_f8;
  WCHAR local_d0 [80];
  HMONITOR local_30;
  
  local_res8[0] = (longlong *)0x0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x30) + 0x38))
                    ((longlong *)**(undefined8 **)(param_1 + 0x30),param_3,local_res8);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*local_res8[0] + 0x38))();
    if (-1 < iVar1) {
      FUN_1800fbea0((undefined1 *)&local_f8.rcMonitor,0,100);
      local_f8.cbSize = 0x68;
      BVar2 = GetMonitorInfoW(local_30,&local_f8);
      if (BVar2 != 0) {
        hdc = CreateDCW((LPCWSTR)0x0,local_d0,(LPCWSTR)0x0,(DEVMODEW *)0x0);
        if (hdc != (HDC)0x0) {
          *param_2 = local_f8.rcMonitor.right - local_f8.rcMonitor.left;
          param_2[1] = local_f8.rcMonitor.bottom - local_f8.rcMonitor.top;
          iVar1 = GetDeviceCaps(hdc,0xc);
          iVar3 = GetDeviceCaps(hdc,0xe);
          param_2[5] = iVar3 * iVar1;
          iVar1 = GetDeviceCaps(hdc,0x74);
          param_2[3] = 1;
          if (iVar1 == 1) {
            iVar1 = 0;
          }
          param_2[2] = iVar1;
          param_2[4] = iVar1;
          DeleteDC(hdc);
        }
      }
    }
    (**(code **)(*local_res8[0] + 0x10))();
  }
  return param_2;
}


/*
 * FUN_100490ef at 100490ef
 * undefined __stdcall FUN_100490ef(undefined4 * param_1, int * param_2, int * param_3)
 * Address ranges: 100490ef-10049206
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100490ef(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  BOOL BVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  tagMONITORINFO *ptVar7;
  undefined1 local_c0 [88];
  HMONITOR local_68;
  tagMONITORINFO local_5c;
  tagRECT local_34;
  int local_24 [3];
  tagRECT local_18;
  
  if ((char)param_3 == '\0') {
    GetWindowRect((HWND)*param_1,&local_34);
    GetClientRect((HWND)*param_1,&local_18);
    SetWindowPos((HWND)*param_1,(HWND)0x0,0,0,
                 ((*param_2 - local_34.left) - local_18.right) + local_34.right + local_18.left,
                 ((param_2[1] - local_34.top) - local_18.bottom) + local_34.bottom + local_18.top,
                 0x216);
  }
  else {
    piVar1 = (int *)param_1[1];
    piVar5 = param_2;
    piVar6 = local_24;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    param_3 = (int *)0x0;
    iVar4 = (**(code **)(*piVar1 + 0x3c))(piVar1,&param_3);
    if (-1 < iVar4) {
      iVar4 = (**(code **)(*param_3 + 0x1c))(param_3,local_c0);
      if (-1 < iVar4) {
        ptVar7 = &local_5c;
        for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
          ptVar7->cbSize = 0;
          ptVar7 = (tagMONITORINFO *)&ptVar7->rcMonitor;
        }
        local_5c.cbSize = 0x28;
        BVar2 = GetMonitorInfoW(local_68,&local_5c);
        if (BVar2 != 0) {
          local_24[0] = local_5c.rcMonitor.right - local_5c.rcMonitor.left;
          local_24[1] = local_5c.rcMonitor.bottom - local_5c.rcMonitor.top;
        }
      }
      (**(code **)(*param_3 + 8))(param_3);
    }
    (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],local_24);
  }
  uVar3 = 2;
  if (*(char *)(param_1 + 0x357) != '\0') {
    uVar3 = 0x802;
  }
  (**(code **)(*(int *)param_1[1] + 0x34))((int *)param_1[1],2,*param_2,param_2[1],param_2[4],uVar3)
  ;
  return;
}


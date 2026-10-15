/*
 * FUN_100214ca at 100214ca
 * int * __thiscall FUN_100214ca(void * this, int * param_1, undefined4 param_2)
 * Address ranges: 100214ca-100215cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * __thiscall FUN_100214ca(void *this,int *param_1,undefined4 param_2)

{
  BOOL BVar1;
  HDC hdc;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  int *unaff_ESI;
  int *piVar4;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  WCHAR aWStack_bc [36];
  undefined1 auStack_74 [80];
  HMONITOR pHStack_24;
  
  piVar4 = param_1;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  local_d8 = 0;
  iVar3 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0x18) + 0x1c))
                    ((int *)**(undefined4 **)((int)this + 0x18),param_2);
  if (-1 < iVar3) {
    iVar3 = (**(code **)(*unaff_ESI + 0x1c))(unaff_ESI,auStack_74);
    if (-1 < iVar3) {
      FUN_10060d45((int *)&stack0xffffff20,0,100);
      BVar1 = GetMonitorInfoW(pHStack_24,(LPMONITORINFO)&stack0xffffff1c);
      if (BVar1 != 0) {
        hdc = CreateDCW((LPCWSTR)0x0,aWStack_bc,(LPCWSTR)0x0,(DEVMODEW *)0x0);
        if (hdc != (HDC)0x0) {
          *param_1 = local_d8 - unaff_EBX;
          param_1[1] = iStack_d4 - iStack_dc;
          iVar3 = GetDeviceCaps(hdc,0xe);
          iVar2 = GetDeviceCaps(hdc,0xc);
          param_1[5] = iVar3 * iVar2;
          iVar3 = GetDeviceCaps(hdc,0x74);
          param_1[3] = 1;
          if (iVar3 == 1) {
            iVar3 = 0;
          }
          param_1[2] = iVar3;
          param_1[4] = iVar3;
          DeleteDC(hdc);
        }
      }
    }
    (**(code **)(local_d8 + 8))(&local_d8);
  }
  return param_1;
}


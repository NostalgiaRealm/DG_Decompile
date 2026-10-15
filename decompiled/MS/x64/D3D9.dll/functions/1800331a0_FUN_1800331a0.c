/*
 * FUN_1800331a0 at 1800331a0
 * bool __fastcall FUN_1800331a0(uint param_1, uint param_2, undefined8 * param_3, undefined4 * param_4, int * param_5, int * param_6)
 * Address ranges: 1800331a0-180033434
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800331a0(uint param_1,uint param_2,undefined8 *param_3,undefined4 *param_4,int *param_5,
                  int *param_6)

{
  int iVar1;
  longlong lVar2;
  HDC hdc;
  HDC hdc_00;
  HBITMAP h;
  HGDIOBJ h_00;
  HGDIOBJ h_01;
  LPCWSTR name;
  longlong *plVar3;
  int *piVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined1 local_98 [4];
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined8 local_80;
  HANDLE local_78;
  BITMAPINFO local_70;
  void *local_40;
  
  if ((param_1 < 0x321) && (param_2 < 0x259)) {
    plVar3 = &DAT_1801173f0;
    puVar6 = &DAT_1801173f8;
    name = (LPCWSTR)0x1f5;
    puVar7 = &DAT_180117400;
    piVar4 = &DAT_180117404;
    piVar5 = &DAT_180117408;
    lVar2 = DAT_1801173f0;
  }
  else {
    plVar3 = &DAT_180117410;
    puVar6 = (undefined8 *)&DAT_180117418;
    name = (LPCWSTR)0x1f4;
    puVar7 = (undefined4 *)&DAT_180117420;
    piVar4 = (int *)&DAT_180117424;
    piVar5 = (int *)&DAT_180117428;
    lVar2 = DAT_180117410;
  }
  if (((lVar2 == 0) &&
      (local_78 = LoadImageW(DAT_1801123b0,name,0,0,0,0x2000), local_78 != (HANDLE)0x0)) &&
     (iVar1 = GetObjectW(local_78,0x20,local_98), iVar1 != 0)) {
    hdc = CreateCompatibleDC((HDC)0x0);
    if (hdc != (HDC)0x0) {
      hdc_00 = CreateCompatibleDC((HDC)0x0);
      if (hdc_00 != (HDC)0x0) {
        local_70.bmiHeader.biWidth = local_94;
        local_70.bmiHeader.biHeight = local_90;
        local_70.bmiHeader.biSizeImage = 0;
        local_70.bmiHeader.biXPelsPerMeter = 0;
        local_70.bmiHeader.biYPelsPerMeter = 0;
        local_70.bmiHeader.biClrUsed = 0;
        local_70.bmiHeader.biClrImportant = 0;
        local_70.bmiColors[0].rgbBlue = '\0';
        local_70.bmiColors[0].rgbGreen = '\0';
        local_70.bmiColors[0].rgbRed = '\0';
        local_70.bmiColors[0].rgbReserved = '\0';
        local_70.bmiHeader.biSize = 0x28;
        local_70.bmiHeader.biPlanes = 1;
        local_70.bmiHeader.biBitCount = 0x20;
        local_70.bmiHeader.biCompression = 0;
        h = CreateDIBSection((HDC)0x0,&local_70,0,&local_40,(HANDLE)0x0,0);
        *plVar3 = (longlong)h;
        if (h != (HBITMAP)0x0) {
          h_00 = SelectObject(hdc,h);
          h_01 = SelectObject(hdc_00,local_78);
          BitBlt(hdc,0,0,local_94,local_90,hdc_00,0,0,0xcc0020);
          SelectObject(hdc,h_00);
          SelectObject(hdc_00,h_01);
        }
        DeleteDC(hdc_00);
      }
      DeleteDC(hdc);
    }
    if ((HANDLE)*plVar3 != (HANDLE)0x0) {
      iVar1 = GetObjectW((HANDLE)*plVar3,0x20,local_98);
      if (iVar1 == 0) {
        DeleteObject((HGDIOBJ)*plVar3);
        *plVar3 = 0;
      }
      else {
        *puVar6 = local_80;
        *puVar7 = local_8c;
        *piVar4 = local_94;
        *piVar5 = local_90;
      }
    }
  }
  lVar2 = *plVar3;
  if (lVar2 != 0) {
    iVar1 = *piVar4;
    *param_3 = *puVar6;
    *param_4 = *puVar7;
    *param_5 = iVar1;
    *param_6 = *piVar5;
  }
  return lVar2 != 0;
}


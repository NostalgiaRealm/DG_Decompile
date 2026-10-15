/*
 * FUN_1002d5ae at 1002d5ae
 * bool __thiscall FUN_1002d5ae(void * this, HANDLE param_1, DWORD param_2, undefined4 param_3, char param_4)
 * Address ranges: 1002d5ae-1002d719
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_1002d5ae(void *this,HANDLE param_1,DWORD param_2,undefined4 param_3,char param_4)

{
  HDC hdc;
  HGDIOBJ h;
  HBITMAP h_00;
  int iVar1;
  WORD *pWVar2;
  bool bVar3;
  BITMAPINFO local_450;
  undefined4 local_424;
  undefined4 local_420;
  undefined1 local_24 [12];
  undefined4 local_18;
  void *local_c;
  WORD *local_8;
  
  iVar1 = *(int *)((int)this + 0x44);
  pWVar2 = (WORD *)((int)this + 0x34);
  if ((iVar1 == 0) || ((*(int *)pWVar2 == 8 && (param_4 != '\0')))) {
    local_c = this;
    local_8 = pWVar2;
    FUN_100cfed0((int *)&local_450,0,0x2c);
    if (*(int *)pWVar2 == 8) {
      local_450.bmiColors[0].rgbBlue = '\0';
      local_450.bmiColors[0].rgbGreen = '\0';
      local_450.bmiColors[0].rgbRed = '\0';
      local_450.bmiColors[0].rgbReserved = '\0';
      if (iVar1 != 0) {
        hdc = CreateCompatibleDC((HDC)0x0);
        h = SelectObject(hdc,*(HGDIOBJ *)((int)this + 0x44));
        SetDIBColorTable(hdc,0,0x100,local_450.bmiColors);
        SelectObject(hdc,h);
        DeleteDC(hdc);
        iVar1 = *(int *)((int)local_c + 0x44);
        pWVar2 = local_8;
        this = local_c;
      }
    }
    else {
      local_450.bmiColors[0] = *(RGBQUAD *)((int)this + 0x38);
      local_424 = *(undefined4 *)((int)this + 0x3c);
      local_420 = *(undefined4 *)((int)this + 0x40);
    }
    bVar3 = iVar1 == 0;
    if (!bVar3) goto LAB_1002d710;
    local_450.bmiHeader.biWidth = *(LONG *)((int)this + 0x18);
    local_450.bmiHeader.biHeight = -*(int *)((int)this + 0x1c);
    local_450.bmiHeader.biSize = 0x28;
    local_450.bmiHeader.biPlanes = 1;
    local_450.bmiHeader.biBitCount = *pWVar2;
    if ((*(int *)pWVar2 == 0x10) || (*(int *)pWVar2 == 0x20)) {
      local_450.bmiHeader.biCompression = 3;
    }
    else {
      local_450.bmiHeader.biCompression = 0;
    }
    h_00 = CreateDIBSection((HDC)0x0,&local_450,0,(void **)((int)this + 0x58),param_1,param_2);
    *(HBITMAP *)((int)this + 0x44) = h_00;
    iVar1 = 0;
    if (h_00 != (HBITMAP)0x0) {
      GetObjectW(h_00,0x18,local_24);
      *(undefined4 *)((int)this + 0x5c) = local_18;
      *(bool *)((int)this + 0x60) = param_1 != (HANDLE)0x0;
      iVar1 = *(int *)((int)this + 0x44);
    }
    *(undefined2 *)((int)this + 0x61) = 0;
  }
  bVar3 = iVar1 == 0;
LAB_1002d710:
  return !bVar3;
}


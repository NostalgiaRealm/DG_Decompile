/*
 * FUN_10005876 at 10005876
 * bool __thiscall FUN_10005876(void * this, HANDLE param_1, DWORD param_2, int param_3, char param_4)
 * Address ranges: 10005876-10005a14
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10005876(void *this,HANDLE param_1,DWORD param_2,int param_3,char param_4)

{
  HDC hdc;
  HGDIOBJ h;
  HBITMAP h_00;
  int iVar1;
  uint uVar2;
  bool bVar3;
  BITMAPINFO local_44c;
  undefined4 local_420;
  undefined4 local_41c;
  undefined1 local_20 [12];
  undefined4 local_14;
  void *local_8;
  
  iVar1 = *(int *)((int)this + 0x44);
  if ((iVar1 == 0) || ((*(int *)((int)this + 0x34) == 8 && (param_4 != '\0')))) {
    local_8 = this;
    FUN_10060d45((int *)&local_44c,0,0x2c);
    if (*(int *)((int)this + 0x34) == 8) {
      if (param_3 == 0) {
        local_44c.bmiColors[0].rgbBlue = '\0';
        local_44c.bmiColors[0].rgbGreen = '\0';
        local_44c.bmiColors[0].rgbRed = '\0';
        local_44c.bmiColors[0].rgbReserved = '\0';
      }
      else {
        uVar2 = 0;
        do {
          local_44c.bmiColors[uVar2].rgbRed = *(BYTE *)(param_3 + 2 + uVar2 * 4);
          local_44c.bmiColors[uVar2].rgbGreen = *(BYTE *)(param_3 + 1 + uVar2 * 4);
          local_44c.bmiColors[uVar2].rgbBlue = *(BYTE *)(param_3 + uVar2 * 4);
          local_44c.bmiColors[uVar2].rgbReserved = '\0';
          uVar2 = uVar2 + 1;
        } while (uVar2 < 0x100);
      }
      if (iVar1 != 0) {
        hdc = CreateCompatibleDC((HDC)0x0);
        h = SelectObject(hdc,*(HGDIOBJ *)((int)this + 0x44));
        SetDIBColorTable(hdc,0,0x100,local_44c.bmiColors);
        SelectObject(hdc,h);
        DeleteDC(hdc);
        this = local_8;
      }
    }
    else {
      local_44c.bmiColors[0] = *(RGBQUAD *)((int)this + 0x38);
      local_420 = *(undefined4 *)((int)this + 0x3c);
      local_41c = *(undefined4 *)((int)this + 0x40);
    }
    bVar3 = *(int *)((int)this + 0x44) == 0;
    if (!bVar3) goto LAB_10005a0b;
    local_44c.bmiHeader.biWidth = *(LONG *)((int)this + 0x18);
    local_44c.bmiHeader.biHeight = -*(int *)((int)this + 0x1c);
    local_44c.bmiHeader.biSize = 0x28;
    local_44c.bmiHeader.biPlanes = 1;
    local_44c.bmiHeader.biBitCount = *(WORD *)((int)this + 0x34);
    if ((*(int *)((int)this + 0x34) == 0x10) || (*(int *)((int)this + 0x34) == 0x20)) {
      local_44c.bmiHeader.biCompression = 3;
    }
    else {
      local_44c.bmiHeader.biCompression = 0;
    }
    h_00 = CreateDIBSection((HDC)0x0,&local_44c,0,(void **)((int)this + 0x58),param_1,param_2);
    *(HBITMAP *)((int)this + 0x44) = h_00;
    iVar1 = 0;
    if (h_00 != (HBITMAP)0x0) {
      GetObjectW(h_00,0x18,local_20);
      *(undefined4 *)((int)this + 0x5c) = local_14;
      *(bool *)((int)this + 0x60) = param_1 != (HANDLE)0x0;
      iVar1 = *(int *)((int)this + 0x44);
    }
    *(undefined2 *)((int)this + 0x61) = 0;
  }
  bVar3 = iVar1 == 0;
LAB_10005a0b:
  return !bVar3;
}


/*
 * FUN_1002e1fc at 1002e1fc
 * undefined4 __fastcall FUN_1002e1fc(uint param_1, uint param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5, undefined4 * param_6)
 * Address ranges: 1002e1fc-1002e3d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall
FUN_1002e1fc(uint param_1,uint param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  HDC hdc;
  HBITMAP h;
  HGDIOBJ h_00;
  HGDIOBJ h_01;
  uint uVar4;
  int iVar5;
  BITMAPINFO local_5c;
  undefined1 local_30 [4];
  int local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_1c;
  void *local_18;
  int local_14;
  HANDLE local_10;
  HDC local_c;
  HDC local_8;
  
  if ((param_1 < 0x321) && (param_2 < 0x259)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  iVar5 = iVar2 * 0x14;
  if ((&DAT_100e39f8)[iVar2 * 5] == 0) {
    local_14 = iVar5;
    local_10 = LoadImageW(DAT_100dea9c,(LPCWSTR)(uint)(ushort)(&DAT_100d1c28)[iVar2],0,0,0,0x2000);
    uVar4 = 0;
    if (local_10 != (HANDLE)0x0) {
      iVar3 = GetObjectW(local_10,0x18,local_30);
      uVar4 = 0;
      if (iVar3 != 0) {
        hdc = CreateCompatibleDC((HDC)0x0);
        local_c = hdc;
        if (hdc != (HDC)0x0) {
          local_8 = CreateCompatibleDC((HDC)0x0);
          if (local_8 != (HDC)0x0) {
            local_5c.bmiHeader.biWidth = local_2c;
            local_5c.bmiHeader.biHeight = local_28;
            local_5c.bmiHeader.biSizeImage = 0;
            local_5c.bmiHeader.biXPelsPerMeter = 0;
            local_5c.bmiHeader.biPlanes = 1;
            local_5c.bmiHeader.biBitCount = 0x20;
            local_5c.bmiHeader.biYPelsPerMeter = 0;
            local_5c.bmiHeader.biClrUsed = 0;
            local_5c.bmiHeader.biClrImportant = 0;
            local_5c.bmiColors[0].rgbBlue = '\0';
            local_5c.bmiColors[0].rgbGreen = '\0';
            local_5c.bmiColors[0].rgbRed = '\0';
            local_5c.bmiColors[0].rgbReserved = '\0';
            local_5c.bmiHeader.biSize = 0x28;
            local_5c.bmiHeader.biCompression = 0;
            h = CreateDIBSection((HDC)0x0,&local_5c,0,&local_18,(HANDLE)0x0,0);
            (&DAT_100e39f8)[iVar2 * 5] = h;
            if (h != (HBITMAP)0x0) {
              h_00 = SelectObject(hdc,h);
              h_01 = SelectObject(local_8,local_10);
              BitBlt(local_c,0,0,local_2c,local_28,local_8,0,0,0xcc0020);
              SelectObject(local_c,h_00);
              SelectObject(local_8,h_01);
              iVar5 = local_14;
              hdc = local_c;
            }
            DeleteDC(local_8);
          }
          DeleteDC(hdc);
        }
        uVar4 = 0;
        if (*(HANDLE *)((int)&DAT_100e39f8 + iVar5) != (HANDLE)0x0) {
          iVar2 = GetObjectW(*(HANDLE *)((int)&DAT_100e39f8 + iVar5),0x18,local_30);
          if (iVar2 == 0) {
            uVar4 = DeleteObject(*(HGDIOBJ *)((int)&DAT_100e39f8 + iVar5));
            *(undefined4 *)((int)&DAT_100e39f8 + iVar5) = 0;
          }
          else {
            *(undefined4 *)((int)&DAT_100e39fc + iVar5) = local_1c;
            *(undefined4 *)((int)&DAT_100e3a00 + iVar5) = local_24;
            *(int *)((int)&DAT_100e3a04 + iVar5) = local_2c;
            *(uint *)((int)&DAT_100e3a08 + iVar5) = local_28;
            uVar4 = local_28;
          }
        }
      }
    }
    if (*(int *)((int)&DAT_100e39f8 + iVar5) == 0) {
      return uVar4 & 0xffffff00;
    }
  }
  uVar1 = *(undefined4 *)((int)&DAT_100e3a00 + iVar5);
  *param_3 = *(undefined4 *)((int)&DAT_100e39fc + iVar5);
  *param_4 = uVar1;
  *param_5 = *(undefined4 *)((int)&DAT_100e3a04 + iVar5);
  *param_6 = *(undefined4 *)((int)&DAT_100e3a08 + iVar5);
  return CONCAT31((int3)((uint)param_3 >> 8),1);
}


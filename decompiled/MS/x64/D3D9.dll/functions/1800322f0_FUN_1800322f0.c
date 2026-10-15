/*
 * FUN_1800322f0 at 1800322f0
 * bool __fastcall FUN_1800322f0(longlong param_1, HANDLE param_2, DWORD param_3, undefined8 param_4, char param_5)
 * Address ranges: 1800322f0-18003246e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800322f0(longlong param_1,HANDLE param_2,DWORD param_3,undefined8 param_4,char param_5)

{
  HDC hdc;
  HGDIOBJ h;
  HBITMAP h_00;
  longlong lVar1;
  bool bVar2;
  undefined1 local_488 [12];
  undefined4 local_47c;
  BITMAPINFO local_468;
  undefined4 local_43c;
  undefined4 local_438;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if ((lVar1 == 0) || ((*(int *)(param_1 + 0x40) == 8 && (param_5 != '\0')))) {
    local_468.bmiHeader.biCompression = 0;
    local_468.bmiHeader.biSizeImage = 0;
    local_468.bmiHeader.biXPelsPerMeter = 0;
    local_468.bmiHeader.biYPelsPerMeter = 0;
    local_468.bmiHeader.biClrUsed = 0;
    local_468.bmiHeader.biSize = 0;
    local_468.bmiHeader.biWidth = 0;
    local_468.bmiHeader.biHeight = 0;
    local_468.bmiHeader.biPlanes = 0;
    local_468.bmiHeader.biBitCount = 0;
    if (*(int *)(param_1 + 0x40) == 8) {
      local_468.bmiHeader.biClrImportant = 0;
      local_468.bmiColors[0].rgbBlue = '\0';
      local_468.bmiColors[0].rgbGreen = '\0';
      local_468.bmiColors[0].rgbRed = '\0';
      local_468.bmiColors[0].rgbReserved = '\0';
      if (lVar1 != 0) {
        hdc = CreateCompatibleDC((HDC)0x0);
        h = SelectObject(hdc,*(HGDIOBJ *)(param_1 + 0x50));
        SetDIBColorTable(hdc,0,0x100,local_468.bmiColors);
        SelectObject(hdc,h);
        DeleteDC(hdc);
      }
    }
    else {
      local_468._36_8_ = (ulonglong)*(uint *)(param_1 + 0x44) << 0x20;
      local_43c = *(undefined4 *)(param_1 + 0x48);
      local_438 = *(undefined4 *)(param_1 + 0x4c);
    }
    bVar2 = *(longlong *)(param_1 + 0x50) == 0;
    if (!bVar2) goto LAB_18003245c;
    local_468.bmiHeader.biPlanes = 1;
    local_468.bmiHeader.biHeight = -*(int *)(param_1 + 0x28);
    local_468.bmiHeader.biBitCount = *(WORD *)(param_1 + 0x40);
    local_468.bmiHeader.biWidth = *(LONG *)(param_1 + 0x24);
    local_468.bmiHeader.biSize = 0x28;
    local_468.bmiHeader._16_8_ =
         CONCAT44(local_468.bmiHeader.biSizeImage,
                  ~-(uint)((*(int *)(param_1 + 0x40) - 0x10U & 0xffffffef) != 0)) &
         0xffffffff00000003;
    h_00 = CreateDIBSection((HDC)0x0,&local_468,0,(void **)(param_1 + 0x78),param_2,param_3);
    *(HBITMAP *)(param_1 + 0x50) = h_00;
    lVar1 = 0;
    if (h_00 != (HBITMAP)0x0) {
      GetObjectW(h_00,0x20,local_488);
      *(undefined4 *)(param_1 + 0x80) = local_47c;
      *(bool *)(param_1 + 0x84) = param_2 != (HANDLE)0x0;
      lVar1 = *(longlong *)(param_1 + 0x50);
    }
    *(undefined2 *)(param_1 + 0x85) = 0;
  }
  bVar2 = lVar1 == 0;
LAB_18003245c:
  return !bVar2;
}


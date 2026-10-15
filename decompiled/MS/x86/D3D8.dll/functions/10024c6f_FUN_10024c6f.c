/*
 * FUN_10024c6f at 10024c6f
 * HBITMAP __stdcall FUN_10024c6f(HICON param_1, PICONINFO param_2, char * param_3)
 * Address ranges: 10024c6f-10024e74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HBITMAP FUN_10024c6f(HICON param_1,PICONINFO param_2,char *param_3)

{
  BOOL BVar1;
  int iVar2;
  HDC pHVar3;
  HGDIOBJ h;
  int iVar4;
  int iVar5;
  HBITMAP pHVar6;
  code *pcVar7;
  bool bVar8;
  BITMAPINFO local_80;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 local_4c [12];
  int local_40;
  int local_38;
  undefined1 local_34 [4];
  int local_30;
  int local_2c;
  HGDIOBJ local_1c;
  void *local_18;
  HGDIOBJ local_14;
  HDC local_10;
  HDC local_c;
  int local_8;
  
  pHVar6 = (HBITMAP)0x0;
  BVar1 = GetIconInfo(param_1,param_2);
  if (BVar1 != 0) {
    if (param_2->hbmColor == (HBITMAP)0x0) {
      pHVar6 = param_2->hbmMask;
    }
    else {
      pHVar6 = param_2->hbmColor;
    }
    GetObjectW(pHVar6,0x18,local_34);
    local_8 = local_2c >> 1;
    if (param_2->hbmColor != (HBITMAP)0x0) {
      local_8 = local_2c;
    }
    local_80.bmiHeader.biWidth = local_30 * 2;
    local_80.bmiHeader.biPlanes = 1;
    local_80.bmiHeader.biHeight = -local_8;
    local_80.bmiHeader.biBitCount = 0x20;
    local_80.bmiHeader.biSize = 0x28;
    local_80.bmiHeader.biCompression = 0;
    local_80.bmiHeader.biSizeImage = 0;
    local_80.bmiHeader.biXPelsPerMeter = 0;
    local_80.bmiHeader.biYPelsPerMeter = 0;
    local_80.bmiHeader.biClrUsed = 0;
    local_80.bmiHeader.biClrImportant = 0;
    local_80.bmiColors[0].rgbBlue = '\0';
    local_80.bmiColors[0].rgbGreen = '\0';
    local_80.bmiColors[0].rgbRed = '\0';
    local_80.bmiColors[0].rgbReserved = '\0';
    local_18 = (void *)0x0;
    uStack_54 = 0;
    uStack_50 = 0;
    pHVar6 = CreateDIBSection((HDC)0x0,&local_80,0,&local_18,(HANDLE)0x0,0);
    if (((pHVar6 != (HBITMAP)0x0) && (iVar2 = GetObjectW(pHVar6,0x18,local_4c), iVar2 != 0)) &&
       (local_c = CreateCompatibleDC((HDC)0x0), pcVar7 = SelectObject_exref, local_c != (HDC)0x0)) {
      local_1c = SelectObject(local_c,pHVar6);
      pHVar3 = CreateCompatibleDC((HDC)0x0);
      local_10 = pHVar3;
      if (pHVar3 != (HDC)0x0) {
        bVar8 = param_2->hbmColor == (HBITMAP)0x0;
        if (bVar8) {
          local_14 = SelectObject(pHVar3,param_2->hbmMask);
          BitBlt(local_c,0,0,local_30,local_8,pHVar3,0,local_8,0xcc0020);
        }
        else {
          local_14 = SelectObject(pHVar3,param_2->hbmColor);
          BitBlt(local_c,0,0,local_30,local_8,pHVar3,0,0,0xcc0020);
        }
        *param_3 = bVar8;
        SelectObject(pHVar3,local_14);
        h = SelectObject(pHVar3,param_2->hbmMask);
        BitBlt(local_c,local_30,0,local_30,local_8,local_10,0,0,0xcc0020);
        pHVar3 = local_10;
        SelectObject(local_10,h);
        if ((*param_3 == '\0') && (iVar2 = local_38 + local_30 * 4, iVar4 = local_8, 0 < local_8)) {
          do {
            iVar5 = 0;
            if (0 < local_30) {
              do {
                if (*(int *)(iVar2 + iVar5 * 4) == 0) {
                  *(undefined1 *)(local_38 + 3 + iVar5 * 4) = 0xff;
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 < local_30);
            }
            iVar2 = iVar2 + local_40;
            local_38 = local_38 + local_40;
            iVar4 = iVar4 + -1;
            pHVar3 = local_10;
          } while (iVar4 != 0);
        }
        DeleteDC(pHVar3);
        pcVar7 = SelectObject_exref;
      }
      pHVar3 = local_c;
      pHVar6 = (HBITMAP)(*pcVar7)(local_c,local_1c);
      DeleteDC(pHVar3);
    }
    DeleteObject(param_2->hbmColor);
    DeleteObject(param_2->hbmMask);
  }
  return pHVar6;
}


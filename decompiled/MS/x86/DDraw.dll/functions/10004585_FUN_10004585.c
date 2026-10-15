/*
 * FUN_10004585 at 10004585
 * HBITMAP __stdcall FUN_10004585(HICON param_1, PICONINFO param_2, char * param_3)
 * Address ranges: 10004585-1000478d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HBITMAP FUN_10004585(HICON param_1,PICONINFO param_2,char *param_3)

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
  BITMAPINFO local_84;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50 [12];
  int local_44;
  int local_3c;
  undefined1 local_38 [4];
  int local_34;
  int local_30;
  HGDIOBJ local_20;
  void *local_1c;
  HGDIOBJ local_18;
  HDC local_14;
  HDC local_10;
  int local_c;
  
  pHVar6 = (HBITMAP)0x0;
  BVar1 = GetIconInfo(param_1,param_2);
  if (BVar1 != 0) {
    if (param_2->hbmColor == (HBITMAP)0x0) {
      pHVar6 = param_2->hbmMask;
    }
    else {
      pHVar6 = param_2->hbmColor;
    }
    GetObjectW(pHVar6,0x18,local_38);
    local_c = local_30 >> 1;
    if (param_2->hbmColor != (HBITMAP)0x0) {
      local_c = local_30;
    }
    local_84.bmiHeader.biWidth = local_34 * 2;
    local_84.bmiHeader.biPlanes = 1;
    local_84.bmiHeader.biHeight = -local_c;
    local_84.bmiHeader.biBitCount = 0x20;
    local_84.bmiHeader.biSize = 0x28;
    local_84.bmiHeader.biCompression = 0;
    local_84.bmiHeader.biSizeImage = 0;
    local_84.bmiHeader.biXPelsPerMeter = 0;
    local_84.bmiHeader.biYPelsPerMeter = 0;
    local_84.bmiHeader.biClrUsed = 0;
    local_84.bmiHeader.biClrImportant = 0;
    local_84.bmiColors[0].rgbBlue = '\0';
    local_84.bmiColors[0].rgbGreen = '\0';
    local_84.bmiColors[0].rgbRed = '\0';
    local_84.bmiColors[0].rgbReserved = '\0';
    local_1c = (void *)0x0;
    uStack_58 = 0;
    uStack_54 = 0;
    pHVar6 = CreateDIBSection((HDC)0x0,&local_84,0,&local_1c,(HANDLE)0x0,0);
    if (((pHVar6 != (HBITMAP)0x0) && (iVar2 = GetObjectW(pHVar6,0x18,local_50), iVar2 != 0)) &&
       (local_10 = CreateCompatibleDC((HDC)0x0), pcVar7 = SelectObject_exref, local_10 != (HDC)0x0))
    {
      local_20 = SelectObject(local_10,pHVar6);
      pHVar3 = CreateCompatibleDC((HDC)0x0);
      local_14 = pHVar3;
      if (pHVar3 != (HDC)0x0) {
        bVar8 = param_2->hbmColor == (HBITMAP)0x0;
        if (bVar8) {
          local_18 = SelectObject(pHVar3,param_2->hbmMask);
          BitBlt(local_10,0,0,local_34,local_c,pHVar3,0,local_c,0xcc0020);
        }
        else {
          local_18 = SelectObject(pHVar3,param_2->hbmColor);
          BitBlt(local_10,0,0,local_34,local_c,pHVar3,0,0,0xcc0020);
        }
        *param_3 = bVar8;
        SelectObject(pHVar3,local_18);
        h = SelectObject(pHVar3,param_2->hbmMask);
        BitBlt(local_10,local_34,0,local_34,local_c,local_14,0,0,0xcc0020);
        pHVar3 = local_14;
        SelectObject(local_14,h);
        if ((*param_3 == '\0') && (iVar2 = local_3c + local_34 * 4, iVar4 = local_c, 0 < local_c)) {
          do {
            iVar5 = 0;
            if (0 < local_34) {
              do {
                if (*(int *)(iVar2 + iVar5 * 4) == 0) {
                  *(undefined1 *)(local_3c + 3 + iVar5 * 4) = 0xff;
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 < local_34);
            }
            iVar2 = iVar2 + local_44;
            local_3c = local_3c + local_44;
            iVar4 = iVar4 + -1;
            pHVar3 = local_14;
          } while (iVar4 != 0);
        }
        DeleteDC(pHVar3);
        pcVar7 = SelectObject_exref;
      }
      pHVar3 = local_10;
      pHVar6 = (HBITMAP)(*pcVar7)(local_10,local_20);
      DeleteDC(pHVar3);
    }
    DeleteObject(param_2->hbmColor);
    DeleteObject(param_2->hbmMask);
  }
  return pHVar6;
}


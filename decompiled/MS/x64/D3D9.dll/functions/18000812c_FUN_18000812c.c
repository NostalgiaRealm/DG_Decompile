/*
 * FUN_18000812c at 18000812c
 * undefined4 __fastcall FUN_18000812c(longlong param_1, longlong param_2, longlong * param_3)
 * Address ranges: 18000812c-1800083fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18000812c(longlong param_1,longlong param_2,longlong *param_3)

{
  LONG cx;
  LONG cy;
  byte bVar1;
  int iVar2;
  uint uVar3;
  HBITMAP h;
  HDC hdc;
  HDC hdcSrc;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *local_res18 [2];
  RECT local_a8;
  uint local_98 [2];
  longlong local_90;
  undefined1 local_88 [12];
  int local_7c;
  longlong local_70;
  BITMAPINFO local_68;
  
  uVar7 = 0x8876086c;
  uVar8 = 0x8876086c;
  if ((((param_3[5] == param_1) && (uVar8 = uVar7, (int)param_3[9] == 0x15)) &&
      (*(int *)((longlong)param_3 + 0x54) == 2 || *(int *)((longlong)param_3 + 0x54) == 3)) &&
     (((*(uint *)(param_3[1] + 0x100) >> 0xb & 1) == 0 &&
      (uVar8 = 0x88760868, *(char *)(param_1 + 0x6819) == '\0')))) {
    FUN_180003b0c(*(longlong *)(param_1 + 0xe28),*(uint *)(param_1 + 0xea8),&local_a8.left);
    cx = local_a8.left;
    uVar8 = 0x8876086c;
    if (((uint)local_a8.left <= *(uint *)(param_3 + 0xc)) &&
       (cy = local_a8.top, (uint)local_a8.top <= *(uint *)((longlong)param_3 + 100))) {
      uVar8 = 0x80004005;
      local_a8.left = 0;
      local_a8.top = 0;
      local_a8.right = cx;
      local_a8.bottom = cy;
      if ((&DAT_1801123d4)[(ulonglong)*(uint *)(param_1 + 0xea8) * 0x28] == '\0') {
        local_68.bmiHeader.biHeight = -cy;
        local_68.bmiHeader.biSize = 0x28;
        local_68.bmiHeader.biWidth = cx;
        local_68.bmiHeader.biPlanes = 1;
        local_68.bmiHeader.biBitCount = 0x20;
        local_68.bmiHeader.biCompression = 0;
        local_68.bmiHeader.biSizeImage = 0;
        local_68.bmiHeader.biXPelsPerMeter = 0;
        local_68.bmiHeader.biYPelsPerMeter = 0;
        local_68.bmiHeader.biClrUsed = 0;
        local_68.bmiHeader.biClrImportant = 0;
        local_68.bmiColors[0].rgbBlue = '\0';
        local_68.bmiColors[0].rgbGreen = '\0';
        local_68.bmiColors[0].rgbRed = '\0';
        local_68.bmiColors[0].rgbReserved = '\0';
        local_res18[0] = (void *)0x0;
        h = CreateDIBSection((HDC)0x0,&local_68,0,local_res18,(HANDLE)0x0,0);
        if (h != (HBITMAP)0x0) {
          hdc = CreateCompatibleDC((HDC)0x0);
          if (hdc != (HDC)0x0) {
            iVar2 = GetObjectW(h,0x20,local_88);
            if (iVar2 == 0x20) {
              h = SelectObject(hdc,h);
              hdcSrc = GetDCEx((HWND)0x0,(HRGN)0x0,3);
              if (hdcSrc != (HDC)0x0) {
                uVar3 = FUN_180015724((longlong)param_3,local_98,&local_a8,0x10,'\0');
                if (-1 < (int)uVar3) {
                  lVar5 = (ulonglong)*(uint *)(param_1 + 0xea8) * 600;
                  BitBlt(hdc,0,0,cx,cy,hdcSrc,*(int *)(&DAT_180112ab4 + lVar5),
                         *(int *)(&DAT_180112ab8 + lVar5),0xcc0020);
                  uVar3 = 0;
                  if (cy != 0) {
                    do {
                      uVar6 = 0;
                      if (cx != 0) {
                        do {
                          *(uint *)(local_90 + uVar6 * 4) =
                               *(uint *)(local_70 + uVar6 * 4) | 0xff000000;
                          uVar4 = (int)uVar6 + 1;
                          uVar6 = (ulonglong)uVar4;
                        } while (uVar4 < (uint)cx);
                      }
                      uVar3 = uVar3 + 1;
                      local_70 = local_70 + local_7c;
                      local_90 = local_90 + (int)local_98[0];
                    } while (uVar3 < (uint)cy);
                  }
                  FUN_1800157d8(param_3);
                  uVar8 = 0;
                }
                ReleaseDC((HWND)0x0,hdcSrc);
              }
            }
            h = SelectObject(hdc,h);
          }
          DeleteObject(h);
        }
      }
      else if ((*(char *)(param_2 + 0xf9) == '\0') &&
              (bVar1 = FUN_18000618c(param_1,*(longlong **)(param_2 + 0x58),param_3,1,
                                     (longlong)&local_a8,0), bVar1 != 0)) {
        uVar8 = 0;
      }
    }
  }
  return uVar8;
}


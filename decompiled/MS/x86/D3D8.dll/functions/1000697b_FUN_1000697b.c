/*
 * FUN_1000697b at 1000697b
 * undefined4 __thiscall FUN_1000697b(void * this, int param_1, undefined4 * param_2)
 * Address ranges: 1000697b-10006c2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1000697b(void *this,int param_1,undefined4 *param_2)

{
  byte bVar1;
  HDC hdc;
  int iVar2;
  HDC hdcSrc;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  HBITMAP local_9c;
  void *local_88;
  int local_84;
  int local_80;
  RECT local_7c;
  uint local_6c;
  uint local_68;
  BITMAPINFO local_5c;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20 [12];
  int local_14;
  int local_c;
  
  uVar6 = 0x8876086c;
  if (((((void *)param_2[6] == this) && (param_2[10] == 0x15)) &&
      ((param_2[0xd] == 2 || (param_2[0xd] == 3)))) &&
     (((*(uint *)(param_2[1] + 0xb8) >> 0xb & 1) == 0 &&
      (uVar6 = 0x88760868, *(char *)((int)this + 0x58bd) == '\0')))) {
    uVar6 = 0x8876086c;
    FUN_10003167(*(void **)((int)this + 0xacc),*(int *)((int)this + 0xb2c),&local_6c);
    if ((local_6c <= (uint)param_2[0x10]) && (local_68 <= (uint)param_2[0x11])) {
      uVar6 = 0x80004005;
      local_7c.left = 0;
      local_7c.top = 0;
      local_7c.right = local_6c;
      local_7c.bottom = local_68;
      if ((&DAT_100ba1a4)[*(int *)((int)this + 0xb2c) * 8] == '\0') {
        local_5c.bmiHeader.biSize = 0x28;
        local_5c.bmiHeader.biWidth = local_6c;
        local_5c.bmiHeader.biHeight = -local_68;
        local_5c.bmiHeader.biPlanes = 1;
        local_5c.bmiHeader.biBitCount = 0x20;
        local_5c.bmiHeader.biCompression = 0;
        local_5c.bmiHeader.biSizeImage = 0;
        local_5c.bmiHeader.biXPelsPerMeter = 0;
        local_5c.bmiHeader.biYPelsPerMeter = 0;
        local_5c.bmiHeader.biClrUsed = 0;
        local_5c.bmiHeader.biClrImportant = 0;
        local_5c.bmiColors[0].rgbBlue = '\0';
        local_5c.bmiColors[0].rgbGreen = '\0';
        local_5c.bmiColors[0].rgbRed = '\0';
        local_5c.bmiColors[0].rgbReserved = '\0';
        local_88 = (void *)0x0;
        local_9c = CreateDIBSection((HDC)0x0,&local_5c,0,&local_88,(HANDLE)0x0,0);
        if (local_9c != (HBITMAP)0x0) {
          hdc = CreateCompatibleDC((HDC)0x0);
          if (hdc != (HDC)0x0) {
            iVar2 = GetObjectW(local_9c,0x18,local_20);
            if (iVar2 == 0x18) {
              local_9c = SelectObject(hdc,local_9c);
              hdcSrc = GetDCEx((HWND)0x0,(HRGN)0x0,3);
              if (hdcSrc != (HDC)0x0) {
                uVar3 = FUN_1000ee58(param_2,&local_84,&local_7c,0x10);
                uVar5 = local_68;
                if (-1 < (int)uVar3) {
                  iVar2 = *(int *)((int)this + 0xb2c) * 0x228;
                  local_30 = *(int *)(&DAT_100ba8e0 + iVar2);
                  local_2c = *(int *)(&DAT_100ba8e4 + iVar2);
                  uStack_28 = *(undefined4 *)(&DAT_100ba8e8 + iVar2);
                  uStack_24 = *(undefined4 *)(&DAT_100ba8ec + iVar2);
                  BitBlt(hdc,0,0,local_6c,local_68,hdcSrc,local_30,local_2c,0xcc0020);
                  uVar3 = 0;
                  if (uVar5 != 0) {
                    do {
                      uVar4 = 0;
                      if (local_6c != 0) {
                        do {
                          *(uint *)(local_80 + uVar4 * 4) =
                               *(uint *)(local_c + uVar4 * 4) | 0xff000000;
                          uVar4 = uVar4 + 1;
                          uVar5 = local_68;
                        } while (uVar4 < local_6c);
                      }
                      local_80 = local_80 + local_84;
                      local_c = local_c + local_14;
                      uVar3 = uVar3 + 1;
                    } while (uVar3 < uVar5);
                  }
                  FUN_1000ee9d(param_2);
                  uVar6 = 0;
                }
                ReleaseDC((HWND)0x0,hdcSrc);
              }
            }
            local_9c = SelectObject(hdc,local_9c);
          }
          DeleteObject(local_9c);
        }
      }
      else if (*(char *)(param_1 + 0xb5) == '\0') {
        bVar1 = FUN_10005115(this,*(void **)(param_1 + 0x30),param_2,1,(int)&local_7c,0);
        uVar6 = 0;
        if (bVar1 == 0) {
          uVar6 = 0x80004005;
        }
      }
    }
  }
  return uVar6;
}


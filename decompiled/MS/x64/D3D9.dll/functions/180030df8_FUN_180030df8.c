/*
 * FUN_180030df8 at 180030df8
 * HBITMAP __fastcall FUN_180030df8(void * param_1, HICON param_2, PICONINFO param_3, char * param_4)
 * Address ranges: 180030df8-180031095
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HBITMAP FUN_180030df8(void *param_1,HICON param_2,PICONINFO param_3,char *param_4)

{
  BOOL BVar1;
  int iVar2;
  HBITMAP pHVar3;
  HDC hdc;
  HDC hdc_00;
  HGDIOBJ pvVar4;
  uint uVar5;
  ulonglong uVar6;
  int cy;
  longlong lVar7;
  void *local_res8 [4];
  undefined1 local_c8 [48];
  undefined4 local_98;
  HGDIOBJ local_90;
  undefined1 local_88 [4];
  int local_84;
  int local_80;
  undefined1 local_68 [12];
  int local_5c;
  longlong local_50;
  
  pHVar3 = (HBITMAP)0x0;
  local_res8[0] = param_1;
  BVar1 = GetIconInfo(param_2,param_3);
  if (BVar1 != 0) {
    pHVar3 = param_3->hbmColor;
    if (pHVar3 == (HBITMAP)0x0) {
      pHVar3 = param_3->hbmMask;
    }
    GetObjectW(pHVar3,0x20,local_88);
    cy = local_80 >> 1;
    if (param_3->hbmColor != (HBITMAP)0x0) {
      cy = local_80;
    }
    local_c8._4_4_ = local_84 * 2;
    local_c8._0_4_ = 0x28;
    local_c8._8_4_ = -cy;
    local_c8._12_2_ = 1;
    local_c8._14_2_ = 0x20;
    local_c8._16_4_ = 0;
    local_c8._20_4_ = 0;
    local_c8._24_4_ = 0;
    local_c8._40_8_ = 0;
    local_98 = 0;
    local_c8._28_4_ = 0;
    local_c8._32_4_ = 0;
    local_c8._36_4_ = 0;
    local_res8[0] = (void *)0x0;
    pHVar3 = CreateDIBSection((HDC)0x0,(BITMAPINFO *)local_c8,0,local_res8,(HANDLE)0x0,0);
    if (pHVar3 != (HBITMAP)0x0) {
      iVar2 = GetObjectW(pHVar3,0x20,local_68);
      if (iVar2 != 0) {
        hdc = CreateCompatibleDC((HDC)0x0);
        if (hdc != (HDC)0x0) {
          local_90 = SelectObject(hdc,pHVar3);
          hdc_00 = CreateCompatibleDC((HDC)0x0);
          if (hdc_00 != (HDC)0x0) {
            pHVar3 = param_3->hbmColor;
            if (pHVar3 == (HBITMAP)0x0) {
              pvVar4 = SelectObject(hdc_00,param_3->hbmMask);
              BitBlt(hdc,0,0,local_84,cy,hdc_00,0,cy,0xcc0020);
            }
            else {
              pvVar4 = SelectObject(hdc_00,pHVar3);
              BitBlt(hdc,0,0,local_84,cy,hdc_00,0,0,0xcc0020);
            }
            *param_4 = pHVar3 == (HBITMAP)0x0;
            SelectObject(hdc_00,pvVar4);
            pvVar4 = SelectObject(hdc_00,param_3->hbmMask);
            BitBlt(hdc,local_84,0,local_84,cy,hdc_00,0,0,0xcc0020);
            SelectObject(hdc_00,pvVar4);
            if (*param_4 == '\0') {
              lVar7 = local_84 * 4 + local_50;
              if (0 < cy) {
                do {
                  uVar6 = 0;
                  if (0 < local_84) {
                    do {
                      if (*(int *)(lVar7 + uVar6 * 4) == 0) {
                        *(undefined1 *)(local_50 + 3 + (longlong)((int)uVar6 * 4)) = 0xff;
                      }
                      uVar5 = (int)uVar6 + 1;
                      uVar6 = (ulonglong)uVar5;
                    } while ((int)uVar5 < local_84);
                  }
                  lVar7 = lVar7 + local_5c;
                  local_50 = local_50 + local_5c;
                  cy = cy + -1;
                } while (cy != 0);
              }
            }
            DeleteDC(hdc_00);
          }
          pHVar3 = SelectObject(hdc,local_90);
          DeleteDC(hdc);
        }
      }
    }
    DeleteObject(param_3->hbmColor);
    DeleteObject(param_3->hbmMask);
  }
  return pHVar3;
}


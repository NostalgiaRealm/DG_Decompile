/*
 * FUN_1800b2558 at 1800b2558
 * ulonglong __fastcall FUN_1800b2558(longlong param_1, DWORD param_2, DWORD param_3, longlong param_4)
 * Address ranges: 1800b2558-1800b2b2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800b2558(longlong param_1,DWORD param_2,DWORD param_3,longlong param_4)

{
  longlong *plVar1;
  bool bVar2;
  byte bVar3;
  BOOL BVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  uint *puVar9;
  HBITMAP h;
  HBITMAP h_00;
  ulonglong uVar10;
  HICON hCursor;
  undefined8 uVar11;
  uint uVar12;
  undefined4 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte bVar16;
  uint uVar17;
  longlong *plVar18;
  bool bVar19;
  uint local_100;
  uint local_fc;
  longlong local_f8;
  void *local_f0;
  longlong local_e8;
  HBITMAP local_e0;
  BITMAPINFO local_d8;
  ICONINFO local_a8;
  undefined1 local_88 [12];
  int local_7c;
  undefined4 *local_70;
  undefined1 local_68 [12];
  int local_5c;
  undefined4 *local_50;
  
  uVar15 = 0;
  plVar18 = (longlong *)(-(ulonglong)(param_4 != 0) & param_4 - 0x80U);
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar2 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar2 = true;
    BVar4 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar4 == 0) {
      FUN_1800044dc(0);
      bVar2 = true;
    }
  }
  if (plVar18 == (longlong *)0x0) {
    uVar10 = uVar15;
    if (*(int *)(param_1 + -0x5a00) != 0) {
      do {
        FUN_180016a80(*(longlong *)(*(longlong *)(param_1 + -0x5a08) + uVar10 * 8),0,0,0,0,0,0,0);
        lVar14 = **(longlong **)(param_1 + -0x5a08);
        (**(code **)(**(longlong **)(lVar14 + 0x100) + 0x68))();
        uVar17 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar17;
        *(undefined1 *)(lVar14 + 0x120) = 0;
      } while (uVar17 < *(uint *)(param_1 + -0x5a00));
    }
    if (*(HICON *)(param_1 + -0x59a8) != (HICON)0x0) {
      DestroyIcon(*(HICON *)(param_1 + -0x59a8));
      *(undefined8 *)(param_1 + -0x59a8) = 0;
    }
    goto LAB_1800b2afc;
  }
  piVar8 = (int *)(param_4 + -0x38);
  bVar19 = param_4 == 0;
  if (bVar19) {
    piVar8 = (int *)&DAT_00000048;
  }
  iVar5 = *piVar8;
  puVar9 = (uint *)(param_4 + -0x20);
  if (bVar19) {
    puVar9 = (uint *)&DAT_00000060;
  }
  uVar17 = *puVar9;
  puVar9 = (uint *)(param_4 + -0x1c);
  if (bVar19) {
    puVar9 = (uint *)&DAT_00000064;
  }
  uVar12 = *puVar9;
  FUN_180003b0c(*(longlong *)(param_1 + -0x5a10),*(uint *)(param_1 + -0x5990),&local_100);
  uVar15 = 0x8876086c;
  if ((((uVar17 != 1) && ((uVar17 & uVar17 - 1) != 0)) ||
      ((uVar12 != 1 && ((uVar12 & uVar12 - 1) != 0)))) ||
     (((iVar5 != 0x15 || (local_100 <= uVar17)) || (local_fc <= uVar12)))) goto LAB_1800b2afc;
  local_d8.bmiHeader.biSize = 0x28;
  local_d8.bmiHeader.biHeight = -uVar12;
  local_d8.bmiHeader.biPlanes = 1;
  local_d8.bmiHeader.biBitCount = 0x20;
  local_d8.bmiHeader.biCompression = 0;
  local_d8.bmiHeader.biSizeImage = 0;
  local_d8.bmiHeader.biXPelsPerMeter = 0;
  local_d8.bmiHeader.biYPelsPerMeter = 0;
  local_d8.bmiHeader.biClrUsed = 0;
  local_d8.bmiHeader.biClrImportant = 0;
  local_d8.bmiColors[0].rgbBlue = '\0';
  local_d8.bmiColors[0].rgbGreen = '\0';
  local_d8.bmiColors[0].rgbRed = '\0';
  local_d8.bmiColors[0].rgbReserved = '\0';
  local_f0 = (void *)0x0;
  local_d8.bmiHeader.biWidth = uVar17;
  h = CreateDIBSection((HDC)0x0,&local_d8,0,&local_f0,(HANDLE)0x0,0);
  local_e0 = h;
  if (h == (HBITMAP)0x0) goto LAB_1800b2afc;
  h_00 = CreateDIBSection((HDC)0x0,&local_d8,0,&local_f0,(HANDLE)0x0,0);
  if (h_00 != (HBITMAP)0x0) {
    iVar5 = GetObjectW(h,0x20,local_88);
    if (((iVar5 != 0) && (iVar5 = GetObjectW(h_00,0x20,local_68), iVar5 != 0)) &&
       (uVar6 = FUN_180015724((longlong)plVar18,&local_100,(RECT *)0x0,0x10,'\0'), -1 < (int)uVar6))
    {
      plVar1 = (longlong *)(param_1 + -0x5a08);
      bVar16 = 1;
      local_e8 = local_f8;
      bVar3 = 1;
      if (*(int *)(param_1 + -0x5a00) == 0) {
LAB_1800b27dc:
        bVar16 = bVar3;
        if (uVar12 != 0) {
          lVar14 = local_e8;
          do {
            uVar15 = 0;
            if (uVar17 != 0) {
              do {
                if (*(byte *)(lVar14 + (ulonglong)((int)uVar15 * 4 + 3)) < 0x80) {
                  local_70[uVar15] = 0xffffff;
                  uVar7 = 0;
                }
                else {
                  local_70[uVar15] = 0;
                  uVar7 = *(undefined4 *)(lVar14 + uVar15 * 4);
                }
                local_50[uVar15] = uVar7;
                uVar6 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar6;
              } while (uVar6 < uVar17);
            }
            lVar14 = lVar14 + (int)local_100;
            local_70 = (undefined4 *)((longlong)local_70 + (longlong)local_7c);
            local_50 = (undefined4 *)((longlong)local_50 + (longlong)local_5c);
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
      }
      else {
        uVar6 = 0;
        do {
          bVar3 = FUN_180016a38(*(longlong *)(*plVar1 + (ulonglong)uVar6 * 8));
          lVar14 = local_e8;
          bVar16 = bVar16 & bVar3;
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(param_1 + -0x5a00));
        bVar3 = bVar16;
        if (bVar16 != 0) goto LAB_1800b27dc;
        if (*(uint *)(param_1 + -0x5a00) != 0) {
          uVar6 = 0;
          do {
            FUN_180016a80(*(longlong *)(*plVar1 + (ulonglong)uVar6 * 8),plVar18,uVar17,uVar12,
                          param_2,param_3,lVar14,local_100);
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(uint *)(param_1 + -0x5a00));
        }
        for (; uVar12 != 0; uVar12 = uVar12 - 1) {
          if (uVar17 != 0) {
            uVar15 = 0;
            if ((3 < uVar17) &&
               ((local_70 + (uVar17 - 1) < local_50 || (local_50 + (uVar17 - 1) < local_70)))) {
              do {
                uVar6 = (int)uVar15 + 4;
                uVar15 = (ulonglong)uVar6;
              } while (uVar6 < (uVar17 & 0xfffffffc));
              uVar15 = (ulonglong)(uVar17 & 0xfffffffc) * 4;
              puVar13 = local_70;
              for (uVar10 = uVar15 / 4; uVar10 != 0; uVar10 = uVar10 - 1) {
                *puVar13 = 0xffffff;
                puVar13 = puVar13 + 1;
              }
              FUN_1800fbea0((undefined1 *)local_50,0,uVar15 / 4 << 2);
              uVar15 = (ulonglong)uVar6;
              if (uVar17 <= uVar6) goto LAB_1800b2926;
            }
            do {
              uVar6 = (int)uVar15 + 1;
              local_70[uVar15] = 0xffffff;
              local_50[uVar15] = 0;
              uVar15 = (ulonglong)uVar6;
            } while (uVar6 < uVar17);
          }
LAB_1800b2926:
          local_70 = (undefined4 *)((longlong)local_70 + (longlong)local_7c);
          local_50 = (undefined4 *)((longlong)local_50 + (longlong)local_5c);
        }
      }
      FUN_1800157d8(plVar18);
      h = local_e0;
      local_a8.fIcon = 0;
      local_a8.hbmMask = local_e0;
      local_a8.xHotspot = param_2;
      local_a8.yHotspot = param_3;
      local_a8.hbmColor = h_00;
      hCursor = CreateIconIndirect(&local_a8);
      if (hCursor == (HICON)0x0) {
        uVar15 = 0x8876086c;
      }
      else {
        if ((bVar16 != 0) && (uVar11 = FUN_180030d78(), (char)uVar11 != '\0')) {
          if (*(code **)(DAT_180111f48 + 0x78) == (code *)0x0) {
            SetCursor(hCursor);
          }
          else {
            (**(code **)(DAT_180111f48 + 0x78))();
          }
        }
        if (*(HICON *)(param_1 + -0x59a8) == (HICON)0x0) {
          if (bVar16 == 0) {
            uVar15 = FUN_180030d78();
            uVar10 = 0;
            if (*(int *)(param_1 + -0x5a00) != 0) {
              do {
                lVar14 = *(longlong *)(*plVar1 + uVar10 * 8);
                plVar18 = *(longlong **)(lVar14 + 0x100);
                (**(code **)(*plVar18 + 0x68))(plVar18,uVar15 & 0xff);
                uVar17 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar17;
                *(char *)(lVar14 + 0x120) = (char)uVar15;
                h = local_e0;
              } while (uVar17 < *(uint *)(param_1 + -0x5a00));
            }
          }
        }
        else {
          DestroyIcon(*(HICON *)(param_1 + -0x59a8));
        }
        *(HICON *)(param_1 + -0x59a8) = hCursor;
        uVar15 = 0;
      }
    }
    DeleteObject(h_00);
  }
  DeleteObject(h);
LAB_1800b2afc:
  if (bVar2) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar15;
}


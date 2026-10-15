/*
 * FUN_10006cef at 10006cef
 * undefined4 __thiscall FUN_10006cef(void * this, DWORD param_1, DWORD param_2, void * param_3)
 * Address ranges: 10006cef-100071bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10006cef(void *this,DWORD param_1,DWORD param_2,void *param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  HICON pHVar5;
  int iVar6;
  uint extraout_ECX;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  void *pvVar11;
  int *piVar12;
  uint uVar13;
  undefined4 *puVar14;
  byte local_d9;
  uint local_d8;
  uint local_d4;
  char local_cd;
  uint local_cc;
  undefined4 *local_c8;
  uint local_c4;
  uint local_c0;
  void *local_bc;
  HBITMAP local_b8;
  HBITMAP local_b4;
  undefined4 local_b0;
  void *local_ac;
  uint local_a8;
  uint local_a4;
  BITMAPINFO local_98;
  ICONINFO local_6c;
  undefined1 local_58 [12];
  int local_4c;
  undefined4 *local_44;
  undefined1 local_40 [12];
  int local_34;
  undefined4 *local_2c;
  int local_28 [6];
  uint local_10;
  uint local_c;
  
  local_bc = this;
  FUN_10003838(&local_cd,(byte)(*(uint *)((int)this + 0xb0c) >> 2) & 1);
  pvVar11 = local_bc;
  if (param_3 == (void *)0x0) {
    local_d8 = 0;
    if (*(int *)((int)this + 0xad4) != 0) {
      do {
        FUN_1000fb0f(*(void **)(*(int *)((int)this + 0xad0) + local_d8 * 4),0,0,0,0,0,0,0);
        iVar6 = **(int **)((int)this + 0xad0);
        (**(code **)(**(int **)(iVar6 + 0xb8) + 0x34))(0);
        local_d8 = local_d8 + 1;
        *(undefined1 *)(iVar6 + 0xd4) = 0;
      } while (local_d8 < *(uint *)((int)this + 0xad4));
    }
    FUN_100057e0((int)this);
    local_b0 = 0;
    goto LAB_100071aa;
  }
  piVar10 = (int *)((int)param_3 + 0x28);
  piVar12 = local_28;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar12 = *piVar10;
    piVar10 = piVar10 + 1;
    piVar12 = piVar12 + 1;
  }
  FUN_10003167(*(void **)((int)local_bc + 0xacc),*(int *)((int)local_bc + 0xb2c),&local_a8);
  local_b0 = 0x8876086c;
  local_c0 = local_10;
  uVar3 = FUN_10023b0b(local_10);
  if ((char)uVar3 == '\0') goto LAB_100071aa;
  local_cc = local_c;
  uVar3 = FUN_10023b0b(local_c);
  if (((((char)uVar3 == '\0') || (local_28[0] != 0x15)) || (local_a8 <= local_10)) ||
     (local_a4 <= extraout_ECX)) goto LAB_100071aa;
  local_98.bmiHeader.biSize = 0x28;
  local_98.bmiHeader.biHeight = -extraout_ECX;
  local_98.bmiHeader.biWidth = local_10;
  local_98.bmiHeader.biCompression = 0;
  local_98.bmiHeader.biSizeImage = 0;
  local_98.bmiHeader.biPlanes = 1;
  local_98.bmiHeader.biBitCount = 0x20;
  local_98.bmiHeader.biXPelsPerMeter = 0;
  local_98.bmiHeader.biYPelsPerMeter = 0;
  local_98.bmiHeader.biClrUsed = 0;
  local_98.bmiHeader.biClrImportant = 0;
  local_98.bmiColors[0].rgbBlue = '\0';
  local_98.bmiColors[0].rgbGreen = '\0';
  local_98.bmiColors[0].rgbRed = '\0';
  local_98.bmiColors[0].rgbReserved = '\0';
  local_ac = (void *)0x0;
  local_b4 = CreateDIBSection((HDC)0x0,&local_98,0,&local_ac,(HANDLE)0x0,0);
  if (local_b4 == (HBITMAP)0x0) goto LAB_100071aa;
  local_b8 = CreateDIBSection((HDC)0x0,&local_98,0,&local_ac,(HANDLE)0x0,0);
  if (local_b8 != (HBITMAP)0x0) {
    iVar6 = GetObjectW(local_b4,0x18,local_58);
    if (((iVar6 != 0) && (iVar6 = GetObjectW(local_b8,0x18,local_40), iVar6 != 0)) &&
       (uVar4 = FUN_1000ee58(param_3,(int *)&local_a8,(RECT *)0x0,0x10), -1 < (int)uVar4)) {
      local_c4 = local_a4;
      local_c8 = local_44;
      if (*(int *)((int)pvVar11 + 0xad4) == 0) {
        local_d9 = 1;
LAB_10006ffd:
        local_d4 = 0;
        puVar9 = local_c8;
        if (local_cc != 0) {
          do {
            uVar4 = 0;
            if (local_10 != 0) {
              do {
                if (*(byte *)(local_c4 + 3 + uVar4 * 4) < 0x80) {
                  puVar9[uVar4] = 0xffffff;
                  local_d8 = 0;
                }
                else {
                  puVar9[uVar4] = 0;
                  local_d8 = *(undefined4 *)(local_c4 + uVar4 * 4);
                }
                local_2c[uVar4] = local_d8;
                uVar4 = uVar4 + 1;
                local_10 = local_c0;
              } while (uVar4 < local_c0);
            }
            local_c4 = local_c4 + local_a8;
            local_2c = (undefined4 *)((int)local_2c + local_34);
            local_d4 = local_d4 + 1;
            puVar9 = (undefined4 *)((int)puVar9 + local_4c);
            pvVar11 = local_bc;
          } while (local_d4 < local_cc);
        }
      }
      else {
        uVar4 = 0;
        local_d9 = 1;
        do {
          bVar1 = FUN_1000fadf(*(int *)(*(int *)((int)pvVar11 + 0xad0) + uVar4 * 4));
          uVar13 = local_c0;
          uVar7 = local_cc;
          local_d9 = bVar1 & local_d9;
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)((int)pvVar11 + 0xad4));
        local_10 = local_c0;
        if (local_d9 != 0) goto LAB_10006ffd;
        local_d4 = 0;
        if (*(uint *)((int)pvVar11 + 0xad4) != 0) {
          do {
            FUN_1000fb0f(*(void **)(*(int *)((int)pvVar11 + 0xad0) + local_d4 * 4),param_3,uVar13,
                         uVar7,param_1,param_2,local_c4,local_a8);
            local_d4 = local_d4 + 1;
          } while (local_d4 < *(uint *)((int)pvVar11 + 0xad4));
        }
        uVar4 = 0;
        local_d4 = 0;
        if (local_cc != 0) {
          do {
            if (uVar13 != 0) {
              uVar7 = uVar4;
              if ((3 < uVar13) &&
                 ((local_c8 + (uVar13 - 1) < local_2c || (local_2c + (uVar13 - 1) < local_c8)))) {
                uVar13 = uVar13 - (uVar13 & 3);
                do {
                  uVar7 = uVar7 + 4;
                } while (uVar7 < uVar13);
                uVar13 = uVar13 + 3;
                uVar8 = uVar13 & 0x3ffffffc;
                puVar9 = local_c8;
                for (uVar13 = uVar13 & 0x3ffffffc; puVar14 = local_2c, uVar13 != 0;
                    uVar13 = uVar13 - 1) {
                  *puVar9 = 0xffffff;
                  puVar9 = puVar9 + 1;
                }
                for (; uVar13 = local_c0, uVar8 != 0; uVar8 = uVar8 - 1) {
                  *puVar14 = 0;
                  puVar14 = puVar14 + 1;
                }
              }
              for (; uVar7 < uVar13; uVar7 = uVar7 + 1) {
                local_c8[uVar7] = 0xffffff;
                local_2c[uVar7] = 0;
              }
            }
            local_c8 = (undefined4 *)((int)local_c8 + local_4c);
            local_2c = (undefined4 *)((int)local_2c + local_34);
            local_d4 = local_d4 + 1;
            pvVar11 = local_bc;
          } while (local_d4 < local_cc);
        }
      }
      uVar4 = 0;
      FUN_1000ee9d(param_3);
      local_6c.xHotspot = param_1;
      local_6c.yHotspot = param_2;
      local_6c.hbmMask = local_b4;
      local_6c.hbmColor = local_b8;
      local_6c.fIcon = 0;
      pHVar5 = CreateIconIndirect(&local_6c);
      if (pHVar5 != (HICON)0x0) {
        if ((local_d9 != 0) && (cVar2 = FUN_10024c06(), cVar2 != '\0')) {
          FUN_1002500a();
        }
        if (*(HICON *)((int)pvVar11 + 0xb20) == (HICON)0x0) {
          if (local_d9 == 0) {
            cVar2 = FUN_10024c06();
            local_d4 = CONCAT31(local_d4._1_3_,cVar2);
            if (*(int *)((int)pvVar11 + 0xad4) != 0) {
              do {
                FUN_1000fb6f(*(void **)(*(int *)((int)pvVar11 + 0xad0) + uVar4 * 4),local_d4);
                uVar4 = uVar4 + 1;
              } while (uVar4 < *(uint *)((int)pvVar11 + 0xad4));
            }
          }
        }
        else {
          DestroyIcon(*(HICON *)((int)pvVar11 + 0xb20));
        }
        *(HICON *)((int)pvVar11 + 0xb20) = pHVar5;
        local_b0 = 0;
      }
    }
    DeleteObject(local_b8);
  }
  DeleteObject(local_b4);
LAB_100071aa:
  FUN_10003881(&local_cd);
  return local_b0;
}


/*
 * FUN_140011118 at 140011118
 * ulonglong __cdecl FUN_140011118(ulonglong param_1, uint param_2, int * param_3)
 * Address ranges: 140011118-1400119d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_140011118(ulonglong param_1,uint param_2,int *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  HFONT pHVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  SIZE_T SVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  HFONT pHVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  HDWP local_d0;
  LOGFONTW local_b0;
  
  if (param_2 == *(uint *)(param_1 + 0x90)) {
    return param_1;
  }
  if (param_3 == (int *)0x0) {
    iVar10 = MulDiv(*(int *)(param_1 + 0x20),param_2,*(int *)(param_1 + 0x1c));
    iVar9 = MulDiv(*(int *)(param_1 + 0x24),param_2,*(int *)(param_1 + 0x1c));
    iVar7 = MulDiv(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20),param_2,
                   *(int *)(param_1 + 0x1c));
    iVar8 = MulDiv(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24),param_2,
                   *(int *)(param_1 + 0x1c));
  }
  else {
    iVar7 = MulDiv(*(int *)(param_1 + 0x3c),param_2,*(int *)(param_1 + 0x1c));
    iVar9 = *(int *)(param_1 + 0x48);
    iVar7 = iVar7 + *(int *)(param_1 + 0x44);
    iVar8 = MulDiv(*(int *)(param_1 + 0x40),param_2,*(int *)(param_1 + 0x1c));
    iVar8 = iVar8 + iVar9;
    iVar9 = ((param_3[3] + param_3[1]) - iVar8) / 2;
    iVar10 = ((param_3[2] - iVar7) + *param_3) / 2;
  }
  SetWindowPos(*(HWND *)(*(longlong *)(param_1 + 0x10) + 0x18),(HWND)0x0,iVar10,iVar9,iVar7,iVar8,
               0x214);
  if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) == 0) ||
     (pHVar21 = *(HFONT *)(param_1 + 0x30), pHVar21 == (HFONT)0x0)) goto LAB_140011550;
  iVar7 = *(int *)(param_1 + 0x1c);
  uVar11 = *(uint *)(param_1 + 0x6c);
  uVar23 = 0;
  uVar22 = (longlong)&pHVar21->unused + (ulonglong)param_2 + (ulonglong)(uint)(iVar7 << 0x10);
  if (uVar11 == 0) {
LAB_1400113a4:
    plVar1 = (longlong *)(param_1 + 0x60);
    if (uVar11 == *(uint *)(param_1 + 0x68)) {
      uVar18 = (ulonglong)*(uint *)(param_1 + 0x68) & 0x7fffffff;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar18 << 1;
      SVar17 = uVar18 << 6;
      if (SUB168(auVar5 * ZEXT816(0x20),8) != 0) {
        SVar17 = 0xffffffffffffffff;
      }
      lVar13 = thunk_FUN_1400247f0(SVar17);
      if (lVar13 != 0) {
        uVar18 = 0;
        if (*(int *)(param_1 + 0x68) != 0) {
          do {
            uVar11 = (int)uVar18 + 1;
            puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + uVar18 * 0x20);
            puVar2 = (undefined8 *)(lVar13 + uVar18 * 0x20);
            uVar27 = *puVar3;
            uVar26 = puVar3[3];
            uVar25 = puVar3[2];
            puVar2[1] = puVar3[1];
            *puVar2 = uVar27;
            puVar2[3] = uVar26;
            puVar2[2] = uVar25;
            uVar18 = (ulonglong)uVar11;
          } while (uVar11 < *(uint *)(param_1 + 0x68));
        }
        thunk_FUN_140024830((LPVOID)*plVar1);
        *plVar1 = lVar13;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) << 1;
      }
    }
    uVar18 = (ulonglong)*(uint *)(param_1 + 0x6c);
    while ((uint)uVar23 < (uint)uVar18) {
      uVar19 = (ulonglong)((uint)uVar18 - 1);
      puVar3 = (undefined8 *)(*plVar1 + uVar18 * 0x20);
      puVar2 = (undefined8 *)(*plVar1 + uVar19 * 0x20);
      uVar27 = *puVar2;
      uVar26 = puVar2[3];
      uVar25 = puVar2[2];
      puVar3[1] = puVar2[1];
      *puVar3 = uVar27;
      puVar3[3] = uVar26;
      puVar3[2] = uVar25;
      uVar18 = uVar19;
    }
    lVar14 = uVar23 * 0x20;
    *(ulonglong *)(*plVar1 + lVar14) = uVar22;
    lVar13 = *plVar1;
    *(ulonglong *)(lVar14 + lVar13 + 0x10) = CONCAT44(param_2,iVar7);
    *(HFONT *)(lVar14 + lVar13 + 8) = pHVar21;
    iVar8 = GetObjectW(pHVar21,0x5c,&local_b0);
    if (iVar8 == 0) {
      GetLastError();
    }
    else {
      local_b0.lfHeight = MulDiv(local_b0.lfHeight,param_2,iVar7);
      pHVar12 = CreateFontIndirectW(&local_b0);
      if (pHVar12 != (HFONT)0x0) {
        pHVar21 = pHVar12;
      }
    }
    *(HFONT *)(lVar14 + *plVar1 + 0x18) = pHVar21;
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  }
  else {
    uVar16 = 0;
    uVar15 = uVar11;
    do {
      uVar4 = uVar15 + uVar16 >> 1;
      uVar23 = (ulonglong)uVar4;
      uVar18 = *(ulonglong *)(*(longlong *)(param_1 + 0x60) + uVar23 * 0x20);
      if (uVar18 <= uVar22) {
        if (uVar22 <= uVar18) break;
        uVar16 = uVar4 + 1;
        uVar23 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar15;
      }
      uVar15 = uVar4;
    } while (uVar15 != uVar16);
    if ((uint)uVar23 == uVar11) goto LAB_1400113a4;
    lVar14 = uVar23 * 0x20;
    lVar13 = *(longlong *)(param_1 + 0x60) + lVar14;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x60) + lVar14) != uVar22) goto LAB_1400113a4;
    if (((pHVar21 != *(HFONT *)(lVar13 + 8)) || (param_2 != *(uint *)(lVar13 + 0x14))) ||
       (iVar7 != *(int *)(lVar13 + 0x10))) {
      DeleteObject(*(HGDIOBJ *)(lVar13 + 0x18));
      *(ulonglong *)(*(longlong *)(param_1 + 0x60) + lVar14) = uVar22;
      lVar13 = lVar14 + *(longlong *)(param_1 + 0x60);
      *(ulonglong *)(lVar13 + 0x10) = CONCAT44(param_2,iVar7);
      *(HFONT *)(lVar13 + 8) = pHVar21;
      iVar8 = GetObjectW(pHVar21,0x5c,&local_b0);
      if (iVar8 == 0) {
        GetLastError();
      }
      else {
        local_b0.lfHeight = MulDiv(local_b0.lfHeight,param_2,iVar7);
        pHVar12 = CreateFontIndirectW(&local_b0);
        if (pHVar12 != (HFONT)0x0) {
          pHVar21 = pHVar12;
        }
      }
      *(HFONT *)(lVar14 + *(longlong *)(param_1 + 0x60) + 0x18) = pHVar21;
    }
  }
  SendMessageW(*(HWND *)(*(longlong *)(param_1 + 0x10) + 0x20),0x30,
               *(WPARAM *)(lVar14 + *(longlong *)(param_1 + 0x60) + 0x18),0);
  if (*(int *)(param_1 + 0x38) != -1) {
    iVar7 = MulDiv(*(int *)(param_1 + 0x38),param_2,*(int *)(param_1 + 0x1c));
    SendMessageW(*(HWND *)(*(longlong *)(param_1 + 0x10) + 0x20),0x418,0,(longlong)iVar7);
  }
LAB_140011550:
  local_d0 = BeginDeferWindowPos(*(int *)(param_1 + 0x58) + 1);
  uVar22 = 0;
  if (*(int *)(param_1 + 0x58) != 0) {
    do {
      lVar13 = uVar22 * 0x20;
      pHVar21 = *(HFONT *)(lVar13 + *(longlong *)(param_1 + 0x50) + 0x18);
      if (pHVar21 != (HFONT)0x0) {
        iVar7 = *(int *)(param_1 + 0x1c);
        uVar11 = *(uint *)(param_1 + 0x6c);
        uVar18 = 0;
        uVar23 = (longlong)&pHVar21->unused + (ulonglong)param_2 + (ulonglong)(uint)(iVar7 << 0x10);
        if (uVar11 == 0) {
LAB_1400116cc:
          plVar1 = (longlong *)(param_1 + 0x60);
          if (uVar11 == *(uint *)(param_1 + 0x68)) {
            uVar19 = (ulonglong)*(uint *)(param_1 + 0x68) & 0x7fffffff;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar19 << 1;
            SVar17 = uVar19 << 6;
            if (SUB168(auVar6 * ZEXT816(0x20),8) != 0) {
              SVar17 = 0xffffffffffffffff;
            }
            lVar14 = thunk_FUN_1400247f0(SVar17);
            if (lVar14 != 0) {
              uVar19 = 0;
              if (*(int *)(param_1 + 0x68) != 0) {
                do {
                  uVar11 = (int)uVar19 + 1;
                  puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + uVar19 * 0x20);
                  puVar2 = (undefined8 *)(lVar14 + uVar19 * 0x20);
                  uVar27 = *puVar3;
                  uVar26 = puVar3[3];
                  uVar25 = puVar3[2];
                  puVar2[1] = puVar3[1];
                  *puVar2 = uVar27;
                  puVar2[3] = uVar26;
                  puVar2[2] = uVar25;
                  uVar19 = (ulonglong)uVar11;
                } while (uVar11 < *(uint *)(param_1 + 0x68));
              }
              thunk_FUN_140024830((LPVOID)*plVar1);
              *plVar1 = lVar14;
              *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) << 1;
            }
          }
          uVar19 = (ulonglong)*(uint *)(param_1 + 0x6c);
          while ((uint)uVar18 < (uint)uVar19) {
            uVar20 = (ulonglong)((uint)uVar19 - 1);
            puVar3 = (undefined8 *)(*plVar1 + uVar19 * 0x20);
            puVar2 = (undefined8 *)(*plVar1 + uVar20 * 0x20);
            uVar27 = *puVar2;
            uVar26 = puVar2[3];
            uVar25 = puVar2[2];
            puVar3[1] = puVar2[1];
            *puVar3 = uVar27;
            puVar3[3] = uVar26;
            puVar3[2] = uVar25;
            uVar19 = uVar20;
          }
          lVar24 = uVar18 * 0x20;
          *(ulonglong *)(*plVar1 + lVar24) = uVar23;
          lVar14 = *plVar1;
          *(ulonglong *)(lVar24 + lVar14 + 0x10) = CONCAT44(param_2,iVar7);
          *(HFONT *)(lVar24 + lVar14 + 8) = pHVar21;
          iVar8 = GetObjectW(pHVar21,0x5c,&local_b0);
          if (iVar8 == 0) {
            GetLastError();
          }
          else {
            local_b0.lfHeight = MulDiv(local_b0.lfHeight,param_2,iVar7);
            pHVar12 = CreateFontIndirectW(&local_b0);
            if (pHVar12 != (HFONT)0x0) {
              pHVar21 = pHVar12;
            }
          }
          *(HFONT *)(lVar24 + *plVar1 + 0x18) = pHVar21;
          *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
        }
        else {
          uVar16 = 0;
          uVar15 = uVar11;
          do {
            uVar4 = uVar15 + uVar16 >> 1;
            uVar18 = (ulonglong)uVar4;
            uVar19 = *(ulonglong *)(*(longlong *)(param_1 + 0x60) + uVar18 * 0x20);
            if (uVar19 <= uVar23) {
              if (uVar23 <= uVar19) break;
              uVar16 = uVar4 + 1;
              uVar18 = (ulonglong)(uVar4 + 1);
              uVar4 = uVar15;
            }
            uVar15 = uVar4;
          } while (uVar15 != uVar16);
          if ((uint)uVar18 == uVar11) goto LAB_1400116cc;
          lVar24 = uVar18 * 0x20;
          lVar14 = *(longlong *)(param_1 + 0x60) + lVar24;
          if (*(ulonglong *)(*(longlong *)(param_1 + 0x60) + lVar24) != uVar23) goto LAB_1400116cc;
          if (((pHVar21 != *(HFONT *)(lVar14 + 8)) || (param_2 != *(uint *)(lVar14 + 0x14))) ||
             (iVar7 != *(int *)(lVar14 + 0x10))) {
            DeleteObject(*(HGDIOBJ *)(lVar14 + 0x18));
            *(ulonglong *)(*(longlong *)(param_1 + 0x60) + lVar24) = uVar23;
            lVar14 = lVar24 + *(longlong *)(param_1 + 0x60);
            *(ulonglong *)(lVar14 + 0x10) = CONCAT44(param_2,iVar7);
            *(HFONT *)(lVar14 + 8) = pHVar21;
            iVar8 = GetObjectW(pHVar21,0x5c,&local_b0);
            if (iVar8 == 0) {
              GetLastError();
            }
            else {
              local_b0.lfHeight = MulDiv(local_b0.lfHeight,param_2,iVar7);
              pHVar12 = CreateFontIndirectW(&local_b0);
              if (pHVar12 != (HFONT)0x0) {
                pHVar21 = pHVar12;
              }
            }
            *(HFONT *)(lVar24 + *(longlong *)(param_1 + 0x60) + 0x18) = pHVar21;
          }
        }
        SendMessageW(*(HWND *)(*(longlong *)(param_1 + 0x50) + lVar13),0x30,
                     *(WPARAM *)(lVar24 + *(longlong *)(param_1 + 0x60) + 0x18),0);
      }
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x50) + lVar13);
      iVar7 = MulDiv(*(int *)((longlong)puVar3 + 0x14) - *(int *)((longlong)puVar3 + 0xc),param_2,
                     *(int *)(param_1 + 0x1c));
      if (local_d0 == (HDWP)0x0) {
        iVar8 = MulDiv(*(int *)(puVar3 + 2) - *(int *)(puVar3 + 1),param_2,*(int *)(param_1 + 0x1c))
        ;
        iVar9 = MulDiv(*(int *)((longlong)puVar3 + 0xc),param_2,*(int *)(param_1 + 0x1c));
        iVar10 = MulDiv(*(int *)(puVar3 + 1),param_2,*(int *)(param_1 + 0x1c));
        SetWindowPos((HWND)*puVar3,(HWND)0x0,iVar10,iVar9,iVar8,iVar7,0x214);
      }
      else {
        iVar8 = MulDiv(*(int *)(puVar3 + 2) - *(int *)(puVar3 + 1),param_2,*(int *)(param_1 + 0x1c))
        ;
        iVar9 = MulDiv(*(int *)((longlong)puVar3 + 0xc),param_2,*(int *)(param_1 + 0x1c));
        iVar10 = MulDiv(*(int *)(puVar3 + 1),param_2,*(int *)(param_1 + 0x1c));
        local_d0 = DeferWindowPos(local_d0,(HWND)*puVar3,(HWND)0x0,iVar10,iVar9,iVar8,iVar7,0x214);
      }
      uVar11 = (int)uVar22 + 1;
      uVar22 = (ulonglong)uVar11;
    } while (uVar11 < *(uint *)(param_1 + 0x58));
  }
  uVar11 = InvalidateRect(*(HWND *)(*(longlong *)(param_1 + 0x10) + 0x18),(RECT *)0x0,1);
  if (local_d0 != (HDWP)0x0) {
    uVar11 = EndDeferWindowPos(local_d0);
  }
  *(uint *)(param_1 + 0x90) = param_2;
  return (ulonglong)uVar11;
}


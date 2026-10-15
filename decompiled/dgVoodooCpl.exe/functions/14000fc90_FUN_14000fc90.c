/*
 * FUN_14000fc90 at 14000fc90
 * undefined8 __fastcall FUN_14000fc90(longlong * param_1, longlong * param_2)
 * Address ranges: 14000fc90-14000ff0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_14000fc90(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  HANDLE pvVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  HFONT pHVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  LOGFONTW local_88;
  
  uVar9 = 0;
  uVar18 = *(uint *)((longlong)param_1 + 0xc);
  uVar20 = (ulonglong)(uint)((int)param_2[1] << 0x10) + *param_2 +
           (ulonglong)*(uint *)((longlong)param_2 + 0xc);
  if (uVar18 != 0) {
    uVar14 = 0;
    uVar17 = uVar18;
    do {
      uVar9 = uVar17 + uVar14 >> 1;
      uVar15 = *(ulonglong *)(*param_1 + (ulonglong)uVar9 * 0x20);
      uVar8 = uVar9;
      if (uVar15 <= uVar20) {
        if (uVar20 <= uVar15) break;
        uVar14 = uVar9 + 1;
        uVar9 = uVar14;
        uVar8 = uVar17;
      }
      uVar17 = uVar8;
    } while (uVar17 != uVar14);
  }
  lVar19 = (ulonglong)uVar9 * 0x20;
  if ((uVar9 != uVar18) && (lVar13 = *param_1, *(ulonglong *)(lVar19 + lVar13) == uVar20)) {
    if ((*param_2 == *(longlong *)(lVar19 + 8 + lVar13)) &&
       ((*(uint *)((longlong)param_2 + 0xc) == *(uint *)(lVar19 + 0x14 + lVar13) &&
        ((int)param_2[1] == *(int *)(lVar19 + 0x10 + lVar13))))) {
      return *(undefined8 *)(lVar19 + 0x18 + lVar13);
    }
    DeleteObject(*(HGDIOBJ *)(lVar19 + 0x18 + lVar13));
    lVar13 = *param_2;
    uVar6 = *(undefined4 *)((longlong)param_2 + 4);
    lVar16 = param_2[1];
    uVar7 = *(undefined4 *)((longlong)param_2 + 0xc);
    pvVar4 = (HANDLE)*param_2;
    *(ulonglong *)(lVar19 + *param_1) = uVar20;
    puVar2 = (undefined4 *)(lVar19 + 8 + *param_1);
    *puVar2 = (int)lVar13;
    puVar2[1] = uVar6;
    puVar2[2] = (int)lVar16;
    puVar2[3] = uVar7;
    iVar10 = GetObjectW(pvVar4,0x5c,&local_88);
    if (iVar10 == 0) {
      GetLastError();
    }
    else {
      local_88.lfHeight =
           MulDiv(local_88.lfHeight,*(int *)((longlong)param_2 + 0xc),(int)param_2[1]);
      pHVar11 = CreateFontIndirectW(&local_88);
      if (pHVar11 != (HFONT)0x0) goto LAB_14000fdac;
    }
    pHVar11 = (HFONT)*param_2;
LAB_14000fdac:
    *(HFONT *)(lVar19 + 0x18 + *param_1) = pHVar11;
    return *(undefined8 *)(lVar19 + 0x18 + *param_1);
  }
  if (uVar18 == *(uint *)(param_1 + 1)) {
    auVar5 = ZEXT816(0x20) * ZEXT416(*(uint *)(param_1 + 1) * 2);
    uVar12 = auVar5._0_8_;
    if (auVar5._8_8_ != 0) {
      uVar12 = 0xffffffffffffffff;
    }
    lVar19 = thunk_FUN_14002423c(uVar12);
    if (lVar19 != 0) {
      uVar18 = 0;
      if ((int)param_1[1] != 0) {
        do {
          lVar13 = *param_1;
          uVar15 = (ulonglong)uVar18;
          uVar18 = uVar18 + 1;
          lVar16 = uVar15 * 0x20;
          puVar1 = (undefined8 *)(lVar13 + lVar16);
          uVar12 = puVar1[1];
          *(undefined8 *)(lVar16 + lVar19) = *puVar1;
          ((undefined8 *)(lVar16 + lVar19))[1] = uVar12;
          puVar1 = (undefined8 *)(lVar13 + 0x10 + lVar16);
          uVar12 = puVar1[1];
          puVar3 = (undefined8 *)(lVar16 + 0x10 + lVar19);
          *puVar3 = *puVar1;
          puVar3[1] = uVar12;
        } while (uVar18 < *(uint *)(param_1 + 1));
      }
      FUN_140024260((LPVOID)*param_1);
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
      *param_1 = lVar19;
    }
  }
  uVar18 = *(uint *)((longlong)param_1 + 0xc);
  while (uVar9 < uVar18) {
    lVar19 = *param_1;
    lVar13 = (ulonglong)(uVar18 - 1) * 0x20;
    puVar1 = (undefined8 *)(lVar19 + lVar13);
    uVar12 = puVar1[1];
    puVar3 = (undefined8 *)(lVar19 + (ulonglong)uVar18 * 0x20);
    *puVar3 = *puVar1;
    puVar3[1] = uVar12;
    puVar1 = (undefined8 *)(lVar19 + 0x10 + lVar13);
    uVar12 = puVar1[1];
    puVar3 = (undefined8 *)(lVar19 + 0x10 + (ulonglong)uVar18 * 0x20);
    *puVar3 = *puVar1;
    puVar3[1] = uVar12;
    uVar18 = uVar18 - 1;
  }
  lVar16 = (ulonglong)uVar9 * 0x20;
  lVar19 = *param_2;
  uVar6 = *(undefined4 *)((longlong)param_2 + 4);
  lVar13 = param_2[1];
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xc);
  pvVar4 = (HANDLE)*param_2;
  *(ulonglong *)(lVar16 + *param_1) = uVar20;
  puVar2 = (undefined4 *)(lVar16 + 8 + *param_1);
  *puVar2 = (int)lVar19;
  puVar2[1] = uVar6;
  puVar2[2] = (int)lVar13;
  puVar2[3] = uVar7;
  iVar10 = GetObjectW(pvVar4,0x5c,&local_88);
  if (iVar10 == 0) {
    GetLastError();
  }
  else {
    local_88.lfHeight = MulDiv(local_88.lfHeight,*(int *)((longlong)param_2 + 0xc),(int)param_2[1]);
    pHVar11 = CreateFontIndirectW(&local_88);
    if (pHVar11 != (HFONT)0x0) goto LAB_14000fed3;
  }
  pHVar11 = (HFONT)*param_2;
LAB_14000fed3:
  *(HFONT *)(lVar16 + 0x18 + *param_1) = pHVar11;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return *(undefined8 *)(lVar16 + 0x18 + *param_1);
}


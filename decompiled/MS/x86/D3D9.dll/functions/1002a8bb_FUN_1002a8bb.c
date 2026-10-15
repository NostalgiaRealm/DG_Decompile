/*
 * FUN_1002a8bb at 1002a8bb
 * undefined4 __fastcall FUN_1002a8bb(int param_1, HWND param_2, int * param_3, undefined4 * param_4)
 * Address ranges: 1002a8bb-1002aaf4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1002a8bb(int param_1,HWND param_2,int *param_3,undefined4 *param_4)

{
  char cVar1;
  bool bVar2;
  HWND pHVar3;
  int iVar4;
  HWND pHVar5;
  void *this;
  undefined4 *puVar6;
  HGDIOBJ pvVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar9;
  int *piVar10;
  int *piVar11;
  HDC hdc;
  undefined4 uVar12;
  byte local_68 [64];
  int local_28 [7];
  undefined4 *local_c;
  char local_5;
  
  iVar9 = param_1 * 0x228;
  local_c = (undefined4 *)0x0;
  if ((&DAT_100df4d2)[iVar9] == '\0') {
    return 0;
  }
  pHVar3 = (HWND)(**(code **)(*param_3 + 0x14))();
  if ((param_2 == (HWND)0x0) || (param_2 == pHVar3)) {
    bVar2 = true;
    if (param_2 != (HWND)0x0) goto LAB_1002a900;
  }
  else {
    bVar2 = false;
LAB_1002a900:
    if (!bVar2) {
      iVar4 = GetClassNameA(param_2,(LPSTR)local_68,0x40);
      if (iVar4 == 0) {
        return local_c;
      }
      FUN_100cfe44((LPCSTR)local_68);
      iVar4 = 0;
      do {
        if (local_68[iVar4] != (&DAT_100d5128)[iVar4]) {
          uVar8 = -(uint)(local_68[iVar4] < (byte)(&DAT_100d5128)[iVar4]) | 1;
          goto LAB_1002a94c;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 9);
      uVar8 = 0;
LAB_1002a94c:
      cVar1 = uVar8 == 0;
      if ((uVar8 != 0) &&
         (local_5 = uVar8 == 0, pHVar5 = GetParent(param_2), cVar1 = local_5, pHVar3 == pHVar5)) {
        iVar4 = 0;
        do {
          if (local_68[iVar4] != "mciwndclass"[iVar4]) {
            local_5 = '\0';
            cVar1 = local_5;
            goto LAB_1002a98a;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 != 0xc);
        local_5 = '\x01';
        cVar1 = local_5;
      }
LAB_1002a98a:
      if (cVar1 == '\0') {
        return local_c;
      }
    }
  }
  cVar1 = (**(code **)(*(int *)(&DAT_100df2e8)[param_1 * 0x8a] + 0x18))();
  if (cVar1 != '\0') {
    return local_c;
  }
  FUN_10029908(&local_5);
  if (*(int *)(&DAT_100df4c4 + iVar9) == 0) {
    puVar6 = *(undefined4 **)(&DAT_100df4c0 + iVar9);
    local_c = puVar6;
    if (puVar6 == (undefined4 *)0x0) {
LAB_1002a9ec:
      if (puVar6 != (undefined4 *)0x0) {
        FUN_1002b5d0(puVar6);
        FUN_100cfd6c(local_c);
      }
      this = (void *)FUN_100cfd55(0x88);
      if (this == (void *)0x0) {
        puVar6 = (undefined4 *)0x0;
        uVar12 = 0;
      }
      else {
        puVar6 = FUN_1002b552(this,(&DAT_100df2e8)[param_1 * 0x8a],
                              *(undefined4 *)(&DAT_100df464 + iVar9),
                              *(undefined4 *)(&DAT_100df468 + iVar9),
                              *(undefined4 *)(&DAT_100df480 + iVar9),
                              *(undefined4 *)(&DAT_100df484 + iVar9),
                              (undefined4 *)(&DAT_100df498 + iVar9),param_3);
        uVar12 = extraout_ECX;
      }
      *(undefined4 **)(&DAT_100df4c0 + iVar9) = puVar6;
      if ((puVar6 != (undefined4 *)0x0) &&
         (bVar2 = FUN_1002b6c1((int)puVar6), uVar12 = extraout_ECX_00, !bVar2)) {
        puVar6 = *(undefined4 **)(&DAT_100df4c0 + iVar9);
        if (puVar6 != (undefined4 *)0x0) {
          FUN_1002b5d0(puVar6);
          uVar12 = 0x88;
          FUN_100cfd6c(puVar6);
        }
        *(undefined4 *)(&DAT_100df4c0 + iVar9) = 0;
      }
    }
    else {
      piVar10 = puVar6 + 7;
      piVar11 = local_28;
      for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar11 = *piVar10;
        piVar10 = piVar10 + 1;
        piVar11 = piVar11 + 1;
      }
      if ((local_28[0] != *(int *)(&DAT_100df464 + iVar9)) ||
         (uVar12 = 0, local_28[1] != *(int *)(&DAT_100df468 + iVar9))) goto LAB_1002a9ec;
    }
    iVar4 = *(int *)(&DAT_100df4c0 + iVar9);
    if (iVar4 != 0) {
      hdc = (HDC)0x0;
      bVar2 = FUN_1002d5ae((void *)(iVar4 + 4),(HANDLE)0x0,0,uVar12,'\0');
      if ((bVar2) && (hdc = CreateCompatibleDC((HDC)0x0), hdc != (HDC)0x0)) {
        pvVar7 = SelectObject(hdc,*(HGDIOBJ *)(iVar4 + 0x48));
        *(HGDIOBJ *)(iVar4 + 0x50) = pvVar7;
      }
      *(HDC *)(&DAT_100df4c4 + iVar9) = hdc;
      *(undefined4 *)(&DAT_100df4c8 + iVar9) = 0;
    }
    if (*(int *)(&DAT_100df4c4 + iVar9) == 0) goto LAB_1002aad3;
  }
  *(int *)(&DAT_100df4c8 + iVar9) = *(int *)(&DAT_100df4c8 + iVar9) + 1;
LAB_1002aad3:
  *param_4 = 1;
  local_c = *(undefined4 **)(&DAT_100df4c4 + iVar9);
  FUN_10029968(&local_5);
  return local_c;
}


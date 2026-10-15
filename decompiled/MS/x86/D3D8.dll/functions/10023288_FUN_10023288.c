/*
 * FUN_10023288 at 10023288
 * undefined4 __fastcall FUN_10023288(int param_1, HWND param_2, int * param_3, undefined4 * param_4)
 * Address ranges: 10023288-100234c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10023288(int param_1,HWND param_2,int *param_3,undefined4 *param_4)

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
  int iVar9;
  int *piVar10;
  int *piVar11;
  HDC hdc;
  byte local_68 [64];
  int local_28 [7];
  undefined4 *local_c;
  char local_5;
  
  iVar9 = param_1 * 0x228;
  local_c = (undefined4 *)0x0;
  if ((&DAT_100ba90a)[iVar9] == '\0') {
    return 0;
  }
  pHVar3 = (HWND)(**(code **)(*param_3 + 0x14))();
  if ((param_2 == (HWND)0x0) || (param_2 == pHVar3)) {
    bVar2 = true;
    if (param_2 != (HWND)0x0) goto LAB_100232cd;
  }
  else {
    bVar2 = false;
LAB_100232cd:
    if (!bVar2) {
      iVar4 = GetClassNameA(param_2,(LPSTR)local_68,0x40);
      if (iVar4 == 0) {
        return local_c;
      }
      FUN_100ad564((LPCSTR)local_68);
      iVar4 = 0;
      do {
        if (local_68[iVar4] != (&DAT_100b1c78)[iVar4]) {
          uVar8 = -(uint)(local_68[iVar4] < (byte)(&DAT_100b1c78)[iVar4]) | 1;
          goto LAB_10023319;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 9);
      uVar8 = 0;
LAB_10023319:
      cVar1 = uVar8 == 0;
      if ((uVar8 != 0) &&
         (local_5 = uVar8 == 0, pHVar5 = GetParent(param_2), cVar1 = local_5, pHVar3 == pHVar5)) {
        iVar4 = 0;
        do {
          if (local_68[iVar4] != "mciwndclass"[iVar4]) {
            local_5 = '\0';
            cVar1 = local_5;
            goto LAB_10023357;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 != 0xc);
        local_5 = '\x01';
        cVar1 = local_5;
      }
LAB_10023357:
      if (cVar1 == '\0') {
        return local_c;
      }
    }
  }
  cVar1 = (**(code **)(*(int *)(&DAT_100ba720)[param_1 * 0x8a] + 0x18))();
  if (cVar1 != '\0') {
    return local_c;
  }
  FUN_10022270(&local_5);
  if (*(int *)(&DAT_100ba8fc + iVar9) == 0) {
    puVar6 = *(undefined4 **)(&DAT_100ba8f8 + iVar9);
    local_c = puVar6;
    if (puVar6 == (undefined4 *)0x0) {
LAB_100233b9:
      if (puVar6 != (undefined4 *)0x0) {
        FUN_10023f5e(puVar6);
        FUN_100ad48c(local_c);
      }
      this = (void *)FUN_100ad475(0x88);
      if (this == (void *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = FUN_10023ee0(this,(&DAT_100ba720)[param_1 * 0x8a],
                              *(undefined4 *)(&DAT_100ba89c + iVar9),
                              *(undefined4 *)(&DAT_100ba8a0 + iVar9),
                              *(undefined4 *)(&DAT_100ba8b8 + iVar9),
                              *(undefined4 *)(&DAT_100ba8bc + iVar9),
                              (undefined4 *)(&DAT_100ba8d0 + iVar9),param_3);
      }
      *(undefined4 **)(&DAT_100ba8f8 + iVar9) = puVar6;
      if ((puVar6 != (undefined4 *)0x0) && (bVar2 = FUN_1002404f((int)puVar6), !bVar2)) {
        puVar6 = *(undefined4 **)(&DAT_100ba8f8 + iVar9);
        if (puVar6 != (undefined4 *)0x0) {
          FUN_10023f5e(puVar6);
          FUN_100ad48c(puVar6);
        }
        *(undefined4 *)(&DAT_100ba8f8 + iVar9) = 0;
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
      if ((local_28[0] != *(int *)(&DAT_100ba89c + iVar9)) ||
         (local_28[1] != *(int *)(&DAT_100ba8a0 + iVar9))) goto LAB_100233b9;
    }
    iVar4 = *(int *)(&DAT_100ba8f8 + iVar9);
    if (iVar4 != 0) {
      hdc = (HDC)0x0;
      bVar2 = FUN_10025f4c(iVar4 + 4);
      if ((bVar2) && (hdc = CreateCompatibleDC((HDC)0x0), hdc != (HDC)0x0)) {
        pvVar7 = SelectObject(hdc,*(HGDIOBJ *)(iVar4 + 0x48));
        *(HGDIOBJ *)(iVar4 + 0x50) = pvVar7;
      }
      *(HDC *)(&DAT_100ba8fc + iVar9) = hdc;
      *(undefined4 *)(&DAT_100ba900 + iVar9) = 0;
    }
    if (*(int *)(&DAT_100ba8fc + iVar9) == 0) goto LAB_1002349f;
  }
  *(int *)(&DAT_100ba900 + iVar9) = *(int *)(&DAT_100ba900 + iVar9) + 1;
LAB_1002349f:
  *param_4 = 1;
  local_c = *(undefined4 **)(&DAT_100ba8fc + iVar9);
  FUN_100222d0(&local_5);
  return local_c;
}


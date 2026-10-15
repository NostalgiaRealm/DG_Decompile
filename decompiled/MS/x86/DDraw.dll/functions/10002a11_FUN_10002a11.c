/*
 * FUN_10002a11 at 10002a11
 * undefined4 __fastcall FUN_10002a11(int param_1, HWND param_2, int * param_3, undefined4 * param_4)
 * Address ranges: 10002a11-10002c4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10002a11(int param_1,HWND param_2,int *param_3,undefined4 *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
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
  if ((&DAT_1006c49a)[iVar9] == '\0') {
    return 0;
  }
  pHVar3 = (HWND)(**(code **)(*param_3 + 0x14))();
  if ((param_2 == (HWND)0x0) || (param_2 == pHVar3)) {
    bVar2 = true;
    if (param_2 != (HWND)0x0) goto LAB_10002a56;
  }
  else {
    bVar2 = false;
LAB_10002a56:
    if (!bVar2) {
      iVar4 = GetClassNameA(param_2,(LPSTR)local_68,0x40);
      if (iVar4 == 0) {
        return local_c;
      }
      FUN_10060ca2((LPCSTR)local_68);
      iVar4 = 0;
      do {
        if (local_68[iVar4] != (&DAT_10062628)[iVar4]) {
          uVar8 = -(uint)(local_68[iVar4] < (byte)(&DAT_10062628)[iVar4]) | 1;
          goto LAB_10002aa2;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 9);
      uVar8 = 0;
LAB_10002aa2:
      cVar1 = uVar8 == 0;
      if ((uVar8 != 0) &&
         (local_5 = uVar8 == 0, pHVar5 = GetParent(param_2), cVar1 = local_5, pHVar3 == pHVar5)) {
        iVar4 = 0;
        do {
          if (local_68[iVar4] != "mciwndclass"[iVar4]) {
            local_5 = '\0';
            cVar1 = local_5;
            goto LAB_10002ae0;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 != 0xc);
        local_5 = '\x01';
        cVar1 = local_5;
      }
LAB_10002ae0:
      if (cVar1 == '\0') {
        return local_c;
      }
    }
  }
  cVar1 = (**(code **)(*(int *)(&DAT_1006c2b0)[param_1 * 0x8a] + 0x18))();
  if (cVar1 != '\0') {
    return local_c;
  }
  FUN_10001a9c(&local_5);
  if (*(int *)(&DAT_1006c48c + iVar9) == 0) {
    puVar6 = *(undefined4 **)(&DAT_1006c488 + iVar9);
    local_c = puVar6;
    if (puVar6 == (undefined4 *)0x0) {
LAB_10002b42:
      if (puVar6 != (undefined4 *)0x0) {
        FUN_100036d3(puVar6);
        FUN_10060be1(local_c);
      }
      this = (void *)FUN_10060bca(0x88);
      if (this == (void *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = FUN_10003655(this,(&DAT_1006c2b0)[param_1 * 0x8a],
                              *(undefined4 *)(&DAT_1006c42c + iVar9),
                              *(undefined4 *)(&DAT_1006c430 + iVar9),
                              *(undefined4 *)(&DAT_1006c448 + iVar9),
                              *(undefined4 *)(&DAT_1006c44c + iVar9),
                              (undefined4 *)(&DAT_1006c460 + iVar9),param_3);
      }
      *(undefined4 **)(&DAT_1006c488 + iVar9) = puVar6;
      if ((puVar6 != (undefined4 *)0x0) && (bVar2 = FUN_100037c7((int)puVar6), !bVar2)) {
        puVar6 = *(undefined4 **)(&DAT_1006c488 + iVar9);
        if (puVar6 != (undefined4 *)0x0) {
          FUN_100036d3(puVar6);
          FUN_10060be1(puVar6);
        }
        *(undefined4 *)(&DAT_1006c488 + iVar9) = 0;
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
      if ((local_28[0] != *(int *)(&DAT_1006c42c + iVar9)) ||
         (local_28[1] != *(int *)(&DAT_1006c430 + iVar9))) goto LAB_10002b42;
    }
    iVar4 = *(int *)(&DAT_1006c488 + iVar9);
    if (iVar4 != 0) {
      hdc = (HDC)0x0;
      bVar2 = FUN_10005876((void *)(iVar4 + 4),(HANDLE)0x0,0,0,'\0');
      if ((bVar2) && (hdc = CreateCompatibleDC((HDC)0x0), hdc != (HDC)0x0)) {
        pvVar7 = SelectObject(hdc,*(HGDIOBJ *)(iVar4 + 0x48));
        *(HGDIOBJ *)(iVar4 + 0x50) = pvVar7;
      }
      *(HDC *)(&DAT_1006c48c + iVar9) = hdc;
      *(undefined4 *)(&DAT_1006c490 + iVar9) = 0;
    }
    if (*(int *)(&DAT_1006c48c + iVar9) == 0) goto LAB_10002c29;
  }
  *(int *)(&DAT_1006c490 + iVar9) = *(int *)(&DAT_1006c490 + iVar9) + 1;
LAB_10002c29:
  lpCriticalSection = DAT_1006c254;
  *param_4 = 1;
  local_c = *(undefined4 **)(&DAT_1006c48c + iVar9);
  LeaveCriticalSection(lpCriticalSection);
  return local_c;
}


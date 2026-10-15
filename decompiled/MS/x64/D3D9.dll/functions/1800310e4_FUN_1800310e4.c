/*
 * FUN_1800310e4 at 1800310e4
 * LRESULT __fastcall FUN_1800310e4(longlong * param_1, longlong param_2, HWND param_3, UINT param_4, WPARAM param_5, LPARAM param_6)
 * Address ranges: 1800310e4-1800312b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LRESULT FUN_1800310e4(longlong *param_1,longlong param_2,HWND param_3,UINT param_4,WPARAM param_5,
                     LPARAM param_6)

{
  HCURSOR hCursor;
  bool bVar1;
  char cVar2;
  HCURSOR pHVar3;
  HCURSOR hCursor_00;
  HCURSOR pHVar4;
  undefined8 uVar5;
  LRESULT LVar6;
  undefined1 uVar7;
  
  LVar6 = 1;
  bVar1 = FUN_1800312b8(0);
  if (!bVar1) {
    return 1;
  }
  *(undefined1 *)(param_2 + 0x5d) = 1;
  if (((short)param_6 == 1) || (bVar1 = false, *(char *)((longlong)param_1 + 0x43) != '\0')) {
    bVar1 = true;
  }
  pHVar3 = (HCURSOR)(**(code **)(*param_1 + 0x70))(param_1);
  hCursor_00 = (HCURSOR)FUN_180031098();
  if ((pHVar3 == (HCURSOR)0x0) || (!bVar1)) {
    if ((short)param_6 != 0) {
      LVar6 = CallWindowProcW(*(WNDPROC *)(param_2 + 0x20),param_3,param_4,param_5,param_6);
    }
    if (pHVar3 != (HCURSOR)0x0) goto LAB_1800311c2;
  }
  else {
LAB_1800311c2:
    if (bVar1) {
      pHVar4 = GetCursor();
      cVar2 = (**(code **)(*param_1 + 0x78))(param_1);
      hCursor = hCursor_00;
      if (cVar2 != '\0') {
        (**(code **)(*param_1 + 0x88))(param_1,0);
        hCursor = pHVar3;
      }
      if (pHVar4 != hCursor_00) {
        if (*(code **)(DAT_180111f48 + 0x78) == (code *)0x0) {
          SetCursor(hCursor);
        }
        else {
          (**(code **)(DAT_180111f48 + 0x78))();
        }
      }
      goto LAB_18003129b;
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x78))(param_1);
  pHVar3 = (HCURSOR)param_1[5];
  if (cVar2 == '\0') {
    if (pHVar3 == (HCURSOR)0xffffffffffffffff) {
      pHVar3 = GetCursor();
    }
    if (pHVar3 == hCursor_00) {
      (**(code **)(*param_1 + 0x90))(param_1);
    }
    else {
      if (*(code **)(DAT_180111f48 + 0x78) == (code *)0x0) {
        SetCursor(hCursor_00);
      }
      else {
        (**(code **)(DAT_180111f48 + 0x78))();
      }
      (**(code **)(*param_1 + 0x80))(param_1,pHVar3);
    }
    uVar5 = FUN_180030d78();
    uVar7 = (undefined1)uVar5;
  }
  else {
    uVar7 = 0;
    if (pHVar3 != (HCURSOR)0xffffffffffffffff) {
      if (*(code **)(DAT_180111f48 + 0x78) == (code *)0x0) {
        SetCursor(pHVar3);
      }
      else {
        (**(code **)(DAT_180111f48 + 0x78))();
      }
      param_1[5] = -1;
      uVar7 = 0;
    }
  }
  (**(code **)(*param_1 + 0x88))(param_1,uVar7);
LAB_18003129b:
  *(undefined1 *)(param_2 + 0x5d) = 0;
  FUN_180031344();
  return LVar6;
}


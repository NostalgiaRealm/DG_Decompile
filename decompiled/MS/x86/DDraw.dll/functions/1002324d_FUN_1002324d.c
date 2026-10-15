/*
 * FUN_1002324d at 1002324d
 * undefined4 __stdcall FUN_1002324d(int param_1, undefined4 * param_2)
 * Address ranges: 1002324d-10023307
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1002324d(int param_1,undefined4 *param_2)

{
  int *piVar1;
  BOOL BVar2;
  HRGN hrgn;
  HDC hdc;
  undefined4 uVar3;
  
  BVar2 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar2 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar3 = 0x88760082;
  if ((*(char *)(param_1 + 0x5c) != '\0') && (uVar3 = 0x80070057, param_2 != (undefined4 *)0x0)) {
    uVar3 = 0;
    *param_2 = 0;
    if (*(int *)(param_1 + 0x4c) != 0) {
      hrgn = CreateRectRgn(0,0,0,0);
      hdc = GetDCEx(*(HWND *)(param_1 + 0x4c),(HRGN)0x0,0x10000);
      GetRandomRgn(hdc,hrgn,4);
      ReleaseDC(*(HWND *)(param_1 + 0x4c),hdc);
      piVar1 = (int *)(param_1 + 0x50);
      if (((hrgn == (HRGN)0x0) || (*piVar1 == 0)) ||
         (BVar2 = EqualRgn(hrgn,(HRGN)*piVar1), BVar2 == 0)) {
        *param_2 = 1;
      }
      DeleteObject((HGDIOBJ)*piVar1);
      *piVar1 = (int)hrgn;
      uVar3 = 0;
    }
  }
  LeaveCriticalSection(DAT_1006c254);
  return uVar3;
}


/*
 * FUN_100230b6 at 100230b6
 * undefined4 __stdcall FUN_100230b6(int param_1, RECT * param_2, LPRGNDATA param_3, uint * param_4)
 * Address ranges: 100230b6-100231ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100230b6(int param_1,RECT *param_2,LPRGNDATA param_3,uint *param_4)

{
  BOOL BVar1;
  HRGN hrgnDst;
  HRGN hrgnSrc2;
  DWORD DVar2;
  undefined4 uVar3;
  
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar3 = 0x88760082;
  if ((*(char *)(param_1 + 0x5c) == '\0') ||
     (((uVar3 = 0x8876006e, *(int *)(param_1 + 0x54) == 0 && (*(int *)(param_1 + 0x4c) == 0)) ||
      (uVar3 = 0x80070057, param_4 == (uint *)0x0)))) goto LAB_10023198;
  uVar3 = 0x8007000e;
  hrgnDst = FUN_1002305d(param_1);
  if (hrgnDst == (HRGN)0x0) goto LAB_10023198;
  if (param_2 == (RECT *)0x0) {
LAB_10023142:
    DVar2 = GetRegionData(hrgnDst,0,(LPRGNDATA)0x0);
    if (param_3 == (LPRGNDATA)0x0) {
      *param_4 = DVar2;
      uVar3 = 0;
    }
    else {
      uVar3 = 0x88760236;
      if (DVar2 <= *param_4) {
        uVar3 = 0;
        (param_3->rdh).nCount = 0;
        (param_3->rdh).nRgnSize = 0;
        (param_3->rdh).rcBound.left = 0;
        (param_3->rdh).rcBound.top = 0;
        (param_3->rdh).rcBound.right = 0;
        (param_3->rdh).rcBound.bottom = 0;
        (param_3->rdh).dwSize = 0x20;
        (param_3->rdh).iType = 1;
        GetRegionData(hrgnDst,*param_4,param_3);
      }
    }
  }
  else {
    hrgnSrc2 = CreateRectRgnIndirect(param_2);
    if (hrgnSrc2 != (HRGN)0x0) {
      CombineRgn(hrgnDst,hrgnDst,hrgnSrc2,1);
      DeleteObject(hrgnSrc2);
      goto LAB_10023142;
    }
  }
  DeleteObject(hrgnDst);
LAB_10023198:
  LeaveCriticalSection(DAT_1006c254);
  return uVar3;
}


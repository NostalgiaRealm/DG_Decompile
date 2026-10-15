/*
 * FUN_10023237 at 10023237
 * bool __fastcall FUN_10023237(HMONITOR param_1, LPMONITORINFO param_2)
 * Address ranges: 10023237-10023287
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_10023237(HMONITOR param_1,LPMONITORINFO param_2)

{
  BOOL BVar1;
  int iVar2;
  tagMONITORINFO *ptVar3;
  tagMONITORINFO local_2c;
  
  if (param_1 != (HMONITOR)0x0) {
    if (param_2 == (LPMONITORINFO)0x0) {
      local_2c.cbSize = 0x28;
      ptVar3 = &local_2c;
      for (iVar2 = 9; ptVar3 = (tagMONITORINFO *)&ptVar3->rcMonitor, iVar2 != 0; iVar2 = iVar2 + -1)
      {
        ((RECT *)ptVar3)->left = 0;
      }
      BVar1 = GetMonitorInfoW(param_1,&local_2c);
      return BVar1 != 0;
    }
    param_2->cbSize = 0x28;
    BVar1 = GetMonitorInfoW(param_1,param_2);
    if (BVar1 != 0) {
      return true;
    }
  }
  return false;
}


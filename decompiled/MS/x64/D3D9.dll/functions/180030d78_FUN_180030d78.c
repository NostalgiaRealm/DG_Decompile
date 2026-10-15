/*
 * FUN_180030d78 at 180030d78
 * undefined8 __fastcall FUN_180030d78(void)
 * Address ranges: 180030d78-180030df7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180030d78(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  HCURSOR pHVar2;
  HCURSOR hCursor;
  ulonglong uVar3;
  bool bVar4;
  tagCURSORINFO local_28;
  
  local_28.cbSize = 0x18;
  bVar4 = false;
  BVar1 = GetCursorInfo(&local_28);
  uVar3 = CONCAT44(extraout_var,BVar1);
  if (BVar1 != 0) {
    if (local_28.hCursor == (HCURSOR)0x0) {
      pHVar2 = GetCursor();
      hCursor = (HCURSOR)FUN_180031098();
      if (pHVar2 != (HCURSOR)0x0) {
        hCursor = pHVar2;
      }
      if (*(code **)(DAT_180111f48 + 0x78) == (code *)0x0) {
        SetCursor(hCursor);
      }
      else {
        (**(code **)(DAT_180111f48 + 0x78))();
      }
      local_28.cbSize = 0x18;
      local_28.flags = 0;
      GetCursorInfo(&local_28);
    }
    uVar3 = (ulonglong)local_28._0_8_ >> 0x20 & 0xffffff03;
    bVar4 = (char)uVar3 == '\x01';
  }
  return CONCAT71((int7)(uVar3 >> 8),bVar4);
}


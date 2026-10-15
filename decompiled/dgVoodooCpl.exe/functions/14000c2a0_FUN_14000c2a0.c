/*
 * FUN_14000c2a0 at 14000c2a0
 * undefined __fastcall FUN_14000c2a0(longlong * param_1, undefined8 param_2)
 * Address ranges: 14000c2a0-14000c351
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000c2a0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  MENUITEMINFOW local_58;
  
  FUN_14000b108(*param_1,CONCAT71((int7)((ulonglong)param_2 >> 8),*(undefined1 *)(*param_1 + 0x490))
               );
  (*(code *)**(undefined8 **)(*param_1 + 0x80))();
  (**(code **)(*(longlong *)(*param_1 + 0x80) + 8))();
  lVar1 = *param_1;
  if (*(HMENU *)(lVar1 + 0x268) != (HMENU)0x0) {
    local_58.wID = *(UINT *)(lVar1 + 0x27c);
    local_58.hSubMenu = (HMENU)0x0;
    local_58.dwItemData = 0;
    local_58.cch = 0;
    local_58.fState = -(uint)(*(char *)(lVar1 + 0x490) != '\0') & 8;
    local_58.hbmpItem = (HBITMAP)0x0;
    local_58.cbSize = 0x50;
    local_58.fMask = 0x101;
    local_58.fType = 0;
    local_58.hbmpChecked = (HBITMAP)0x0;
    local_58.hbmpUnchecked = (HBITMAP)0x0;
    local_58.dwTypeData = L"Show all sections of the configuration";
    SetMenuItemInfoW(*(HMENU *)(lVar1 + 0x268),local_58.wID,0,&local_58);
  }
  return;
}


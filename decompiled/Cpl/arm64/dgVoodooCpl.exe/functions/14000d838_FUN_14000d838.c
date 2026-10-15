/*
 * FUN_14000d838 at 14000d838
 * undefined __cdecl FUN_14000d838(longlong * param_1, undefined8 param_2)
 * Address ranges: 14000d838-14000d95b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000d838(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  MENUITEMINFOW local_60;
  
  local_70 = 0;
  lVar5 = *param_1;
  local_68 = 0;
  local_90 = 0;
  local_80 = 0x100000000;
  uStack_78 = 2;
  local_a0 = 0x100000000;
  uStack_98 = 2;
  local_88 = 0;
  bVar4 = *(char *)(lVar5 + 0x490) != '\0';
  uVar1 = *(uint *)(lVar5 + 600) & 0xfffffff7;
  if (bVar4) {
    uVar1 = *(uint *)(lVar5 + 600) | 8;
  }
  uVar2 = uVar1 & 0xffffffef;
  if (bVar4) {
    uVar2 = uVar1 | 0x10;
  }
  uVar1 = uVar2 & 0xffffffdf;
  if (bVar4) {
    uVar1 = uVar2 | 0x20;
  }
  uVar2 = uVar1 & 0xffffffbf;
  if (bVar4) {
    uVar2 = uVar1 | 0x40;
  }
  *(uint *)(lVar5 + 600) = uVar2;
  puVar3 = &local_a0;
  if (bVar4) {
    puVar3 = &local_80;
  }
  FUN_140010220(lVar5,param_2,(tagPOINT *)(lVar5 + 0x150),
                *(uint *)((longlong)puVar3 + (ulonglong)*(uint *)(lVar5 + 0x260) * 4));
  (*(code *)**(undefined8 **)(*param_1 + 0x80))(*param_1 + 0x80);
  (**(code **)(*(longlong *)(*param_1 + 0x80) + 8))(*param_1 + 0x80);
  lVar5 = *param_1;
  if (*(HMENU *)(lVar5 + 0x268) != (HMENU)0x0) {
    local_60.wID = *(UINT *)(lVar5 + 0x27c);
    local_60.cbSize = 0x50;
    local_60.fMask = 0x101;
    local_60.hSubMenu = (HMENU)0x0;
    local_60.hbmpChecked = (HBITMAP)0x0;
    local_60.hbmpUnchecked = (HBITMAP)0x0;
    local_60.dwItemData = 0;
    local_60.cch = 0;
    local_60.hbmpItem = (HBITMAP)0x0;
    local_60.fState = 8;
    if (*(char *)(lVar5 + 0x490) == '\0') {
      local_60.fState = 0;
    }
    local_60.fType = 0;
    local_60.dwTypeData = L"Show all sections of the configuration";
    SetMenuItemInfoW(*(HMENU *)(lVar5 + 0x268),local_60.wID,0,&local_60);
  }
  return;
}


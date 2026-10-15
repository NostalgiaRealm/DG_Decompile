/*
 * FUN_180058600 at 180058600
 * DWORD * __cdecl FUN_180058600(longlong param_1, DWORD * param_2, ulonglong param_3, undefined4 param_4)
 * Address ranges: 180058600-180058787
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD * FUN_180058600(longlong param_1,DWORD *param_2,ulonglong param_3,undefined4 param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  DWORD DVar5;
  DWORD DVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong *local_1c0;
  DWORD local_1b8;
  DWORD DStack_1b4;
  uint local_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined1 auStack_198 [8];
  uint local_190;
  uint uStack_18c;
  DEVMODEW DStack_178;
  WCHAR aWStack_98 [52];
  
  lVar9 = *(longlong *)(param_1 + 0x10);
  local_1c0 = (longlong *)0x0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  plVar4 = *(longlong **)(lVar9 + (param_3 & 0xffffffff) * 0x28 + 0x18);
  iVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,param_4,&local_1c0);
  if (iVar3 < 0) {
    local_1c0 = (longlong *)0x0;
  }
  plVar4 = local_1c0;
  DStack_178.dmSize = 0xdc;
  DStack_178.dmDriverExtra = 0;
  if (local_1c0 == (longlong *)0x0) {
    uVar8 = 0;
    uVar7 = 0;
    EnumDisplaySettingsW((LPCWSTR)0x0,0xffffffff,&DStack_178);
  }
  else {
    (**(code **)(*local_1c0 + 0x38))(local_1c0,aWStack_98);
    EnumDisplaySettingsW(aWStack_98,0xffffffff,&DStack_178);
    local_1a4 = 1;
    local_1b8 = DStack_178.dmPelsWidth;
    DStack_1b4 = DStack_178.dmPelsHeight;
    local_1b0 = DStack_178.dmDisplayFrequency;
    uStack_1ac = 1;
    local_1a8 = *(undefined4 *)(&DAT_1800631b8 + (ulonglong)*(uint *)(lVar9 + 0x678) * 4);
    iVar3 = (**(code **)(*plVar4 + 0x48))(plVar4,&local_1b8,auStack_198,0);
    uVar8 = DStack_178.dmDisplayFrequency;
    uVar7 = 1;
    if (-1 < iVar3) {
      uVar8 = local_190;
      uVar7 = uStack_18c;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((*(DWORD *)(lVar9 + 0x668) == 0) ||
     (DVar6 = *(DWORD *)(lVar9 + 0x668), DVar5 = *(DWORD *)(lVar9 + 0x66c),
     *(DWORD *)(lVar9 + 0x66c) == 0)) {
    DVar6 = DStack_178.dmPelsWidth;
    DVar5 = DStack_178.dmPelsHeight;
  }
  if ((*(uint *)(lVar9 + 0x670) != 0) && (*(uint *)(lVar9 + 0x674) != 0)) {
    uVar8 = *(uint *)(lVar9 + 0x670);
    uVar7 = *(uint *)(lVar9 + 0x674);
  }
  *param_2 = DVar6;
  param_2[1] = DVar5;
  param_2[2] = uVar8;
  param_2[3] = uVar7;
  if (uVar7 != 0) {
    uVar1 = 0;
    if (uVar7 != 0) {
      uVar1 = uVar8 / uVar7;
    }
    param_2[4] = uVar1;
    param_2[5] = 0x20;
    return param_2;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x180058764);
  (*pcVar2)();
}


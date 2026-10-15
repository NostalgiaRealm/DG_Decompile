/*
 * FUN_1800df23c at 1800df23c
 * undefined8 __fastcall FUN_1800df23c(longlong param_1, longlong * param_2, DWORD * param_3)
 * Address ranges: 1800df23c-1800df371
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800df23c(longlong param_1,longlong *param_2,DWORD *param_3)

{
  DWORD DVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  DWORD local_1b8;
  DWORD local_1b4;
  DWORD local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined1 local_198 [8];
  DWORD local_190;
  DWORD local_18c;
  DEVMODEW local_178;
  WCHAR local_98 [52];
  
  local_178.dmSize = 0xdc;
  local_178.dmDriverExtra = 0;
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  if (param_2 == (longlong *)0x0) {
    DVar4 = 0;
    DVar5 = 0;
    EnumDisplaySettingsW((LPCWSTR)0x0,0xffffffff,&local_178);
  }
  else {
    (**(code **)(*param_2 + 0x38))(param_2,local_98);
    EnumDisplaySettingsW(local_98,0xffffffff,&local_178);
    local_1b8 = local_178.dmPelsWidth;
    local_1b4 = local_178.dmPelsHeight;
    local_1b0 = local_178.dmDisplayFrequency;
    local_1ac = 1;
    local_1a4 = 1;
    local_1a8 = *(undefined4 *)(&DAT_1801003d8 + (ulonglong)*(uint *)(param_1 + 0x678) * 4);
    iVar2 = (**(code **)(*param_2 + 0x48))(param_2,&local_1b8,local_198,0);
    DVar4 = local_178.dmDisplayFrequency;
    DVar5 = 1;
    if (-1 < iVar2) {
      DVar4 = local_190;
      DVar5 = local_18c;
    }
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  if ((*(DWORD *)(param_1 + 0x668) == 0) || (DVar1 = *(DWORD *)(param_1 + 0x66c), DVar1 == 0)) {
    *param_3 = local_178.dmPelsWidth;
    param_3[1] = local_178.dmPelsHeight;
  }
  else {
    *param_3 = *(DWORD *)(param_1 + 0x668);
    param_3[1] = DVar1;
  }
  if ((*(DWORD *)(param_1 + 0x670) == 0) ||
     (DVar3 = *(DWORD *)(param_1 + 0x674), DVar1 = *(DWORD *)(param_1 + 0x670),
     *(DWORD *)(param_1 + 0x674) == 0)) {
    DVar3 = DVar5;
    DVar1 = DVar4;
  }
  param_3[2] = DVar1;
  param_3[3] = DVar3;
  return CONCAT71((uint7)(uint3)(DVar1 >> 8),1);
}


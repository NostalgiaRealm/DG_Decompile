/*
 * FUN_100431be at 100431be
 * undefined4 __thiscall FUN_100431be(void * this, int * param_1, DWORD * param_2)
 * Address ranges: 100431be-100432d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100431be(void *this,int *param_1,DWORD *param_2)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  WCHAR local_178 [46];
  DEVMODEW local_11c;
  undefined1 local_40 [8];
  DWORD local_38;
  DWORD *local_34;
  DWORD local_24;
  DWORD local_20;
  DWORD local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  DWORD local_8;
  
  pDVar1 = param_2;
  local_11c.dmSize = 0xdc;
  local_11c.dmDriverExtra = 0;
  local_8 = 0;
  param_2 = (DWORD *)0x0;
  *pDVar1 = 0;
  pDVar1[1] = 0;
  pDVar1[2] = 0;
  pDVar1[3] = 0;
  if (param_1 == (int *)0x0) {
    EnumDisplaySettingsW((LPCWSTR)0x0,0xffffffff,&local_11c);
  }
  else {
    (**(code **)(*param_1 + 0x1c))(param_1,local_178);
    EnumDisplaySettingsW(local_178,0xffffffff,&local_11c);
    local_24 = local_11c.dmPelsWidth;
    local_20 = local_11c.dmPelsHeight;
    local_8 = local_11c.dmDisplayFrequency;
    local_1c = local_11c.dmDisplayFrequency;
    local_18 = 1;
    local_10 = 1;
    local_14 = *(undefined4 *)(&DAT_10051e28 + *(int *)((int)this + 0x4e0) * 4);
    local_c = 0;
    param_2 = (DWORD *)0x1;
    iVar2 = (**(code **)(*param_1 + 0x24))(param_1,&local_24,local_40,0);
    if (-1 < iVar2) {
      local_8 = local_38;
      param_2 = local_34;
    }
    (**(code **)(*param_1 + 8))(param_1);
  }
  if ((*(DWORD *)((int)this + 0x4d0) == 0) || (DVar3 = *(DWORD *)((int)this + 0x4d4), DVar3 == 0)) {
    *pDVar1 = local_11c.dmPelsWidth;
    pDVar1[1] = local_11c.dmPelsHeight;
  }
  else {
    *pDVar1 = *(DWORD *)((int)this + 0x4d0);
    pDVar1[1] = DVar3;
  }
  if ((*(DWORD *)((int)this + 0x4d8) == 0) ||
     (DVar3 = *(DWORD *)((int)this + 0x4d8), pDVar4 = *(DWORD **)((int)this + 0x4dc),
     *(DWORD **)((int)this + 0x4dc) == (DWORD *)0x0)) {
    DVar3 = local_8;
    pDVar4 = param_2;
  }
  pDVar1[2] = DVar3;
  pDVar1[3] = (DWORD)pDVar4;
  return CONCAT31((int3)(DVar3 >> 8),1);
}


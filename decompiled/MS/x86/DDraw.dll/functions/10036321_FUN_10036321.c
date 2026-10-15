/*
 * FUN_10036321 at 10036321
 * undefined4 __thiscall FUN_10036321(void * this, HWND param_1, int param_2, int * param_3)
 * Address ranges: 10036321-100363fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10036321(void *this,HWND param_1,int param_2,int *param_3)

{
  HWND in_EAX;
  HWND pHVar1;
  code *pcVar2;
  DWORD DVar3;
  code *pcVar4;
  void *local_c;
  void *pvStack_8;
  
  local_c = this;
  pvStack_8 = this;
  if (*(char *)((int)this + 0x10) == '\0') {
    if (((param_1 != (HWND)0x0) && (in_EAX = (HWND)FUN_100364e7(param_1), (char)in_EAX != '\0')) &&
       (param_2 == 8)) {
      FUN_10036255(this,(int *)&local_c);
      pHVar1 = (HWND)0x0;
      if (local_c == (void *)0x0) {
        pHVar1 = param_1;
      }
      pcVar2 = (code *)FUN_10026cef(*(void **)this,pHVar1,8,'\0');
      pcVar4 = pcVar2;
      if (-1 < (int)pcVar2) {
        *(HWND *)((int)this + 4) = param_1;
        *(bool *)((int)this + 0x11) = local_c == (void *)0x0;
        DVar3 = GetWindowThreadProcessId(param_1,(LPDWORD)0x0);
        *(DWORD *)((int)this + 8) = DVar3;
        if (*(char *)((int)this + 0x10) == '\0') {
          DAT_1006c280 = DAT_1006c280 + 1;
          DAT_1006c244 = DAT_1006c244 + 1;
          *(undefined1 *)((int)this + 0x10) = 1;
        }
        pcVar4 = (code *)GetWindowLongW(param_1,-4);
        if (pcVar4 != FUN_10036302) {
          pcVar4 = (code *)SetWindowLongW(param_1,-4,0x10036302);
          DAT_1006c294 = pcVar4;
        }
      }
      *param_3 = (int)pcVar2;
      return CONCAT31((int3)((uint)pcVar4 >> 8),1);
    }
  }
  else {
    in_EAX = param_1;
    if (param_1 != *(HWND *)((int)this + 4)) {
      SetWindowLongW(param_1,-4,(LONG)DAT_1006c294);
      in_EAX = (HWND)FUN_100362d9((int)this);
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
    }
  }
  return (uint)in_EAX & 0xffffff00;
}

